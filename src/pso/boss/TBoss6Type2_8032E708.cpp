#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6Type2__sub_8032E708(void* p, s32 v);
int TBoss6Type2__sub_8032E748(void);
int TBoss6Type2__sub_8032E770(void*, void*);
s32 TBoss6Type2__sub_8032EAB8(void *arg0, s32 arg1);
void TBoss6Type2__sub_8032F2F0(void* p, void* q);
f32 apply_direction_sign__11TBoss6Type2FPvf(void *arg0, f32 farg0);
void compute_random_dir_vec__11TBoss6Type2FiPvii(s32 arg0, u8 *arg1, s32 arg2, s32 arg3);
void set_action_field_0x408__11TBoss6Type2FPvs(void* p, s16 v);
void set_anim_frame__11TBoss6Type2FPvi(void* p, s32 v);
void set_target_nodes__11TBoss6Type2FPvPvPv(void* p, void* a1, void* a2);
void update_all_parts__11TBoss6Type2FPv(void* p);
void update_rotation_ramp__11TBoss6Type2FPv(void *arg0);
s32 TBoss6Type2__sub_8032F034(void *);
s32 TBoss6Type2__sub_8032F174();
M2C_UNK TBoss6Type2__sub_8032F418(void *);
f32 TBoss8Dragon__sub_803D64C0(void *);
f32 TBoss8Dragon__sub_803D64DC(void *);
s32 TLobby__sub_800C6C10();
f32 get_random_float__8TObjFishFv(f32);
s32 get_rotation_timer__11TBoss6Type2FPv(u32);
int update_segment_angles__11TBoss6Type2FPv(void*);

void TBoss6Type2__sub_8032E708(void* p, s32 v) { *(s32*)((char*)p + 0x40c) = v; }
void set_action_field_0x408__11TBoss6Type2FPvs(void* p, s16 v) { *(s16*)((char*)p + 0x408) = v; }
void set_target_nodes__11TBoss6Type2FPvPvPv(void* p, void* a1, void* a2) { *(void**)((char*)p + 0x2e4) = a1; *(void**)((char*)p + 0x390) = a2; update_segment_angles__11TBoss6Type2FPv(p); }
void set_anim_frame__11TBoss6Type2FPvi(void* p, s32 v) { *(s32*)((char*)p + 0x37c) = v; }

int TBoss6Type2__sub_8032E748(void) { return 0; }
int TBoss6Type2__sub_8032E770(void*, void*) { return 0; }

void update_all_parts__11TBoss6Type2FPv(void* p) { { int i; for (i = 0; i < 4; i++) { TBoss6Type2__sub_8032E770((void*)(p), (void*)((void*)i)); } } }

s32 TBoss6Type2__sub_8032EAB8(void *arg0, s32 arg1) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x384) == 0) {
        return arg1;
    }
    return -arg1;
}

f32 apply_direction_sign__11TBoss6Type2FPvf(void *arg0, f32 farg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x384) != 0) {
        return -farg0;
    }
    return farg0;
}

extern const f32 lbl_805DF7F4;

void compute_random_dir_vec__11TBoss6Type2FiPvii(s32 arg0, u8 *arg1, s32 arg2, s32 arg3) {
    f32 temp_f31;
    f32 temp_f30;

    temp_f31 = -TBoss8Dragon__sub_803D64C0((void *) (arg3));
    temp_f30 = lbl_805DF7F4 - get_random_float__8TObjFishFv((f32) (temp_f31));
    M2C_FIELD(arg1, f32 *, 0) = (f32) (temp_f30 * TBoss8Dragon__sub_803D64C0((void *) (arg2)));
    M2C_FIELD(arg1, f32 *, 4) = temp_f31;
    M2C_FIELD(arg1, f32 *, 8) = (f32) (temp_f30 * TBoss8Dragon__sub_803D64DC((void *) (arg2)));
}

extern const f32 lbl_805DF7F4;
extern const f32 lbl_805DF7FC;
extern const f32 lbl_805DF81C;
extern const f32 lbl_805DF820;
extern const f32 lbl_805DF824;

void update_rotation_ramp__11TBoss6Type2FPv(void *arg0) {
    if ((TBoss6Type2__sub_8032F174() == 0) || (TBoss6Type2__sub_8032F034(arg0) == 0)) {
        M2C_FIELD(arg0, f32 *, 0x3BC) = (f32) lbl_805DF7FC;
        M2C_FIELD(arg0, f32 *, 0x3B8) = (f32) (M2C_FIELD(arg0, f32 *, 0x3B8) + lbl_805DF81C);
        if (M2C_FIELD(arg0, f32 *, 0x3B8) < lbl_805DF7FC) {
            M2C_FIELD(arg0, f32 *, 0x3B8) = (f32) lbl_805DF7FC;
        }
    } else if (lbl_805DF7F4 == M2C_FIELD(arg0, f32 *, 0x3B8)) {
        M2C_FIELD(arg0, f32 *, 0x3BC) = (f32) (M2C_FIELD(arg0, f32 *, 0x3BC) + lbl_805DF820);
        if (M2C_FIELD(arg0, f32 *, 0x3BC) > lbl_805DF7F4) {
            M2C_FIELD(arg0, f32 *, 0x3BC) = (f32) lbl_805DF7F4;
        }
        if (lbl_805DF7F4 == M2C_FIELD(arg0, f32 *, 0x3BC)) {
            if (TLobby__sub_800C6C10() != 0) {
                u32 tmp378 = (u32) M2C_FIELD(arg0, u32 *, 0x378);
                if (tmp378 != 0U) {
                    if (get_rotation_timer__11TBoss6Type2FPv(tmp378) == 0) {
                        TBoss6Type2__sub_8032F418(arg0);
                    }
                }
            }
            M2C_FIELD(arg0, f32 *, 0x3B8) = (f32) lbl_805DF7FC;
            M2C_FIELD(arg0, f32 *, 0x3BC) = (f32) lbl_805DF7FC;
        }
    } else {
        M2C_FIELD(arg0, f32 *, 0x3BC) = (f32) lbl_805DF7FC;
        M2C_FIELD(arg0, f32 *, 0x3B8) = (f32) (M2C_FIELD(arg0, f32 *, 0x3B8) + lbl_805DF824);
        if (M2C_FIELD(arg0, f32 *, 0x3B8) > lbl_805DF7F4) {
            M2C_FIELD(arg0, f32 *, 0x3B8) = (f32) lbl_805DF7F4;
        }
    }
}

void TBoss6Type2__sub_8032F2F0(void* p, void* q) { *(f32*)((char*)p + 0x0) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); }

}
