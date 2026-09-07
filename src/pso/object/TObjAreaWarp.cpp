#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase8019CF38_8019CCF0 { char pad[0x18]; };
struct VObj8019CF38_8019CCF0 : VBase8019CF38_8019CCF0 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

struct RecoveredGlobal_8019D030___vt__17TObjMapWarpForest { M2C_UNK value; u8 remaining[0x50]; };
typedef char RecoveredGlobal_8019D030___vt__17TObjMapWarpForest_size[sizeof(RecoveredGlobal_8019D030___vt__17TObjMapWarpForest) == 0x54 ? 1 : -1];

extern "C" {
s32 TObjMapWarp__ct(void *);
s32 get_story_select__16TAdStorySelectGCFv();
s32 register_area_warp_object__16TAdStorySelectGCFPv(int);
s32 register_warp__16TObjMapForceWarpFPv(int);
extern RecoveredGlobal_8019D030___vt__17TObjMapWarpForest __vt__17TObjMapWarpForest;
extern s32 lbl_805D3464;
extern const f32 lbl_805DBFE4;
u8 *TObjMapWarpForest__ct(u8 *arg0);
}

extern "C" {

void *TObjAreaWarp__ct(void *arg0);
s32 is_warp_enabled__12TObjAreaWarpFi(s32 arg0);
void open_confirm_window__12TObjAreaWarpFPvUs(void *arg0, u16 arg1);
void render__17TObjMapWarpForestFv(u8 *arg0);
u32 TCheckRoomSequence__sub_802664A8(M2C_UNK, s32, u16);
s32 TLobby__sub_8030A7B0();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(s32);
s32 TObjCityMainWarp__sub_80186AF4();
M2C_UNK TObjDoor__sub_803DC894(s32, s32, f32);
s32 TObjLuker__sub_801329B0();
s32 TObjPlayer__sub_800196EC();
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TObjWarpBase__ct();
s32 TObjWarpBase__vt13(s32);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK TWindowSubComCard__sub_80265C30(u32);
M2C_UNK TWindowSubComCard__sub_80265F60(u32);
M2C_UNK TWindowSubComCard__sub_8026CBB8(M2C_UNK);
M2C_UNK TWindowSubTradeMain__sub_80266200(u32, s32, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
s32 check_flag_100__10TObjPlayerFPv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK fn_8019DD14(s32, M2C_UNK);
M2C_UNK get_player_floor__6TLobbyFi(s32);
s32 is_not_split_screen__13TRaderMapCoreFv();
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(u32);
M2C_UNK set_flag_40__16TAdChrSelASlotGCFPv(u32);
M2C_UNK set_global_param__8TObjFishFi(s32);

s32 is_warp_enabled__12TObjAreaWarpFi(s32 arg0) {
    s32 var_r31;

    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        var_r31 = 0;
loop_2:
        if ((TPlayerBattleCtrl4P__sub_801BA74C((s32)(var_r31)) != 0U) && (check_flag_100__10TObjPlayerFPv() != 0)) {
            return 0;
        }
        var_r31 += 1;
        if (var_r31 >= 4) {
            goto block_6;
        }
        goto loop_2;
    }
block_6:
    return TObjWarpBase__vt13(arg0);
}

void open_confirm_window__12TObjAreaWarpFPvUs(void *arg0, u16 arg1) {
    u32 temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0xB0) == 0U) {
        M2C_FIELD(arg0, u32 *, 0xB0) = TCheckRoomSequence__sub_802664A8(TWindowSubComCard__sub_8026CBB8(0x33), 1, arg1);
        if (TLobby__sub_8030A7B0() == 1) {
            TWindowSubTradeMain__sub_80266200(M2C_FIELD(arg0, u32 *, 0xB0), TObjCityMainWarp__sub_80186AF4(), 2, 0, -1);
        } else {
            get_player_floor__6TLobbyFi(M2C_FIELD(arg0, s32 *, 0xBC));
            TWindowSubTradeMain__sub_80266200(M2C_FIELD(arg0, u32 *, 0xB0), TObjLuker__sub_801329B0(), 2, 0, -1);
        }
        TWindowSubComCard__sub_80265F60(M2C_FIELD(arg0, u32 *, 0xB0));
        TWindowSubComCard__sub_80265C30(M2C_FIELD(arg0, u32 *, 0xB0));
        set_flag70_bit10__16TObjCityMainWarpFPv(M2C_FIELD(arg0, u32 *, 0xB0));
        set_flag_40__16TAdChrSelASlotGCFPv(M2C_FIELD(arg0, u32 *, 0xB0));
        M2C_FIELD(arg0, u16 *, 0xB8) = arg1;
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((s32)(M2C_FIELD(arg0, u16 *, 0xB8)));
        if (temp_r3 != 0U) {
            fn_8019DD14(temp_r3 + 0x550, 4);
        }
    }
}

extern M2C_UNK __vt__12TObjAreaWarp[];
extern s32 lbl_805D3468;
extern s32 lbl_805D5C80;

void *TObjAreaWarp__ct(void *arg0) {
    TObjWarpBase__ct();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TObjAreaWarp;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3468;
    M2C_FIELD(arg0, s32 *, 0xBC) = (s32) M2C_FIELD(arg0, s32 *, 0x84);
    if ((s32) lbl_805D5C80 != 0) {
        M2C_FIELD(arg0, s32 *, 0xBC) = (s32) (TObjPlayer__sub_800196EC() + 1);
    }
    M2C_FIELD(arg0, s32 *, 0xC0) = 0;
    return arg0;
}

extern const f32 lbl_805DBFD4;
extern const f32 lbl_805DBFD8;

void render__17TObjMapWarpForestFv(u8 *arg0) {
    if (((VObj8019CF38_8019CCF0 *) arg0)->m8(lbl_805DBFD4, lbl_805DBFD8) != 0) {
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x10C));
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(arg0, s32 *, 0x100));
        begin_effect_render__13TParticleCtrlFv();
        TObjDoor__sub_803DC894(M2C_FIELD(arg0, s32 *, 0x104), M2C_FIELD(arg0, s32 *, 0x108), M2C_FIELD(arg0, f32 *, 0xFC));
        end_effect_render__13TParticleCtrlFv();
        TObjPlayer__sub_803D9B78();
    }
}
u8 *TObjMapWarpForest__ct(u8 *arg0) {
    TObjMapWarp__ct((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__17TObjMapWarpForest.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3464;
    M2C_FIELD(arg0, s32 *, 0x100) = register_warp__16TObjMapForceWarpFPv((int) (4));
    M2C_FIELD(arg0, s32 *, 0x104) = register_warp__16TObjMapForceWarpFPv((int) (5));
    M2C_FIELD(arg0, s32 *, 0x108) = register_area_warp_object__16TAdStorySelectGCFPv((int) (2));
    M2C_FIELD(arg0, s32 *, 0x10C) = get_story_select__16TAdStorySelectGCFv();
    M2C_FIELD(arg0, f32 *, 0xFC) = (f32) lbl_805DBFE4;
    return arg0;
}

}
