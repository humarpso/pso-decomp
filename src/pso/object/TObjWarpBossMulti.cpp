#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update__17TObjWarpBossMultiFPv(void *arg0);
s32 get_global_state__14TOKeyMachine01Fv();

void update__17TObjWarpBossMultiFPv(void *arg0) {
    s32 temp_r0;

    if (get_global_state__14TOKeyMachine01Fv() == 0) {
        M2C_FIELD(arg0, s32 *, 0xF4) = -1;
    } else {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x88);
        if ((temp_r0 < 0) || (temp_r0 > 0xFF)) {
            M2C_FIELD(arg0, s32 *, 0xF4) = -1;
        } else {
            M2C_FIELD(arg0, s32 *, 0xF4) = temp_r0;
        }
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xF4) >= 0) {
        M2C_FIELD(arg0, s32 *, 0xF0) = 0;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0xF0) = 1;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8019DD34
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__17TObjWarpBossMultiFPv(void *arg0);
void *TObjWarpBossMulti__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__17TObjWarpBossMultiFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x100);
    if (o != NULL) {
        o = TObjWarpBossMulti__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8019DD80
#include "types.h"

extern "C" {

void init_warp_params__17TObjWarpBossMultiFPv(void* a0);
int fn_8019F9AC(void);
int fn_8019F9B4(void);
int fn_8019F9BC(void);
int fn_8019F9C4(void);
int fn_8019F9CC(void);
int fn_8019F9D4(void);
int fn_8019F9DC(void);

    extern const float lbl_805DC000;
    extern const float lbl_805DC004;
void init_warp_params__17TObjWarpBossMultiFPv(void* a0) { *(int*)((char*)a0 + 0xd4) = fn_8019F9DC(); *(int*)((char*)a0 + 0xd8) = fn_8019F9D4(); *(int*)((char*)a0 + 0xdc) = fn_8019F9CC(); *(int*)((char*)a0 + 0xe0) = fn_8019F9C4(); *(int*)((char*)a0 + 0xe4) = fn_8019F9BC(); *(int*)((char*)a0 + 0xe8) = fn_8019F9B4(); *(int*)((char*)a0 + 0xec) = fn_8019F9AC(); *(float*)((char*)a0 + 0xf8) = lbl_805DC000; *(float*)((char*)a0 + 0xfc) = lbl_805DC004; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8019DEF8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VWarp { char pad[0x18]; };
struct TObjWarpBossMulti : VWarp {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {

void render__17TObjWarpBossMultiFv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(s32);
f32 fn_8013157C(s32, void *);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK TObjDoor__sub_803DC894(s32, s32, f32);

extern s32 lbl_805D4DF0;
extern const f32 lbl_805DC008;
extern const f32 lbl_805DC00C;
extern const f32 lbl_805DC010;

void render__17TObjWarpBossMultiFv(u8 *arg0) {
    s32 temp_r0;

    if ((s32) M2C_FIELD(arg0, s32 *, 0xBC) == 0xE) {
        if (fn_8013157C(lbl_805D4DF0 + 0x178, arg0 + 0x38) > lbl_805DC008) {
            return;
        }
        goto block_4;
    }
    if (((TObjWarpBossMulti*)arg0)->m8(lbl_805DC00C, lbl_805DC010) != 0) {
block_4:
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0xE8));
        TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(arg0, s32 *, 0xD4));
        begin_effect_render__13TParticleCtrlFv();
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0xEC));
        temp_r0 = M2C_FIELD(arg0, s32 *, 0xF0);
        switch (temp_r0) {
        case 0:
            TObjDoor__sub_803DC894(M2C_FIELD(arg0, s32 *, 0xD8), M2C_FIELD(arg0, s32 *, 0xE0), M2C_FIELD(arg0, f32 *, 0xF8));
            break;
        case 1:
            TObjDoor__sub_803DC894(M2C_FIELD(arg0, s32 *, 0xDC), M2C_FIELD(arg0, s32 *, 0xE4), M2C_FIELD(arg0, f32 *, 0xF8));
            break;
        }
        end_effect_render__13TParticleCtrlFv();
        TObjPlayer__sub_803D9B78();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8019E1D8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__17TObjWarpBossMultiFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__12TObjAreaWarpFv(void *, int);
void TObjPlayer__sub_80154A00(void *);

extern M2C_UNK __vt__17TObjWarpBossMulti[];

void *__dt__17TObjWarpBossMultiFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TObjWarpBossMulti;
        TObjPlayer__sub_80154A00(arg0);
        __dt__12TObjAreaWarpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8019E48C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_lobby_active__17TObjWarpBossMultiFv(void);
s32 get_state__6TLobbyFv();

s32 is_lobby_active__17TObjWarpBossMultiFv(void) {
    return get_state__6TLobbyFv() ? 1 : 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8019E5F8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_windows__17TObjWarpBossMultiFPv(void *arg0);
M2C_UNK TWindowChat__sub_8024AD30(s32);
M2C_UNK TWindowCtrl__sub_8024AEF0(s32);
M2C_UNK TWindow__close(void *);
M2C_UNK clear_flag__11TWindowCtrlFv();
M2C_UNK close__17TWindowSubComCardFPv(void *);

extern s32 lbl_805D53A0;

void close_windows__17TObjWarpBossMultiFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x168) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x168));
        M2C_FIELD(arg0, u32 *, 0x168) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0xB0) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0xB0));
        M2C_FIELD(arg0, u32 *, 0xB0) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x164) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x164));
        M2C_FIELD(arg0, u32 *, 0x164) = 0U;
    }
    TWindowChat__sub_8024AD30(lbl_805D53A0);
    clear_flag__11TWindowCtrlFv();
    TWindowCtrl__sub_8024AEF0(lbl_805D53A0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8019E708
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void notify_player__17TObjWarpBossMultiFPvi(void *arg0, s32 arg1);
void warp_player__17TObjWarpBossMultiFPvi(void *arg0, s32 arg1);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK obj_clear_flag30_20000(s32);
M2C_UNK obj_set_flag_20000(s32);
M2C_UNK play_effect_default__10TObjPlayerFii(s32, s32);
M2C_UNK send_code_45_1__10TObjPlayerFi();

void notify_player__17TObjWarpBossMultiFPvi(void *arg0, s32 arg1) {
    s32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(arg1);
    if (temp_r3 != 0) {
        send_code_45_1__10TObjPlayerFi();
        obj_clear_flag30_20000(temp_r3);
    }
}

void warp_player__17TObjWarpBossMultiFPvi(void *arg0, s32 arg1) {
    s32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(arg1);
    if (temp_r3 != 0) {
        play_effect_default__10TObjPlayerFii(temp_r3, -1);
        obj_set_flag_20000(temp_r3);
        M2C_FIELD(arg0, s32 *, 0x174) = 0x12C;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8019E97C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_A_8019e97c { char pad[0x18]; };
struct V_A_8019e97c : Base_A_8019e97c {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(s32);
};

extern "C" {

void update_state__17TObjWarpBossMultiFPv(void *arg0);
s32 TObjWarpBossMulti__sub_8019E4B4();
s32 TObjWarpBossMulti__sub_8019E570(void *, f32);
M2C_UNK notify_player__17TObjWarpBossMultiFPvi(void *, s32);

extern s32 lbl_805D53A0;
extern s32 lbl_805D5C94;
extern s32 lbl_805D5C9C;

void update_state__17TObjWarpBossMultiFPv(void *arg0) {
    s16 temp_r0;
    s32 temp_r0_2;
    s32 temp_r3;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0xE0);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x17C) = 0x96;
        M2C_FIELD(arg0, s16 *, 0xE0) = 1;
        M2C_FIELD(arg0, s16 *, 0xE2) = (s16) (M2C_FIELD(arg0, s16 *, 0xE2) | 1);
        M2C_FIELD(arg0, s32 *, 0xD0) = (s32) lbl_805D5C94;
        M2C_FIELD(arg0, s32 *, 0xD4) = (s32) lbl_805D5C9C;
        return;
    case 1:
        if (TObjWarpBossMulti__sub_8019E4B4() == 0) {
            temp_r3 = TObjWarpBossMulti__sub_8019E570(arg0, M2C_FIELD(arg0, f32 *, 0xAC));
            if (temp_r3 != 0) {
                notify_player__17TObjWarpBossMultiFPvi(arg0, lbl_805D53A0);
                ((V_A_8019e97c *)arg0)->m17(temp_r3);
                M2C_FIELD(arg0, s16 *, 0xE0) = 2;
            }
        }
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x17C) - 1;
        M2C_FIELD(arg0, s32 *, 0x17C) = temp_r0_2;
        if (temp_r0_2 <= 0) {
            M2C_FIELD(arg0, s16 *, 0xE0) = 2;
        }
        break;
    case -1:
        break;
    case 2:
        M2C_FIELD(arg0, s16 *, 0xE2) = (s16) (M2C_FIELD(arg0, s16 *, 0xE2) & 0xFFFFFFFE);
        M2C_FIELD(arg0, s16 *, 0xDC) = 3;
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8019EA7C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_warp_state__17TObjWarpBossMultiFPv(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
s32 TObjWarpBossMulti__sub_8019E4E8(void *);
u32 TObjWarpBossMulti__sub_8019E570(f32);
M2C_UNK close_windows__17TObjWarpBossMultiFPv();
M2C_UNK TObjWarpBossMulti__sub_8019E6C0(void *, M2C_UNK);
M2C_UNK warp_player__17TObjWarpBossMultiFPvi(void *, s32);
M2C_UNK TObjWarpBossMulti__sub_8019EFF0(void *);
s32 get_warp_state__19TWindowSubTradeMainFv();

extern s32 lbl_805D53A0;
extern s32 lbl_805D5C94;
extern s32 lbl_805D5C9C;

void update_warp_state__17TObjWarpBossMultiFPv(u8 *arg0) {
    s16 temp_r0;
    s32 var_r3;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0xE0);
    switch (temp_r0) {
    case 2:
        break;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x160) = 0x12C;
        TBoss3Volopt__sub_8022675C(0x40003205, arg0 + 0x38, 0, 0);
        M2C_FIELD(arg0, s16 *, 0xE0) = 1;
        M2C_FIELD(arg0, s32 *, 0xD0) = (s32) lbl_805D5C94;
        M2C_FIELD(arg0, s32 *, 0xD4) = (s32) lbl_805D5C9C;
        return;
    case 1:
        if (TObjWarpBossMulti__sub_8019E570(M2C_FIELD(arg0, f32 *, 0xAC)) != 0U) {
            TObjWarpBossMulti__sub_8019EFF0(arg0);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x170) == 0) {
                warp_player__17TObjWarpBossMultiFPvi(arg0, lbl_805D53A0);
                M2C_FIELD(arg0, s32 *, 0x170) = 1;
            }
        }
        if (get_warp_state__19TWindowSubTradeMainFv() != 0) {
            M2C_FIELD(arg0, s32 *, 0x160) = (s32) (M2C_FIELD(arg0, s32 *, 0x160) - 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x160) <= 0) {
                var_r3 = 1;
            } else {
                var_r3 = TObjWarpBossMulti__sub_8019E4E8(arg0);
            }
            if (var_r3 != 0) {
                TObjWarpBossMulti__sub_8019E6C0(arg0, 2);
                M2C_FIELD(arg0, s16 *, 0xE0) = 2;
            }
        }
        break;
    case -1:
        close_windows__17TObjWarpBossMultiFPv();
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801B3514
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_field_d8__10TObjPlayerFPv();
s32 init__9TItemDataFv(s8 *);
s32 fn_801B7F4C(void *, s32);
u32 set_mode_and_refresh_object__10TObjPlayerFPvi(s32, s8 *);
u32 get_owner_if_alive__10TObjPlayerFPv();
s32 all_parents_unqueued_for_destruction__7TObjectFv();
int is_flag_clear__17TObjWarpBossMultiFPv(void* p);
int has_item_flag_4096__10TObjPlayerFPv(void* p);
int check_technique_flag__10TObjPlayerFPv(void* p);
int is_flag_400_set__10TObjPlayerFPv(void* p);
int check_flag__10TObjPlayerFPvi(void*, int);
int TObjPlayer__sub_8011E204(void*, int);
int set_state_flags__10TObjPlayerFPvUi(void*, int);

int is_flag_clear__17TObjWarpBossMultiFPv(void* p) { return (check_flag__10TObjPlayerFPvi(p, 4096)) == 0; }

}
#endif
#endif
