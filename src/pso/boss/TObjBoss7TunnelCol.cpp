#include "types.h"
#include "pso/boss/TObjBoss7TunnelCol.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

struct VOff_802F1BEC_arg0_802F1B7C { char pad_0[0xAC]; char f_AC[1]; };
struct VOff_802F1C68_arg0_802f1c68_802F1B7C { char pad_0[0x48]; char f_48[1]; };

void *TObjBoss7TunnelCol__ct(void *arg0);
void *__dt__18TObjBoss7TunnelColFv(void *arg0, s16 arg1);
void rotate_matrix_yxz(void *, void *, void *, void *);
void unregister_object_by_id(void *);
void set_matrix_identity(void *);
void __dl__7TObjectFPv(void *);
void clear_obj_links(void *);
void fn_8002B630(void *, void *);
s32 get_mode__11TCameraCtrlFPv(s32 *);
void initialize_linked_object_reference(void *, void *);
void translate_matrix_vec3(void *, void *);

void TObjBoss7TunnelCol::render() {  }
void TObjBoss7TunnelCol::run_task() {  }

extern s32 __vt__18TObjBoss7TunnelCol[];

void *__dt__18TObjBoss7TunnelColFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__18TObjBoss7TunnelCol;
        unregister_object_by_id(arg0);
        clear_obj_links(arg0);
        ((TObjPlayer *)arg0)->destroy_particle_controller(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 __vt__18TObjBoss7TunnelCol[];
extern s32 TObjBoss7TunnelCol__col_desc[];
extern void *lbl_805D3FF0;
extern const f32 lbl_805DECA0;
extern const f32 lbl_805DEC9C;

void *TObjBoss7TunnelCol__ct(void *arg0) {
    struct VOff_802F1BEC_arg0_802F1B7C *self = (struct VOff_802F1BEC_arg0_802F1B7C *)arg0;
    ((TObjPlayer *)arg0)->construct_collider_proxy();
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__18TObjBoss7TunnelCol;
    *(void **)((s8 *)arg0 + 0x0) = lbl_805D3FF0;
    fn_8002B630(self->f_AC, TObjBoss7TunnelCol__col_desc);
    *(f32 *)((s8 *)arg0 + 0x38) = lbl_805DECA0;
    *(f32 *)((s8 *)arg0 + 0x3C) = lbl_805DEC9C;
    *(f32 *)((s8 *)arg0 + 0x40) = lbl_805DEC9C;
    initialize_linked_object_reference(arg0, self->f_AC);
    ((TObjPlayer *)arg0)->reset_photon_effect();
    return arg0;
}

void TObjBoss7TunnelCol::update_collision() {
    struct VOff_802F1C68_arg0_802f1c68_802F1B7C *self = (struct VOff_802F1C68_arg0_802f1c68_802F1B7C *)this;
    set_matrix_identity(self->f_48);
    translate_matrix_vec3(self->f_48, (void *)((char *)this + 28));
    rotate_matrix_yxz(self->f_48, *(void **)((s8 *)this + 0x28), *(void **)((s8 *)this + 0x2C), *(void **)((s8 *)this + 0x30));
}

extern s32 main_task[];
extern f32 lbl_805DECA4;
extern f32 lbl_805DECA8;

s32 TObjBoss7TunnelCol::is_in_camera_range() {
    f32 temp_f1;

    if (get_mode__11TCameraCtrlFPv(main_task) & 0x20) {
        temp_f1 = *(f32 *)((s8 *)this + 0x24);
        if ((temp_f1 < lbl_805DECA4) && (lbl_805DECA8 < temp_f1)) {
            return 0;
        }
    }
    return 1;
}

}
