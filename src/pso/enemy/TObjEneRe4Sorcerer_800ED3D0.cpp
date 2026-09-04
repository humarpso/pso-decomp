#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TObjEneRe4Sorcerer__sub_800ED428(u8 *arg0, s32 arg1);
}

extern "C" {

void TObjEneRe4Sorcerer__sub_800ED408(void* p);
void TObjEneRe4Sorcerer__sub_800ED47C(void* p);
int TObjEneRe4Sorcerer__sub_800ED498(void);
void* get_spell_data__18TObjEneRe4SorcererFPv(void* p);
s32 get_state__18TObjEneRe4SorcererFPv(void* p);
void set_attack_flag__18TObjEneRe4SorcererFPv(void* p);
void set_flag_and_notify__18TObjEneRe4SorcererFPv(void *arg0);
s32 set_hold_flags__18TObjEneRe4SorcererFPv();

void set_flag_and_notify__18TObjEneRe4SorcererFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) | 0x10);
    if (!(M2C_FIELD(arg0, s32 *, 0x3CC) & 4)) {
        set_hold_flags__18TObjEneRe4SorcererFPv();
    }
}
void TObjEneRe4Sorcerer__sub_800ED408(void* p) { *(u32*)((char*)p + 0x3cc) &= 0xfffffeff; }
void set_attack_flag__18TObjEneRe4SorcererFPv(void* p) { *(u32*)((char*)p + 0x3cc) |= 0x2; }

void TObjEneRe4Sorcerer__sub_800ED428(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) | 1);
    switch (arg1) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x3D4) = 4;
        return;
    case 1:
        M2C_FIELD(arg0, s32 *, 0x3D4) = 5;
        return;
    case 2:
        M2C_FIELD(arg0, s32 *, 0x3D4) = 6;
        return;
    }
}

void TObjEneRe4Sorcerer__sub_800ED47C(void* p) { *(s32*)((char*)p + 0x3d0) = 3; }
void* get_spell_data__18TObjEneRe4SorcererFPv(void* p) { return (char*)p + 0x2fc; }
s32 get_state__18TObjEneRe4SorcererFPv(void* p) { return *(s32*)((char*)p + 0x404); }

int TObjEneRe4Sorcerer__sub_800ED498(void) { return 0; }

}
