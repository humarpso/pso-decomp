#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_801D8664 {
    s8 sp8;
    s8 sp9;
    s8 spA;
    u8 rest[0x11];
};

struct Player_801D88C8;
struct Src_801D88C8;
struct Rec_801D86F8 { s32 a[0x50 / 4]; s32 b[0x38 / 4]; s32 c[0x40 / 4]; };

extern "C" {
void init__9TItemDataFv(void *);
void process_trade_target__10TObjPlayerFiPv(s32 arg0, void *arg1);
void TObjPlayer__sub_801D8664(s32 arg0, s8 arg1, s8 arg2);
M2C_UNK copy_data__6TLobbyFPvPv(void *, void *);
M2C_UNK copy_player_visual_record(void *, void *);
s32 get_ptr_4__10TObjPlayerFPv(void *);
M2C_UNK fn_801D40D4(void *, void *, void *);
Player_801D88C8 *create_ending_sequence_player(Player_801D88C8 *self, void *parent, Src_801D88C8 *src);
void* init_inventory__10TObjPlayerFPv(void* p);
s32 __nw__7TObjectFUl(int);
extern s32 tl_03;
s32 create_ending_player__10TObjPlayerFPv(u8 *arg0);
}

extern "C" {

struct VObj_84Base_801d859c_801D84CC { char pad[0x18]; };
struct VObj_84_801d859c_801D84CC : VObj_84Base_801d859c_801D84CC {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30();
    virtual s8 m31();
};

void process_trade_target__10TObjPlayerFiPv(s32 arg0, void *arg1);
int set_position_from__14TBoss4DarkFalzFPvPv(void*);
s32 advance_item_id_counter();
M2C_UNK send_6x29_delete_item__10TObjPlayerFPvii(s32, s32, M2C_UNK);
u32 pickup_item__10TObjPlayerFv(s32, void *);
M2C_UNK equip_item_to_slot__10TObjPlayerFPvPvi(s32, void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_801BE9A8(s32);
M2C_UNK set_equip_slot_entry(s32, s8, M2C_UNK);
s32 get_field_d8__10TObjPlayerFPv();
u32 get_slot_value__10TObjPlayerFPvi(s32, s8);
void *lookup_inventory_item__10TObjPlayerFPv(void *);
u16 obj_getField1c(void *);
int query_darkfalz_state__10TObjPlayerFPv(void* p);
int set_animation__10TObjPlayerFPvs(void*);
int set_animation_default__10TObjPlayerFPv(void* p);
M2C_UNK set_flag_20000__10TObjPlayerFi(s32);

void process_trade_target__10TObjPlayerFiPv(s32 arg0, void *arg1) {
    void *temp_r3;

    ((M2C_UNK (*)())obj_getField1c)();
    M2C_FIELD(arg1, s32 *, 0xC) = advance_item_id_counter();
    temp_r3 = lookup_inventory_item__10TObjPlayerFPv(arg1);
    if (temp_r3 != NULL) {
        s8 val = ((VObj_84_801d859c_801D84CC *)temp_r3)->m31();
        s32 val_ext = (s32)val;
        if (get_slot_value__10TObjPlayerFPvi(arg0 + 0xD04, val_ext) != 0U) {
            send_6x29_delete_item__10TObjPlayerFPvii(arg0, get_field_d8__10TObjPlayerFPv(), 1);
            set_equip_slot_entry(arg0 + 0xD04, val_ext, 0);
        }
        if (pickup_item__10TObjPlayerFv(arg0, temp_r3) != 0U) {
            set_flag_20000__10TObjPlayerFi(arg0);
            equip_item_to_slot__10TObjPlayerFPvPvi(arg0, temp_r3, 0);
            TObjPlayer__sub_801BE9A8(arg0);
        }
    }
}
void TObjPlayer__sub_801D8664(s32 arg0, s8 arg1, s8 arg2) {
    typedef char sp8_offset[(offsetof(Stack_801D8664, sp8) == 0x0) ? 1 : -1];
    typedef char sp9_offset[(offsetof(Stack_801D8664, sp9) == 0x1) ? 1 : -1];
    typedef char spA_offset[(offsetof(Stack_801D8664, spA) == 0x2) ? 1 : -1];
    Stack_801D8664 stack;
    init__9TItemDataFv((void *) (&stack.sp8));
    stack.sp9 = arg1;
    stack.sp8 = 0;
    stack.spA = arg2;
    process_trade_target__10TObjPlayerFiPv(arg0, (void *) (&stack.sp8));
}

}

#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 obj_testFlags30(void *, s32);
s32 draw_model_with_callback__10TObjPlayerFPviif(void *, s32, s32, f32);
void push_matrix(void);
void pop_matrix(void);
s32 set_global_param__8TObjFishFi(s32);
M2C_UNK restore_scene_lighting();
M2C_UNK select_actor_lighting(void *);
M2C_UNK draw_model_with_callback__10TObjPlayerFPv(void *);
M2C_UNK apply_material_color_override__10TObjPlayerFi(void *);
M2C_UNK TObjPlayer__sub_801BAC48(void *);
M2C_UNK draw_head_attachments__10TObjPlayerFPv(void *);
M2C_UNK write_ids__10TObjPlayerFPv(void *);
M2C_UNK save_render_material_state(void *);
M2C_UNK translate_matrix_vec3(int, void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();
void TObjPlayer__sub_801D877C(u8 *arg0);
}

extern "C" {

void TObjPlayer__sub_801D8864(void);
void free_shared_lobby_data__10TObjPlayerFv(void);
int query_darkfalz_state__10TObjPlayerFPv(void* p);
int set_animation_default__10TObjPlayerFPv(void* p);
int set_position_from__14TBoss4DarkFalzFPvPv(void*);
int free_nodes_with_id__6TLobbyFUi(void*);
int free_shared_data__10TObjPlayerFv(void);
int set_animation__10TObjPlayerFPvs(void*);

int query_darkfalz_state__10TObjPlayerFPv(void* p) { return set_position_from__14TBoss4DarkFalzFPvPv(p); }
int set_animation_default__10TObjPlayerFPv(void* p) { return set_animation__10TObjPlayerFPvs(p); }

struct Player_801D88C8;
struct Src_801D88C8;
s32 create_ending_player__10TObjPlayerFPv(u8 *arg0) {
    Rec_801D86F8 sp8;
    s32 var_r0;
    init_inventory__10TObjPlayerFPv((void*)((void *) (&sp8)));
    copy_player_visual_record((void *) (&sp8), (void *) (arg0 + 0x370));
    copy_data__6TLobbyFPvPv((void *) (sp8.c), (void *) (arg0 + 0x34C));
    fn_801D40D4((void *) (*arg0), (void *) (get_ptr_4__10TObjPlayerFPv((void *) (arg0))), (void *) (sp8.b));
    var_r0 = __nw__7TObjectFUl((int) (0xDB8));
    if (var_r0 != 0) {
        var_r0 = (s32)create_ending_sequence_player((Player_801D88C8 *)var_r0, (void *) (tl_03), (Src_801D88C8 *) (&sp8));
    }
    return var_r0;
}

void TObjPlayer__sub_801D877C(u8 *arg0) {
    if ((obj_testFlags30(arg0, 0x02000000) == 0) && ((s32) M2C_FIELD(arg0, s32 *, 0xCFC) == 0)) {
        select_actor_lighting((void *) (arg0));
        push_matrix();
        translate_matrix_vec3((int) (0), (void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        save_render_material_state((void *) (arg0 + 0x608));
        apply_material_color_override__10TObjPlayerFi((void *) (arg0));
        set_global_param__8TObjFishFi((s32) (arg0 + 0xCF4));
        set_global_flag__10TObjPlayerFv();
        draw_model_with_callback__10TObjPlayerFPv((void *) (arg0));
        clear_global_state__10TObjPlayerFv();
        write_ids__10TObjPlayerFPv((void *) (arg0 + 0x608));
        draw_head_attachments__10TObjPlayerFPv((void *) (arg0));
        pop_matrix();
        TObjPlayer__sub_801BAC48((void *) (arg0));
        restore_scene_lighting();
        return;
    }
    push_matrix();
    translate_matrix_vec3((int) (0), (void *) (arg0 + 0x38));
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    ((s32 (*)(void *, s32, f32, s32))draw_model_with_callback__10TObjPlayerFPviif)(arg0, M2C_FIELD(arg0, s32 *, 0xF8), M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, s32 *, 0xE0));
    pop_matrix();
}

void TObjPlayer__sub_801D8864(void) {  }

    extern int player_ending_motion_object;
void free_shared_lobby_data__10TObjPlayerFv(void) { free_nodes_with_id__6TLobbyFUi((void*)(player_ending_motion_object)); player_ending_motion_object = 0; free_shared_data__10TObjPlayerFv(); }

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_50 { u8 bytes[0x50]; };

struct RecoveredGlobal_801D8ADC_lbl_8044929C {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_801D8ADC_lbl_804492AC {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_801D8ADC_lbl_804492BC {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_801D8ADC_lbl_804492CC {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_801D8B8C_lbl_8044925C {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_801D8B8C_lbl_8044926C {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_801D8B8C_lbl_8044927C {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_801D8B8C_lbl_8044928C {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_801D8C6C_lbl_8044923C {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_801D8D8C_lbl_804C49B0 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct RecoveredGlobal_801D8E60_lbl_804C4980 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_801D9328_lbl_80447430 {
    M2C_UNK value;
    u8 remaining[0x17C];
};

struct RecoveredGlobal_801A51C0_lbl_80446980 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_801D9390_lbl_804471C0 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

struct RecoveredGlobal_801D92F4_lbl_804475B0 {
    M2C_UNK value;
    u8 remaining[0x23C];
};

struct RecoveredGlobal_801D935C_lbl_804C4680 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct RecoveredGlobal_801D93C4_lbl_804471C0 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

struct RecoveredGlobal_801D93F8_lbl_804471A8 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_801D9440_lbl_804471A8 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_801D9004_lbl_80447970 {
    M2C_UNK value;
    u8 remaining[0x38];
};

struct RecoveredGlobal_801D8DCC_lbl_804C4998
{
  M2C_UNK value;
  u8 remaining[0x14];
};

struct RecoveredGlobal_801D8E1C_lbl_804C498C
{
  M2C_UNK value;
  u8 remaining[0x8];
};

struct RecoveredGlobal_801D8FB4_lbl_804C495C
{
  M2C_UNK value;
  u8 remaining[0x14];
};

struct Vec_801D8CCC { f32 x, y, z; };

typedef struct Src_801D88C8 {
    u8 pad0[0x50];
    u8 slot0[0x1C];
    u8 slot1[0x40];
    u8 sub[0x18];
    f32 frame;
} Src_801D88C8;

typedef struct Player_801D88C8 {
    u8 pad0[0x18];
    void *vt;
    u8 pad1c[0x38 - 0x1C];
    u8 pos[12];
    u8 pad44[0x60 - 0x44];
    s32 ang;
    u8 pad64[0xC0 - 0x64];
    f32 frame;
    u8 padc4[0xE0 - 0xC4];
    u8 *model;
    u8 pade4[0xF8 - 0xE4];
    void *motion;
} Player_801D88C8;

typedef struct Rec_801D8F0C { f32 a, b, c; } Rec_801D8F0C;

typedef struct Rec_801D8F60 { f32 a, b, c; } Rec_801D8F60;

extern "C" {
s8 TObjPlayer__sub_801AFDBC(s8);
s32 clamp_index_to_max__10TObjPlayerFi(s32);
extern int ply_level_table;
s32 get_ply_level_table_row(s8 arg0, s32 arg1);
s32 get_current_state_field__10TObjPlayerFv(s8 _w0, s32 _w1);
s8 get_class_index__10TObjPlayerFPv(s32);
s8 get_class_index__10TObjPlayerFPv(s32 _w0);
s32 get_class_state_field__10TObjPlayerFii(s32 arg0, s32 arg1);
s16 get_tech_level__10TObjPlayerFPv(void *);
s32 get_move_mode__10TObjPlayerFPv(void *);
f32 lookup_attack_marker(s32, s16, s16, s32);
extern M2C_UNK lbl_804477F0[];
extern M2C_UNK attack_marker_table_dagger[];
extern M2C_UNK attack_marker_table_double_saber[];
extern M2C_UNK twin_sword_male_marker_table[];
extern M2C_UNK twin_sword_female_marker_table[];
void select_normal_attack_marker__10TObjPlayerFPv(u8 *arg0);
s32 get_main_phase();
s32 obj_isState3_324(int);
extern RecoveredGlobal_801D8ADC_lbl_8044929C getup_protection_ticks_table_a;
extern RecoveredGlobal_801D8ADC_lbl_804492AC getup_protection_ticks_table_b;
extern RecoveredGlobal_801D8ADC_lbl_804492BC player_getup_protection_ticks_table;
extern RecoveredGlobal_801D8ADC_lbl_804492CC player_getup_protection_ticks_table_flagged;
extern s32 game_difficulty_selection;
M2C_UNK *get_getup_protection_ticks__10TObjPlayerFPv(M2C_UNK *arg0);
s32 get_main_phase();
s32 obj_isState3_324(int);
extern RecoveredGlobal_801D8B8C_lbl_8044925C player_hurt_protection_ticks_table;
extern RecoveredGlobal_801D8B8C_lbl_8044926C player_hurt_protection_ticks_table_flagged;
extern RecoveredGlobal_801D8B8C_lbl_8044927C player_hurt_protection_ticks_table_phase15;
extern RecoveredGlobal_801D8B8C_lbl_8044928C hurt_protection_ticks_table;
extern s32 game_difficulty_selection;
M2C_UNK *get_hurt_protection_ticks__10TObjPlayerFPv(M2C_UNK *arg0);
s32 get_instance__6TLobbyFv(void);
extern RecoveredGlobal_801D8C6C_lbl_8044923C lobby_entry_table;
u8 *get_lobby_entry_ptr__10TObjPlayerFv(void);
s8 TObjPlayer__sub_801AFDBC(s8);
extern RecoveredGlobal_801D8D8C_lbl_804C49B0 lbl_804C49B0;
s32 get_class_starting_inventory(s8 arg0);
extern RecoveredGlobal_801D8E60_lbl_804C4980 lbl_804C4980;
s32 get_table_entry_by_clamped_index__10TObjPlayerFPv(u8 *arg0);
s8 get_class_index__10TObjPlayerFPv(s32 _w0);
extern RecoveredGlobal_801D9328_lbl_80447430 lbl_80447430;
u8 *get_class_defense_template(u8 *arg0);
s32 get_instance__6TLobbyFv(void);
extern RecoveredGlobal_801A51C0_lbl_80446980 lbl_80449254;
s32 TObjPlayer__sub_801D8C3C(void);
s32 get_instance__6TLobbyFv(void);
extern RecoveredGlobal_801A51C0_lbl_80446980 lbl_80449234;
s32 get_guild_return_yaw__10TObjPlayerFv(void);
s32 get_instance__6TLobbyFv(void);
extern RecoveredGlobal_801A51C0_lbl_80446980 lbl_804491CC;
s32 get_hospital_yaw__10TObjPlayerFv(void);
s8 TObjPlayer__sub_801AFDBC(s8);
extern RecoveredGlobal_801D9390_lbl_804471C0 lbl_804471C0;
u8 *get_class_stat_caps(s8 arg0);
s8 get_class_index__10TObjPlayerFPv(s32 _w0);
extern RecoveredGlobal_801D92F4_lbl_804475B0 lbl_804475B0;
u8 *get_class_attack_template(u8 *arg0);
s8 TObjPlayer__sub_801AFDBC(s8);
extern RecoveredGlobal_801D935C_lbl_804C4680 player_class_base_stat_tables;
s32 get_class_base_stats(s8 arg0);
s8 get_class_index__10TObjPlayerFPv(s32 _w0);
extern RecoveredGlobal_801D9390_lbl_804471C0 lbl_804471C0;
u8 *get_class_stat_entry__10TObjPlayerFPv(u8 *arg0);
extern RecoveredGlobal_801D93F8_lbl_804471A8 lbl_804471A8;
extern const f32 lbl_805DC400;
f32 get_tp_class_factor__10TObjPlayerFPv(u8 *arg0);
s32 get_clamped_index__10TObjPlayerFPv(void *);
extern RecoveredGlobal_801D93F8_lbl_804471A8 lbl_804471A8;
f32 get_class_hp_factor__10TObjPlayerFPv(void * _w0);
s32 get_falz_phase__10TObjPlayerFPv(void* p);
extern RecoveredGlobal_801D9004_lbl_80447970 attack_recovery_count_table;
f32 get_attack_recovery_count__10TObjPlayerFi(s32 arg0);
int has_valid_handle__10TObjPlayerFPv(void *);
extern RecoveredGlobal_801D8DCC_lbl_804C4998 lbl_804C4998;
s32 TObjPlayer__sub_801D8DCC(u8 *arg0);
s32 get_clamped_index__10TObjPlayerFPv(void *);
extern RecoveredGlobal_801D8E1C_lbl_804C498C lbl_804C498C;
long get_anim_table_entry__10TObjPlayerFPvi(u8 *arg0, s32 arg1);
s16 get_handle_value__10TObjPlayerFPv(void *);
int has_valid_handle__10TObjPlayerFPv(void *);
extern RecoveredGlobal_801D8FB4_lbl_804C495C photon_blast_motion_timing_tables;
f32 get_photon_blast_hold_frame__10TObjPlayerFi(s32 arg0);
u16 obj_getField1c(void *);
s32 get_instance__6TLobbyFv(void);
extern u8 *lbl_804C49E0[];
u8 *get_hospital_position__10TObjPlayerFPv(void *player);
s32 get_max_level__10TObjPlayerFv(s32);
s32 get_current_state_field__10TObjPlayerFv(s8 _w0, s32 _w1);
s8 get_class_index__10TObjPlayerFPv(s32 _w0);
s32 TObjPlayer__sub_801D91B8(s32 arg0);
u16 obj_getField1c(void *);
s32 get_instance__6TLobbyFv(void);
extern Vec_801D8CCC *lbl_804C49E8[];
Vec_801D8CCC *get_guild_return_position__10TObjPlayerFPv(void *player);
void VecCopy__FP3VecPC3Vec(void *, void *);
u16 obj_getField1c(void *);
void init_npc_animation__10TObjPlayerFPvPvPvPv(void *, s32, s32, s32);
void select_class_action_provider__10TObjPlayerFPv(void *);
void TObjPlayer__ct(void *, void *);
void set_floor_index__10TObjPlayerFPvi(void *, s32);
void *get_sub_object__10TObjPlayerFPv(void *);
s32 get_lock_timer__10TObjPlayerFPv(void *);
void set_action_flag_40__10TObjPlayerFPv(void *);
void assign_lobby_slot_if_flagged__10TObjPlayerFiPv(void *, void *);
s32 get_table_entry_by_clamped_index__10TObjPlayerFPv(u8 *arg0);
M2C_UNK translate_matrix_vec3(int, void *);
M2C_UNK rotate_matrix_y(int, int);
void push_matrix(void);
void pop_matrix(void);
extern M2C_UNK ending_sequence_player_vtable[];
extern u8 *TObjPlayer__shared_model_buffer;
extern int player_ending_motion_object;
extern const float lbl_805DC3F8;
Player_801D88C8 *create_ending_sequence_player(Player_801D88C8 *self, void *parent, Src_801D88C8 *src);
s32 classify_action_state__10TObjPlayerFv(void *);
int get_floor_surface_type__10TObjPlayerFPv(void* p);
int get_instance_count__14TBoss4DarkFalzFv(void);
s32 get_global_state__14TOKeyMachine01Fv();
extern s32 (*lbl_804C4974[])[5];
s32 get_footstep_floor_index__10TObjPlayerFv(void *arg0);
s16 get_handle_value__10TObjPlayerFPv(void *);
int has_valid_handle__10TObjPlayerFPv(void *);
extern RecoveredGlobal_801D8FB4_lbl_804C495C photon_blast_motion_timing_tables;
f32 get_photon_blast_complete_threshold__10TObjPlayerFv(void *arg0);
s16 get_handle_value__10TObjPlayerFPv(void *);
int has_valid_handle__10TObjPlayerFPv(void *);
extern RecoveredGlobal_801D8FB4_lbl_804C495C photon_blast_motion_timing_tables;
f32 get_photon_blast_upper_bound__10TObjPlayerFv(void *arg0);
}

extern "C" {

s32 TBoss4DarkFalz__sub_801D94C0(void* p);
void *TObjPlayer__sub_801D89E0(void *arg0, s16 arg1);
void TObjPlayer__sub_801D8A38(void* a0);
void TObjPlayer__sub_801D92A4(void);
int get_floor_surface_type__10TObjPlayerFPv(void* p);
void create_player_ending_motion(void);
s32 get_current_state_field__10TObjPlayerFv(s8 _w0, s32 _w1);
int get_instance_count__14TBoss4DarkFalzFv(void);
void* init_inventory__10TObjPlayerFPv(void* p);
s32 init_inventory_items__10TObjPlayerFi(s32 arg0);
void load_ply_level_tbl(void);
int free_nodes_with_id__6TLobbyFUi(void*);
int alloc_shared_buffers__10TObjPlayerFv(void);
int TObjPlayer__sub_801BFF80(void*);
int get_contact_surface_type(void*);
void __dl__7TObjectFPv(void *);
void __dt__10TObjPlayerFv(void *, int);
int create_named_object(void*);
int load_encrypted_archive_data(void*);
M2C_UNK init__17TPlyInventoryItemFv(s32);

    extern unsigned char lbl_80447190[];
    extern int player_ending_motion_object;
void create_player_ending_motion(void) { alloc_shared_buffers__10TObjPlayerFv(); player_ending_motion_object = create_named_object(lbl_80447190); }

extern M2C_UNK ending_sequence_player_vtable[];

Player_801D88C8 *create_ending_sequence_player(Player_801D88C8 *self, void *parent, Src_801D88C8 *src) {
    TObjPlayer__ct(self, parent);
    self->vt = ((s32 *)&ending_sequence_player_vtable);
    set_floor_index__10TObjPlayerFPvi(self, 1);
    set_floor_index__10TObjPlayerFPvi(self, 1);
    VecCopy__FP3VecPC3Vec(self->pos, get_sub_object__10TObjPlayerFPv(src->sub));
    self->ang = get_lock_timer__10TObjPlayerFPv(src->sub);
    select_class_action_provider__10TObjPlayerFPv(self);
    self->model = TObjPlayer__shared_model_buffer + obj_getField1c(self) * 0xC00;
    init_npc_animation__10TObjPlayerFPvPvPvPv(self, get_table_entry_by_clamped_index__10TObjPlayerFPv((u8 *)self), *(s32 *)player_ending_motion_object, 1);
    self->frame = src->frame;
    set_action_flag_40__10TObjPlayerFPv(self);
    push_matrix();
    translate_matrix_vec3(0, self->pos);
    rotate_matrix_y(0, self->ang);
    ((void (*)(void *, void *, f32, void *))draw_model_with_callback__10TObjPlayerFPviif)(self, self->motion, (*(const f32 *)&lbl_805DC3F8), self->model);
    pop_matrix();
    assign_lobby_slot_if_flagged__10TObjPlayerFiPv(self, src->slot0);
    assign_lobby_slot_if_flagged__10TObjPlayerFiPv(self, src->slot1);
    return self;
}

void *TObjPlayer__sub_801D89E0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = ending_sequence_player_vtable;
        __dt__10TObjPlayerFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

    extern const float lbl_805DC3F8;
void TObjPlayer__sub_801D8A38(void* a0) { *(short*)((char*)a0 + 0x0) = 1; *(float*)((char*)a0 + 0x4) = lbl_805DC3F8; }

void* init_inventory__10TObjPlayerFPv(void* p) { init_inventory_items__10TObjPlayerFi((s32)((s32)((char*)p + 0x50))); TObjPlayer__sub_801BFF80((char*)p + 0xac); TObjPlayer__sub_801D8A38((void*)((void*)((char*)p + 0xc0))); return p; }

s32 init_inventory_items__10TObjPlayerFi(s32 arg0) {
    s32 var_r30;
    s32 var_r31;

    var_r31 = 0;
    var_r30 = 0;
    do {
        init__17TPlyInventoryItemFv(arg0 + var_r30);
        var_r31 += 1;
        var_r30 += 0x1C;
    } while (var_r31 < 2);
    return arg0;
}

typedef char RecoveredGlobal_801D8ADC_lbl_8044929C_size[sizeof(RecoveredGlobal_801D8ADC_lbl_8044929C) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_801D8ADC_lbl_804492AC_size[sizeof(RecoveredGlobal_801D8ADC_lbl_804492AC) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_801D8ADC_lbl_804492BC_size[sizeof(RecoveredGlobal_801D8ADC_lbl_804492BC) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_801D8ADC_lbl_804492CC_size[sizeof(RecoveredGlobal_801D8ADC_lbl_804492CC) == 0x14 ? 1 : -1];
M2C_UNK *get_getup_protection_ticks__10TObjPlayerFPv(M2C_UNK *arg0) {
    M2C_UNK *var_r31;
    M2C_UNK *var_r3;
    var_r31 = (M2C_UNK *)(arg0);
    if (get_main_phase() == 0xF) {
        var_r3 = (M2C_UNK *)(var_r31);
        if (obj_isState3_324((int) (var_r3)) != 0) {
            var_r3 = (M2C_UNK *)(&player_getup_protection_ticks_table_flagged.value);
            var_r3 = (M2C_UNK *)(&player_getup_protection_ticks_table_flagged.value);
            var_r3 = (M2C_UNK *)(M2C_FIELD(&player_getup_protection_ticks_table_flagged.value, M2C_UNK *, (game_difficulty_selection * 4)));
            return var_r3;
        }
        var_r3 = (M2C_UNK *)(&player_getup_protection_ticks_table.value);
        var_r3 = (M2C_UNK *)(&player_getup_protection_ticks_table.value);
        var_r3 = (M2C_UNK *)(M2C_FIELD(&player_getup_protection_ticks_table.value, M2C_UNK *, (game_difficulty_selection * 4)));
        return var_r3;
    }
    var_r3 = (M2C_UNK *)(var_r31);
    if (obj_isState3_324((int) (var_r3)) != 0) {
        var_r3 = (M2C_UNK *)(&getup_protection_ticks_table_b.value);
        var_r3 = (M2C_UNK *)(&getup_protection_ticks_table_b.value);
        var_r3 = (M2C_UNK *)(M2C_FIELD(&getup_protection_ticks_table_b.value, M2C_UNK *, (game_difficulty_selection * 4)));
        return var_r3;
    }
    var_r3 = (M2C_UNK *)(&getup_protection_ticks_table_a.value);
    var_r3 = (M2C_UNK *)(&getup_protection_ticks_table_a.value);
    var_r3 = (M2C_UNK *)(M2C_FIELD(&getup_protection_ticks_table_a.value, M2C_UNK *, (game_difficulty_selection * 4)));
    return var_r3;
}

typedef char RecoveredGlobal_801D8B8C_lbl_8044925C_size[sizeof(RecoveredGlobal_801D8B8C_lbl_8044925C) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_801D8B8C_lbl_8044926C_size[sizeof(RecoveredGlobal_801D8B8C_lbl_8044926C) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_801D8B8C_lbl_8044927C_size[sizeof(RecoveredGlobal_801D8B8C_lbl_8044927C) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_801D8B8C_lbl_8044928C_size[sizeof(RecoveredGlobal_801D8B8C_lbl_8044928C) == 0x10 ? 1 : -1];
M2C_UNK *get_hurt_protection_ticks__10TObjPlayerFPv(M2C_UNK *arg0) {
    M2C_UNK *var_r31;
    M2C_UNK *var_r3;
    var_r31 = (M2C_UNK *)(arg0);
    if (get_main_phase() == 0xF) {
        var_r3 = (M2C_UNK *)(var_r31);
        if (obj_isState3_324((int) (var_r3)) != 0) {
            var_r3 = (M2C_UNK *)(&hurt_protection_ticks_table.value);
            var_r3 = (M2C_UNK *)(&hurt_protection_ticks_table.value);
            var_r3 = (M2C_UNK *)(M2C_FIELD(&hurt_protection_ticks_table.value, M2C_UNK *, (game_difficulty_selection * 4)));
            return var_r3;
        }
        var_r3 = (M2C_UNK *)(&player_hurt_protection_ticks_table_phase15.value);
        var_r3 = (M2C_UNK *)(&player_hurt_protection_ticks_table_phase15.value);
        var_r3 = (M2C_UNK *)(M2C_FIELD(&player_hurt_protection_ticks_table_phase15.value, M2C_UNK *, (game_difficulty_selection * 4)));
        return var_r3;
    }
    var_r3 = (M2C_UNK *)(var_r31);
    if (obj_isState3_324((int) (var_r3)) != 0) {
        var_r3 = (M2C_UNK *)(&player_hurt_protection_ticks_table_flagged.value);
        var_r3 = (M2C_UNK *)(&player_hurt_protection_ticks_table_flagged.value);
        var_r3 = (M2C_UNK *)(M2C_FIELD(&player_hurt_protection_ticks_table_flagged.value, M2C_UNK *, (game_difficulty_selection * 4)));
        return var_r3;
    }
    var_r3 = (M2C_UNK *)(&player_hurt_protection_ticks_table.value);
    var_r3 = (M2C_UNK *)(&player_hurt_protection_ticks_table.value);
    var_r3 = (M2C_UNK *)(M2C_FIELD(&player_hurt_protection_ticks_table.value, M2C_UNK *, (game_difficulty_selection * 4)));
    return var_r3;
}

typedef char RecoveredGlobal_801D8C6C_lbl_8044923C_size[sizeof(RecoveredGlobal_801D8C6C_lbl_8044923C) == 0x18 ? 1 : -1];

typedef char RecoveredGlobal_801A51C0_lbl_80446980_size[sizeof(RecoveredGlobal_801A51C0_lbl_80446980) == 0x18 ? 1 : -1];
s32 TObjPlayer__sub_801D8C3C(void) {
    return M2C_FIELD(&lbl_80449254.value, M2C_UNK *, (get_instance__6TLobbyFv() * 4));
}

u8 *get_lobby_entry_ptr__10TObjPlayerFv(void) {
    return (u8 *)&lobby_entry_table.value + (get_instance__6TLobbyFv() * 0xC);
}

typedef char RecoveredGlobal_801D8D8C_lbl_804C49B0_size[sizeof(RecoveredGlobal_801D8D8C_lbl_804C49B0) == 0x30 ? 1 : -1];

s32 get_guild_return_yaw__10TObjPlayerFv(void) {
    return M2C_FIELD(&lbl_80449234.value, M2C_UNK *, (get_instance__6TLobbyFv() * 4));
}

Vec_801D8CCC *get_guild_return_position__10TObjPlayerFPv(void *player) {
    return lbl_804C49E8[get_instance__6TLobbyFv()] + obj_getField1c(player);
}

s32 get_hospital_yaw__10TObjPlayerFv(void) {
    return M2C_FIELD(&lbl_804491CC.value, M2C_UNK *, (get_instance__6TLobbyFv() * 4));
}

u8 *get_hospital_position__10TObjPlayerFPv(void *player) {
    s32 temp_r31;
    temp_r31 = obj_getField1c(player) * 0xC;
    return lbl_804C49E0[get_instance__6TLobbyFv()] + temp_r31;
}

s32 get_class_starting_inventory(s8 arg0) {
    TObjPlayer__sub_801AFDBC(arg0);
    return M2C_FIELD(&lbl_804C49B0.value, M2C_UNK *, (arg0 * 4));
}

typedef char RecoveredGlobal_801D8E60_lbl_804C4980_size[sizeof(RecoveredGlobal_801D8E60_lbl_804C4980) == 0xC ? 1 : -1];

typedef struct RecoveredGlobal_801D8DCC_lbl_804C4998 RecoveredGlobal_801D8DCC_lbl_804C4998;
typedef char RecoveredGlobal_801D8DCC_lbl_804C4998_size[((sizeof(RecoveredGlobal_801D8DCC_lbl_804C4998)) == 0x18) ? (1) : (-1)];
s32 TObjPlayer__sub_801D8DCC(u8 *arg0) {
  s32 temp_r31;
  s8 *new_var;
  temp_r31 = get_handle_value__10TObjPlayerFPv((void *)(arg0)) * 0x14;
  new_var = ((s8 *) (&lbl_804C4998.value)) + (has_valid_handle__10TObjPlayerFPv(arg0) * 4);
  return (*((M2C_UNK *) new_var)) + temp_r31;
}

typedef struct RecoveredGlobal_801D8E1C_lbl_804C498C RecoveredGlobal_801D8E1C_lbl_804C498C;
typedef char RecoveredGlobal_801D8E1C_lbl_804C498C_size[((sizeof(RecoveredGlobal_801D8E1C_lbl_804C498C)) == 0xC) ? (1) : (-1)];
long get_anim_table_entry__10TObjPlayerFPvi(u8 *arg0, s32 arg1) {
  int new_var;
  new_var = get_clamped_index__10TObjPlayerFPv(arg0) * 4;
  return (*((M2C_UNK *) (((s8 *) (&lbl_804C498C.value)) + new_var))) + (arg1 * 4);
}

s32 get_table_entry_by_clamped_index__10TObjPlayerFPv(u8 *arg0) {
    return M2C_FIELD(&lbl_804C4980.value, M2C_UNK *, (get_clamped_index__10TObjPlayerFPv((void *)(arg0)) * 4));
}

typedef char RecoveredGlobal_801D9004_lbl_80447970_size[sizeof(RecoveredGlobal_801D9004_lbl_80447970) == 0x3C ? 1 : -1];

typedef struct RecoveredGlobal_801D8FB4_lbl_804C495C RecoveredGlobal_801D8FB4_lbl_804C495C;
typedef char RecoveredGlobal_801D8FB4_lbl_804C495C_size[((sizeof(RecoveredGlobal_801D8FB4_lbl_804C495C)) == 0x18) ? (1) : (-1)];

s32 get_footstep_floor_index__10TObjPlayerFv(void *arg0) {
    s32 floor;
    s32 (*table)[5];
    floor = get_global_state__14TOKeyMachine01Fv();
    table = lbl_804C4974[classify_action_state__10TObjPlayerFv(arg0)];
    if (floor == 0xE && get_instance_count__14TBoss4DarkFalzFv() == 0) {
        floor = 1;
    }
    {
        s32 surf = get_floor_surface_type__10TObjPlayerFPv(arg0);
        return table[floor][surf];
    }
}

f32 get_photon_blast_complete_threshold__10TObjPlayerFv(void *arg0) {
  return ((Rec_801D8F0C * *)&photon_blast_motion_timing_tables)[has_valid_handle__10TObjPlayerFPv(arg0)][get_handle_value__10TObjPlayerFPv(arg0)].c;
}

f32 get_photon_blast_upper_bound__10TObjPlayerFv(void *arg0) {
  return ((Rec_801D8F60 * *)&photon_blast_motion_timing_tables)[has_valid_handle__10TObjPlayerFPv(arg0)][get_handle_value__10TObjPlayerFPv(arg0)].b;
}

f32 get_photon_blast_hold_frame__10TObjPlayerFi(s32 arg0) {
  s32 temp_r31;
  s32 *new_var;
  temp_r31 = get_handle_value__10TObjPlayerFPv((void *)(arg0)) * 0xC;
  new_var = (s32 *) (((s8 *) (((u8 *) (&photon_blast_motion_timing_tables.value)) + (((s32)has_valid_handle__10TObjPlayerFPv((void *) arg0)) * 4))) + 0);
  return *((f32 *) (((s8 *) ((*new_var) + temp_r31)) + 0));
}

f32 get_attack_recovery_count__10TObjPlayerFi(s32 arg0) {
    s32 temp_r31;
    temp_r31 = get_falz_phase__10TObjPlayerFPv((void*)(arg0));
    return (f32) (s8) M2C_FIELD(((u8 *)(((u8 *)(&attack_recovery_count_table.value) + (get_handle_value__10TObjPlayerFPv((void *)((void *) (arg0))) * 3))) + temp_r31), u8 *, 0);
}

#pragma push
#pragma scheduling off
void select_normal_attack_marker__10TObjPlayerFPv(u8 *arg0) {
  s16 temp_r30;
  s16 temp_r31;
  s16 new_var;
  s32 temp_r29;
  temp_r29 = get_move_mode__10TObjPlayerFPv(arg0);
  new_var = get_tech_level__10TObjPlayerFPv(arg0 + 0x7CC);
  temp_r30 = new_var;
  temp_r31 = get_falz_phase__10TObjPlayerFPv((void*)((void*)(arg0)));
  lookup_attack_marker((s32) get_handle_value__10TObjPlayerFPv((void *)(arg0)), temp_r31, temp_r30, temp_r29);
}

#pragma pop

f32 lookup_attack_marker(s32 arg0, s16 arg1, s16 arg2, s32 arg3) {
    switch (arg0) {
    case 3:
        return M2C_FIELD(((u8 *)(((u8 *)(attack_marker_table_dagger) + (arg2 * 0xC))) + (arg1 * 4)), f32 *, 0);
    case 14:
        return M2C_FIELD(((u8 *)(((u8 *)(attack_marker_table_double_saber) + (arg2 * 0xC))) + (arg1 * 4)), f32 *, 0);
    case 15:
        if (arg3 & 1) {
            return M2C_FIELD(((u8 *)(((u8 *)(twin_sword_male_marker_table) + (arg2 * 0xC))) + (arg1 * 4)), f32 *, 0);
        }
        return M2C_FIELD(((u8 *)(((u8 *)(twin_sword_female_marker_table) + (arg2 * 0xC))) + (arg1 * 4)), f32 *, 0);
    default:
        return M2C_FIELD(((u8 *)(((u8 *)(lbl_804477F0) + (arg0 * 0xC))) + (arg1 * 4)), f32 *, 0);
    }
}

s32 TObjPlayer__sub_801D91B8(s32 arg0) {
    return get_current_state_field__10TObjPlayerFv(get_class_index__10TObjPlayerFPv(arg0), get_max_level__10TObjPlayerFv(arg0));
}

s32 get_current_state_field__10TObjPlayerFv(s8 _w0, s32 _w1) {
    return M2C_FIELD(get_ply_level_table_row(_w0, (s32)(_w1)), s32 *, 8);
}

    extern int ply_level_table;

s32 get_class_state_field__10TObjPlayerFii(s32 arg0, s32 arg1) { return get_current_state_field__10TObjPlayerFv(get_class_index__10TObjPlayerFPv(arg0), arg1); }

s32 get_ply_level_table_row(s8 arg0, s32 arg1) {
  s32 temp_r30;
  s32 temp_r31;
  temp_r30 = *(*(s32 * *)&ply_level_table);
  ;
  return (*((M2C_UNK *) (((s8 *) temp_r30) + (TObjPlayer__sub_801AFDBC(arg0) * 4)))) + (clamp_index_to_max__10TObjPlayerFi(arg1) * 0xC);
}

void TObjPlayer__sub_801D92A4(void) { free_nodes_with_id__6TLobbyFUi((void*)(ply_level_table)); }

    extern unsigned char lbl_804492E8[];
    extern int ply_level_table;
void load_ply_level_tbl(void) { ply_level_table = load_encrypted_archive_data(lbl_804492E8); }

typedef char RecoveredGlobal_801D9328_lbl_80447430_size[sizeof(RecoveredGlobal_801D9328_lbl_80447430) == 0x180 ? 1 : -1];

typedef char RecoveredGlobal_801D92F4_lbl_804475B0_size[sizeof(RecoveredGlobal_801D92F4_lbl_804475B0) == 0x240 ? 1 : -1];
u8 *get_class_attack_template(u8 *arg0) {
    return (u8 *)&lbl_804475B0.value + (get_class_index__10TObjPlayerFPv((s32)(arg0)) * 0x30);
}

u8 *get_class_defense_template(u8 *arg0) {
    return (u8 *)&lbl_80447430.value + (get_class_index__10TObjPlayerFPv((s32)(arg0)) << 5);
}

typedef char RecoveredGlobal_801D9390_lbl_804471C0_size[sizeof(RecoveredGlobal_801D9390_lbl_804471C0) == 0x1B0 ? 1 : -1];

typedef char RecoveredGlobal_801D935C_lbl_804C4680_size[sizeof(RecoveredGlobal_801D935C_lbl_804C4680) == 0x30 ? 1 : -1];
s32 get_class_base_stats(s8 arg0) {
    return M2C_FIELD(&player_class_base_stat_tables.value, M2C_UNK *, (TObjPlayer__sub_801AFDBC(arg0) * 4));
}

u8 *get_class_stat_caps(s8 arg0) {
    return (u8 *)&lbl_804471C0.value + (TObjPlayer__sub_801AFDBC(arg0) * 0x24);
}

typedef char RecoveredGlobal_801D93C4_lbl_804471C0_size[sizeof(RecoveredGlobal_801D93C4_lbl_804471C0) == 0x1B0 ? 1 : -1];
u8 *get_class_stat_entry__10TObjPlayerFPv(u8 *arg0) {
    return (u8 *)&(*(RecoveredGlobal_801D93C4_lbl_804471C0 *)&lbl_804471C0).value + (get_class_index__10TObjPlayerFPv((s32)(arg0)) * 0x24);
}

typedef char RecoveredGlobal_801D93F8_lbl_804471A8_size[sizeof(RecoveredGlobal_801D93F8_lbl_804471A8) == 0x18 ? 1 : -1];
f32 get_tp_class_factor__10TObjPlayerFPv(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x890) & 0x10) {
        return lbl_805DC400;
    }
    return M2C_FIELD(((u8 *)&lbl_804471A8.value + (get_clamped_index__10TObjPlayerFPv((void *)(arg0)) * 8)), f32 *, 4);
}

typedef char RecoveredGlobal_801D9440_lbl_804471A8_size[sizeof(RecoveredGlobal_801D9440_lbl_804471A8) == 0x18 ? 1 : -1];
f32 get_class_hp_factor__10TObjPlayerFPv(void * _w0) {
    return M2C_FIELD(((u8 *)(&(*(RecoveredGlobal_801D9440_lbl_804471A8 *)&lbl_804471A8).value) + (get_clamped_index__10TObjPlayerFPv((void *)(_w0)) * 8)), f32 *, 0);
}

int get_floor_surface_type__10TObjPlayerFPv(void* p) { return get_contact_surface_type((char*)p + 0x360); }
s32 get_falz_phase__10TObjPlayerFPv(void* p) { return TBoss4DarkFalz__sub_801D94C0((void*)((char*)p + 0x7cc)); }

    extern int dark_falz_form_index;
int get_instance_count__14TBoss4DarkFalzFv(void) {  return dark_falz_form_index; }

s32 TBoss4DarkFalz__sub_801D94C0(void* p) { return *(s32*)((char*)p + 0x14); }

}
