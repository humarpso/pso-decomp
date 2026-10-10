#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8011E140_8011DA9C { char pad[0x18]; };
struct VObj_8011E140_8011DA9C : Base_8011E140_8011DA9C {
    virtual void m0(int);
};

struct VBase_18 { char pad[0x18]; };
struct VObj_18 : VBase_18 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual M2C_UNK m4();
    virtual M2C_UNK m5();
};

struct RecoveredGlobal_8011DC90___vt__15TItemTimerEvent {
    M2C_UNK value;
    u8 remaining[0x1C];
};

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
u32 get_player_by_client_id(u16);
void TItemTimerEvent__vt1(void *arg0);
void fn_8011085C(void *, s32);
extern struct VObj_8011E140_8011DA9C *item_timer_event_instance;
void clear_timer_slot__15TItemTimerEventFUs(u16 arg0);
void fn_801108C8(void *, s32);
extern struct VObj_8011E140_8011DA9C *item_timer_event_instance;
void start_event_by_index__15TItemTimerEventFUs(u16 arg0);
s32 disallow_rendering__7TObjectFv(void *);
s32 __ct__15TItemHeapObjectFP7TObject(void *);
extern M2C_UNK __vt__15TItemTimerEvent[];
extern s32 TItemTimerEvent__class_name;
u8 *TItemTimerEvent__ct(u8 *arg0, M2C_UNK arg1, s16 arg2, s32 arg3);
}

extern "C" {

void TItemTimerEvent__sub_8011DA9C(void *arg0);
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
void *TItemTimerEvent__vt0(void *arg0, s16 arg1);
void TItemTimerEvent__vt4(void *arg0);
void check_battle_ctrl__15TItemTimerEventFi(int arg0);
void clear_active__15TItemTimerEventFv(void);
void notify_if_active__15TItemTimerEventFi(int arg0);
void tick_hp_drain__15TItemTimerEventFPv(void *arg0);
void update_timer__15TItemTimerEventFPv(void *arg0);
s32 test_action_mask__10TObjPlayerFPvi(s32, M2C_UNK);
s32 is_item_area_enabled();
M2C_UNK TObjectV8047c128_subtract_hp(s32, M2C_UNK);
u32 get_player_by_client_id(u16);
void __dt__15TItemHeapObjectFv(void *, int);
M2C_UNK fn_8011E1D4();
void __dl__15TItemHeapObjectFPv(void *);
M2C_UNK get_field_3e0__12TBoss3VoloptFPv(s32);
s32 obj_isState3_324(s32);
s32 obj_testFlags30(s32, M2C_UNK);
M2C_UNK set_flag_10000__10TObjPlayerFPv();

void TItemTimerEvent__sub_8011DA9C(void *arg0) {
    if (test_action_mask__10TObjPlayerFPvi(M2C_FIELD(arg0, s32 *, 0x28), 0x1C) != 0) {
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) + 1);
    }
}

void tick_hp_drain__15TItemTimerEventFPv(void *arg0) {
    get_field_3e0__12TBoss3VoloptFPv(M2C_FIELD(arg0, s32 *, 0x28));
    if ((is_item_area_enabled() == 1) && (obj_isState3_324(M2C_FIELD(arg0, s32 *, 0x28)) == 0) && (obj_testFlags30(M2C_FIELD(arg0, s32 *, 0x28), 0x800) == 0)) {
        TObjectV8047c128_subtract_hp(M2C_FIELD(arg0, s32 *, 0x28), 1);
    }
}

void update_timer__15TItemTimerEventFPv(void *arg0) {
    if (test_action_mask__10TObjPlayerFPvi(M2C_FIELD(arg0, s32 *, 0x28), 0x1C) != 0) {
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) + 1);
    }
}

void TItemTimerEvent__vt4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) + 1);
}

extern M2C_UNK __vt__15TItemTimerEvent[];

void TItemTimerEvent__vt1(void *arg0) {
    M2C_FIELD(arg0, u32 *, 0x28) = get_player_by_client_id(M2C_FIELD(arg0, u16 *, 0x1C));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x28) == 0U) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x24) == (s32) M2C_FIELD(arg0, s32 *, 0x20)) {
        ((VObj_18 *)(arg0))->m4();
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        return;
    }
    ((VObj_18 *)(arg0))->m5();
}

void *TItemTimerEvent__vt0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TItemTimerEvent;
        __dt__15TItemHeapObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__15TItemHeapObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804A0568[];

typedef char RecoveredGlobal_8011DC90___vt__15TItemTimerEvent_size[sizeof(RecoveredGlobal_8011DC90___vt__15TItemTimerEvent) == 0x20 ? 1 : -1];
u8 *TItemTimerEvent__ct(u8 *arg0, M2C_UNK arg1, s16 arg2, s32 arg3) {
    __ct__15TItemHeapObjectFP7TObject((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8011DC90___vt__15TItemTimerEvent *)&__vt__15TItemTimerEvent).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) TItemTimerEvent__class_name;
    M2C_FIELD(arg0, s16 *, 0x1C) = arg2;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = arg3;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    disallow_rendering__7TObjectFv((void *) (arg0));
    return arg0;
}

void *TItemTimerEvent__sub_8011DCF8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A0568;
        TItemTimerEvent__vt0((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            __dl__15TItemHeapObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804A0588[];

void *TItemTimerEvent__sub_8011DD50(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A0588;
        TItemTimerEvent__vt0((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            __dl__15TItemHeapObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804A05A8[];

void *TItemTimerEvent__sub_8011DDA8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A05A8;
        TItemTimerEvent__vt0((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            __dl__15TItemHeapObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804A05C8[];

void *TItemTimerEvent__sub_8011DE00(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A05C8;
        TItemTimerEvent__vt0((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            __dl__15TItemHeapObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804A05E8[];

void *TItemTimerEvent__sub_8011DE58(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A05E8;
        TItemTimerEvent__vt0((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            __dl__15TItemHeapObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804A0608[];

void *TItemTimerEvent__sub_8011DEB0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A0608;
        TItemTimerEvent__vt0((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            __dl__15TItemHeapObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804A0628[];

void *TItemTimerEvent__sub_8011DF08(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A0628;
        TItemTimerEvent__vt0((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            __dl__15TItemHeapObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804A0648[];

void *TItemTimerEvent__sub_8011DF60(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A0648;
        TItemTimerEvent__vt0((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            __dl__15TItemHeapObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804A0668[];

void *TItemTimerEvent__sub_8011DFB8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A0668;
        TItemTimerEvent__vt0((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            __dl__15TItemHeapObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804A0688[];

void *TItemTimerEvent__sub_8011E010(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A0688;
        TItemTimerEvent__vt0((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            __dl__15TItemHeapObjectFPv(arg0);
        }
    }
    return arg0;
}

void clear_timer_slot__15TItemTimerEventFUs(u16 arg0) {
    if (((void *) (*(u8 * *)&item_timer_event_instance) != NULL) && (arg0 < 0xCU)) {
        fn_8011085C((*(u8 * *)&item_timer_event_instance), (s32) arg0);
    }
}

void start_event_by_index__15TItemTimerEventFUs(u16 arg0) {
    if (((void *) (*(u8 * *)&item_timer_event_instance) != NULL) && (arg0 < 0xCU)) {
        fn_801108C8((*(u8 * *)&item_timer_event_instance), (s32) arg0);
    }
}

void check_battle_ctrl__15TItemTimerEventFi(int arg0) {
    if (get_player_by_client_id(arg0) != 0U) {
        fn_8011E1D4();
    }
}

void notify_if_active__15TItemTimerEventFi(int arg0) {
    if (get_player_by_client_id(arg0) != 0U) {
        set_flag_10000__10TObjPlayerFPv();
    }
}

extern struct VObj_8011E140_8011DA9C *item_timer_event_instance;

void clear_active__15TItemTimerEventFv(void) {
    if (item_timer_event_instance != NULL) {
        item_timer_event_instance->m0(1);
    }
    item_timer_event_instance = NULL;
}

}
