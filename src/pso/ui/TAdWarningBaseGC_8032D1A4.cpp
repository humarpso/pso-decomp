#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_heap__16TAdWarningBaseGCFv(void);
s32 Dolphin_ARAlloc(M2C_UNK);

extern s32 ad_warning_aram_base;
extern s32 TAdWarningBaseGC__aram_capacity;
extern s32 warning_aram_load_done_flag;
extern s32 TAdWarningBaseGC__aram_alloc_size;
extern s32 lobby_count_value;

void init_heap__16TAdWarningBaseGCFv(void) {
    TAdWarningBaseGC__aram_capacity = 0x80000;
    ad_warning_aram_base = Dolphin_ARAlloc(0x80000);
    TAdWarningBaseGC__aram_alloc_size = 0;
    warning_aram_load_done_flag = 0;
    lobby_count_value = 0;
}

}
