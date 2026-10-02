#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_802ABCDC {
    s16 spC;
    u8 pad_E[0x4];
    s16 sp12;
    u8 pad_14[0x38];
    u8 sp4C;
};

struct Stack_802ABC64 {
    s16 spC;
    u8 pad_E[0x4];
    s16 sp12;
    s16 sp14;
    u8 pad_16[0x36];
    u8 sp4C;
};

struct RecoveredGlobal_802ABBC4_lbl_804705CC { M2C_UNK value; u8 remaining[0x8]; };
typedef char RecoveredGlobal_802ABBC4_lbl_804705CC_size[sizeof(RecoveredGlobal_802ABBC4_lbl_804705CC) == 0xC ? 1 : -1];

struct RecoveredGlobal_802ABC14_lbl_804705C0 { M2C_UNK value; u8 remaining[0x8]; };
typedef char RecoveredGlobal_802ABC14_lbl_804705C0_size[sizeof(RecoveredGlobal_802ABC14_lbl_804705C0) == 0xC ? 1 : -1];

struct Color_802ABF44 { f32 a, b, c, d; };

extern "C" {
M2C_UNK TBoss4DarkFalz__sub_8004B4F0(void *, void *);
u32 create__11TBoss6Type1Fi(void *, int);
extern u32 TBoss6PlotFalz__data_805D66F0;
void TBoss6PlotFalz__sub_802ABCDC(u8 *arg0);
M2C_UNK TBoss4DarkFalz__sub_8004B4F0(void *, void *);
u32 create__11TBoss6Type2Fi(void *, int);
extern u32 TBoss6PlotFalz__data_805D66F4;
void TBoss6PlotFalz__sub_802ABC64(u8 *arg0);
extern const f32 lbl_805DE0B4;
f32 TBoss6Mine__sub_802ABD88(s32 *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
extern RecoveredGlobal_802ABBC4_lbl_804705CC lbl_804705CC;
extern u32 TBoss6PlotFalz__data_805D66F4;
s32 TBoss6PlotFalz__sub_802ABBC4(M2C_UNK arg0, s32 arg1);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
extern RecoveredGlobal_802ABC14_lbl_804705C0 lbl_804705C0;
extern u32 TBoss6PlotFalz__data_805D66F0;
s32 TBoss6PlotFalz__sub_802ABC14(M2C_UNK arg0, s32 arg1);
s32 TBoss6Type1__sub_802ABDEC(s32 seed);
s32 is_locally_controlled__10TObjPlayerFPv(s32);
s32 get_player_data__10TObjPlayerFi(s32);
s16 obj_getField1c(s32);
s32 get_game_mode__6TLobbyFv(void);
void spawn_effect__11TBoss4Type3Fsss(s16, s16, s16);
s32 is_state_1f__14TBoss6PlotFalzFUi(u32);
f32 xyz_distance(void *, void *);
extern const f32 TBoss6PlotFalz__data_805DE09C;
void TBoss6PlotFalz__sub_802ABE3C(void *pos, s16 amount, s16 kind, f32 range);
void set_chunk_material_override_pair(int, int, s32, s32);
void set_chunk_material_color(Color_802ABF44 *);
extern int lbl_805D5660;
extern int lbl_805D5664;
extern int lbl_805D5668;
extern int lbl_805D7780;
extern int lbl_805D7784;
extern int some_id_805c6f74;
extern s32 lbl_805DE0B8;
void TBoss6PlotFalz__sub_802ABF44(f32 f);
}

extern "C" {

void ensure_field384__14TBoss6PlotFalzFPv(void *arg0);
void release_object__14TBoss6PlotFalzFPv(void* p);
void reset_fish_globals__8TObjFishFv(void);
u32 create__10TBoss6TubeFPv();
int queue_destruction__7TObjectFv(void*);

void release_object__14TBoss6PlotFalzFPv(void* p) { if (*(unsigned int*)((char*)p + 0x384) != 0) { queue_destruction__7TObjectFv(*(void**)((char*)p + 0x384)); *(int*)((char*)p + 0x384) = 0; } }

s32 TBoss6PlotFalz__sub_802ABBC4(M2C_UNK arg0, s32 arg1) {
    if ((u32) TBoss6PlotFalz__data_805D66F4 == 0U) {
        VecCopy__FP3VecPC3Vec((void *) (arg1), (void *) (&lbl_804705CC.value));
        return 0;
    }
    VecCopy__FP3VecPC3Vec((void *) (arg1), (void *) (TBoss6PlotFalz__data_805D66F4 + 0x38));
    return 1;
}

s32 TBoss6PlotFalz__sub_802ABC14(M2C_UNK arg0, s32 arg1) {
    if ((u32) TBoss6PlotFalz__data_805D66F0 == 0U) {
        VecCopy__FP3VecPC3Vec((void *) (arg1), (void *) (&lbl_804705C0.value));
        return 0;
    }
    VecCopy__FP3VecPC3Vec((void *) (arg1), (void *) (TBoss6PlotFalz__data_805D66F0 + 0x38));
    return 1;
}

void TBoss6PlotFalz__sub_802ABC64(u8 *arg0) {
    Stack_802ABC64 stack;
    u8 *sp8;
    u16 temp_r4;
    if ((u32) TBoss6PlotFalz__data_805D66F4 == 0U) {
        sp8 = (u8 *)(arg0);
        stack.sp4C = M2C_FIELD(arg0, u8 *, 0x37C);
        TBoss4DarkFalz__sub_8004B4F0((void *) (&stack.spC), (void *) (arg0 + 0x388));
        stack.sp14 = 1;
        stack.spC = M2C_FIELD(arg0, s16 *, 0x2C) + 0x1FF;
        temp_r4 = M2C_FIELD(arg0, u16 *, 0x1C);
        stack.sp12 = temp_r4 + 0x1FF;
        TBoss6PlotFalz__data_805D66F4 = create__11TBoss6Type2Fi((void *) (&sp8), (int) (temp_r4));
    }
}

void TBoss6PlotFalz__sub_802ABCDC(u8 *arg0) {
    Stack_802ABCDC stack;
    u8 *sp8;
    u16 temp_r4;
    if ((u32) TBoss6PlotFalz__data_805D66F0 == 0U) {
        sp8 = (u8 *)(arg0);
        stack.sp4C = M2C_FIELD(arg0, u8 *, 0x37C);
        TBoss4DarkFalz__sub_8004B4F0((void *) (&stack.spC), (void *) (arg0 + 0x388));
        stack.spC = M2C_FIELD(arg0, s16 *, 0x2C) + 0x200;
        temp_r4 = M2C_FIELD(arg0, u16 *, 0x1C);
        stack.sp12 = temp_r4 + 0x200;
        TBoss6PlotFalz__data_805D66F0 = create__11TBoss6Type1Fi((void *) (&sp8), (int) (temp_r4));
    }
}

void ensure_field384__14TBoss6PlotFalzFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x384) == 0U) {
        M2C_FIELD(arg0, u32 *, 0x384) = create__10TBoss6TubeFPv();
    }
}

    extern int lbl_805D5660;
    extern int lbl_805D5664;
    extern int lbl_805D5668;
    extern int lbl_805D7780;
    extern int lbl_805D7784;
    extern int some_id_805c6f74;

f32 TBoss6Mine__sub_802ABD88(s32 *arg0) {
    *arg0 = TBoss6Type1__sub_802ABDEC((s32)((void *) (*arg0)));
    return (f32) (*arg0 & 0x7FFF) / lbl_805DE0B4;
}

s32 TBoss6Type1__sub_802ABDEC(s32 seed) {
    seed = seed * 0x41C64E6D + 12345;
    seed = seed / 65536;
    seed = seed % 32768;
    return seed & 0x7FFF;
}

void reset_fish_globals__8TObjFishFv(void) { lbl_805D7784 = lbl_805D5664; lbl_805D7780 = lbl_805D5668; some_id_805c6f74 = lbl_805D5660; }
void TBoss6PlotFalz__sub_802ABE3C(void *pos, s16 amount, s16 kind, f32 range) {
    s32 n;
    s32 i;
    s32 p;
    f32 d;
    n = get_game_mode__6TLobbyFv();
    for (i = 0; i < n; i++) {
        p = get_player_data__10TObjPlayerFi(i);
        if (is_state_1f__14TBoss6PlotFalzFUi(p) != 0 && is_locally_controlled__10TObjPlayerFPv(p) != 0) {
            d = xyz_distance((void *)(p + 0x38), pos);
            if (!(d >= range)) {
                spawn_effect__11TBoss4Type3Fsss((s16)((f32)amount * (TBoss6PlotFalz__data_805DE09C - d / range)), kind, (s16)((s32 (*)(s32))obj_getField1c)(p));
            }
        }
    }
}
void TBoss6PlotFalz__sub_802ABF44(f32 f) {
    Color_802ABF44 c;
    s32 old = (*(s32 *)&some_id_805c6f74);
    (*(s32 *)&some_id_805c6f74) = old & ~0x10;
    (*(s32 *)&lbl_805D5660) = old;
    (*(s32 *)&lbl_805D5664) = (*(s32 *)&lbl_805D7784);
    (*(s32 *)&lbl_805D5668) = (*(s32 *)&lbl_805D7780);
    (*(s32 *)&some_id_805c6f74) |= lbl_805DE0B8;
    set_chunk_material_override_pair(0xFF00, 0x800, (*(s32 *)&lbl_805D7780), (*(s32 *)&lbl_805D7784));
    c.a = -1.0f + f;
    c.b = c.c = c.d = 0.0f;
    set_chunk_material_color(&c);
}

}
