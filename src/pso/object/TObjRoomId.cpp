#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjRoomId__sub_801A1D94(void *arg0);
M2C_UNK set_state_flags__10TObjPlayerFPvUi(void *, M2C_UNK);

void TObjRoomId__sub_801A1D94(void *arg0) {
    set_state_flags__10TObjPlayerFPvUi(arg0, 0x02000000);
}

}
#else
#if PSO_CLASS_PACKAGE == 0x800FD8C8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_debug_line__10TObjRoomIdFUiiii(u32 arg0, s32 arg1, s32 arg2, s32 arg3);
M2C_UNK set_global_count__12TObjNpcEnemyFi(M2C_UNK);
M2C_UNK TObjEneBm5GibonU__sub_803D853C(s32, s32, ...);

extern u32 lbl_805D53BC;

void draw_debug_line__10TObjRoomIdFUiiii(u32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg0 == (u32) lbl_805D53BC) {
        set_global_count__12TObjNpcEnemyFi(0xFF00FF);
        TObjEneBm5GibonU__sub_803D853C((arg1 << 0x10) | arg2, arg3);
        set_global_count__12TObjNpcEnemyFi(0xF0F0F0FF);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80141CF4
#include "types.h"

extern "C" {

s32 TObjMapWarp__sub_80141C68(s32 arg0, s16 arg1);
int __dl__FPv();
void TObjMapWarp__sub_80141CA4(void* p);
void TObjMapWarp__sub_80141CB0(void);
void TObjMapWarp__sub_80141CB4(void);
void TObjMapWarp__sub_80141CB8(void);
void TOTrapAncient02R__sub_80141CF0(void);
void TObjRoomId__sub_80141CF4(void);

void TObjRoomId__sub_80141CF4(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A1C80
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__10TObjRoomIdFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

extern M2C_UNK __vt__10TObjRoomId[];

void *__dt__10TObjRoomIdFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TObjRoomId;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A1D48
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__10TObjRoomIdFPv(void *arg0);
void *TObjRoomId__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__10TObjRoomIdFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x9C);
    if (o != NULL) {
        o = TObjRoomId__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A1DDC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 is_current_room__10TObjRoomIdFPv(void *arg0);
s32 is_split_screen();

extern s32 lbl_805D53A0;

u8 is_current_room__10TObjRoomIdFPv(void *arg0) {
    if (is_split_screen() != 0) {
        return 1U;
    }
    return (u8) (M2C_FIELD(arg0, u16 *, 0x1C) == lbl_805D53A0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A1E2C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u16 TLobby__sub_801A2078(s32);
u16 TLobby__sub_801A20C8(s32);
u16 fn_801A210C(s32);
s32 TContainerAncient01__sub_8020335C(void);
s32 get_global_state__14TOKeyMachine01Fv(void);
int TObjRoomId__sub_801A1E2C(void);
void TLobby__sub_801A1FD8(void);

int TObjRoomId__sub_801A1E2C(void) { return 0; }
void set__10TObjRoomIdFPvs(void *arg0, s16 arg1) {
    u32 temp_r3;

    if ((u16) M2C_FIELD(arg0, u16 *, 0x1C) < 0x1000U) {
        temp_r3 = get_global_state__14TOKeyMachine01Fv();
        if ((temp_r3 <= 2U) || ((s32) temp_r3 == 0x12) || (TContainerAncient01__sub_8020335C() != 0) || ((s32) temp_r3 == 0xC) || ((s32) temp_r3 == 0x20)) {
            M2C_FIELD(arg0, s16 *, 0x2E) = arg1;
        }
        M2C_FIELD(arg0, s16 *, 0x28) = arg1;
        return;
    }
    M2C_FIELD(arg0, s16 *, 0x28) = arg1;
}

}
#endif
#endif
