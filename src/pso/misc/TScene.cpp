#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void run_task__6TSceneFv(void* p);
int TScene__sub_80203F0C(void*);
int set_field4__6TSceneFv(void*);
int TScene__sub_80203E88(void*);

void run_task__6TSceneFv(void* p) { set_field4__6TSceneFv(p); TScene__sub_80203F0C(p); TScene__sub_80203E88(p); }

}
#else
#if PSO_CLASS_PACKAGE == 0x80081B24
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TScene__sub_80081B24(void);

extern s32 TScene__data_805D5FCC;

s32 TScene__sub_80081B24(void) {
    return TScene__data_805D5FCC;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800838C4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_single_screen_state__6TSceneFv(void);
s32 check_all_players_ready__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_803DC83C(M2C_UNK);
M2C_UNK TObjPlayer__sub_803DC850(M2C_UNK);
s32 is_split_screen();

extern s32 some_id_805c6f74;

void apply_single_screen_state__6TSceneFv(void) {
    if ((is_split_screen() == 0) && (check_all_players_ready__10TObjPlayerFv() != 0)) {
        some_id_805c6f74 &= 0xFFF7FFFF;
        TObjPlayer__sub_803DC850(0);
        TObjPlayer__sub_803DC83C(0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F9D80
#include "types.h"

extern "C" {

s32 TLobby__sub_803CC500();
s32 TLobby__sub_803CCE9C(s32);
s32 TLobby__sub_803CD3A8(s32, s32);
int update_lobby_scene__6TSceneFPv(void* p);
int TLobby__sub_800FD944(void*);

int update_lobby_scene__6TSceneFPv(void* p) { return TLobby__sub_800FD944(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801FBA20
#include "types.h"

extern "C" {

int get_status__6TSceneFv(void);

    extern int lbl_805D5FC8;
int get_status__6TSceneFv(void) {  return lbl_805D5FC8; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802035C4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_player_ctrl_field__6TSceneFUs(u16 arg0);
u32 TPlayerBattleCtrl4P__sub_801BA74C(void *);
s32 TScene__sub_80203510(void *);

s32 get_player_ctrl_field__6TSceneFUs(u16 arg0) {
    u32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((void *) (arg0));
    if (temp_r3 != 0U) {
        return TScene__sub_80203510((void *) (temp_r3 + 0x38));
    }
    return -1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80205A54
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_field4__6TSceneFv(void);

extern void *TScene__data_805D5FCC;

void set_field4__6TSceneFv(void) {
    if ((void *) TScene__data_805D5FCC != NULL) {
        M2C_FIELD(TScene__data_805D5FCC, s32 *, 4) = 0x8F;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80205AE8
#include "types.h"

extern "C" {

void TScene__sub_80205AE8(void);

void TScene__sub_80205AE8(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80205E98
#include "types.h"

extern "C" {

void copy_header_and_vec__6TSceneFPvPv(void* p, void* q);

void copy_header_and_vec__6TSceneFPvPv(void* p, void* q) { *(u16*)((char*)p + 0x0) = *(u16*)((char*)q + 0x0); *(u16*)((char*)p + 0x2) = *(u16*)((char*)q + 0x2); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x8); *(f32*)((char*)p + 0xc) = *(f32*)((char*)q + 0xc); *(f32*)((char*)p + 0x10) = *(f32*)((char*)q + 0x10); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80205FD0
#include "types.h"

extern "C" {

void TScene__sub_80205FD0(void);

void TScene__sub_80205FD0(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80206494
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__6TSceneFv(void *arg0, s16 arg1);
M2C_UNK TScene__sub_80205AE8(M2C_UNK *);
M2C_UNK TScene__sub_80205FD4(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);

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

}
#endif
#if PSO_CLASS_PACKAGE == 0x802065B4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void create__6TSceneFv(void);
void *TScene__ct(void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_02;

void create__6TSceneFv(void) {
    void *o;
    o = __nw__7TObjectFUl(0x40);
    if (o != NULL) {
        TScene__ct(o, tl_02);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802065E8
#include "types.h"

extern "C" {

void TScene__sub_802065E8(void);
void TScene__sub_802065EC(void);

void TScene__sub_802065E8(void) {  }
void TScene__sub_802065EC(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80206A88
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void load_file_to_buffer__6TSceneFi(s32 arg0);
s32 get_global_state__14TOKeyMachine01Fv();
u32 alloc__22TQuestVmDownLoadServerFPv(s32);
s32 update_lobby_scene__6TSceneFPv(M2C_UNK *);
M2C_UNK TLobby__sub_800F9DF4(M2C_UNK *, u32);
M2C_UNK TLobby__sub_801317E4(M2C_UNK *, s32, M2C_UNK *);

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
    TLobby__sub_801317E4(sp8, arg0, lbl_8044A98C);
    temp_r31 = update_lobby_scene__6TSceneFPv(sp8);
    if (get_global_state__14TOKeyMachine01Fv() == 0xF) {
        if ((temp_r31 > 0) && ((u32) temp_r31 <= 0x100U)) {
            temp_r3 = alloc__22TQuestVmDownLoadServerFPv(0x100);
            TScene__data_805D6028 = temp_r3;
            if (temp_r3 != 0U) {
                TLobby__sub_800F9DF4(sp8, temp_r3);
                lbl_805D602C = 0x100;
            }
        }
    } else if (temp_r31 > 0) {
        temp_r3_2 = alloc__22TQuestVmDownLoadServerFPv(temp_r31);
        TScene__data_805D6028 = temp_r3_2;
        if (temp_r3_2 != 0U) {
            TLobby__sub_800F9DF4(sp8, temp_r3_2);
            lbl_805D602C = temp_r31;
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80206C38
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void load_map_texture_archive__6TSceneFi(s32 arg0);
s32 get_global_state__14TOKeyMachine01Fv();
s32 is_not_split_screen__13TRaderMapCoreFv();
u32 alloc__22TQuestVmDownLoadServerFPv(s32);
s32 update_lobby_scene__6TSceneFPv(char *);
M2C_UNK TLobby__sub_800F9DF4(char *, u32);
M2C_UNK TLobby__sub_801317E4(char *, s32, const char *);

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
        TLobby__sub_801317E4(sp8, arg0, lbl_8044A9A4);
        var_r30 = update_lobby_scene__6TSceneFPv(sp8);
    }
    if (var_r30 <= 0) {
        TLobby__sub_801317E4(sp8, arg0, lbl_8044A940);
        var_r30 = update_lobby_scene__6TSceneFPv(sp8);
    }
    if (temp_r31 == 0xF) {
        if ((var_r30 > 0) && ((u32) var_r30 <= 0x100U)) {
            temp_r3 = alloc__22TQuestVmDownLoadServerFPv(0x100);
            TScene__data_805D6004 = temp_r3;
            if (temp_r3 != 0U) {
                TLobby__sub_800F9DF4(sp8, temp_r3);
                lbl_805D6018 = 0x100;
            }
        }
    } else if (var_r30 > 0) {
        temp_r3_2 = alloc__22TQuestVmDownLoadServerFPv(var_r30);
        TScene__data_805D6004 = temp_r3_2;
        if (temp_r3_2 != 0U) {
            TLobby__sub_800F9DF4(sp8, temp_r3_2);
            lbl_805D6018 = var_r30;
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80206F20
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void load_scene_data__6TSceneFi(s32 arg0);
s32 *TItemDrop__sub_800F94BC(M2C_UNK *, u32);
s32 get_global_state__14TOKeyMachine01Fv();
u32 get_map_count__10TObjMapCsnFv();
M2C_UNK alloc_scene_buffer__18TObjButterflyLobbyFv();
u32 alloc__22TQuestVmDownLoadServerFPv(s32);
s32 update_lobby_scene__6TSceneFPv(M2C_UNK *);
M2C_UNK debug_print__6TLobbyFii(M2C_UNK *, ...);
M2C_UNK TLobby__sub_801317E4(M2C_UNK *, s32, M2C_UNK *);
M2C_UNK fn_80140F18(u32, s32);

extern M2C_UNK lbl_8044A950[];
extern M2C_UNK lbl_8044A958[];
extern s32 *lbl_805D4E68;
extern u32 TScene__data_805D6000;
extern s32 lbl_805D6014;

struct Sp8Buf20 {
    s32 f0; s32 f4; s32 f8; s32 fc;
    s32 f10; s32 f14; s32 f18; s32 f1c;
};

void load_scene_data__6TSceneFi(s32 arg0) {
    struct Sp8Buf20 sp8;
    s32 temp_r31;
    u32 temp_r3;
    u32 temp_r3_2;

    alloc_scene_buffer__18TObjButterflyLobbyFv();
    lbl_805D4E68 = NULL;
    TScene__data_805D6000 = 0U;
    lbl_805D6014 = 0;
    TLobby__sub_801317E4((M2C_UNK *)&sp8, arg0, lbl_8044A950);
    temp_r31 = update_lobby_scene__6TSceneFPv((M2C_UNK *)&sp8);
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
#endif
#if PSO_CLASS_PACKAGE == 0x8029F5EC
#include "types.h"

extern "C" {

void TScene__sub_8029F5EC(void);

    extern int TScene__data_805D5FE0;
void TScene__sub_8029F5EC(void) { TScene__data_805D5FE0 = 1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A8140
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_indirect_tev__6TSceneFii(M2C_UNK ignored, s32 arg1);
void draw_field_1c__6TSceneFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3);
M2C_UNK GXSetNumIndStages(M2C_UNK);
M2C_UNK GXSetTevDirect(M2C_UNK);
M2C_UNK play_particle_at_active_slot__10TObjPlayerFiiiiii(u8, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TObjPlayer__sub_803DC83C(M2C_UNK);

void set_indirect_tev__6TSceneFii(M2C_UNK ignored, s32 arg1) {
    if (arg1 != 0) {
        GXSetTevDirect(1);
    } else {
        GXSetTevDirect(0);
    }
    GXSetNumIndStages(0);
    TObjPlayer__sub_803DC83C(0);
}

void draw_field_1c__6TSceneFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    play_particle_at_active_slot__10TObjPlayerFiiiiii(M2C_FIELD(arg0, u8 *, 0x1C), arg1, arg2, 0, arg3, 0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A81B8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TScene__sub_802A81B8(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK lbl_804DDF04[];

void *TScene__sub_802A81B8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804DDF04;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80327B00
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void offset_position__6TSceneFPvii(void *arg0, s32 arg1, s32 arg2);
M2C_UNK TScene__sub_80327B40(void *, s16, s16);

void offset_position__6TSceneFPvii(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, s16 *, 0x10) + arg1);
    M2C_FIELD(arg0, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, s16 *, 0x12) + arg2);
    TScene__sub_80327B40(arg0, M2C_FIELD(arg0, s16 *, 0x10), M2C_FIELD(arg0, s16 *, 0x12));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80327C18
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *destroy_buffers__6TSceneFPvs(void *arg0, s16 arg1);
void *init_buffers__6TSceneFPvii(void *arg0, s32 arg1, s32 arg2);
s32 alloc_buffer__11TOBoss4RockFPv(s32);
M2C_UNK __dl__FPv(void *);
M2C_UNK fn_80327844(void *, s32, s32);
M2C_UNK fn_803279CC();
M2C_UNK free__11TOBoss4RockFUi(void *);

void *destroy_buffers__6TSceneFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0xC) != 0U) {
            free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0xC));
            M2C_FIELD(arg0, u32 *, 0xC) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 8) != 0U) {
            free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 8));
            M2C_FIELD(arg0, u32 *, 8) = 0U;
        }
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_805D6C70;
extern s32 lbl_805D6C74;

void *init_buffers__6TSceneFPvii(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    fn_803279CC();
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r0 > 0) {
        M2C_FIELD(arg0, s32 *, 8) = alloc_buffer__11TOBoss4RockFPv(temp_r0 * 8);
        M2C_FIELD(arg0, s32 *, 0xC) = alloc_buffer__11TOBoss4RockFPv(M2C_FIELD(arg0, s32 *, 0) * 4);
        lbl_805D6C70 = M2C_FIELD(arg0, s32 *, 8);
        lbl_805D6C74 = M2C_FIELD(arg0, s32 *, 0xC);
        fn_80327844(arg0, arg1, arg2);
    }
    M2C_FIELD(arg0, s16 *, 0x10) = 0;
    M2C_FIELD(arg0, s16 *, 0x12) = 0;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803DCDA8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_current_scene__6TSceneFi(s32 arg0);

extern s32 lbl_805D46D0;

void set_current_scene__6TSceneFi(s32 arg0) {
    lbl_805D46D0 = arg0;
}

}
#endif
#endif
