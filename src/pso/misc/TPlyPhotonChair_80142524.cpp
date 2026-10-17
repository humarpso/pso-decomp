#include "types.h"
#include "pso/misc/TUnk_804A7488.h"
#include "pso/misc/TPlyPhotonChair.h"

struct RecoveredGlobal_801426DC_lbl_8050BFF0 {
    s32 value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_801426DC_lbl_8058D4C0 {
    s32 value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_80142734_lbl_8050BFF0 {
    s32 value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_80142734_lbl_8058D4C0 {
    s32 value;
    u8 remaining[0xC];
};

extern "C" {
extern s32 model_render_flags;
void set_global_draw_flag_bits(s32 arg0, s32 arg1);
    extern int lbl_805D566C;
    extern int lbl_805D5670;
    extern int lbl_805D5674;
    extern int chunk_polygon_flags_or_mask;
    extern int chunk_polygon_flags_and_mask;
int TPlyPhotonChair__sub_8014270C(s32 _w0);
int TPlyPhotonChair__sub_80142720(s32 _w0);
void restore_actor_draw_lighting(void);
void setup_actor_draw_lighting(void);
s32 activate__15TPlyPhotonChairFv();
extern const f32 lbl_805DB168;
extern const f32 lbl_805DB16C;
int draw_chunk_object(void);
int TLobby__sub_80142944(void* p);
s32 copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
extern RecoveredGlobal_801426DC_lbl_8050BFF0 photon_chair_color_vec4;
extern RecoveredGlobal_801426DC_lbl_8058D4C0 model_material_color;
s32 TPlyPhotonChair__sub_80143930(void *);
void draw_model_motion(s32, s32, f32);
extern const f64 lbl_8043F298;
extern const f64 lbl_8043F2A0;
extern const f64 lbl_8043F2A8;
extern const f32 __float_nan[];
extern const f32 __float_huge[];
f64 TPlyPhotonChair__sub_80142624(f64 x);
int set_chunk_material_color(void*);
int set_chunk_material_override_pair(void*, void*);

void TPlyPhotonChair::play_sound_with_arg(void* p, void* a1) { set_global_draw_flag_bits((s32)(p), (s32)((void*)2064)); set_chunk_material_override_pair((void*)-1, (void*)2048); set_chunk_material_color(a1); }

void TPlyPhotonChair::play_sound() { set_global_draw_flag_bits((s32)(this), (s32)((void*)2064)); set_chunk_material_override_pair((void*)-1, (void*)2048); set_chunk_material_color(this); }

void TPlyPhotonChair::update_parts(void* p) { TPlyPhotonChair__sub_8014270C((s32)(p)); TPlyPhotonChair::copy_vec4_forward((s32)(p)); TPlyPhotonChair::restore_state((s32)(p)); }

void TPlyPhotonChair::update_parts2(void* p) { TPlyPhotonChair::save_state((s32)(p)); TPlyPhotonChair::copy_vec4_reverse((s32)(p)); TPlyPhotonChair__sub_80142720((s32)(p)); }

#pragma push
#pragma fp_contract on
f64 TPlyPhotonChair__sub_80142624(f64 x) {
    if (x > lbl_8043F298) {
        f64 g = __frsqrte(x);
        g = lbl_8043F2A0 * g * (lbl_8043F2A8 - x * (g * g));
        g = lbl_8043F2A0 * g * (lbl_8043F2A8 - x * (g * g));
        g = lbl_8043F2A0 * g * (lbl_8043F2A8 - x * (g * g));
        g = lbl_8043F2A0 * g * (lbl_8043F2A8 - x * (g * g));
        return x * g;
    }
    if (lbl_8043F298 == x) {
        return lbl_8043F298;
    }
    if (x != lbl_8043F298) {
        return __float_nan[0];
    }
    return __float_huge[0];
}
#pragma pop

#pragma push
#pragma scheduling off
void set_global_draw_flag_bits(s32 arg0, s32 arg1) {
    model_render_flags |= arg1;
}
#pragma pop

void TPlyPhotonChair::restore_state(s32 _w0) { (*(int *)&model_render_flags) = lbl_805D566C; }

typedef char RecoveredGlobal_801426DC_lbl_8050BFF0_size[sizeof(RecoveredGlobal_801426DC_lbl_8050BFF0) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_801426DC_lbl_8058D4C0_size[sizeof(RecoveredGlobal_801426DC_lbl_8058D4C0) == 0x10 ? 1 : -1];
void TPlyPhotonChair::copy_vec4_forward(s32 _w0) {
    copy_vec4__13TRaderMapCoreFPvPv((void *) (&model_material_color.value), (void *) (&photon_chair_color_vec4.value));
}

int TPlyPhotonChair__sub_8014270C(s32 _w0) { chunk_polygon_flags_and_mask = lbl_805D5670; chunk_polygon_flags_or_mask = lbl_805D5674; return lbl_805D5670; }
int TPlyPhotonChair__sub_80142720(s32 _w0) { lbl_805D5670 = chunk_polygon_flags_and_mask; lbl_805D5674 = chunk_polygon_flags_or_mask; return chunk_polygon_flags_and_mask; }

typedef char RecoveredGlobal_80142734_lbl_8050BFF0_size[sizeof(RecoveredGlobal_80142734_lbl_8050BFF0) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_80142734_lbl_8058D4C0_size[sizeof(RecoveredGlobal_80142734_lbl_8058D4C0) == 0x10 ? 1 : -1];
void TPlyPhotonChair::copy_vec4_reverse(s32 _w0) {
    copy_vec4__13TRaderMapCoreFPvPv((void *) (&(*(RecoveredGlobal_80142734_lbl_8050BFF0 *)&photon_chair_color_vec4).value), (void *) (&(*(RecoveredGlobal_80142734_lbl_8058D4C0 *)&model_material_color).value));
}

void TPlyPhotonChair::save_state(s32 _w0) { lbl_805D566C = (*(int *)&model_render_flags); }
void restore_actor_draw_lighting(void) {  }
void setup_actor_draw_lighting(void) {  }

void TPlyPhotonChair::draw_model() {
    draw_model_motion(((s32)get_id()), TPlyPhotonChair__sub_80143930(this), get_float_c());
}

void TPlyPhotonChair::update_scale_state() {
    u8 *arg0 = (u8 *)this;
    f32 var_f31;
    s32 temp_r0;
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x18);
    var_f31 = *(f32 *)&this->m_next - *(f32 *)&this->m_down;
    switch (temp_r0) {
    case 0:
        if (var_f31 < lbl_805DB168) {
            var_f31 += *(f32 *)&this->m_up;
        }
        *(f32 *)&this->m_next = var_f31;
        return;
    case 2:
        if (var_f31 <= lbl_805DB168) {
            var_f31 = lbl_805DB168;
            activate__15TPlyPhotonChairFv();
        }
        *(f32 *)&this->m_next = var_f31;
    case 1:
        return;
    }
}
void TPlyPhotonChair::update_bob_motion() {
    u8 *arg0 = (u8 *)this;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 var_f31;
    s32 temp_r0;
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x18);
    var_f31 = *(f32 *)&this->m_next + *(f32 *)&this->m_down;
    switch (temp_r0) {
    case 0:
        temp_f0 = *(f32 *)&this->m_up;
        if (var_f31 >= temp_f0) {
            var_f31 -= temp_f0;
        }
        *(f32 *)&this->m_next = var_f31;
        return;
    case 2:
        temp_f0_2 = *(f32 *)&this->m_up - lbl_805DB16C;
        if (var_f31 >= temp_f0_2) {
            var_f31 = temp_f0_2;
            activate__15TPlyPhotonChairFv();
        }
        *(f32 *)&this->m_next = var_f31;
    case 1:
        return;
    }
}
void TUnk_804A7488::vfunc_3() { ((TPlyPhotonChair *)this)->get_id(); draw_chunk_object(); }
int TLobby__sub_80142944(void* p) { return (*(u32*)((char*)p + 0xb0) >> 4) & 0x1; }

}
