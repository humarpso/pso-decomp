#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void THunterGuildWarning__sub_80211690(s32 arg0);
M2C_UNK THunterGuildWarning__ct(void *, void *, s32);
void *__nw__7TObjectFUl(M2C_UNK);
s32 is_not_split_screen__13TRaderMapCoreFv();

extern u32 THunterGuildWarning__data_805D6178;
extern void *tl_05;

void THunterGuildWarning__sub_80211690(s32 arg0) {
    if ((is_not_split_screen__13TRaderMapCoreFv() == 1) && ((u32) THunterGuildWarning__data_805D6178 == 0U)) {
        void *obj = __nw__7TObjectFUl(0x34);
        if (obj != 0) {
            THunterGuildWarning__ct(obj, tl_05, arg0);
        }
    }
}

}
