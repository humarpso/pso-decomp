#include "types.h"
#include "pso/object/TObjCamera.h"
struct V3_8017F624 { s32 x; s32 y; s32 z; };

struct Vec_8017F6C0 { f32 x, y, z; };

struct Obj_8017F6C0 { u8 pad[0x38]; Vec_8017F6C0 pos; };

struct Out_8017F6C0 { f32 x, y; };

extern "C" {
void get_camera_ctrl__9TObjEneDDFv(void *, void *);
extern s32 camera_slot_id_table[];
extern V3_8017F624 camera_slot_zero_vec_table[];
extern V3_8017F624 camera_slot_positions[];
extern s32 TObjCamera__camera_slot_scan_index;
void matrix_mult_vec(s32, Vec_8017F6C0 *, Vec_8017F6C0 *);
void project_world_to_screen(s32, Vec_8017F6C0 *, Out_8017F6C0 *);
extern Vec_8017F6C0 lbl_804FF610;
extern const f32 TObjCamera__data_805DBB58;
extern const f32 lbl_805DBB5C;
s32 TObjCamera__vt8(Obj_8017F6C0 *o, f32 r, f32 d);
}

extern "C" {

void TObjCamera::update_camera_slots() {
    s32 i;
    for (i = 0; i < 8; i++) {
        if (TObjCamera__camera_slot_scan_index == camera_slot_id_table[i]) {
            V3_8017F624 v = camera_slot_zero_vec_table[0];
            get_camera_ctrl__9TObjEneDDFv(&v, &camera_slot_positions[i]);
        }
    }
    TObjCamera__camera_slot_scan_index += 1;
}
#pragma push
#pragma fp_contract on
#pragma fp_contract on
s32 TObjCamera__vt8(Obj_8017F6C0 *o, f32 r, f32 d) {
    Vec_8017F6C0 v;
    Out_8017F6C0 out;
    matrix_mult_vec(0, &o->pos, &v);
    if (v.z < -r) {
        return 0;
    }
    if (v.x < TObjCamera__data_805DBB58) {
        v.x = o->pos.x - lbl_804FF610.x * d;
        v.y = lbl_804FF610.y * d + o->pos.y;
        v.z = lbl_804FF610.z * d + o->pos.z;
        project_world_to_screen(0, &v, &out);
        if (out.x < TObjCamera__data_805DBB58) {
            return 0;
        }
    } else {
        v.x = lbl_804FF610.x * d + o->pos.x;
        v.y = o->pos.y - lbl_804FF610.y * d;
        v.z = o->pos.z - lbl_804FF610.z * d;
        project_world_to_screen(0, &v, &out);
        if (out.x > lbl_805DBB5C) {
            return 0;
        }
    }
    return 1;
}
#pragma pop

}
