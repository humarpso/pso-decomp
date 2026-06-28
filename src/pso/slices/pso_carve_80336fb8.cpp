#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8032E770(void * a0 = 0, s32 a1 = 0);
s32 fn_8032EAE4(void *);
s32 fn_8032EBB4(void *);
s32 fn_8032ECE0(void *);
s32 fn_8032F5FC(void *);
s32 fn_8032F690();
s32 fn_803301B8(void * a0 = 0, s32 a1 = 0);
s32 fn_8032F824();
s32 fn_8032FB84();
int fn_8032E7B4(void*, void*);
void fn_80336FB8(void* p);
void fn_80337108(void);
void fn_80337160(void);
void fn_803371B4(void* p);

void fn_80336FB8(void* p) { *(int*)((char*)p + 0x3cc) = 0; fn_8032E7B4(p, (void*)0); }
void fn_80336FE4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) - 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3CC) < 0) {
        fn_8032E770(arg0, 3);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x40C) != 0) {
            fn_803301B8(arg0, 1);
            return;
        }
        fn_803301B8(arg0, 2);
    }
}
int fn_80337054(void) { return 0; }
void fn_803370A4(void *arg0) {
    fn_8032F690();
    fn_8032F5FC(arg0);
    fn_8032ECE0(arg0);
    fn_8032EBB4(arg0);
    fn_8032EAE4(arg0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x40C) != 0) {
        fn_803301B8(arg0, 1);
    }
}
void fn_80337108(void) {  }
void fn_8033710C(void *arg0) {
    fn_8032F824();
    fn_8032ECE0(arg0);
    fn_8032EAE4(arg0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x40C) == 0) {
        fn_803301B8(arg0, 2);
    }
}
void fn_80337160(void) {  }
void fn_80337164(void *arg0) {
    fn_8032FB84();
    M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3CC) >= 4) {
        fn_803301B8(arg0, 1);
    }
}
void fn_803371B4(void* p) { *(s32*)((char*)p + 0x3cc) = 0; }

}
