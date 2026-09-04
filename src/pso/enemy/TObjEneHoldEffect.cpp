#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__17TObjEneHoldEffectFv(void *arg0, s16 arg1);
void request_destroy__11TBoss4Type2FUi(void *);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

extern M2C_UNK __vt__17TObjEneHoldEffect[];

void *__dt__17TObjEneHoldEffectFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TObjEneHoldEffect;
        if (M2C_FIELD(arg0, void **, 0x90) != NULL) { request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x90)); M2C_FIELD(arg0, M2C_UNK *, 0x90) = 0; }
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x800FD814
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 is_camera_visible__17TObjEneHoldEffectFPv(void *arg0);
s32 TCameraCtrl__sub_8006B370(f32);

u8 is_camera_visible__17TObjEneHoldEffectFPv(void *arg0) {
    int var_r31;

    var_r31 = 0;
    if ((TCameraCtrl__sub_8006B370(M2C_FIELD(arg0, f32 *, 0)) != 0) || (TCameraCtrl__sub_8006B370(M2C_FIELD(arg0, f32 *, 4)) != 0)) {
        var_r31 = 1;
    }
    return (u8) var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80142478
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 is_in_view__17TObjEneHoldEffectFPv(void *arg0);
s32 TCameraCtrl__sub_8006B370(f32);

u8 is_in_view__17TObjEneHoldEffectFPv(void *arg0) {
    s32 var_r31;

    var_r31 = 0;
    if ((TCameraCtrl__sub_8006B370(M2C_FIELD(arg0, f32 *, 0)) != 0) || (TCameraCtrl__sub_8006B370(M2C_FIELD(arg0, f32 *, 4)) != 0) || (TCameraCtrl__sub_8006B370(M2C_FIELD(arg0, f32 *, 8)) != 0)) {
        var_r31 = 1;
    }
    return var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8036B7E8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_target_in_range__17TObjEneHoldEffectFPv(void *arg0);
s32 check_target_index_valid__17TObjEneHoldEffectFPv(void *arg0);
s32 get_hold_effect_size_by_type__6TLobbyFv();
s32 TObjPlayer__sub_801C00E4(s16);
s32 is_target_valid__17TObjEneHoldEffectFPv();

s32 is_target_in_range__17TObjEneHoldEffectFPv(void *arg0) {
    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    if (((TObjPlayer__sub_801C00E4(M2C_FIELD(arg0, s16 *, 4)) == 0) && (M2C_FIELD(arg0, s16 *, 4) < 0)) || (M2C_FIELD(arg0, s16 *, 4) >= get_hold_effect_size_by_type__6TLobbyFv())) {
        return 0;
    }
    return 1;
}

s32 check_target_index_valid__17TObjEneHoldEffectFPv(void *arg0) {
    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    if (((TObjPlayer__sub_801C00E4(M2C_FIELD(arg0, s16 *, 4)) == 0) && (M2C_FIELD(arg0, s16 *, 4) < 0)) || (M2C_FIELD(arg0, s16 *, 4) >= get_hold_effect_size_by_type__6TLobbyFv())) {
        return 0;
    }
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8036B8F8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_target_in_view__17TObjEneHoldEffectFi(s32 arg0);
s32 is_in_view__17TObjEneHoldEffectFPv(s32);
s32 is_target_valid__17TObjEneHoldEffectFPv();

s32 is_target_in_view__17TObjEneHoldEffectFi(s32 arg0) {
    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    return (u32) __cntlzw(is_in_view__17TObjEneHoldEffectFPv(arg0 + 8)) >> 5;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8036B944
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_target_out_of_view__17TObjEneHoldEffectFi(s32 arg0);
s32 is_in_view__17TObjEneHoldEffectFPv(s32);
s32 is_target_valid__17TObjEneHoldEffectFPv();

s32 is_target_out_of_view__17TObjEneHoldEffectFi(s32 arg0) {
    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    if (is_in_view__17TObjEneHoldEffectFPv(arg0 + 8) != 0) {
        return 0;
    }
    return (u32) __cntlzw(is_in_view__17TObjEneHoldEffectFPv(arg0 + 0x14)) >> 5;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8036B9D0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_valid_target__17TObjEneHoldEffectFPv(void *arg0);
s32 get_hold_effect_size_by_type__6TLobbyFv();
s32 is_target_valid__17TObjEneHoldEffectFPv();
s32 TObjPlayer__sub_801C00E4(s16);

s32 is_valid_target__17TObjEneHoldEffectFPv(void *arg0) {
    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    if (((TObjPlayer__sub_801C00E4(M2C_FIELD(arg0, s16 *, 4)) == 0) && (M2C_FIELD(arg0, s16 *, 4) < 0)) || (M2C_FIELD(arg0, s16 *, 4) >= get_hold_effect_size_by_type__6TLobbyFv())) {
        return 0;
    }
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8036BB0C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_active_hold_bit__17TObjEneHoldEffectFPv(u8 *arg0);
s32 is_hit_target_active__17TObjEneHoldEffectFPv(u8 *arg0);
s32 is_target_valid__17TObjEneHoldEffectFPv();
s32 fn_800FD7C0(void *);

s32 get_active_hold_bit__17TObjEneHoldEffectFPv(u8 *arg0) {
    s16 v;
    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    v = M2C_FIELD(arg0, s16 *, 6);
    if (v < 0) {
        return 0;
    }
    return (u32) __cntlzw(fn_800FD7C0(arg0 + 8)) >> 5;
}

s32 is_hit_target_active__17TObjEneHoldEffectFPv(u8 *arg0) {
    s16 v;
    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    v = M2C_FIELD(arg0, s16 *, 6);
    if (v < 0) {
        return 0;
    }
    return (u32) __cntlzw(fn_800FD7C0(arg0 + 8)) >> 5;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8036BC88
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_valid__17TObjEneHoldEffectFPv(void *arg0);
s32 is_target_affected__17TObjEneHoldEffectFPv(void *arg0);
s32 is_active__17TObjEneHoldEffectFPv(void *arg0);
s32 is_target_valid__17TObjEneHoldEffectFPv();
s32 is_valid_technique_id__10TObjPlayerFs(s16);
s32 is_valid_technique_slot__10TObjPlayerFUc(u8);

s32 is_valid__17TObjEneHoldEffectFPv(void *arg0) {
    s8 temp_r4;
    s16 temp_r4_2;

    temp_r4 = M2C_FIELD(arg0, s8 *, 0);
    if (((temp_r4 != -1) && (temp_r4 < 0)) || (temp_r4 >= 6)) {
        return 0;
    }
    if (M2C_FIELD(arg0, s8 *, 1) < 0) {
        return 0;
    }
    temp_r4_2 = M2C_FIELD(arg0, s16 *, 2);
    if ((temp_r4_2 < 0) || (temp_r4_2 > 0xA)) {
        return 0;
    }
    if (M2C_FIELD(arg0, s16 *, 4) < 0) {
        return 0;
    }
    return ((u32) M2C_FIELD(arg0, s16 *, 6) >> 0x1FU) ^ 1;
}

s32 is_target_affected__17TObjEneHoldEffectFPv(void *arg0) {
    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    return is_valid_technique_id__10TObjPlayerFs(M2C_FIELD(arg0, s16 *, 4)) != 0 ? 1 : 0;
}

s32 is_active__17TObjEneHoldEffectFPv(void *arg0) {
    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    return is_valid_technique_slot__10TObjPlayerFUc(M2C_FIELD(arg0, u8 *, 4)) != 0 ? 1 : 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8036BE38
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjEneHoldEffect__sub_8036BE38(void *arg0);
s32 TObjEneHoldEffect__sub_8036BEB4(void *arg0);
s32 check_active__17TObjEneHoldEffectFi(s32 arg0);
s32 TObjEneHoldEffect__sub_8036BF10(s32);
s32 is_target_valid__17TObjEneHoldEffectFPv();
s32 is_valid_technique_id__10TObjPlayerFs(s32);

s32 TObjEneHoldEffect__sub_8036BE38(void *arg0) {
    s8 b3;

    if (is_valid_technique_id__10TObjPlayerFs((s32) M2C_FIELD(arg0, s8 *, 0)) == 0) {
        return 0;
    }
    if (M2C_FIELD(arg0, s8 *, 1) < 0) {
        return 0;
    }
    b3 = M2C_FIELD(arg0, s8 *, 3);
    if ((b3 < 0) || (b3 > 0xA)) {
        return 0;
    }
    return 1;
}

s32 TObjEneHoldEffect__sub_8036BEB4(void *arg0) {
    return ((u32) M2C_FIELD(arg0, s16 *, 2) >> 0x1FU) ^ 1;
}

s32 check_active__17TObjEneHoldEffectFi(s32 arg0) {
    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    return TObjEneHoldEffect__sub_8036BF10(arg0 + 4) != 0 ? 1 : 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8036BF8C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjEneHoldEffect__sub_8036BF8C(void *arg0);
s32 is_valid_attack_index__17TObjEneHoldEffectFPv(void *arg0);
s32 is_valid_hold_index__17TObjEneHoldEffectFPv(void *arg0);
s32 can_impose_attack__17TObjEneHoldEffectFPv(void *arg0);
s32 get_move_bit__17TObjEneHoldEffectFi(s32 arg0);
s32 is_walk_target_active__17TObjEneHoldEffectFi(s32 arg0);
s32 can_set_position__17TObjEneHoldEffectFPv(u8 *arg0);
s32 can_hold__17TObjEneHoldEffectFPv(u8 *arg0);
s32 is_in_view__17TObjEneHoldEffectFPv(void *);
s32 is_target_valid__17TObjEneHoldEffectFPv();
s32 is_camera_visible__17TObjEneHoldEffectFPv(s32);

s32 TObjEneHoldEffect__sub_8036BF8C(void *arg0) {
    return ((u32) M2C_FIELD(arg0, s16 *, 2) >> 0x1FU) ^ 1;
}

s32 is_valid_attack_index__17TObjEneHoldEffectFPv(void *arg0) {
    s16 temp_r3;

    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    temp_r3 = M2C_FIELD(arg0, s16 *, 6);
    if ((temp_r3 < 0) || (temp_r3 >= 3)) {
        return 0;
    }
    return 1;
}

s32 is_valid_hold_index__17TObjEneHoldEffectFPv(void *arg0) {
    s16 temp_r3;

    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    temp_r3 = M2C_FIELD(arg0, s16 *, 6);
    if ((temp_r3 < 0) || (temp_r3 >= 3)) {
        return 0;
    }
    return 1;
}

s32 can_impose_attack__17TObjEneHoldEffectFPv(void *arg0) {
    s16 temp_r3;

    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    temp_r3 = M2C_FIELD(arg0, s16 *, 6);
    if ((temp_r3 < 0) || (temp_r3 >= 3)) {
        return 0;
    }
    return 1;
}

s32 get_move_bit__17TObjEneHoldEffectFi(s32 arg0) {
    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    return (u32) __cntlzw(is_camera_visible__17TObjEneHoldEffectFPv(arg0 + 4)) >> 5;
}

s32 is_walk_target_active__17TObjEneHoldEffectFi(s32 arg0) {
    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    return (u32)__cntlzw(is_camera_visible__17TObjEneHoldEffectFPv(arg0 + 4)) >> 5;
}

s32 can_set_position__17TObjEneHoldEffectFPv(u8 *arg0) {
    s16 temp_r3;

    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    temp_r3 = M2C_FIELD(arg0, s16 *, 4);
    if ((temp_r3 < 0) || (temp_r3 >= 2)) {
        return 0;
    }
    if ((s16) M2C_FIELD(arg0, s16 *, 8) > 0x12) {
        return 0;
    }
    return (u32)__cntlzw(is_in_view__17TObjEneHoldEffectFPv(arg0 + 0xC)) >> 5;
}

s32 can_hold__17TObjEneHoldEffectFPv(u8 *arg0) {
    s16 temp_r3;

    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    temp_r3 = M2C_FIELD(arg0, s16 *, 4);
    if ((temp_r3 < 0) || (temp_r3 >= 2)) {
        return 0;
    }
    if ((s16) M2C_FIELD(arg0, s16 *, 8) > 0x12) {
        return 0;
    }
    return (u32)__cntlzw(is_in_view__17TObjEneHoldEffectFPv(arg0 + 0xC)) >> 5;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8036C268
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 can_shrink_player__17TObjEneHoldEffectFPv(void *arg0);
s32 is_valid_index__17TObjEneHoldEffectFPv(void *arg0);
s32 is_target_valid__17TObjEneHoldEffectFPv();

extern f32 lbl_805E03A8;
extern f32 lbl_805E03AC;

s32 can_shrink_player__17TObjEneHoldEffectFPv(void *arg0) {
    f32 temp_f1;

    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    temp_f1 = M2C_FIELD(arg0, f32 *, 4);
    if ((temp_f1 < lbl_805E03A8) || (temp_f1 > lbl_805E03AC)) {
        return 0;
    }
    return 1;
}

s32 is_valid_index__17TObjEneHoldEffectFPv(void *arg0) {
    s16 temp_r3;

    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    temp_r3 = M2C_FIELD(arg0, s16 *, 4);
    if ((temp_r3 < 0) || (temp_r3 >= 4)) {
        return 0;
    }
    return ((u32) M2C_FIELD(arg0, s16 *, 6) >> 0x1FU) ^ 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8036C3A8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_in_room__17TObjEneHoldEffectFPv(void *arg0);
s32 is_ready__17TObjEneHoldEffectFPv(void *arg0);
s32 is_revive_valid__17TObjEneHoldEffectFPv(void *arg0);
s32 is_target_valid__17TObjEneHoldEffectFPv();
u16 TObjRoomId__sub_801A1DB8(u16);

s32 is_in_room__17TObjEneHoldEffectFPv(void *arg0) {
    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    return (u32) __cntlzw(TObjRoomId__sub_801A1DB8(M2C_FIELD(arg0, u16 *, 4))) >> 5;
}

s32 is_ready__17TObjEneHoldEffectFPv(void *arg0) {
    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    return ((u32) M2C_FIELD(arg0, s16 *, 4) >> 0x1FU) ^ 1;
}

s32 is_revive_valid__17TObjEneHoldEffectFPv(void *arg0) {
    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    return (u32) __cntlzw(TObjRoomId__sub_801A1DB8(M2C_FIELD(arg0, u16 *, 4))) >> 5;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8036C4E0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_valid_hold_params__17TObjEneHoldEffectFPv(void *arg0);
s32 TObjEneHoldEffect__sub_8036C5C8(void *arg0);
s32 is_target_valid__17TObjEneHoldEffectFPv();
u16 TObjRoomId__sub_801A1DB8(u16);
u32 TPhotonMylla__sub_80154CB4(u16);

s32 is_valid_hold_params__17TObjEneHoldEffectFPv(void *arg0) {
    s16 temp_r3;

    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    if (M2C_FIELD(arg0, s16 *, 4) < 0) {
        return 0;
    }
    if (M2C_FIELD(arg0, s16 *, 6) < 0) {
        return 0;
    }
    if (M2C_FIELD(arg0, s16 *, 8) < 0) {
        return 0;
    }
    if (M2C_FIELD(arg0, s16 *, 0xA) < 0) {
        return 0;
    }
    if (M2C_FIELD(arg0, s16 *, 0xC) < 0) {
        return 0;
    }
    if (M2C_FIELD(arg0, s16 *, 0xE) < 0) {
        return 0;
    }
    if (M2C_FIELD(arg0, s16 *, 0x10) < 0) {
        return 0;
    }
    temp_r3 = M2C_FIELD(arg0, s16 *, 0x12);
    if ((temp_r3 < 0) || (temp_r3 >= 2)) {
        return 0;
    }
    return 1;
}

s32 TObjEneHoldEffect__sub_8036C5C8(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    if ((temp_r0 < 0) || (temp_r0 >= 3)) {
        return 0;
    }
    if (M2C_FIELD(arg0, s16 *, 8) < 0) {
        return 0;
    }
    if (TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0xA)) == 0U) {
        return 0;
    }
    return (u32) __cntlzw((u32) TObjRoomId__sub_801A1DB8(M2C_FIELD(arg0, u16 *, 0xA))) >> 5;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8036C69C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 can_impose_hold__17TObjEneHoldEffectFPv(u8 *arg0);
s32 is_target_valid__17TObjEneHoldEffectFPv();
s32 is_camera_visible__17TObjEneHoldEffectFPv(void *);

extern const f32 lbl_805E03A8;

s32 can_impose_hold__17TObjEneHoldEffectFPv(u8 *arg0) {
    u32 cond;
    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    if (is_camera_visible__17TObjEneHoldEffectFPv(arg0 + 8) != 0) {
        return 0;
    }
    cond = (M2C_FIELD(arg0, f32 *, 0x10) < lbl_805E03A8);
    return (u32)__cntlzw(cond) >> 5;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8036C734
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_drop_visible__17TObjEneHoldEffectFPv(u8 *arg0);
s32 is_valid_range__17TObjEneHoldEffectFPv(void *arg0);
s32 is_in_view__17TObjEneHoldEffectFPv(void *);
s32 is_target_valid__17TObjEneHoldEffectFPv();

s32 is_drop_visible__17TObjEneHoldEffectFPv(u8 *arg0) {
    s16 temp_r3;

    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    if (M2C_FIELD(arg0, s16 *, 4) < 0) {
        return 0;
    }
    temp_r3 = M2C_FIELD(arg0, s16 *, 6);
    if ((temp_r3 < 0) || (temp_r3 > 0x12)) {
        return 0;
    }
    return (u32)__cntlzw(is_in_view__17TObjEneHoldEffectFPv(arg0 + 0xC)) >> 5;
}

s32 is_valid_range__17TObjEneHoldEffectFPv(void *arg0) {
    s32 temp_r0;

    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    if ((temp_r0 < 0) || (temp_r0 > 0x1E)) {
        return 0;
    }
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8036C884
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_index_valid__17TObjEneHoldEffectFPv(void *arg0);
s32 is_valid_equip_slot__17TObjEneHoldEffectFPv(void *arg0);
s32 check_teleport_ready__17TObjEneHoldEffectFi(s32 arg0);
s32 is_in_view__17TObjEneHoldEffectFPv(s32);
s32 is_target_valid__17TObjEneHoldEffectFPv();

s32 is_index_valid__17TObjEneHoldEffectFPv(void *arg0) {
    s32 temp_r0;

    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 8);
    if ((temp_r0 < 0) || (temp_r0 >= 0xD)) {
        return 0;
    }
    return 1;
}

s32 is_valid_equip_slot__17TObjEneHoldEffectFPv(void *arg0) {
    s32 temp_r0;

    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 8);
    if ((temp_r0 < 0) || (temp_r0 >= 0xD)) {
        return 0;
    }
    return 1;
}

s32 check_teleport_ready__17TObjEneHoldEffectFi(s32 arg0) {
    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    return (u32)__cntlzw(is_in_view__17TObjEneHoldEffectFPv(arg0 + 8)) >> 5;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8036CA9C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_index_in_range__17TObjEneHoldEffectFPv(void *arg0);
s32 is_position_visible__17TObjEneHoldEffectFPv(u8 *arg0);
s32 TObjEneHoldEffect__sub_8036CB60(void *arg0);
s32 is_in_view__17TObjEneHoldEffectFPv(void *);
s32 is_target_valid__17TObjEneHoldEffectFPv();
s32 is_matching_id__6TLobbyFiUs(void *, u16);

s32 is_index_in_range__17TObjEneHoldEffectFPv(void *arg0) {
    s32 temp_r0;

    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    if ((temp_r0 < 0) || (temp_r0 > 0x12)) {
        return 0;
    }
    return 1;
}

s32 is_position_visible__17TObjEneHoldEffectFPv(u8 *arg0) {
    s32 temp_r0;

    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    if ((temp_r0 < 0) || (temp_r0 > 0x12)) {
        return 0;
    }
    return ((u32)__cntlzw(is_in_view__17TObjEneHoldEffectFPv(arg0 + 8))) >> 5;
}

s32 TObjEneHoldEffect__sub_8036CB60(void *arg0) {
    s32 temp_r0;

    if (is_matching_id__6TLobbyFiUs(arg0, M2C_FIELD(arg0, u16 *, 2)) != 0) {
        return 0;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    if ((temp_r0 < 0) || (temp_r0 > 0x12)) {
        return 0;
    }
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8036CC60
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_valid_team_id__17TObjEneHoldEffectFPv(void *arg0);
s32 is_valid_score_index__17TObjEneHoldEffectFPv(void *arg0);
s32 is_target_valid__17TObjEneHoldEffectFPv();
u32 TPhotonMylla__sub_80154CB4(u16);

s32 is_valid_team_id__17TObjEneHoldEffectFPv(void *arg0) {
    s32 temp_r0;

    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    if ((temp_r0 < 0) || (temp_r0 >= 0xD)) {
        return 0;
    }
    return 1;
}

s32 is_valid_score_index__17TObjEneHoldEffectFPv(void *arg0) {
    if (TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 4)) == 0U) {
        return 0;
    }
    return ((u32) M2C_FIELD(arg0, s16 *, 6) >> 0x1FU) ^ 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8036CD58
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_index_below_1d__17TObjEneHoldEffectFPv(void *arg0);
s32 is_target_valid__17TObjEneHoldEffectFPv();

s32 is_index_below_1d__17TObjEneHoldEffectFPv(void *arg0) {
    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    return (u8) M2C_FIELD(arg0, u8 *, 4) <= 0x1DU ? 1 : 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8036CDA8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_target_valid__17TObjEneHoldEffectFPv(void *arg0);
u32 TPhotonMylla__sub_80154CB4(u16);
s32 is_matching_id__6TLobbyFiUs(void *, u16);

s32 is_target_valid__17TObjEneHoldEffectFPv(void *arg0) {
    if (TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 2)) == 0U) {
        return 0;
    }
    return (u32) __cntlzw(is_matching_id__6TLobbyFiUs(arg0, M2C_FIELD(arg0, u16 *, 2))) >> 5;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8036D070
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void create__17TObjEneHoldEffectFPvPvPv(void *arg0, void *arg1, void *arg2);
void *TObjEneHoldEffect__ct(void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

void create__17TObjEneHoldEffectFPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0xA0);
    if (o != NULL) {
        TObjEneHoldEffect__ct(o, arg0, arg1, arg2);
    }
}

}
#endif
#endif
