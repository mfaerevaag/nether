#include "cpuid.h"

char *cpuid_get_vendorstring()
{
    char vendor[13];
    regs_t regs;

    cpuid_get(CPUID_GETVENDORSTRING, &regs);

    memcpy(vendor, &regs.rbx, 4);
    memcpy(&(vendor[4]), &regs.rdx, 4);
    memcpy(&(vendor[8]), &regs.rcx, 4);

    vendor[12] = '\0';

    return strdup(vendor);
}
