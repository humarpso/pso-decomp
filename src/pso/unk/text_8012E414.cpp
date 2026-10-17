#include "types.h"
#include "pso/player/TObjPlayer.h"

struct RecoveredGlobal_8012E414_lbl_804A5D10 {
    s32 value;
    u8 remaining[0x14];
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
void __ct__7TObjectFP7TObject(void *, void *);
s32 rand(void);
extern RecoveredGlobal_8012E414_lbl_804A5D10 lbl_804A5D10;
extern const f32 lbl_805DAF74;
extern const f32 lbl_805DAF78;
#pragma push
#pragma opt_common_subs off
#pragma fp_contract on
typedef char RecoveredGlobal_8012E414_lbl_804A5D10_size[sizeof(RecoveredGlobal_8012E414_lbl_804A5D10) == 0x18 ? 1 : -1];
u8 *TObjPlayer::construct_weapon_casing(u8 *arg1, u8 *arg2, u8 *arg3, u8 *arg4, u8 *arg5) {
    __ct__7TObjectFP7TObject(((u8 *)this), arg1);
    *(s32 **)((s8 *)((u8 *)this) + 0x18) = &lbl_804A5D10.value;
    *(s32 *)((s8 *)((u8 *)this) + 0x1C) = ((TObjPlayer *)arg2)->get_field_d8();
    VecCopy__FP3VecPC3Vec(((u8 *)this) + 0x2C, arg3);
    ((TObjPlayer *)(((u8 *)this) + 0x38))->copy_xyz(arg5);
    VecCopy__FP3VecPC3Vec(((u8 *)this) + 0x20, arg4);
    *(f32 *)&this->m_20 = (f32) (*(f32 *)&this->m_20 * ((lbl_805DAF74 * (lbl_805DAF78 * (f32) rand())) + lbl_805DAF74));
    *(f32 *)&this->texture_id = (f32) (*(f32 *)&this->texture_id * ((lbl_805DAF74 * (lbl_805DAF78 * (f32) rand())) + lbl_805DAF74));
    *(f32 *)&this->m_28 = (f32) (*(f32 *)&this->m_28 * ((lbl_805DAF74 * (lbl_805DAF78 * (f32) rand())) + lbl_805DAF74));
    return ((u8 *)this);
}
#pragma pop

}
