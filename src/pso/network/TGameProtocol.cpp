#include "pso/TGameProtocol.h"

extern s32 game_protocol_instance;

struct VBase_18_801E4260 { char pad[0x18]; };
struct Node_801E4260 : VBase_18_801E4260 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
};

struct Head_801E4260 {
    u8 pad[0x14];
    Node_801E4260 *first;
};

extern "C" {
void TLobby__sub_8007EB20(const char *, ...);
void TLobby__sub_801A54E8(void *);
void clear_send_buffer__7TPacketFv(void *);
void dispatch_pso_data_commands(void *);
extern char lbl_80449784[];
}

extern "C" void handle_6x02();
extern "C" void handle_6x03();
extern "C" void handle_6x04_legacy_activate_switch_by_token();
extern "C" void handle_6x05_write_switch_flag();
extern "C" void handle_6x06_send_guild_card();
extern "C" void handle_6x07_symbol_chat();
extern "C" void handle_6x09_legacy_kill_enemy();
extern "C" void handle_6x0A_update_enemy_state();
extern "C" void handle_6x0B_update_object_state();
extern "C" void handle_6x0C_add_or_remove_status_effect();
extern "C" void handle_6x0D_add_or_remove_status_effect();
extern "C" void handle_6x0E_clear_negative_status_effects();
extern "C" void handle_6x10_dragon_boss_actions();
extern "C" void handle_6x11_dragon_boss_actions();
extern "C" void handle_6x12_dragon_boss_actions();
extern "C" void handle_6x13_de_rol_le_boss_actions();
extern "C" void handle_6x14_de_rol_le_boss_actions_with_target();
extern "C" void handle_6x15_vol_opt_boss_actions();
extern "C" void handle_6x16_vol_opt_boss_actions();
extern "C" void handle_6x17_set_entity_position_and_angle();
extern "C" void handle_6x18_vol_opt2_boss_actions();
extern "C" void handle_6x19_dark_falz_actions();
extern "C" void handle_6x1B_enable_pk_mode_for_player();
extern "C" void handle_6x1C_disable_pk_mode_for_player();
extern "C" void handle_6x1F_set_player_floor();
extern "C" void handle_6x20_set_position();
extern "C" void handle_6x21_inter_level_warp();
extern "C" void handle_6x22_set_player_invisible();
extern "C" void handle_6x23_set_player_visible();
extern "C" void handle_6x24_teleport_player();
extern "C" void handle_6x25_equip_item();
extern "C" void handle_6x26_unequip_item();
extern "C" void handle_6x27_use_item();
extern "C" void handle_6x28_feed_mag();
extern "C" void handle_6x29_delete_inventory_item();
extern "C" void handle_6x2A_drop_item();
extern "C" void handle_6x2B_create_inventory_item();
extern "C" void handle_6x2C_impose_hold();
extern "C" void handle_6x2D_release_hold();
extern "C" void handle_6x2E_set_or_clear_player_flags();
extern "C" void handle_6x2F_change_player_hp();
extern "C" void handle_6x30_change_player_level();
extern "C" void handle_6x31_use_medical_center();
extern "C" void handle_6x32_medical_center_revive_all_players();
extern "C" void handle_6x33_revive_player();
extern "C" void handle_6x34();
extern "C" void handle_6x36();
extern "C" void handle_6x37_photon_blast();
extern "C" void handle_6x38_donate_to_photon_blast();
extern "C" void handle_6x39_set_photon_blast_ready_flag();
extern "C" void handle_6x3A_clear_photon_blast_ready_flag();
extern "C" void handle_6x3B_clear_temporary_photon_blast_state_flags();
extern "C" void handle_6x3E_stop_at_position();
extern "C" void handle_6x3F_set_position();
extern "C" void handle_6x40_walk_to_position();
extern "C" void handle_6x41_move_to_position();
extern "C" void handle_6x42_move_to_position();
extern "C" void handle_6x43_attack();
extern "C" void handle_6x44_attack();
extern "C" void handle_6x45_attack();
extern "C" void handle_6x46_attack_finished();
extern "C" void handle_6x47_cast_technique();
extern "C" void handle_6x48_cast_technique_complete();
extern "C" void handle_6x49_execute_photon_blast();
extern "C" void handle_6x4A_shield_attack();
extern "C" void handle_6x4B_hit_by_enemy();
extern "C" void handle_6x4C_hit_by_enemy();
extern "C" void handle_6x4D_player_died();
extern "C" void handle_6x4E_player_revivable();
extern "C" void handle_6x4F_player_revived();
extern "C" void handle_6x50_switch_interaction();
extern "C" void handle_6x52_set_animation_state();
extern "C" void handle_6x53();
extern "C" void handle_6x54();
extern "C" void handle_6x55_intra_map_warp();
extern "C" void handle_6x56_set_player_position_and_angle();
extern "C" void handle_6x57();
extern "C" void handle_6x58_lobby_animation();
extern "C" void handle_6x59_pick_up_item();
extern "C" void handle_6x5A_pick_up_item_request();
extern "C" void handle_6x5C_destroy_floor_item();
extern "C" void handle_6x5D_drop_stacked_item();
extern "C" void handle_6x5E_buy_shop_item();
extern "C" void handle_6x5F_drop_item();
extern "C" void handle_6x60_standard_drop_item_request();
extern "C" void handle_6x61_activate_mag_effect();
extern "C" void handle_6x62();
extern "C" void handle_6x63_destroy_floor_item();
extern "C" void handle_6x64();
extern "C" void handle_6x65();
extern "C" void handle_6x66_use_star_atomizer();
extern "C" void handle_6x67_trigger_set_event();
extern "C" void handle_6x68_set_telepipe_state();
extern "C" void handle_6x69_npc_control();
extern "C" void handle_6x6A_set_boss_warp_flags();
extern "C" void handle_6x6B_sync_game_state();
extern "C" void handle_6x6C_sync_game_state();
extern "C" void handle_6x6D_sync_game_state();
extern "C" void handle_6x6E_sync_game_state();
extern "C" void handle_6x6F_set_quest_flags_v2();
extern "C" void handle_6x70_sync_player_disp_and_inventory();
extern "C" void handle_6x71_unblock_game_join();
extern "C" void handle_6x72_done_loading_into_game();
extern "C" void handle_6x73_exit_quest();
extern "C" void handle_6x74_word_select();
extern "C" void handle_6x75_update_quest_flag_dc();
extern "C" void handle_6x76_set_entity_set_flags();
extern "C" void handle_6x77_sync_quest_register();
extern "C" void handle_6x78();
extern "C" void handle_6x79_gogo_ball();
extern "C" void handle_6x7A_enable_stealth_suit_effect();
extern "C" void handle_6x7B_disable_stealth_suit_effect();
extern "C" void handle_6x7C_set_challenge_records();
extern "C" void handle_6x7D_set_battle_mode_data();
extern "C" void handle_6x7E();
extern "C" void handle_6x7F_battle_scores();
extern "C" void handle_6x80_trigger_trap();
extern "C" void handle_6x81_disable_drop_weapon_on_death();
extern "C" void handle_6x82_enable_drop_weapon_on_death();
extern "C" void handle_6x83_place_trap();
extern "C" void handle_6x84_vol_opt_boss_actions();
extern "C" void handle_6x85_vol_opt_phase2_boss_actions();
extern "C" void handle_6x86_hit_destructible_object();
extern "C" void handle_6x87_shrink_player();
extern "C" void handle_6x88_restore_shrunken_player();
extern "C" void handle_6x89_set_killer_entity_id();
extern "C" void handle_6x8A_show_challenge_time_records_window();
extern "C" void handle_6x8B();
extern "C" void handle_6x8C();
extern "C" void handle_6x8D_set_technique_level_override();
extern "C" void handle_6x8E();
extern "C" void handle_6x8F_add_battle_damage_scores();
extern "C" void handle_6x90_set_player_battle_team();
extern "C" void handle_6x91_update_attackable_col_state();
extern "C" void handle_6x92();
extern "C" void handle_6x93_set_switch_flag_from_timer();
extern "C" void handle_6x94_inter_level_warp();
extern "C" void handle_6x95_set_challenge_time();
extern "C" void handle_6x96();
extern "C" void handle_6x97_select_challenge_mode_failure_option();
extern "C" void handle_6x98();
extern "C" void handle_6x99();
extern "C" void handle_6x9A_update_entity_stat();
extern "C" void handle_6x9B_level_up_all_techniques();
extern "C" void handle_6x9C_set_enemy_low_game_flags_ultimate();
extern "C" void handle_6x9D_set_challenge_dead_flag();
extern "C" void handle_6x9E_player_camera_shutter_sound();
extern "C" void handle_6x9F_gal_gryphon_boss_actions();
extern "C" void handle_6xA0_gal_gryphon_boss_actions();
extern "C" void handle_6xA1_revive_player_v3();
extern "C" void handle_6xA2_specializable_item_drop_request();
extern "C" void handle_6xA3_olga_flow_boss_actions();
extern "C" void handle_6xA4_olga_flow_boss_actions();
extern "C" void handle_6xA5_olga_flow_boss_actions();
extern "C" void handle_6xA6_modify_trade_proposal();
extern "C" void handle_6xA7();
extern "C" void handle_6xA8_gol_dragon_boss_actions();
extern "C" void handle_6xA9_barba_ray_boss_actions();
extern "C" void handle_6xAA_barba_ray_boss_actions();
extern "C" void handle_6xAB();
extern "C" void handle_6xAC();
extern "C" void handle_6xAD_olga_flow_subordinate_boss_actions();
extern "C" void handle_6xAE_set_animation_state();
extern "C" void handle_6xAF_turn_or_move_lobby_chair();
extern "C" void handle_6xB0_turn_or_move_lobby_chair();
extern "C" void handle_6xB1();
extern "C" void handle_6xB2_play_sound_from_player();
u8 subcommand_area_masks[36] = {
    2, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 1, 4, 4, 2, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
};
void *pso_command_dispatch_table[336] = {
    (void *)0x3e0007, (void *)&handle_6x3E_stop_at_position, (void *)0x400007, (void *)&handle_6x40_walk_to_position,
    (void *)0x420007, (void *)&handle_6x42_move_to_position, (void *)0x430004, (void *)&handle_6x43_attack,
    (void *)0x440004, (void *)&handle_6x44_attack, (void *)0x450004, (void *)&handle_6x45_attack,
    (void *)0x460004, (void *)&handle_6x46_attack_finished, (void *)0x470006, (void *)&handle_6x47_cast_technique,
    (void *)0x8d0006, (void *)&handle_6x8D_set_technique_level_override, (void *)0x480006, (void *)&handle_6x48_cast_technique_complete,
    (void *)0x4a0006, (void *)&handle_6x4A_shield_attack, (void *)0x4b0006, (void *)&handle_6x4B_hit_by_enemy,
    (void *)0x4c0006, (void *)&handle_6x4C_hit_by_enemy, (void *)0x4d0006, (void *)&handle_6x4D_player_died,
    (void *)0x890006, (void *)&handle_6x89_set_killer_entity_id, (void *)0x40007, (void *)&handle_6x04_legacy_activate_switch_by_token,
    (void *)0x50007, (void *)&handle_6x05_write_switch_flag, (void *)0x70007, (void *)&handle_6x07_symbol_chat,
    (void *)0x90007, (void *)&handle_6x09_legacy_kill_enemy, (void *)0xa0006, (void *)&handle_6x0A_update_enemy_state,
    (void *)0xb0007, (void *)&handle_6x0B_update_object_state, (void *)0x760007, (void *)&handle_6x76_set_entity_set_flags,
    (void *)0x490006, (void *)&handle_6x49_execute_photon_blast, (void *)0x4f0006, (void *)&handle_6x4F_player_revived,
    (void *)0x500006, (void *)&handle_6x50_switch_interaction, (void *)0x520007, (void *)&handle_6x52_set_animation_state,
    (void *)0x530006, (void *)&handle_6x53, (void *)0x540007, (void *)&handle_6x54,
    (void *)0x550006, (void *)&handle_6x55_intra_map_warp, (void *)0x560006, (void *)&handle_6x56_set_player_position_and_angle,
    (void *)0x570007, (void *)&handle_6x57, (void *)0x580007, (void *)&handle_6x58_lobby_animation,
    (void *)0xab0007, (void *)&handle_6xAB, (void *)0xaf0007, (void *)&handle_6xAF_turn_or_move_lobby_chair,
    (void *)0xb00007, (void *)&handle_6xB0_turn_or_move_lobby_chair, (void *)0xb10007, (void *)&handle_6xB1,
    (void *)0xae0007, (void *)&handle_6xAE_set_animation_state, (void *)0x4e0006, (void *)&handle_6x4E_player_revivable,
    (void *)0x3f0007, (void *)&handle_6x3F_set_position, (void *)0x590006, (void *)&handle_6x59_pick_up_item,
    (void *)0x5a0006, (void *)&handle_6x5A_pick_up_item_request, (void *)0x5c0006, (void *)&handle_6x5C_destroy_floor_item,
    (void *)0x5d0006, (void *)&handle_6x5D_drop_stacked_item, (void *)0x5e0006, (void *)&handle_6x5E_buy_shop_item,
    (void *)0x5f0006, (void *)&handle_6x5F_drop_item, (void *)0x600006, (void *)&handle_6x60_standard_drop_item_request,
    (void *)0xa20006, (void *)&handle_6xA2_specializable_item_drop_request, (void *)0x610006, (void *)&handle_6x61_activate_mag_effect,
    (void *)0x620006, (void *)&handle_6x62, (void *)0x630006, (void *)&handle_6x63_destroy_floor_item,
    (void *)0x660006, (void *)&handle_6x66_use_star_atomizer, (void *)0x980007, (void *)&handle_6x98,
    (void *)0x990007, (void *)&handle_6x99, (void *)0x1b0007, (void *)&handle_6x1B_enable_pk_mode_for_player,
    (void *)0x1c0007, (void *)&handle_6x1C_disable_pk_mode_for_player, (void *)0x8e0007, (void *)&handle_6x8E,
    (void *)0x8f0007, (void *)&handle_6x8F_add_battle_damage_scores, (void *)0x900007, (void *)&handle_6x90_set_player_battle_team,
    (void *)0x1f0007, (void *)&handle_6x1F_set_player_floor, (void *)0x200007, (void *)&handle_6x20_set_position,
    (void *)0x210007, (void *)&handle_6x21_inter_level_warp, (void *)0x240007, (void *)&handle_6x24_teleport_player,
    (void *)0x220007, (void *)&handle_6x22_set_player_invisible, (void *)0x230007, (void *)&handle_6x23_set_player_visible,
    (void *)0x250006, (void *)&handle_6x25_equip_item, (void *)0x260006, (void *)&handle_6x26_unequip_item,
    (void *)0x270006, (void *)&handle_6x27_use_item, (void *)0x280006, (void *)&handle_6x28_feed_mag,
    (void *)0x290006, (void *)&handle_6x29_delete_inventory_item, (void *)0xac0006, (void *)&handle_6xAC,
    (void *)0x2a0006, (void *)&handle_6x2A_drop_item, (void *)0x2b0007, (void *)&handle_6x2B_create_inventory_item,
    (void *)0x2c0007, (void *)&handle_6x2C_impose_hold, (void *)0x2d0007, (void *)&handle_6x2D_release_hold,
    (void *)0x2e0007, (void *)&handle_6x2E_set_or_clear_player_flags, (void *)0x2f0007, (void *)&handle_6x2F_change_player_hp,
    (void *)0x300006, (void *)&handle_6x30_change_player_level, (void *)0x310007, (void *)&handle_6x31_use_medical_center,
    (void *)0xa10007, (void *)&handle_6xA1_revive_player_v3, (void *)0x320007, (void *)&handle_6x32_medical_center_revive_all_players,
    (void *)0x330007, (void *)&handle_6x33_revive_player, (void *)0x340006, (void *)&handle_6x34,
    (void *)0x360006, (void *)&handle_6x36, (void *)0x370006, (void *)&handle_6x37_photon_blast,
    (void *)0x380006, (void *)&handle_6x38_donate_to_photon_blast, (void *)0x390006, (void *)&handle_6x39_set_photon_blast_ready_flag,
    (void *)0x3a0006, (void *)&handle_6x3A_clear_photon_blast_ready_flag, (void *)0x3b0007, (void *)&handle_6x3B_clear_temporary_photon_blast_state_flags,
    (void *)0xc0006, (void *)&handle_6x0C_add_or_remove_status_effect, (void *)0xd0007, (void *)&handle_6x0D_add_or_remove_status_effect,
    (void *)0xe0006, (void *)&handle_6x0E_clear_negative_status_effects, (void *)0x7a0006, (void *)&handle_6x7A_enable_stealth_suit_effect,
    (void *)0x7b0007, (void *)&handle_6x7B_disable_stealth_suit_effect, (void *)0x810007, (void *)&handle_6x81_disable_drop_weapon_on_death,
    (void *)0x820007, (void *)&handle_6x82_enable_drop_weapon_on_death, (void *)0x830006, (void *)&handle_6x83_place_trap,
    (void *)0x870007, (void *)&handle_6x87_shrink_player, (void *)0x880007, (void *)&handle_6x88_restore_shrunken_player,
    (void *)0x9b0006, (void *)&handle_6x9B_level_up_all_techniques, (void *)0x100004, (void *)&handle_6x10_dragon_boss_actions,
    (void *)0x110004, (void *)&handle_6x11_dragon_boss_actions, (void *)0x120004, (void *)&handle_6x12_dragon_boss_actions,
    (void *)0x130004, (void *)&handle_6x13_de_rol_le_boss_actions, (void *)0x140004, (void *)&handle_6x14_de_rol_le_boss_actions_with_target,
    (void *)0x150007, (void *)&handle_6x15_vol_opt_boss_actions, (void *)0x160007, (void *)&handle_6x16_vol_opt_boss_actions,
    (void *)0x170007, (void *)&handle_6x17_set_entity_position_and_angle, (void *)0x180007, (void *)&handle_6x18_vol_opt2_boss_actions,
    (void *)0x840007, (void *)&handle_6x84_vol_opt_boss_actions, (void *)0x850007, (void *)&handle_6x85_vol_opt_phase2_boss_actions,
    (void *)0x190004, (void *)&handle_6x19_dark_falz_actions, (void *)0x9f0004, (void *)&handle_6x9F_gal_gryphon_boss_actions,
    (void *)0xa00004, (void *)&handle_6xA0_gal_gryphon_boss_actions, (void *)0xa30004, (void *)&handle_6xA3_olga_flow_boss_actions,
    (void *)0xa40004, (void *)&handle_6xA4_olga_flow_boss_actions, (void *)0xa50004, (void *)&handle_6xA5_olga_flow_boss_actions,
    (void *)0xad0004, (void *)&handle_6xAD_olga_flow_subordinate_boss_actions, (void *)0x670007, (void *)&handle_6x67_trigger_set_event,
    (void *)0x680006, (void *)&handle_6x68_set_telepipe_state, (void *)0x690007, (void *)&handle_6x69_npc_control,
    (void *)0x6a0007, (void *)&handle_6x6A_set_boss_warp_flags, (void *)0x6b0007, (void *)&handle_6x6B_sync_game_state,
    (void *)0x6c0007, (void *)&handle_6x6C_sync_game_state, (void *)0x6d0007, (void *)&handle_6x6D_sync_game_state,
    (void *)0x6e0007, (void *)&handle_6x6E_sync_game_state, (void *)0x6f0007, (void *)&handle_6x6F_set_quest_flags_v2,
    (void *)0x700007, (void *)&handle_6x70_sync_player_disp_and_inventory, (void *)0x710007, (void *)&handle_6x71_unblock_game_join,
    (void *)0x720007, (void *)&handle_6x72_done_loading_into_game, (void *)0x60007, (void *)&handle_6x06_send_guild_card,
    (void *)0x740007, (void *)&handle_6x74_word_select, (void *)0x410007, (void *)&handle_6x41_move_to_position,
    (void *)0x20007, (void *)&handle_6x02, (void *)0x30007, (void *)&handle_6x03,
    (void *)0x750007, (void *)&handle_6x75_update_quest_flag_dc, (void *)0x730007, (void *)&handle_6x73_exit_quest,
    (void *)0x770007, (void *)&handle_6x77_sync_quest_register, (void *)0x780007, (void *)&handle_6x78,
    (void *)0x790007, (void *)&handle_6x79_gogo_ball, (void *)0x7c0007, (void *)&handle_6x7C_set_challenge_records,
    (void *)0x7d0007, (void *)&handle_6x7D_set_battle_mode_data, (void *)0x7e0007, (void *)&handle_6x7E,
    (void *)0x7f0007, (void *)&handle_6x7F_battle_scores, (void *)0x800004, (void *)&handle_6x80_trigger_trap,
    (void *)0x860006, (void *)&handle_6x86_hit_destructible_object, (void *)0x8a0002, (void *)&handle_6x8A_show_challenge_time_records_window,
    (void *)0x910006, (void *)&handle_6x91_update_attackable_col_state, (void *)0x920004, (void *)&handle_6x92,
    (void *)0x930006, (void *)&handle_6x93_set_switch_flag_from_timer, (void *)0x640006, (void *)&handle_6x64,
    (void *)0x8b0006, (void *)&handle_6x8B, (void *)0x650006, (void *)&handle_6x65,
    (void *)0x8c0006, (void *)&handle_6x8C, (void *)0x940007, (void *)&handle_6x94_inter_level_warp,
    (void *)0x950006, (void *)&handle_6x95_set_challenge_time, (void *)0x960004, (void *)&handle_6x96,
    (void *)0x970006, (void *)&handle_6x97_select_challenge_mode_failure_option, (void *)0x9a0006, (void *)&handle_6x9A_update_entity_stat,
    (void *)0x9c0006, (void *)&handle_6x9C_set_enemy_low_game_flags_ultimate, (void *)0x9d0006, (void *)&handle_6x9D_set_challenge_dead_flag,
    (void *)0x9e0007, (void *)&handle_6x9E_player_camera_shutter_sound, (void *)0xa60006, (void *)&handle_6xA6_modify_trade_proposal,
    (void *)0xa70006, (void *)&handle_6xA7, (void *)0xa80004, (void *)&handle_6xA8_gol_dragon_boss_actions,
    (void *)0xa90004, (void *)&handle_6xA9_barba_ray_boss_actions, (void *)0xaa0004, (void *)&handle_6xAA_barba_ray_boss_actions,
    (void *)0xb20007, (void *)&handle_6xB2_play_sound_from_player, (void *)0x0, (void *)0x0,
};

void TGameProtocol::run_task() {
    Node_801E4260 *n;
    for (n = ((Head_801E4260 *)game_protocol_instance)->first; n != 0; n = *(Node_801E4260 **)((u8 *)n + 0xC)) {
        TLobby__sub_8007EB20(lbl_80449784, *(s32 *)n, n);
        if (*(s8 *)((u8 *)n + 0x2B) == 0) {
            dispatch_pso_data_commands(n);
            n->m6();
        }
        if (*(u16 *)((u8 *)n + 6) == *(u32 *)((u8 *)this + 0x1C)) {
            TLobby__sub_801A54E8(n);
            clear_send_buffer__7TPacketFv(n);
        }
    }
    *(u32 *)((u8 *)this + 0x1C) = (*(u32 *)((u8 *)this + 0x1C) + 1) & 3;
}

TGameProtocol::~TGameProtocol() {
    game_protocol_instance = 0;
}
