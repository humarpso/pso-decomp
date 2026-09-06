#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
u8 * TItemProUnit__ct(void *, M2C_UNK, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *TItemProUnit__sub_80118F5C(u8 *arg0);
}

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

u8 *TItemProUnit__sub_80118F5C(u8 *arg0) {
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
