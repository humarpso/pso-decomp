#include "types.h"
#include "pso/TObject.h"
#include "pso/unk/text_80144AC8.h"

struct RecoveredGlobal_80144AC8___vt__19TNECFontEORFunction {
    s32 value;
    u8 remaining[0x18];
};

extern "C" {
void __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_80144AC8___vt__19TNECFontEORFunction __vt__19TNECFontEORFunction;
extern s32 TNECFontEORFunction__name;
typedef char RecoveredGlobal_80144AC8___vt__19TNECFontEORFunction_size[sizeof(RecoveredGlobal_80144AC8___vt__19TNECFontEORFunction) == 0x1C ? 1 : -1];
u8 *TNECFontEORFunction__ct(u8 *object) {
    __ct__7TObjectFP7TObject(object, &end_of_render_root);
    *(s32 **)((s8 *)object + 0x18) = &__vt__19TNECFontEORFunction.value;
    *(s32 *)((s8 *)object + 0) = (s32) TNECFontEORFunction__name;
    return object;
}

}
