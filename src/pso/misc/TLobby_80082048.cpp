#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80082080_lbl_8048E194 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80082080_lbl_8048E194_size[sizeof(RecoveredGlobal_80082080_lbl_8048E194) == 0x10 ? 1 : -1];

#include <stddef.h>
struct RecoveredFields_8008213C_arg0 {
    u8 unknown_0[0x18];
    M2C_UNK * field_18;
    u8 unknown_1C[0x18];
    s32 field_34;
    u8 unknown_38[0x28];
    s32 field_60;
    u8 unknown_64[0x4];
    f32 field_68;
    f32 field_6C;
    f32 field_70;
    u8 unknown_74[0x2C0];
    s32 field_334;
    f32 field_338;
    s32 field_33C;
    f32 field_340;
    f32 field_344;
    f32 field_348;
    f32 field_34C;
    s32 field_350;
    s32 field_354;
    s16 field_358;
};

struct RecoveredFields_8008213C_arg2 {
    u8 unknown_0[0xC];
    f32 field_C;
};

struct RecoveredFields_8008213C_arg1 {
    u8 unknown_0[0x60];
    s32 field_60;
    u8 unknown_64[0x40];
    u8 * field_A4;
};

struct RecoveredFields_8008213C_temp_r3 {
    u8 unknown_0[0x10];
    f32 field_10;
};

extern "C" {
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_80082080_lbl_8048E194 lbl_8048E194;
extern u32 lbl_805D4ED0;
void TLobby__sub_80082080(void);
M2C_UNK TObjPlayer__sub_80019038(void *, void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s16 obj_getField1c(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 get_bml_model(void *, int);
u8 *get_quest_id__12TQuestListVMFPv(void *);
s32 create_particle_emitter(void *, int);
M2C_UNK refresh_collision_body_centers(void *);
extern M2C_UNK lbl_8048E1A4[];
extern u32 lbl_805D4ED0;
extern s32 tl_05;
extern const f32 lbl_805D9378;
extern const f32 lbl_805D9398;
extern const f32 lbl_805D939C;
extern const f32 lbl_805D93A0;
u8 *TObjPlayer__sub_8008213C(u8 *arg0, u8 *arg1, u8 *arg2);
}

extern "C" {

void *TObjPlayer__sub_800820D0(void *arg0, s16 arg1);
int TObjPlayer__sub_800822B0(void);
int TObjPlayer__sub_800822B8(void);
f32 TObjPlayer__sub_800822C0(void);
f32 TObjPlayer__sub_800822C8(void);
void destroy_global_singleton__6TLobbyFv(void);
void TLobby__sub_8001FE7C(void*, int);
void __dl__7TObjectFPv(void *);
void destroy_motion_object__10TObjPlayerFPvs(void *, int);
void request_destroy__11TBoss4Type2FUi(void *);

extern u32 lbl_805D4ED0;

void destroy_global_singleton__6TLobbyFv(void) {
    if ((u32) lbl_805D4ED0 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D4ED0, 1);
        lbl_805D4ED0 = 0U;
    }
}

extern M2C_UNK lbl_8048E1A4[];

void TLobby__sub_80082080(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 5, &lbl_8048E194.value, 0, 0, 0));
    }
    (*(s32 *)&lbl_805D4ED0) = var_r0;
}

void *TObjPlayer__sub_800820D0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8048E1A4;
        if (M2C_FIELD(arg0, void **, 0x350) != NULL) { request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x350)); }
        destroy_motion_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

#pragma push
#pragma fp_contract on
typedef char RecoveredFields_8008213C_arg0_18_offset[offsetof(RecoveredFields_8008213C_arg0, field_18) == 0x18 ? 1 : -1];
typedef char RecoveredFields_8008213C_arg0_34_offset[offsetof(RecoveredFields_8008213C_arg0, field_34) == 0x34 ? 1 : -1];
typedef char RecoveredFields_8008213C_arg0_60_offset[offsetof(RecoveredFields_8008213C_arg0, field_60) == 0x60 ? 1 : -1];
typedef char RecoveredFields_8008213C_arg0_68_offset[offsetof(RecoveredFields_8008213C_arg0, field_68) == 0x68 ? 1 : -1];
typedef char RecoveredFields_8008213C_arg0_6C_offset[offsetof(RecoveredFields_8008213C_arg0, field_6C) == 0x6C ? 1 : -1];
typedef char RecoveredFields_8008213C_arg0_70_offset[offsetof(RecoveredFields_8008213C_arg0, field_70) == 0x70 ? 1 : -1];
typedef char RecoveredFields_8008213C_arg0_334_offset[offsetof(RecoveredFields_8008213C_arg0, field_334) == 0x334 ? 1 : -1];
typedef char RecoveredFields_8008213C_arg0_338_offset[offsetof(RecoveredFields_8008213C_arg0, field_338) == 0x338 ? 1 : -1];
typedef char RecoveredFields_8008213C_arg0_33C_offset[offsetof(RecoveredFields_8008213C_arg0, field_33C) == 0x33C ? 1 : -1];
typedef char RecoveredFields_8008213C_arg0_340_offset[offsetof(RecoveredFields_8008213C_arg0, field_340) == 0x340 ? 1 : -1];
typedef char RecoveredFields_8008213C_arg0_344_offset[offsetof(RecoveredFields_8008213C_arg0, field_344) == 0x344 ? 1 : -1];
typedef char RecoveredFields_8008213C_arg0_348_offset[offsetof(RecoveredFields_8008213C_arg0, field_348) == 0x348 ? 1 : -1];
typedef char RecoveredFields_8008213C_arg0_34C_offset[offsetof(RecoveredFields_8008213C_arg0, field_34C) == 0x34C ? 1 : -1];
typedef char RecoveredFields_8008213C_arg0_350_offset[offsetof(RecoveredFields_8008213C_arg0, field_350) == 0x350 ? 1 : -1];
typedef char RecoveredFields_8008213C_arg0_354_offset[offsetof(RecoveredFields_8008213C_arg0, field_354) == 0x354 ? 1 : -1];
typedef char RecoveredFields_8008213C_arg0_358_offset[offsetof(RecoveredFields_8008213C_arg0, field_358) == 0x358 ? 1 : -1];
typedef char RecoveredFields_8008213C_arg2_C_offset[offsetof(RecoveredFields_8008213C_arg2, field_C) == 0xC ? 1 : -1];
typedef char RecoveredFields_8008213C_arg1_60_offset[offsetof(RecoveredFields_8008213C_arg1, field_60) == 0x60 ? 1 : -1];
typedef char RecoveredFields_8008213C_arg1_A4_offset[offsetof(RecoveredFields_8008213C_arg1, field_A4) == 0xA4 ? 1 : -1];
typedef char RecoveredFields_8008213C_temp_r3_10_offset[offsetof(RecoveredFields_8008213C_temp_r3, field_10) == 0x10 ? 1 : -1];
u8 *TObjPlayer__sub_8008213C(u8 *arg0, u8 *arg1, u8 *arg2) {
    u8 *temp_r3;
    TObjPlayer__sub_80019038((void *) (arg0), (void *) (tl_05));
    ((RecoveredFields_8008213C_arg0 *)arg0)->field_18 = lbl_8048E1A4;
    ((RecoveredFields_8008213C_arg0 *)arg0)->field_34 = get_bml_model((void *) ((*(s32 *)&lbl_805D4ED0)), (int) (1));
    if (arg1 != NULL) {
        ((RecoveredFields_8008213C_arg0 *)arg0)->field_358 = obj_getField1c((void *) (arg1));
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x35C), (void *) (arg1 + 0x38));
        if (arg2 != NULL) {
            VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg2 + 0x1C));
            ((RecoveredFields_8008213C_arg0 *)arg0)->field_338 = (f32) (lbl_805D9398 * ((RecoveredFields_8008213C_arg2 *)arg2)->field_C);
        } else if ((void *) ((RecoveredFields_8008213C_arg1 *)arg1)->field_A4 != NULL) {
            refresh_collision_body_centers((void *) (arg1));
            VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (((RecoveredFields_8008213C_arg1 *)arg1)->field_A4 + 0x1C));
            ((RecoveredFields_8008213C_arg0 *)arg0)->field_338 = (f32) (lbl_805D9398 * M2C_FIELD(((RecoveredFields_8008213C_arg1 *)arg1)->field_A4, f32 *, 0xC));
        } else {
            VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg1 + 0x2FC));
            temp_r3 = get_quest_id__12TQuestListVMFPv(arg1);
            if (temp_r3 != NULL) {
                ((RecoveredFields_8008213C_arg0 *)arg0)->field_338 = (f32) (lbl_805D939C * ((RecoveredFields_8008213C_temp_r3 *)temp_r3)->field_10);
            } else {
                ((RecoveredFields_8008213C_arg0 *)arg0)->field_338 = (f32) lbl_805D93A0;
            }
        }
        ((RecoveredFields_8008213C_arg0 *)arg0)->field_60 = (s32) ((RecoveredFields_8008213C_arg1 *)arg1)->field_60;
        ((RecoveredFields_8008213C_arg0 *)arg0)->field_70 = (f32) (*(const f32 *)&lbl_805D9378);
        ((RecoveredFields_8008213C_arg0 *)arg0)->field_6C = (f32) (*(const f32 *)&lbl_805D9378);
        ((RecoveredFields_8008213C_arg0 *)arg0)->field_68 = (f32) (*(const f32 *)&lbl_805D9378);
        ((RecoveredFields_8008213C_arg0 *)arg0)->field_334 = 0;
        ((RecoveredFields_8008213C_arg0 *)arg0)->field_33C = 0;
        ((RecoveredFields_8008213C_arg0 *)arg0)->field_340 = (f32) (*(const f32 *)&lbl_805D9378);
        ((RecoveredFields_8008213C_arg0 *)arg0)->field_344 = (f32) (*(const f32 *)&lbl_805D9378);
        ((RecoveredFields_8008213C_arg0 *)arg0)->field_348 = (f32) (*(const f32 *)&lbl_805D9378);
        ((RecoveredFields_8008213C_arg0 *)arg0)->field_34C = (f32) (*(const f32 *)&lbl_805D9378);
        ((RecoveredFields_8008213C_arg0 *)arg0)->field_350 = create_particle_emitter((void *) (arg0 + 0x38), (int) (0x12E));
        ((RecoveredFields_8008213C_arg0 *)arg0)->field_354 = 0;
    } else {
        ((RecoveredFields_8008213C_arg0 *)arg0)->field_350 = 0;
        queue_destruction__7TObjectFv((void *) (arg0));
    }
    return arg0;
}
#pragma pop

int TObjPlayer__sub_800822B0(void) { return 1; }
int TObjPlayer__sub_800822B8(void) { return 1; }

extern const f32 lbl_805D9378;

f32 TObjPlayer__sub_800822C0(void) {
    return lbl_805D9378;
}

extern const f32 lbl_805D9378;

f32 TObjPlayer__sub_800822C8(void) {
    return lbl_805D9378;
}

}
