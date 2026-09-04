#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create_return_city_window__10TObjPlayerFPv(void *arg0);
int stop_battle__10TObjPlayerFPv(void* p);
s32 TObjPlayer__sub_80019248();
u32 TWindowReturnCity__ct(u32, s32, u16);
u32 __nw__7TObjectFUl(M2C_UNK);
s32 obj_getField1c(void *);
int set_battle_flag__10TObjPlayerFPvi(void*, int);

int stop_battle__10TObjPlayerFPv(void* p) { return set_battle_flag__10TObjPlayerFPvi(p, 0); }

extern s32 tl_07;

s32 create_return_city_window__10TObjPlayerFPv(void *arg0) {
    u32 var_r31;

    if ((TObjPlayer__sub_80019248() != 0) && ((u32) M2C_FIELD(arg0, u32 *, 0x36C) == 0U) && ((u32) M2C_FIELD(arg0, u32 *, 0x548) != 0U)) {
        var_r31 = __nw__7TObjectFUl(0x28);
        if (var_r31 != 0U) {
            var_r31 = TWindowReturnCity__ct(var_r31, tl_07, (u16) obj_getField1c(arg0));
        }
        M2C_FIELD(arg0, u32 *, 0x36C) = var_r31;
        return 1;
    }
    return 0;
}

}
