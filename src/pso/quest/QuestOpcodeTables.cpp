#include "pso/quest/QuestOpcodeTables.h"
#include "pso/misc/TLobby.h"

extern "C" {
void TLobby__sub_801E6C4C();
void TLobby__sub_801E6CA4();
void TLobby__sub_801E6E20();
void TLobby__sub_801E6F1C();
void push_table_ref_by_index__6TLobbyFUs();
void push_reg_ref_by_index__6TLobbyFUc();
void op_push_reg_to_stack__6TLobbyFUc();
void load_op_arg_window__6TLobbyFl();
void TLobby__sub_801E72B4();
void dispatch_story_select_by_op__6TLobbyFl();
void TLobby__sub_801E7408();
void close_active_window__6TLobbyFi();
void op_play_sound_from_reg__6TLobbyFl();
void send_data__6TLobbyFv();
void fill_player_present_flags__6TLobbyFUc();
void TLobby__sub_801E7810();
void TLobby__sub_801E7934();
void TLobby__sub_801E79BC();
void TLobby__sub_801E7AC8();
void TLobby__sub_801E7B64();
void TLobby__sub_801E7CCC();
void TLobby__sub_801E7CFC();
void TLobby__sub_801E7D7C();
void set_handler_entry__6TLobbyFi();
void TLobby__sub_801E7E50();
void TLobby__sub_801E819C();
void get_selected_slot__6TLobbyFPv();
void destroy__6TLobbyFPv();
void init_graph__6TLobbyFPv();
void TLobby__sub_801E82F8();
void TLobby__sub_801E8344();
void TLobby__sub_801E8390();
void TLobby__sub_801E83BC();
void TLobby__sub_801E8440();
void count_player_items_to_global__6TLobbyFll();
void TLobby__sub_801E85B4();
void op_fdiv_reg__6TLobbyFUcl();
void op_fdiv_reg_reg__6TLobbyFUcUc();
void mul_reg_by_immediate_float__6TLobbyFUcl();
void mul_reg_by_reg_float__6TLobbyFUcUc();
void sub_register_float_imm__6TLobbyFUcl();
void sub_register_float_reg__6TLobbyFUcUc();
void add_imm_float_to_reg__6TLobbyFUcl();
void add_reg_to_reg_float__6TLobbyFUcUc();
void op_move_reg_reg__6TLobbyFll();
void op_store_float_bits__6TLobbyFUcUc();
void spawn_object_from_registers__6TLobbyFUcUc();
void spawn_quest_col_alock__6TLobbyFUcUc();
void spawn_object_from_script_args6__6TLobbyFUcUc();
void TLobby__sub_801E8D44();
void spawn_object_from_script_args5__6TLobbyFUcUc();
void spawn_quest_col__6TLobbyFUcUc();
void TLobby__sub_801E905C();
void TLobby__sub_801E9084();
void set_partner_dialogue_for_slot__6TLobbyFUcUcPv();
void load_reg_table_f28__6TLobbyFUcUc();
void load_reg_table_f20__6TLobbyFUcUc();
void TLobby__sub_801E93E0();
void TLobby__sub_801E9400();
void set_quest_object_position__6TLobbyFll();
void op_close_windows_by_flags__6TLobbyFl();
void TLobby__sub_801E95B0();
void find_player_143__6TLobbyFv();
void op_window_ctrl_mode_b__6TLobbyFl();
void start_slot_mode_10__6TLobbyFl();
void TLobby__sub_801E9654();
void TLobby__sub_801E9684();
void TLobby__sub_801E96B4();
void dispatch_slot_event_6__6TLobbyFl();
void dispatch_slot_event_5__6TLobbyFl();
void op_window_ctrl_mode4__6TLobbyFl();
void op_window_ctrl_mode3__6TLobbyFl();
void start_slot_mode_2__6TLobbyFl();
void TLobby__sub_801E97D4();
void TLobby__sub_801E9804();
void TLobby__sub_801E9834();
void TLobby__sub_801E9864();
void TLobby__sub_801E989C();
void end_camera_pan_for_slot__6TLobbyFl();
void TLobby__sub_801E99A0();
void TLobby__sub_801E9A50();
void create_challenge_4p_results__6TLobbyFUc();
void TLobby__sub_801E9AF8();
void set_lobby_mode_slot__6TLobbyFl();
void TLobby__sub_801E9C40();
void set_story_select__6TLobbyFl();
void TLobby__sub_801E9CD0();
void TLobby__sub_801E9D94();
void TLobby__sub_801E9DEC();
void set_unit_list_flag__6TLobbyFl();
void set_unit_name_flag__6TLobbyFl();
void set_handler__6TLobbyFi();
void TLobby__sub_801EA094();
void store_card_stats__6TLobbyFUc();
void TLobby__sub_801EA1B4();
void op_set_reg_from_flag__6TLobbyFl();
void TLobby__sub_801EA274();
void spawn_symbolchat_colli__6TLobbyFUc();
void create_chat_sensor__6TLobbyFUc();
void TLobby__sub_801EA5FC();
void TLobby__sub_801EA690();
void TLobby__sub_801EA7A0();
void TLobby__sub_801EA84C();
void TLobby__sub_801EA8E8();
void roll_random_in_range__6TLobbyFl();
void copy_script_register_from_buffer__6TLobbyFUcUc();
void load_chr_select_word__6TLobbyFUcUc();
void broadcast_entry__6TLobbyFl();
void TLobby__sub_801EAB90();
void TLobby__sub_801EABEC();
void TLobby__sub_801EAC48();
void TLobby__sub_801EADD8();
void TLobby__sub_801EB048();
void TLobby__sub_801EB0A0();
void TLobby__sub_801EB0F8();
void TLobby__sub_801EB10C();
void update_player_status__6TLobbyFll();
void TLobby__sub_801EB46C();
void TLobby__sub_801EB478();
void TLobby__sub_801EB484();
void copy_table_value__6TLobbyFUcUc();
void forward_802272B4__6TLobbyFv();
void TLobby__sub_801EB588();
void TLobby__sub_801EB5A8();
void update_client_slot_from_player__6TLobbyFll();
void TLobby__sub_801EB6B8();
void store_player_name_by_client__6TLobbyFl();
void eval_op_add_ratio__6TLobbyFv();
void TLobby__sub_801EB85C();
void acquire_serial_access_for_slot__6TLobbyFUc();
void TLobby__sub_801EB914();
void store_chr_select_value__6TLobbyFl();
void qst_op_try_spend_meseta__6TLobbyFll();
void fill_player_team_flags__6TLobbyFll();
void store_player_state_flag__6TLobbyFll();
void apply_to_player_by_client_id_a__6TLobbyFl();
void apply_to_player_by_client_id_b__6TLobbyFl();
void TLobby__sub_801EBCA0();
void TLobby__sub_801EBCF0();
void TLobby__sub_801EBD40();
void store_boss_phase_flag__6TLobbyFl();
void TLobby__sub_801EBE6C();
void enable_mine_trap__6TLobbyFv();
void init_menu_state__6TLobbyFi();
void TLobby__sub_801EBF04();
void create_item_from_table__6TLobbyFUcUc();
void TLobby__sub_801EC050();
void count_nearby_players__6TLobbyFUcUc();
void TLobby__sub_801EC248();
void TLobby__sub_801EC31C();
void TLobby__sub_801EC43C();
void write_mag_stats__6TLobbyFl();
void TLobby__sub_801EC64C();
void TLobby__sub_801EC694();
void update_main_phase__6TLobbyFii();
void forward_item_to_player__6TLobbyFUc();
void TLobby__sub_801EC7A0();
void TLobby__sub_801EC7C4();
void TLobby__sub_801EC834();
void TLobby__sub_801EC854();
void TLobby__sub_801EC874();
void forward_801F36D8__6TLobbyFv();
void TLobby__sub_801EC8B4();
void TLobby__sub_801EC90C();
void TLobby__sub_801EC93C();
void TLobby__sub_801EC954();
void TLobby__sub_801EC984();
void TLobby__sub_801EC9F8();
void TLobby__sub_801ECA1C();
void TLobby__sub_801ECA3C();
void TLobby__sub_801ECA88();
void TLobby__sub_801ECB0C();
void TLobby__sub_801ECB90();
void calc_stat_ratio_3544__6TLobbyFv();
void calc_stat_ratio_3540__6TLobbyFv();
void op_fdiv_to_global_a__6TLobbyFv();
void op_fdiv_to_global_b__6TLobbyFv();
void calc_ratio_value__6TLobbyFv();
void TLobby__sub_801ECEA8();
void TLobby__sub_801ECF2C();
void copy_player_visual_record_by_index__6TLobbyFv();
void TLobby__sub_801ECFBC();
void TLobby__sub_801ECFDC();
void TLobby__sub_801ED0CC();
void qst_op_unshrink();
void qst_op_shrink();
void store_floor_switch_state__6TLobbyFl();
void update_floor_switch_state__6TLobbyFv();
void reset_player_floor_by_slot__6TLobbyFl();
void store_player_kill_count__6TLobbyFll();
void warp_player_to_area__6TLobbyFll();
void TLobby__sub_801ED50C();
void op_set_control_override__6TLobbyFl();
void TLobby__sub_801ED55C();
void TLobby__sub_801ED5B4();
void TLobby__sub_801ED60C();
void TLobby__sub_801ED764();
void spawn_item_from_regs__6TLobbyFUc();
void TLobby__sub_801ED938();
void TLobby__sub_801EDA70();
void TLobby__sub_801EDABC();
void TLobby__sub_801EDB04();
void TLobby__sub_801EDB4C();
void TLobby__sub_801EDC98();
void send_field1c_if_player_exists__6TLobbyFii();
void send_font_state_if_player_exists__6TLobbyFii();
void TLobby__sub_801EDDDC();
void TLobby__sub_801EDE00();
void store_player_position__6TLobbyFll();
void store_status__6TLobbyFi();
void qst_op_get_difficulty_level2__6TLobbyFl();
void send_switch_changed_from_args__6TLobbyFl();
void forward_801F36E4__6TLobbyFv();
void TLobby__sub_801EE09C();
void check_item_equippable_by_room__6TLobbyFUcUc();
void set_camera_from_table__6TLobbyFUc();
void TLobby__sub_801EE374();
void TLobby__sub_801EE3C0();
void TLobby__sub_801EE48C();
void TLobby__sub_801EE4D4();
void TLobby__sub_801EE4D8();
void notify_guild_offline__6TLobbyFUs();
void qst_op_get_difficulty_level_v1__6TLobbyFl();
void TLobby__sub_801EE54C();
void set_table_entry__6TLobbyFi();
void qst_op_winset_time();
void create_alt_timer__6TLobbyFv();
void TLobby__sub_801EE77C();
void qst_op_del_obj_param();
void qst_op_clr_qt_cancel();
void qst_op_clr_qt_success();
void qst_set_camera_offsets__6TLobbyFUc();
void TLobby__sub_801EF24C();
void forward_npc_player__6TLobbyFv();
void TLobby__sub_801EF748();
void TLobby__sub_801EF768();
void TLobby__sub_801EF788();
void TLobby__sub_801EF7A8();
void qst_op_unhide_ene();
void qst_op_unhide_obj();
void spawn_particle_at_entity__6TLobbyFUc();
void TLobby__sub_801F07D8();
void spawn_stored_particle_emitter__6TLobbyFUc();
void qst_op_cam_pan();
}
void quest_construct_selected_scripted_player(u8 first);
void qst_op_npc_crptalk(u8 first);
extern "C" {
void close_window__6TLobbyFv();
void pop_stack_into_slots__6TLobbyFll();
void push_op_args_from_table__6TLobbyFll();
void set_slot__6TLobbyFi();
void qst_op_nop_42_stack_push();
void qst_op_jmp_off();
void qst_op_jmp_on();
void op_mod_reg__6TLobbyFll();
void qst_op_grev();
void qst_op_rev();
void qst_op_clear();
void qst_op_set();
void TLobby__sub_801F2570();
void qst_getargs_801F2700(s32 opcode);
void qst_getargs_801F2828(s32 opcode);
void qst_getargs_801F2B0C(s32 opcode);
}
void quest_check_chat_keyword();
void qst_op_arg_pushs(int a0);
void quest_vm_push_u16_argument(u16 a0);
void quest_vm_push_u8_argument(u8 a0);
void qst_op_arg_pushl(int a0);
void quest_vm_get_language();
void quest_vm_store_s32_indirect();
void quest_vm_store_s16_indirect();
void quest_vm_store_s8_indirect();
void quest_vm_load_s32_indirect();
void quest_vm_load_s16_indirect();
void quest_set_player_shrink_size(s32 player_variable, s32 size_variable);
void quest_vm_shift_right_arithmetic_register(s32 arg0, s32 arg1);
void quest_vm_shift_left_register(s32 arg0, s32 arg1);
void qst_op_map_designate_ex(u32 first);
void quest_vm_get_designated_client_id(u8 reg);
void quest_vm_get_local_client_id(u8 reg);
int qst_op_warp_on(void *p);
void send_6x77_sync_quest_register();
void qst_op_clear_quest_board_handler();
void qst_op_set_quest_board_handler();
int qst_op_winend_time(void *p);
void qst_op_map_designate(u32 first);
void qst_op_item_check(u32 first, u32 destination);
void qst_op_item_delete2(u32 src, u32 dst);
void qst_op_item_delete(u32 src, u32 dst);
void qst_op_item_create2(u8 arg0, u8 arg1);
void qst_op_item_create(u8 arg0, u8 arg1);
void qst_op_pl_add_meseta();
int qst_op_clr_qt_failure(void);
void qst_op_set_qt_cancel(u16 arg0);
void qst_op_set_qt_success(u16 arg0);
void qst_op_set_qt_failure(u16 arg0);
void qst_op_clr_floor_handler();
void qst_op_set_floor_handler();
void qst_op_set_mainwarp();
void qst_op_playbgm_epi();
void qst_op_switch_off();
void qst_op_switch_on();
void qst_op_npc_talk_kill();
void qst_op_npc_talk_pl(u8 arg0);
void qst_op_p_talk_guild();
void qst_op_p_return_guild();
void qst_op_nop_A0_debug();
int qst_op_cine_disable(void);
int qst_op_cine_enable(void);
void qst_op_hud_show();
void qst_op_hud_hide();
void qst_op_set_obj_param(u8 arg0, u8 arg1);
void qst_op_col_npcinr(u8 arg0);
void qst_op_col_npcin(u8 arg0);
void qst_op_at_coords_talk(u8 arg0);
void qst_op_at_coords_call(u8 arg0);
void qst_op_gettime(u8 arg0);
void qst_op_chk_ene_num(int a0);
void qst_op_if_zone_clear(s32 arg0, s32 arg1);
void qst_op_p_action_enable();
void qst_op_p_action_disable();
void qst_op_pos_pipe(u8 arg0);
void qst_op_create_pipe();
void qst_op_p_setpos();
void qst_op_p_enablewarp();
void qst_op_p_disablewarp();
void qst_op_p_dead();
void qst_op_p_hpstat();
void qst_op_p_move(u8 arg0);
void qst_op_p_look_at();
void qst_op_particle_id(u8 first);
void qst_op_pl_walk(u8 arg0);
void qst_op_p_look();
int qst_op_p_col(void *p);
int qst_op_p_noncol(void *p);
void qst_op_enable_movement1();
void qst_op_disable_movement1();
int qst_op_npc_talk(void *p);
int qst_op_npc_nont(void *p);
void qst_op_npc_kill();
int qst_op_cam_adj(void *p);
void qst_op_game_lev_reset_nop_86();
void qst_op_game_lev_super_nop_85();
int qst_op_cam_zmout(void *p);
int qst_op_cam_zmin(void *p);
int qst_op_cam_quake(void);
void qst_op_npc_play();
void qst_op_npc_stop();
void qst_op_npc_crp_id(u8 first);
void qst_op_npc_crp(u8 first);
void qst_op_npc_crppk(u8 arg0);
void qst_op_npc_crtpk();
void qst_op_npc_crt();
void qst_op_winend();
void qst_op_mesend();
void qst_op_add_msg();
void quest_cmd_winend();
void qst_op_window_msg();
void qst_op_bgm();
void qst_op_se();
void qst_op_fadeout();
void qst_op_fadein();
void qst_op_list();
void qst_op_message();
void qst_op_switch_call(s32 arg0, u8 arg1, s32 arg2);
void qst_op_switch_jmp(s32 arg0, u8 arg1, s32 arg2);
void qst_op_jmpi_le(s32 arg0, s32 arg1, s32 arg2);
void qst_op_jmp_le(s32 arg0, s32 arg1, s32 arg2);
void qst_op_ujmpi_le(s32 arg0, u32 arg1, s32 arg2);
void qst_op_ujmp_le(s32 arg0, s32 arg1, s32 arg2);
void qst_op_jmpi_ge(s32 arg0, s32 arg1, s32 arg2);
void qst_op_jmp_ge(s32 arg0, s32 arg1, s32 arg2);
void qst_op_ujmpi_ge(s32 arg0, u32 arg1, s32 arg2);
void qst_op_ujmp_ge(s32 arg0, s32 arg1, s32 arg2);
void qst_op_jmpi_lt(s32 arg0, s32 arg1, s32 arg2);
void qst_op_jmp_lt(s32 arg0, s32 arg1, s32 arg2);
void qst_op_ujmpi_lt(s32 arg0, u32 arg1, s32 arg2);
void qst_op_ujmp_lt(s32 arg0, s32 arg1, s32 arg2);
void qst_op_jmpi_gt(s32 arg0, s32 arg1, s32 arg2);
void qst_op_jmp_gt(s32 arg0, s32 arg1, s32 arg2);
void qst_op_ujmpi_gt(s32 arg0, u32 arg1, s32 arg2);
void qst_op_ujmp_gt(s32 arg0, s32 arg1, s32 arg2);
void qst_op_jmpi_ne(s32 arg0, s32 arg1, s32 arg2);
void qst_op_jmp_ne(s32 arg0, s32 arg1, s32 arg2);
void qst_op_jmpi_eq(s32 arg0, s32 arg1, s32 arg2);
void qst_op_jmp_eq(s32 arg0, s32 arg1, s32 arg2);
void qst_op_call(u16 arg0);
void quest_vm_modulo_unsigned_immediate(s32 arg0, u32 arg1);
void qst_op_jmp(int a0);
void qst_op_xori(s32 arg0, s32 arg1);
void qst_op_xor(s32 arg0, s32 arg1);
void qst_op_ori(s32 arg0, s32 arg1);
void qst_op_or(s32 arg0, s32 arg1);
void qst_op_andi(s32 arg0, s32 arg1);
void qst_op_and(s32 arg0, s32 arg1);
void qst_op_divi(s32 arg0, s32 arg1);
void qst_op_div(s32 arg0, s32 arg1);
void qst_op_muli(s32 arg0, s32 arg1);
void qst_op_mul(s32 arg0, s32 arg1);
void qst_op_subi(s32 arg0, s32 arg1);
void qst_op_sub(s32 arg0, s32 arg1);
void qst_op_addi(int a0, int a1);
void qst_op_add(s32 arg0, s32 arg1);
void qst_op_gget(u16 flag, s32 arg1);
void qst_op_glet(u16 flag, s32 arg1);
void qst_op_gclear(u16 flag);
void qst_op_gset(u16 arg0);
void quest_vm_get_register_address(s32 arg0, s32 arg1);
void quest_vm_assign_u16_immediate(int a0, int a1);
void qst_op_leta_letb(int a0, int a1);
void qst_op_leti(int a0, int a1);
void qst_op_let(s32 arg0, s32 arg1);
void qst_op_thread_stg(u16 arg0);
void qst_op_thread(u16 arg0);
void qst_op_sync();
void qst_op_exit();
void qst_op_ret();
void qst_op_nop();
void qst_getargs_801F26A8(s32 opcode);
void qst_getargs_cstring(s32 opcode);
void qst_getargs_801F27A0(s32 opcode);
void qst_getargs_801F28AC(s32 opcode);
void qst_getargs_801F2910(s32 opcode);
void qst_getargs_801F29CC(s32 opcode);
void qst_getargs_801F2A14(s32 opcode);
void qst_getargs_801F2A5C(s32 opcode);
void qst_getargs_801F2AB4(s32 opcode);
void qst_getargs_801F2B54(s32 opcode);
void qst_getargs_801F2B94(s32 opcode);

extern const char quest_bgm_clear_filename[];
extern const char quest_bgm_miniclear_filename[];
extern "C" {

__declspec(section ".data") const char* qst_bgm_filename_table[2] = {
    quest_bgm_clear_filename, quest_bgm_miniclear_filename
};
}

QuestOpcodeEntry qst_opcode_table[0x300] = {
    { qst_getargs_801F2B94, qst_op_nop },
    { qst_getargs_801F2B94, qst_op_ret },
    { qst_getargs_801F2B94, qst_op_sync },
    { qst_getargs_801F2A14, qst_op_exit },
    { qst_getargs_801F29CC, (void (*)())qst_op_thread },
    { qst_getargs_801F2B94, TLobby::reset_and_set_mode },
    { qst_getargs_801F2B94, TLobby::request_1c38_1_7 },
    { qst_getargs_801F29CC, load_op_arg_window__6TLobbyFl },
    { qst_getargs_801F2AB4, (void (*)())qst_op_let },
    { qst_getargs_801F2A5C, (void (*)())qst_op_leti },
    { qst_getargs_801F2AB4, (void (*)())qst_op_leta_letb },
    { TLobby::dispatch_command, (void (*)())quest_vm_assign_u16_immediate },
    { qst_getargs_801F2AB4, (void (*)())quest_vm_get_register_address },
    { TLobby::dispatch_command, TLobby__sub_801F2570 },
    { 0, 0 },
    { 0, 0 },
    { qst_getargs_801F2B0C, qst_op_set },
    { qst_getargs_801F2B0C, qst_op_clear },
    { qst_getargs_801F2B0C, qst_op_rev },
    { qst_getargs_801F2700, (void (*)())qst_op_gset },
    { qst_getargs_801F2700, (void (*)())qst_op_gclear },
    { qst_getargs_801F2700, qst_op_grev },
    { qst_getargs_801F26A8, (void (*)())qst_op_glet },
    { qst_getargs_801F26A8, (void (*)())qst_op_gget },
    { qst_getargs_801F2AB4, (void (*)())qst_op_add },
    { qst_getargs_801F2A5C, (void (*)())qst_op_addi },
    { qst_getargs_801F2AB4, (void (*)())qst_op_sub },
    { qst_getargs_801F2A5C, (void (*)())qst_op_subi },
    { qst_getargs_801F2AB4, (void (*)())qst_op_mul },
    { qst_getargs_801F2A5C, (void (*)())qst_op_muli },
    { qst_getargs_801F2AB4, (void (*)())qst_op_div },
    { qst_getargs_801F2A5C, (void (*)())qst_op_divi },
    { qst_getargs_801F2AB4, (void (*)())qst_op_and },
    { qst_getargs_801F2A5C, (void (*)())qst_op_andi },
    { qst_getargs_801F2AB4, (void (*)())qst_op_or },
    { qst_getargs_801F2A5C, (void (*)())qst_op_ori },
    { qst_getargs_801F2AB4, (void (*)())qst_op_xor },
    { qst_getargs_801F2A5C, (void (*)())qst_op_xori },
    { qst_getargs_801F2AB4, op_mod_reg__6TLobbyFll },
    { qst_getargs_801F2A5C, (void (*)())quest_vm_modulo_unsigned_immediate },
    { qst_getargs_801F29CC, (void (*)())qst_op_jmp },
    { qst_getargs_801F29CC, (void (*)())qst_op_call },
    { qst_getargs_801F2828, qst_op_jmp_on },
    { qst_getargs_801F2828, qst_op_jmp_off },
    { qst_getargs_801F2910, (void (*)())qst_op_jmp_eq },
    { qst_getargs_801F28AC, (void (*)())qst_op_jmpi_eq },
    { qst_getargs_801F2910, (void (*)())qst_op_jmp_ne },
    { qst_getargs_801F28AC, (void (*)())qst_op_jmpi_ne },
    { qst_getargs_801F2910, (void (*)())qst_op_ujmp_gt },
    { qst_getargs_801F28AC, (void (*)())qst_op_ujmpi_gt },
    { qst_getargs_801F2910, (void (*)())qst_op_jmp_gt },
    { qst_getargs_801F28AC, (void (*)())qst_op_jmpi_gt },
    { qst_getargs_801F2910, (void (*)())qst_op_ujmp_lt },
    { qst_getargs_801F28AC, (void (*)())qst_op_ujmpi_lt },
    { qst_getargs_801F2910, (void (*)())qst_op_jmp_lt },
    { qst_getargs_801F28AC, (void (*)())qst_op_jmpi_lt },
    { qst_getargs_801F2910, (void (*)())qst_op_ujmp_ge },
    { qst_getargs_801F28AC, (void (*)())qst_op_ujmpi_ge },
    { qst_getargs_801F2910, (void (*)())qst_op_jmp_ge },
    { qst_getargs_801F28AC, (void (*)())qst_op_jmpi_ge },
    { qst_getargs_801F2910, (void (*)())qst_op_ujmp_le },
    { qst_getargs_801F28AC, (void (*)())qst_op_ujmpi_le },
    { qst_getargs_801F2910, (void (*)())qst_op_jmp_le },
    { qst_getargs_801F28AC, (void (*)())qst_op_jmpi_le },
    { qst_getargs_801F27A0, (void (*)())qst_op_switch_jmp },
    { qst_getargs_801F27A0, (void (*)())qst_op_switch_call },
    { qst_getargs_801F2B0C, qst_op_nop_42_stack_push },
    { qst_getargs_801F2B0C, set_slot__6TLobbyFi },
    { qst_getargs_801F2A5C, push_op_args_from_table__6TLobbyFll },
    { qst_getargs_801F2A5C, pop_stack_into_slots__6TLobbyFll },
    { 0, 0 },
    { 0, 0 },
    { qst_getargs_801F2B0C, op_push_reg_to_stack__6TLobbyFUc },
    { qst_getargs_801F2A14, (void (*)())qst_op_arg_pushl },
    { qst_getargs_801F2B0C, (void (*)())quest_vm_push_u8_argument },
    { qst_getargs_801F29CC, (void (*)())quest_vm_push_u16_argument },
    { qst_getargs_801F2B0C, push_reg_ref_by_index__6TLobbyFUc },
    { qst_getargs_801F29CC, push_table_ref_by_index__6TLobbyFUs },
    { qst_getargs_cstring, (void (*)())qst_op_arg_pushs },
    { 0, 0 },
    { qst_getargs_801F2B54, qst_op_message },
    { qst_getargs_801F2B54, qst_op_list },
    { qst_getargs_801F2B94, qst_op_fadein },
    { qst_getargs_801F2B94, qst_op_fadeout },
    { qst_getargs_801F2B54, qst_op_se },
    { qst_getargs_801F2B54, qst_op_bgm },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { qst_getargs_801F2B54, qst_op_window_msg },
    { qst_getargs_801F2B54, qst_op_add_msg },
    { qst_getargs_801F2B94, qst_op_mesend },
    { qst_getargs_801F2B0C, (void (*)())qst_op_gettime },
    { qst_getargs_801F2B94, qst_op_winend },
    { 0, 0 },
    { qst_getargs_801F2B54, qst_op_npc_crt },
    { qst_getargs_801F2B54, qst_op_npc_stop },
    { qst_getargs_801F2B54, qst_op_npc_play },
    { qst_getargs_801F2B54, qst_op_npc_kill },
    { qst_getargs_801F2B94, (void (*)())qst_op_npc_nont },
    { qst_getargs_801F2B94, (void (*)())qst_op_npc_talk },
    { qst_getargs_801F2B0C, (void (*)())qst_op_npc_crp },
    { 0, 0 },
    { qst_getargs_801F2B54, qst_op_create_pipe },
    { qst_getargs_801F2B54, qst_op_p_hpstat },
    { qst_getargs_801F2B54, qst_op_p_dead },
    { qst_getargs_801F2B94, qst_op_p_disablewarp },
    { qst_getargs_801F2B94, qst_op_p_enablewarp },
    { qst_getargs_801F2B0C, (void (*)())qst_op_p_move },
    { qst_getargs_801F2B54, qst_op_p_look },
    { 0, 0 },
    { qst_getargs_801F2B94, qst_op_p_action_disable },
    { qst_getargs_801F2B94, qst_op_p_action_enable },
    { qst_getargs_801F2B54, qst_op_disable_movement1 },
    { qst_getargs_801F2B54, qst_op_enable_movement1 },
    { qst_getargs_801F2B94, (void (*)())qst_op_p_noncol },
    { qst_getargs_801F2B94, (void (*)())qst_op_p_col },
    { qst_getargs_801F2B54, qst_op_p_setpos },
    { qst_getargs_801F2B94, qst_op_p_return_guild },
    { qst_getargs_801F2B54, qst_op_p_talk_guild },
    { qst_getargs_801F2B0C, (void (*)())qst_op_npc_talk_pl },
    { qst_getargs_801F2B54, qst_op_npc_talk_kill },
    { qst_getargs_801F2B54, qst_op_npc_crtpk },
    { qst_getargs_801F2B0C, (void (*)())qst_op_npc_crppk },
    { qst_getargs_801F2B0C, (void (*)())qst_op_npc_crptalk },
    { qst_getargs_801F2B54, qst_op_p_look_at },
    { qst_getargs_801F2B0C, (void (*)())qst_op_npc_crp_id },
    { qst_getargs_801F2B94, (void (*)())qst_op_cam_quake },
    { qst_getargs_801F2B94, (void (*)())qst_op_cam_adj },
    { qst_getargs_801F2B94, (void (*)())qst_op_cam_zmin },
    { qst_getargs_801F2B94, (void (*)())qst_op_cam_zmout },
    { qst_getargs_801F2B0C, qst_op_cam_pan },
    { qst_getargs_801F2B94, qst_op_game_lev_super_nop_85 },
    { qst_getargs_801F2B94, qst_op_game_lev_reset_nop_86 },
    { qst_getargs_801F2B0C, (void (*)())qst_op_pos_pipe },
    { qst_getargs_801F2AB4, (void (*)())qst_op_if_zone_clear },
    { qst_getargs_801F2B0C, (void (*)())qst_op_chk_ene_num },
    { qst_getargs_801F2B0C, qst_op_unhide_obj },
    { qst_getargs_801F2B0C, qst_op_unhide_ene },
    { qst_getargs_801F2B0C, (void (*)())qst_op_at_coords_call },
    { qst_getargs_801F2B0C, (void (*)())qst_op_at_coords_talk },
    { qst_getargs_801F2B0C, (void (*)())qst_op_col_npcin },
    { qst_getargs_801F2B0C, (void (*)())qst_op_col_npcinr },
    { qst_getargs_801F2B54, qst_op_switch_on },
    { qst_getargs_801F2B54, qst_op_switch_off },
    { qst_getargs_801F2B54, qst_op_playbgm_epi },
    { qst_getargs_801F2B54, qst_op_set_mainwarp },
    { qst_getargs_801F2AB4, (void (*)())qst_op_set_obj_param },
    { qst_getargs_801F2B54, qst_op_set_floor_handler },
    { qst_getargs_801F2B54, qst_op_clr_floor_handler },
    { qst_getargs_801F2B0C, TLobby__sub_801EF7A8 },
    { qst_getargs_801F2B94, qst_op_hud_hide },
    { qst_getargs_801F2B94, qst_op_hud_show },
    { qst_getargs_801F2B94, (void (*)())qst_op_cine_enable },
    { qst_getargs_801F2B94, (void (*)())qst_op_cine_disable },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { qst_getargs_801F2B54, qst_op_nop_A0_debug },
    { qst_getargs_801F29CC, (void (*)())qst_op_set_qt_failure },
    { qst_getargs_801F29CC, (void (*)())qst_op_set_qt_success },
    { qst_getargs_801F2B94, (void (*)())qst_op_clr_qt_failure },
    { qst_getargs_801F2B94, qst_op_clr_qt_success },
    { qst_getargs_801F29CC, (void (*)())qst_op_set_qt_cancel },
    { qst_getargs_801F2B94, qst_op_clr_qt_cancel },
    { 0, 0 },
    { qst_getargs_801F2B0C, (void (*)())qst_op_pl_walk },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { qst_getargs_801F2B54, qst_op_pl_add_meseta },
    { qst_getargs_801F29CC, (void (*)())qst_op_thread_stg },
    { qst_getargs_801F2B0C, qst_op_del_obj_param },
    { qst_getargs_801F2AB4, (void (*)())qst_op_item_create },
    { qst_getargs_801F2AB4, (void (*)())qst_op_item_create2 },
    { qst_getargs_801F2AB4, (void (*)())qst_op_item_delete },
    { qst_getargs_801F2AB4, (void (*)())qst_op_item_delete2 },
    { qst_getargs_801F2AB4, (void (*)())qst_op_item_check },
    { qst_getargs_801F2B54, TLobby__sub_801EE54C },
    { qst_getargs_801F2B0C, qst_op_get_difficulty_level_v1__6TLobbyFl },
    { qst_getargs_801F29CC, notify_guild_offline__6TLobbyFUs },
    { qst_getargs_801F2B94, TLobby__sub_801EE4D8 },
    { qst_getargs_cstring, TLobby__sub_801EE4D4 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { qst_getargs_801F2B0C, spawn_stored_particle_emitter__6TLobbyFUc },
    { qst_getargs_801F2B54, TLobby::set_partner_remark_from_state },
    { qst_getargs_801F2B94, TLobby__sub_801EF788 },
    { qst_getargs_801F2B94, TLobby__sub_801EF768 },
    { qst_getargs_801F2B0C, (void (*)())qst_op_map_designate },
    { qst_getargs_801F2B94, TLobby::update_doors },
    { qst_getargs_801F2B94, TLobby::open_door },
    { qst_getargs_801F2B94, create_alt_timer__6TLobbyFv },
    { qst_getargs_801F2B94, (void (*)())qst_op_winend_time },
    { qst_getargs_801F2B0C, qst_op_winset_time },
    { qst_getargs_801F2B0C, set_table_entry__6TLobbyFi },
    { qst_getargs_801F2B54, qst_op_set_quest_board_handler },
    { qst_getargs_801F2B54, qst_op_clear_quest_board_handler },
    { qst_getargs_801F2B0C, (void (*)())qst_op_particle_id },
    { qst_getargs_801F2B0C, (void (*)())quest_construct_selected_scripted_player },
    { qst_getargs_801F2B94, forward_npc_player__6TLobbyFv },
    { qst_getargs_801F2B94, TLobby__sub_801EF748 },
    { qst_getargs_801F2AB4, TLobby__sub_801EE77C },
    { qst_getargs_801F2B94, TLobby::process_static_805D53A0 },
    { qst_getargs_801F2B94, TLobby__sub_801EE48C },
    { qst_getargs_801F2B94, TLobby::attach_battle_ctrl },
    { qst_getargs_801F2B94, TLobby::update_local_player },
    { qst_getargs_801F2B54, quest_cmd_winend },
    { qst_getargs_801F2B94, close_window__6TLobbyFv },
    { qst_getargs_801F2B54, TLobby__sub_801EE3C0 },
    { qst_getargs_801F2B54, send_6x77_sync_quest_register },
    { qst_getargs_801F2B94, TLobby::sync_battle_ctrl_4p },
    { qst_getargs_801F2B94, TLobby::handle_active_battle },
    { qst_getargs_801F2B94, TLobby::clear_quest_vm },
    { qst_getargs_801F2B94, TLobby::cleanup_luker_and_quest_flag },
    { qst_getargs_801F2B0C, check_item_equippable_by_room__6TLobbyFUcUc },
    { qst_getargs_801F2B54, TLobby::handle_spawn_npc_packet },
    { qst_getargs_801F2B94, TLobby__sub_801EE09C },
    { qst_getargs_801F2B54, TLobby::clear_active_bit_from_data },
    { qst_getargs_801F2B0C, qst_set_camera_offsets__6TLobbyFUc },
    { qst_getargs_801F2B54, TLobby::send_packet_67_04 },
    { qst_getargs_801F2B94, (void (*)())qst_op_warp_on },
    { qst_getargs_801F2B94, forward_801F36E4__6TLobbyFv },
    { qst_getargs_801F2B0C, (void (*)())quest_vm_get_local_client_id },
    { qst_getargs_801F2B0C, (void (*)())quest_vm_get_designated_client_id },
    { qst_getargs_801F2B54, TLobby__sub_801EE374 },
    { qst_getargs_801F2AB4, op_mod_reg__6TLobbyFll },
    { qst_getargs_801F2A5C, (void (*)())quest_vm_modulo_unsigned_immediate },
    { qst_getargs_801F2B54, TLobby::qst_op_force_bgm },
    { qst_getargs_801F2B0C, send_switch_changed_from_args__6TLobbyFl },
    { qst_getargs_801F2B94, TLobby::create_quest_bgm_ctrl },
    { qst_getargs_801F2B54, TLobby::notify_battle_ctrl_player },
    { qst_getargs_801F2B54, send_6x77_sync_quest_register },
    { 0, 0 },
    { qst_getargs_801F2B0C, set_camera_from_table__6TLobbyFUc },
    { qst_getargs_801F2B94, TLobby::reset_battle_camera },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { qst_getargs_801F2B54, TLobby::spawn_chat_sensor },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { qst_getargs_801F2B0C, qst_op_get_difficulty_level2__6TLobbyFl },
    { qst_getargs_801F2B0C, store_status__6TLobbyFi },
    { qst_getargs_801F2AB4, store_player_position__6TLobbyFll },
    { qst_getargs_801F2B94, TLobby__sub_801EDE00 },
    { qst_getargs_801F2B94, TLobby__sub_801EDDDC },
    { qst_getargs_801F2B0C, (void (*)())qst_op_map_designate_ex },
    { qst_getargs_801F2B54, send_font_state_if_player_exists__6TLobbyFii },
    { qst_getargs_801F2B54, send_field1c_if_player_exists__6TLobbyFii },
    { qst_getargs_801F2B54, TLobby__sub_801EDC98 },
    { qst_getargs_801F2B94, TLobby::op_clear_block },
    { qst_getargs_801F2B54, TLobby::set_menu_byte_0 },
    { qst_getargs_801F2B54, TLobby::set_menu_byte_1 },
    { qst_getargs_801F2B54, TLobby::set_menu_byte_2 },
    { qst_getargs_801F2B54, TLobby__sub_801EDB4C },
    { qst_getargs_801F2B54, TLobby__sub_801EDB04 },
    { qst_getargs_801F2B54, TLobby__sub_801EDABC },
    { qst_getargs_801F2B54, TLobby__sub_801EDA70 },
    { qst_getargs_801F2B54, TLobby::update_table_byte7 },
    { qst_getargs_801F2B54, TLobby::update_table_byte8 },
    { qst_getargs_801F2B54, TLobby::op_set_mode_byte },
    { qst_getargs_801F2B54, TLobby__sub_801ED938 },
    { qst_getargs_801F2B54, TLobby__sub_801EC93C },
    { qst_getargs_801F2B54, TLobby__sub_801EC90C },
    { 0, 0 },
    { qst_getargs_801F2B54, TLobby::apply_player_count },
    { qst_getargs_801F2B0C, spawn_item_from_regs__6TLobbyFUc },
    { qst_getargs_801F2B0C, TLobby__sub_801ED764 },
    { qst_getargs_801F2B54, TLobby::update_split_screen_camera },
    { qst_getargs_801F2B54, TLobby::dispatch_split_screen },
    { qst_getargs_801F2B0C, TLobby__sub_801ED60C },
    { qst_getargs_801F2B0C, TLobby__sub_801ED5B4 },
    { qst_getargs_801F2B0C, TLobby__sub_801ED55C },
    { qst_getargs_801F2AB4, warp_player_to_area__6TLobbyFll },
    { qst_getargs_801F2AB4, store_player_kill_count__6TLobbyFll },
    { qst_getargs_801F2B0C, reset_player_floor_by_slot__6TLobbyFl },
    { qst_getargs_801F2B54, TLobby::send_6x05_switch_changed_on },
    { qst_getargs_801F2B54, TLobby::send_6x05_switch_changed_off },
    { qst_getargs_801F2B0C, update_floor_switch_state__6TLobbyFv },
    { qst_getargs_801F2B0C, store_floor_switch_state__6TLobbyFl },
    { 0, 0 },
    { qst_getargs_801F2B0C, op_set_control_override__6TLobbyFl },
    { qst_getargs_801F2B94, TLobby__sub_801ED50C },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { qst_getargs_801F2B0C, qst_op_shrink },
    { qst_getargs_801F2B0C, qst_op_unshrink },
    { qst_getargs_801F2B0C, TLobby__sub_801ED0CC },
    { qst_getargs_801F2B0C, TLobby__sub_801ECFDC },
    { qst_getargs_801F2B0C, TLobby__sub_801ECF2C },
    { qst_getargs_801F2B54, TLobby::apply_global_805D3614 },
    { qst_getargs_801F2B54, TLobby__sub_801EC8B4 },
    { 0, 0 },
    { qst_getargs_801F2B94, TLobby__sub_801ECFBC },
    { qst_getargs_801F29CC, copy_player_visual_record_by_index__6TLobbyFv },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { qst_getargs_801F2B0C, TLobby__sub_801ECEA8 },
    { qst_getargs_801F2B0C, calc_ratio_value__6TLobbyFv },
    { qst_getargs_801F2B0C, op_fdiv_to_global_b__6TLobbyFv },
    { qst_getargs_801F2B0C, op_fdiv_to_global_a__6TLobbyFv },
    { qst_getargs_801F2B0C, calc_stat_ratio_3540__6TLobbyFv },
    { qst_getargs_801F2B0C, calc_stat_ratio_3544__6TLobbyFv },
    { qst_getargs_801F2B0C, TLobby__sub_801ECB90 },
    { qst_getargs_801F2B0C, TLobby__sub_801ECB0C },
    { qst_getargs_801F2B0C, TLobby__sub_801ECA88 },
    { qst_getargs_801F2B0C, TLobby__sub_801ECA3C },
    { qst_getargs_801F2B54, TLobby__sub_801ECA1C },
    { qst_getargs_801F2B94, forward_801F36D8__6TLobbyFv },
    { qst_getargs_801F2B94, TLobby__sub_801EC874 },
    { qst_getargs_801F2B94, TLobby__sub_801EC854 },
    { qst_getargs_801F2B94, TLobby__sub_801EC834 },
    { qst_getargs_801F2B54, TLobby::dispatch_first_player },
    { qst_getargs_801F2B94, TLobby__sub_801EC7C4 },
    { qst_getargs_801F2B94, TLobby__sub_801EC7A0 },
    { qst_getargs_801F2B0C, forward_item_to_player__6TLobbyFUc },
    { qst_getargs_801F2B54, TLobby::handle_player_event_from_data },
    { qst_getargs_801F2B94, update_main_phase__6TLobbyFii },
    { qst_getargs_801F2B54, TLobby__sub_801EC694 },
    { qst_getargs_801F2B54, TLobby::load_setting_17_from_table },
    { qst_getargs_801F2B54, TLobby__sub_801EC64C },
    { qst_getargs_801F2B94, TLobby::clear_reg_block },
    { qst_getargs_801F2B54, TLobby::add_to_free_slot },
    { qst_getargs_801F2B54, TLobby::give_pending_item_to_local_player },
    { qst_getargs_801F2B0C, write_mag_stats__6TLobbyFl },
    { qst_getargs_801F2B54, TLobby__sub_801EC43C },
    { qst_getargs_801F2B94, TLobby::init_state },
    { qst_getargs_801F2B94, TLobby::init_window },
    { qst_getargs_801F2B0C, TLobby__sub_801EC31C },
    { qst_getargs_801F2AB4, TLobby__sub_801EC248 },
    { qst_getargs_801F2AB4, TLobby__sub_801EC050 },
    { qst_getargs_801F2AB4, create_item_from_table__6TLobbyFUcUc },
    { qst_getargs_801F2B0C, TLobby__sub_801EBF04 },
    { qst_getargs_801F2B0C, init_menu_state__6TLobbyFi },
    { qst_getargs_801F2B94, enable_mine_trap__6TLobbyFv },
    { qst_getargs_801F2B94, TLobby__sub_801EBE6C },
    { qst_getargs_801F2B54, TLobby__sub_801EC9F8 },
    { qst_getargs_801F2B54, TLobby::copy_clamped_setting_to_slot },
    { qst_getargs_801F2B54, TLobby__sub_801EC984 },
    { qst_getargs_801F2B54, TLobby__sub_801EC954 },
    { qst_getargs_801F2B0C, store_boss_phase_flag__6TLobbyFl },
    { qst_getargs_801F2B54, TLobby__sub_801EBD40 },
    { qst_getargs_801F2B0C, TLobby__sub_801EBCF0 },
    { qst_getargs_801F2B0C, TLobby__sub_801EBCA0 },
    { qst_getargs_801F2B0C, apply_to_player_by_client_id_b__6TLobbyFl },
    { qst_getargs_801F2B0C, apply_to_player_by_client_id_a__6TLobbyFl },
    { qst_getargs_801F2AB4, store_player_state_flag__6TLobbyFll },
    { qst_getargs_801F2AB4, fill_player_team_flags__6TLobbyFll },
    { qst_getargs_801F2AB4, qst_op_try_spend_meseta__6TLobbyFll },
    { qst_getargs_801F2B0C, store_chr_select_value__6TLobbyFl },
    { qst_getargs_801F2B0C, TLobby__sub_801EB914 },
    { qst_getargs_801F2B0C, acquire_serial_access_for_slot__6TLobbyFUc },
    { qst_getargs_801F2AB4, TLobby__sub_801EB85C },
    { qst_getargs_801F2B0C, eval_op_add_ratio__6TLobbyFv },
    { qst_getargs_801F2B0C, store_player_name_by_client__6TLobbyFl },
    { qst_getargs_801F2B0C, TLobby__sub_801EB6B8 },
    { qst_getargs_801F2AB4, count_nearby_players__6TLobbyFUcUc },
    { qst_getargs_801F2B54, TLobby::write_state_s16_to_buffer },
    { qst_getargs_801F2B54, TLobby::write_state_s32_to_buffer },
    { qst_getargs_801F2AB4, copy_table_value__6TLobbyFUcUc },
    { qst_getargs_801F2AB4, TLobby__sub_801EB484 },
    { qst_getargs_801F2B94, TLobby__sub_801EB478 },
    { qst_getargs_801F2B94, TLobby__sub_801EB46C },
    { qst_getargs_801F2AB4, update_player_status__6TLobbyFll },
    { qst_getargs_801F2B54, TLobby__sub_801EB10C },
    { qst_getargs_801F2B0C, TLobby__sub_801EB0F8 },
    { qst_getargs_801F2B0C, TLobby__sub_801EB0A0 },
    { qst_getargs_801F2B0C, TLobby__sub_801EB048 },
    { qst_getargs_801F2B0C, TLobby__sub_801EADD8 },
    { qst_getargs_801F2B94, TLobby__sub_801EF24C },
    { qst_getargs_801F2B54, TLobby::dispatch_state_value },
    { qst_getargs_801F29CC, TLobby__sub_801EAC48 },
    { qst_getargs_801F29CC, TLobby__sub_801EABEC },
    { qst_getargs_801F29CC, TLobby__sub_801EAB90 },
    { qst_getargs_801F29CC, broadcast_entry__6TLobbyFl },
    { qst_getargs_801F2AB4, load_chr_select_word__6TLobbyFUcUc },
    { qst_getargs_801F2AB4, copy_script_register_from_buffer__6TLobbyFUcUc },
    { qst_getargs_801F2AB4, (void (*)())quest_vm_shift_left_register },
    { qst_getargs_801F2AB4, (void (*)())quest_vm_shift_right_arithmetic_register },
    { qst_getargs_801F2AB4, roll_random_in_range__6TLobbyFl },
    { qst_getargs_801F2B94, TLobby__sub_801EA8E8 },
    { qst_getargs_801F2B0C, TLobby__sub_801EA84C },
    { qst_getargs_801F2B94, TLobby::draw_or_send },
    { qst_getargs_801F2B54, TLobby::load_setting_13_from_table },
    { qst_getargs_801F2B0C, TLobby__sub_801EA7A0 },
    { qst_getargs_801F2B94, TLobby::apply_split_screen },
    { qst_getargs_801F2B94, TLobby::handle_split_screen },
    { qst_getargs_801F2B0C, TLobby__sub_801EA690 },
    { qst_getargs_801F2B94, TLobby::get_or_create_handle },
    { qst_getargs_801F2B0C, TLobby__sub_801EA5FC },
    { qst_getargs_801F2B0C, create_chat_sensor__6TLobbyFUc },
    { qst_getargs_801F2B0C, spawn_symbolchat_colli__6TLobbyFUc },
    { qst_getargs_801F2AB4, (void (*)())quest_set_player_shrink_size },
    { qst_getargs_801F2B54, TLobby__sub_801EA274 },
    { qst_getargs_801F2B0C, op_set_reg_from_flag__6TLobbyFl },
    { qst_getargs_801F2B0C, TLobby__sub_801EA1B4 },
    { qst_getargs_801F2B0C, store_card_stats__6TLobbyFUc },
    { qst_getargs_801F2B0C, TLobby__sub_801EA094 },
    { qst_getargs_801F2B0C, set_handler__6TLobbyFi },
    { qst_getargs_801F2B0C, set_unit_name_flag__6TLobbyFl },
    { qst_getargs_801F2B0C, set_unit_list_flag__6TLobbyFl },
    { qst_getargs_801F2B54, TLobby::load_reg_from_signed_byte },
    { qst_getargs_801F2B54, quest_vm_load_s16_indirect },
    { qst_getargs_801F2B54, quest_vm_load_s32_indirect },
    { qst_getargs_801F2B54, quest_vm_store_s8_indirect },
    { qst_getargs_801F2B54, quest_vm_store_s16_indirect },
    { qst_getargs_801F2B54, quest_vm_store_s32_indirect },
    { qst_getargs_801F2B0C, TLobby__sub_801E9DEC },
    { qst_getargs_801F2B0C, TLobby__sub_801E9D94 },
    { qst_getargs_801F2B94, TLobby::update_split_screen },
    { qst_getargs_801F2B94, TLobby::update_by_screen_mode },
    { qst_getargs_801F2B94, TLobby::cache_player_field },
    { qst_getargs_801F2B0C, TLobby__sub_801E9CD0 },
    { qst_getargs_801F2A14, set_story_select__6TLobbyFl },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { qst_getargs_801F2B54, TLobby__sub_801E9C40 },
    { qst_getargs_801F2B0C, set_lobby_mode_slot__6TLobbyFl },
    { qst_getargs_801F2B94, TLobby::update_and_apply_alloc },
    { qst_getargs_801F2B0C, TLobby__sub_801E9AF8 },
    { qst_getargs_801F2B0C, create_challenge_4p_results__6TLobbyFUc },
    { qst_getargs_801F2B0C, TLobby__sub_801E9A50 },
    { qst_getargs_801F2B94, TLobby::create_hunter_guild_seq },
    { qst_getargs_801F2AB4, TLobby__sub_801E99A0 },
    { qst_getargs_801F2B0C, end_camera_pan_for_slot__6TLobbyFl },
    { qst_getargs_801F2AB4, TLobby__sub_801E989C },
    { qst_getargs_801F2AB4, TLobby__sub_801E9864 },
    { qst_getargs_801F2B0C, TLobby__sub_801E9834 },
    { qst_getargs_801F2B0C, TLobby__sub_801E9804 },
    { qst_getargs_801F2B0C, TLobby__sub_801E97D4 },
    { qst_getargs_801F2B0C, start_slot_mode_2__6TLobbyFl },
    { qst_getargs_801F2B0C, op_window_ctrl_mode3__6TLobbyFl },
    { qst_getargs_801F2B0C, op_window_ctrl_mode4__6TLobbyFl },
    { qst_getargs_801F2B0C, dispatch_slot_event_5__6TLobbyFl },
    { qst_getargs_801F2B0C, dispatch_slot_event_6__6TLobbyFl },
    { qst_getargs_801F2B0C, TLobby__sub_801E96B4 },
    { qst_getargs_801F2B0C, TLobby__sub_801E9684 },
    { qst_getargs_801F2B0C, TLobby__sub_801E9654 },
    { qst_getargs_801F2B54, TLobby::set_fixed_camera_from_table },
    { qst_getargs_801F2B54, TLobby__sub_801E9400 },
    { qst_getargs_801F2B94, TLobby__sub_801E93E0 },
    { qst_getargs_801F2B94, find_player_143__6TLobbyFv },
    { qst_getargs_801F2B94, TLobby__sub_801E95B0 },
    { qst_getargs_801F2B54, TLobby::calc_path_point },
    { qst_getargs_801F2910, set_partner_dialogue_for_slot__6TLobbyFUcUcPv },
    { qst_getargs_801F2AB4, load_reg_table_f20__6TLobbyFUcUc },
    { qst_getargs_801F2AB4, load_reg_table_f28__6TLobbyFUcUc },
    { qst_getargs_801F2B94, TLobby::free_child },
    { qst_getargs_801F2B94, TLobby::clear_flag },
    { qst_getargs_801F2B94, TLobby__sub_801E9084 },
    { qst_getargs_801F2B94, TLobby__sub_801E905C },
    { qst_getargs_801F2B0C, start_slot_mode_10__6TLobbyFl },
    { qst_getargs_801F2B0C, op_window_ctrl_mode_b__6TLobbyFl },
    { qst_getargs_801F2B0C, op_close_windows_by_flags__6TLobbyFl },
    { qst_getargs_801F2AB4, set_quest_object_position__6TLobbyFll },
    { qst_getargs_801F2AB4, spawn_quest_col__6TLobbyFUcUc },
    { qst_getargs_801F2AB4, spawn_object_from_script_args5__6TLobbyFUcUc },
    { qst_getargs_801F2AB4, TLobby__sub_801E8D44 },
    { qst_getargs_801F2AB4, spawn_object_from_script_args6__6TLobbyFUcUc },
    { qst_getargs_801F2AB4, spawn_quest_col_alock__6TLobbyFUcUc },
    { qst_getargs_801F2AB4, spawn_object_from_registers__6TLobbyFUcUc },
    { qst_getargs_801F2AB4, update_client_slot_from_player__6TLobbyFll },
    { qst_getargs_801F2B54, TLobby::decompress_indexed_resource },
    { qst_getargs_801F2B94, TLobby__sub_801EB5A8 },
    { qst_getargs_801F2B94, TLobby__sub_801EB588 },
    { qst_getargs_801F2B94, forward_802272B4__6TLobbyFv },
    { qst_getargs_801F2B54, TLobby::compute_path_point },
    { qst_getargs_801F2B54, TLobby::spawn_flagged_particle_emitter },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { qst_getargs_801F2AB4, op_store_float_bits__6TLobbyFUcUc },
    { qst_getargs_801F2AB4, op_move_reg_reg__6TLobbyFll },
    { qst_getargs_801F2AB4, (void (*)())qst_op_let },
    { qst_getargs_801F2A5C, (void (*)())qst_op_leti },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { qst_getargs_801F2AB4, add_reg_to_reg_float__6TLobbyFUcUc },
    { qst_getargs_801F2A5C, add_imm_float_to_reg__6TLobbyFUcl },
    { qst_getargs_801F2AB4, sub_register_float_reg__6TLobbyFUcUc },
    { qst_getargs_801F2A5C, sub_register_float_imm__6TLobbyFUcl },
    { qst_getargs_801F2AB4, mul_reg_by_reg_float__6TLobbyFUcUc },
    { qst_getargs_801F2A5C, mul_reg_by_immediate_float__6TLobbyFUcl },
    { qst_getargs_801F2AB4, op_fdiv_reg_reg__6TLobbyFUcUc },
    { qst_getargs_801F2A5C, op_fdiv_reg__6TLobbyFUcl },
    { qst_getargs_801F2B54, TLobby::update_card_window_slot },
    { qst_getargs_801F2AB4, count_player_items_to_global__6TLobbyFll },
    { qst_getargs_801F2B94, TLobby::free_static },
    { qst_getargs_801F2B94, TLobby::clear_flag3 },
    { qst_getargs_801F2B54, TLobby__sub_801E8440 },
    { qst_getargs_801F2B54, TLobby::op_player_cmd_b },
    { qst_getargs_801F2B54, TLobby::op_player_cmd_a },
    { qst_getargs_801F2B54, TLobby__sub_801E83BC },
    { qst_getargs_801F2B54, TLobby__sub_801E8390 },
    { qst_getargs_801F2B54, TLobby__sub_801E8344 },
    { qst_getargs_801F2B54, TLobby__sub_801E82F8 },
    { qst_getargs_801F2B54, TLobby::stop_force_for_client },
    { qst_getargs_801F2B54, TLobby::init_local_pad_if_client_exists },
    { qst_getargs_801F2B0C, TLobby__sub_801E7E50 },
    { qst_getargs_801F2B0C, set_handler_entry__6TLobbyFi },
    { qst_getargs_801F2B0C, TLobby__sub_801E7D7C },
    { qst_getargs_801F2B54, TLobby__sub_801E7CFC },
    { qst_getargs_801F2B54, TLobby::store_player_section_id },
    { qst_getargs_801F2B54, TLobby__sub_801E7B64 },
    { qst_getargs_801F2B54, TLobby__sub_801E7AC8 },
    { qst_getargs_801F2AB4, TLobby__sub_801E79BC },
    { qst_getargs_801F2B54, TLobby__sub_801E7934 },
    { qst_getargs_801F2B54, TLobby::set_card_window_entry },
    { qst_getargs_801F2AB4, TLobby__sub_801E7810 },
    { qst_getargs_801F2B0C, fill_player_present_flags__6TLobbyFUc },
    { qst_getargs_801F2B54, send_data__6TLobbyFv },
    { qst_getargs_801F2B54, TLobby::create_help_window },
    { qst_getargs_801F2B0C, op_play_sound_from_reg__6TLobbyFl },
    { qst_getargs_801F2B0C, close_active_window__6TLobbyFi },
    { qst_getargs_801F2B54, TLobby::spawn_lobby_object },
    { qst_getargs_801F2B54, TLobby::run_vm_helper_with_regs },
    { qst_getargs_801F2B54, TLobby__sub_801E7CCC },
    { qst_getargs_801F2B54, TLobby::open_quest_message_window },
    { qst_getargs_801F2B54, TLobby__sub_801E7408 },
    { qst_getargs_801F2B0C, dispatch_story_select_by_op__6TLobbyFl },
    { qst_getargs_801F2B0C, TLobby__sub_801E72B4 },
    { qst_getargs_801F2B54, TLobby::open_scroll_message_window },
    { qst_getargs_801F2B54, init_graph__6TLobbyFPv },
    { qst_getargs_801F2B54, destroy__6TLobbyFPv },
    { qst_getargs_801F2B54, get_selected_slot__6TLobbyFPv },
    { qst_getargs_801F2B54, TLobby__sub_801E819C },
    { qst_getargs_801F2B54, TLobby::notify_player_battle },
    { qst_getargs_801F2B54, TLobby::copy_item_data_to_quest_buffer },
    { qst_getargs_801F2B54, TLobby::wrap_pending_item },
    { qst_getargs_801F2B54, TLobby::wrap_item_as_present },
    { qst_getargs_801F2B54, quest_vm_get_language },
    { qst_getargs_801F2B54, TLobby__sub_801E6F1C },
    { qst_getargs_801F2B54, TLobby::create_chat_sensor_capture },
    { qst_getargs_801F2B54, quest_check_chat_keyword },
    { qst_getargs_801F2B54, TLobby__sub_801E6E20 },
    { qst_getargs_801F2B54, TLobby::copy_slot_entity_data },
    { qst_getargs_801F2B54, TLobby::create_singleton },
    { qst_getargs_801F2B54, TLobby::check_item_usable_by_player },
    { qst_getargs_801F2B54, TLobby__sub_801E6CA4 },
    { qst_getargs_801F2B54, TLobby::op_sin },
    { qst_getargs_801F2B54, TLobby::op_cos },
    { qst_getargs_801F2B54, TLobby::store_tan_table_entry },
    { qst_getargs_801F2B54, TLobby__sub_801E85B4 },
    { qst_getargs_801F2B0C, TLobby__sub_801E6C4C },
    { qst_getargs_801F2B0C, TLobby__sub_801F07D8 },
    { qst_getargs_801F2B0C, spawn_particle_at_entity__6TLobbyFUc },
    { qst_getargs_801F2B54, TLobby::probe_character_save },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
};
