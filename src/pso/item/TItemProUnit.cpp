#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TItemProUnit__sub_80118FB4(void);
void TItemProUnit__sub_80118FB8(void);
f32 TItemProUnit__sub_8011901C(void* p);
void *__dt__12TItemProUnitFv(void *arg0, s16 arg1);
void *init_timer_event__12TItemProUnitFPv(void *arg0);
void set_evp__12TItemProUnitFPvf(void* p, f32 v);
void TItemTimerEvent__ct(void *);
void __dt__14TItemEquipBaseFv(void *, int);
void free_obj_heap__10TObjPlayerFPv(void *);

void TItemProUnit__sub_80118FB4(void) {  }
void TItemProUnit__sub_80118FB8(void) {  }

extern M2C_UNK __vt__12TItemProUnit[];

void *__dt__12TItemProUnitFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TItemProUnit;
        __dt__14TItemEquipBaseFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

void set_evp__12TItemProUnitFPvf(void* p, f32 v) { *(f32*)((char*)p + 0x8) = v; }
f32 TItemProUnit__sub_8011901C(void* p) { return *(f32*)((char*)p + 0x8); }

extern M2C_UNK lbl_804A0608[];

void *init_timer_event__12TItemProUnitFPv(void *arg0) {
    TItemTimerEvent__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A0608;
    return arg0;
}

}
