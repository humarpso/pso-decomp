#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_802302A0___vt__8TTecFoie { M2C_UNK value; u8 remaining[0x24]; };
typedef char RecoveredGlobal_802302A0___vt__8TTecFoie_size[sizeof(RecoveredGlobal_802302A0___vt__8TTecFoie) == 0x28 ? 1 : -1];

struct RecoveredGlobal_80230308___vt__8TTecFoie { M2C_UNK value; u8 remaining[0x24]; };
typedef char RecoveredGlobal_80230308___vt__8TTecFoie_size[sizeof(RecoveredGlobal_80230308___vt__8TTecFoie) == 0x28 ? 1 : -1];

extern "C" {
u16 obj_getField1c(void *);
void fn_8022FB70(void *);
void TTecFoie__sub_8022FC94(void *);
void TTecFoie__sub_8022FE84(void *);
u8 * TObjPlayer__sub_8023A7B4(void *, s32, void *, void *, s16);
extern RecoveredGlobal_802302A0___vt__8TTecFoie __vt__8TTecFoie;
u8 *TTecFoie__sub_802302A0(u8 *arg0, s32 arg1, u8 *arg2, u8 *arg3, s16 arg4);
u16 obj_getField1c(void *);
void fn_8022FB70(void *);
void TTecFoie__sub_8022FC94(void *);
void TTecFoie__sub_8022FE84(void *);
u8 * TObjPlayer__sub_8023AA4C(void *, s32, void *, s32, s16);
extern RecoveredGlobal_802302A0___vt__8TTecFoie __vt__8TTecFoie;
extern s32 lbl_805D37B0;
u8 *TTecFoie__ct(u8 *arg0, s32 arg1, u8 *arg2, s32 arg3, s16 arg4);
}

extern "C" {

u8 *TTecFoie__sub_802302A0(u8 *arg0, s32 arg1, u8 *arg2, u8 *arg3, s16 arg4) {
    u8 *temp_r3;
    TObjPlayer__sub_8023A7B4(arg0, arg1, arg2, arg3, arg4);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__8TTecFoie.value;
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x1C));
    if (temp_r3 != NULL) {
        M2C_FIELD(arg0, u16 *, 0xC8) = obj_getField1c(temp_r3);
    }
    TTecFoie__sub_8022FE84(arg0);
    TTecFoie__sub_8022FC94(arg0);
    fn_8022FB70(arg0);
    return arg0;
}
u8 *TTecFoie__ct(u8 *arg0, s32 arg1, u8 *arg2, s32 arg3, s16 arg4) {
    u8 *temp_r3;
    TObjPlayer__sub_8023AA4C(arg0, arg1, arg2, arg3, arg4);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__8TTecFoie.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D37B0;
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x1C));
    if (temp_r3 != NULL) {
        M2C_FIELD(arg0, u16 *, 0xC8) = obj_getField1c(temp_r3);
    }
    TTecFoie__sub_8022FE84(arg0);
    TTecFoie__sub_8022FC94(arg0);
    fn_8022FB70(arg0);
    return arg0;
}

}
