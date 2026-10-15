#include "types.h"

extern "C" {

void create_instance__19THunterGuildWarningFi(s32 arg0);
s32 THunterGuildWarning__ct(void *, void *, s32);
void *__nw__7TObjectFUl(s32);
s32 is_not_split_screen__13TRaderMapCoreFv();

extern u32 THunterGuildWarning__instance;
extern void *tl_05;

void create_instance__19THunterGuildWarningFi(s32 arg0) {
    if ((is_not_split_screen__13TRaderMapCoreFv() == 1) && ((u32) THunterGuildWarning__instance == 0U)) {
        void *obj = __nw__7TObjectFUl(0x34);
        if (obj != 0) {
            THunterGuildWarning__ct(obj, tl_05, arg0);
        }
    }
}

}
