#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
int initialize_subwindow__9TWindowDDFPv(void *);
void TCameraCtrl__sub_802715F0(void *);
void update_visibility__21TWindowSubAreaMapDispFPv(void *);
int update_subwindow__20TWindowSubStatusDispFPv(void *);
extern const f32 lbl_805DD4F0;
void run_task__21TWindowSubAreaMapDispFv(u8 *arg0);
}

extern "C" {

void run_task__21TWindowSubAreaMapDispFv(u8 *arg0) {
    initialize_subwindow__9TWindowDDFPv(arg0);
    update_visibility__21TWindowSubAreaMapDispFPv(arg0);
    TCameraCtrl__sub_802715F0(arg0);
    if ((f32) M2C_FIELD(arg0, s32 *, 0x5C) >= lbl_805DD4F0) {
        update_subwindow__20TWindowSubStatusDispFPv(M2C_FIELD(arg0, u8 **, 0x70));
    }
}

}
