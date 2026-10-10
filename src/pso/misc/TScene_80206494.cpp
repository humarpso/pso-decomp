#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8020650C___vt__6TScene { M2C_UNK value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_8020650C___vt__6TScene_size[sizeof(RecoveredGlobal_8020650C___vt__6TScene) == 0x18 ? 1 : -1];

typedef s32 M2C_UNK;
struct Ent_802066BC { char *name; s32 idx; };

struct Res_8020681C { s32 table; s32 index; s32 pad; };

struct Res_80207038 { s32 table; s32 index; s32 pad; };

extern "C" {
M2C_UNK free_singleton_805D4E6C__18TObjButterflyLobbyFv();
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);
M2C_UNK get_player_name_copy_buffer();
M2C_UNK copy_name(M2C_UNK *);
s32 strncmp(M2C_UNK, s32, M2C_UNK);
M2C_UNK TLobby__sub_803DA16C(u32);
extern s32 TScene__current_floor_name;
extern s32 *scene_collision_data;
extern void *TScene__data_805D5FCC;
extern u32 TScene__map_rel_load_buffer;
extern u32 TScene__collision_file_buffer;
extern u32 TScene__texture_animation_buffer;
extern u32 TScene__supplementary_rel_buffer;
extern u32 TScene__data_805D6020;
extern u32 TScene__material_info_buffer;
extern M2C_UNK lbl_805DC604;
void free_scene_resources__6TSceneFv(void);
s32 get_global_state__14TOKeyMachine01Fv();
s32 init_material_nodes__6TSceneFPv(void *);
s32 create_texture_wave_tasks__6TSceneFi(void *);
s32 TScene__sub_80206410(void *);
s32 __ct__7TObjectFP7TObject(void *, void *);
extern M2C_UNK __vt__6TScene[];
extern s32 lbl_805D3618;
extern void *TScene__data_805D5FCC;
extern u32 TScene__texture_wave_resource;
u8 *TScene__ct(u8 *arg0, s32 arg1);
M2C_UNK replace_file_extension__6TLobbyFPvPvPv(M2C_UNK *, s32, M2C_UNK *);
s32 update_lobby_scene__6TSceneFPv(char *);
s32 *load_relocatable_file(M2C_UNK *, u32);
s32 strncmp(M2C_UNK, s32, M2C_UNK);
extern u8 lbl_8044A948[];
extern Ent_802066BC scene_format_dispatch_tables[];
extern void *TScene__data_805D5FCC;
extern s32 TScene__data_805D5FE8;
extern u32 TScene__map_rel_load_buffer;
extern s32 TScene__data_805D6010;
void load_scene_map_file(s32 arg0);
M2C_UNK copy_name(M2C_UNK *);
s32 update_lobby_scene__6TSceneFPv(char *);
M2C_UNK replace_file_extension__6TLobbyFPvPvPv(M2C_UNK *, s32, M2C_UNK *);
void TScene__sub_802065E8(void);
void TScene__sub_802065EC(void);
void load_scene_map_file(s32 arg0);
s32 get_floor_map_selection(s32, void *);
Ent_802066BC *get_floor_scene_table(s32);
void bind_gvm_texture_list(M2C_UNK *, u32);
s32 is_not_split_screen__13TRaderMapCoreFv();
M2C_UNK TLobby__sub_803DA16C(u32);
extern M2C_UNK lbl_8044A97C[];
extern M2C_UNK lbl_8044A984[];
extern s32 TScene__current_floor_name;
extern s32 current_floor_index;
extern s32 scene_resource_index;
extern void *TScene__data_805D5FCC;
extern s8 TScene__data_805D5FD4;
extern s32 TScene__data_805D5FE0;
extern f32 TScene__visibility_radius_margin;
extern s32 TScene__data_805D5FEC;
extern s32 TScene__data_805D5FF0;
extern s32 TScene__render_callback;
extern const f32 TScene__data_805DC5D8;
extern M2C_UNK lbl_805DC604;
void load_floor_scene(void);
M2C_UNK copy_name(M2C_UNK *);
s32 update_lobby_scene__6TSceneFPv(char *);
M2C_UNK replace_file_extension__6TLobbyFPvPvPv(M2C_UNK *, s32, M2C_UNK *);
void load_file_to_buffer__6TSceneFi(s32 arg0);
void load_map_texture_archive__6TSceneFi(s32 arg0);
void load_scene_data__6TSceneFi(s32 arg0);
s32 get_floor_map_selection(s32, void *);
Ent_802066BC *get_floor_scene_table(s32);
void bind_gvm_texture_list(M2C_UNK *, u32);
s32 is_not_split_screen__13TRaderMapCoreFv();
extern M2C_UNK lbl_8044A97C[];
extern M2C_UNK lbl_8044A984[];
extern s32 TScene__current_floor_name;
extern s32 current_floor_index;
extern s32 scene_resource_index;
extern void *TScene__data_805D5FCC;
extern s8 TScene__data_805D5FD4;
extern s32 TScene__data_805D5FE0;
extern f32 TScene__visibility_radius_margin;
extern s32 TScene__data_805D5FEC;
extern s32 TScene__data_805D5FF0;
extern s32 TScene__render_callback;
extern s32 TScene__data_805D5FE8;
extern s32 lbl_805D5FF8;
extern u32 TScene__map_rel_load_buffer;
extern u32 TScene__collision_file_buffer;
extern u32 TScene__texture_animation_buffer;
extern u32 TScene__supplementary_rel_buffer;
extern s32 lbl_805D600C;
extern s32 TScene__data_805D6010;
extern s32 lbl_805D6014;
extern s32 lbl_805D6018;
extern s32 TScene__data_805D601C;
extern u32 TScene__data_805D6020;
extern s32 lbl_805D6024;
extern u32 TScene__material_info_buffer;
extern s32 lbl_805D602C;
extern const f32 TScene__data_805DC5D8;
void load_current_floor__6TSceneFv(void);
s32 *load_relocatable_file(M2C_UNK *, u32);
M2C_UNK replace_file_extension__6TLobbyFPvPvPv(M2C_UNK *, s32, M2C_UNK *);
M2C_UNK debug_print__6TLobbyFii(M2C_UNK *, ...);
M2C_UNK collect_collision_groups(u32, s32);
u32 get_map_count__10TObjMapCsnFv();
s32 update_lobby_scene__6TSceneFPv(char *);
extern M2C_UNK lbl_8044A950[];
extern M2C_UNK lbl_8044A958[];
extern s32 *scene_collision_data;
extern u32 TScene__collision_file_buffer;
extern s32 lbl_805D6014;
void load_scene_collision_file(s32 arg0);
u32 alloc__22TQuestVmDownLoadServerFPv(s32);
s32 *load_relocatable_file(M2C_UNK *, u32);
s32 update_lobby_scene__6TSceneFPv(char *);
M2C_UNK replace_file_extension__6TLobbyFPvPvPv(M2C_UNK *, s32, M2C_UNK *);
extern u8 lbl_8044A938[];
extern u32 TScene__texture_wave_resource;
extern u32 TScene__supplementary_rel_buffer;
extern s32 TScene__data_805D601C;
void load_supplementary_t_rel__6TSceneFv(s32 arg0);
s32 *load_relocatable_file(M2C_UNK *, u32);
s32 update_lobby_scene__6TSceneFPv(char *);
M2C_UNK replace_file_extension__6TLobbyFPvPvPv(M2C_UNK *, s32, M2C_UNK *);
extern u8 lbl_8044A938[];
extern u32 TScene__texture_wave_resource;
extern u32 TScene__supplementary_rel_buffer;
extern s32 TScene__data_805D601C;
void load_floor_rel_file__6TSceneFi(s32 arg0);
s32 update_lobby_scene__6TSceneFPv(char *);
M2C_UNK read_disc_file(char *, u32);
M2C_UNK replace_file_extension__6TLobbyFPvPvPv(M2C_UNK *, s32, M2C_UNK *);
extern const char lbl_8044A940[];
extern u32 TScene__texture_animation_buffer;
extern s32 lbl_805D6018;
void load_tam_file__6TSceneFi(s32 arg0);
u32 alloc__22TQuestVmDownLoadServerFPv(s32);
s32 update_lobby_scene__6TSceneFPv(char *);
M2C_UNK read_disc_file(char *, u32);
M2C_UNK replace_file_extension__6TLobbyFPvPvPv(M2C_UNK *, s32, M2C_UNK *);
s32 get_global_state__14TOKeyMachine01Fv();
s32 is_not_split_screen__13TRaderMapCoreFv();
extern u8 lbl_8044A994[];
extern u8 lbl_8044A99C[];
extern u32 TScene__data_805D6020;
extern s32 lbl_805D6024;
void load_floor_bin_file__6TSceneFi(s32 arg0);
u32 alloc__22TQuestVmDownLoadServerFPv(s32);
s32 *load_relocatable_file(M2C_UNK *, u32);
s32 update_lobby_scene__6TSceneFPv(char *);
M2C_UNK replace_file_extension__6TLobbyFPvPvPv(M2C_UNK *, s32, M2C_UNK *);
s32 get_global_state__14TOKeyMachine01Fv();
s32 is_not_split_screen__13TRaderMapCoreFv();
s32 strncmp(M2C_UNK, s32, M2C_UNK);
extern u8 lbl_8044A948[];
extern u8 lbl_8044A9AC[];
extern Ent_802066BC scene_format_dispatch_tables[];
extern void *TScene__data_805D5FCC;
extern s32 TScene__data_805D5FE8;
extern u32 TScene__map_rel_load_buffer;
extern s32 TScene__data_805D6010;
void load_scene_rel_file__6TSceneFi(s32 arg0);
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
s32 *load_relocatable_file(M2C_UNK *, u32);
M2C_UNK read_disc_file(char *, u32);
M2C_UNK replace_file_extension__6TLobbyFPvPvPv(M2C_UNK *, s32, M2C_UNK *);
M2C_UNK TScene__sub_80205AE8(M2C_UNK *);
M2C_UNK TScene__sub_80205FD4(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
void *__nw__7TObjectFUl(int);
u32 alloc__22TQuestVmDownLoadServerFPv(s32);
M2C_UNK alloc_scene_buffer__18TObjButterflyLobbyFv();
M2C_UNK debug_print__6TLobbyFii(M2C_UNK *, ...);
M2C_UNK collect_collision_groups(u32, s32);
s32 get_global_state__14TOKeyMachine01Fv();
u32 get_map_count__10TObjMapCsnFv();
s32 is_not_split_screen__13TRaderMapCoreFv();
s32 update_lobby_scene__6TSceneFPv(char *);

extern M2C_UNK __vt__6TScene[];
extern s32 TScene__data_805D5FEC;
extern s32 TScene__data_805D5FF0;
extern s32 TScene__render_callback;

void *__dt__6TSceneFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__6TScene;
        TScene__sub_80205AE8((M2C_UNK *)arg0);
        TScene__sub_80205FD4(arg0);
        TScene__data_805D5FEC = 0;
        TScene__data_805D5FF0 = 0;
        TScene__render_callback = 0;
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
    if ((get_global_state__14TOKeyMachine01Fv() == 1) && ((u32) TScene__texture_wave_resource != 0U) && ((void *) (*(u8 * *)&TScene__data_805D5FCC) != NULL) && ((u32) M2C_FIELD((*(u8 * *)&TScene__data_805D5FCC), u32 *, 0x14) != 0U)) {
        create_texture_wave_tasks__6TSceneFi((void *) (arg0));
    }
    init_material_nodes__6TSceneFPv((void *) (arg0));
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
extern u32 TScene__material_info_buffer;
extern s32 lbl_805D602C;

void load_floor_rel_file__6TSceneFi(s32 arg0) {
    u8 sp8[0x20];
    replace_file_extension__6TLobbyFPvPvPv((M2C_UNK *)sp8, arg0, (M2C_UNK *)lbl_8044A938);
    if (update_lobby_scene__6TSceneFPv((char *)sp8) <= TScene__data_805D601C) {
        if (TScene__supplementary_rel_buffer != 0U) {
            TScene__texture_wave_resource = (u32)load_relocatable_file((M2C_UNK *)sp8, TScene__supplementary_rel_buffer);
        } else {
            TScene__texture_wave_resource = 0;
        }
    }
}

void load_tam_file__6TSceneFi(s32 arg0) {
    u8 sp8[0x20];
    replace_file_extension__6TLobbyFPvPvPv((M2C_UNK *)sp8, arg0, (M2C_UNK *)((u8 *)&lbl_8044A940));
    if (update_lobby_scene__6TSceneFPv((char *)sp8) <= lbl_805D6018) {
        if (TScene__texture_animation_buffer != 0U) {
            read_disc_file((char *)sp8, TScene__texture_animation_buffer);
        } else {
            TScene__texture_animation_buffer = 0;
        }
    }
}

void load_scene_map_file(s32 arg0) {
    u8 sp8[0x20];
    Ent_802066BC *e;
    TScene__data_805D5FCC = NULL;
    TScene__data_805D5FE8 = -1;
    replace_file_extension__6TLobbyFPvPvPv((M2C_UNK *)sp8, arg0, (M2C_UNK *)lbl_8044A948);
    if (update_lobby_scene__6TSceneFPv((char *)sp8) <= TScene__data_805D6010 && TScene__map_rel_load_buffer != 0) {
        TScene__data_805D5FCC = load_relocatable_file((M2C_UNK *)sp8, TScene__map_rel_load_buffer);
    }
    if (TScene__data_805D5FCC != NULL) {
        for (e = scene_format_dispatch_tables; e->name != NULL; e++) {
            if (strncmp((s32)TScene__data_805D5FCC, (s32)e->name, 4) == 0) {
                TScene__data_805D5FE8 = e->idx;
                break;
            }
        }
    }
}

void load_scene_collision_file(s32 arg0) {
    struct Sp8Buf20_80206494 sp8;
    replace_file_extension__6TLobbyFPvPvPv((M2C_UNK *)&sp8, arg0, lbl_8044A950);
    if (update_lobby_scene__6TSceneFPv((char *)&sp8) <= lbl_805D6014) {
        if (TScene__collision_file_buffer != 0U) {
            scene_collision_data = load_relocatable_file((M2C_UNK *)&sp8, TScene__collision_file_buffer);
            if (scene_collision_data != NULL && get_map_count__10TObjMapCsnFv() != 0U) {
                u32 csn = get_map_count__10TObjMapCsnFv();
                collect_collision_groups(csn, *scene_collision_data);
                return;
            }
            debug_print__6TLobbyFii(lbl_8044A958);
            return;
        }
        scene_collision_data = NULL;
    }
}

void load_floor_scene(void) {
    Ent_802066BC *tbl;
    s32 ent;
    s32 found;
    Res_8020681C res;
    M2C_UNK path[11];
    if (TScene__data_805D5FCC != NULL && M2C_FIELD(TScene__data_805D5FCC, u32 *, 0x14) != 0) {
        TLobby__sub_803DA16C(M2C_FIELD(TScene__data_805D5FCC, u32 *, 0x14));
        M2C_FIELD(TScene__data_805D5FCC, u32 *, 0x14) = 0;
    }
    if (get_floor_map_selection(current_floor_index, &res) == 1) {
        tbl = get_floor_scene_table(res.table);
        scene_resource_index = res.index;
        ent = tbl[res.index].idx;
    }
    copy_name((M2C_UNK *)TScene__current_floor_name);
    load_scene_map_file(ent);
    load_scene_collision_file((s32)(ent));
    if (TScene__data_805D5FCC != NULL && M2C_FIELD(TScene__data_805D5FCC, u32 *, 0x14) != 0) {
        found = 0;
        if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
            replace_file_extension__6TLobbyFPvPvPv(path, (s32)tbl[scene_resource_index].name, lbl_8044A97C);
            found = update_lobby_scene__6TSceneFPv((char *)path);
        }
        if (found <= 0) {
            replace_file_extension__6TLobbyFPvPvPv(path, (s32)tbl[scene_resource_index].name, lbl_8044A984);
        }
        bind_gvm_texture_list(path, M2C_FIELD(TScene__data_805D5FCC, u32 *, 0x14));
    }
    load_floor_rel_file__6TSceneFi((s32)(ent));
    load_tam_file__6TSceneFi((s32)(ent));
    ((void (*)(s32))TScene__sub_802065EC)(ent);
    ((void (*)(s32))TScene__sub_802065E8)(ent);
    copy_name(&lbl_805DC604);
    TScene__data_805D5FD4 = 1;
    TScene__data_805D5FE0 = 0;
    TScene__data_805D5FEC = 0;
    TScene__data_805D5FF0 = 0;
    TScene__render_callback = 0;
    TScene__visibility_radius_margin = TScene__data_805DC5D8;
}

#pragma push
#pragma fp_contract on
void free_scene_resources__6TSceneFv(void) {
    u32 temp_r3;
    temp_r3 = TScene__material_info_buffer;
    if (temp_r3 != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi(temp_r3);
        TScene__material_info_buffer = 0U;
    }
    temp_r3 = TScene__data_805D6020;
    if (temp_r3 != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi(temp_r3);
        TScene__data_805D6020 = 0U;
    }
    temp_r3 = TScene__texture_animation_buffer;
    if (temp_r3 != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi(temp_r3);
        TScene__texture_animation_buffer = 0U;
    }
    temp_r3 = TScene__supplementary_rel_buffer;
    if (temp_r3 != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi(temp_r3);
        TScene__supplementary_rel_buffer = 0U;
    }
    temp_r3 = (u32)TScene__data_805D5FCC;
    if (temp_r3 != 0U) {
        if ((temp_r3 = *(u32*)((u8*)TScene__data_805D5FCC + 0x14)) != 0U) {
            TLobby__sub_803DA16C(temp_r3);
            M2C_FIELD(TScene__data_805D5FCC, u32 *, 0x14) = 0U;
        }
    }
    temp_r3 = TScene__collision_file_buffer;
    if (temp_r3 != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi(temp_r3);
        TScene__collision_file_buffer = 0U;
    }
    free_singleton_805D4E6C__18TObjButterflyLobbyFv();
    temp_r3 = TScene__map_rel_load_buffer;
    if (temp_r3 != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi(temp_r3);
        TScene__map_rel_load_buffer = 0U;
    }
    (*(s32 *)&scene_collision_data) = 0;
    TScene__data_805D5FCC = NULL;
    if (strncmp(get_player_name_copy_buffer(), TScene__current_floor_name, 0x10) == 0) {
        copy_name(&lbl_805DC604);
    }
}
#pragma pop

void load_file_to_buffer__6TSceneFi(s32 arg0) {
    M2C_UNK sp8[8];
    s32 temp_r31;
    u32 temp_r3;
    u32 temp_r3_2;

    TScene__material_info_buffer = 0U;
    lbl_805D602C = 0;
    replace_file_extension__6TLobbyFPvPvPv((M2C_UNK *)(sp8), (s32)(arg0), (M2C_UNK *)(lbl_8044A98C));
    temp_r31 = update_lobby_scene__6TSceneFPv((char *)(sp8));
    if (get_global_state__14TOKeyMachine01Fv() == 0xF) {
        if ((temp_r31 > 0) && ((u32) temp_r31 <= 0x100U)) {
            temp_r3 = alloc__22TQuestVmDownLoadServerFPv(0x100);
            TScene__material_info_buffer = temp_r3;
            if (temp_r3 != 0U) {
                read_disc_file((char *)(sp8), (u32)(temp_r3));
                lbl_805D602C = 0x100;
            }
        }
    } else if (temp_r31 > 0) {
        temp_r3_2 = alloc__22TQuestVmDownLoadServerFPv(temp_r31);
        TScene__material_info_buffer = temp_r3_2;
        if (temp_r3_2 != 0U) {
            read_disc_file((char *)(sp8), (u32)(temp_r3_2));
            lbl_805D602C = temp_r31;
        }
    }
}

extern const char lbl_8044A940[];
extern const char lbl_8044A9A4[];
extern u32 TScene__texture_animation_buffer;
extern s32 lbl_805D6018;

void load_floor_bin_file__6TSceneFi(s32 arg0) {
    u8 sp8[0x20];
    s32 size;
    TScene__data_805D6020 = 0U;
    lbl_805D6024 = 0;
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        replace_file_extension__6TLobbyFPvPvPv((M2C_UNK *)sp8, arg0, (M2C_UNK *)lbl_8044A994);
    } else {
        replace_file_extension__6TLobbyFPvPvPv((M2C_UNK *)sp8, arg0, (M2C_UNK *)lbl_8044A99C);
    }
    size = update_lobby_scene__6TSceneFPv((char *)sp8);
    if (get_global_state__14TOKeyMachine01Fv() == 0xF) {
        if (size > 0 && (u32)size <= 0x100U) {
            TScene__data_805D6020 = alloc__22TQuestVmDownLoadServerFPv(0x100);
            if (TScene__data_805D6020 != 0U) {
                read_disc_file((char *)sp8, TScene__data_805D6020);
                lbl_805D6024 = 0x100;
            }
        }
    } else if (size > 0) {
        TScene__data_805D6020 = alloc__22TQuestVmDownLoadServerFPv(size);
        if (TScene__data_805D6020 != 0U) {
            read_disc_file((char *)sp8, TScene__data_805D6020);
            lbl_805D6024 = size;
        }
    }
}

void load_map_texture_archive__6TSceneFi(s32 arg0) {
    char sp8[0x20];
    s32 temp_r31;
    s32 var_r30;
    u32 temp_r3;
    u32 temp_r3_2;

    temp_r31 = get_global_state__14TOKeyMachine01Fv();
    TScene__texture_animation_buffer = 0U;
    var_r30 = 0;
    lbl_805D6018 = 0;
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        replace_file_extension__6TLobbyFPvPvPv((M2C_UNK *)(sp8), (s32)(arg0), (M2C_UNK *)(lbl_8044A9A4));
        var_r30 = update_lobby_scene__6TSceneFPv((char *)(sp8));
    }
    if (var_r30 <= 0) {
        replace_file_extension__6TLobbyFPvPvPv((M2C_UNK *)(sp8), (s32)(arg0), (M2C_UNK *)(lbl_8044A940));
        var_r30 = update_lobby_scene__6TSceneFPv((char *)(sp8));
    }
    if (temp_r31 == 0xF) {
        if ((var_r30 > 0) && ((u32) var_r30 <= 0x100U)) {
            temp_r3 = alloc__22TQuestVmDownLoadServerFPv(0x100);
            TScene__texture_animation_buffer = temp_r3;
            if (temp_r3 != 0U) {
                read_disc_file((char *)(sp8), (u32)(temp_r3));
                lbl_805D6018 = 0x100;
            }
        }
    } else if (var_r30 > 0) {
        temp_r3_2 = alloc__22TQuestVmDownLoadServerFPv(var_r30);
        TScene__texture_animation_buffer = temp_r3_2;
        if (temp_r3_2 != 0U) {
            read_disc_file((char *)(sp8), (u32)(temp_r3_2));
            lbl_805D6018 = var_r30;
        }
    }
}

extern M2C_UNK lbl_8044A950[];
extern M2C_UNK lbl_8044A958[];
extern s32 *scene_collision_data;
extern u32 TScene__collision_file_buffer;
extern s32 lbl_805D6014;

void load_supplementary_t_rel__6TSceneFv(s32 arg0) {
    u8 sp8[0x20];
    s32 n;
    TScene__texture_wave_resource = 0;
    TScene__supplementary_rel_buffer = 0U;
    TScene__data_805D601C = 0;
    replace_file_extension__6TLobbyFPvPvPv((M2C_UNK *)sp8, arg0, (M2C_UNK *)lbl_8044A938);
    n = update_lobby_scene__6TSceneFPv((char *)sp8);
    if (n > 0) {
        TScene__supplementary_rel_buffer = alloc__22TQuestVmDownLoadServerFPv(n);
        if (TScene__supplementary_rel_buffer != 0U) {
            TScene__texture_wave_resource = (u32)load_relocatable_file((M2C_UNK *)sp8, TScene__supplementary_rel_buffer);
            TScene__data_805D601C = n;
        }
    }
}

void load_scene_rel_file__6TSceneFi(s32 arg0) {
    u8 sp8[0x28];
    s32 state;
    s32 size;
    state = get_global_state__14TOKeyMachine01Fv();
    TScene__data_805D5FCC = NULL;
    size = 0;
    TScene__map_rel_load_buffer = 0U;
    TScene__data_805D6010 = 0;
    TScene__data_805D5FE8 = -1;
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        replace_file_extension__6TLobbyFPvPvPv((M2C_UNK *)sp8, arg0, (M2C_UNK *)lbl_8044A9AC);
        size = update_lobby_scene__6TSceneFPv((char *)sp8);
    }
    if (size <= 0) {
        replace_file_extension__6TLobbyFPvPvPv((M2C_UNK *)sp8, arg0, (M2C_UNK *)lbl_8044A948);
        size = update_lobby_scene__6TSceneFPv((char *)sp8);
    }
    if (state == 0xF) {
        if (size > 0 && (u32)size <= 0x80000U) {
            TScene__map_rel_load_buffer = alloc__22TQuestVmDownLoadServerFPv(0x80000);
            if (TScene__map_rel_load_buffer != 0U) {
                TScene__data_805D5FCC = load_relocatable_file((M2C_UNK *)sp8, TScene__map_rel_load_buffer);
                TScene__data_805D6010 = 0x80000;
            }
        }
    } else if (size > 0) {
        TScene__map_rel_load_buffer = alloc__22TQuestVmDownLoadServerFPv(size);
        if (TScene__map_rel_load_buffer != 0U) {
            TScene__data_805D5FCC = load_relocatable_file((M2C_UNK *)sp8, TScene__map_rel_load_buffer);
            TScene__data_805D6010 = size;
        }
    }
    if (TScene__data_805D5FCC != NULL) {
        Ent_802066BC *e;
        for (e = scene_format_dispatch_tables; e->name != NULL; e++) {
            if (strncmp((s32)TScene__data_805D5FCC, (s32)e->name, 4) == 0) {
                TScene__data_805D5FE8 = e->idx;
                return;
            }
        }
    }
}

void load_scene_data__6TSceneFi(s32 arg0) {
    struct Sp8Buf20_80206494 sp8;
    s32 temp_r31;
    u32 temp_r3;
    u32 temp_r3_2;

    alloc_scene_buffer__18TObjButterflyLobbyFv();
    scene_collision_data = NULL;
    TScene__collision_file_buffer = 0U;
    lbl_805D6014 = 0;
    replace_file_extension__6TLobbyFPvPvPv((M2C_UNK *)((M2C_UNK *)&sp8), (s32)(arg0), (M2C_UNK *)(lbl_8044A950));
    temp_r31 = update_lobby_scene__6TSceneFPv((char *)((M2C_UNK *)&sp8));
    if (get_global_state__14TOKeyMachine01Fv() == 0xF) {
        if ((temp_r31 > 0) && ((u32) temp_r31 <= 0x10000U)) {
            temp_r3 = alloc__22TQuestVmDownLoadServerFPv(0x10000);
            TScene__collision_file_buffer = temp_r3;
            if (temp_r3 != 0U) {
                scene_collision_data = load_relocatable_file((M2C_UNK *)&sp8, temp_r3);
                lbl_805D6014 = 0x10000;
            }
        }
    } else if (temp_r31 > 0) {
        temp_r3_2 = alloc__22TQuestVmDownLoadServerFPv(temp_r31);
        TScene__collision_file_buffer = temp_r3_2;
        if (temp_r3_2 != 0U) {
            scene_collision_data = load_relocatable_file((M2C_UNK *)&sp8, temp_r3_2);
            lbl_805D6014 = temp_r31;
        }
    }
    if (((s32 *) scene_collision_data != NULL) && (get_map_count__10TObjMapCsnFv() != 0U)) {
        u32 temp_csn = get_map_count__10TObjMapCsnFv();
        collect_collision_groups(temp_csn, *scene_collision_data);
        return;
    }
    debug_print__6TLobbyFii(lbl_8044A958);
}
void load_current_floor__6TSceneFv(void) {
    Ent_802066BC *tbl;
    s32 ent;
    s32 found;
    Res_80207038 res;
    M2C_UNK path[11];
    lbl_805D5FF8 = 0;
    TScene__map_rel_load_buffer = 0;
    TScene__collision_file_buffer = 0;
    TScene__supplementary_rel_buffer = 0;
    TScene__texture_animation_buffer = 0;
    TScene__data_805D6020 = 0;
    TScene__material_info_buffer = 0;
    lbl_805D600C = 0;
    TScene__data_805D6010 = 0;
    lbl_805D6014 = 0;
    TScene__data_805D601C = 0;
    lbl_805D6018 = 0;
    lbl_805D6024 = 0;
    lbl_805D602C = 0;
    TScene__data_805D5FE8 = -1;
    if (get_floor_map_selection(current_floor_index, &res) == 1) {
        tbl = get_floor_scene_table(res.table);
        scene_resource_index = res.index;
        ent = tbl[res.index].idx;
    }
    copy_name((M2C_UNK *)TScene__current_floor_name);
    load_scene_rel_file__6TSceneFi((s32)(ent));
    if (TScene__data_805D5FCC != NULL && M2C_FIELD(TScene__data_805D5FCC, u32 *, 0x14) != 0) {
        found = 0;
        if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
            replace_file_extension__6TLobbyFPvPvPv(path, (s32)tbl[scene_resource_index].name, lbl_8044A97C);
            found = update_lobby_scene__6TSceneFPv((char *)path);
        }
        if (found <= 0) {
            replace_file_extension__6TLobbyFPvPvPv(path, (s32)tbl[scene_resource_index].name, lbl_8044A984);
        }
        bind_gvm_texture_list(path, M2C_FIELD(TScene__data_805D5FCC, u32 *, 0x14));
    }
    load_scene_data__6TSceneFi(ent);
    load_supplementary_t_rel__6TSceneFv((s32)(ent));
    load_map_texture_archive__6TSceneFi(ent);
    load_floor_bin_file__6TSceneFi((s32)(ent));
    load_file_to_buffer__6TSceneFi(ent);
    TScene__data_805D5FD4 = 1;
    TScene__data_805D5FE0 = 0;
    TScene__data_805D5FEC = 0;
    TScene__data_805D5FF0 = 0;
    TScene__render_callback = 0;
    TScene__visibility_radius_margin = TScene__data_805DC5D8;
}

}
