#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK copy_xyz__10TObjPlayerFPvPv(void *, void *);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
s32 TBoss8Dragon__sub_8005D700();
M2C_UNK init_state_zero__12TBoss8DragonFPv(void *);
M2C_UNK reset_float_3c__12TBoss8DragonFPv(void *);
M2C_UNK set_flag_4e4__12TBoss8DragonFPv();
M2C_UNK __ct__17TBoss5GryphonDemoFv(void *, s32, void *, f32);
M2C_UNK play_pillar_sound__13TObjBoss5CtrlFv();
M2C_UNK TOSwitchAttack__sub_80087278(void *, void *, int);
M2C_UNK get_target_state_a__9TObjEneDDFPv(void *);
M2C_UNK get_target_state_b__9TObjEneDDFPv(void *);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK TBoss1Dragon__sub_80143504(void *);
s32 TBoss3Volopt__sub_8022675C(int, void *, int, int);
void *__nw__7TObjectFUl(u32);
M2C_UNK queue_event_1D__12TBoss3VoloptFss(int, int);
M2C_UNK init_all_slots__11TWindowCtrlFv();
M2C_UNK init_all_slots2__11TWindowCtrlFv();
extern M2C_UNK lbl_80437DC4[];
extern M2C_UNK lbl_80437DD0[];
extern M2C_UNK lbl_80437DDC[];
extern s32 tl_01;
extern const f32 lbl_805D8D5C;
extern const f32 lbl_805D8D6C;
extern const f32 lbl_805D8D88;
extern const f32 lbl_805D8E60;
extern const f32 lbl_805D8E64;
extern const f32 lbl_805D8E68;
extern const f32 lbl_805D8E6C;
extern const f32 lbl_805D8E70;
extern const f32 lbl_805D8E74;
extern const f32 lbl_805D8E78;
extern const f32 lbl_805D8E7C;
void TBoss3Volopt__sub_800627E4(u8 *arg0, u32 arg1);
}

extern "C" {

void update_active_player_count__19TPlayerBattleCtrl4PFPvi(void *arg0, s32 arg1);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
u32 TPlayerBattleCtrl4P__sub_801BA74C(M2C_UNK);

void update_active_player_count__19TPlayerBattleCtrl4PFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        M2C_FIELD(arg0, s32 *, 0x6DC) = 0;
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x6DC) > 0x96) {
            TObjEneDD__sub_800BBA18(arg0, 0xB);
        }
    case 5:
    case 1:
        return;
    case 0:
        if ((TPlayerBattleCtrl4P__sub_801BA74C(0) != 0U) || (TPlayerBattleCtrl4P__sub_801BA74C(1) != 0U) || (TPlayerBattleCtrl4P__sub_801BA74C(2) != 0U) || (TPlayerBattleCtrl4P__sub_801BA74C(3) != 0U)) {
            M2C_FIELD(arg0, s32 *, 0x6DC) = (s32) (M2C_FIELD(arg0, s32 *, 0x6DC) + 1);
        }
        break;
    }
}
void TBoss3Volopt__sub_800627E4(u8 *arg0, u32 arg1) {
    s32 *p = (s32 *)(arg0 + 0x6E8);
    u8 sp8[0xC];
    void *obj;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        set_flag_4e4__12TBoss8DragonFPv();
        reset_float_3c__12TBoss8DragonFPv((void *) (arg0));
        TBoss1Dragon__sub_80143504((void *) (arg0));
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_805D8D5C;
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_805D8D5C;
        M2C_FIELD(arg0, f32 *, 0x40) = (f32) lbl_805D8D5C;
        M2C_FIELD(arg0, s32 *, 0x5C) = 0;
        M2C_FIELD(arg0, s32 *, 0x60) = 0;
        M2C_FIELD(arg0, s32 *, 0x64) = 0;
        switch (TBoss8Dragon__sub_8005D700()) {
        case 0:
            M2C_FIELD(arg0, s32 *, 0x6DC) = 0;
            break;
        }
        M2C_FIELD(arg0, s32 *, 0x4C0) |= 0x80;
        M2C_FIELD(arg0, s32 *, 0x6E4) = 0;
        M2C_FIELD(arg0, s32 *, 0x6E0) = 0;
        *p = 1;
        obj = __nw__7TObjectFUl(0x28);
        if (obj != NULL) {
            __ct__17TBoss5GryphonDemoFv(obj, tl_01, p, lbl_805D8D88);
        }
        M2C_FIELD(arg0, s16 *, 0xB8) = 0x19;
        init_all_slots__11TWindowCtrlFv();
        get_target_state_b__9TObjEneDDFPv((void *) (arg0));
        return;
    case 2:
    case 9:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x6DC) == 1) {
            init_state_zero__12TBoss8DragonFPv((void *) (arg0));
        }
        break;
    case 0:
        switch (M2C_FIELD(arg0, s32 *, 0x6DC)) {
        case 0:
            TBoss1Dragon__sub_80143504((void *) (arg0));
            if (get_flag_b4__21TObjEneMe3ShinowaRealFPv((void *) (arg0)) != 0) {
                M2C_FIELD(arg0, s32 *, 0x6DC) = 1;
                init_all_slots2__11TWindowCtrlFv();
                M2C_FIELD(arg0, s16 *, 0xB8) = 4;
            }
            switch (M2C_FIELD(arg0, s32 *, 0x6E4)) {
            case 0:
                if (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805D8E60)) != 0) {
                    VecCopy__FP3VecPC3Vec((void *) (sp8), (void *) (lbl_80437DDC));
                    TOSwitchAttack__sub_80087278((void *) (sp8), (void *) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x5F0), s32 *, 4)), (int) (0x40));
                    queue_event_1D__12TBoss3VoloptFss((int) (0x1C), (int) (0x3C));
                } else if (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805D8E64)) != 0) {
                    VecCopy__FP3VecPC3Vec((void *) (sp8), (void *) ((u8 *)(lbl_80437DDC) + 0xC));
                    TOSwitchAttack__sub_80087278((void *) (sp8), (void *) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x5F0), s32 *, 4)), (int) (0x40));
                    queue_event_1D__12TBoss3VoloptFss((int) (0xC0), (int) (0xF));
                } else if ((objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805D8E68)) != 0) || (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805D8E6C)) != 0)) {
                    VecCopy__FP3VecPC3Vec((void *) (sp8), (void *) ((u8 *)(lbl_80437DDC) + 0xC));
                    TOSwitchAttack__sub_80087278((void *) (sp8), (void *) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x5F0), s32 *, 0)), (int) (0x40));
                }
                if (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805D8E70)) != 0) {
                    TBoss3Volopt__sub_8022675C((int) (0x40032A00), (void *) (0), (int) (0), (int) (0));
                    queue_event_1D__12TBoss3VoloptFss((int) (0xA0), (int) (0x3C));
                }
                if ((objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805D8D6C)) != 0) || (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805D8E74)) != 0)) {
                    TBoss3Volopt__sub_8022675C((int) (0x40033409), (void *) (0), (int) (0), (int) (0));
                }
                if (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805D8E64)) != 0) {
                    TBoss3Volopt__sub_8022675C((int) (0x40032D0D), (void *) (0), (int) (0), (int) (0));
                }
                if (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805D8E78)) != 0) {
                    TBoss3Volopt__sub_8022675C((int) (0x40033409), (void *) (0), (int) (0), (int) (0));
                    queue_event_1D__12TBoss3VoloptFss((int) (0x80), (int) (7));
                }
                if (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805D8E7C)) != 0) {
                    play_pillar_sound__13TObjBoss5CtrlFv();
                }
                break;
            }
            break;
        case 1:
            VecCopy__FP3VecPC3Vec((void *) ((u8 *)(arg0) + 0x38), (void *) (lbl_80437DC4));
            copy_xyz__10TObjPlayerFPvPv((void *) ((u8 *)(arg0) + 0x5C), (void *) (lbl_80437DD0));
            TBoss1Dragon__sub_80143504((void *) (arg0));
            return;
        }
        break;
    case 5:
        VecCopy__FP3VecPC3Vec((void *) ((u8 *)(arg0) + 0x38), (void *) (lbl_80437DC4));
        copy_xyz__10TObjPlayerFPvPv((void *) ((u8 *)(arg0) + 0x5C), (void *) (lbl_80437DD0));
        M2C_FIELD(arg0, f32 *, 0x484) = (f32) lbl_805D8D5C;
        M2C_FIELD(arg0, f32 *, 0x488) = (f32) lbl_805D8D5C;
        M2C_FIELD(arg0, f32 *, 0x48C) = (f32) lbl_805D8D5C;
        *p = 0;
        M2C_FIELD(arg0, s32 *, 0x4C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x4C0) & 0xFFFFFF7F);
        init_all_slots2__11TWindowCtrlFv();
        get_target_state_a__9TObjEneDDFPv((void *) (arg0));
        break;
    }
}

}
