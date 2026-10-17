#include "types.h"
#include "pso/boss/TBoss2DeRolLe.h"
#include "pso/item/TItemEffArmor_80107DA4.h"
#include "pso/object/TObjLight_80133568.h"
#include "pso/object/TObject_80019A50.h"
#include "pso/system/ChunkMaterialState.h"
#include "pso/unk/text_803D96A8.h"
#include "pso/unk/TUnk_8049EFB8.h"
#include "pso/system/vector.h"
#include "pso/item/TItemEffArmor.h"
#include "pso/misc/TNowLoading.h"
#include "pso/player/TObjPlayer.h"

struct RecoveredGlobal_80107DA4_lbl_8049EFB8 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_80107DF0_lbl_8050BEC0 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_80107DF0_lbl_8058D4C0 {
    s32 value;
    u8 remaining[0xC];
};

extern "C" {
u16 obj_getField1c(void *);
extern const f32 TItemEffArmor__data_805DAAEC;
extern const f32 lbl_805DAAF0;
extern const f32 lbl_805DAAF4;
void __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_80107DA4_lbl_8049EFB8 lbl_8049EFB8;
s32 scale_matrix(int, f32, f32, f32);
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 post_translate_matrix(void *);
s32 draw_ginja_model_with_motion(int, int, f32);
extern RecoveredGlobal_80107DF0_lbl_8050BEC0 saved_model_draw_color;
extern RecoveredGlobal_80107DF0_lbl_8058D4C0 model_material_color;
extern s32 lbl_805D5660;
extern s32 model_render_flags;

typedef char RecoveredGlobal_80107DA4_lbl_8049EFB8_size[sizeof(RecoveredGlobal_80107DA4_lbl_8049EFB8) == 0x18 ? 1 : -1];
u8 *fn_80107DA4(u8 *arg0, u8 *arg1, s16 arg2) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = &lbl_8049EFB8.value;
    *(s32 *)((s8 *)arg0 + 0x1C) = 0;
    *(s16 *)&((TUnk_8049EFB8 *)arg0)->m_20 = arg2;
    return arg0;
}

typedef char RecoveredGlobal_80107DF0_lbl_8050BEC0_size[sizeof(RecoveredGlobal_80107DF0_lbl_8050BEC0) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_80107DF0_lbl_8058D4C0_size[sizeof(RecoveredGlobal_80107DF0_lbl_8058D4C0) == 0x10 ? 1 : -1];
void TItemEffArmor::render() {
    u8 *arg0 = (u8 *)this;
    f32 temp_f1;
    push_matrix();
    post_translate_matrix((u8 *)&this->m_2c);
    rotate_matrix_y(0, this->m_68);
    temp_f1 = *(f32 *)&this->unk_28;
    scale_matrix(0, temp_f1, TItemEffArmor__data_805DAAEC, temp_f1);
    lbl_805D5660 = model_render_flags;
    model_render_flags |= 0x10;
    copy_vec4__13TRaderMapCoreFPv(&saved_model_draw_color.value, &model_material_color.value);
    set_chunk_material_color__13TUnk_80494AE0Fv((f32 *)(arg0 + 0x38));
    TObjPlayer::notify_fish_if_valid(this->m_78);
    draw_ginja_model_with_motion(this->m_70, this->m_74, this->m_24);
    copy_vec4__13TRaderMapCoreFPv(&model_material_color.value, &saved_model_draw_color.value);
    model_render_flags = lbl_805D5660;
    pop_matrix();
}

void TItemEffArmor::run_task() {
    u8 *arg0 = (u8 *)this;
    u8 *temp_r3;
    u8 *temp_r3_2;
    u8 *temp_r4;
    this->m_68 = (this->m_68 + 0x139D);
    temp_r4 = (u8 *)this->m_6c;
    if (temp_r4 != NULL) {
        VecCopy((Vec *)(arg0 + 0x2C), (const Vec *)(temp_r4 + 0x38));
    }
    *(f32 *)((s8 *)arg0 + 0x30) = (f32) (*(f32 *)((s8 *)arg0 + 0x30) + ((this->m_24 * this->m_58) / lbl_805DAAF0));
    temp_r3 = (u8 *)this->m_1c;
    if (temp_r3 != NULL) {
        ((TNowLoading *)temp_r3)->copy_pos((u8 *)&this->m_2c);
    }
    *(f32 *)&this->m_38 = (f32) (TItemEffArmor__data_805DAAEC - (this->m_24 / lbl_805DAAF0));
    temp_r3_2 = (u8 *)this->m_6c;
    if (temp_r3_2 != NULL) {
        publish_actor_light_scalars((obj_getField1c(temp_r3_2)), this->m_60, (f32) (*(f32 *)&this->unk_5C));
    }
    if (*(f32 *)&this->unk_5C >= TItemEffArmor__data_805DAAEC) {
        *(f32 *)&this->unk_64 = (f32) (lbl_805DAAF4 * *(f32 *)&this->unk_64);
    }
    *(f32 *)&this->unk_5C = (f32) (*(f32 *)&this->unk_5C + *(f32 *)&this->unk_64);
    if (lbl_805DAAF0 == this->m_24) {
        queue_destruction__7TObjectFv(arg0);
    }
    this->m_24 = (f32) (this->m_24 + TItemEffArmor__data_805DAAEC);
}

}
