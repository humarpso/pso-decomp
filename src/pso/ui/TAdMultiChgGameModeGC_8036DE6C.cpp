#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_windows_on_selection__21TAdMultiChgGameModeGCFPv(void *arg0);
s32 handle_mode_selection__21TAdMultiChgGameModeGCFPv();
M2C_UNK TAdMultiChgGameModeGC__sub_8036E858(void *, M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(void *);

void close_windows_on_selection__21TAdMultiChgGameModeGCFPv(void *arg0) {
    void *temp_r3;
    if (handle_mode_selection__21TAdMultiChgGameModeGCFPv() == 0) {
        temp_r3 = M2C_FIELD(arg0, void **, 0x30);
        if ((u32) temp_r3 != 0U) {
            queue_destruction__7TObjectFv(temp_r3);
            M2C_FIELD(arg0, u32 *, 0x30) = 0U;
        }
        temp_r3 = M2C_FIELD(arg0, void **, 0x34);
        if ((u32) temp_r3 != 0U) {
            queue_destruction__7TObjectFv(temp_r3);
            M2C_FIELD(arg0, u32 *, 0x34) = 0U;
        }
        TAdMultiChgGameModeGC__sub_8036E858(arg0, 3);
    }
}

}
