#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TObjEneDf2Bringer__sub_8009A2A0(void);
void *TObjEneDf2Bringer__sub_8009A340(void *arg0, s16 arg1);
void* init__17TObjEneDf2BringerFPviii(void* a0, int a1, int a2, int a3);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
int fn_800BC4C8(void);

    extern unsigned char lbl_8048FE08[];
    extern int lbl_805D29AC;
    extern const float lbl_805D9860;
void* init__17TObjEneDf2BringerFPviii(void* a0, int a1, int a2, int a3) { fn_800BC4C8(); *(int*)((char*)a0 + 0x18) = (int)lbl_8048FE08; *(int*)((char*)a0 + 0x0) = lbl_805D29AC; *(int*)((char*)a0 + 0xb0) = 0; *(float*)((char*)a0 + 0xd0) = lbl_805D9860; *(float*)((char*)a0 + 0xc8) = lbl_805D9860; *(float*)((char*)a0 + 0xcc) = lbl_805D9860; *(int*)((char*)a0 + 0xb4) = 0; *(float*)((char*)a0 + 0x38) = lbl_805D9860; *(float*)((char*)a0 + 0x3c) = lbl_805D9860; *(float*)((char*)a0 + 0x40) = lbl_805D9860; *(float*)((char*)a0 + 0xb8) = lbl_805D9860; *(float*)((char*)a0 + 0xbc) = lbl_805D9860; *(float*)((char*)a0 + 0xc0) = lbl_805D9860; *(int*)((char*)a0 + 0xc4) = a3; *(int*)((char*)*(int*)((char*)a0 + 0xa4) + 0x14) = 1; return a0; }

void TObjEneDf2Bringer__sub_8009A2A0(void) {  }

extern M2C_UNK lbl_8048FE64[];

void *TObjEneDf2Bringer__sub_8009A340(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8048FE64;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
