#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_801B18C0(void * a0 = 0, s16 a1 = 0);
s32 fn_8000F8FC();
s32 TFontSmallLobby__sub_801AFEE0();
s32 fn_803E46BC(s32);
void fn_801B19EC(void);
int fn_8003F108(void);
int fn_802034B0(void);

void fn_801B1968(void *arg0) {
    fn_801B18C0(arg0, M2C_FIELD(arg0, s16 *, 0x326));
}
void fn_801B198C(s32 arg0) {
    if (((fn_8000F8FC() == 0xE) || (fn_8000F8FC() == 0xF)) && (TFontSmallLobby__sub_801AFEE0() != 0)) {
        fn_803E46BC(arg0);
        return;
    }
    fn_803E46BC(arg0);
}
void fn_801B19EC(void) { fn_8003F108(); fn_802034B0(); }

}
