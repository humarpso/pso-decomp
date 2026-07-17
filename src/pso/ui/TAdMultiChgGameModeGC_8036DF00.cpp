#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_confirm_selection__21TAdMultiChgGameModeGCFPv(void *arg0);
M2C_UNK TAdMultiChgGameModeGC__sub_8036E19C(void *, M2C_UNK);
M2C_UNK close_window_30__21TAdMultiChgGameModeGCFPv(void *);
M2C_UNK close_window__21TAdMultiChgGameModeGCFPv(void *);
s32 handle_mode_selection__21TAdMultiChgGameModeGCFPv();
M2C_UNK TAdMultiChgGameModeGC__sub_8036E858(void *, M2C_UNK);
s32 is_visible__17TWindowSubComCardFPv(u32);
s32 TWindowSubComCard__sub_80265BF8(u32);

void update_confirm_selection__21TAdMultiChgGameModeGCFPv(void *arg0) {
    s32 temp_r3;
    u32 temp_r3_2;

    if (handle_mode_selection__21TAdMultiChgGameModeGCFPv() == 0) {
        temp_r3_2 = M2C_FIELD(arg0, u32 *, 0x34);
        if (temp_r3_2 != 0U) {
            if (is_visible__17TWindowSubComCardFPv(temp_r3_2) != 0) {
                temp_r3 = TWindowSubComCard__sub_80265BF8(M2C_FIELD(arg0, u32 *, 0x34));
                switch (temp_r3) {
                case 0:
                    TAdMultiChgGameModeGC__sub_8036E858(arg0, 6);
                    close_window_30__21TAdMultiChgGameModeGCFPv(arg0);
                    TAdMultiChgGameModeGC__sub_8036E19C(arg0, 8);
                    return;
                case 1:
                    close_window__21TAdMultiChgGameModeGCFPv(arg0);
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
