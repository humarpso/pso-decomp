#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdMultiChgGameModeGC__sub_8036DF00(void *arg0);
M2C_UNK TAdMultiChgGameModeGC__sub_8036E19C(void *, M2C_UNK);
M2C_UNK TAdMultiChgGameModeGC__sub_8036E224(void *);
M2C_UNK TAdMultiChgGameModeGC__sub_8036E26C(void *);
s32 TAdMultiChgGameModeGC__sub_8036E624();
M2C_UNK TAdMultiChgGameModeGC__sub_8036E858(void *, M2C_UNK);
s32 TWindowSubComCard__sub_8007341C(u32);
s32 TWindowSubComCard__sub_80265BF8(u32);

void TAdMultiChgGameModeGC__sub_8036DF00(void *arg0) {
    s32 temp_r3;
    u32 temp_r3_2;

    if (TAdMultiChgGameModeGC__sub_8036E624() == 0) {
        temp_r3_2 = M2C_FIELD(arg0, u32 *, 0x34);
        if (temp_r3_2 != 0U) {
            if (TWindowSubComCard__sub_8007341C(temp_r3_2) != 0) {
                temp_r3 = TWindowSubComCard__sub_80265BF8(M2C_FIELD(arg0, u32 *, 0x34));
                switch (temp_r3) {
                case 0:
                    TAdMultiChgGameModeGC__sub_8036E858(arg0, 6);
                    TAdMultiChgGameModeGC__sub_8036E224(arg0);
                    TAdMultiChgGameModeGC__sub_8036E19C(arg0, 8);
                    return;
                case 1:
                    TAdMultiChgGameModeGC__sub_8036E26C(arg0);
                    TAdMultiChgGameModeGC__sub_8036E858(arg0, 3);
                    return;
                }
            }
        } else {
            TAdMultiChgGameModeGC__sub_8036E858(arg0, 8);
        }
    }
}

}
