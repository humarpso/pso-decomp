#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemTimerEvent__vt4(void *arg0);

void TItemTimerEvent__vt4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) + 1);
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8011DA9C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemTimerEvent__sub_8011DA9C(void *arg0);
s32 TLobby__sub_800822E8(s32, M2C_UNK);

void TItemTimerEvent__sub_8011DA9C(void *arg0) {
    if (TLobby__sub_800822E8(M2C_FIELD(arg0, s32 *, 0x28), 0x1C) != 0) {
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) + 1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8011DAE4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void tick_hp_drain__15TItemTimerEventFPv(void *arg0);
M2C_UNK get_field_3e0__12TBoss3VoloptFPv(s32);
s32 TObjPlayer__sub_802034B0();
M2C_UNK TObjectV8047c128_subtract_hp(s32, M2C_UNK);
s32 obj_isState3_324(s32);
s32 obj_testFlags30(s32, M2C_UNK);

void tick_hp_drain__15TItemTimerEventFPv(void *arg0) {
    get_field_3e0__12TBoss3VoloptFPv(M2C_FIELD(arg0, s32 *, 0x28));
    if ((TObjPlayer__sub_802034B0() == 1) && (obj_isState3_324(M2C_FIELD(arg0, s32 *, 0x28)) == 0) && (obj_testFlags30(M2C_FIELD(arg0, s32 *, 0x28), 0x800) == 0)) {
        TObjectV8047c128_subtract_hp(M2C_FIELD(arg0, s32 *, 0x28), 1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8011DB50
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_timer__15TItemTimerEventFPv(void *arg0);
s32 TLobby__sub_800822E8(s32, M2C_UNK);

void update_timer__15TItemTimerEventFPv(void *arg0) {
    if (TLobby__sub_800822E8(M2C_FIELD(arg0, s32 *, 0x28), 0x1C) != 0) {
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) + 1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8011DC38
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TItemTimerEvent__vt0(void *arg0, s16 arg1);
void destroy__11TItemMagSubFPvs(void *, int);
void free_to_heap__11TItemMagSubFPv(void *);

extern M2C_UNK __vt__15TItemTimerEvent[];

void *TItemTimerEvent__vt0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TItemTimerEvent;
        destroy__11TItemMagSubFPvs(arg0, 0);
        if (arg1 > 0) {
            free_to_heap__11TItemMagSubFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8011DCF8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TItemTimerEvent__sub_8011DCF8(void *arg0, s16 arg1);
void *TItemTimerEvent__sub_8011DD50(void *arg0, s16 arg1);
void *TItemTimerEvent__sub_8011DDA8(void *arg0, s16 arg1);
void *TItemTimerEvent__sub_8011DE00(void *arg0, s16 arg1);
void *TItemTimerEvent__sub_8011DE58(void *arg0, s16 arg1);
void *TItemTimerEvent__sub_8011DEB0(void *arg0, s16 arg1);
void *TItemTimerEvent__sub_8011DF08(void *arg0, s16 arg1);
void *TItemTimerEvent__sub_8011DF60(void *arg0, s16 arg1);
void *TItemTimerEvent__sub_8011DFB8(void *arg0, s16 arg1);
void *TItemTimerEvent__sub_8011E010(void *arg0, s16 arg1);
void TItemTimerEvent__vt0(void *, int);
void free_to_heap__11TItemMagSubFPv(void *);

extern M2C_UNK lbl_804A0568[];

void *TItemTimerEvent__sub_8011DCF8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A0568;
        TItemTimerEvent__vt0(arg0, 0);
        if (arg1 > 0) {
            free_to_heap__11TItemMagSubFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804A0588[];

void *TItemTimerEvent__sub_8011DD50(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A0588;
        TItemTimerEvent__vt0(arg0, 0);
        if (arg1 > 0) {
            free_to_heap__11TItemMagSubFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804A05A8[];

void *TItemTimerEvent__sub_8011DDA8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A05A8;
        TItemTimerEvent__vt0(arg0, 0);
        if (arg1 > 0) {
            free_to_heap__11TItemMagSubFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804A05C8[];

void *TItemTimerEvent__sub_8011DE00(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A05C8;
        TItemTimerEvent__vt0(arg0, 0);
        if (arg1 > 0) {
            free_to_heap__11TItemMagSubFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804A05E8[];

void *TItemTimerEvent__sub_8011DE58(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A05E8;
        TItemTimerEvent__vt0(arg0, 0);
        if (arg1 > 0) {
            free_to_heap__11TItemMagSubFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804A0608[];

void *TItemTimerEvent__sub_8011DEB0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A0608;
        TItemTimerEvent__vt0(arg0, 0);
        if (arg1 > 0) {
            free_to_heap__11TItemMagSubFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804A0628[];

void *TItemTimerEvent__sub_8011DF08(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A0628;
        TItemTimerEvent__vt0(arg0, 0);
        if (arg1 > 0) {
            free_to_heap__11TItemMagSubFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804A0648[];

void *TItemTimerEvent__sub_8011DF60(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A0648;
        TItemTimerEvent__vt0(arg0, 0);
        if (arg1 > 0) {
            free_to_heap__11TItemMagSubFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804A0668[];

void *TItemTimerEvent__sub_8011DFB8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A0668;
        TItemTimerEvent__vt0(arg0, 0);
        if (arg1 > 0) {
            free_to_heap__11TItemMagSubFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804A0688[];

void *TItemTimerEvent__sub_8011E010(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A0688;
        TItemTimerEvent__vt0(arg0, 0);
        if (arg1 > 0) {
            free_to_heap__11TItemMagSubFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8011E0E0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8011E140 { char pad[0x18]; };
struct VObj_8011E140 : Base_8011E140 {
    virtual void m0(int);
};

extern "C" {

void check_battle_ctrl__15TItemTimerEventFi(int arg0);
void notify_if_active__15TItemTimerEventFi(int arg0);
void clear_active__15TItemTimerEventFv(void);
M2C_UNK set_flag_10000__10TObjPlayerFPv();
u32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
M2C_UNK fn_8011E1D4();

void check_battle_ctrl__15TItemTimerEventFi(int arg0) {
    if (TPlayerBattleCtrl4P__sub_801BA74C(arg0) != 0U) {
        fn_8011E1D4();
    }
}

void notify_if_active__15TItemTimerEventFi(int arg0) {
    if (TPlayerBattleCtrl4P__sub_801BA74C(arg0) != 0U) {
        set_flag_10000__10TObjPlayerFPv();
    }
}

extern struct VObj_8011E140 *lbl_805D5508;

void clear_active__15TItemTimerEventFv(void) {
    if (lbl_805D5508 != NULL) {
        lbl_805D5508->m0(1);
    }
    lbl_805D5508 = NULL;
}

}
#endif
#endif
