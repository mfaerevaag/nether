#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "common.h"
#include "cpuid.h"


int feature_cpuid()
{
    int ret;
    uint32_t tsc_bit;
    regs_t regs;

    /* get tsc bit */
    cpuid_get(CPUID_GETFEATURES, &regs);
    tsc_bit  = (regs.rdx & CPUID_FEAT_EDX_TSC);
    printf("tsc bit = %d\n", tsc_bit);

    /* if tsc bit not set, we found ether */
    ret = tsc_bit == 0 ? 0 : 1;

    return ret;
}


int main(int argc, char *argv[])
{
    int ret;
    char *vendor;

    /* vendor */
    vendor = cpuid_get_vendorstring();
    printf("vendor = %s\n", vendor);

    /* check intel arch */
    if (strcmp(vendor, CPUID_VENDOR_INTEL) != 0) {
        printf("not intel...\n");
        exit(0);
    }

    /* cpuid */
    ret = feature_cpuid();
    if (ret == 0) {
        printf("ether detected!\n");
    }

    /* clean up */
    free(vendor);

    return 0;
}
