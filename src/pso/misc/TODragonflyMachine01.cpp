#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct DfBase_801651B0 { char pad[0x18]; };
struct DfV_801651B0 : DfBase_801651B0 {
    virtual void vf00(); virtual void vf01(); virtual void vf02(); virtual void vf03();
    virtual void vf04(); virtual void vf05(); virtual void vf06(); virtual void vf07();
    virtual void vf08(); virtual void vf09(); virtual void vf10(); virtual void vf11();
    virtual void vf12();
};

struct VBase_18_c5489a { char pad[0x18]; };

struct VObj_18_c5489a : VBase_18_c5489a {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(int);
};

struct RecoveredGlobal_80165538___vt__20TODragonflyMachine01 {
    M2C_UNK value;
    u8 remaining[0x3C];
};

extern "C" {
u8 * TODragonfly__ct(void *);
s32 rand(void);
f32 sin_table_lookup(s32);
extern M2C_UNK __vt__20TODragonflyMachine01[];
extern s32 lbl_805D2FA0;
extern u32 TODragonflyMachine01__data_805D5998;
extern const f32 lbl_805DB598;
extern const f32 lbl_805DB5B8;
extern const f32 lbl_805DB5BC;
extern const f32 lbl_805DB5C0;
extern const f32 lbl_805DB5C4;
extern const f32 lbl_805DB5C8;
extern const f32 lbl_805DB5CC;
u8 *TODragonflyMachine01__ct(u8 *arg0, int arg1);
}

extern "C" {

void *__dt__20TODragonflyMachine01Fv(void *arg0, s16 arg1);
void *create__20TODragonflyMachine01FPv(void *arg0);
void play_cave01_key_sound(void *arg0);
void run_task__20TODragonflyMachine01Fv(void *arg0);
void unload_static_data__20TODragonflyMachine01Fv(void);
void update_timer__20TODragonflyMachine01Fv(void);
M2C_UNK play_sound_effect(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
f32 sin_table_lookup(s32);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TODragonflyMachine01__sub_80164F50(void *);
M2C_UNK TODragonfly__sub_8016492C(void *);
M2C_UNK TODragonfly__sub_80164990(void *);
M2C_UNK TODragonfly__sub_80164A90(void *);
M2C_UNK update_idle__11TODragonflyFi(void *);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
void __dl__7TObjectFPv(void *);
void __dt__11TODragonflyFv(void *, int);
void *__nw__7TObjectFUl(int);
s32 check_demo_mode__10TObjPlayerFv();
s32 get_global_state__14TOKeyMachine01Fv();
M2C_UNK update_anim_phase__17TOBarrierEnergy01FPv(void *);

extern s32 lbl_805D599C;
extern s32 lbl_805D59A0;

void update_timer__20TODragonflyMachine01Fv(void) {
    if ((s32) lbl_805D599C == 6) {
        rotate_matrix_y(0, lbl_805D59A0);
    }
    lbl_805D599C += 1;
}

void run_task__20TODragonflyMachine01Fv(void *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0xFC) = (s32) (M2C_FIELD(arg0, s32 *, 0xFC) + M2C_FIELD(arg0, s32 *, 0xF8));
    M2C_FIELD(arg0, f32 *, 0xF0) = (f32) (M2C_FIELD(arg0, f32 *, 0xEC) * sin_table_lookup(M2C_FIELD(arg0, s32 *, 0xFC)));
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        ((DfV_801651B0 *)arg0)->vf12();
        return;
    }
    update_anim_phase__17TOBarrierEnergy01FPv(arg0);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xAC);
    switch (temp_r0) {
    case 0:
        TODragonflyMachine01__sub_80164F50(arg0);
        update_idle__11TODragonflyFi(arg0);
        return;
    case 1:
        TODragonfly__sub_80164A90(arg0);
        return;
    case 2:
        TODragonflyMachine01__sub_80164F50(arg0);
        TODragonfly__sub_80164990(arg0);
        return;
    case 3:
        TODragonfly__sub_8016492C(arg0);
        return;
    }
}

void *create__20TODragonflyMachine01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x108);
    if (o != NULL) {
        o = TODragonflyMachine01__ct((u8 *)(o), (int)(arg0));
    }
    return o;
}

extern u32 TODragonflyMachine01__data_805D5998;

void unload_static_data__20TODragonflyMachine01Fv(void) {
    if ((u32) TODragonflyMachine01__data_805D5998 != 0U) {
        TLobby__sub_8001FE7C((void*)TODragonflyMachine01__data_805D5998, 1);
        TODragonflyMachine01__data_805D5998 = 0U;
    }
}

extern M2C_UNK __vt__20TODragonflyMachine01[];

void *__dt__20TODragonflyMachine01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TODragonflyMachine01;
        __dt__11TODragonflyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

#pragma push
#pragma fp_contract on
typedef char RecoveredGlobal_80165538___vt__20TODragonflyMachine01_size[sizeof(RecoveredGlobal_80165538___vt__20TODragonflyMachine01) == 0x40 ? 1 : -1];
u8 *TODragonflyMachine01__ct(u8 *arg0, int arg1) {
    struct Fields_arg0 { int field_0; u8 pad_4[20]; M2C_UNK * field_18; u8 pad_1C[8]; int field_24; u8 pad_28[12]; u8 * field_34; u8 pad_38[76]; int field_84; int field_88; u8 pad_8C[32]; int field_AC; u8 pad_B0[4]; f32 field_B4; f32 field_B8; u8 * field_BC; f32 field_C0; f32 field_C4; u8 pad_C8[36]; f32 field_EC; f32 field_F0; f32 field_F4; int field_F8; int field_FC; s16 field_100; s16 field_102; int field_104; };
    TODragonfly__ct(arg0);
    ((Fields_arg0*)arg0)->field_18 = &(*(RecoveredGlobal_80165538___vt__20TODragonflyMachine01 *)&__vt__20TODragonflyMachine01).value;
    ((Fields_arg0*)arg0)->field_0 = (int) lbl_805D2FA0;
    ((VObj_18_c5489a *)(arg0))->m5(arg1);
    ((Fields_arg0*)arg0)->field_34 = (unsigned char *) ((void *) M2C_FIELD(M2C_FIELD((*(u8 * *)&TODragonflyMachine01__data_805D5998), u8 **, 0x42C), void **, 8));
    ((Fields_arg0*)arg0)->field_24 = (int) M2C_FIELD(M2C_FIELD((*(u8 * *)&TODragonflyMachine01__data_805D5998), u8 **, 0x42C), int *, 0xC);
    ((Fields_arg0*)arg0)->field_BC = (unsigned char *) ((void *) M2C_FIELD(M2C_FIELD((*(u8 * *)&TODragonflyMachine01__data_805D5998), u8 **, 0x430), void **, 4));
    ((Fields_arg0*)arg0)->field_B4 = (f32) ((f32) M2C_FIELD(((Fields_arg0*)arg0)->field_BC, unsigned int *, 4) - lbl_805DB5B8);
    ((Fields_arg0*)arg0)->field_B8 = (f32) lbl_805DB5B8;
    ((Fields_arg0*)arg0)->field_C0 = (f32) lbl_805DB5BC;
    ((Fields_arg0*)arg0)->field_C4 = (f32) M2C_FIELD(M2C_FIELD(((Fields_arg0*)arg0)->field_34, void **, 4), f32 *, 0x14);
    ((Fields_arg0*)arg0)->field_AC = 0;
    ((Fields_arg0*)arg0)->field_F4 = (f32) ((lbl_805DB5C0 * (f32) ((Fields_arg0*)arg0)->field_84) + lbl_805DB5B8);
    ((Fields_arg0*)arg0)->field_F8 = (int) (lbl_805DB5C4 * (lbl_805DB5C8 / (lbl_805DB5CC / ((Fields_arg0*)arg0)->field_F4)));
    ((Fields_arg0*)arg0)->field_FC = (int) (lbl_805DB5C4 * (lbl_805DB5C8 * (lbl_805DB598 * (f32) rand())));
    ((Fields_arg0*)arg0)->field_EC = (f32) ((lbl_805DB5C0 * (f32) ((Fields_arg0*)arg0)->field_88) + lbl_805DB5B8);
    ((Fields_arg0*)arg0)->field_F0 = (f32) (((Fields_arg0*)arg0)->field_EC * sin_table_lookup(((Fields_arg0*)arg0)->field_FC));
    ((Fields_arg0*)arg0)->field_100 = 0;
    ((Fields_arg0*)arg0)->field_102 = 0;
    ((Fields_arg0*)arg0)->field_104 = 0;
    return arg0;
}
#pragma pop

void play_cave01_key_sound(void *arg0) {
    s32 temp_r0;
    s32 temp_r3;
    s32 temp_r3_2;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
    switch (temp_r0) {
    case 1:
        play_sound_effect(0x4005281F, 0, 0, 0);
        return;
    case 2:
        play_sound_effect(0x53F06, 0, 0, 0);
        return;
    case 3:
        temp_r3 = get_global_state__14TOKeyMachine01Fv();
        if ((temp_r3 != 0x10) && (temp_r3 != 0x11)) {
            play_sound_effect(0x52812, 0, 0, 0);
            return;
        }
        break;
    case 4:
        temp_r3_2 = get_global_state__14TOKeyMachine01Fv();
        if ((temp_r3_2 != 0x10) && (temp_r3_2 != 0x11)) {
            play_sound_effect(0x52813, 0, 0, 0);
            return;
        }
        break;
    case 5:
        play_sound_effect(0x4001C112, 0, 0, 0);
        return;
    case 6:
        play_sound_effect(0x4002A60B, 0, 0, 0);
        break;
    }
}

}
