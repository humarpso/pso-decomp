#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void *__nw__7TObjectFUl(int);
void *__ct__9TAdBackGCFv(void *, void *);
void *__ct__12TAdBackTxtGCFv(void *, void *);
void TAdMultiChgGameModeGC__sub_8036E49C(void *arg0);
int TWindow__close(void*);
M2C_UNK send_and_handle__6TLobbyFPvii(int, int, int);
s32 TAdMultiChgGameModeGC__sub_8036DE10(void *, int, int);
M2C_UNK TAdMultiChgGameModeGC__sub_8036E19C(void *, int);
M2C_UNK TAdMultiChgGameModeGC__sub_8036E2AC(void *, int);
void TAdMultiChgGameModeGC__sub_8036E49C(void *arg0);
void TAdMultiChgGameModeGC__sub_8036E51C(u8 *arg0);
s32 get_instance__15TAdPlayerLoadGCFv();
s32 TAdMultiChgGameModeGC__sub_8036E858(void *, s32);
void TAdMultiChgGameModeGC__sub_8036E5A8(s32 arg0);
s32 get_instance__15TAdPlayerLoadGCFv();
s32 handle_mode_selection__21TAdMultiChgGameModeGCFPv(void *arg0);
s32 TAdMultiChgGameModeGC__sub_8036E858(void *, s32);
void TAdMultiChgGameModeGC__sub_8036E6A0(s32 arg0);
}

extern "C" {

int TAdMultiChgGameModeGC__sub_8036E3D4(void);
void close_window_30__21TAdMultiChgGameModeGCFPv(void *arg0);
void close_window__21TAdMultiChgGameModeGCFPv(void* p);
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

void TAdMultiChgGameModeGC__sub_8036E49C(void *arg0) {
    void *o;
    void *o2;
    if (M2C_FIELD(arg0, void **, 0x28) == NULL) {
        o = __nw__7TObjectFUl(0x24);
        if (o != NULL) {
            o = __ct__9TAdBackGCFv(o, arg0);
        }
        M2C_FIELD(arg0, void **, 0x28) = o;
    }
    if (M2C_FIELD(arg0, void **, 0x2C) == NULL) {
        o2 = __nw__7TObjectFUl(0x28);
        if (o2 != NULL) {
            o2 = __ct__12TAdBackTxtGCFv(o2, arg0);
        }
        M2C_FIELD(arg0, void **, 0x2C) = o2;
    }
}

void TAdMultiChgGameModeGC__sub_8036E51C(u8 *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
        TWindow__close((void*)(M2C_FIELD(arg0, void **, 0x34)));
        M2C_FIELD(arg0, u32 *, 0x34) = 0U;
    }
    TAdMultiChgGameModeGC__sub_8036E2AC((void *) (arg0), (int) (1));
    TAdMultiChgGameModeGC__sub_8036E19C((void *) (arg0), (int) (4));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        send_and_handle__6TLobbyFPvii((int) (M2C_FIELD(arg0, u32 *, 0x30)), (int) (TAdMultiChgGameModeGC__sub_8036DE10((void *) (arg0), (int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x24)))), (int) (3));
    }
    TAdMultiChgGameModeGC__sub_8036E49C((void *) (arg0));
}

void TAdMultiChgGameModeGC__sub_8036E5A8(s32 arg0) {
    if ((handle_mode_selection__21TAdMultiChgGameModeGCFPv((void *)(arg0)) == 0) && (get_instance__15TAdPlayerLoadGCFv() == 0)) {
        ((M2C_UNK)TAdMultiChgGameModeGC__sub_8036E858((void *)((void *) (arg0)), (s32)((int) (2))));
    }
}

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
void TAdMultiChgGameModeGC__sub_8036E6A0(s32 arg0) {
    if ((handle_mode_selection__21TAdMultiChgGameModeGCFPv((void *)(arg0)) == 0) && (get_instance__15TAdPlayerLoadGCFv() == 0)) {
        ((M2C_UNK)TAdMultiChgGameModeGC__sub_8036E858((void *)((void *) (arg0)), (s32)((int) (8))));
    }
}

}
