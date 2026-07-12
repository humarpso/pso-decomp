#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 handle_mode_selection__21TAdMultiChgGameModeGCFPv(void *arg0);
int load_system_file(void* a0 = 0);
void TAdMultiChgGameModeGC__sub_8036E5F4(void* p);
s32 TAdMultiChgGameModeGC__sub_8036E858(void *, s32);
void TAdMultiChgGameModeGC__sub_8036E6EC(void);
void TAdMultiChgGameModeGC__sub_8036E750(void);
int TAdMultiChgGameModeGC__sub_8036E810(void* p);
void TAdMultiChgGameModeGC__sub_8036E830(void);
int TAdMultiChgGameModeGC__sub_8036E834(void* p);
void TAdMultiChgGameModeGC__sub_8036E854(void);
int request_scene_change__21TAdMultiChgGameModeGCFv(void*);
int init_change_mode__21TAdMultiChgGameModeGCFv(void*);

void TAdMultiChgGameModeGC__sub_8036E5F4(void* p) { if (handle_mode_selection__21TAdMultiChgGameModeGCFPv(p) == 0) { load_system_file((void*)0); } }
s32 handle_mode_selection__21TAdMultiChgGameModeGCFPv(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x20);
    if (temp_r4 & 1) {
        TAdMultiChgGameModeGC__sub_8036E858(arg0, 9);
        return 1;
    }
    if (temp_r4 & 2) {
        return 0;
    }
    if (temp_r4 & 4) {
        TAdMultiChgGameModeGC__sub_8036E858(arg0, 9);
        return 1;
    }
    if (temp_r4 & 8) {
        TAdMultiChgGameModeGC__sub_8036E858(arg0, 9);
        return 1;
    }
    return 0;
}

}
