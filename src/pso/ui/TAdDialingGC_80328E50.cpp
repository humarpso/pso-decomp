#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create__12TAdDialingGCFv(void);
M2C_UNK TAdDialingGC__ct(void *, s32);
u32 __nw__7TObjectFUl(M2C_UNK);

extern s32 tl_window;
extern u32 TAdDialingGC__instance;

void create__12TAdDialingGCFv(void) {
    void *temp_r3;

    if ((u32) TAdDialingGC__instance == 0U) {
        temp_r3 = (void *) __nw__7TObjectFUl(0xA8);
        if (temp_r3 != NULL) {
            TAdDialingGC__ct(temp_r3, tl_window);
        }
    }
}

}
