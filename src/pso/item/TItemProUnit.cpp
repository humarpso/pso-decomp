#include "types.h"
#include "pso/item/TItemProUnit.h"

extern "C" {
u8 * TItemProUnit__ct(void *, s32, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
}

extern "C" {

void TItemProUnit__sub_80118FB4(void);
void TItemProUnit__sub_80118FB8(void);
f32 TItemProUnit__sub_8011901C(void* p);
void *__dt__12TItemProUnitFv(void *arg0, s16 arg1);
void TItemTimerEvent__ct(void *);
void __dt__14TItemEquipBaseFv(void *, int);
void free_obj_heap__10TObjPlayerFPv(void *);

u8 *TItemProUnit::create(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1C0));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(TItemProUnit__ct(temp_r3, tl_05, arg0));
        }
        return var_r0;
    }
    return NULL;
}

void TItemProUnit__sub_80118FB4(void) {  }
void TItemProUnit__sub_80118FB8(void) {  }

extern s32 __vt__12TItemProUnit[];

void *__dt__12TItemProUnitFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__12TItemProUnit;
        __dt__14TItemEquipBaseFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

void TItemProUnit::set_evp(f32 v) { *(f32*)((char*)this + 0x8) = v; }
f32 TItemProUnit__sub_8011901C(void* p) { return *(f32*)((char*)p + 0x8); }

extern s32 lbl_804A0608[];

void *TItemProUnit::init_timer_event() {
    TItemTimerEvent__ct(this);
    *(s32 **)((s8 *)this + 0x18) = lbl_804A0608;
    return this;
}

}
