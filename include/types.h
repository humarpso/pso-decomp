#ifndef TYPES_H
#define TYPES_H

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed long s32;
typedef unsigned long u32;
typedef signed long long s64;
typedef unsigned long long u64;

typedef float f32;
typedef double f64;

typedef volatile u8 vu8;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef volatile u64 vu64;
typedef volatile s8 vs8;
typedef volatile s16 vs16;
typedef volatile s32 vs32;
typedef volatile s64 vs64;
typedef volatile f32 vf32;
typedef volatile f64 vf64;

typedef int BOOL;
#define TRUE 1
#define FALSE 0

#ifndef NULL
#define NULL ((void*)0)
#endif

typedef unsigned long size_t;

#define AT_ADDRESS(addr) : (addr)
#define ATTRIBUTE_ALIGN(num) __attribute__((aligned(num)))
#define DECL_WEAK __declspec(weak)
#define __REGISTER register

#endif
