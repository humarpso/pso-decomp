#include "types.h"
#include "pso/camera/TUnk_804DAB08.h"

extern "C" {
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
#pragma push
#pragma fp_contract on
void TUnk_804DAB08::calc_spherical_camera_position() {
    u8 *arg0 = (u8 *)this;
    f32 temp_f31;
    this->position.y = (f32) ((*(f32 *)((s8 *)arg0 + 0x6C) * sin_table_lookup(this->m_70)) + this->target.y);
    temp_f31 = *(f32 *)((s8 *)arg0 + 0x6C) * cos_table_lookup(this->m_70);
    this->position.x = (f32) (temp_f31 * sin_table_lookup(*(s32 *)((s8 *)arg0 + 0x74)));
    this->position.z = (f32) (temp_f31 * cos_table_lookup(*(s32 *)((s8 *)arg0 + 0x74)));
}
#pragma pop

}
