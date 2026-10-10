#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80144AC8___vt__19TNECFontEORFunction {
    M2C_UNK value;
    u8 remaining[0x18];
};

struct RecoveredGlobal_80144AC8_lbl_80515F48 {
    M2C_UNK value;
    u8 remaining[0x24];
};

extern "C" {
void __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_80144AC8___vt__19TNECFontEORFunction __vt__19TNECFontEORFunction;
extern RecoveredGlobal_80144AC8_lbl_80515F48 lbl_80515F48;
extern s32 TNECFontEORFunction__name;
u8 *TNECFontEORFunction__ct(u8 *arg0);
}

extern "C" {

typedef char RecoveredGlobal_80144AC8___vt__19TNECFontEORFunction_size[sizeof(RecoveredGlobal_80144AC8___vt__19TNECFontEORFunction) == 0x1C ? 1 : -1];
typedef char RecoveredGlobal_80144AC8_lbl_80515F48_size[sizeof(RecoveredGlobal_80144AC8_lbl_80515F48) == 0x28 ? 1 : -1];
u8 *TNECFontEORFunction__ct(u8 *arg0) {
    __ct__7TObjectFP7TObject(arg0, &lbl_80515F48.value);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__19TNECFontEORFunction.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) TNECFontEORFunction__name;
    return arg0;
}

}
