#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 TWindowSubStatusDisp__sub_80244364();
M2C_UNK TWindowSubComCard__sub_80245F98(void *, int);
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(void *, void *, int);
M2C_UNK TWindowSubStatusDisp__sub_80267714(void *, int, int, int);
M2C_UNK draw_selected_list_entry(void *, int);
M2C_UNK TWindowSubStatusDisp__sub_8026D790(void *, int, void *);
M2C_UNK forward_render__20TWindowSubStatusDispFPv(void *, int);
void TWindowSubStatusDisp__sub_8026DFE8(u8 *arg0);
}

extern "C" {

int TWindowSubStatusDisp__sub_8026E098(void* p);
void *deleting_dtor__20TWindowSubStatusDispFPvs(void *arg0, s16 arg1);
int TWindowSubStatusDisp__sub_80268048(void*);
void __dl__7TObjectFPv(void *);
void destroy_item_list_resources__20TWindowSubStatusDispFPvs(void *, int);

#pragma push
#pragma fp_contract on
void TWindowSubStatusDisp__sub_8026DFE8(u8 *arg0) {
    s32 temp_r3;
    s32 n;
    void *p;
    temp_r3 = TWindowSubStatusDisp__sub_80244364();
    TWindowSubComCard__sub_80245F98((void *) (arg0), (int) (temp_r3));
    TWindowSubStatusDisp__sub_80257BC0((void *) (arg0), (void *) (arg0 + 0x24), (int) (temp_r3));
    if (!(M2C_FIELD(arg0, u16 *, 0x70) & 0x80)) {
        draw_selected_list_entry((void *) (arg0), (int) (temp_r3));
    }
    n = M2C_FIELD(arg0, s32 *, 0x88);
    if (n > 0) {
        TWindowSubStatusDisp__sub_80267714((void *) (arg0), (int) (temp_r3), (int) (M2C_FIELD(arg0, s16 *, 0x72)), n);
    }
    p = M2C_FIELD(arg0, void **, 0x80);
    if (p != NULL) {
        forward_render__20TWindowSubStatusDispFPv(p, (int) (temp_r3));
    }
    p = M2C_FIELD(arg0, void **, 0x84);
    if (p != NULL) {
        TWindowSubStatusDisp__sub_8026D790(p, (int) (temp_r3), (void *) (arg0 + 0x68));
    }
}
#pragma pop

int TWindowSubStatusDisp__sub_8026E098(void* p) { return TWindowSubStatusDisp__sub_80268048(p); }

extern M2C_UNK lbl_804D0948[];

void *deleting_dtor__20TWindowSubStatusDispFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804D0948;
        destroy_item_list_resources__20TWindowSubStatusDispFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
