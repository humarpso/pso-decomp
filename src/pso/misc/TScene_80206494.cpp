#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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
void *TScene__ct(void *, void *);
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

void create__6TSceneFv(void) {
    void *o;
    o = __nw__7TObjectFUl(0x40);
    if (o != NULL) {
        TScene__ct(o, tl_02);
    }
}

void TScene__sub_802065E8(void) {  }
void TScene__sub_802065EC(void) {  }

extern M2C_UNK lbl_8044A98C[];
extern u32 TScene__data_805D6028;
extern s32 lbl_805D602C;

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
