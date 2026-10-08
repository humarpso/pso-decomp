#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Vec_8031F8C4 { f32 x, y, z; };

struct Recon_8031F8C4 {
    u8 pad0[0x1C];
    u16 f1C;
    u8 pad1E[2];
    u8 pad20[0x2C - 0x20];
    s16 f2C;
    u8 pad2E[0x38 - 0x2E];
    u8 pos38[0x60 - 0x38];
    s32 f60;
    u8 pad64[0x3DC - 0x64];
    s32 f3DC;
    u8 pad3E0[0x3F4 - 0x3E0];
    s32 f3F4;
    s32 f3F8;
    u8 pad3FC[0x410 - 0x3FC];
    s32 f410;
    s32 f414;
    u16 ids[(0x4D8 - 0x418) / 2];
    s32 f4D8;
    s32 f4DC;
};

extern "C" {
extern const f32 lbl_805DF44C;
void TObjEneRecon__sub_8031F800(u8 *arg0);
void VecCopy__FP3VecPC3Vec(Vec_8031F8C4 *, Vec_8031F8C4 *);
void play_sound_effect(s32, void *, s32, s32);
u32 create__12TObjEneReconFPvPvPvPvPv(void *, u16, s32, Vec_8031F8C4 *, Vec_8031F8C4 *);
s32 TObjEneRecon__sub_8031EDF8(void *);
s32 remap_area_sound_id__14TObjEneRecoboxFUi(s32, s32, s32);
Vec_8031F8C4 *get_field_38_ptr__12TObjEneReconFPv(void *, s32);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
extern Vec_8031F8C4 lbl_804762E4;
extern const f32 lbl_805DF450;
extern const f32 lbl_805DF454;
extern const f32 lbl_805DF458;
void update_child_spawn__12TObjEneReconFPv(Recon_8031F8C4 *o);
}

extern "C" {

#pragma push
#pragma opt_common_subs off
void TObjEneRecon__sub_8031F800(u8 *arg0) {
    s32 temp_r0;
    M2C_FIELD(arg0, s32 *, 0x3DC) = (s32) M2C_FIELD(arg0, s32 *, 0x368);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3DC) <= 0) {
        M2C_FIELD(arg0, s32 *, 0x3DC) = 0;
    } else if ((s32) M2C_FIELD(arg0, s32 *, 0x368) >= 2) {
        M2C_FIELD(arg0, s32 *, 0x3DC) = 2;
    }
    M2C_FIELD(arg0, f32 *, 0x4D0) = (f32) M2C_FIELD(arg0, f32 *, 0x354);
    M2C_FIELD(arg0, f32 *, 0x4D4) = (f32) M2C_FIELD(arg0, f32 *, 0x358);
    if (M2C_FIELD(arg0, f32 *, 0x4D4) <= lbl_805DF44C) {
        M2C_FIELD(arg0, f32 *, 0x4D4) = (f32) lbl_805DF44C;
    }
    M2C_FIELD(arg0, s32 *, 0x3F8) = (s32) M2C_FIELD(arg0, f32 *, 0x360);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x3F8);
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0x3F8) = 0;
    } else if (temp_r0 > 6) {
        M2C_FIELD(arg0, s32 *, 0x3F8) = 6;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3F8) == 0) {
        M2C_FIELD(arg0, s32 *, 0x3F4) = 0;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x3F4) = 0x1E;
}
#pragma pop

void update_child_spawn__12TObjEneReconFPv(Recon_8031F8C4 *o) {
    Vec_8031F8C4 dir = lbl_804762E4;
    Vec_8031F8C4 pos;
    s32 id;
    s32 arg;
    s32 n;
    o->f4D8++;
    if (o->f4D8 < o->f4DC) {
        return;
    }
    o->f4D8 = 0;
    if (o->f410 >= o->f3F8 || o->f414 >= o->f3F4) {
        return;
    }
    switch (o->f3DC) {
    case 0:
        dir.y = lbl_805DF450;
        break;
    case 1:
        dir.y = lbl_805DF454;
        break;
    case 2:
        dir.x = lbl_805DF458 * sin_table_lookup(o->f60);
        dir.z = lbl_805DF458 * cos_table_lookup(o->f60);
        break;
    }
    id = TObjEneRecon__sub_8031EDF8(o);
    arg = o->f2C + (id - o->f1C);
    VecCopy__FP3VecPC3Vec(&pos, get_field_38_ptr__12TObjEneReconFPv(o, o->f2C));
    if (id == 0xFFFF) {
        o->f414 = o->f3F4;
        return;
    }
    if (create__12TObjEneReconFPvPvPvPvPv(o, id, arg, &pos, &dir) != 0) {
        n = o->f410++;
        o->ids[n] = id;
        play_sound_effect(remap_area_sound_id__14TObjEneRecoboxFUi(0x4003A80F, o->f414++, n), o->pos38, 0, 0);
    }
}

}
