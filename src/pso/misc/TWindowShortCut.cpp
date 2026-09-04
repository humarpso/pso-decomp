#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 draw_default_entry__9TWindowDDFi();
M2C_UNK TWindowSubComCard__sub_80245F98(void *, int);
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(void *, void *, int);
M2C_UNK forward_render__20TWindowSubStatusDispFPv(int, int);
}

extern "C" {

void *__dt__15TWindowShortCutFv(void *arg0, s16 arg1);
void run_task__15TWindowShortCutFv(void* p);
int TWindowSubStatusDisp__sub_80257C28(void*, void*);
void TWindow__close(void *);
void __dl__7TObjectFPv(void *);
void destroy_status_display__20TWindowSubStatusDispFis(void *, int);
void destroy_window_base__9TWindowDDFPvs(void *, int);
int initialize_subwindow__9TWindowDDFPv(void*);
int update_fade__17TWindowSubComCardFPv(void*);
int update_subwindow__20TWindowSubStatusDispFPv(void*);

void render__15TWindowShortCutFv(u8 *arg0) {
    s32 temp_r3;
    temp_r3 = draw_default_entry__9TWindowDDFi();
    TWindowSubComCard__sub_80245F98((void *) (arg0), (int) (temp_r3));
    TWindowSubStatusDisp__sub_80257BC0((void *) (arg0), (void *) (arg0 + 0x24), (int) (temp_r3));
    forward_render__20TWindowSubStatusDispFPv((int) (M2C_FIELD(arg0, s32 *, 0x60)), (int) (temp_r3));
}

void run_task__15TWindowShortCutFv(void* p) { update_subwindow__20TWindowSubStatusDispFPv(*(void**)((char*)p + 0x60)); initialize_subwindow__9TWindowDDFPv(p); update_fade__17TWindowSubComCardFPv(p); TWindowSubStatusDisp__sub_80257C28(p, (char*)p + 0x24); }

extern M2C_UNK __vt__15TWindowShortCut[];

void *__dt__15TWindowShortCutFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TWindowShortCut;
        if (M2C_FIELD(arg0, void **, 0x68) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x68)); M2C_FIELD(arg0, M2C_UNK *, 0x68) = 0; }
        if (M2C_FIELD(arg0, void **, 0x64) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x64)); M2C_FIELD(arg0, M2C_UNK *, 0x64) = 0; }
        destroy_status_display__20TWindowSubStatusDispFis(M2C_FIELD(arg0, void **, 0x60), 1);
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
