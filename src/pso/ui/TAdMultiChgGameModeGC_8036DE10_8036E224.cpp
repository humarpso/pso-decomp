#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TAdMultiChgGameModeGC__sub_8036E3D4(void);
int TAdMultiChgGameModeGC__sub_8036E49C(void);
int TAdMultiChgGameModeGC__sub_8036E51C(void);
int TAdMultiChgGameModeGC__sub_8036E5A8(void);
int TAdMultiChgGameModeGC__sub_8036E6A0(void);
void close_window_30__21TAdMultiChgGameModeGCFPv(void *arg0);
void close_window__21TAdMultiChgGameModeGCFPv(void* p);
s32 handle_mode_selection__21TAdMultiChgGameModeGCFPv(void *arg0);
void load_system_on_mode_default__21TAdMultiChgGameModeGCFPv(void* p);
void TAdMultiChgGameModeGC__sub_8036E6EC(void);
void TAdMultiChgGameModeGC__sub_8036E750(void);
void TAdMultiChgGameModeGC__sub_8036E830(void);
void TAdMultiChgGameModeGC__sub_8036E854(void);
s32 TAdMultiChgGameModeGC__sub_8036E858(void *, s32);
int TWindow__close(void*);
int init_change_mode__21TAdMultiChgGameModeGCFPv(void* p);
int init_change_mode__21TAdMultiChgGameModeGCFv(void*);
int load_system_file(void* a0 = 0);
int request_scene_change__21TAdMultiChgGameModeGCFv(void*);
int request_scene_change_vt__21TAdMultiChgGameModeGCFPv(void* p);

void close_window_30__21TAdMultiChgGameModeGCFPv(void *arg0) {
    void *temp_r3 = M2C_FIELD(arg0, void **, 0x30);
    if ((u32) temp_r3 != 0U) {
        TWindow__close((void*)(temp_r3));
        M2C_FIELD(arg0, u32 *, 0x30) = 0U;
    }
    close_window__21TAdMultiChgGameModeGCFPv((void*)((void*)(arg0)));
}

void close_window__21TAdMultiChgGameModeGCFPv(void* p) { if (*(unsigned int*)((char*)p + 0x34) != 0) { TWindow__close((void*)(*(void**)((char*)p + 0x34))); *(int*)((char*)p + 0x34) = 0; } }

int TAdMultiChgGameModeGC__sub_8036E3D4(void) { return 0; }
int TAdMultiChgGameModeGC__sub_8036E49C(void) { return 0; }
int TAdMultiChgGameModeGC__sub_8036E51C(void) { return 0; }
int TAdMultiChgGameModeGC__sub_8036E5A8(void) { return 0; }

void load_system_on_mode_default__21TAdMultiChgGameModeGCFPv(void* p) { if (handle_mode_selection__21TAdMultiChgGameModeGCFPv((void *)(p)) == 0) { load_system_file((void*)0); } }
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

int TAdMultiChgGameModeGC__sub_8036E6A0(void) { return 0; }

}
