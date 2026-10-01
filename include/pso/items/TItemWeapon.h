#ifndef PSO_ITEMS_TITEMWEAPON_H
#define PSO_ITEMS_TITEMWEAPON_H
#include "types.h"
#include <stddef.h>
struct WeaponVector { f32 x,y,z; };

struct WeaponObjectPrefix { u8 object[0x18]; };

struct WeaponPlayerPrefix { u8 object[0x60]; s32 heading; };

struct WeaponMotionRecord { u32 unknown; u32 frame_count; };

struct TItemWeapon : WeaponObjectPrefix {
    virtual void reserved_0();
    virtual void reserved_1();
    virtual void reserved_2();
    virtual void reserved_3();
    virtual void reserved_4();
    virtual void reserved_5();
    virtual void reserved_6();
    virtual void reserved_7();
    virtual void reserved_8();
    virtual void reserved_9();
    virtual void reserved_10();
    virtual void reserved_11();
    virtual void reserved_12();
    virtual void reserved_13();
    virtual void reserved_14();
    virtual void reserved_15();
    virtual void reserved_16();
    virtual void reserved_17();
    virtual void reserved_18();
    virtual void reserved_19();
    virtual void reserved_20();
    virtual void reserved_21();
    virtual void reserved_22();
    virtual void reserved_23();
    virtual void reserved_24();
    virtual void reserved_25();
    virtual void reserved_26();
    virtual void reserved_27();
    virtual void reserved_28();
    virtual void reserved_29();
    virtual void reserved_30();
    virtual void reserved_31();
    virtual void reserved_32();
    virtual void reserved_33();
    virtual void reserved_34();
    virtual void reserved_35();
    virtual void reserved_36();
    virtual void reserved_37();
    virtual void reserved_38();
    virtual void reserved_39();
    virtual void reserved_40();
    virtual void reserved_41();
    virtual void reserved_42();
    virtual void reserved_43();
    virtual void reserved_44();
    virtual void reserved_45();
    virtual void reserved_46();
    virtual void reserved_47();
    virtual void reserved_48();
    virtual void deliver_projectile(WeaponVector*, s32, s32, s32);
    virtual void emit_marker_effects();
    virtual void update_attack();
    virtual void update_idle();
    virtual void reserved_53();
    virtual void update_weapon();
    u8 object_to_heading[0x60-0x1C];
    s32 heading;
    u8 object_to_player[0xF0-0x64];
    WeaponPlayerPrefix* player;
    u8 equipment_to_motion[0x17C-0xF4];
    WeaponMotionRecord* motion;
    u8 equipment_to_projectile[0x188-0x180];
    s32 projectile;
    void* trails[4];
    u8 weapon_to_stage[0x1D4-0x19C];
    s32 stage;
    f32 motion_frame;
    void* parameters;
    void* material;
    u8 remaining_weapon_fields[0x1F8-0x1E4];
    void dispatch_attack_marker();
    void update_active_weapon();
};

struct WeaponMarkerPacket { s8 kind,variant; u8 pad[2]; WeaponPlayerPrefix* player; s32 unobserved[3]; };

typedef char WeaponHeadingOffset[(offsetof(TItemWeapon,heading)==0x60)?1:-1];
typedef char WeaponPlayerOffset[(offsetof(TItemWeapon,player)==0xF0)?1:-1];
typedef char WeaponMotionOffset[(offsetof(TItemWeapon,motion)==0x17C)?1:-1];
typedef char WeaponProjectileOffset[(offsetof(TItemWeapon,projectile)==0x188)?1:-1];
typedef char WeaponTrailsOffset[(offsetof(TItemWeapon,trails)==0x18C)?1:-1];
typedef char WeaponStageOffset[(offsetof(TItemWeapon,stage)==0x1D4)?1:-1];
typedef char WeaponFrameOffset[(offsetof(TItemWeapon,motion_frame)==0x1D8)?1:-1];
typedef char WeaponMaterialOffset[(offsetof(TItemWeapon,material)==0x1E0)?1:-1];
typedef char WeaponBaseSize[(sizeof(TItemWeapon)==0x1F8)?1:-1];
typedef char WeaponMarkerPacketSize[(sizeof(WeaponMarkerPacket)==0x14)?1:-1];
#endif
