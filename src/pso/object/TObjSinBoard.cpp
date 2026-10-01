#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_801982D4_lbl_804B8DAC { M2C_UNK value; u8 remaining[0x20]; };
typedef char RecoveredGlobal_801982D4_lbl_804B8DAC_size[sizeof(RecoveredGlobal_801982D4_lbl_804B8DAC) == 0x24 ? 1 : -1];

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_80198228___vt__12TObjSinBoard {
    M2C_UNK value;
    u8 remaining[0x34];
};

typedef s32 M2C_UNK;
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Pos_8019806C { u32 w[12]; };

struct Uv_8019806C { u32 w[4]; };

struct Desc_8019806C { Pos_8019806C *pos; Uv_8019806C *uv; s16 *col; s32 count; };

extern "C" {
u8 *TObjFish__sub_8001EDC4(s32, M2C_UNK);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK TObjBoss2Tunnel__sub_803D929C(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK TOSignCave03__sub_803DB510(void *);
extern RecoveredGlobal_801982D4_lbl_804B8DAC lbl_804B8DAC;
extern s32 lbl_805D5C60;
void TObjPlayer__sub_801982D4(u8 *arg0);
s32 TPhotonMagicSquare__sub_801A2640(void *, void *);
extern M2C_UNK __vt__12TObjSinBoard[];
extern s32 lbl_805D3430;
u8 *TObjSinBoard__ct(u8 *arg0, s32 arg1, s32 arg2);
s32 get_state_flag__9TMainTaskFv();
void reset_transform_state__10TObjPlayerFv();
void begin_effect_render__13TParticleCtrlFv();
void end_effect_render__13TParticleCtrlFv();
void TObjPlayer__sub_801E3784(Desc_8019806C *, int, int);
void TOMonitorMachine01__sub_803D8B5C(int, f32, f32, f32);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK TObjBoss2Tunnel__sub_803D929C(int, int);
void TObjPlayer__sub_803D9624(int, f32, f32, f32);
void rotate_matrix_x(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK set_global_param__8TObjFishFi(int);
void TParticleCtrl__sub_803DA7A8(int);
extern Pos_8019806C lbl_80445FA0;
extern Uv_8019806C lbl_80445FD0;
extern u8 lbl_8050DD24[];
extern u32 lbl_805D5C58;
void render__12TObjSinBoardFv(u8 *arg0);
}

extern "C" {

void *TObjSinBoard__create(void *arg0);
void *__dt__12TObjSinBoardFv(void *arg0, s16 arg1);
void run_task__12TObjSinBoardFv(void);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

void render__12TObjSinBoardFv(u8 *arg0) {
    Pos_8019806C pos;
    Uv_8019806C uv;
    Desc_8019806C d;
    s16 col[8];
    if (get_state_flag__9TMainTaskFv() != 1 && lbl_805D5C58 != 0) {
        pos = lbl_80445FA0;
        uv = lbl_80445FD0;
        col[0] = 0;
        col[1] = 0;
        col[2] = 0;
        col[3] = 0xFF;
        col[4] = 0xFF;
        col[5] = 0xFF;
        col[6] = 0xFF;
        col[7] = 0;
        d.pos = &pos;
        d.uv = &uv;
        d.col = col;
        d.count = 4;
        reset_transform_state__10TObjPlayerFv();
        set_global_param__8TObjFishFi((int) lbl_8050DD24);
        TParticleCtrl__sub_803DA7A8(0);
        begin_effect_render__13TParticleCtrlFv();
        TObjPlayer__sub_803D9B2C();
        TObjPlayer__sub_803D9624(0, *(f32 *)(arg0 + 0x38), *(f32 *)(arg0 + 0x3C), *(f32 *)(arg0 + 0x40));
        TObjBoss2Tunnel__sub_803D929C(0, *(s32 *)(arg0 + 0x64));
        rotate_matrix_x(0, *(s32 *)(arg0 + 0x5C));
        rotate_matrix_y(0, *(s32 *)(arg0 + 0x60));
        TOMonitorMachine01__sub_803D8B5C(0, *(f32 *)(arg0 + 0x68), *(f32 *)(arg0 + 0x6C), *(f32 *)(arg0 + 0x70));
        TObjPlayer__sub_801E3784(&d, 4, 0xE);
        TObjPlayer__sub_803D9B78();
        end_effect_render__13TParticleCtrlFv();
    }
}

void run_task__12TObjSinBoardFv(void) {  }

extern M2C_UNK __vt__12TObjSinBoard[];

void *__dt__12TObjSinBoardFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TObjSinBoard;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_05;

typedef char RecoveredGlobal_80198228___vt__12TObjSinBoard_size[sizeof(RecoveredGlobal_80198228___vt__12TObjSinBoard) == 0x38 ? 1 : -1];
u8 *TObjSinBoard__ct(u8 *arg0, s32 arg1, s32 arg2) {
    TPhotonMagicSquare__sub_801A2640((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80198228___vt__12TObjSinBoard *)&__vt__12TObjSinBoard).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3430;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    return arg0;
}

void *TObjSinBoard__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x90);
    if (o != NULL) {
        o = TObjSinBoard__ct((u8 *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}
void TObjPlayer__sub_801982D4(u8 *arg0) {
    u8 *temp_r3;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3C) != 0) {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) + 0x38E);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x38) >= 0x4000) {
            M2C_FIELD(arg0, s32 *, 0x38) = 0x4000;
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) - 0x38E);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x38) <= 0) {
            M2C_FIELD(arg0, s32 *, 0x38) = 0;
        }
    }
    temp_r3 = (u8 *)(TObjFish__sub_8001EDC4(lbl_805D5C60, 1));
    if (temp_r3 != NULL) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x28) != 0) {
            set_global_param__8TObjFishFi((int) (M2C_FIELD(&lbl_804B8DAC.value, s32 *, 0x1C)));
        } else {
            set_global_param__8TObjFishFi((int) (M2C_FIELD(&lbl_804B8DAC.value, s32 *, 0x20)));
        }
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x1C));
        TOSignCave03__sub_803DB510((void *) (M2C_FIELD(temp_r3, s32 *, 4)));
        TObjPlayer__sub_803D9B2C();
        TOSignCave03__sub_803DB510((void *) (M2C_FIELD(M2C_FIELD(temp_r3, u8 **, 0x2C), s32 *, 4)));
        TObjPlayer__sub_803D9B78();
        TObjPlayer__sub_803D9B2C();
        TObjBoss2Tunnel__sub_803D929C((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x38)));
        rotate_matrix_y((int) (0), (int) (0x8000));
        TOSignCave03__sub_803DB510((void *) (M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_r3, u8 **, 0x2C), void **, 0x30), s32 *, 4)));
        TObjPlayer__sub_803D9B78();
        TObjPlayer__sub_803D9B2C();
        TObjBoss2Tunnel__sub_803D929C((int) (0), (int) (-M2C_FIELD(arg0, s32 *, 0x38)));
        TOSignCave03__sub_803DB510((void *) (M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_r3, u8 **, 0x2C), void **, 0x30), void **, 0x30), s32 *, 4)));
        TObjPlayer__sub_803D9B78();
        TObjPlayer__sub_803D9B78();
    }
}

}
