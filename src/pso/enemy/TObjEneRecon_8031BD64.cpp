#include "types.h"

struct VBase800AFB60_8031bd64 { char pad[0x18]; };
struct VObj800AFB60_8031bd64 : VBase800AFB60_8031bd64 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {

void TObjEneRecon__vt104(u8 *arg0);
s32 post_translate_matrix(void *);
s32 set_global_param__8TObjFishFl(s32);
s32 draw_chunk_object(s32);
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
s32 pop_matrix();
s32 end_effect_render__13TParticleCtrlFv();
s32 clear_global_flag_400__9TObjEneDDFv();
s32 toggle_particle_effect__10TObjPlayerFv();
s32 update_player_state__9TObjEneDDFv(void *, s32, s32);

extern const f32 lbl_805DF3BC;
extern const f32 TObjEneRecon__data_805DF3C0;

void TObjEneRecon__vt104(u8 *arg0) {
    if (((VObj800AFB60_8031bd64 *) arg0)->m8(lbl_805DF3BC, TObjEneRecon__data_805DF3C0) != 0) {
        update_player_state__9TObjEneDDFv(arg0, 0, 0);
        set_global_param__8TObjFishFl(*(s32 *)((s8 *)arg0 + 0x24));
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
        clear_global_flag_400__9TObjEneDDFv();
        toggle_particle_effect__10TObjPlayerFv();
        draw_chunk_object(*(s32 *)((s8 *)arg0 + 0x34));
        end_effect_render__13TParticleCtrlFv();
        pop_matrix();
    }
}

}
