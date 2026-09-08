#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK request_destroy__11TBoss4Type2FUi(void *);
u32 TBoss4Type2__sub_800874F4(int, int);
M2C_UNK set_flags__11TBoss4Type2FPvUi(int, int);
M2C_UNK copy_pos__11TNowLoadingFPvPv(int, int);
M2C_UNK TBoss3Volopt__sub_8022675C(int, int, int, int);
M2C_UNK queue_event_1D__12TBoss3VoloptFss(int, int);
M2C_UNK TBoss6PlotFalz__sub_802AC1D8(void *, int, int);
s32 get_phase__8TObjFishFPv(int);
extern const f32 lbl_805DFA48;
extern const f32 lbl_805DFA4C;
void TBoss4Type2__sub_8033C86C(u8 *arg0);
}

extern "C" {

u8 *TObjFish__sub_8033CAB0(u8 *arg0, s16 arg1);
void TObjPlayer__sub_8033C84C(void* p);
void clear_render_effect_state__10TObjPlayerFPv(void *arg0);
void *create_instance__8TObjFishFPv(void *arg0);
M2C_UNK TBoss6PlotFalz__sub_802AC25C(void *);
M2C_UNK TBoss6PlotFalz__sub_802AC4D8();
M2C_UNK TCameraCtrl__sub_80069DA8();
M2C_UNK TOHangerMachine01__sub_803D9C00(M2C_UNK *);
M2C_UNK TObjEneSlimeOne__sub_803E4AF4(s32, s32, f32);
M2C_UNK TObjFish__sub_800E3074(s32);
void *TObjFish__sub_8033CB4C(void *, void *);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, int);
void *__nw__7TObjectFUl(int);
M2C_UNK clear_global_state__10TObjPlayerFv();
M2C_UNK clear_render_callback__8TObjFishFv(s32);
M2C_UNK init_state_1__8TObjFishFPv(void *);
M2C_UNK request_destroy__11TBoss4Type2FUi(void *);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK set_global_param__8TObjFishFi(s32);

extern M2C_UNK lbl_80477DEC[];

void clear_render_effect_state__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_803D9B2C();
    set_global_flag__10TObjPlayerFv();
    TOHangerMachine01__sub_803D9C00(lbl_80477DEC);
    set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x20));
    TObjEneSlimeOne__sub_803E4AF4(M2C_FIELD(arg0, s32 *, 0x1C), M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(arg0, f32 *, 0x34));
    set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x2C));
    TObjFish__sub_800E3074(M2C_FIELD(arg0, s32 *, 0x60));
    TObjEneSlimeOne__sub_803E4AF4(M2C_FIELD(arg0, s32 *, 0x28), M2C_FIELD(arg0, s32 *, 0x30), M2C_FIELD(arg0, f32 *, 0x34));
    clear_render_callback__8TObjFishFv(M2C_FIELD(arg0, s32 *, 0x60));
    clear_global_state__10TObjPlayerFv();
    TObjPlayer__sub_803D9B78();
}

void TObjPlayer__sub_8033C84C(void* p) { clear_render_effect_state__10TObjPlayerFPv((void *)((void *)(p))); }

extern const M2C_UNK lbl_804EF9C0[];

#pragma push
#pragma opt_common_subs off
void TBoss4Type2__sub_8033C86C(u8 *arg0) {
    f32 temp_f1;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    u8 *temp_r30;
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x34) + lbl_805DFA48;
    M2C_FIELD(arg0, f32 *, 0x34) = temp_f1;
    if (temp_f1 > lbl_805DFA4C) {
        M2C_FIELD(arg0, f32 *, 0x34) = (f32) lbl_805DFA4C;
    }
    TBoss6PlotFalz__sub_802AC1D8((void *) (arg0 + 0x40), (int) (8), (int) (0));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x38) == 0x78) {
        TBoss3Volopt__sub_8022675C((int) (0x4003A105), (int) (0), (int) (0), (int) (0));
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x38);
    switch (temp_r0) {
    case 0x1B8:
    case 0xFA:
        TBoss3Volopt__sub_8022675C((int) (0x4003A811), (int) (0), (int) (0), (int) (0));
        break;
    case 0x154:
        TBoss3Volopt__sub_8022675C((int) (0x40031222), (int) (0), (int) (0), (int) (0));
        break;
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x38);
    switch (temp_r0_2) {
    case 0x14:
    case 0xC6:
    case 0xFA:
    case 0x13F:
    case 0x1B8:
        queue_event_1D__12TBoss3VoloptFss((int) (0xC0), (int) (0xF));
        break;
    }
    temp_r0_3 = M2C_FIELD(arg0, s32 *, 0x38);
    temp_r30 = arg0 + 0x54;
    switch (temp_r0_3) {
    case 0x1:
        M2C_FIELD(arg0, u32 *, 0x64) = TBoss4Type2__sub_800874F4((int) (temp_r30), (int) (0x210));
        if ((u32) M2C_FIELD(arg0, u32 *, 0x64) != 0U) {
            set_flags__11TBoss4Type2FPvUi((int) (M2C_FIELD(arg0, u32 *, 0x64)), (int) (0x40));
        }
        break;
    case 0x1AC:
    case 0x8E:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x64) != 0U) {
            request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x64));
            M2C_FIELD(arg0, u32 *, 0x64) = 0U;
        }
        M2C_FIELD(arg0, u32 *, 0x64) = TBoss4Type2__sub_800874F4((int) (temp_r30), (int) (0x211));
        if ((u32) M2C_FIELD(arg0, u32 *, 0x64) != 0U) {
            set_flags__11TBoss4Type2FPvUi((int) (M2C_FIELD(arg0, u32 *, 0x64)), (int) (0x40));
        }
        break;
    case 0x11D:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x64) != 0U) {
            request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x64));
            M2C_FIELD(arg0, u32 *, 0x64) = 0U;
        }
        M2C_FIELD(arg0, u32 *, 0x64) = TBoss4Type2__sub_800874F4((int) (temp_r30), (int) (0x210));
        if ((u32) M2C_FIELD(arg0, u32 *, 0x64) != 0U) {
            set_flags__11TBoss4Type2FPvUi((int) (M2C_FIELD(arg0, u32 *, 0x64)), (int) (0x40));
        }
        break;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x64) != 0U) {
        copy_pos__11TNowLoadingFPvPv((int) (M2C_FIELD(arg0, u32 *, 0x64)), (int) (temp_r30));
    }
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) + 1);
    if (((s32) M2C_FIELD(arg0, s32 *, 0x38) >= 0x1F4) || (get_phase__8TObjFishFPv((int) (M2C_FIELD(arg0, s32 *, 0x3C))) != 1)) {
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}
#pragma pop

u8 *TObjFish__sub_8033CAB0(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = (M2C_UNK*)&lbl_804EF9C0;
        TCameraCtrl__sub_80069DA8();
        TBoss6PlotFalz__sub_802AC4D8();
        TBoss6PlotFalz__sub_802AC25C(arg0 + 0x40);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x60) != 0U) {
            init_state_1__8TObjFishFPv(M2C_FIELD(arg0, void **, 0x60));
            M2C_FIELD(arg0, u32 *, 0x60) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x64) != 0U) {
            request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x64));
            M2C_FIELD(arg0, u32 *, 0x64) = 0U;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void *create_instance__8TObjFishFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x68);
    if (o != NULL) {
        o = TObjFish__sub_8033CB4C(o, arg0);
    }
    return o;
}

}
