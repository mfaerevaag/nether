#include <stdio.h>
#include <string.h>

#include "common.h"
#include "cpuid.h"


int main(int argc, char *argv[])
{
    char vendor[13];
    regs_t regs;

    cpuid_get(CPUID_GETVENDORSTRING, &regs);

    memcpy(vendor, &regs.rbx, 4);
    memcpy(&(vendor[4]), &regs.rdx, 4);
    memcpy(&(vendor[8]), &regs.rcx, 4);

    vendor[12] = '\0';

    printf("vendor = %s\n", vendor);

    return 0;
}
