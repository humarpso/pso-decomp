#include "pso/TAdFadeGC.h"

TAdFadeGC::~TAdFadeGC() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 get_main_phase(void);
s32 get_current_floor(void);
s32 get_field_3e4__10TObjPlayerFPv(void *);
s32 get_player_by_client_id(u32);
f32 xz_distance_squared(void *, void *);
bool fn_802C7ECC(u8 *arg0, u32 arg1);
extern const f32 TAdFadeGC__data_805DE5E8;
extern const f32 lbl_805DE604;
extern const f32 lbl_805DE60C;
extern const f32 lbl_805DE610;
void TAdFadeGC__sub_802C7DBC(void *arg0, void *arg1);
}

extern "C" {

void *__ct__9TAdFadeGCFv(void *arg0, void *arg1, void *arg2);
void render__9TAdFadeGCFv(void* p);
int TAdFadeGC__sub_802C79C8(void*);
void __ct__7TObjectFP7TObject(void *);
int all_parents_unqueued_for_destruction__7TObjectFv(void*);
void render__18TObjTradeCollisionFv(void);

void render__9TAdFadeGCFv(void* p) { if (all_parents_unqueued_for_destruction__7TObjectFv(p) != 0) { TAdFadeGC__sub_802C79C8(p); } }

extern M2C_UNK __vt__9TAdFadeGC[];
extern const f32 TAdFadeGC__data_805DE5E8;
extern void *lbl_805D3EF0;

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
bool fn_802C7ECC(u8 *arg0, u32 arg1) {
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
