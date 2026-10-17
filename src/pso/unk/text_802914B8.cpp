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
    *(f32 *)&this->unk_40 = (f32) ((*(f32 *)((s8 *)arg0 + 0x6C) * sin_table_lookup(this->m_70)) + this->m_4c);
    temp_f31 = *(f32 *)((s8 *)arg0 + 0x6C) * cos_table_lookup(this->m_70);
    this->m_3c = (f32) (temp_f31 * sin_table_lookup(*(s32 *)((s8 *)arg0 + 0x74)));
    this->m_44 = (f32) (temp_f31 * cos_table_lookup(*(s32 *)((s8 *)arg0 + 0x74)));
}
#pragma pop

}
