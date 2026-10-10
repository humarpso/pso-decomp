#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct B_8017E410 { u8 pad[0x18]; };

struct V_8017E410 : B_8017E410 { virtual ~V_8017E410(); };

extern "C" {
s32 TObjBgmColCtrl__ct(int, int);
s32 create_bgm_col_zones();
u32 __nw__7TObjectFUl(int);
u32 __ct__7TObjectFP7TObject(int, int);
extern u32 TObjBgmColCtrl__instance;
extern s32 tl_05;
void create_controller__14TObjBgmColCtrlFv(void);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK __dl__7TObjectFPv(void *);
extern void *__vt__14TObjBgmColCtrl[];
extern u32 TObjBgmColCtrl__instance;
void *__dt__14TObjBgmColCtrlFv(void *arg0, s16 arg1);
}

extern "C" {

void run_task__14TObjBgmColCtrlFv(void *arg0);
s32 get_global_state__14TOKeyMachine01Fv();
M2C_UNK play_lobby_theme_music__14TObjBgmColCtrlFv();
s32 is_active__14TObjBgmColCtrlFv();
u32 get_player_by_client_id(s32);
s32 is_not_split_screen__13TRaderMapCoreFv();
s32 get_quest_bgm_issued_flag();
M2C_UNK run_tasks__7TObjectFv(void *);

extern s32 local_client_id;
extern s32 TLobby__event_theme_id;
extern s32 lbl_805D5B04;
extern u32 TObjBgmColCtrl__instance;
extern s32 TObjBgmColCtrl__current_theme_id;

void run_task__14TObjBgmColCtrlFv(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (temp_r4 - 1);
    if ((temp_r4 <= 0) && ((get_global_state__14TOKeyMachine01Fv() == 0xF) || (get_player_by_client_id(local_client_id) != 0U)) && (get_quest_bgm_issued_flag() == 0)) {
        if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
            if (is_active__14TObjBgmColCtrlFv() == 0) {
                play_lobby_theme_music__14TObjBgmColCtrlFv();
            }
        } else {
            lbl_805D5B04 = 0;
            void *thisObj = (void *)(u32)TObjBgmColCtrl__instance;
            if (thisObj != NULL) {
                run_tasks__7TObjectFv(thisObj);
            }
            if ((s32) lbl_805D5B04 == 0) {
                if (is_active__14TObjBgmColCtrlFv() == 0) {
                    play_lobby_theme_music__14TObjBgmColCtrlFv();
                }
                if ((get_global_state__14TOKeyMachine01Fv() == 0xF) && ((s32) TLobby__event_theme_id != (s32) TObjBgmColCtrl__current_theme_id)) {
                    play_lobby_theme_music__14TObjBgmColCtrlFv();
                }
            }
        }
    }
}
void create_controller__14TObjBgmColCtrlFv(void) {
    u32 temp_r3;
    u32 temp_r3_2;
    u32 var_r0;
    temp_r3 = __nw__7TObjectFUl((int) (0x1C));
    var_r0 = temp_r3;
    if (var_r0 != 0U) {
        var_r0 = __ct__7TObjectFP7TObject((int) (temp_r3), (int) (0));
    }
    TObjBgmColCtrl__instance = var_r0;
    temp_r3_2 = __nw__7TObjectFUl((int) (0x20));
    if (temp_r3_2 != 0U) {
        TObjBgmColCtrl__ct((int) (temp_r3_2), (int) (tl_05));
    }
    create_bgm_col_zones();
}
void *__dt__14TObjBgmColCtrlFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, void ***, 0x18) = __vt__14TObjBgmColCtrl;
        if (TObjBgmColCtrl__instance != 0) {
            delete (V_8017E410 *)TObjBgmColCtrl__instance;
            TObjBgmColCtrl__instance = 0;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
