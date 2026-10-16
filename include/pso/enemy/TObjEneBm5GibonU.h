#ifndef PSO_ENEMY_TOBJENEBM5GIBONU_H
#define PSO_ENEMY_TOBJENEBM5GIBONU_H

#include "types.h"
#include "pso/enemy/TObjEneDD_ST.h"

struct TObjEneBm5GibonU : public TObjEneDD_ST {
    virtual ~TObjEneBm5GibonU();
    virtual void vfunc_88();
    virtual s32 vfunc_83();
    virtual void render_debug();
    void update_center_position();
    void vfunc_63();
    void vfunc_62();
    void vfunc_61();
    void vfunc_28();
    u8 unk_374[0x30];
    void* m_3c0;
    u8 _pad3C4[0x8];
    void* m_3cc;
    u8 _pad3D0[0x8];
    void* m_3d8;
    u8 _pad3DC[0x18];
    void* m_3f4;
    u8 _pad3F8[0x6C];
    u32 m_464;
    u8 _pad468[0xC];
    u16 m_474;
    u8 _pad476[0x2];
    u32 m_478;
    void* m_47c;
    u8 _pad480[0x8];
    void* m_488;
    u8 _pad48C[0x20];
    u32 m_4ac;
    void* m_4b0;
    u8 _pad4B4[0x58];
    u32 m_50c;
    u32 m_510;
    u16 m_514;
    u8 _pad516[0x2];
    u32 m_518;
    u32 m_51c;
    u32 m_520;
    u32 m_524;
    u32 m_528;
    u32 m_52c;
    u8 _pad530[0x34];
    u32 m_564;
    void forward_hit_to_node_list();
    void init_child_node();
    static void release_static_resource();
    static void *create(void *arg0);
    static void load_resources();
    void forward_hit(void* a1);
    void init_child(void* a1);
    void reset_fields();
    void*reset();
    void set_field8_from_obj(s32 arg1);
    void push_list_node(void **arg1, void **arg2);
    void unlink_list_node(void ***arg1, void **arg2);
    static s32 destroy(s32 arg0, s16 arg1);
    static void register_global_objects();
    void clear_flag_and_update();
    s32 check_and_update();
    s32 try_activate();
    u8 unk_54C[0x1C];
    s32 get_clamped_level();
    int get_attack_state(void * _w1);
    static void advance_anim_frame();
    void handle_message(s32 msg);
    void state_cast_technique(s32 arg1);
    void run_idle_state(s32 arg1);
    void handle_state(s32 arg1);
    void damage_linked_entity();
    void damage_linked_entity_type10();
    s32 play_sound_variant();
    void set_flag();
    void set_anim_by_state();
    void select_attack_by_range();
    void approach_target(f32 farg0);
    s32 face_target();
};

typedef char TObjEneBm5GibonU_size[sizeof(TObjEneBm5GibonU) == 0x568 ? 1 : -1];
#endif
