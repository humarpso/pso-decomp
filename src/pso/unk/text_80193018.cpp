#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void *load_resource_from_descriptor(void *, int, u8 *, int, int, int);
void *alloc__23TAdSinglePlyChrSelectGCFPv(int);
s32 load_gvm_texture_file(void *);
s32 get_global_state__14TOKeyMachine01Fv(void);
extern u8 lbl_80445BB8[];
extern u8 lbl_80445BCC[];
extern u8 lbl_804B7F58[];
extern u8 lbl_804B7FA0[];
extern s32 lbl_805D5C28;
extern void *lbl_805D5C2C;
void load_lazer_fence_norm_resources(void);
}

extern "C" {

void load_lazer_fence_norm_resources(void) {
    void *obj;
    switch (get_global_state__14TOKeyMachine01Fv()) {
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 34:
    case 35:
        obj = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (obj != 0) {
            obj = load_resource_from_descriptor(obj, 5, lbl_804B7FA0, 0, 0, 0);
        }
        lbl_805D5C2C = obj;
        lbl_805D5C28 = load_gvm_texture_file(lbl_80445BB8);
        break;
    default:
        obj = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (obj != 0) {
            obj = load_resource_from_descriptor(obj, 5, lbl_804B7F58, 0, 0, 0);
        }
        lbl_805D5C2C = obj;
        lbl_805D5C28 = load_gvm_texture_file(lbl_80445BCC);
        break;
    }
}

}
