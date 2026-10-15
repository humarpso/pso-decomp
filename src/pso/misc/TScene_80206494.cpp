#include "types.h"
#include "pso/misc/TScene.h"

struct RecoveredGlobal_8020650C___vt__6TScene { s32 value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_8020650C___vt__6TScene_size[sizeof(RecoveredGlobal_8020650C___vt__6TScene) == 0x18 ? 1 : -1];

struct Ent_802066BC { char *name; s32 idx; };

struct Res_8020681C { s32 table; s32 index; s32 pad; };

struct Res_80207038 { s32 table; s32 index; s32 pad; };

extern "C" {
s32 free_singleton_805D4E6C__18TObjButterflyLobbyFv();
s32 safe_free__23TAdSinglePlyChrSelectGCFUl(u32);
s32 get_player_name_copy_buffer();
s32 copy_name(s32 *);
s32 strncmp(s32, s32, s32);
s32 TLobby__sub_803DA16C(u32);
extern s32 TScene__current_floor_name;
extern s32 *scene_collision_data;
extern void *TScene__data_805D5FCC;
extern u32 TScene__map_rel_load_buffer;
extern u32 TScene__collision_file_buffer;
extern u32 TScene__texture_animation_buffer;
extern u32 TScene__supplementary_rel_buffer;
extern u32 TScene__data_805D6020;
extern u32 TScene__material_info_buffer;
extern s32 lbl_805DC604;
s32 get_global_state__14TOKeyMachine01Fv();
s32 init_material_nodes__6TSceneFv(void *);
s32 create_texture_wave_tasks__6TSceneFl(void *);
s32 TScene__sub_80206410(void *);
s32 __ct__7TObjectFP7TObject(void *, void *);
extern s32 __vt__6TScene[];
extern s32 lbl_805D3618;
extern void *TScene__data_805D5FCC;
extern u32 TScene__texture_wave_resource;
u8 *TScene__ct(u8 *arg0, s32 arg1);
s32 replace_file_extension__6TLobbyFPvPvPv(s32 *, s32, s32 *);
s32 update_lobby_scene__6TSceneFv(char *);
s32 *load_relocatable_file(s32 *, u32);
s32 strncmp(s32, s32, s32);
extern u8 lbl_8044A948[];
extern Ent_802066BC scene_format_dispatch_tables[];
extern void *TScene__data_805D5FCC;
extern s32 TScene__data_805D5FE8;
extern u32 TScene__map_rel_load_buffer;
extern s32 TScene__map_rel_load_size_limit;
void load_scene_map_file(s32 arg0);
s32 copy_name(s32 *);
s32 update_lobby_scene__6TSceneFv(char *);
s32 replace_file_extension__6TLobbyFPvPvPv(s32 *, s32, s32 *);
void TScene__sub_802065E8(void);
void TScene__sub_802065EC(void);
void load_scene_map_file(s32 arg0);
s32 get_floor_map_selection(s32, void *);
Ent_802066BC *get_floor_scene_table(s32);
void bind_gvm_texture_list(s32 *, u32);
s32 is_not_split_screen__13TRaderMapCoreFv();
s32 TLobby__sub_803DA16C(u32);
extern s32 lbl_8044A97C[];
extern s32 lbl_8044A984[];
extern s32 TScene__current_floor_name;
extern s32 current_floor_index;
extern s32 scene_resource_index;
extern void *TScene__data_805D5FCC;
extern s8 TScene__floor_scene_ready_flag;
extern s32 TScene__data_805D5FE0;
extern f32 TScene__visibility_radius_margin;
extern s32 TScene__map_section_render_callback;
extern s32 TScene__active_scene_callback;
extern s32 TScene__render_callback;
extern const f32 TScene__data_805DC5D8;
extern s32 lbl_805DC604;
void load_floor_scene(void);
s32 copy_name(s32 *);
s32 update_lobby_scene__6TSceneFv(char *);
s32 replace_file_extension__6TLobbyFPvPvPv(s32 *, s32, s32 *);
s32 get_floor_map_selection(s32, void *);
Ent_802066BC *get_floor_scene_table(s32);
void bind_gvm_texture_list(s32 *, u32);
s32 is_not_split_screen__13TRaderMapCoreFv();
extern s32 lbl_8044A97C[];
extern s32 lbl_8044A984[];
extern s32 TScene__current_floor_name;
extern s32 current_floor_index;
extern s32 scene_resource_index;
extern void *TScene__data_805D5FCC;
extern s8 TScene__floor_scene_ready_flag;
extern s32 TScene__data_805D5FE0;
extern f32 TScene__visibility_radius_margin;
extern s32 TScene__map_section_render_callback;
extern s32 TScene__active_scene_callback;
extern s32 TScene__render_callback;
extern s32 TScene__data_805D5FE8;
extern s32 lbl_805D5FF8;
extern u32 TScene__map_rel_load_buffer;
extern u32 TScene__collision_file_buffer;
extern u32 TScene__texture_animation_buffer;
extern u32 TScene__supplementary_rel_buffer;
extern s32 lbl_805D600C;
extern s32 TScene__map_rel_load_size_limit;
extern s32 lbl_805D6014;
extern s32 lbl_805D6018;
extern s32 TScene__loaded_floor_rel_file_index;
extern u32 TScene__data_805D6020;
extern s32 floor_bin_file_size;
extern u32 TScene__material_info_buffer;
extern s32 scene_file_buffer_size;
extern const f32 TScene__data_805DC5D8;
s32 *load_relocatable_file(s32 *, u32);
s32 replace_file_extension__6TLobbyFPvPvPv(s32 *, s32, s32 *);
s32 debug_print__6TLobbyFle(s32 *, ...);
s32 collect_collision_groups(u32, s32);
u32 get_map_count__10TObjMapCsnFv();
s32 update_lobby_scene__6TSceneFv(char *);
extern s32 lbl_8044A950[];
extern s32 lbl_8044A958[];
extern s32 *scene_collision_data;
extern u32 TScene__collision_file_buffer;
extern s32 lbl_805D6014;
void load_scene_collision_file(s32 arg0);
u32 alloc__22TQuestVmDownLoadServerFv(s32);
s32 *load_relocatable_file(s32 *, u32);
s32 update_lobby_scene__6TSceneFv(char *);
s32 replace_file_extension__6TLobbyFPvPvPv(s32 *, s32, s32 *);
extern u8 lbl_8044A938[];
extern u32 TScene__texture_wave_resource;
extern u32 TScene__supplementary_rel_buffer;
extern s32 TScene__loaded_floor_rel_file_index;
s32 *load_relocatable_file(s32 *, u32);
s32 update_lobby_scene__6TSceneFv(char *);
s32 replace_file_extension__6TLobbyFPvPvPv(s32 *, s32, s32 *);
extern u8 lbl_8044A938[];
extern u32 TScene__texture_wave_resource;
extern u32 TScene__supplementary_rel_buffer;
extern s32 TScene__loaded_floor_rel_file_index;
s32 update_lobby_scene__6TSceneFv(char *);
s32 read_disc_file(char *, u32);
s32 replace_file_extension__6TLobbyFPvPvPv(s32 *, s32, s32 *);
extern const char lbl_8044A940[];
extern u32 TScene__texture_animation_buffer;
extern s32 lbl_805D6018;
u32 alloc__22TQuestVmDownLoadServerFv(s32);
s32 update_lobby_scene__6TSceneFv(char *);
s32 read_disc_file(char *, u32);
s32 replace_file_extension__6TLobbyFPvPvPv(s32 *, s32, s32 *);
s32 get_global_state__14TOKeyMachine01Fv();
s32 is_not_split_screen__13TRaderMapCoreFv();
extern u8 lbl_8044A994[];
extern u8 lbl_8044A99C[];
extern u32 TScene__data_805D6020;
extern s32 floor_bin_file_size;
u32 alloc__22TQuestVmDownLoadServerFv(s32);
s32 *load_relocatable_file(s32 *, u32);
s32 update_lobby_scene__6TSceneFv(char *);
s32 replace_file_extension__6TLobbyFPvPvPv(s32 *, s32, s32 *);
s32 get_global_state__14TOKeyMachine01Fv();
s32 is_not_split_screen__13TRaderMapCoreFv();
s32 strncmp(s32, s32, s32);
extern u8 lbl_8044A948[];
extern u8 lbl_8044A9AC[];
extern Ent_802066BC scene_format_dispatch_tables[];
extern void *TScene__data_805D5FCC;
extern s32 TScene__data_805D5FE8;
extern u32 TScene__map_rel_load_buffer;
extern s32 TScene__map_rel_load_size_limit;
}

extern "C" {

struct Sp8Buf20_80206494 {
    s32 f0; s32 f4; s32 f8; s32 fc;
    s32 f10; s32 f14; s32 f18; s32 f1c;
};

void TScene__sub_802065E8(void);
void TScene__sub_802065EC(void);
void *__dt__6TSceneFv(void *arg0, s16 arg1);
s32 *load_relocatable_file(s32 *, u32);
s32 read_disc_file(char *, u32);
s32 replace_file_extension__6TLobbyFPvPvPv(s32 *, s32, s32 *);
s32 TScene__sub_80205AE8(s32 *);
s32 TScene__sub_80205FD4(void *);
s32 __dl__7TObjectFPv(void *);
s32 __dt__7TObjectFv(void *, s32);
void *__nw__7TObjectFUl(int);
u32 alloc__22TQuestVmDownLoadServerFv(s32);
s32 alloc_scene_buffer__18TObjButterflyLobbyFv();
s32 debug_print__6TLobbyFle(s32 *, ...);
s32 collect_collision_groups(u32, s32);
s32 get_global_state__14TOKeyMachine01Fv();
u32 get_map_count__10TObjMapCsnFv();
s32 is_not_split_screen__13TRaderMapCoreFv();
s32 update_lobby_scene__6TSceneFv(char *);

extern s32 __vt__6TScene[];
extern s32 TScene__map_section_render_callback;
extern s32 TScene__active_scene_callback;
extern s32 TScene__render_callback;

void *__dt__6TSceneFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__6TScene;
        TScene__sub_80205AE8((s32 *)arg0);
        TScene__sub_80205FD4(arg0);
        TScene__map_section_render_callback = 0;
        TScene__active_scene_callback = 0;
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
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8020650C___vt__6TScene *)&__vt__6TScene).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D3618;
    *(s32 *)((s8 *)arg0 + 0x1C) = 0;
    *(s32 *)((s8 *)arg0 + 0x30) = 0;
    *(s32 *)((s8 *)arg0 + 0x34) = 0;
    *(s32 *)((s8 *)arg0 + 0x38) = 0x32;
    *(s32 *)((s8 *)arg0 + 0x3C) = 0;
    TScene__sub_80206410((void *) (arg0));
    if ((get_global_state__14TOKeyMachine01Fv() == 1) && ((u32) TScene__texture_wave_resource != 0U) && ((void *) (*(u8 * *)&TScene__data_805D5FCC) != NULL) && ((u32) *(u32 *)((s8 *)(*(u8 * *)&TScene__data_805D5FCC) + 0x14) != 0U)) {
        create_texture_wave_tasks__6TSceneFl((void *) (arg0));
    }
    init_material_nodes__6TSceneFv((void *) (arg0));
    return arg0;
}

void TScene::create() {
    void *o;
    o = __nw__7TObjectFUl(0x40);
    if (o != NULL) {
        TScene__ct((u8 *)(o), (s32)(tl_02));
    }
}

void TScene__sub_802065E8(void) {  }
void TScene__sub_802065EC(void) {  }

extern s32 lbl_8044A98C[];
extern u32 TScene__material_info_buffer;
extern s32 scene_file_buffer_size;

void TScene::load_floor_rel_file(s32 arg0) {
    u8 sp8[0x20];
    replace_file_extension__6TLobbyFPvPvPv((s32 *)sp8, arg0, (s32 *)lbl_8044A938);
    if (update_lobby_scene__6TSceneFv((char *)sp8) <= TScene__loaded_floor_rel_file_index) {
        if (TScene__supplementary_rel_buffer != 0U) {
            TScene__texture_wave_resource = (u32)load_relocatable_file((s32 *)sp8, TScene__supplementary_rel_buffer);
        } else {
            TScene__texture_wave_resource = 0;
        }
    }
}

void TScene::load_tam_file(s32 arg0) {
    u8 sp8[0x20];
    replace_file_extension__6TLobbyFPvPvPv((s32 *)sp8, arg0, (s32 *)((u8 *)&lbl_8044A940));
    if (update_lobby_scene__6TSceneFv((char *)sp8) <= lbl_805D6018) {
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
    replace_file_extension__6TLobbyFPvPvPv((s32 *)sp8, arg0, (s32 *)lbl_8044A948);
    if (update_lobby_scene__6TSceneFv((char *)sp8) <= TScene__map_rel_load_size_limit && TScene__map_rel_load_buffer != 0) {
        TScene__data_805D5FCC = load_relocatable_file((s32 *)sp8, TScene__map_rel_load_buffer);
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
    replace_file_extension__6TLobbyFPvPvPv((s32 *)&sp8, arg0, lbl_8044A950);
    if (update_lobby_scene__6TSceneFv((char *)&sp8) <= lbl_805D6014) {
        if (TScene__collision_file_buffer != 0U) {
            scene_collision_data = load_relocatable_file((s32 *)&sp8, TScene__collision_file_buffer);
            if (scene_collision_data != NULL && get_map_count__10TObjMapCsnFv() != 0U) {
                u32 csn = get_map_count__10TObjMapCsnFv();
                collect_collision_groups(csn, *scene_collision_data);
                return;
            }
            debug_print__6TLobbyFle(lbl_8044A958);
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
    s32 path[11];
    if (TScene__data_805D5FCC != NULL && *(u32 *)((s8 *)TScene__data_805D5FCC + 0x14) != 0) {
        TLobby__sub_803DA16C(*(u32 *)((s8 *)TScene__data_805D5FCC + 0x14));
        *(u32 *)((s8 *)TScene__data_805D5FCC + 0x14) = 0;
    }
    if (get_floor_map_selection(current_floor_index, &res) == 1) {
        tbl = get_floor_scene_table(res.table);
        scene_resource_index = res.index;
        ent = tbl[res.index].idx;
    }
    copy_name((s32 *)TScene__current_floor_name);
    load_scene_map_file(ent);
    load_scene_collision_file((s32)(ent));
    if (TScene__data_805D5FCC != NULL && *(u32 *)((s8 *)TScene__data_805D5FCC + 0x14) != 0) {
        found = 0;
        if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
            replace_file_extension__6TLobbyFPvPvPv(path, (s32)tbl[scene_resource_index].name, lbl_8044A97C);
            found = update_lobby_scene__6TSceneFv((char *)path);
        }
        if (found <= 0) {
            replace_file_extension__6TLobbyFPvPvPv(path, (s32)tbl[scene_resource_index].name, lbl_8044A984);
        }
        bind_gvm_texture_list(path, *(u32 *)((s8 *)TScene__data_805D5FCC + 0x14));
    }
    TScene::load_floor_rel_file((s32)(ent));
    TScene::load_tam_file((s32)(ent));
    ((void (*)(s32))TScene__sub_802065EC)(ent);
    ((void (*)(s32))TScene__sub_802065E8)(ent);
    copy_name(&lbl_805DC604);
    TScene__floor_scene_ready_flag = 1;
    TScene__data_805D5FE0 = 0;
    TScene__map_section_render_callback = 0;
    TScene__active_scene_callback = 0;
    TScene__render_callback = 0;
    TScene__visibility_radius_margin = TScene__data_805DC5D8;
}

#pragma push
#pragma fp_contract on
void TScene::free_scene_resources() {
    u32 temp_r3;
    temp_r3 = TScene__material_info_buffer;
    if (temp_r3 != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUl(temp_r3);
        TScene__material_info_buffer = 0U;
    }
    temp_r3 = TScene__data_805D6020;
    if (temp_r3 != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUl(temp_r3);
        TScene__data_805D6020 = 0U;
    }
    temp_r3 = TScene__texture_animation_buffer;
    if (temp_r3 != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUl(temp_r3);
        TScene__texture_animation_buffer = 0U;
    }
    temp_r3 = TScene__supplementary_rel_buffer;
    if (temp_r3 != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUl(temp_r3);
        TScene__supplementary_rel_buffer = 0U;
    }
    temp_r3 = (u32)TScene__data_805D5FCC;
    if (temp_r3 != 0U) {
        if ((temp_r3 = *(u32*)((u8*)TScene__data_805D5FCC + 0x14)) != 0U) {
            TLobby__sub_803DA16C(temp_r3);
            *(u32 *)((s8 *)TScene__data_805D5FCC + 0x14) = 0U;
        }
    }
    temp_r3 = TScene__collision_file_buffer;
    if (temp_r3 != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUl(temp_r3);
        TScene__collision_file_buffer = 0U;
    }
    free_singleton_805D4E6C__18TObjButterflyLobbyFv();
    temp_r3 = TScene__map_rel_load_buffer;
    if (temp_r3 != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUl(temp_r3);
        TScene__map_rel_load_buffer = 0U;
    }
    (*(s32 *)&scene_collision_data) = 0;
    TScene__data_805D5FCC = NULL;
    if (strncmp(get_player_name_copy_buffer(), TScene__current_floor_name, 0x10) == 0) {
        copy_name(&lbl_805DC604);
    }
}
#pragma pop

void TScene::load_file_to_buffer(s32 arg0) {
    s32 sp8[8];
    s32 temp_r31;
    u32 temp_r3;
    u32 temp_r3_2;

    TScene__material_info_buffer = 0U;
    scene_file_buffer_size = 0;
    replace_file_extension__6TLobbyFPvPvPv((s32 *)(sp8), (s32)(arg0), (s32 *)(lbl_8044A98C));
    temp_r31 = update_lobby_scene__6TSceneFv((char *)(sp8));
    if (get_global_state__14TOKeyMachine01Fv() == 0xF) {
        if ((temp_r31 > 0) && ((u32) temp_r31 <= 0x100U)) {
            temp_r3 = alloc__22TQuestVmDownLoadServerFv(0x100);
            TScene__material_info_buffer = temp_r3;
            if (temp_r3 != 0U) {
                read_disc_file((char *)(sp8), (u32)(temp_r3));
                scene_file_buffer_size = 0x100;
            }
        }
    } else if (temp_r31 > 0) {
        temp_r3_2 = alloc__22TQuestVmDownLoadServerFv(temp_r31);
        TScene__material_info_buffer = temp_r3_2;
        if (temp_r3_2 != 0U) {
            read_disc_file((char *)(sp8), (u32)(temp_r3_2));
            scene_file_buffer_size = temp_r31;
        }
    }
}

extern const char lbl_8044A940[];
extern const char lbl_8044A9A4[];
extern u32 TScene__texture_animation_buffer;
extern s32 lbl_805D6018;

void TScene::load_floor_bin_file(s32 arg0) {
    u8 sp8[0x20];
    s32 size;
    TScene__data_805D6020 = 0U;
    floor_bin_file_size = 0;
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        replace_file_extension__6TLobbyFPvPvPv((s32 *)sp8, arg0, (s32 *)lbl_8044A994);
    } else {
        replace_file_extension__6TLobbyFPvPvPv((s32 *)sp8, arg0, (s32 *)lbl_8044A99C);
    }
    size = update_lobby_scene__6TSceneFv((char *)sp8);
    if (get_global_state__14TOKeyMachine01Fv() == 0xF) {
        if (size > 0 && (u32)size <= 0x100U) {
            TScene__data_805D6020 = alloc__22TQuestVmDownLoadServerFv(0x100);
            if (TScene__data_805D6020 != 0U) {
                read_disc_file((char *)sp8, TScene__data_805D6020);
                floor_bin_file_size = 0x100;
            }
        }
    } else if (size > 0) {
        TScene__data_805D6020 = alloc__22TQuestVmDownLoadServerFv(size);
        if (TScene__data_805D6020 != 0U) {
            read_disc_file((char *)sp8, TScene__data_805D6020);
            floor_bin_file_size = size;
        }
    }
}

void TScene::load_map_texture_archive(s32 arg0) {
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
        replace_file_extension__6TLobbyFPvPvPv((s32 *)(sp8), (s32)(arg0), (s32 *)(lbl_8044A9A4));
        var_r30 = update_lobby_scene__6TSceneFv((char *)(sp8));
    }
    if (var_r30 <= 0) {
        replace_file_extension__6TLobbyFPvPvPv((s32 *)(sp8), (s32)(arg0), (s32 *)(lbl_8044A940));
        var_r30 = update_lobby_scene__6TSceneFv((char *)(sp8));
    }
    if (temp_r31 == 0xF) {
        if ((var_r30 > 0) && ((u32) var_r30 <= 0x100U)) {
            temp_r3 = alloc__22TQuestVmDownLoadServerFv(0x100);
            TScene__texture_animation_buffer = temp_r3;
            if (temp_r3 != 0U) {
                read_disc_file((char *)(sp8), (u32)(temp_r3));
                lbl_805D6018 = 0x100;
            }
        }
    } else if (var_r30 > 0) {
        temp_r3_2 = alloc__22TQuestVmDownLoadServerFv(var_r30);
        TScene__texture_animation_buffer = temp_r3_2;
        if (temp_r3_2 != 0U) {
            read_disc_file((char *)(sp8), (u32)(temp_r3_2));
            lbl_805D6018 = var_r30;
        }
    }
}

extern s32 lbl_8044A950[];
extern s32 lbl_8044A958[];
extern s32 *scene_collision_data;
extern u32 TScene__collision_file_buffer;
extern s32 lbl_805D6014;

void TScene::load_supplementary_t_rel(s32 arg0) {
    u8 sp8[0x20];
    s32 n;
    TScene__texture_wave_resource = 0;
    TScene__supplementary_rel_buffer = 0U;
    TScene__loaded_floor_rel_file_index = 0;
    replace_file_extension__6TLobbyFPvPvPv((s32 *)sp8, arg0, (s32 *)lbl_8044A938);
    n = update_lobby_scene__6TSceneFv((char *)sp8);
    if (n > 0) {
        TScene__supplementary_rel_buffer = alloc__22TQuestVmDownLoadServerFv(n);
        if (TScene__supplementary_rel_buffer != 0U) {
            TScene__texture_wave_resource = (u32)load_relocatable_file((s32 *)sp8, TScene__supplementary_rel_buffer);
            TScene__loaded_floor_rel_file_index = n;
        }
    }
}

void TScene::load_scene_rel_file(s32 arg0) {
    u8 sp8[0x28];
    s32 state;
    s32 size;
    state = get_global_state__14TOKeyMachine01Fv();
    TScene__data_805D5FCC = NULL;
    size = 0;
    TScene__map_rel_load_buffer = 0U;
    TScene__map_rel_load_size_limit = 0;
    TScene__data_805D5FE8 = -1;
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        replace_file_extension__6TLobbyFPvPvPv((s32 *)sp8, arg0, (s32 *)lbl_8044A9AC);
        size = update_lobby_scene__6TSceneFv((char *)sp8);
    }
    if (size <= 0) {
        replace_file_extension__6TLobbyFPvPvPv((s32 *)sp8, arg0, (s32 *)lbl_8044A948);
        size = update_lobby_scene__6TSceneFv((char *)sp8);
    }
    if (state == 0xF) {
        if (size > 0 && (u32)size <= 0x80000U) {
            TScene__map_rel_load_buffer = alloc__22TQuestVmDownLoadServerFv(0x80000);
            if (TScene__map_rel_load_buffer != 0U) {
                TScene__data_805D5FCC = load_relocatable_file((s32 *)sp8, TScene__map_rel_load_buffer);
                TScene__map_rel_load_size_limit = 0x80000;
            }
        }
    } else if (size > 0) {
        TScene__map_rel_load_buffer = alloc__22TQuestVmDownLoadServerFv(size);
        if (TScene__map_rel_load_buffer != 0U) {
            TScene__data_805D5FCC = load_relocatable_file((s32 *)sp8, TScene__map_rel_load_buffer);
            TScene__map_rel_load_size_limit = size;
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

void TScene::load_scene_data(s32 arg0) {
    struct Sp8Buf20_80206494 sp8;
    s32 temp_r31;
    u32 temp_r3;
    u32 temp_r3_2;

    alloc_scene_buffer__18TObjButterflyLobbyFv();
    scene_collision_data = NULL;
    TScene__collision_file_buffer = 0U;
    lbl_805D6014 = 0;
    replace_file_extension__6TLobbyFPvPvPv((s32 *)((s32 *)&sp8), (s32)(arg0), (s32 *)(lbl_8044A950));
    temp_r31 = update_lobby_scene__6TSceneFv((char *)((s32 *)&sp8));
    if (get_global_state__14TOKeyMachine01Fv() == 0xF) {
        if ((temp_r31 > 0) && ((u32) temp_r31 <= 0x10000U)) {
            temp_r3 = alloc__22TQuestVmDownLoadServerFv(0x10000);
            TScene__collision_file_buffer = temp_r3;
            if (temp_r3 != 0U) {
                scene_collision_data = load_relocatable_file((s32 *)&sp8, temp_r3);
                lbl_805D6014 = 0x10000;
            }
        }
    } else if (temp_r31 > 0) {
        temp_r3_2 = alloc__22TQuestVmDownLoadServerFv(temp_r31);
        TScene__collision_file_buffer = temp_r3_2;
        if (temp_r3_2 != 0U) {
            scene_collision_data = load_relocatable_file((s32 *)&sp8, temp_r3_2);
            lbl_805D6014 = temp_r31;
        }
    }
    if (((s32 *) scene_collision_data != NULL) && (get_map_count__10TObjMapCsnFv() != 0U)) {
        u32 temp_csn = get_map_count__10TObjMapCsnFv();
        collect_collision_groups(temp_csn, *scene_collision_data);
        return;
    }
    debug_print__6TLobbyFle(lbl_8044A958);
}
void TScene::load_current_floor() {
    Ent_802066BC *tbl;
    s32 ent;
    s32 found;
    Res_80207038 res;
    s32 path[11];
    lbl_805D5FF8 = 0;
    TScene__map_rel_load_buffer = 0;
    TScene__collision_file_buffer = 0;
    TScene__supplementary_rel_buffer = 0;
    TScene__texture_animation_buffer = 0;
    TScene__data_805D6020 = 0;
    TScene__material_info_buffer = 0;
    lbl_805D600C = 0;
    TScene__map_rel_load_size_limit = 0;
    lbl_805D6014 = 0;
    TScene__loaded_floor_rel_file_index = 0;
    lbl_805D6018 = 0;
    floor_bin_file_size = 0;
    scene_file_buffer_size = 0;
    TScene__data_805D5FE8 = -1;
    if (get_floor_map_selection(current_floor_index, &res) == 1) {
        tbl = get_floor_scene_table(res.table);
        scene_resource_index = res.index;
        ent = tbl[res.index].idx;
    }
    copy_name((s32 *)TScene__current_floor_name);
    TScene::load_scene_rel_file((s32)(ent));
    if (TScene__data_805D5FCC != NULL && *(u32 *)((s8 *)TScene__data_805D5FCC + 0x14) != 0) {
        found = 0;
        if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
            replace_file_extension__6TLobbyFPvPvPv(path, (s32)tbl[scene_resource_index].name, lbl_8044A97C);
            found = update_lobby_scene__6TSceneFv((char *)path);
        }
        if (found <= 0) {
            replace_file_extension__6TLobbyFPvPvPv(path, (s32)tbl[scene_resource_index].name, lbl_8044A984);
        }
        bind_gvm_texture_list(path, *(u32 *)((s8 *)TScene__data_805D5FCC + 0x14));
    }
    TScene::load_scene_data(ent);
    TScene::load_supplementary_t_rel((s32)(ent));
    TScene::load_map_texture_archive(ent);
    TScene::load_floor_bin_file((s32)(ent));
    TScene::load_file_to_buffer(ent);
    TScene__floor_scene_ready_flag = 1;
    TScene__data_805D5FE0 = 0;
    TScene__map_section_render_callback = 0;
    TScene__active_scene_callback = 0;
    TScene__render_callback = 0;
    TScene__visibility_radius_margin = TScene__data_805DC5D8;
}

}
