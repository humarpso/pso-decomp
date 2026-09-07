#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8020650C___vt__6TScene { M2C_UNK value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_8020650C___vt__6TScene_size[sizeof(RecoveredGlobal_8020650C___vt__6TScene) == 0x18 ? 1 : -1];

extern "C" {
M2C_UNK free_singleton_805D4E6C__18TObjButterflyLobbyFv();
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);
M2C_UNK fn_800F8A0C();
M2C_UNK copy_name(M2C_UNK *);
s32 strncmp(M2C_UNK, s32, M2C_UNK);
M2C_UNK TLobby__sub_803DA16C(u32);
extern s32 TScene__data_805D3610;
extern s32 *lbl_805D4E68;
extern void *TScene__data_805D5FCC;
extern u32 TScene__data_805D5FFC;
extern u32 TScene__data_805D6000;
extern u32 TScene__data_805D6004;
extern u32 TScene__data_805D6008;
extern u32 TScene__data_805D6020;
extern u32 TScene__data_805D6028;
extern M2C_UNK lbl_805DC604;
void TScene__sub_80206984(void);
s32 get_global_state__14TOKeyMachine01Fv();
s32 TScene__sub_80205AEC(void *);
s32 TScene__sub_80205CC4(void *);
s32 TScene__sub_80206410(void *);
s32 __ct__7TObjectFP7TObject(void *, void *);
extern M2C_UNK __vt__6TScene[];
extern s32 lbl_805D3618;
extern void *TScene__data_805D5FCC;
extern u32 TScene__data_805D5FD0;
u8 *TScene__ct(u8 *arg0, s32 arg1);
}

extern "C" {

struct Sp8Buf20_80206494 {
    s32 f0; s32 f4; s32 f8; s32 fc;
    s32 f10; s32 f14; s32 f18; s32 f1c;
};

void TScene__sub_802065E8(void);
void TScene__sub_802065EC(void);
void *__dt__6TSceneFv(void *arg0, s16 arg1);
void create__6TSceneFv(void);
void load_file_to_buffer__6TSceneFi(s32 arg0);
void load_map_texture_archive__6TSceneFi(s32 arg0);
void load_scene_data__6TSceneFi(s32 arg0);
s32 *TItemDrop__sub_800F94BC(M2C_UNK *, u32);
M2C_UNK TLobby__sub_800F9DF4(char *, u32);
M2C_UNK TLobby__sub_801317E4(M2C_UNK *, s32, M2C_UNK *);
M2C_UNK TScene__sub_80205AE8(M2C_UNK *);
M2C_UNK TScene__sub_80205FD4(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
void *__nw__7TObjectFUl(int);
u32 alloc__22TQuestVmDownLoadServerFPv(s32);
M2C_UNK alloc_scene_buffer__18TObjButterflyLobbyFv();
M2C_UNK debug_print__6TLobbyFii(M2C_UNK *, ...);
M2C_UNK fn_80140F18(u32, s32);
s32 get_global_state__14TOKeyMachine01Fv();
u32 get_map_count__10TObjMapCsnFv();
s32 is_not_split_screen__13TRaderMapCoreFv();
s32 update_lobby_scene__6TSceneFPv(char *);

extern M2C_UNK __vt__6TScene[];
extern s32 TScene__data_805D5FEC;
extern s32 TScene__data_805D5FF0;
extern s32 TScene__data_805D5FF4;

void *__dt__6TSceneFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__6TScene;
        TScene__sub_80205AE8((M2C_UNK *)arg0);
        TScene__sub_80205FD4(arg0);
        TScene__data_805D5FEC = 0;
        TScene__data_805D5FF0 = 0;
        TScene__data_805D5FF4 = 0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_02;

u8 *TScene__ct(u8 *arg0, s32 arg1) {
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8020650C___vt__6TScene *)&__vt__6TScene).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3618;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0x32;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    TScene__sub_80206410((void *) (arg0));
    if ((get_global_state__14TOKeyMachine01Fv() == 1) && ((u32) TScene__data_805D5FD0 != 0U) && ((void *) (*(u8 * *)&TScene__data_805D5FCC) != NULL) && ((u32) M2C_FIELD((*(u8 * *)&TScene__data_805D5FCC), u32 *, 0x14) != 0U)) {
        TScene__sub_80205CC4((void *) (arg0));
    }
    TScene__sub_80205AEC((void *) (arg0));
    return arg0;
}

void create__6TSceneFv(void) {
    void *o;
    o = __nw__7TObjectFUl(0x40);
    if (o != NULL) {
        TScene__ct((u8 *)(o), (s32)(tl_02));
    }
}

void TScene__sub_802065E8(void) {  }
void TScene__sub_802065EC(void) {  }

extern M2C_UNK lbl_8044A98C[];
extern u32 TScene__data_805D6028;
extern s32 lbl_805D602C;

#pragma push
#pragma fp_contract on
void TScene__sub_80206984(void) {
    u32 temp_r3;
    temp_r3 = TScene__data_805D6028;
    if (temp_r3 != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi(temp_r3);
        TScene__data_805D6028 = 0U;
    }
    temp_r3 = TScene__data_805D6020;
    if (temp_r3 != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi(temp_r3);
        TScene__data_805D6020 = 0U;
    }
    temp_r3 = TScene__data_805D6004;
    if (temp_r3 != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi(temp_r3);
        TScene__data_805D6004 = 0U;
    }
    temp_r3 = TScene__data_805D6008;
    if (temp_r3 != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi(temp_r3);
        TScene__data_805D6008 = 0U;
    }
    temp_r3 = (u32)TScene__data_805D5FCC;
    if (temp_r3 != 0U) {
        if ((temp_r3 = *(u32*)((u8*)TScene__data_805D5FCC + 0x14)) != 0U) {
            TLobby__sub_803DA16C(temp_r3);
            M2C_FIELD(TScene__data_805D5FCC, u32 *, 0x14) = 0U;
        }
    }
    temp_r3 = TScene__data_805D6000;
    if (temp_r3 != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi(temp_r3);
        TScene__data_805D6000 = 0U;
    }
    free_singleton_805D4E6C__18TObjButterflyLobbyFv();
    temp_r3 = TScene__data_805D5FFC;
    if (temp_r3 != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi(temp_r3);
        TScene__data_805D5FFC = 0U;
    }
    (*(s32 *)&lbl_805D4E68) = 0;
    TScene__data_805D5FCC = NULL;
    if (strncmp(fn_800F8A0C(), TScene__data_805D3610, 0x10) == 0) {
        copy_name(&lbl_805DC604);
    }
}
#pragma pop

void load_file_to_buffer__6TSceneFi(s32 arg0) {
    M2C_UNK sp8[8];
    s32 temp_r31;
    u32 temp_r3;
    u32 temp_r3_2;

    TScene__data_805D6028 = 0U;
    lbl_805D602C = 0;
    TLobby__sub_801317E4((M2C_UNK *)(sp8), (s32)(arg0), (M2C_UNK *)(lbl_8044A98C));
    temp_r31 = update_lobby_scene__6TSceneFPv((char *)(sp8));
    if (get_global_state__14TOKeyMachine01Fv() == 0xF) {
        if ((temp_r31 > 0) && ((u32) temp_r31 <= 0x100U)) {
            temp_r3 = alloc__22TQuestVmDownLoadServerFPv(0x100);
            TScene__data_805D6028 = temp_r3;
            if (temp_r3 != 0U) {
                TLobby__sub_800F9DF4((char *)(sp8), (u32)(temp_r3));
                lbl_805D602C = 0x100;
            }
        }
    } else if (temp_r31 > 0) {
        temp_r3_2 = alloc__22TQuestVmDownLoadServerFPv(temp_r31);
        TScene__data_805D6028 = temp_r3_2;
        if (temp_r3_2 != 0U) {
            TLobby__sub_800F9DF4((char *)(sp8), (u32)(temp_r3_2));
            lbl_805D602C = temp_r31;
        }
    }
}

extern const char lbl_8044A940[];
extern const char lbl_8044A9A4[];
extern u32 TScene__data_805D6004;
extern s32 lbl_805D6018;

void load_map_texture_archive__6TSceneFi(s32 arg0) {
    char sp8[0x20];
    s32 temp_r31;
    s32 var_r30;
    u32 temp_r3;
    u32 temp_r3_2;

    temp_r31 = get_global_state__14TOKeyMachine01Fv();
    TScene__data_805D6004 = 0U;
    var_r30 = 0;
    lbl_805D6018 = 0;
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        TLobby__sub_801317E4((M2C_UNK *)(sp8), (s32)(arg0), (M2C_UNK *)(lbl_8044A9A4));
        var_r30 = update_lobby_scene__6TSceneFPv((char *)(sp8));
    }
    if (var_r30 <= 0) {
        TLobby__sub_801317E4((M2C_UNK *)(sp8), (s32)(arg0), (M2C_UNK *)(lbl_8044A940));
        var_r30 = update_lobby_scene__6TSceneFPv((char *)(sp8));
    }
    if (temp_r31 == 0xF) {
        if ((var_r30 > 0) && ((u32) var_r30 <= 0x100U)) {
            temp_r3 = alloc__22TQuestVmDownLoadServerFPv(0x100);
            TScene__data_805D6004 = temp_r3;
            if (temp_r3 != 0U) {
                TLobby__sub_800F9DF4((char *)(sp8), (u32)(temp_r3));
                lbl_805D6018 = 0x100;
            }
        }
    } else if (var_r30 > 0) {
        temp_r3_2 = alloc__22TQuestVmDownLoadServerFPv(var_r30);
        TScene__data_805D6004 = temp_r3_2;
        if (temp_r3_2 != 0U) {
            TLobby__sub_800F9DF4((char *)(sp8), (u32)(temp_r3_2));
            lbl_805D6018 = var_r30;
        }
    }
}

extern M2C_UNK lbl_8044A950[];
extern M2C_UNK lbl_8044A958[];
extern s32 *lbl_805D4E68;
extern u32 TScene__data_805D6000;
extern s32 lbl_805D6014;

void load_scene_data__6TSceneFi(s32 arg0) {
    struct Sp8Buf20_80206494 sp8;
    s32 temp_r31;
    u32 temp_r3;
    u32 temp_r3_2;

    alloc_scene_buffer__18TObjButterflyLobbyFv();
    lbl_805D4E68 = NULL;
    TScene__data_805D6000 = 0U;
    lbl_805D6014 = 0;
    TLobby__sub_801317E4((M2C_UNK *)((M2C_UNK *)&sp8), (s32)(arg0), (M2C_UNK *)(lbl_8044A950));
    temp_r31 = update_lobby_scene__6TSceneFPv((char *)((M2C_UNK *)&sp8));
    if (get_global_state__14TOKeyMachine01Fv() == 0xF) {
        if ((temp_r31 > 0) && ((u32) temp_r31 <= 0x10000U)) {
            temp_r3 = alloc__22TQuestVmDownLoadServerFPv(0x10000);
            TScene__data_805D6000 = temp_r3;
            if (temp_r3 != 0U) {
                lbl_805D4E68 = TItemDrop__sub_800F94BC((M2C_UNK *)&sp8, temp_r3);
                lbl_805D6014 = 0x10000;
            }
        }
    } else if (temp_r31 > 0) {
        temp_r3_2 = alloc__22TQuestVmDownLoadServerFPv(temp_r31);
        TScene__data_805D6000 = temp_r3_2;
        if (temp_r3_2 != 0U) {
            lbl_805D4E68 = TItemDrop__sub_800F94BC((M2C_UNK *)&sp8, temp_r3_2);
            lbl_805D6014 = temp_r31;
        }
    }
    if (((s32 *) lbl_805D4E68 != NULL) && (get_map_count__10TObjMapCsnFv() != 0U)) {
        u32 temp_csn = get_map_count__10TObjMapCsnFv();
        fn_80140F18(temp_csn, *lbl_805D4E68);
        return;
    }
    debug_print__6TLobbyFii(lbl_8044A958);
}

}
