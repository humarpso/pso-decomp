#ifndef PSO_ITEM_TITEM_H
#define PSO_ITEM_TITEM_H

#include "types.h"
#include <stddef.h>
#include "pso/object/TObjMotion.h"

struct TItem : public TUnk_804AF8A0 {
    virtual ~TItem();
    virtual void vfunc_14();
    virtual void vfunc_15();
    virtual void vfunc_16();
    virtual void vfunc_17();
    virtual void vfunc_18();
    virtual void vfunc_19();
    virtual void vfunc_20();
    virtual s32 vfunc_21(u8 *, s32, s32, s32);
    virtual void vfunc_22();
    virtual void vfunc_23();
    virtual void vfunc_24();
    virtual void vfunc_25();
    virtual void vfunc_26();
    virtual void vfunc_27();
    virtual void vfunc_28();
    virtual void vfunc_29();
    virtual void vfunc_30();
    virtual void vfunc_31();
    virtual int vfunc_32();
    virtual int vfunc_33();
    virtual void vfunc_34();
    virtual int vfunc_35();
    virtual int vfunc_36();
    virtual int vfunc_37();
    virtual int vfunc_38();
    virtual int vfunc_39();
    virtual void vfunc_40();
    virtual int vfunc_41();
    virtual void vfunc_42();
    virtual int vfunc_43();
    s32 get_item_flags();
    void sub_80102C68();
    void sub_80102C58();
    u8 get_field_ec();
    void refresh_if_current_player();
    void sub_8010043C(u8);
    void apply_item_flags(s32);
    void assign_item_id();
    virtual void render_shadows();
    void render_ground();
    void render_owned();
    void render_following_owner();
    void* m_ac;
    u8 unk_B0[0x24];
    u32 m_d4;
    u32 m_d8;
    u32 m_dc;
    u32 m_e0;
    u16 m_e4;
    u16 m_e6;
    u16 m_e8;
    u8 m_ea;
    u8 render_mode;
    u8 m_ec;
    u8 m_ed;
    u8 m_ee;
    u8 model_index;
    u32 m_f0;
    u32 m_f4;
    void dispatch_state();
    virtual void run_task();
    void use_combination_recipe();
    void notify_owner(s32 arg1);
    void apply_switch_attack(s32 arg1);
    static void update_pickup_flag(s32 arg0);
    void update_item_data();
    void copy_item_data_and_process();
    void unregister_from_world();
    void set_mode(s8 arg1);
    s32 register_attack();
    void calc_display_grade();
    s32 unregister_item();
    s32 insert_sorted_by_id();
    s32 copy_to_item_data(void *arg1);
    void snap_to_ground();
    static void send_owner_item_packet(void *item, u16 client_id);
    void init_owner(u16 arg1);
    void assign_id_and_init(s32 arg1, s32 arg2);
    void send_field_state(s16 arg1, s32 arg2);
    void update_timer();
    static void push_to_player_list(void* a0);
    void update_owner_visibility();
    void set_owner_client(u16 arg1);};

typedef char TItemModeOffset[(offsetof(TItem, render_mode) == 0xEB) ? 1 : -1];
typedef char TItemModelOffset[(offsetof(TItem, model_index) == 0xEF) ? 1 : -1];
typedef char TItemIdOffset[(offsetof(TItem, m_d8) == 0xD8) ? 1 : -1];
typedef char TItemSize[(sizeof(TItem) == 0xF8) ? 1 : -1];

#endif
