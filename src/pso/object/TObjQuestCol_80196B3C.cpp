#include "types.h"

extern "C" {

void *TObjQuestCol__ct(void *arg0);
s32 update_trigger_state__12TObjQuestColFPvf(void *arg0, f32 farg0);
void TObjQuestColBase__ct(void *);
s32 is_within_range__16TObjQuestColBaseFif(f32);

extern s32 __vt__12TObjQuestCol[];
extern void *TObjQuestCol__class_name;

void *TObjQuestCol__ct(void *arg0) {
    TObjQuestColBase__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__12TObjQuestCol;
    *(void **)((s8 *)arg0 + 0x0) = TObjQuestCol__class_name;
    return arg0;
}

s32 update_trigger_state__12TObjQuestColFPvf(void *arg0, f32 farg0) {
    if (is_within_range__16TObjQuestColBaseFif(farg0 * farg0) != 0) {
        if ((s32) *(s32 *)((s8 *)arg0 + 0xB4) != 0) {
            *(s32 *)((s8 *)arg0 + 0xB4) = 0;
            return 1;
        }
        return 0;
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0xB4) != 0) {
        return 2;
    }
    *(s32 *)((s8 *)arg0 + 0xB4) = 1;
    return 3;
}

}
