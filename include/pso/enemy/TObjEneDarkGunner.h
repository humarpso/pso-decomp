#ifndef PSO_ENEMY_TOBJENEDARKGUNNER_H
#define PSO_ENEMY_TOBJENEDARKGUNNER_H
#include "types.h"
#include "pso/enemy/TObjEnemyCustom.h"

struct TObjEneDarkGunner : public TObjEnemyCustom {
    virtual ~TObjEneDarkGunner();
    f32 render_y_offset;
    u8 unknown390[0x60];
    void* children[4];
    void* child400;
    void* child404;
    u8 render_control[0x1C];
    s32 material_phase;
    u8 unknown428[4];
    void decay_timer_and_destroy();
    void *deleting_dtor(s16 arg1);};
typedef char DarkGunnerSize[(sizeof(TObjEneDarkGunner)==0x42C)?1:-1];
#endif
