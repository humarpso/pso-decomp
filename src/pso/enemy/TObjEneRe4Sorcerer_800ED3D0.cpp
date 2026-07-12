#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 set_hold_flags__18TObjEneRe4SorcererFPv();
void TObjEneRe4Sorcerer__sub_800ED408(void* p);
void TObjEneRe4Sorcerer__sub_800ED418(void* p);
void TObjEneRe4Sorcerer__sub_800ED47C(void* p);
void* TObjEneRe4Sorcerer__sub_800ED488(void* p);
s32 TObjEneRe4Sorcerer__sub_800ED490(void* p);

void set_flag_and_notify__18TObjEneRe4SorcererFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) | 0x10);
    if (!(M2C_FIELD(arg0, s32 *, 0x3CC) & 4)) {
        set_hold_flags__18TObjEneRe4SorcererFPv();
    }
}
void TObjEneRe4Sorcerer__sub_800ED408(void* p) { *(u32*)((char*)p + 0x3cc) &= 0xfffffeff; }
void TObjEneRe4Sorcerer__sub_800ED418(void* p) { *(u32*)((char*)p + 0x3cc) |= 0x2; }

}
