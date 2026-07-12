#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_8012FD50(void* p);
void TObjPlayer__sub_8012FD8C(void *arg0);
int TBoss7Tentacle__sub_803D9BA0(void*);
s32 TItemProArmor__sub_80102C3C(void *);
int TObjPlayer__sub_80121200(void*);
s32 alloc__13TItemProArmorFi(M2C_UNK);
M2C_UNK fn_80117DD8(s32, u32, s32, M2C_UNK);

void TObjPlayer__sub_8012FD50(void* p) { if (TObjPlayer__sub_80121200(p) == 2) { TBoss7Tentacle__sub_803D9BA0((char*)p + 0x1f8); } }

void TObjPlayer__sub_8012FD8C(void *arg0) {
    s32 temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x174) != 0U) {
        temp_r3 = alloc__13TItemProArmorFi(0x2C);
        if (temp_r3 != 0) {
            fn_80117DD8(temp_r3, M2C_FIELD(arg0, u32 *, 0x174), TItemProArmor__sub_80102C3C(arg0), 0x5A);
        }
    }
}

}
