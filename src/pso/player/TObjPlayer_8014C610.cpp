#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 set_global_param__8TObjFishFl(s32);
s32 render_with_position_override__10TObjPlayerFPUcl(void *, s32, s32);
s32 translate_matrix_vec3(s32, void *);
s32 rotate_matrix_y(s32, s32);
s32 push_matrix_from(s32);
s32 pop_matrix();
s32 draw__16TObjEneRe7BeruraFv(void *);

extern s32 model_render_flags;

struct Base_8014C610 { char pad[0x18]; };
struct VObj_8014C610 : Base_8014C610 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

void TObjPlayer::draw_if_visible() {
    u8 *arg0 = (u8 *)this;
    if ((((VObj_8014C610 *)arg0)->m8(*(f32 *)((s8 *)arg0 + 0x398), *(f32 *)((s8 *)arg0 + 0x39C)) != 0) && ((s32) *(s32 *)((s8 *)arg0 + 0x390) == 1)) {
        model_render_flags |= 1;
        set_global_param__8TObjFishFl(*(s32 *)((s8 *)arg0 + 0x24));
        push_matrix_from(0);
        translate_matrix_vec3(0, arg0 + 0x38);
        rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
        draw__16TObjEneRe7BeruraFv(arg0);
        pop_matrix();
        model_render_flags &= 0xFFFFFFFE;
        render_with_position_override__10TObjPlayerFPUcl(arg0, 0, 0);
    }
}

}
