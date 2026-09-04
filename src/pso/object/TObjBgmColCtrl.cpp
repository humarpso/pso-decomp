#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void render__14TObjBgmColCtrlFv(void);

void render__14TObjBgmColCtrlFv(void) {  }

}
#else
#if PSO_CLASS_PACKAGE == 0x8017E2EC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__14TObjBgmColCtrlFv(void *arg0);
s32 get_global_state__14TOKeyMachine01Fv();
M2C_UNK TObjBgmColCtrl__sub_8017E1E4();
s32 is_active__14TObjBgmColCtrlFv();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 is_not_split_screen__13TRaderMapCoreFv();
s32 get_bgm_object__13TQuestBgmCtrlFv();
M2C_UNK run_tasks__7TObjectFv(void *);

extern s32 lbl_805D53A0;
extern s32 lbl_805D55A0;
extern s32 lbl_805D5B04;
extern u32 TObjBgmColCtrl__data_805D5B08;
extern s32 TObjBgmColCtrl__data_805D5B0C;

void run_task__14TObjBgmColCtrlFv(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (temp_r4 - 1);
    if ((temp_r4 <= 0) && ((get_global_state__14TOKeyMachine01Fv() == 0xF) || (TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0) != 0U)) && (get_bgm_object__13TQuestBgmCtrlFv() == 0)) {
        if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
            if (is_active__14TObjBgmColCtrlFv() == 0) {
                TObjBgmColCtrl__sub_8017E1E4();
            }
        } else {
            lbl_805D5B04 = 0;
            void *thisObj = (void *)(u32)TObjBgmColCtrl__data_805D5B08;
            if (thisObj != NULL) {
                run_tasks__7TObjectFv(thisObj);
            }
            if ((s32) lbl_805D5B04 == 0) {
                if (is_active__14TObjBgmColCtrlFv() == 0) {
                    TObjBgmColCtrl__sub_8017E1E4();
                }
                if ((get_global_state__14TOKeyMachine01Fv() == 0xF) && ((s32) lbl_805D55A0 != (s32) TObjBgmColCtrl__data_805D5B0C)) {
                    TObjBgmColCtrl__sub_8017E1E4();
                }
            }
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8017E498
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjBgmColCtrl__ct(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__14TObjBgmColCtrl[];
extern void *lbl_805D322C;
extern u32 TObjBgmColCtrl__data_805D5B0C;

void *TObjBgmColCtrl__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TObjBgmColCtrl;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D322C;
    M2C_FIELD(arg0, u32 *, 0x1C) = 3;
    TObjBgmColCtrl__data_805D5B0C = 0;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8036A4AC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_all_zones__14TObjBgmColCtrlFi(s32 arg0);
s32 TLobby__sub_8039DAFC(s32, s32);
M2C_UNK fn_8036A514(s32);
s32 check_flag_index_set(s32);
s32 fn_8036A648(s32);

void update_all_zones__14TObjBgmColCtrlFi(s32 arg0) {
    s32 var_r31;

    var_r31 = 0;
    do {
        if (check_flag_index_set(var_r31) != 1) {
            if (TLobby__sub_8039DAFC(fn_8036A648(var_r31), arg0) == 0) {
                fn_8036A514(var_r31);
            }
        }
        var_r31 += 1;
    } while (var_r31 < 0x31);
}

}
#endif
#endif
