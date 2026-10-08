#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_801E0C08_meet_user_settings {
    M2C_UNK value;
    u8 remaining[0x60];
};

extern "C" {
s32 fn_80077AA4(s32);
extern RecoveredGlobal_801E0C08_meet_user_settings meet_user_settings;
void fn_801E0C08(void);
}

extern "C" {

typedef char RecoveredGlobal_801E0C08_meet_user_settings_size[sizeof(RecoveredGlobal_801E0C08_meet_user_settings) == 0x64 ? 1 : -1];
void fn_801E0C08(void) {
    fn_80077AA4((s32) &meet_user_settings.value);
}

}

__declspec(section ".ctors") static void *const __sinit_text_801E0C08_cpp_ref = (void *)fn_801E0C08;
