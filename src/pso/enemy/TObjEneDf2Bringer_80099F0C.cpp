#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
int fn_800BC4C8(void);
extern M2C_UNK lbl_8048FE08[];
    extern int lbl_805D29AC;
extern const f32 lbl_805D9860;
void* init__17TObjEneDf2BringerFPviii(void* a0, int a1, int a2, int a3);
void TObjEneDf2Bringer__sub_8009A2A0(void);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
extern M2C_UNK lbl_8048FE64[];
void *TObjEneDf2Bringer__sub_8009A340(void *arg0, s16 arg1);
}

extern "C" {

void TObjEneDf2Bringer__sub_8009A11C(void* p);
void *TObjEneDf2Bringer__sub_8009A1BC(void *arg0, s16 arg1);
void setup_dir_shot__17TObjEneDf2BringerFPvPvif(u8 *arg0, const void *arg1, s32 arg2, f32 farg0);
f32 TBoss8Dragon__sub_803D64C0(int);
f32 TBoss8Dragon__sub_803D64DC(int);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, const void *);
void __dl__7TObjectFPv(void *);
void destroy_enemy_object__10TObjPlayerFPvs(void *, int);
M2C_UNK fn_8002B094(int);

void TObjEneDf2Bringer__sub_8009A11C(void* p) { *(s32*)((char*)p + 0xb0) = 0; }

extern const f32 lbl_805D9860;

void setup_dir_shot__17TObjEneDf2BringerFPvPvif(u8 *arg0, const void *arg1, s32 arg2, f32 farg0) {
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), arg1);
    M2C_FIELD(arg0, s32 *, 0x60) = arg2;
    M2C_FIELD(arg0, f32 *, 0xB8) = TBoss8Dragon__sub_803D64C0((int) (M2C_FIELD(arg0, s32 *, 0x60)));
    M2C_FIELD(arg0, f32 *, 0xBC) = (f32) lbl_805D9860;
    M2C_FIELD(arg0, f32 *, 0xC0) = TBoss8Dragon__sub_803D64DC((int) (M2C_FIELD(arg0, s32 *, 0x60)));
    M2C_FIELD(arg0, s32 *, 0xB0) = 1;
    fn_8002B094((int) (M2C_FIELD(arg0, s32 *, 0xC4)));
    M2C_FIELD(arg0, f32 *, 0xC8) = (f32) lbl_805D9860;
    M2C_FIELD(arg0, f32 *, 0xCC) = (f32) lbl_805D9860;
    M2C_FIELD(arg0, f32 *, 0xD0) = farg0;
    M2C_FIELD(arg0, s32 *, 0xB4) = 0x19;
}

extern M2C_UNK lbl_8048FE08[];

void *TObjEneDf2Bringer__sub_8009A1BC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8048FE08;
        destroy_enemy_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
void* init__17TObjEneDf2BringerFPviii(void* a0, int a1, int a2, int a3) { fn_800BC4C8(); *(int*)((char*)a0 + 0x18) = (int)((unsigned char *)&lbl_8048FE08); *(int*)((char*)a0 + 0x0) = lbl_805D29AC; *(int*)((char*)a0 + 0xb0) = 0; *(float*)((char*)a0 + 0xd0) = (*(const float *)&lbl_805D9860); *(float*)((char*)a0 + 0xc8) = (*(const float *)&lbl_805D9860); *(float*)((char*)a0 + 0xcc) = (*(const float *)&lbl_805D9860); *(int*)((char*)a0 + 0xb4) = 0; *(float*)((char*)a0 + 0x38) = (*(const float *)&lbl_805D9860); *(float*)((char*)a0 + 0x3c) = (*(const float *)&lbl_805D9860); *(float*)((char*)a0 + 0x40) = (*(const float *)&lbl_805D9860); *(float*)((char*)a0 + 0xb8) = (*(const float *)&lbl_805D9860); *(float*)((char*)a0 + 0xbc) = (*(const float *)&lbl_805D9860); *(float*)((char*)a0 + 0xc0) = (*(const float *)&lbl_805D9860); *(int*)((char*)a0 + 0xc4) = a3; *(int*)((char*)*(int*)((char*)a0 + 0xa4) + 0x14) = 1; return a0; }
void TObjEneDf2Bringer__sub_8009A2A0(void) {  }
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
