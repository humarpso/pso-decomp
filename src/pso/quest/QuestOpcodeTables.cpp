#include "pso/quest/QuestOpcodeTables.h"

extern "C" {
void TLobby__sub_801E6C4C();
void TLobby__sub_801E6CA4();
void check_item_usable_by_player__6TLobbyFv();
void create_singleton__6TLobbyFv();
void copy_slot_entity_data__6TLobbyFv();
void TLobby__sub_801E6E20();
void TLobby__sub_801E6E88();
void create_chat_sensor_capture__6TLobbyFv();
void TLobby__sub_801E6F1C();
void run_vm_helper_with_regs__6TLobbyFv();
void qst_op_arg_pushs();
void push_table_ref_by_index__6TLobbyFUs();
void push_reg_ref_by_index__6TLobbyFUc();
void quest_vm_push_u16_argument();
void quest_vm_push_u8_argument();
void qst_op_arg_pushl();
void op_push_reg_to_stack__6TLobbyFUc();
void load_op_arg_window__6TLobbyFi();
void request_1c38_1_7__6TLobbyFv();
void reset_and_set_mode__6TLobbyFv();
void open_scroll_message_window__6TLobbyFv();
void TLobby__sub_801E72B4();
void dispatch_story_select_by_op__6TLobbyFi();
void TLobby__sub_801E7408();
void open_quest_message_window__6TLobbyFv();
void spawn_lobby_object__6TLobbyFv();
void close_active_window__6TLobbyFi();
void op_play_sound_from_reg__6TLobbyFi();
void create_help_window__6TLobbyFv();
void send_data__6TLobbyFv();
void fill_player_present_flags__6TLobbyFUc();
void TLobby__sub_801E7810();
void set_card_window_entry__6TLobbyFv();
void TLobby__sub_801E7934();
void TLobby__sub_801E79BC();
void TLobby__sub_801E7AC8();
void TLobby__sub_801E7B64();
void store_player_section_id__6TLobbyFv();
void TLobby__sub_801E7CCC();
void TLobby__sub_801E7CFC();
void TLobby__sub_801E7D7C();
void set_handler_entry__6TLobbyFi();
void TLobby__sub_801E7E50();
void quest_vm_get_language();
void wrap_item_as_present__6TLobbyFv();
void wrap_pending_item__6TLobbyFv();
void copy_item_data_to_quest_buffer__6TLobbyFv();
void notify_player_battle__6TLobbyFv();
void TLobby__sub_801E819C();
void get_selected_slot__6TLobbyFPv();
void destroy__6TLobbyFPv();
void init_graph__6TLobbyFPv();
void init_local_pad_if_client_exists__6TLobbyFv();
void stop_force_for_client__6TLobbyFv();
void TLobby__sub_801E82F8();
void TLobby__sub_801E8344();
void TLobby__sub_801E8390();
void TLobby__sub_801E83BC();
void op_player_cmd_a__6TLobbyFv();
void op_player_cmd_b__6TLobbyFv();
void TLobby__sub_801E8440();
void clear_flag3__6TLobbyFv();
void free_static__6TLobbyFv();
void count_player_items_to_global__6TLobbyFii();
void update_card_window_slot__6TLobbyFv();
void TLobby__sub_801E85B4();
void store_tan_table_entry__6TLobbyFv();
void op_cos__6TLobbyFv();
void op_sin__6TLobbyFv();
void op_fdiv_reg__6TLobbyFUci();
void op_fdiv_reg_reg__6TLobbyFUcUc();
void mul_reg_by_immediate_float__6TLobbyFUci();
void mul_reg_by_reg_float__6TLobbyFUcUc();
void sub_register_float_imm__6TLobbyFUci();
void sub_register_float_reg__6TLobbyFUcUc();
void add_imm_float_to_reg__6TLobbyFUci();
void add_reg_to_reg_float__6TLobbyFUcUc();
void op_move_reg_reg__6TLobbyFii();
void op_store_float_bits__6TLobbyFUcUc();
void spawn_object_from_registers__6TLobbyFUcUc();
void spawn_quest_col_alock__6TLobbyFUcUc();
void spawn_object_from_script_args6__6TLobbyFUcUc();
void TLobby__sub_801E8D44();
void spawn_object_from_script_args5__6TLobbyFUcUc();
void spawn_quest_col__6TLobbyFUcUc();
void TLobby__sub_801E905C();
void TLobby__sub_801E9084();
void clear_flag__6TLobbyFv();
void free_child__6TLobbyFv();
void set_partner_dialogue_for_slot__6TLobbyFUcUcPv();
void compute_path_point__6TLobbyFv();
void calc_path_point__6TLobbyFv();
void load_reg_table_f28__6TLobbyFUcUc();
void load_reg_table_f20__6TLobbyFUcUc();
void TLobby__sub_801E93E0();
void TLobby__sub_801E9400();
void set_fixed_camera_from_table__6TLobbyFv();
void set_quest_object_position__6TLobbyFii();
void op_close_windows_by_flags__6TLobbyFi();
void TLobby__sub_801E95B0();
void find_player_143__6TLobbyFv();
void op_window_ctrl_mode_b__6TLobbyFi();
void start_slot_mode_10__6TLobbyFi();
void TLobby__sub_801E9654();
void TLobby__sub_801E9684();
void TLobby__sub_801E96B4();
void dispatch_slot_event_6__6TLobbyFi();
void dispatch_slot_event_5__6TLobbyFi();
void op_window_ctrl_mode4__6TLobbyFi();
void op_window_ctrl_mode3__6TLobbyFi();
void start_slot_mode_2__6TLobbyFi();
void TLobby__sub_801E97D4();
void TLobby__sub_801E9804();
void TLobby__sub_801E9834();
void TLobby__sub_801E9864();
void TLobby__sub_801E989C();
void end_camera_pan_for_slot__6TLobbyFi();
void TLobby__sub_801E99A0();
void create_hunter_guild_seq__6TLobbyFv();
void TLobby__sub_801E9A50();
void create_challenge_4p_results__6TLobbyFUc();
void TLobby__sub_801E9AF8();
void update_and_apply_alloc__6TLobbyFv();
void set_lobby_mode_slot__6TLobbyFi();
void TLobby__sub_801E9C40();
void set_story_select__6TLobbyFi();
void TLobby__sub_801E9CD0();
void cache_player_field__6TLobbyFv();
void update_by_screen_mode__6TLobbyFv();
void update_split_screen__6TLobbyFv();
void TLobby__sub_801E9D94();
void TLobby__sub_801E9DEC();
void quest_vm_store_s32_indirect();
void quest_vm_store_s16_indirect();
void quest_vm_store_s8_indirect();
void quest_vm_load_s32_indirect();
void quest_vm_load_s16_indirect();
void load_reg_from_signed_byte__6TLobbyFv();
void set_unit_list_flag__6TLobbyFi();
void set_unit_name_flag__6TLobbyFi();
void set_handler__6TLobbyFi();
void TLobby__sub_801EA094();
void store_card_stats__6TLobbyFUc();
void TLobby__sub_801EA1B4();
void op_set_reg_from_flag__6TLobbyFi();
void TLobby__sub_801EA274();
void quest_set_player_shrink_size();
void spawn_symbolchat_colli__6TLobbyFUc();
void create_chat_sensor__6TLobbyFUc();
void TLobby__sub_801EA5FC();
void get_or_create_handle__6TLobbyFv();
void TLobby__sub_801EA690();
void handle_split_screen__6TLobbyFv();
void apply_split_screen__6TLobbyFv();
void TLobby__sub_801EA7A0();
void load_setting_13_from_table__6TLobbyFv();
void draw_or_send__6TLobbyFv();
void TLobby__sub_801EA84C();
void TLobby__sub_801EA8E8();
void roll_random_in_range__6TLobbyFii();
void quest_vm_shift_right_arithmetic_register();
void quest_vm_shift_left_register();
void copy_script_register_from_buffer__6TLobbyFUcUc();
void load_chr_select_word__6TLobbyFUcUc();
void broadcast_entry__6TLobbyFi();
void TLobby__sub_801EAB90();
void TLobby__sub_801EABEC();
void TLobby__sub_801EAC48();
void dispatch_state_value__6TLobbyFv();
void spawn_chat_sensor__6TLobbyFv();
void TLobby__sub_801EADD8();
void TLobby__sub_801EB048();
void TLobby__sub_801EB0A0();
void TLobby__sub_801EB0F8();
void TLobby__sub_801EB10C();
void update_player_status__6TLobbyFii();
void TLobby__sub_801EB46C();
void TLobby__sub_801EB478();
void TLobby__sub_801EB484();
void copy_table_value__6TLobbyFUcUc();
void write_state_s32_to_buffer__6TLobbyFv();
void forward_802272B4__6TLobbyFPv();
void TLobby__sub_801EB588();
void TLobby__sub_801EB5A8();
void decompress_indexed_resource__6TLobbyFv();
void update_client_slot_from_player__6TLobbyFii();
void write_state_s16_to_buffer__6TLobbyFv();
void TLobby__sub_801EB6B8();
void store_player_name_by_client__6TLobbyFi();
void eval_op_add_ratio__6TLobbyFi();
void TLobby__sub_801EB85C();
void acquire_serial_access_for_slot__6TLobbyFUc();
void TLobby__sub_801EB914();
void store_chr_select_value__6TLobbyFi();
void qst_op_try_spend_meseta__6TLobbyFii();
void fill_player_team_flags__6TLobbyFii();
void store_player_state_flag__6TLobbyFii();
void apply_to_player_by_client_id_a__6TLobbyFi();
void apply_to_player_by_client_id_b__6TLobbyFi();
void TLobby__sub_801EBCA0();
void TLobby__sub_801EBCF0();
void TLobby__sub_801EBD40();
void store_boss_phase_flag__6TLobbyFi();
void TLobby__sub_801EBE6C();
void enable_mine_trap__6TLobbyFv();
void init_menu_state__6TLobbyFi();
void TLobby__sub_801EBF04();
void create_item_from_table__6TLobbyFUcUc();
void TLobby__sub_801EC050();
void count_nearby_players__6TLobbyFUcUc();
void TLobby__sub_801EC248();
void TLobby__sub_801EC31C();
void init_window__6TLobbyFv();
void init_state__6TLobbyFv();
void TLobby__sub_801EC43C();
void write_mag_stats__6TLobbyFi();
void give_pending_item_to_local_player__6TLobbyFv();
void add_to_free_slot__6TLobbyFv();
void clear_reg_block__6TLobbyFv();
void TLobby__sub_801EC64C();
void load_setting_17_from_table__6TLobbyFv();
void TLobby__sub_801EC694();
void update_main_phase__6TLobbyFv();
void handle_player_event_from_data__6TLobbyFv();
void forward_item_to_player__6TLobbyFUc();
void TLobby__sub_801EC7A0();
void TLobby__sub_801EC7C4();
void dispatch_first_player__6TLobbyFv();
void TLobby__sub_801EC834();
void TLobby__sub_801EC854();
void TLobby__sub_801EC874();
void forward_801F36D8__6TLobbyFPv();
void TLobby__sub_801EC8B4();
void apply_global_805D3614__6TLobbyFv();
void TLobby__sub_801EC90C();
void TLobby__sub_801EC93C();
void TLobby__sub_801EC954();
void TLobby__sub_801EC984();
void copy_clamped_setting_to_slot__6TLobbyFv();
void TLobby__sub_801EC9F8();
void TLobby__sub_801ECA1C();
void TLobby__sub_801ECA3C();
void TLobby__sub_801ECA88();
void TLobby__sub_801ECB0C();
void TLobby__sub_801ECB90();
void calc_stat_ratio_3544__6TLobbyFi();
void calc_stat_ratio_3540__6TLobbyFi();
void op_fdiv_to_global_a__6TLobbyFi();
void op_fdiv_to_global_b__6TLobbyFi();
void calc_ratio_value__6TLobbyFi();
void TLobby__sub_801ECEA8();
void TLobby__sub_801ECF2C();
void copy_player_visual_record_by_index__6TLobbyFi();
void TLobby__sub_801ECFBC();
void TLobby__sub_801ECFDC();
void TLobby__sub_801ED0CC();
void qst_op_unshrink();
void qst_op_shrink();
void store_floor_switch_state__6TLobbyFi();
void update_floor_switch_state__6TLobbyFi();
void send_6x05_switch_changed_off__6TLobbyFv();
void send_6x05_switch_changed_on__6TLobbyFv();
void reset_player_floor_by_slot__6TLobbyFi();
void store_player_kill_count__6TLobbyFii();
void warp_player_to_area__6TLobbyFii();
void TLobby__sub_801ED50C();
void op_set_control_override__6TLobbyFi();
void TLobby__sub_801ED55C();
void TLobby__sub_801ED5B4();
void TLobby__sub_801ED60C();
void dispatch_split_screen__6TLobbyFv();
void update_split_screen_camera__6TLobbyFv();
void TLobby__sub_801ED764();
void spawn_item_from_regs__6TLobbyFUc();
void apply_player_count__6TLobbyFv();
void TLobby__sub_801ED938();
void op_set_mode_byte__6TLobbyFv();
void update_table_byte8__6TLobbyFv();
void update_table_byte7__6TLobbyFv();
void TLobby__sub_801EDA70();
void TLobby__sub_801EDABC();
void TLobby__sub_801EDB04();
void TLobby__sub_801EDB4C();
void set_menu_byte_2__6TLobbyFv();
void set_menu_byte_1__6TLobbyFv();
void set_menu_byte_0__6TLobbyFv();
void op_clear_block__6TLobbyFv();
void TLobby__sub_801EDC98();
void send_field1c_if_player_exists__6TLobbyFii();
void send_font_state_if_player_exists__6TLobbyFii();
void qst_op_map_designate_ex();
void TLobby__sub_801EDDDC();
void TLobby__sub_801EDE00();
void store_player_position__6TLobbyFii();
void store_status__6TLobbyFi();
void qst_op_get_difficulty_level2__6TLobbyFi();
void create_quest_bgm_ctrl__6TLobbyFv();
void send_switch_changed_from_args__6TLobbyFi();
void quest_vm_get_designated_client_id();
void quest_vm_get_local_client_id();
void forward_801F36E4__6TLobbyFPv();
void qst_op_warp_on();
void send_packet_67_04__6TLobbyFv();
void TLobby__sub_801EE09C();
void check_item_equippable_by_room__6TLobbyFUcUc();
void handle_active_battle__6TLobbyFv();
void sync_battle_ctrl_4p__6TLobbyFv();
void reset_battle_camera__6TLobbyFv();
void set_camera_from_table__6TLobbyFUc();
void send_6x77_sync_quest_register();
void TLobby__sub_801EE374();
void TLobby__sub_801EE3C0();
void update_local_player__6TLobbyFv();
void attach_battle_ctrl__6TLobbyFv();
void TLobby__sub_801EE48C();
void process_static_805D53A0__6TLobbyFv();
void TLobby__sub_801EE4D4();
void TLobby__sub_801EE4D8();
void notify_guild_offline__6TLobbyFUs();
void qst_op_get_difficulty_level_v1__6TLobbyFi();
void TLobby__sub_801EE54C();
void qst_op_clear_quest_board_handler();
void qst_op_set_quest_board_handler();
void set_table_entry__6TLobbyFi();
void qst_op_winset_time();
void qst_op_winend_time();
void create_alt_timer__6TLobbyFPv();
void open_door__6TLobbyFv();
void update_doors__6TLobbyFv();
void qst_op_map_designate();
void TLobby__sub_801EE77C();
void qst_op_item_check();
void qst_op_item_delete2();
void qst_op_item_delete();
void qst_op_item_create2();
void qst_op_item_create();
void qst_op_del_obj_param();
void notify_battle_ctrl_player__6TLobbyFv();
void qst_op_pl_add_meseta();
void qst_op_clr_qt_cancel();
void qst_op_clr_qt_success();
void qst_op_clr_qt_failure();
void qst_op_set_qt_cancel();
void qst_op_set_qt_success();
void qst_op_set_qt_failure();
void qst_op_clr_floor_handler();
void qst_op_set_floor_handler();
void qst_set_camera_offsets__6TLobbyFUc();
void TLobby__sub_801EF24C();
void clear_active_bit_from_data__6TLobbyFv();
void qst_op_set_mainwarp();
void qst_op_force_bgm__6TLobbyFv();
void qst_op_playbgm_epi();
void qst_op_switch_off();
void qst_op_switch_on();
void qst_op_npc_talk_kill();
void qst_op_npc_talk_pl();
void qst_op_p_talk_guild();
void qst_op_p_return_guild();
void forward_npc_player__6TLobbyFPv();
void cleanup_luker_and_quest_flag__6TLobbyFv();
void clear_quest_vm__6TLobbyFv();
void set_partner_remark_from_state__6TLobbyFv();
void qst_op_nop_A0_debug();
void qst_op_cine_disable();
void qst_op_cine_enable();
void qst_op_hud_show();
void qst_op_hud_hide();
void TLobby__sub_801EF748();
void TLobby__sub_801EF768();
void TLobby__sub_801EF788();
void TLobby__sub_801EF7A8();
void qst_op_set_obj_param();
void qst_op_col_npcinr();
void qst_op_col_npcin();
void qst_op_at_coords_talk();
void qst_op_at_coords_call();
void qst_op_gettime();
void qst_op_unhide_ene();
void qst_op_unhide_obj();
void qst_op_chk_ene_num();
void qst_op_if_zone_clear();
void qst_op_p_action_enable();
void qst_op_p_action_disable();
void qst_op_pos_pipe();
void qst_op_create_pipe();
void qst_op_p_setpos();
void qst_op_p_enablewarp();
void qst_op_p_disablewarp();
void qst_op_p_dead();
void qst_op_p_hpstat();
void qst_op_p_move();
void qst_op_p_look_at();
void spawn_particle_at_entity__6TLobbyFUc();
void probe_character_save__6TLobbyFv();
void qst_op_particle_id();
void TLobby__sub_801F07D8();
void spawn_stored_particle_emitter__6TLobbyFUc();
void spawn_flagged_particle_emitter__6TLobbyFv();
void qst_op_pl_walk();
void qst_op_p_look();
void qst_op_p_col();
void qst_op_p_noncol();
void qst_op_enable_movement1();
void qst_op_disable_movement1();
void qst_op_npc_talk();
void qst_op_npc_nont();
void qst_op_npc_kill();
void qst_op_cam_adj();
void qst_op_cam_pan();
void qst_op_game_lev_reset_nop_86();
void qst_op_game_lev_super_nop_85();
void qst_op_cam_zmout();
void qst_op_cam_zmin();
void qst_op_cam_quake();
void qst_op_npc_play();
void qst_op_npc_stop();
void qst_op_npc_crp_id();
void qst_op_npc_crp();
void quest_construct_selected_scripted_player();
void qst_op_npc_crptalk();
void qst_op_npc_crppk();
void qst_op_npc_crtpk();
void handle_spawn_npc_packet__6TLobbyFv();
void qst_op_npc_crt();
void qst_op_winend();
void qst_op_mesend();
void qst_op_add_msg();
void close_window__6TLobbyFv();
void quest_cmd_winend();
void qst_op_window_msg();
void qst_op_bgm();
void qst_op_se();
void qst_op_fadeout();
void qst_op_fadein();
void qst_op_list();
void qst_op_message();
void pop_stack_into_slots__6TLobbyFii();
void push_op_args_from_table__6TLobbyFii();
void set_slot__6TLobbyFi();
void qst_op_nop_42_stack_push();
void qst_op_switch_call();
void qst_op_switch_jmp();
void qst_op_jmpi_le();
void qst_op_jmp_le();
void qst_op_ujmpi_le();
void qst_op_ujmp_le();
void qst_op_jmpi_ge();
void qst_op_jmp_ge();
void qst_op_ujmpi_ge();
void qst_op_ujmp_ge();
void qst_op_jmpi_lt();
void qst_op_jmp_lt();
void qst_op_ujmpi_lt();
void qst_op_ujmp_lt();
void qst_op_jmpi_gt();
void qst_op_jmp_gt();
void qst_op_ujmpi_gt();
void qst_op_ujmp_gt();
void qst_op_jmpi_ne();
void qst_op_jmp_ne();
void qst_op_jmpi_eq();
void qst_op_jmp_eq();
void qst_op_jmp_off();
void qst_op_jmp_on();
void qst_op_call();
void quest_vm_modulo_unsigned_immediate();
void op_mod_reg__6TLobbyFii();
void qst_op_jmp();
void qst_op_xori();
void qst_op_xor();
void qst_op_ori();
void qst_op_or();
void qst_op_andi();
void qst_op_and();
void qst_op_divi();
void qst_op_div();
void qst_op_muli();
void qst_op_mul();
void qst_op_subi();
void qst_op_sub();
void qst_op_addi();
void qst_op_add();
void qst_op_gget();
void qst_op_glet();
void qst_op_grev();
void qst_op_gclear();
void qst_op_gset();
void qst_op_rev();
void qst_op_clear();
void qst_op_set();
void TLobby__sub_801F2570();
void quest_vm_get_register_address();
void quest_vm_assign_u16_immediate();
void qst_op_leta_letb();
void qst_op_leti();
void qst_op_let();
void qst_op_thread_stg();
void qst_op_thread();
void qst_op_sync();
void qst_op_exit();
void qst_op_ret();
void qst_op_nop();
void qst_getargs_801F26A8(s32 opcode);
void qst_getargs_801F2700(s32 opcode);
void qst_getargs_cstring(s32 opcode);
void qst_getargs_801F27A0(s32 opcode);
void qst_getargs_801F2828(s32 opcode);
void qst_getargs_801F28AC(s32 opcode);
void qst_getargs_801F2910(s32 opcode);
void dispatch_command__6TLobbyFi(s32 opcode);
void qst_getargs_801F29CC(s32 opcode);
void qst_getargs_801F2A14(s32 opcode);
void qst_getargs_801F2A5C(s32 opcode);
void qst_getargs_801F2AB4(s32 opcode);
void qst_getargs_801F2B0C(s32 opcode);
void qst_getargs_801F2B54(s32 opcode);
void qst_getargs_801F2B94(s32 opcode);

extern const char quest_bgm_clear_filename[];
extern const char quest_bgm_miniclear_filename[];

__declspec(section ".data") const char* qst_bgm_filename_table[2] = {
    quest_bgm_clear_filename, quest_bgm_miniclear_filename
};

QuestOpcodeEntry qst_opcode_table[0x300] = {
    { qst_getargs_801F2B94, qst_op_nop },
    { qst_getargs_801F2B94, qst_op_ret },
    { qst_getargs_801F2B94, qst_op_sync },
    { qst_getargs_801F2A14, qst_op_exit },
    { qst_getargs_801F29CC, qst_op_thread },
    { qst_getargs_801F2B94, reset_and_set_mode__6TLobbyFv },
    { qst_getargs_801F2B94, request_1c38_1_7__6TLobbyFv },
    { qst_getargs_801F29CC, load_op_arg_window__6TLobbyFi },
    { qst_getargs_801F2AB4, qst_op_let },
    { qst_getargs_801F2A5C, qst_op_leti },
    { qst_getargs_801F2AB4, qst_op_leta_letb },
    { dispatch_command__6TLobbyFi, quest_vm_assign_u16_immediate },
    { qst_getargs_801F2AB4, quest_vm_get_register_address },
    { dispatch_command__6TLobbyFi, TLobby__sub_801F2570 },
    { 0, 0 },
    { 0, 0 },
    { qst_getargs_801F2B0C, qst_op_set },
    { qst_getargs_801F2B0C, qst_op_clear },
    { qst_getargs_801F2B0C, qst_op_rev },
    { qst_getargs_801F2700, qst_op_gset },
    { qst_getargs_801F2700, qst_op_gclear },
    { qst_getargs_801F2700, qst_op_grev },
    { qst_getargs_801F26A8, qst_op_glet },
    { qst_getargs_801F26A8, qst_op_gget },
    { qst_getargs_801F2AB4, qst_op_add },
    { qst_getargs_801F2A5C, qst_op_addi },
    { qst_getargs_801F2AB4, qst_op_sub },
    { qst_getargs_801F2A5C, qst_op_subi },
    { qst_getargs_801F2AB4, qst_op_mul },
    { qst_getargs_801F2A5C, qst_op_muli },
    { qst_getargs_801F2AB4, qst_op_div },
    { qst_getargs_801F2A5C, qst_op_divi },
    { qst_getargs_801F2AB4, qst_op_and },
    { qst_getargs_801F2A5C, qst_op_andi },
    { qst_getargs_801F2AB4, qst_op_or },
    { qst_getargs_801F2A5C, qst_op_ori },
    { qst_getargs_801F2AB4, qst_op_xor },
    { qst_getargs_801F2A5C, qst_op_xori },
    { qst_getargs_801F2AB4, op_mod_reg__6TLobbyFii },
    { qst_getargs_801F2A5C, quest_vm_modulo_unsigned_immediate },
    { qst_getargs_801F29CC, qst_op_jmp },
    { qst_getargs_801F29CC, qst_op_call },
    { qst_getargs_801F2828, qst_op_jmp_on },
    { qst_getargs_801F2828, qst_op_jmp_off },
    { qst_getargs_801F2910, qst_op_jmp_eq },
    { qst_getargs_801F28AC, qst_op_jmpi_eq },
    { qst_getargs_801F2910, qst_op_jmp_ne },
    { qst_getargs_801F28AC, qst_op_jmpi_ne },
    { qst_getargs_801F2910, qst_op_ujmp_gt },
    { qst_getargs_801F28AC, qst_op_ujmpi_gt },
    { qst_getargs_801F2910, qst_op_jmp_gt },
    { qst_getargs_801F28AC, qst_op_jmpi_gt },
    { qst_getargs_801F2910, qst_op_ujmp_lt },
    { qst_getargs_801F28AC, qst_op_ujmpi_lt },
    { qst_getargs_801F2910, qst_op_jmp_lt },
    { qst_getargs_801F28AC, qst_op_jmpi_lt },
    { qst_getargs_801F2910, qst_op_ujmp_ge },
    { qst_getargs_801F28AC, qst_op_ujmpi_ge },
    { qst_getargs_801F2910, qst_op_jmp_ge },
    { qst_getargs_801F28AC, qst_op_jmpi_ge },
    { qst_getargs_801F2910, qst_op_ujmp_le },
    { qst_getargs_801F28AC, qst_op_ujmpi_le },
    { qst_getargs_801F2910, qst_op_jmp_le },
    { qst_getargs_801F28AC, qst_op_jmpi_le },
    { qst_getargs_801F27A0, qst_op_switch_jmp },
    { qst_getargs_801F27A0, qst_op_switch_call },
    { qst_getargs_801F2B0C, qst_op_nop_42_stack_push },
    { qst_getargs_801F2B0C, set_slot__6TLobbyFi },
    { qst_getargs_801F2A5C, push_op_args_from_table__6TLobbyFii },
    { qst_getargs_801F2A5C, pop_stack_into_slots__6TLobbyFii },
    { 0, 0 },
    { 0, 0 },
    { qst_getargs_801F2B0C, op_push_reg_to_stack__6TLobbyFUc },
    { qst_getargs_801F2A14, qst_op_arg_pushl },
    { qst_getargs_801F2B0C, quest_vm_push_u8_argument },
    { qst_getargs_801F29CC, quest_vm_push_u16_argument },
    { qst_getargs_801F2B0C, push_reg_ref_by_index__6TLobbyFUc },
    { qst_getargs_801F29CC, push_table_ref_by_index__6TLobbyFUs },
    { qst_getargs_cstring, qst_op_arg_pushs },
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
    { qst_getargs_801F2B0C, qst_op_gettime },
    { qst_getargs_801F2B94, qst_op_winend },
    { 0, 0 },
    { qst_getargs_801F2B54, qst_op_npc_crt },
    { qst_getargs_801F2B54, qst_op_npc_stop },
    { qst_getargs_801F2B54, qst_op_npc_play },
    { qst_getargs_801F2B54, qst_op_npc_kill },
    { qst_getargs_801F2B94, qst_op_npc_nont },
    { qst_getargs_801F2B94, qst_op_npc_talk },
    { qst_getargs_801F2B0C, qst_op_npc_crp },
    { 0, 0 },
    { qst_getargs_801F2B54, qst_op_create_pipe },
    { qst_getargs_801F2B54, qst_op_p_hpstat },
    { qst_getargs_801F2B54, qst_op_p_dead },
    { qst_getargs_801F2B94, qst_op_p_disablewarp },
    { qst_getargs_801F2B94, qst_op_p_enablewarp },
    { qst_getargs_801F2B0C, qst_op_p_move },
    { qst_getargs_801F2B54, qst_op_p_look },
    { 0, 0 },
    { qst_getargs_801F2B94, qst_op_p_action_disable },
    { qst_getargs_801F2B94, qst_op_p_action_enable },
    { qst_getargs_801F2B54, qst_op_disable_movement1 },
    { qst_getargs_801F2B54, qst_op_enable_movement1 },
    { qst_getargs_801F2B94, qst_op_p_noncol },
    { qst_getargs_801F2B94, qst_op_p_col },
    { qst_getargs_801F2B54, qst_op_p_setpos },
    { qst_getargs_801F2B94, qst_op_p_return_guild },
    { qst_getargs_801F2B54, qst_op_p_talk_guild },
    { qst_getargs_801F2B0C, qst_op_npc_talk_pl },
    { qst_getargs_801F2B54, qst_op_npc_talk_kill },
    { qst_getargs_801F2B54, qst_op_npc_crtpk },
    { qst_getargs_801F2B0C, qst_op_npc_crppk },
    { qst_getargs_801F2B0C, qst_op_npc_crptalk },
    { qst_getargs_801F2B54, qst_op_p_look_at },
    { qst_getargs_801F2B0C, qst_op_npc_crp_id },
    { qst_getargs_801F2B94, qst_op_cam_quake },
    { qst_getargs_801F2B94, qst_op_cam_adj },
    { qst_getargs_801F2B94, qst_op_cam_zmin },
    { qst_getargs_801F2B94, qst_op_cam_zmout },
    { qst_getargs_801F2B0C, qst_op_cam_pan },
    { qst_getargs_801F2B94, qst_op_game_lev_super_nop_85 },
    { qst_getargs_801F2B94, qst_op_game_lev_reset_nop_86 },
    { qst_getargs_801F2B0C, qst_op_pos_pipe },
    { qst_getargs_801F2AB4, qst_op_if_zone_clear },
    { qst_getargs_801F2B0C, qst_op_chk_ene_num },
    { qst_getargs_801F2B0C, qst_op_unhide_obj },
    { qst_getargs_801F2B0C, qst_op_unhide_ene },
    { qst_getargs_801F2B0C, qst_op_at_coords_call },
    { qst_getargs_801F2B0C, qst_op_at_coords_talk },
    { qst_getargs_801F2B0C, qst_op_col_npcin },
    { qst_getargs_801F2B0C, qst_op_col_npcinr },
    { qst_getargs_801F2B54, qst_op_switch_on },
    { qst_getargs_801F2B54, qst_op_switch_off },
    { qst_getargs_801F2B54, qst_op_playbgm_epi },
    { qst_getargs_801F2B54, qst_op_set_mainwarp },
    { qst_getargs_801F2AB4, qst_op_set_obj_param },
    { qst_getargs_801F2B54, qst_op_set_floor_handler },
    { qst_getargs_801F2B54, qst_op_clr_floor_handler },
    { qst_getargs_801F2B0C, TLobby__sub_801EF7A8 },
    { qst_getargs_801F2B94, qst_op_hud_hide },
    { qst_getargs_801F2B94, qst_op_hud_show },
    { qst_getargs_801F2B94, qst_op_cine_enable },
    { qst_getargs_801F2B94, qst_op_cine_disable },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { qst_getargs_801F2B54, qst_op_nop_A0_debug },
    { qst_getargs_801F29CC, qst_op_set_qt_failure },
    { qst_getargs_801F29CC, qst_op_set_qt_success },
    { qst_getargs_801F2B94, qst_op_clr_qt_failure },
    { qst_getargs_801F2B94, qst_op_clr_qt_success },
    { qst_getargs_801F29CC, qst_op_set_qt_cancel },
    { qst_getargs_801F2B94, qst_op_clr_qt_cancel },
    { 0, 0 },
    { qst_getargs_801F2B0C, qst_op_pl_walk },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { qst_getargs_801F2B54, qst_op_pl_add_meseta },
    { qst_getargs_801F29CC, qst_op_thread_stg },
    { qst_getargs_801F2B0C, qst_op_del_obj_param },
    { qst_getargs_801F2AB4, qst_op_item_create },
    { qst_getargs_801F2AB4, qst_op_item_create2 },
    { qst_getargs_801F2AB4, qst_op_item_delete },
    { qst_getargs_801F2AB4, qst_op_item_delete2 },
    { qst_getargs_801F2AB4, qst_op_item_check },
    { qst_getargs_801F2B54, TLobby__sub_801EE54C },
    { qst_getargs_801F2B0C, qst_op_get_difficulty_level_v1__6TLobbyFi },
    { qst_getargs_801F29CC, notify_guild_offline__6TLobbyFUs },
    { qst_getargs_801F2B94, TLobby__sub_801EE4D8 },
    { qst_getargs_cstring, TLobby__sub_801EE4D4 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { qst_getargs_801F2B0C, spawn_stored_particle_emitter__6TLobbyFUc },
    { qst_getargs_801F2B54, set_partner_remark_from_state__6TLobbyFv },
    { qst_getargs_801F2B94, TLobby__sub_801EF788 },
    { qst_getargs_801F2B94, TLobby__sub_801EF768 },
    { qst_getargs_801F2B0C, qst_op_map_designate },
    { qst_getargs_801F2B94, update_doors__6TLobbyFv },
    { qst_getargs_801F2B94, open_door__6TLobbyFv },
    { qst_getargs_801F2B94, create_alt_timer__6TLobbyFPv },
    { qst_getargs_801F2B94, qst_op_winend_time },
    { qst_getargs_801F2B0C, qst_op_winset_time },
    { qst_getargs_801F2B0C, set_table_entry__6TLobbyFi },
    { qst_getargs_801F2B54, qst_op_set_quest_board_handler },
    { qst_getargs_801F2B54, qst_op_clear_quest_board_handler },
    { qst_getargs_801F2B0C, qst_op_particle_id },
    { qst_getargs_801F2B0C, quest_construct_selected_scripted_player },
    { qst_getargs_801F2B94, forward_npc_player__6TLobbyFPv },
    { qst_getargs_801F2B94, TLobby__sub_801EF748 },
    { qst_getargs_801F2AB4, TLobby__sub_801EE77C },
    { qst_getargs_801F2B94, process_static_805D53A0__6TLobbyFv },
    { qst_getargs_801F2B94, TLobby__sub_801EE48C },
    { qst_getargs_801F2B94, attach_battle_ctrl__6TLobbyFv },
    { qst_getargs_801F2B94, update_local_player__6TLobbyFv },
    { qst_getargs_801F2B54, quest_cmd_winend },
    { qst_getargs_801F2B94, close_window__6TLobbyFv },
    { qst_getargs_801F2B54, TLobby__sub_801EE3C0 },
    { qst_getargs_801F2B54, send_6x77_sync_quest_register },
    { qst_getargs_801F2B94, sync_battle_ctrl_4p__6TLobbyFv },
    { qst_getargs_801F2B94, handle_active_battle__6TLobbyFv },
    { qst_getargs_801F2B94, clear_quest_vm__6TLobbyFv },
    { qst_getargs_801F2B94, cleanup_luker_and_quest_flag__6TLobbyFv },
    { qst_getargs_801F2B0C, check_item_equippable_by_room__6TLobbyFUcUc },
    { qst_getargs_801F2B54, handle_spawn_npc_packet__6TLobbyFv },
    { qst_getargs_801F2B94, TLobby__sub_801EE09C },
    { qst_getargs_801F2B54, clear_active_bit_from_data__6TLobbyFv },
    { qst_getargs_801F2B0C, qst_set_camera_offsets__6TLobbyFUc },
    { qst_getargs_801F2B54, send_packet_67_04__6TLobbyFv },
    { qst_getargs_801F2B94, qst_op_warp_on },
    { qst_getargs_801F2B94, forward_801F36E4__6TLobbyFPv },
    { qst_getargs_801F2B0C, quest_vm_get_local_client_id },
    { qst_getargs_801F2B0C, quest_vm_get_designated_client_id },
    { qst_getargs_801F2B54, TLobby__sub_801EE374 },
    { qst_getargs_801F2AB4, op_mod_reg__6TLobbyFii },
    { qst_getargs_801F2A5C, quest_vm_modulo_unsigned_immediate },
    { qst_getargs_801F2B54, qst_op_force_bgm__6TLobbyFv },
    { qst_getargs_801F2B0C, send_switch_changed_from_args__6TLobbyFi },
    { qst_getargs_801F2B94, create_quest_bgm_ctrl__6TLobbyFv },
    { qst_getargs_801F2B54, notify_battle_ctrl_player__6TLobbyFv },
    { qst_getargs_801F2B54, send_6x77_sync_quest_register },
    { 0, 0 },
    { qst_getargs_801F2B0C, set_camera_from_table__6TLobbyFUc },
    { qst_getargs_801F2B94, reset_battle_camera__6TLobbyFv },
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
    { qst_getargs_801F2B54, spawn_chat_sensor__6TLobbyFv },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { qst_getargs_801F2B0C, qst_op_get_difficulty_level2__6TLobbyFi },
    { qst_getargs_801F2B0C, store_status__6TLobbyFi },
    { qst_getargs_801F2AB4, store_player_position__6TLobbyFii },
    { qst_getargs_801F2B94, TLobby__sub_801EDE00 },
    { qst_getargs_801F2B94, TLobby__sub_801EDDDC },
    { qst_getargs_801F2B0C, qst_op_map_designate_ex },
    { qst_getargs_801F2B54, send_font_state_if_player_exists__6TLobbyFii },
    { qst_getargs_801F2B54, send_field1c_if_player_exists__6TLobbyFii },
    { qst_getargs_801F2B54, TLobby__sub_801EDC98 },
    { qst_getargs_801F2B94, op_clear_block__6TLobbyFv },
    { qst_getargs_801F2B54, set_menu_byte_0__6TLobbyFv },
    { qst_getargs_801F2B54, set_menu_byte_1__6TLobbyFv },
    { qst_getargs_801F2B54, set_menu_byte_2__6TLobbyFv },
    { qst_getargs_801F2B54, TLobby__sub_801EDB4C },
    { qst_getargs_801F2B54, TLobby__sub_801EDB04 },
    { qst_getargs_801F2B54, TLobby__sub_801EDABC },
    { qst_getargs_801F2B54, TLobby__sub_801EDA70 },
    { qst_getargs_801F2B54, update_table_byte7__6TLobbyFv },
    { qst_getargs_801F2B54, update_table_byte8__6TLobbyFv },
    { qst_getargs_801F2B54, op_set_mode_byte__6TLobbyFv },
    { qst_getargs_801F2B54, TLobby__sub_801ED938 },
    { qst_getargs_801F2B54, TLobby__sub_801EC93C },
    { qst_getargs_801F2B54, TLobby__sub_801EC90C },
    { 0, 0 },
    { qst_getargs_801F2B54, apply_player_count__6TLobbyFv },
    { qst_getargs_801F2B0C, spawn_item_from_regs__6TLobbyFUc },
    { qst_getargs_801F2B0C, TLobby__sub_801ED764 },
    { qst_getargs_801F2B54, update_split_screen_camera__6TLobbyFv },
    { qst_getargs_801F2B54, dispatch_split_screen__6TLobbyFv },
    { qst_getargs_801F2B0C, TLobby__sub_801ED60C },
    { qst_getargs_801F2B0C, TLobby__sub_801ED5B4 },
    { qst_getargs_801F2B0C, TLobby__sub_801ED55C },
    { qst_getargs_801F2AB4, warp_player_to_area__6TLobbyFii },
    { qst_getargs_801F2AB4, store_player_kill_count__6TLobbyFii },
    { qst_getargs_801F2B0C, reset_player_floor_by_slot__6TLobbyFi },
    { qst_getargs_801F2B54, send_6x05_switch_changed_on__6TLobbyFv },
    { qst_getargs_801F2B54, send_6x05_switch_changed_off__6TLobbyFv },
    { qst_getargs_801F2B0C, update_floor_switch_state__6TLobbyFi },
    { qst_getargs_801F2B0C, store_floor_switch_state__6TLobbyFi },
    { 0, 0 },
    { qst_getargs_801F2B0C, op_set_control_override__6TLobbyFi },
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
    { qst_getargs_801F2B54, apply_global_805D3614__6TLobbyFv },
    { qst_getargs_801F2B54, TLobby__sub_801EC8B4 },
    { 0, 0 },
    { qst_getargs_801F2B94, TLobby__sub_801ECFBC },
    { qst_getargs_801F29CC, copy_player_visual_record_by_index__6TLobbyFi },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { qst_getargs_801F2B0C, TLobby__sub_801ECEA8 },
    { qst_getargs_801F2B0C, calc_ratio_value__6TLobbyFi },
    { qst_getargs_801F2B0C, op_fdiv_to_global_b__6TLobbyFi },
    { qst_getargs_801F2B0C, op_fdiv_to_global_a__6TLobbyFi },
    { qst_getargs_801F2B0C, calc_stat_ratio_3540__6TLobbyFi },
    { qst_getargs_801F2B0C, calc_stat_ratio_3544__6TLobbyFi },
    { qst_getargs_801F2B0C, TLobby__sub_801ECB90 },
    { qst_getargs_801F2B0C, TLobby__sub_801ECB0C },
    { qst_getargs_801F2B0C, TLobby__sub_801ECA88 },
    { qst_getargs_801F2B0C, TLobby__sub_801ECA3C },
    { qst_getargs_801F2B54, TLobby__sub_801ECA1C },
    { qst_getargs_801F2B94, forward_801F36D8__6TLobbyFPv },
    { qst_getargs_801F2B94, TLobby__sub_801EC874 },
    { qst_getargs_801F2B94, TLobby__sub_801EC854 },
    { qst_getargs_801F2B94, TLobby__sub_801EC834 },
    { qst_getargs_801F2B54, dispatch_first_player__6TLobbyFv },
    { qst_getargs_801F2B94, TLobby__sub_801EC7C4 },
    { qst_getargs_801F2B94, TLobby__sub_801EC7A0 },
    { qst_getargs_801F2B0C, forward_item_to_player__6TLobbyFUc },
    { qst_getargs_801F2B54, handle_player_event_from_data__6TLobbyFv },
    { qst_getargs_801F2B94, update_main_phase__6TLobbyFv },
    { qst_getargs_801F2B54, TLobby__sub_801EC694 },
    { qst_getargs_801F2B54, load_setting_17_from_table__6TLobbyFv },
    { qst_getargs_801F2B54, TLobby__sub_801EC64C },
    { qst_getargs_801F2B94, clear_reg_block__6TLobbyFv },
    { qst_getargs_801F2B54, add_to_free_slot__6TLobbyFv },
    { qst_getargs_801F2B54, give_pending_item_to_local_player__6TLobbyFv },
    { qst_getargs_801F2B0C, write_mag_stats__6TLobbyFi },
    { qst_getargs_801F2B54, TLobby__sub_801EC43C },
    { qst_getargs_801F2B94, init_state__6TLobbyFv },
    { qst_getargs_801F2B94, init_window__6TLobbyFv },
    { qst_getargs_801F2B0C, TLobby__sub_801EC31C },
    { qst_getargs_801F2AB4, TLobby__sub_801EC248 },
    { qst_getargs_801F2AB4, TLobby__sub_801EC050 },
    { qst_getargs_801F2AB4, create_item_from_table__6TLobbyFUcUc },
    { qst_getargs_801F2B0C, TLobby__sub_801EBF04 },
    { qst_getargs_801F2B0C, init_menu_state__6TLobbyFi },
    { qst_getargs_801F2B94, enable_mine_trap__6TLobbyFv },
    { qst_getargs_801F2B94, TLobby__sub_801EBE6C },
    { qst_getargs_801F2B54, TLobby__sub_801EC9F8 },
    { qst_getargs_801F2B54, copy_clamped_setting_to_slot__6TLobbyFv },
    { qst_getargs_801F2B54, TLobby__sub_801EC984 },
    { qst_getargs_801F2B54, TLobby__sub_801EC954 },
    { qst_getargs_801F2B0C, store_boss_phase_flag__6TLobbyFi },
    { qst_getargs_801F2B54, TLobby__sub_801EBD40 },
    { qst_getargs_801F2B0C, TLobby__sub_801EBCF0 },
    { qst_getargs_801F2B0C, TLobby__sub_801EBCA0 },
    { qst_getargs_801F2B0C, apply_to_player_by_client_id_b__6TLobbyFi },
    { qst_getargs_801F2B0C, apply_to_player_by_client_id_a__6TLobbyFi },
    { qst_getargs_801F2AB4, store_player_state_flag__6TLobbyFii },
    { qst_getargs_801F2AB4, fill_player_team_flags__6TLobbyFii },
    { qst_getargs_801F2AB4, qst_op_try_spend_meseta__6TLobbyFii },
    { qst_getargs_801F2B0C, store_chr_select_value__6TLobbyFi },
    { qst_getargs_801F2B0C, TLobby__sub_801EB914 },
    { qst_getargs_801F2B0C, acquire_serial_access_for_slot__6TLobbyFUc },
    { qst_getargs_801F2AB4, TLobby__sub_801EB85C },
    { qst_getargs_801F2B0C, eval_op_add_ratio__6TLobbyFi },
    { qst_getargs_801F2B0C, store_player_name_by_client__6TLobbyFi },
    { qst_getargs_801F2B0C, TLobby__sub_801EB6B8 },
    { qst_getargs_801F2AB4, count_nearby_players__6TLobbyFUcUc },
    { qst_getargs_801F2B54, write_state_s16_to_buffer__6TLobbyFv },
    { qst_getargs_801F2B54, write_state_s32_to_buffer__6TLobbyFv },
    { qst_getargs_801F2AB4, copy_table_value__6TLobbyFUcUc },
    { qst_getargs_801F2AB4, TLobby__sub_801EB484 },
    { qst_getargs_801F2B94, TLobby__sub_801EB478 },
    { qst_getargs_801F2B94, TLobby__sub_801EB46C },
    { qst_getargs_801F2AB4, update_player_status__6TLobbyFii },
    { qst_getargs_801F2B54, TLobby__sub_801EB10C },
    { qst_getargs_801F2B0C, TLobby__sub_801EB0F8 },
    { qst_getargs_801F2B0C, TLobby__sub_801EB0A0 },
    { qst_getargs_801F2B0C, TLobby__sub_801EB048 },
    { qst_getargs_801F2B0C, TLobby__sub_801EADD8 },
    { qst_getargs_801F2B94, TLobby__sub_801EF24C },
    { qst_getargs_801F2B54, dispatch_state_value__6TLobbyFv },
    { qst_getargs_801F29CC, TLobby__sub_801EAC48 },
    { qst_getargs_801F29CC, TLobby__sub_801EABEC },
    { qst_getargs_801F29CC, TLobby__sub_801EAB90 },
    { qst_getargs_801F29CC, broadcast_entry__6TLobbyFi },
    { qst_getargs_801F2AB4, load_chr_select_word__6TLobbyFUcUc },
    { qst_getargs_801F2AB4, copy_script_register_from_buffer__6TLobbyFUcUc },
    { qst_getargs_801F2AB4, quest_vm_shift_left_register },
    { qst_getargs_801F2AB4, quest_vm_shift_right_arithmetic_register },
    { qst_getargs_801F2AB4, roll_random_in_range__6TLobbyFii },
    { qst_getargs_801F2B94, TLobby__sub_801EA8E8 },
    { qst_getargs_801F2B0C, TLobby__sub_801EA84C },
    { qst_getargs_801F2B94, draw_or_send__6TLobbyFv },
    { qst_getargs_801F2B54, load_setting_13_from_table__6TLobbyFv },
    { qst_getargs_801F2B0C, TLobby__sub_801EA7A0 },
    { qst_getargs_801F2B94, apply_split_screen__6TLobbyFv },
    { qst_getargs_801F2B94, handle_split_screen__6TLobbyFv },
    { qst_getargs_801F2B0C, TLobby__sub_801EA690 },
    { qst_getargs_801F2B94, get_or_create_handle__6TLobbyFv },
    { qst_getargs_801F2B0C, TLobby__sub_801EA5FC },
    { qst_getargs_801F2B0C, create_chat_sensor__6TLobbyFUc },
    { qst_getargs_801F2B0C, spawn_symbolchat_colli__6TLobbyFUc },
    { qst_getargs_801F2AB4, quest_set_player_shrink_size },
    { qst_getargs_801F2B54, TLobby__sub_801EA274 },
    { qst_getargs_801F2B0C, op_set_reg_from_flag__6TLobbyFi },
    { qst_getargs_801F2B0C, TLobby__sub_801EA1B4 },
    { qst_getargs_801F2B0C, store_card_stats__6TLobbyFUc },
    { qst_getargs_801F2B0C, TLobby__sub_801EA094 },
    { qst_getargs_801F2B0C, set_handler__6TLobbyFi },
    { qst_getargs_801F2B0C, set_unit_name_flag__6TLobbyFi },
    { qst_getargs_801F2B0C, set_unit_list_flag__6TLobbyFi },
    { qst_getargs_801F2B54, load_reg_from_signed_byte__6TLobbyFv },
    { qst_getargs_801F2B54, quest_vm_load_s16_indirect },
    { qst_getargs_801F2B54, quest_vm_load_s32_indirect },
    { qst_getargs_801F2B54, quest_vm_store_s8_indirect },
    { qst_getargs_801F2B54, quest_vm_store_s16_indirect },
    { qst_getargs_801F2B54, quest_vm_store_s32_indirect },
    { qst_getargs_801F2B0C, TLobby__sub_801E9DEC },
    { qst_getargs_801F2B0C, TLobby__sub_801E9D94 },
    { qst_getargs_801F2B94, update_split_screen__6TLobbyFv },
    { qst_getargs_801F2B94, update_by_screen_mode__6TLobbyFv },
    { qst_getargs_801F2B94, cache_player_field__6TLobbyFv },
    { qst_getargs_801F2B0C, TLobby__sub_801E9CD0 },
    { qst_getargs_801F2A14, set_story_select__6TLobbyFi },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { qst_getargs_801F2B54, TLobby__sub_801E9C40 },
    { qst_getargs_801F2B0C, set_lobby_mode_slot__6TLobbyFi },
    { qst_getargs_801F2B94, update_and_apply_alloc__6TLobbyFv },
    { qst_getargs_801F2B0C, TLobby__sub_801E9AF8 },
    { qst_getargs_801F2B0C, create_challenge_4p_results__6TLobbyFUc },
    { qst_getargs_801F2B0C, TLobby__sub_801E9A50 },
    { qst_getargs_801F2B94, create_hunter_guild_seq__6TLobbyFv },
    { qst_getargs_801F2AB4, TLobby__sub_801E99A0 },
    { qst_getargs_801F2B0C, end_camera_pan_for_slot__6TLobbyFi },
    { qst_getargs_801F2AB4, TLobby__sub_801E989C },
    { qst_getargs_801F2AB4, TLobby__sub_801E9864 },
    { qst_getargs_801F2B0C, TLobby__sub_801E9834 },
    { qst_getargs_801F2B0C, TLobby__sub_801E9804 },
    { qst_getargs_801F2B0C, TLobby__sub_801E97D4 },
    { qst_getargs_801F2B0C, start_slot_mode_2__6TLobbyFi },
    { qst_getargs_801F2B0C, op_window_ctrl_mode3__6TLobbyFi },
    { qst_getargs_801F2B0C, op_window_ctrl_mode4__6TLobbyFi },
    { qst_getargs_801F2B0C, dispatch_slot_event_5__6TLobbyFi },
    { qst_getargs_801F2B0C, dispatch_slot_event_6__6TLobbyFi },
    { qst_getargs_801F2B0C, TLobby__sub_801E96B4 },
    { qst_getargs_801F2B0C, TLobby__sub_801E9684 },
    { qst_getargs_801F2B0C, TLobby__sub_801E9654 },
    { qst_getargs_801F2B54, set_fixed_camera_from_table__6TLobbyFv },
    { qst_getargs_801F2B54, TLobby__sub_801E9400 },
    { qst_getargs_801F2B94, TLobby__sub_801E93E0 },
    { qst_getargs_801F2B94, find_player_143__6TLobbyFv },
    { qst_getargs_801F2B94, TLobby__sub_801E95B0 },
    { qst_getargs_801F2B54, calc_path_point__6TLobbyFv },
    { qst_getargs_801F2910, set_partner_dialogue_for_slot__6TLobbyFUcUcPv },
    { qst_getargs_801F2AB4, load_reg_table_f20__6TLobbyFUcUc },
    { qst_getargs_801F2AB4, load_reg_table_f28__6TLobbyFUcUc },
    { qst_getargs_801F2B94, free_child__6TLobbyFv },
    { qst_getargs_801F2B94, clear_flag__6TLobbyFv },
    { qst_getargs_801F2B94, TLobby__sub_801E9084 },
    { qst_getargs_801F2B94, TLobby__sub_801E905C },
    { qst_getargs_801F2B0C, start_slot_mode_10__6TLobbyFi },
    { qst_getargs_801F2B0C, op_window_ctrl_mode_b__6TLobbyFi },
    { qst_getargs_801F2B0C, op_close_windows_by_flags__6TLobbyFi },
    { qst_getargs_801F2AB4, set_quest_object_position__6TLobbyFii },
    { qst_getargs_801F2AB4, spawn_quest_col__6TLobbyFUcUc },
    { qst_getargs_801F2AB4, spawn_object_from_script_args5__6TLobbyFUcUc },
    { qst_getargs_801F2AB4, TLobby__sub_801E8D44 },
    { qst_getargs_801F2AB4, spawn_object_from_script_args6__6TLobbyFUcUc },
    { qst_getargs_801F2AB4, spawn_quest_col_alock__6TLobbyFUcUc },
    { qst_getargs_801F2AB4, spawn_object_from_registers__6TLobbyFUcUc },
    { qst_getargs_801F2AB4, update_client_slot_from_player__6TLobbyFii },
    { qst_getargs_801F2B54, decompress_indexed_resource__6TLobbyFv },
    { qst_getargs_801F2B94, TLobby__sub_801EB5A8 },
    { qst_getargs_801F2B94, TLobby__sub_801EB588 },
    { qst_getargs_801F2B94, forward_802272B4__6TLobbyFPv },
    { qst_getargs_801F2B54, compute_path_point__6TLobbyFv },
    { qst_getargs_801F2B54, spawn_flagged_particle_emitter__6TLobbyFv },
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
    { qst_getargs_801F2AB4, op_move_reg_reg__6TLobbyFii },
    { qst_getargs_801F2AB4, qst_op_let },
    { qst_getargs_801F2A5C, qst_op_leti },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { qst_getargs_801F2AB4, add_reg_to_reg_float__6TLobbyFUcUc },
    { qst_getargs_801F2A5C, add_imm_float_to_reg__6TLobbyFUci },
    { qst_getargs_801F2AB4, sub_register_float_reg__6TLobbyFUcUc },
    { qst_getargs_801F2A5C, sub_register_float_imm__6TLobbyFUci },
    { qst_getargs_801F2AB4, mul_reg_by_reg_float__6TLobbyFUcUc },
    { qst_getargs_801F2A5C, mul_reg_by_immediate_float__6TLobbyFUci },
    { qst_getargs_801F2AB4, op_fdiv_reg_reg__6TLobbyFUcUc },
    { qst_getargs_801F2A5C, op_fdiv_reg__6TLobbyFUci },
    { qst_getargs_801F2B54, update_card_window_slot__6TLobbyFv },
    { qst_getargs_801F2AB4, count_player_items_to_global__6TLobbyFii },
    { qst_getargs_801F2B94, free_static__6TLobbyFv },
    { qst_getargs_801F2B94, clear_flag3__6TLobbyFv },
    { qst_getargs_801F2B54, TLobby__sub_801E8440 },
    { qst_getargs_801F2B54, op_player_cmd_b__6TLobbyFv },
    { qst_getargs_801F2B54, op_player_cmd_a__6TLobbyFv },
    { qst_getargs_801F2B54, TLobby__sub_801E83BC },
    { qst_getargs_801F2B54, TLobby__sub_801E8390 },
    { qst_getargs_801F2B54, TLobby__sub_801E8344 },
    { qst_getargs_801F2B54, TLobby__sub_801E82F8 },
    { qst_getargs_801F2B54, stop_force_for_client__6TLobbyFv },
    { qst_getargs_801F2B54, init_local_pad_if_client_exists__6TLobbyFv },
    { qst_getargs_801F2B0C, TLobby__sub_801E7E50 },
    { qst_getargs_801F2B0C, set_handler_entry__6TLobbyFi },
    { qst_getargs_801F2B0C, TLobby__sub_801E7D7C },
    { qst_getargs_801F2B54, TLobby__sub_801E7CFC },
    { qst_getargs_801F2B54, store_player_section_id__6TLobbyFv },
    { qst_getargs_801F2B54, TLobby__sub_801E7B64 },
    { qst_getargs_801F2B54, TLobby__sub_801E7AC8 },
    { qst_getargs_801F2AB4, TLobby__sub_801E79BC },
    { qst_getargs_801F2B54, TLobby__sub_801E7934 },
    { qst_getargs_801F2B54, set_card_window_entry__6TLobbyFv },
    { qst_getargs_801F2AB4, TLobby__sub_801E7810 },
    { qst_getargs_801F2B0C, fill_player_present_flags__6TLobbyFUc },
    { qst_getargs_801F2B54, send_data__6TLobbyFv },
    { qst_getargs_801F2B54, create_help_window__6TLobbyFv },
    { qst_getargs_801F2B0C, op_play_sound_from_reg__6TLobbyFi },
    { qst_getargs_801F2B0C, close_active_window__6TLobbyFi },
    { qst_getargs_801F2B54, spawn_lobby_object__6TLobbyFv },
    { qst_getargs_801F2B54, run_vm_helper_with_regs__6TLobbyFv },
    { qst_getargs_801F2B54, TLobby__sub_801E7CCC },
    { qst_getargs_801F2B54, open_quest_message_window__6TLobbyFv },
    { qst_getargs_801F2B54, TLobby__sub_801E7408 },
    { qst_getargs_801F2B0C, dispatch_story_select_by_op__6TLobbyFi },
    { qst_getargs_801F2B0C, TLobby__sub_801E72B4 },
    { qst_getargs_801F2B54, open_scroll_message_window__6TLobbyFv },
    { qst_getargs_801F2B54, init_graph__6TLobbyFPv },
    { qst_getargs_801F2B54, destroy__6TLobbyFPv },
    { qst_getargs_801F2B54, get_selected_slot__6TLobbyFPv },
    { qst_getargs_801F2B54, TLobby__sub_801E819C },
    { qst_getargs_801F2B54, notify_player_battle__6TLobbyFv },
    { qst_getargs_801F2B54, copy_item_data_to_quest_buffer__6TLobbyFv },
    { qst_getargs_801F2B54, wrap_pending_item__6TLobbyFv },
    { qst_getargs_801F2B54, wrap_item_as_present__6TLobbyFv },
    { qst_getargs_801F2B54, quest_vm_get_language },
    { qst_getargs_801F2B54, TLobby__sub_801E6F1C },
    { qst_getargs_801F2B54, create_chat_sensor_capture__6TLobbyFv },
    { qst_getargs_801F2B54, TLobby__sub_801E6E88 },
    { qst_getargs_801F2B54, TLobby__sub_801E6E20 },
    { qst_getargs_801F2B54, copy_slot_entity_data__6TLobbyFv },
    { qst_getargs_801F2B54, create_singleton__6TLobbyFv },
    { qst_getargs_801F2B54, check_item_usable_by_player__6TLobbyFv },
    { qst_getargs_801F2B54, TLobby__sub_801E6CA4 },
    { qst_getargs_801F2B54, op_sin__6TLobbyFv },
    { qst_getargs_801F2B54, op_cos__6TLobbyFv },
    { qst_getargs_801F2B54, store_tan_table_entry__6TLobbyFv },
    { qst_getargs_801F2B54, TLobby__sub_801E85B4 },
    { qst_getargs_801F2B0C, TLobby__sub_801E6C4C },
    { qst_getargs_801F2B0C, TLobby__sub_801F07D8 },
    { qst_getargs_801F2B0C, spawn_particle_at_entity__6TLobbyFUc },
    { qst_getargs_801F2B54, probe_character_save__6TLobbyFv },
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
}
