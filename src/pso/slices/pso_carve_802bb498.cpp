#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
int fn_802BB4DC(void* p);
int fn_802B9F3C(void*, int);

int fn_802BB498(void) { return 0; }
int fn_802BB4DC(void* p) { return fn_802B9F3C(p, 0); }
void fn_802BB500(void *arg0) {
    s32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, u16 *, 0x466));
    if (temp_r3 != 0) {
        fn_802B9F3C(arg0, temp_r3 + 0x38);
        return;
    }
    fn_802B9F3C(arg0, 0);
}
int fn_802BB554(void) { return 0; }
int fn_802BB5B4(void) { return 0; }
int fn_802BB694(void) { return 0; }
int fn_802BB768(void) { return 0; }
int fn_802BB7C0(void) { return 0; }

}
