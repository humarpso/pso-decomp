#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create_tasks__6TLobbyFv(void);
M2C_UNK TCineCtrl__ct(u32, s32);
M2C_UNK TFogCtrl__sub_800FBB68();
M2C_UNK THunterGuildSeqOnlineTask__ct(u32, s32);
s32 is_scene_ready__6TLobbyFv();
M2C_UNK TLobby__sub_80208BD8();
M2C_UNK cleanup_game_objects__9TMainTaskFv();
s32 TOKeyMachine01__sub_802034A8();
M2C_UNK TTecLuker__sub_80233F8C();
M2C_UNK TWindowCtrlMain__ct();
M2C_UNK TWindowCtrl__ct(u32, s32);
M2C_UNK __ct__7TSwitchFv(u32, s32);
M2C_UNK __ct__8TTecCtrlFv(u32, s32);
u32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK create__13TRaderMapCoreFv();
M2C_UNK create__6TSceneFv();
M2C_UNK create_instance__10TSceneSoraFv();
M2C_UNK init_subobject__6TLobbyFPvPvPv(u32, s32, M2C_UNK);
M2C_UNK set_fade_params__6TLobbyFi(M2C_UNK);
M2C_UNK ct_register__6TLobbyFPv(u32, s32);
M2C_UNK fn_80198D98();
M2C_UNK create__11TSetManagerFv();
M2C_UNK fn_8032BDC4(u32, s32);
M2C_UNK fn_8033ED24(u32, s32);
M2C_UNK TNpcPlayer__sub_8034DD14(u32, s32);
M2C_UNK TLobby__sub_80351F3C();
s32 get_main_phase();
M2C_UNK init__13TQuestColCtrlFv();
s32 is_split_screen();

extern s32 tl_00;
extern s32 tl_01;
extern s32 tl_06;
extern s32 tl_particlemodel;
extern s32 tl_fade;

void create_tasks__6TLobbyFv(void) {
    u32 tmp;
    TFogCtrl__sub_800FBB68();
    if (is_split_screen() == 0) {
        tmp = __nw__7TObjectFUl(0x20);
        if (tmp != 0U) {
            init_subobject__6TLobbyFPvPvPv(tmp, tl_particlemodel, 1);
        }
        tmp = __nw__7TObjectFUl(0x20);
        if (tmp != 0U) {
            init_subobject__6TLobbyFPvPvPv(tmp, tl_particlemodel, 0);
        }
        tmp = __nw__7TObjectFUl(0x84);
        if (tmp != 0U) {
            fn_8032BDC4(tmp, tl_particlemodel);
        }
        tmp = __nw__7TObjectFUl(0x24);
        if (tmp != 0U) {
            fn_8033ED24(tmp, tl_particlemodel);
        }
    }
    cleanup_game_objects__9TMainTaskFv();
    create__6TSceneFv();
    create_instance__10TSceneSoraFv();
    create__11TSetManagerFv();
    TLobby__sub_80208BD8();
    tmp = __nw__7TObjectFUl(0x1C);
    if (tmp != 0U) {
        TWindowCtrlMain__ct();
    }
    tmp = __nw__7TObjectFUl(0xE8);
    if (tmp != 0U) {
        TWindowCtrl__ct(tmp, tl_00);
    }
    tmp = __nw__7TObjectFUl(0x2C);
    if (tmp != 0U) {
        ct_register__6TLobbyFPv(tmp, tl_fade);
    }
    set_fade_params__6TLobbyFi(0);
    tmp = __nw__7TObjectFUl(0x30);
    if (tmp != 0U) {
        TCineCtrl__ct(tmp, tl_00);
    }
    create__13TRaderMapCoreFv();
    TTecLuker__sub_80233F8C();
    tmp = __nw__7TObjectFUl(0x20);
    if (tmp != 0U) {
        TNpcPlayer__sub_8034DD14(tmp, tl_06);
    }
    tmp = __nw__7TObjectFUl(0x28);
    if (tmp != 0U) {
        __ct__7TSwitchFv(tmp, tl_00);
    }
    init__13TQuestColCtrlFv();
    if (TOKeyMachine01__sub_802034A8() == 0xF) {
        TLobby__sub_80351F3C();
    }
    if ((TOKeyMachine01__sub_802034A8() == 0xF) && (is_scene_ready__6TLobbyFv() != 0)) {
        fn_80198D98();
    }
    if ((get_main_phase() == 0xF) && ((TOKeyMachine01__sub_802034A8() == 0) || (TOKeyMachine01__sub_802034A8() == 0x12))) {
        tmp = __nw__7TObjectFUl(0x1C);
        if (tmp != 0U) {
            THunterGuildSeqOnlineTask__ct(tmp, tl_01);
        }
    }
    tmp = __nw__7TObjectFUl(0x24);
    if (tmp != 0U) {
        __ct__8TTecCtrlFv(tmp, tl_01);
    }
}

}
