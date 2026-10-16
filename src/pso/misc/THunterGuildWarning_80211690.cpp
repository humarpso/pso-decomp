#include "types.h"
#include "pso/THunterGuildWarning.h"
#include "pso/misc/TRaderMapCore.h"

extern "C" {

s32 THunterGuildWarning__ct(void *, void *, s32);
void *__nw__7TObjectFUl(s32);

extern u32 THunterGuildWarning__instance;
extern void *tl_05;

void THunterGuildWarning::create_instance(s32 arg0) {
    if ((TRaderMapCore::is_not_split_screen() == 1) && ((u32) THunterGuildWarning__instance == 0U)) {
        void *obj = __nw__7TObjectFUl(0x34);
        if (obj != 0) {
            THunterGuildWarning__ct(obj, tl_05, arg0);
        }
    }
}

}
