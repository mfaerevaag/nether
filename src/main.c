#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "common.h"
#include "cpuid.h"


int main(int argc, char *argv[])
{
    char *vendor;

    vendor = cpuid_get_vendorstring();

    printf("vendor = %s\n", vendor);

    /* clean up */
    free(vendor);

    return 0;
}
