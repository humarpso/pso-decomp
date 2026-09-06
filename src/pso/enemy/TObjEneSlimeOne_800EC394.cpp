#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TObjPlayer__sub_800114D8(void *, void *, f32);
int TObjEneSlimeOne__sub_800EC428(u8 *arg0, s32 arg1, f32 farg0);
s32 TObjPlayer__sub_800114D8(void *, void *, f32);
int TObjEneSlimeOne__sub_800EC3D0(u8 *arg0, f32 farg0);
}

extern "C" {

void TObjEneRe4Bit__vt103(void);
void TObjEneRe4Bit__vt104(void);
int TObjEneSlimeOne__sub_800EC39C(void);
void TObjEneSlimeOne__sub_800EC470(void* p);
s32 __dt__15TObjEneSlimeOneFis(s32 arg0, s16 arg1);
int check_player_field_7cc__15TObjEneSlimeOneFPv(void* p);
void fn_800ECA28(void *arg0, s32 arg1);
s32 get_attack_target__15TObjEneSlimeOneFPv(void* p);
int get_instance__15TObjEneSlimeOneFv(void);
s32 is_reached_target_depth__15TObjEneSlimeOneFPv(void *arg0);
int is_timer_active__15TObjEneSlimeOneFPv(void* p);
int TObjPlayer__sub_801D2EA8(void*);
int __dl__FPv();

s32 get_attack_target__15TObjEneSlimeOneFPv(void* p) { return *(s32*)((char*)p + 0x3f4); }

int TObjEneSlimeOne__sub_800EC39C(void) { return 0; }

    extern int lbl_805D52B0;
int get_instance__15TObjEneSlimeOneFv(void) {  return lbl_805D52B0; }

int TObjEneSlimeOne__sub_800EC3D0(u8 *arg0, f32 farg0) {
    u16 temp_r3;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x02000000);
    temp_r3 = TObjPlayer__sub_800114D8((void *)((void *) (arg0)), (void *)((int) (0)), (f32) (farg0));
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFDFFFFFF);
    return temp_r3;
}

int is_timer_active__15TObjEneSlimeOneFPv(void* p) { return (*(u32*)((char*)p + 0x30) >> 4) & 0x1; }

int TObjEneSlimeOne__sub_800EC428(u8 *arg0, s32 arg1, f32 farg0) {
    u16 temp_r3;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x02000000);
    temp_r3 = TObjPlayer__sub_800114D8((void *) (arg0), (void *) (arg1), (f32) (farg0));
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFDFFFFFF);
    return temp_r3;
}

void TObjEneSlimeOne__sub_800EC470(void* p) { *(s32*)((char*)p + 0x3f0) = 0; }

int check_player_field_7cc__15TObjEneSlimeOneFPv(void* p) { return TObjPlayer__sub_801D2EA8((char*)p + 0x7cc); }

extern f32 lbl_805D52B8;
extern u8 lbl_805D52BC;
extern f32 lbl_805DA760;

s32 is_reached_target_depth__15TObjEneSlimeOneFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r0 == -1) {
        return 1;
    }
    if (temp_r0 < 7) {
        return 0;
    }
    if ((s8) lbl_805D52BC == 0) {
        f32 tmp = M2C_FIELD(arg0, f32 *, 0x2C);
        lbl_805D52BC = 1;
        lbl_805D52B8 = tmp - lbl_805DA760;
    }
    if (M2C_FIELD(arg0, f32 *, 0x30) == lbl_805D52B8) {
        return 1;
    }
    return 0;
}

s32 __dt__15TObjEneSlimeOneFis(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}
void fn_800ECA28(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = -1;
}

void TObjEneRe4Bit__vt104(void) {  }
void TObjEneRe4Bit__vt103(void) {  }

}
