#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_C { u8 bytes[0xc]; };

typedef struct Vec_801A73B0 { f32 x, y, z; } Vec_801A73B0;

struct PbCamera_801A73B0 {
    u8 pad0[0x104];
    Vec_801A73B0 target;
    Vec_801A73B0 position;
    Vec_801A73B0 destination_target;
    Vec_801A73B0 destination_position;
};

struct PbCameraParams_801A73B0 {
    u8 pad0[0x14];
    s32 projection;
    s32 pad18;
    Vec_801A73B0 position;
    Vec_801A73B0 target;
    u8 pad34[0x50 - 0x34];
};

typedef struct Vec_801A7578 { f32 x, y, z; } Vec_801A7578;

struct Node_801A7578 {
    u8 pad0[4];
    Vec_801A7578 pos;
    s32 id;
    u8 pad1[0x20 - 0x14];
};

struct Reg_801A7578 {
    struct Node_801A7578 *list;
    s32 count;
};

typedef struct Vec_801A7428 { f32 x, y, z; } Vec_801A7428;

struct Rec_801A7428 { s32 a, b, c; Vec_801A7428 v; s32 d; };

struct Entry_801A7428 { u8 bytes[0x1C]; };

struct Group_801A7428 {
    u8 pad0[8];
    Entry_801A7428 *entries;
    s32 count;
};

struct Obj_801A7428 {
    u8 pad0[0x38];
    Vec_801A7428 pos;
    u8 pad44[0x60 - 0x44];
    s32 f60;
};

extern "C" {
void fn_801A753C(u8 *arg0, u8 *arg1);
void VecCopy__FP3VecPC3Vec(Vec_801A73B0 *, const Vec_801A73B0 *);
void TCameraCtrl__sub_80069D04(struct PbCameraParams_801A73B0 *);
void TEffStarLightChild__sub_80141FBC(Vec_801A73B0 *, Vec_801A73B0 *, Vec_801A73B0 *, f32);
extern const f32 lbl_805DC0D8;
extern const f32 lbl_805DC0DC;
void fn_801A73B0(struct PbCamera_801A73B0 *self);
void get_camera_ctrl__9TObjEneDDFPv(Vec_801A7578 *, Vec_801A7578 *);
extern Vec_801A7578 lbl_80446A44;
extern struct Reg_801A7578 lbl_8050E578[];
extern s32 lbl_805D5D10;
void fn_801A7578(void);
void TLobby__sub_800869A4(Vec_801A7428 *, s32, s32, s32);
Obj_801A7428 *find_entity_by_id(u16);
void fn_801A753C(u8 *arg0, u8 *arg1);
void TCameraCtrl__sub_803D8934(s32, Vec_801A7428 *, Vec_801A7428 *);
void rotate_matrix_y(s32, s32);
void TObjPlayer__sub_803D97F0(void *);
void TCameraCtrl__sub_803D9858(s32);
extern Group_801A7428 lbl_804C31D8[];
extern u8 lbl_8058D490[];
extern const f32 lbl_805DC0E0;
void fn_801A7428(s32 arg0, s32 arg1);
}

extern "C" {

void fn_801A73B0(struct PbCamera_801A73B0 *self) {
    struct PbCameraParams_801A73B0 parameters;
    TEffStarLightChild__sub_80141FBC(&self->position, &self->destination_position, &self->position, lbl_805DC0D8);
    TEffStarLightChild__sub_80141FBC(&self->target, &self->destination_target, &self->target, lbl_805DC0DC);
    VecCopy__FP3VecPC3Vec(&parameters.position, &self->position);
    VecCopy__FP3VecPC3Vec(&parameters.target, &self->target);
    parameters.projection = 0x4222;
    TCameraCtrl__sub_80069D04(&parameters);
}

void fn_801A7428(s32 arg0, s32 arg1) {
    Rec_801A7428 rec;
    Vec_801A7428 pos;
    Obj_801A7428 *obj;
    Group_801A7428 *g;
    Entry_801A7428 *entries;
    s32 count;
    s32 i;
    obj = find_entity_by_id(arg1);
    if (obj == NULL) {
        return;
    }
    g = &lbl_804C31D8[arg0];
    count = g->count;
    if (count <= 0) {
        return;
    }
    entries = g->entries;
    for (i = 0; i < count; i++) {
        fn_801A753C((u8 *)&rec, entries[i].bytes);
        TObjPlayer__sub_803D97F0(lbl_8058D490);
        rotate_matrix_y(0, obj->f60);
        TCameraCtrl__sub_803D8934(0, &rec.v, &pos);
        TCameraCtrl__sub_803D9858(1);
        pos.x += obj->pos.x;
        pos.y += lbl_805DC0E0 + obj->pos.y;
        pos.z += obj->pos.z;
        TLobby__sub_800869A4(&pos, rec.a, rec.b, rec.c);
    }
}

void fn_801A753C(u8 *arg0, u8 *arg1) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 8);
    *(M2CCopy_C *)((s32) arg0 + 0xC) = *(const M2CCopy_C *)((s32) arg1 + 0xC);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg1, s32 *, 0x18);
}
void fn_801A7578(void) {
    s32 i;
    for (i = 0; i < lbl_8050E578->count; i++) {
        struct Node_801A7578 *node = &lbl_8050E578->list[i];
        if (lbl_805D5D10 == node->id) {
            Vec_801A7578 origin = lbl_80446A44;
            get_camera_ctrl__9TObjEneDDFPv(&origin, &node->pos);
        }
    }
    lbl_805D5D10 += 1;
}

}
