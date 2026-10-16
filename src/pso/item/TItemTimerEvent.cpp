#include "types.h"
#include "pso/item/TUnk_804A0668.h"
#include "pso/item/TUnk_804A0688.h"
#include "pso/item/TItemTimerEvent.h"
#include "pso/boss/TBoss3Volopt.h"

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
    virtual s32 m4();
    virtual s32 m5();
};

struct RecoveredGlobal_8011DC90___vt__15TItemTimerEvent {
    s32 value;
    u8 remaining[0x1C];
};

extern "C" {
s32 queue_destruction__7TObjectFv(void *);
u32 get_player_by_client_id(u16);
void run_task__15TItemTimerEventFv(void *arg0);
void fn_8011085C(void *, s32);
extern struct VObj_8011E140_8011DA9C *item_timer_event_instance;
void fn_801108C8(void *, s32);
extern struct VObj_8011E140_8011DA9C *item_timer_event_instance;
s32 disallow_rendering__7TObjectFv(void *);
s32 __ct__15TItemHeapObjectFP7TObject(void *);
extern s32 __vt__15TItemTimerEvent[];
extern s32 TItemTimerEvent__class_name;
u8 *TItemTimerEvent__ct(u8 *arg0, s32 arg1, s16 arg2, s32 arg3);
}

extern "C" {

void vfunc_7__13TUnk_804A0668Fv(void *arg0);
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
void vfunc_7__15TItemTimerEventFv(void *arg0);
s32 test_action_mask__10TObjPlayerFl(s32, s32);
s32 is_item_area_enabled();
s32 TObjectV8047c128_subtract_hp(s32, s32);
u32 get_player_by_client_id(u16);
void __dt__15TItemHeapObjectFv(void *, int);
s32 fn_8011E1D4();
void __dl__15TItemHeapObjectFPv(void *);
s32 obj_isState3_324(s32);
s32 obj_testFlags30(s32, s32);
s32 set_flag_10000__10TObjPlayerFv();

void TUnk_804A0668::vfunc_7() {
    if (test_action_mask__10TObjPlayerFl(*(s32 *)&this->m_28, 0x1C) != 0) {
        *(s32 *)&this->m_24 = (s32) (*(s32 *)&this->m_24 + 1);
    }
}

void TUnk_804A0688::vfunc_6() {
    ((TBoss3Volopt *)(*(s32 *)&this->m_28))->get_field_3e0();
    if ((is_item_area_enabled() == 1) && (obj_isState3_324(*(s32 *)&this->m_28) == 0) && (obj_testFlags30(*(s32 *)&this->m_28, 0x800) == 0)) {
        TObjectV8047c128_subtract_hp(*(s32 *)&this->m_28, 1);
    }
}

void TUnk_804A0688::vfunc_7() {
    if (test_action_mask__10TObjPlayerFl(*(s32 *)&this->m_28, 0x1C) != 0) {
        *(s32 *)&this->m_24 = (s32) (*(s32 *)&this->m_24 + 1);
    }
}

void TItemTimerEvent::vfunc_7() {
    *(s32 *)&this->m_24 = (s32) (*(s32 *)&this->m_24 + 1);
}

extern s32 __vt__15TItemTimerEvent[];

void TItemTimerEvent::run_task() {
    this->m_28 = get_player_by_client_id(this->m_1c);
    if ((u32) this->m_28 == 0U) {
        queue_destruction__7TObjectFv(this);
        return;
    }
    if ((s32) *(s32 *)&this->m_24 == (s32) *(s32 *)&this->m_20) {
        ((VObj_18 *)(this))->m4();
        *(s32 *)&this->m_24 = 0;
        return;
    }
    ((VObj_18 *)(this))->m5();
}

void *TItemTimerEvent__vt0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__15TItemTimerEvent;
        __dt__15TItemHeapObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__15TItemHeapObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_804A0568[];

typedef char RecoveredGlobal_8011DC90___vt__15TItemTimerEvent_size[sizeof(RecoveredGlobal_8011DC90___vt__15TItemTimerEvent) == 0x20 ? 1 : -1];
u8 *TItemTimerEvent__ct(u8 *arg0, s32 arg1, s16 arg2, s32 arg3) {
    __ct__15TItemHeapObjectFP7TObject((void *) (arg0));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8011DC90___vt__15TItemTimerEvent *)&__vt__15TItemTimerEvent).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TItemTimerEvent__class_name;
    *(s16 *)((s8 *)arg0 + 0x1C) = arg2;
    *(s32 *)((s8 *)arg0 + 0x28) = 0;
    *(s32 *)((s8 *)arg0 + 0x20) = arg3;
    *(s32 *)((s8 *)arg0 + 0x24) = 0;
    disallow_rendering__7TObjectFv((void *) (arg0));
    return arg0;
}

void *TItemTimerEvent__sub_8011DCF8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A0568;
        TItemTimerEvent__vt0((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            __dl__15TItemHeapObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_804A0588[];

void *TItemTimerEvent__sub_8011DD50(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A0588;
        TItemTimerEvent__vt0((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            __dl__15TItemHeapObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_804A05A8[];

void *TItemTimerEvent__sub_8011DDA8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A05A8;
        TItemTimerEvent__vt0((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            __dl__15TItemHeapObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_804A05C8[];

void *TItemTimerEvent__sub_8011DE00(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A05C8;
        TItemTimerEvent__vt0((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            __dl__15TItemHeapObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_804A05E8[];

void *TItemTimerEvent__sub_8011DE58(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A05E8;
        TItemTimerEvent__vt0((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            __dl__15TItemHeapObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_804A0608[];

void *TItemTimerEvent__sub_8011DEB0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A0608;
        TItemTimerEvent__vt0((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            __dl__15TItemHeapObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_804A0628[];

void *TItemTimerEvent__sub_8011DF08(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A0628;
        TItemTimerEvent__vt0((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            __dl__15TItemHeapObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_804A0648[];

void *TItemTimerEvent__sub_8011DF60(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A0648;
        TItemTimerEvent__vt0((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            __dl__15TItemHeapObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_804A0668[];

void *TItemTimerEvent__sub_8011DFB8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A0668;
        TItemTimerEvent__vt0((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            __dl__15TItemHeapObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_804A0688[];

void *TItemTimerEvent__sub_8011E010(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A0688;
        TItemTimerEvent__vt0((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            __dl__15TItemHeapObjectFPv(arg0);
        }
    }
    return arg0;
}

void TItemTimerEvent::clear_timer_slot(u16 arg0) {
    if (((void *) (*(u8 * *)&item_timer_event_instance) != NULL) && (arg0 < 0xCU)) {
        fn_8011085C((*(u8 * *)&item_timer_event_instance), (s32) arg0);
    }
}

void TItemTimerEvent::start_event_by_index(u16 arg0) {
    if (((void *) (*(u8 * *)&item_timer_event_instance) != NULL) && (arg0 < 0xCU)) {
        fn_801108C8((*(u8 * *)&item_timer_event_instance), (s32) arg0);
    }
}

void TItemTimerEvent::check_battle_ctrl(int arg0) {
    if (get_player_by_client_id(arg0) != 0U) {
        fn_8011E1D4();
    }
}

void TItemTimerEvent::notify_if_active(int arg0) {
    if (get_player_by_client_id(arg0) != 0U) {
        set_flag_10000__10TObjPlayerFv();
    }
}

extern struct VObj_8011E140_8011DA9C *item_timer_event_instance;

void TItemTimerEvent::clear_active() {
    if (item_timer_event_instance != NULL) {
        item_timer_event_instance->m0(1);
    }
    item_timer_event_instance = NULL;
}

}
