#include "types.h"
typedef s32 M2C_UNK;
struct VBase_18_800F18C8 { char pad[0x18]; };

struct VObj_18_800F18C8 : VBase_18_800F18C8 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

struct Part_800F18C8 { s32 a; s32 b; s32 c; };

struct Mdl_800F18C8 { Part_800F18C8 *parts; };

struct Motion_800F18C8 { s32 f0; u32 nframes; };

struct MotEnt_800F18C8 { s32 f0; Motion_800F18C8 *motion; };

struct Anim_800F18C8 { s32 f0; s32 idx; s32 f8; s32 fC; };

struct Obj_800F18C8 : VObj_18_800F18C8 {
    u8 pad1C[0x24 - 0x1C]; Mdl_800F18C8 *mdl; u8 pad28[0x34 - 0x28]; s32 f34;
    u8 pos[0xC]; u8 pad44[0x60 - 0x44]; s32 rotY; u8 pad64[0xB8 - 0x64]; s16 fb8;
    u8 padBA[0xC0 - 0xBA]; f32 fc0; u8 padC4[0xD8 - 0xC4]; Anim_800F18C8 *anims;
    MotEnt_800F18C8 *motions; u8 padE0[0xF8 - 0xE0]; Motion_800F18C8 *fF8;
    u8 padFC[0x326 - 0xFC]; s16 f326; u8 pad328[0x360 - 0x328]; f32 f360;
};

extern "C" {
s32 get_target_info__9TObjEneDDFPv(void *);
s32 TObjEneDD__sub_800BB878(s32, s32);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
s32 TObjEneMe3Stelth__sub_800F47D4(void *);
s32 TObjEneMe3Stelth__sub_800F4814(void *);
s32 TObjEneMe3Stelth__sub_800F4850(void *);
f32 get_node_world_y__16TObjEneMe3StelthFPv(void *);
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK queue_debug_text__13TObjEneMe1GeeFiPv(s32, const char *);
M2C_UNK print_float_padded(s32, s32, f32);
void debug_printf_at(s32 id, const char *fmt, ...);
M2C_UNK scale_matrix(int, f32, f32, f32);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(void *);
M2C_UNK set_depth_buffer_id__16TObjEneMe3StelthFi(int);
M2C_UNK draw_ginja_model_with_motion(s32, void *, f32);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();
extern char lbl_8043D68C[];
extern char lbl_8043D69C[];
extern char lbl_8043D6AC[];
extern char lbl_8043D6BC[];
extern char lbl_8043D6C8[];
extern char lbl_8043D6E0[];
extern char lbl_8043D6F8[];
extern char lbl_8043D710[];
extern char lbl_8043D728[];
extern char lbl_8043D73C[];
extern u32 *lbl_80501120[];
extern s32 some_id_805c6f74;
extern const f32 TObjEneMe3Stelth__data_805DA808;
extern const f32 TObjEneMe3Stelth__data_805DA80C;
extern const f32 lbl_805DA83C;
extern const f32 TObjEneMe3Stelth__data_805DA840;
void draw_with_debug_info__16TObjEneMe3StelthFPv(Obj_800F18C8 *arg0);
}

extern "C" {

void draw_with_debug_info__16TObjEneMe3StelthFPv(Obj_800F18C8 *arg0) {
    s32 save[3];
    s32 flag;
    Motion_800F18C8 *motion;
    f32 frame;
    if (get_target_info__9TObjEneDDFPv(arg0) != 0) {
        if (TObjEneMe3Stelth__sub_800F4850(arg0) != 0) {
            debug_printf_at(TObjEneDD__sub_800BB878(0, 2), lbl_8043D68C);
        } else {
            debug_printf_at(TObjEneDD__sub_800BB878(0, 2), lbl_8043D69C);
        }
        if (TObjEneMe3Stelth__sub_800F4814(arg0) != 0) {
            debug_printf_at(TObjEneDD__sub_800BB878(0xF, 2), lbl_8043D6AC);
        } else {
            debug_printf_at(TObjEneDD__sub_800BB878(0xF, 2), lbl_8043D6BC);
        }
        queue_debug_text__13TObjEneMe1GeeFiPv(TObjEneDD__sub_800BB878(0, 4), lbl_8043D6C8);
        queue_debug_text__13TObjEneMe1GeeFiPv(TObjEneDD__sub_800BB878(0, 3), lbl_8043D6E0);
        queue_debug_text__13TObjEneMe1GeeFiPv(TObjEneDD__sub_800BB878(0, 6), lbl_8043D6F8);
        queue_debug_text__13TObjEneMe1GeeFiPv(TObjEneDD__sub_800BB878(0, 5), lbl_8043D710);
        if (TObjEneMe3Stelth__sub_800F47D4(arg0) != 0) {
            debug_printf_at(TObjEneDD__sub_800BB878(0, 9), lbl_8043D728);
        } else {
            debug_printf_at(TObjEneDD__sub_800BB878(0, 9), lbl_8043D73C);
        }
    }
    flag = TObjEneMe3Stelth__sub_800F47D4(arg0);
    if (arg0->m8(lbl_805DA83C, TObjEneMe3Stelth__data_805DA808) != 0) {
        set_global_param__8TObjFishFi(arg0->mdl);
        toggle_particle_effect__10TObjPlayerFv();
        if (flag != 0) {
            Part_800F18C8 *parts = arg0->mdl->parts;
            s32 i;
            for (i = 0; i < 3; i++) {
                save[i] = parts[i].c;
            }
            for (i = 0; i < 3; i++) {
                parts[i].c = parts[i + 3].c;
            }
        }
        push_matrix();
        post_translate_matrix(arg0->pos);
        rotate_matrix_y(0, arg0->rotY);
        scale_matrix(0, TObjEneMe3Stelth__data_805DA80C, TObjEneMe3Stelth__data_805DA80C, TObjEneMe3Stelth__data_805DA80C);
        {
            s32 i;
            for (i = 0; i < 3; i++) {
                if (lbl_80501120[i] != NULL) {
                    *lbl_80501120[i] = 0xB000FFB0;
                }
            }
        }
        if (arg0->f326 == 0) {
            s32 idx = arg0->fb8;
            if (idx < 0) {
                idx = 0;
            } else if (idx >= 0xD) {
                idx = 0xC;
            }
            motion = arg0->motions[arg0->anims[idx].idx].motion;
            frame = arg0->f360;
            if (frame < TObjEneMe3Stelth__data_805DA840) {
                frame = TObjEneMe3Stelth__data_805DA840;
            } else if (frame > (f32)(motion->nframes - 1)) {
                frame = (f32)(motion->nframes - 1);
            }
            set_depth_buffer_id__16TObjEneMe3StelthFi(3);
            set_global_flag__10TObjPlayerFv();
            draw_ginja_model_with_motion(arg0->f34, motion, frame);
            clear_global_state__10TObjPlayerFv();
            set_depth_buffer_id__16TObjEneMe3StelthFi(1);
            arg0->fF8 = motion;
            arg0->fc0 = frame;
            frame = get_node_world_y__16TObjEneMe3StelthFPv(arg0);
            print_float_padded(TObjEneDD__sub_800BB878(0, 7), 5, frame);
        } else {
            some_id_805c6f74 &= ~0x400;
        }
        pop_matrix();
        if (flag != 0) {
            s32 i;
            Part_800F18C8 *parts = arg0->mdl->parts;
            for (i = 0; i < 3; i++) {
                parts[i].c = save[i];
            }
        }
        end_effect_render__13TParticleCtrlFv();
    }
}

}
