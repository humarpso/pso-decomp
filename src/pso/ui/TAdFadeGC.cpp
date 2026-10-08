#include "pso/TAdFadeGC.h"

TAdFadeGC::~TAdFadeGC() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

struct Desc_802C79C8 { f32 *pos; u32 *col; s32 a; s32 b; };

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 get_main_phase(void);
s32 get_current_floor(void);
s32 get_field_3e4__10TObjPlayerFPv(void *);
s32 get_player_by_client_id(u32);
f32 xz_distance_squared(void *, void *);
bool is_player_outside_trade_radius(u8 *arg0, u32 arg1);
extern const f32 TAdFadeGC__data_805DE5E8;
extern const f32 lbl_805DE604;
extern const f32 lbl_805DE60C;
extern const f32 lbl_805DE610;
void TAdFadeGC__sub_802C7DBC(void *arg0, void *arg1);
M2C_UNK queue_destruction__7TObjectFv(void *);
int all_parents_unqueued_for_destruction__7TObjectFv(void*);
extern const f32 lbl_805DE5F0;
extern const f32 lbl_805DE600;
extern const f32 lbl_805DE608;
void run_task__9TAdFadeGCFv(void *arg0);
M2C_UNK draw_color_lines(void *, int, int, f32);
M2C_UNK draw_tri_fan_2d__14TObjCMHairMenuFPviif(void *, int, int, f32, f32, f32);
M2C_UNK abs__4cXyzCFv(M2C_UNK, M2C_UNK);
extern f32 lbl_805D6800;
extern s8 lbl_805D6804;
extern const f32 lbl_805DE5EC;
extern const f32 lbl_805DE5F4;
extern const f32 lbl_805DE5F8;
extern const f32 lbl_805DE5FC;
}

extern "C" {

void *__ct__9TAdFadeGCFv(void *arg0, void *arg1, void *arg2);
void render__9TAdFadeGCFv(void* p);
void TAdFadeGC__sub_802C79C8(u8 *);
void __ct__7TObjectFP7TObject(void *);
void render__18TObjTradeCollisionFv(void);

void TAdFadeGC__sub_802C79C8(u8 *arg0) {
    f32 pos[8];
    Desc_802C79C8 d;
    u32 col[4];
    u32 i;
    f32 y;
    f32 y2;
    u32 c;

    d.pos = pos;
    d.col = col;
    d.a = 0;
    d.b = 4;
    switch (M2C_FIELD(arg0, s32 *, 0x28)) {
    case 0:
        abs__4cXyzCFv(0, 0xB);
        abs__4cXyzCFv(1, 4);
        for (i = 0; i < 120; i++) {
            d.pos[0] = TAdFadeGC__data_805DE5E8;
            y = lbl_805DE5EC * (f32) i;
            d.pos[1] = y;
            d.col[0] = 0x0FFFFFFF;
            d.pos[2] = M2C_FIELD(arg0, f32 *, 0x20);
            d.pos[3] = y;
            d.col[1] = 0xFFFFFFFF;
            d.pos[4] = lbl_805DE5F0;
            y2 = lbl_805DE5F4 + y;
            d.pos[5] = y2;
            d.col[2] = 0xFFFFFFFF;
            d.pos[6] = lbl_805DE5F0 - M2C_FIELD(arg0, f32 *, 0x20);
            d.pos[7] = y2;
            d.col[3] = 0xFFFFFFFF;
            if (lbl_805D6804 == 0) {
                lbl_805D6804 = 1;
                lbl_805D6800 = lbl_805DE5F8;
            }
            draw_color_lines(&d, 4, 7, lbl_805D6800);
        }
        abs__4cXyzCFv(0, 8);
        abs__4cXyzCFv(1, 6);
        break;
    case 1:
    case 2:
        d.pos[0] = TAdFadeGC__data_805DE5E8;
        d.pos[1] = TAdFadeGC__data_805DE5E8;
        c = M2C_FIELD(arg0, u32 *, 0x30);
        d.col[0] = (c << 8) | (c >> 24);
        d.pos[2] = TAdFadeGC__data_805DE5E8;
        d.pos[3] = lbl_805DE5FC;
        c = M2C_FIELD(arg0, u32 *, 0x30);
        d.col[1] = (c << 8) | (c >> 24);
        d.pos[4] = lbl_805DE5F0;
        d.pos[5] = lbl_805DE5FC;
        c = M2C_FIELD(arg0, u32 *, 0x30);
        d.col[2] = (c << 8) | (c >> 24);
        d.pos[6] = lbl_805DE5F0;
        d.pos[7] = TAdFadeGC__data_805DE5E8;
        c = M2C_FIELD(arg0, u32 *, 0x30);
        d.col[3] = (c << 8) | (c >> 24);
        draw_tri_fan_2d__14TObjCMHairMenuFPviif(&d, 4, 7, lbl_805DE5F8, lbl_805DE5FC, TAdFadeGC__data_805DE5E8);
        break;
    }
}

void render__9TAdFadeGCFv(void* p) { if (all_parents_unqueued_for_destruction__7TObjectFv(p) != 0) { TAdFadeGC__sub_802C79C8((u8 *)p); } }

extern M2C_UNK __vt__9TAdFadeGC[];
extern const f32 TAdFadeGC__data_805DE5E8;
extern void *lbl_805D3EF0;

void run_task__9TAdFadeGCFv(void *arg0) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 var_f2;
    s32 temp_r0;
    if (((s32)all_parents_unqueued_for_destruction__7TObjectFv((void*)(arg0))) != 0) {
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + 1);
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x28);
        switch (temp_r0) {
        case 0:
            M2C_FIELD(arg0, f32 *, 0x20) = (f32) (M2C_FIELD(arg0, f32 *, 0x20) + lbl_805DE600);
            M2C_FIELD(arg0, f32 *, 0x20) = (M2C_FIELD(arg0, f32 *, 0x20) > lbl_805DE5F0) ? lbl_805DE5F0 : M2C_FIELD(arg0, f32 *, 0x20);
            return;
        case 1: {
            M2C_FIELD(arg0, f32 *, 0x2C) = (f32) (M2C_FIELD(arg0, f32 *, 0x2C) + M2C_FIELD(arg0, f32 *, 0x34));
            if (M2C_FIELD(arg0, f32 *, 0x2C) > 1.0f) {
                M2C_FIELD(arg0, f32 *, 0x2C) = 1.0f;
                queue_destruction__7TObjectFv(arg0);
                return;
            }
            temp_f1 = M2C_FIELD(arg0, f32 *, 0x2C);
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) (((s32) (lbl_805DE608 * temp_f1) << 0x18) | 0xFF0000 | 0xFFFF);
            return;
        }
        case 2: {
            M2C_FIELD(arg0, f32 *, 0x2C) = (f32) (M2C_FIELD(arg0, f32 *, 0x2C) + M2C_FIELD(arg0, f32 *, 0x34));
            temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x2C);
            if (temp_f1_2 < 0.0f) {
                M2C_FIELD(arg0, f32 *, 0x2C) = 0.0f;
                queue_destruction__7TObjectFv(arg0);
                return;
            }
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) ((s32) (lbl_805DE608 * temp_f1_2) << 0x18);
            break;
        }
        }
    }
}

void TAdFadeGC__sub_802C7DBC(void *arg0, void *arg1) {
    switch ((s32)arg1) {
    case 0:
        break;
    case 1:
        M2C_FIELD(arg0, f32 *, 0x2C) = TAdFadeGC__data_805DE5E8;
        M2C_FIELD(arg0, s32 *, 0x30) = 0;
        M2C_FIELD(arg0, f32 *, 0x34) = lbl_805DE60C;
        break;
    case 2:
        M2C_FIELD(arg0, f32 *, 0x2C) = lbl_805DE604;
        M2C_FIELD(arg0, s32 *, 0x30) = 0;
        M2C_FIELD(arg0, f32 *, 0x34) = lbl_805DE610;
        break;
    }
}

void *__ct__9TAdFadeGCFv(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__9TAdFadeGC;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3EF0;
    M2C_FIELD(arg0, u32 *, 0x1C) = -1;
    M2C_FIELD(arg0, f32 *, 0x20) = TAdFadeGC__data_805DE5E8;
    M2C_FIELD(arg0, void **, 0x28) = arg2;
    TAdFadeGC__sub_802C7DBC((void *)(arg0), (void *)(M2C_FIELD(arg0, void **, 0x28)));
    return arg0;
}
#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma opt_dead_assignments off
bool is_player_outside_trade_radius(u8 *arg0, u32 arg1) {
    f32 temp_f0;
    f32 temp_f31;
    s32 temp_r31;
    s32 temp_r3;
    temp_r3 = get_player_by_client_id(arg1);
    if (temp_r3 == 0) {
        return 0;
    }
    if (get_main_phase() != 0xF) {
        return 0;
    }
    temp_r31 = get_field_3e4__10TObjPlayerFPv((void *) temp_r3);
    if (temp_r31 != get_current_floor()) {
        return 0;
    }
    temp_f0 = M2C_FIELD(arg0, f32 *, 0xAC);
    temp_f31 = temp_f0 * temp_f0;
    return (xz_distance_squared((void *) (temp_r3 + 0x38), (void *) (arg0 + 0x38)) < temp_f31) == 0;
}
#pragma pop

}
