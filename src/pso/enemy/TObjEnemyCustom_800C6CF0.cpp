#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef struct Plr_800C6E34 {
    u8 pad0[0x2A8];
    u8 *target;
    u8 pad2AC[0x2FC - 0x2AC];
    f32 pos[3];
    u8 pad308[0x338 - 0x308];
    u16 targetIdx;
} Plr_800C6E34;

typedef struct Vec_800C6EF8 {
    f32 x, y, z;
} Vec_800C6EF8;

typedef struct Obj_800C6EF8 {
    u8 pad0[0x1C];
    u16 id;
    u8 pad1E[0x30 - 0x1E];
    u32 flags;
} Obj_800C6EF8;

extern "C" {
u8 *get_player_data__10TObjPlayerFi(int);
s32 obj_testFlags30(void *, int);
u8 *TNpcPlayer__sub_800D87EC(int);
f32 fn_8013157C(void *, void *);
extern s32 lbl_805D586C;
extern s32 lbl_805D5870;
void TObjPlayer__sub_800C6E34(Plr_800C6E34 *arg0, f32 radius);
f32 TObjPlayer__sub_800186E8(void *, void *, Vec_800C6EF8 *);
void VecCopy__FP3VecPC3Vec(Vec_800C6EF8 *, Vec_800C6EF8 *);
u8 *get_player_data__10TObjPlayerFi(int);
u16 obj_getField1c(void *);
extern s32 lbl_805D586C;
extern s32 lbl_805D5870;
u16 TObjPlayer__sub_800C6EF8(Obj_800C6EF8 *arg0, Vec_800C6EF8 *out, f32 radius);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
u8 *get_player_data__10TObjPlayerFi(int);
s32 obj_testFlags30(void *, int);
f32 fn_8013157C(void *, void *);
extern s32 lbl_805D586C;
extern s32 lbl_805D5870;
u16 TObjPlayer__sub_800C6D24(u8 *arg0, f32 radius);
}

extern "C" {

void call_player_preserving_field__15TObjEnemyCustomFPv(void *arg0);
M2C_UNK call_vt78__10TObjPlayerFPv();

void call_player_preserving_field__15TObjEnemyCustomFPv(void *arg0) {
    s16 temp_r31;

    temp_r31 = M2C_FIELD(arg0, s16 *, 0x326);
    call_vt78__10TObjPlayerFPv();
    M2C_FIELD(arg0, s16 *, 0x326) = temp_r31;
}

u16 TObjPlayer__sub_800C6D24(u8 *arg0, f32 radius) {
    u16 list[32];
    s32 count;
    s32 n;
    s32 i;
    f32 r2;
    u8 *p;
    r2 = radius * radius;
    count = 0;
    if (obj_testFlags30(arg0, 0x10) != 0) {
        n = lbl_805D586C + lbl_805D5870;
    } else {
        n = lbl_805D586C;
    }
    for (i = 0; i < n; i++) {
        p = get_player_data__10TObjPlayerFi(i);
        if (p == arg0) {
            continue;
        }
        if (p == NULL) {
            break;
        }
        if (fn_8013157C(p + 0x2FC, arg0 + 0x2FC) < r2) {
            list[count++] = i;
            if (count >= 0x20) {
                break;
            }
        }
    }
    if (count == 0) {
        return 0xFFFF;
    }
    return list[(s32)((f32)count * calc_boss4_scale__10TObjPlayerFi(arg0))];
}

void TObjPlayer__sub_800C6E34(Plr_800C6E34 *arg0, f32 radius) {
    s32 n;
    u16 best;
    s32 i;
    f32 bestDist;
    f32 d;
    Plr_800C6E34 *p;
    bestDist = radius * radius;
    best = 0xFFFF;
    if (obj_testFlags30(arg0, 0x10) != 0) {
        n = lbl_805D586C + lbl_805D5870;
    } else {
        n = lbl_805D586C;
    }
    for (i = 0; i < n; i++) {
        p = (Plr_800C6E34 *)get_player_data__10TObjPlayerFi(i);
        if (p != arg0 && p != NULL && arg0->target != (u8 *)p) {
            d = fn_8013157C(p->pos, arg0->pos);
            if (d < bestDist) {
                bestDist = d;
                best = i;
            }
        }
    }
    arg0->targetIdx = best;
    arg0->target = TNpcPlayer__sub_800D87EC(arg0->targetIdx);
}
u16 TObjPlayer__sub_800C6EF8(Obj_800C6EF8 *arg0, Vec_800C6EF8 *out, f32 radius) {
    Vec_800C6EF8 v;
    u16 best;
    s32 i;
    Obj_800C6EF8 *p;
    f32 bestDist;
    f32 d;
    u16 id;
    bestDist = radius * radius;
    best = 0xFFFF;
    for (i = lbl_805D586C; i < lbl_805D586C + lbl_805D5870; i++) {
        p = ((Obj_800C6EF8 *)get_player_data__10TObjPlayerFi((int)(i)));
        if (p == NULL) {
            break;
        }
        id = obj_getField1c(p);
        if (id == arg0->id) {
            continue;
        }
        if (id < 0x1000 || id >= 0x4000) {
            continue;
        }
        if (p->flags & 0x2000800) {
            continue;
        }
        d = TObjPlayer__sub_800186E8(arg0, p, &v);
        if (d < bestDist) {
            best = obj_getField1c(p);
            bestDist = d;
            if (out != NULL) {
                VecCopy__FP3VecPC3Vec(out, &v);
            }
        }
    }
    return best;
}

}
