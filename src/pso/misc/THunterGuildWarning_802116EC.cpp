#include "types.h"

extern "C" {

u8 is_active__19THunterGuildWarningFv(void);

extern s32 THunterGuildWarning__instance;

u8 is_active__19THunterGuildWarningFv(void) {
    return (u8) (THunterGuildWarning__instance != 0);
}

}
