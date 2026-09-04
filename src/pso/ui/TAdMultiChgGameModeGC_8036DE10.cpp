#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdMultiChgGameModeGC__sub_8036E6EC(void);
int TAdMultiChgGameModeGC__sub_8036E6F0(void);
void TAdMultiChgGameModeGC__sub_8036E750(void);
int TAdMultiChgGameModeGC__sub_8036E754(void);
int TAdMultiChgGameModeGC__sub_8036E7DC(void);
void TAdMultiChgGameModeGC__sub_8036E830(void);
void TAdMultiChgGameModeGC__sub_8036E854(void);
void TAdMultiChgGameModeGC__sub_8036E9EC(void* p);
void *__dt__21TAdMultiChgGameModeGCFPvs(void *arg0, s16 arg1);
void confirm_mode_selection__21TAdMultiChgGameModeGCFPv(void* p);
int init_change_mode__21TAdMultiChgGameModeGCFPv(void* p);
int request_scene_change_vt__21TAdMultiChgGameModeGCFPv(void* p);
int TAdMultiChgGameModeGC__sub_8036E19C(void*, void*);
int TAdMultiChgGameModeGC__sub_8036E858(void*, void*);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
int close_window_30__21TAdMultiChgGameModeGCFPv(void*);
int handle_mode_selection__21TAdMultiChgGameModeGCFPv(void*);
int init_change_mode__21TAdMultiChgGameModeGCFv(void*);
int load_system_file(void* a0 = 0);
void load_system_on_mode_default__21TAdMultiChgGameModeGCFPv(void* p);
void queue_destruction__7TObjectFv(void *);
int request_scene_change__21TAdMultiChgGameModeGCFv(void*);

void TAdMultiChgGameModeGC__sub_8036E6EC(void) {  }

int TAdMultiChgGameModeGC__sub_8036E6F0(void) { return 0; }

void TAdMultiChgGameModeGC__sub_8036E750(void) {  }

int TAdMultiChgGameModeGC__sub_8036E754(void) { return 0; }
int TAdMultiChgGameModeGC__sub_8036E7DC(void) { return 0; }

int request_scene_change_vt__21TAdMultiChgGameModeGCFPv(void* p) { return request_scene_change__21TAdMultiChgGameModeGCFv(p); }
void TAdMultiChgGameModeGC__sub_8036E830(void) {  }
int init_change_mode__21TAdMultiChgGameModeGCFPv(void* p) { return init_change_mode__21TAdMultiChgGameModeGCFv(p); }

void TAdMultiChgGameModeGC__sub_8036E854(void) {  }

void confirm_mode_selection__21TAdMultiChgGameModeGCFPv(void* p) { if (handle_mode_selection__21TAdMultiChgGameModeGCFPv((void*)(p)) == 0) { TAdMultiChgGameModeGC__sub_8036E858((void*)(p), (void*)((void*)1)); } }

void TAdMultiChgGameModeGC__sub_8036E9EC(void* p) { close_window_30__21TAdMultiChgGameModeGCFPv(p); TAdMultiChgGameModeGC__sub_8036E19C(p, (void*)4); }

extern M2C_UNK lbl_804F3A20[];

void *__dt__21TAdMultiChgGameModeGCFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F3A20;
        if (M2C_FIELD(arg0, void **, 0x30) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x30)); M2C_FIELD(arg0, M2C_UNK *, 0x30) = 0; }
        if (M2C_FIELD(arg0, void **, 0x34) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x34)); M2C_FIELD(arg0, M2C_UNK *, 0x34) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
