#include "types.h"
#include "pso/misc/TLoadingCur.h"
#include "pso/unk/text_80086FE0.h"
#include "pso/object/TObject_80019A50.h"
#include "pso/player/TObjPlayer_80141D1C.h"
#include "pso/unk/text_803D96A8.h"
#include "pso/system/vector.h"

#include <stddef.h>

struct Stack_8001D0A0 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_8001D0A0___vt__11TLoadingCur {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8001D0A0_lbl_804FF5E8 {
    s32 value;
    u8 remaining[0x24];
};

struct Pad_8001CD90 {
    char pad0[0x20];
    u32 f20;
    char pad24[0x10];
    s16 s34;
    s16 s36;
    s16 s38;
    s16 s3A;
    char pad3C[0x124];
    u8 f160[0x20];
};

struct Self_8001CD90 {
    char pad0[0x20];
    f32 f20;
    f32 f24;
    f32 f28;
    char pad2C[0xC];
    f32 f38;
    f32 f3C;
    f32 f40;
    u8 f44[0xC];
};

struct Obj_8001CCD4 { u8 pad0[0x38]; f32 f38; f32 f3c; f32 f40; };

struct V2_8001CCD4 { f32 x, y; };

extern "C" {
extern const f32 lbl_805D7E94;
extern const f32 lbl_805D7E98;
extern const f32 TLoadingCur__data_805D7E9C;
extern const f32 lbl_805D7EA0;
extern const f32 lbl_805D7EA4;
s32 __ct__7TObjectFP7TObject(void *, void *);
extern s32 __vt__11TLoadingCur[];
extern RecoveredGlobal_8001D0A0_lbl_804FF5E8 lbl_804FF5E8;
extern s32 TLoadingCur__class_name;
extern const f32 lbl_805D7E90;
s32 is_split_screen(void);
void calc_loading_cursor_pos(void *, void *);
s32 is_flag_set__11TLoadingCurFv(void *, s32);
s32 play_persistent_sound(int, void *, void *, int, int);
extern Pad_8001CD90 controller_input_state;
extern const f32 lbl_805D7EB0;
extern const f32 lbl_805D7EB4;
extern const f32 lbl_805D7EB8;
extern const f32 lbl_805D7EBC;
s32 project_world_to_screen(int, void *, void *);
void push_matrix(void);
extern const f32 lbl_805D7EA8;
extern const f32 lbl_805D7EAC;

s32 TLoadingCur::calc_clamp_offset(s32 arg0, u8 *arg1, u8 *arg2) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    temp_f1_2 = *(f32 *)((s8 *)arg1 + 0);
    if (temp_f1_2 < lbl_805D7E94) {
        *(f32 *)((s8 *)arg2 + 0) = (f32) (lbl_805D7E94 - temp_f1_2);
    } else if (temp_f1_2 > lbl_805D7E98) {
        *(f32 *)((s8 *)arg2 + 0) = (f32) (lbl_805D7E98 - temp_f1_2);
    } else {
        *(f32 *)((s8 *)arg2 + 0) = (f32) TLoadingCur__data_805D7E9C;
    }
    temp_f1_3 = *(f32 *)((s8 *)arg1 + 4);
    if (temp_f1_3 < lbl_805D7EA0) {
        *(f32 *)((s8 *)arg2 + 4) = (f32) (lbl_805D7EA0 - temp_f1_3);
    } else if (temp_f1_3 > lbl_805D7EA4) {
        *(f32 *)((s8 *)arg2 + 4) = (f32) (lbl_805D7EA4 - temp_f1_3);
    } else {
        *(f32 *)((s8 *)arg2 + 4) = (f32) TLoadingCur__data_805D7E9C;
    }
    temp_f0 = *(f32 *)((s8 *)arg2 + 0);
    temp_f1 = *(f32 *)((s8 *)arg2 + 4);
    return (u32)__cntlzw((u32)((((temp_f0 * temp_f0) + (temp_f1 * temp_f1)) <= TLoadingCur__data_805D7E9C))) >> 5;
}

int TLoadingCur::sub_8001CCD4() {
    Obj_8001CCD4 *self = (Obj_8001CCD4 *)this;
    f32 sp10[2];
    V2_8001CCD4 v;
    push_matrix();
    project_world_to_screen(0, (u8 *)self + 0x2c, sp10);
    pop_matrix();
    if (TLoadingCur::calc_clamp_offset((s32)((s32)self), (u8 *)((u8 *)sp10), (u8 *)((u8 *)&v)) != 0) {
        f32 t[3];
        t[0] = v.x;
        t[1] = v.y;
        t[2] = TLoadingCur__data_805D7E9C;
        t[0] *= lbl_805D7EA8;
        t[1] *= lbl_805D7EAC;
        t[2] *= lbl_805D7EA8;
        self->f38 += t[0];
        this->m_3c += t[1];
        self->f40 += t[2];
    }
}

void TLoadingCur::render() { { (void)(sub_8001CCD4()); return; } }

#pragma push
#pragma fp_contract on
#pragma opt_propagation off
void TLoadingCur::run_task() {
    Self_8001CD90 *self = (Self_8001CD90 *)this;
    u8 sp8[0xC];
    f32 x;
    f32 y;
    u32 flags;
    void *p;
    x = TLoadingCur__data_805D7E9C;
    y = x;
    x += lbl_805D7EB0 * (f32)controller_input_state.s34;
    y -= lbl_805D7EB0 * (f32)controller_input_state.s36;
    x += lbl_805D7EB0 * (f32)controller_input_state.s38;
    y -= lbl_805D7EB0 * (f32)controller_input_state.s3A;
    flags = controller_input_state.f20;
    if (flags & 0x10) {
        y += lbl_805D7EB4;
    }
    if (flags & 0x20) {
        y -= lbl_805D7EB4;
    }
    if (flags & 0x80) {
        x += lbl_805D7EB4;
    }
    if (flags & 0x40) {
        x -= lbl_805D7EB4;
    }
    p = controller_input_state.f160;
    if (is_flag_set__11TLoadingCurFv(p, 0x10) != 0) {
        y += lbl_805D7EB4;
    }
    if (is_flag_set__11TLoadingCurFv(p, 0x20) != 0) {
        y -= lbl_805D7EB4;
    }
    if (is_flag_set__11TLoadingCurFv(p, 0x80) != 0) {
        x += lbl_805D7EB4;
    }
    if (is_flag_set__11TLoadingCurFv(p, 0x40) != 0) {
        x -= lbl_805D7EB4;
    }
    self->f38 += lbl_805D7EB8 * x;
    this->m_3c += lbl_805D7EB8 * y;
    self->f40 += TLoadingCur__data_805D7E9C;
    this->m_20 += self->f38;
    self->f24 += this->m_3c;
    self->f28 += self->f40;
    self->f38 *= lbl_805D7EBC;
    this->m_3c *= lbl_805D7EBC;
    self->f40 *= lbl_805D7EBC;
    calc_loading_cursor_pos(sp8, this);
    VecCopy((Vec *)self->f44, (const Vec *)sp8);
    update_camera_facing_offset();
    if (TLoadingCur__data_805D7E9C != x || TLoadingCur__data_805D7E9C != y) {
        if (is_split_screen() != 0) {
            play_persistent_sound(0x53C10, this, (u8 *)this + 0x2C, 0, 1);
        } else {
            play_persistent_sound(0x53C10, this, (u8 *)this + 0x2C, 0, 0);
        }
    }
}
#pragma pop

}
TLoadingCur::~TLoadingCur() {
    if (*(void **)((s8 *)this + 0x1C) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)this + 0x1C)); *(s32 *)((s8 *)this + 0x1C) = 0; }
}

#pragma push
#pragma fp_contract on
typedef char RecoveredGlobal_8001D0A0___vt__11TLoadingCur_size[sizeof(RecoveredGlobal_8001D0A0___vt__11TLoadingCur) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8001D0A0_lbl_804FF5E8_size[sizeof(RecoveredGlobal_8001D0A0_lbl_804FF5E8) == 0x28 ? 1 : -1];
u8 *TLoadingCur__ct(u8 *object, s32 arg1) {
    typedef char sp8_offset[(offsetof(Stack_8001D0A0, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8001D0A0, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8001D0A0, sp10) == 0x8) ? 1 : -1];
    Stack_8001D0A0 stack;
    __ct__7TObjectFP7TObject((void *)object, (void *)arg1);
    *(s32 **)((s8 *)object + 0x18) = &(*(RecoveredGlobal_8001D0A0___vt__11TLoadingCur *)&__vt__11TLoadingCur).value;
    *(s32 *)((s8 *)object + 0) = (s32) TLoadingCur__class_name;
    *(f32 *)((s8 *)object + 0x20) = (f32) TLoadingCur__data_805D7E9C;
    *(f32 *)((s8 *)object + 0x24) = (f32) TLoadingCur__data_805D7E9C;
    *(f32 *)((s8 *)object + 0x28) = (f32) TLoadingCur__data_805D7E9C;
    *(f32 *)((s8 *)object + 0x38) = (f32) TLoadingCur__data_805D7E9C;
    *(f32 *)((s8 *)object + 0x3C) = (f32) TLoadingCur__data_805D7E9C;
    *(f32 *)((s8 *)object + 0x40) = (f32) TLoadingCur__data_805D7E9C;
    *(f32 *)((s8 *)object + 0x44) = (f32) ((lbl_805D7E90 * *(f32 *)((s8 *)&lbl_804FF5E8.value + 0xC)) + *(f32 *)((s8 *)&lbl_804FF5E8.value + 0));
    *(f32 *)((s8 *)object + 0x48) = (f32) ((lbl_805D7E90 * *(f32 *)((s8 *)&lbl_804FF5E8.value + 0x10)) + *(f32 *)((s8 *)&lbl_804FF5E8.value + 4));
    *(f32 *)((s8 *)object + 0x4C) = (f32) ((lbl_805D7E90 * *(f32 *)((s8 *)&lbl_804FF5E8.value + 0x14)) + *(f32 *)((s8 *)&lbl_804FF5E8.value + 8));
    *(f32 *)((s8 *)object + 0x50) = (f32) -*(f32 *)((s8 *)&lbl_804FF5E8.value + 0xC);
    *(f32 *)((s8 *)object + 0x54) = (f32) -*(f32 *)((s8 *)&lbl_804FF5E8.value + 0x10);
    *(f32 *)((s8 *)object + 0x58) = (f32) -*(f32 *)((s8 *)&lbl_804FF5E8.value + 0x14);
    stack.sp8 = 0;
    stack.spC = 0;
    stack.sp10 = 0;
    direction_to_rotation_xz((object + 0x50), (&stack.sp8), (&stack.sp10));
    *(s32 *)((s8 *)object + 0x1C) = (s32)fn_80086FE0((object + 0x20), (&stack.sp8), 0x16, 1);
    return object;
}
#pragma pop

