#ifndef PSO_ENEMY_TOBJENEDARKGUNNER_H
#define PSO_ENEMY_TOBJENEDARKGUNNER_H
#include "types.h"
#include "pso/enemy/TObjEnemyCustom.h"

struct TObjEneDarkGunner : public TObjEnemyCustom {
    virtual ~TObjEneDarkGunner();
    void set_fields_24_34_from_global(void*);
    void sub_800A159C();
    void sub_800A1520();
    virtual s32 update_movement_status();
    virtual void vfunc_62();
    virtual void vfunc_61();
    virtual void vfunc_59();
    virtual void vfunc_58();
    virtual s32 update_action_hold_status();
    virtual void vfunc_28();
    f32 render_y_offset;
    u8 unknown390[0x60];
    void* children[4];
    void* child400;
    void* child404;
    u8 render_control[0x1C];
    s32 material_phase;
    u8 unknown428[4];
    void *deleting_dtor(s16 arg1);
};
typedef char DarkGunnerSize[(sizeof(TObjEneDarkGunner)==0x42C)?1:-1];
#endif
