#ifndef COMMON_H
#define COMMON_H

#ifdef _WIN32
#include <limits.h>
#include <intrin.h>
typedef unsigned __int64  uint64_t;

#else
#include <stdint.h>
#endif

typedef struct regs_t
{
    uint64_t rax;
    uint64_t rbx;
    uint64_t rcx;
    uint64_t rdx;
} regs_t;

#endif /* COMMON_H */
