#ifndef _DOLPHIN_TYPES_H_
#define _DOLPHIN_TYPES_H_

typedef signed   char          s8;
typedef unsigned char          u8;
typedef signed   short int     s16;
typedef unsigned short int     u16;
typedef signed   long          s32;
typedef unsigned long          u32;
typedef signed   long long int s64;
typedef unsigned long long int u64;

typedef volatile u8  vu8;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef volatile u64 vu64;
typedef volatile s8  vs8;
typedef volatile s16 vs16;
typedef volatile s32 vs32;
typedef volatile s64 vs64;

typedef float  f32;
typedef double f64;

typedef volatile f32 vf32;
typedef volatile f64 vf64;

typedef char *Ptr;

typedef int BOOL;

typedef unsigned int uint;

#define FALSE 0
#define TRUE 1

#define AT_ADDRESS(addr) : (addr)

#ifndef ATTRIBUTE_ALIGN
#if defined(__MWERKS__) || defined(__GNUC__)
#define ATTRIBUTE_ALIGN(num) __attribute__((aligned(num)))
#elif defined(_MSC_VER)
#define ATTRIBUTE_ALIGN(num)
#else
#error unknown compiler
#endif
#endif

#ifndef DECL_WEAK
#define DECL_WEAK __declspec(weak)
#endif

#ifndef NULL
#ifdef __cplusplus
#if __cplusplus >= 201103L
#define NULL nullptr
#else
#define NULL 0
#endif
#else
#define NULL ((void*)0)
#endif
#endif

#define __REGISTER register

#include <cstddef>

#endif
