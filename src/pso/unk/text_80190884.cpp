#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
f32 xyz_distance_squared(void *, void *, void *);
extern s32 lbl_805D4DF0;
s32 fn_801908F8(s32 arg0, f32 farg0);
s32 get_global_state__14TOKeyMachine01Fv();
s32 is_not_split_screen__13TRaderMapCoreFv();
s32 is_sound_enabled__12TObjEnvSoundFPvi(void *self, s32 cue);
}

extern "C" {

s32 is_sound_enabled__12TObjEnvSoundFPvi(void *self, s32 cue) {
    if (is_not_split_screen__13TRaderMapCoreFv() == 1 && get_global_state__14TOKeyMachine01Fv() == 2) {
        switch (cue) {
        case 0x43704:
        case 0x4BC05:
            return 0;
        }
    }
    return 1;
}

s32 fn_801908F8(s32 arg0, f32 farg0) {
    return xyz_distance_squared((void *) (lbl_805D4DF0 + 0x178), (void *) (arg0 + 0x38), (void *) (arg0)) < farg0;
}

}
