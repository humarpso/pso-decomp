#ifndef PSO_MISC_TMAINCURSOR_H
#define PSO_MISC_TMAINCURSOR_H

#include "types.h"
#include "pso/TObject.h"

struct TMainCursor : public TObject {
    virtual ~TMainCursor();
    void sub_8013E724(f32);
    u32 m_1c;
    void* m_20;
    void* m_24;
    u8 unk_28[0x4];
    f32 m_2c;
    u8 unk_30[0x4];
    s32 m_34;
    u8 unk_38[0x4];
    f32 m_3c;
    void* m_40;
    u8 _pad44[0x8];
    void* m_4c;
    u8 _pad50[0x10];
    void* m_60;
    void update_position();
    int check_type_and_enabled(void* _w1, void* _w2);
    void*init_lockon();
    void*init_vtable();
    void*init();
    s32 sort_actions_by_priority();
    void reset_state();
    void update_photon_chair();
    virtual void render();
    virtual void run_task();
    void reset_cursor_parts();
    static void quick_sort(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
    void reset_slots();
    void init_slots();
    s32 find_by_pos(s16 arg1, s16 arg2);
    void set_cursor_pos(u16 arg1, s32 arg2);
    static s32 get_action_cursor_priority(void *arg0, s32 arg1, s32 arg2);
    static void set_cursor_color(s32 arg0, s32 arg1, s32 arg2);
    static void set_display_flags(s32 arg0, s32 arg1, s32 arg2);
    static void setup_flags(s32 arg0, s32 arg1, s32 arg2);
    static void sort_list(s32 arg0, s32 arg1);
    u8 is_channel_active();
    int check_visible();
    u8 get_enabled();
    u8 get_type();
    s32 get_state();
    void *destroy_cursor(s16 arg1);
    void destroy_lock_on(s32 a1);
    void set_target(s32 a1);
    void set_target_index(s16 v);
    void update_cursor_pos();
    void*copy_from(void* a1);
    void set_sub_cursor_value(s32 a1);
    s32 get_index();
    void reset_slot();
    void set_type(s32 v);
    static int get_cursor_state();
    int check_field_24();
    u16 get_id();
    void*get_list();
    int update_target_sub();
    u16 get_render_flag();
    int test_flag_2_at_20();
    int init_render_flags();
    int update();
    int check_flag_1();
    u8 is_position_moved();
    int check_flag_4();
    int forward_13E338_at_60();
    int update_sub_60();
    void set_offset_y(s16 a1);
    int init_field_60();
    int get_action_palette();
    int update_action_palette();
    s32 reset();
    int get_selected_entry();
    int get_active();
    u16 get_target_id();
    int is_cursor_clear();
    void set_color_mode(s32 v);
    void set_color(s32 v);
    void set_field_0c(s32 v);
    void set_flags(s32 v);
    void set_cursor_id(s16 v);
    void set_field2(s16 v);
    void set_size(f32 v);
    f32 get_pos();
    int get_rader_map();
    void *destroy(s16 arg1);
    static void find_action_slot_for_target(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
    u8 unk_64[0x4];
};

typedef char TMainCursor_size[sizeof(TMainCursor) == 0x68 ? 1 : -1];
#endif
