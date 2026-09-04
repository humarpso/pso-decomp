#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjCityMainWarp__vt14(s32 arg0);

s32 TCameraCtrl__sub_8006B368();
s32 is_warp_enabled__12TObjAreaWarpFi(s32);
s32 TLobby__sub_8030A7B0();

s32 TObjCityMainWarp__vt14(s32 arg0) {
    if ((TLobby__sub_8030A7B0() == 1) && (TCameraCtrl__sub_8006B368() == 0)) {
        return 0;
    }
    return is_warp_enabled__12TObjAreaWarpFi(arg0);
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80185EC8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase80185EC8 { char pad[0x18]; };
struct VObj80185EC8 : VBase80185EC8 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {

void render__16TObjCityMainWarpFv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(s32);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK TObjDoor__sub_803DC894(s32, s32, f32);

extern u8 *lbl_805D5B28;
extern s32 lbl_805D5B2C;
extern const f32 lbl_805DBC80;
extern const f32 lbl_805DBC98;

void render__16TObjCityMainWarpFv(u8 *arg0) {
    if (((VObj80185EC8 *) arg0)->m8(lbl_805DBC80, lbl_805DBC98) != 0) {
        set_global_param__8TObjFishFi(lbl_805D5B2C);
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(M2C_FIELD(lbl_805D5B28, void **, 0x42C), s32 *, 0xC8));
        begin_effect_render__13TParticleCtrlFv();
        TObjDoor__sub_803DC894(M2C_FIELD(M2C_FIELD(lbl_805D5B28, void **, 0x42C), s32 *, 8), M2C_FIELD(M2C_FIELD(lbl_805D5B28, void **, 0x430), s32 *, 0x2C), M2C_FIELD(arg0, f32 *, 0xC4));
        end_effect_render__13TParticleCtrlFv();
        TObjPlayer__sub_803D9B78();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80186030
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Base_80186030 { char pad[0x18]; };
struct VObj_80186030 : Base_80186030 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
};

extern "C" {

void TObjCityMainWarp__vt16(void *arg0);

void TObjCityMainWarp__vt16(void *arg0) {
    struct VObj_80186030 *o = (struct VObj_80186030 *)arg0;
    o->m15();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8018612C
#include "types.h"

extern "C" {

void TObjCityMainWarp__vt12(void* p);

int TObjWarpBase__vt12(void*);
int clear_flag__11TWindowCtrlFv(void);

void TObjCityMainWarp__vt12(void* p) { if (*(unsigned int*)((char*)p + 0xb0) != 0) { TObjWarpBase__vt12(p); clear_flag__11TWindowCtrlFv(); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80186410
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__16TObjCityMainWarpFPv(void *arg0);
void *__dt__16TObjCityMainWarpFv(void *arg0, s16 arg1);
void *TObjCityMainWarp__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__12TObjAreaWarpFv(void *, int);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__16TObjCityMainWarpFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x154);
    if (o != NULL) {
        o = TObjCityMainWarp__ct(o, tl_05, arg0);
    }
    return o;
}

extern M2C_UNK __vt__16TObjCityMainWarp[];

void *__dt__16TObjCityMainWarpFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjCityMainWarp;
        __dt__12TObjAreaWarpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801867F4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_unlock_flags__16TObjCityMainWarpFv(void);
s32 TODoorVoShip__sub_801F44BC(M2C_UNK);
s32 is_main_phase_15__9TObjEneDDFv();

s32 is_split_screen();
extern s32 TObjCityMainWarp__data_805D5B54;

void update_unlock_flags__16TObjCityMainWarpFv(void) {
    M2C_UNK var_r31;
    M2C_UNK var_r30;
    M2C_UNK var_r3;

    TObjCityMainWarp__data_805D5B54 |= 1;
    if ((is_main_phase_15__9TObjEneDDFv() != 0) || (is_split_screen() != 0)) {
        var_r3 = 0x4C;
        var_r31 = 0x4F;
        var_r30 = 0x52;
    } else {
        var_r3 = 0x4D;
        var_r31 = 0x50;
        var_r30 = 0x53;
    }
    if (TODoorVoShip__sub_801F44BC(var_r3) != 0) {
        TObjCityMainWarp__data_805D5B54 |= 4;
    }
    if (TODoorVoShip__sub_801F44BC(var_r31) != 0) {
        TObjCityMainWarp__data_805D5B54 |= 0x10;
    }
    if (TODoorVoShip__sub_801F44BC(var_r30) != 0) {
        TObjCityMainWarp__data_805D5B54 |= 0x200;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80186A00
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_active_bit__16TObjCityMainWarpFv(void);
s32 TObjCityMainWarp__sub_80186A3C();

extern s32 TObjCityMainWarp__data_805D5B50;

void set_active_bit__16TObjCityMainWarpFv(void) {
    s32 temp_r3;

    temp_r3 = TObjCityMainWarp__sub_80186A3C();
    if (temp_r3 >= 0) {
        TObjCityMainWarp__data_805D5B50 |= 1 << temp_r3;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80186AB8
#include "types.h"

extern "C" {

void TObjCityMainWarp__sub_80186AB8(void);
void reset__16TObjCityMainWarpFv(void);
void set_flag70_bit10__16TObjCityMainWarpFPv(void* p);
int TObjCityMainWarp__sub_80186634(void);
int TObjCityMainWarp__sub_801868A8(int);

void TObjCityMainWarp__sub_80186AB8(void) {  }
void reset__16TObjCityMainWarpFv(void) { TObjCityMainWarp__sub_80186634(); TObjCityMainWarp__sub_801868A8(0); }
void set_flag70_bit10__16TObjCityMainWarpFPv(void* p) { *(u16*)((char*)p + 0x70) |= 0x10; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80186C44
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_windows__16TObjCityMainWarpFPv(void *arg0);
M2C_UNK TWindowChat__sub_8024AD30(s32);
M2C_UNK TWindowCtrl__sub_8024AEF0(s32);
M2C_UNK TWindow__close(void *);
M2C_UNK clear_flag__11TWindowCtrlFv();
M2C_UNK close__17TWindowSubComCardFPv(void *);

extern s32 lbl_805D53A0;

void close_windows__16TObjCityMainWarpFPv(void *arg0) {
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
#if PSO_CLASS_PACKAGE == 0x80186D10
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void notify_player_warp__16TObjCityMainWarpFPvi(void *arg0, s32 arg1);
void trigger_warp_effect__16TObjCityMainWarpFPvi(void *arg0, s32 arg1);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK obj_clear_flag30_20000(s32);
M2C_UNK obj_set_flag_20000(s32);
M2C_UNK play_effect_default__10TObjPlayerFii(s32, s32);
M2C_UNK send_code_45_1__10TObjPlayerFi();

void notify_player_warp__16TObjCityMainWarpFPvi(void *arg0, s32 arg1) {
    s32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(arg1);
    if (temp_r3 != 0) {
        send_code_45_1__10TObjPlayerFi();
        obj_clear_flag30_20000(temp_r3);
    }
}

void trigger_warp_effect__16TObjCityMainWarpFPvi(void *arg0, s32 arg1) {
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
#if PSO_CLASS_PACKAGE == 0x80186F84
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
struct F_A_80186f84 { char pad[0x18]; };
struct F_V_80186f84 : F_A_80186f84 {
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void m17(s32);
};

extern "C" {

void update_state__16TObjCityMainWarpFPv(void *arg0);
s32 TObjCityMainWarp__sub_80186B00();
s32 TObjCityMainWarp__sub_80186BBC(void *, f32);
M2C_UNK notify_player_warp__16TObjCityMainWarpFPvi(void *, s32);

extern s32 lbl_805D53A0;
extern void *lbl_805D5B28;
extern s32 lbl_805D5B60;

void update_state__16TObjCityMainWarpFPv(void *arg0) {
    s16 temp_r0;
    s32 temp_r0_2;
    s32 temp_r3;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0xE0);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x17C) = 0x96;
        M2C_FIELD(arg0, s16 *, 0xE0) = 1;
        M2C_FIELD(arg0, s16 *, 0xE2) = (s16) (M2C_FIELD(arg0, s16 *, 0xE2) | 1);
        M2C_FIELD(arg0, s32 *, 0xD0) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D5B28, void **, 0x42C), s32 *, 8);
        M2C_FIELD(arg0, s32 *, 0xD4) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D5B28, void **, 0x430), s32 *, 0x2C);
        return;
    case 1:
        if (TObjCityMainWarp__sub_80186B00() == 0) {
            temp_r3 = TObjCityMainWarp__sub_80186BBC(arg0, M2C_FIELD(arg0, f32 *, 0xAC));
            if (temp_r3 != 0) {
                notify_player_warp__16TObjCityMainWarpFPvi(arg0, lbl_805D53A0);
                M2C_FIELD(arg0, s32 *, 0xBC) = (s32) lbl_805D5B60;
                ((F_V_80186f84 *) arg0)->m17(temp_r3);
                M2C_FIELD(arg0, s16 *, 0xE0) = 2;
            }
        }
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x17C) - 1;
        M2C_FIELD(arg0, s32 *, 0x17C) = temp_r0_2;
        if (temp_r0_2 <= 0) {
            M2C_FIELD(arg0, s16 *, 0xE0) = 2;
        }
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
#if PSO_CLASS_PACKAGE == 0x80266354
#include "types.h"

extern "C" {

int forward_trade_action_default__16TObjCityMainWarpFPviii(void* p, int a1, int a2, int a3);

int TWindowSubTradeMain__sub_80266200(void*, int, int, int, int);

int forward_trade_action_default__16TObjCityMainWarpFPviii(void* p, int a1, int a2, int a3) { return TWindowSubTradeMain__sub_80266200(p, a1, a2, a3, -1); }

}
#endif
#endif
