#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct VOff_802F1BEC_arg0_802F1B7C { char pad_0[0xAC]; char f_AC[1]; };
struct VOff_802F1C68_arg0_802f1c68_802F1B7C { char pad_0[0x48]; char f_48[1]; };

void *TObjBoss7TunnelCol__ct(void *arg0);
void *__dt__18TObjBoss7TunnelColFv(void *arg0, s16 arg1);
s32 is_in_camera_range__18TObjBoss7TunnelColFPv(void *arg0);
void render__18TObjBoss7TunnelColFv(void);
void run_task__18TObjBoss7TunnelColFv(void);
void update_collision__18TObjBoss7TunnelColFPv(void *arg0);
void rotate_matrix_yxz(void *, void *, void *, void *);
void TObjPlayer__sub_80154A00(void *);
void TObjPlayer__sub_801569F4(void *);
void TObjPlayer__sub_803D8CD4(void *);
void __dl__7TObjectFPv(void *);
void clear_obj_links(void *);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);
void fn_8002B630(void *, void *);
s32 get_mode__11TCameraCtrlFPv(M2C_UNK *);
void initialize_linked_object_reference(void *, void *);
void reset_photon_effect__10TObjPlayerFPv(void *);
void set_position_vec3__10TObjPlayerFPvPv(void *, void *);

void render__18TObjBoss7TunnelColFv(void) {  }
void run_task__18TObjBoss7TunnelColFv(void) {  }

extern M2C_UNK __vt__18TObjBoss7TunnelCol[];

void *__dt__18TObjBoss7TunnelColFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjBoss7TunnelCol;
        TObjPlayer__sub_80154A00(arg0);
        clear_obj_links(arg0);
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__18TObjBoss7TunnelCol[];
extern M2C_UNK lbl_80474420[];
extern void *lbl_805D3FF0;
extern const f32 lbl_805DECA0;
extern const f32 lbl_805DEC9C;

void *TObjBoss7TunnelCol__ct(void *arg0) {
    struct VOff_802F1BEC_arg0_802F1B7C *self = (struct VOff_802F1BEC_arg0_802F1B7C *)arg0;
    TObjPlayer__sub_801569F4(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjBoss7TunnelCol;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3FF0;
    fn_8002B630(self->f_AC, lbl_80474420);
    M2C_FIELD(arg0, f32 *, 0x38) = lbl_805DECA0;
    M2C_FIELD(arg0, f32 *, 0x3C) = lbl_805DEC9C;
    M2C_FIELD(arg0, f32 *, 0x40) = lbl_805DEC9C;
    initialize_linked_object_reference(arg0, self->f_AC);
    reset_photon_effect__10TObjPlayerFPv(arg0);
    return arg0;
}

void update_collision__18TObjBoss7TunnelColFPv(void *arg0) {
    struct VOff_802F1C68_arg0_802f1c68_802F1B7C *self = (struct VOff_802F1C68_arg0_802f1c68_802F1B7C *)arg0;
    TObjPlayer__sub_803D8CD4(self->f_48);
    set_position_vec3__10TObjPlayerFPvPv(self->f_48, (void *)((char *)arg0 + 28));
    rotate_matrix_yxz(self->f_48, M2C_FIELD(arg0, void **, 0x28), M2C_FIELD(arg0, void **, 0x2C), M2C_FIELD(arg0, void **, 0x30));
}

extern M2C_UNK main_task[];
extern f32 lbl_805DECA4;
extern f32 lbl_805DECA8;

s32 is_in_camera_range__18TObjBoss7TunnelColFPv(void *arg0) {
    f32 temp_f1;

    if (get_mode__11TCameraCtrlFPv(main_task) & 0x20) {
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x24);
        if ((temp_f1 < lbl_805DECA4) && (lbl_805DECA8 < temp_f1)) {
            return 0;
        }
    }
    return 1;
}

}
