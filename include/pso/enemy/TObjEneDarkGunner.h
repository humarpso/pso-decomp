#ifndef PSO_ENEMY_TOBJENEDARKGUNNER_H
#define PSO_ENEMY_TOBJENEDARKGUNNER_H
#include "types.h"

struct TObjEneDarkGunner {
    void* class_tag;
    u8 unknown004[0x14];
    void* dispatch;
    u8 unknown01C[8];
    s32 texture_id;
    u8 unknown028[0x10];
    f32 position[3];
    u8 unknown044[0x1C];
    s32 rotation_y;
    s32 rotation_z;
    u8 unknown068[0x320];
    u32 render_flags;
    f32 render_y_offset;
    u8 unknown390[0x60];
    void* children[4];
    void* child400;
    void* child404;
    u8 render_control[0x1C];
    s32 material_phase;
    u8 unknown428[4];
};
typedef char DarkGunnerSize[(sizeof(TObjEneDarkGunner)==0x42C)?1:-1];
#endif
