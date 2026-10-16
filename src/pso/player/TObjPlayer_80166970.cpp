#include "types.h"
#include "pso/misc/TOFenceAncient01.h"
#include "pso/player/TObjPlayer.h"
#include "pso/object/TObjFish.h"

extern "C" {

struct VBase18_80166970 { char pad[0x18]; };
struct VObj18_80166970 : VBase18_80166970 {
    virtual s32 m0();
    virtual s32 m1();
    virtual s32 m2();
    virtual s32 m3();
    virtual s32 m4();
    virtual s32 m5();
    virtual s32 m6();
    virtual s32 m7();
    virtual s32 m8(f32, f32);
};

s32 scale_current_matrix(void *);
s32 post_translate_matrix(void *);
s32 draw_ginja_model(int);
s32 rotate_matrix_z(int, int);
s32 rotate_matrix_x(int, int);
s32 draw_ginja_model_with_motion(void *, int, f32);
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
void __dl__7TObjectFPv(void *);
void destroy_key_base__5TOKeyFs(void *, int);
void init_map_object_base(void *);

void TObjPlayer::on_zone_exit() {
    u8 *arg0 = (u8 *)this;
    u8 *temp_r31;

    if (((VObj18_80166970 *) arg0)->m8(*(f32 *)&this->m_c0, *(f32 *)((s8 *)arg0 + 0xC4)) != 0) {
        push_matrix();
        post_translate_matrix((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (this->m_60));
        TObjFish::set_global_param((int) (*(s32 *)((s8 *)arg0 + 0x24)));
        if ((s32) this->m_d0 == 0) {
            draw_ginja_model_with_motion((void *) (*(void * *)&this->_pad34), (int) (*(s32 *)((s8 *)arg0 + 0xBC)), (f32) (*(f32 *)((s8 *)arg0 + 0xB0)));
        } else {
            temp_r31 = (unsigned char *) (*(void * *)&this->_pad34);
            push_matrix();
            post_translate_matrix((void *) (temp_r31 + 8));
            rotate_matrix_z((int) (0), (int) (*(s32 *)((s8 *)temp_r31 + 0x1C)));
            rotate_matrix_x((int) (0), (int) (*(s32 *)((s8 *)temp_r31 + 0x14)));
            rotate_matrix_y((int) (0), (int) (*(s32 *)((s8 *)temp_r31 + 0x18)));
            scale_current_matrix((void *) (temp_r31 + 0x20));
            ::draw_ginja_model((int) (*(s32 *)((s8 *)temp_r31 + 4)));
            pop_matrix();
        }
        pop_matrix();
    }
}

extern s32 lbl_804B1B80[];

void *TOFenceAncient01::destroy(s16 arg1) {
    if (this != NULL) {
        *(s32 **)((s8 *)this + 0x18) = lbl_804B1B80;
        destroy_key_base__5TOKeyFs(this, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(this);
        }
    }
    return this;
}

extern s32 lbl_804B1B80[];

void *TOFenceAncient01::init_fields() {
    init_map_object_base(this);
    *(s32 **)((s8 *)this + 0x18) = lbl_804B1B80;
    *(u32 *)&this->unk_AC = 0;
    this->m_cc = -1;
    *(u32 *)((s8 *)this + 0xC8) = 0;
    *(u32 *)((s8 *)this + 0xD0) = 0;
    this->m_d4 = 0;
    return this;
}

}
