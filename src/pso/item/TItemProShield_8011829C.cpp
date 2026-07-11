#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8010CE70(s32 a0 = 0, u8 a1 = 0);
s32 fn_8010CE1C(s32 a0 = 0, u8 a1 = 0);
void TItemProShield__vt49(void);
int TItemProShield__vt44(void* p);
int update_with_player__14TItemEquipBaseFi(void*);

int TItemProShield__vt44(void* p) { return update_with_player__14TItemEquipBaseFi(p); }
void TItemProShield__vt49(void) {  }
void set_params__14TItemProShieldFiPv(s32 arg0, void *arg1) {
    fn_8010CE70(arg0, M2C_FIELD(arg1, u8 *, 0x198));
    fn_8010CE1C(arg0, M2C_FIELD(arg1, u8 *, 0x199));
}

}
