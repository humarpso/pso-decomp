#include "types.h"
#include "pso/unk/text_80190884.h"
#include "pso/object/TObjEnvSound.h"
#include "pso/misc/TOKeyMachine01.h"
#include "pso/misc/TRaderMapCore.h"

extern "C" {
f32 xyz_distance_squared(void *, void *, void *);
extern s32 camera_ctrl_instance;

s32 TObjEnvSound::is_sound_enabled(void *self, s32 cue) {
    if (TRaderMapCore::is_not_split_screen() == 1 && TOKeyMachine01::get_global_state() == 2) {
        switch (cue) {
        case 0x43704:
        case 0x4BC05:
            return 0;
        }
    }
    return 1;
}

s32 fn_801908F8(s32 arg0, f32 farg0) {
    return xyz_distance_squared((void *) (camera_ctrl_instance + 0x178), (void *) (arg0 + 0x38), (void *)arg0) < farg0;
}

}
