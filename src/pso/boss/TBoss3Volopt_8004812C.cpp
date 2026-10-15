#include "types.h"

struct E_8004813C { s32 a; s32 b; s32 c; s32 d; };

struct G_8004813C { u8 pad[0x42c]; E_8004813C *entries; };

struct O_8004813C { u8 pad[0x24]; s32 f24; u8 pad2[0xc]; s32 f34; };

struct G_8004816C { u8 pad[0x18]; s32 arr[1]; };

typedef struct Vec_80048260 {
    f32 x, y, z;
} Vec_80048260;

typedef struct Obj_80048260 {
    u8 pad0[0x1C];
    Vec_80048260 *pos;
    Vec_80048260 *dir;
    s32 timer;
    s32 rotY;
    s32 rotZ;
    u8 pad30[0x40 - 0x30];
    f32 unk40;
} Obj_80048260;

typedef struct Color_80048260 {
    u8 r, g, b, a;
} Color_80048260;

extern "C" {
extern s32 lbl_805D4CDC;
f32 TBoss3Volopt__sub_8004812C(s32 arg0);
extern G_8004813C *lbl_805D4CE4;
void load_params_from_table__12TBoss3VoloptFPvi(O_8004813C *self, s32 i);
extern G_8004816C *lbl_805D4D1C;
s32 TBoss3Volopt__sub_8004816C(s32 i);
void VecCopy__FP3VecPC3Vec(void *, void *);
void reset_transform_state__10TObjPlayerFv(void);
void init_xyz_limits__10TObjPlayerFv(void);
void draw_line_list(void *, s32, s32);
void vec3_add_to(void *, void *);
void matrix_mult_vec(s32, void *, void *);
void set_matrix_identity(s32);
void rotate_matrix_y(s32, s32);
void rotate_matrix_x(s32, s32);
void push_matrix(void);
void pop_matrix(void);
extern Vec_80048260 lbl_804366B8;
extern Color_80048260 lbl_80484828[];
extern u8 lbl_80484830[];
extern Vec_80048260 boss3_volopt_direction_line_points[];
void draw_direction_line__10TObjPlayerFPv(Obj_80048260 *self);
}

extern "C" {

void update_and_send_60__12TBoss3VoloptFPv(void* p);
void TBoss3Volopt__sub_800481B4(void* p);
void swap_6x18_fields__12TBoss3VoloptFPv(void* p);
void broadcast_state__12TBoss3VoloptFPv(void* p);
void TBoss3Volopt__sub_8004824C(void* p);
int swap_6x85_fields__12TBoss3VoloptFPv(void*);
int TLobby__send_and_handle_60(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int bswap_16__FPUs(void*);

f32 TBoss3Volopt__sub_8004812C(s32 arg0) {
    return *(f32 *)((s8 *)(lbl_805D4CDC + (arg0 * 4)) + 0);
}

void load_params_from_table__12TBoss3VoloptFPvi(O_8004813C *self, s32 i) {
    self->f34 = lbl_805D4CE4->entries[i].c;
    self->f24 = lbl_805D4CE4->entries[i].d;
}

s32 TBoss3Volopt__sub_8004816C(s32 i) {
    return lbl_805D4D1C->arr[i];
}

void update_and_send_60__12TBoss3VoloptFPv(void* p) { swap_6x85_fields__12TBoss3VoloptFPv(p); TLobby__send_and_handle_60(p); }
void TBoss3Volopt__sub_800481B4(void* p) { *(u8*)((char*)p + 0x0) = 133; *(u8*)((char*)p + 0x1) = 5; }
void swap_6x18_fields__12TBoss3VoloptFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); { int i; for (i = 0; i < 4; i++) { bswap_16__FPUs((char*)p + 0x4 + i * 2); } } }
void broadcast_state__12TBoss3VoloptFPv(void* p) { swap_6x18_fields__12TBoss3VoloptFPv((void*)(p)); TLobby__send_and_handle_60(p); }
void TBoss3Volopt__sub_8004824C(void* p) { *(u8*)((char*)p + 0x0) = 24; *(u8*)((char*)p + 0x1) = 3; }
void draw_direction_line__10TObjPlayerFPv(Obj_80048260 *self) {
    Vec_80048260 *dst;
    s32 a;
    if (self->timer < 10) {
        a = (self->timer << 7) / 10;
        lbl_80484828[0].a = a;
        lbl_80484828[0].a = a;
    }
    VecCopy__FP3VecPC3Vec(&boss3_volopt_direction_line_points[0], self->pos);
    dst = &boss3_volopt_direction_line_points[1];
    VecCopy__FP3VecPC3Vec(dst, self->dir);
    push_matrix();
    set_matrix_identity(0);
    {
        Vec_80048260 v = lbl_804366B8;
        v.z = self->unk40;
        rotate_matrix_x(0, self->rotY);
        rotate_matrix_y(0, self->rotZ);
        matrix_mult_vec(0, &v, &v);
        vec3_add_to(dst, &v);
    }
    pop_matrix();
    init_xyz_limits__10TObjPlayerFv();
    draw_line_list(lbl_80484830, 1, 5);
    reset_transform_state__10TObjPlayerFv();
}

}
