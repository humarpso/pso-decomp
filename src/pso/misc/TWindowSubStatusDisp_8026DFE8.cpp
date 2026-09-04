#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

int TWindowSubStatusDisp__sub_8026DFE8(void);
int TWindowSubStatusDisp__sub_8026E098(void* p);
void *deleting_dtor__20TWindowSubStatusDispFPvs(void *arg0, s16 arg1);
int TWindowSubStatusDisp__sub_80268048(void*);
void __dl__7TObjectFPv(void *);
void destroy_item_list_resources__20TWindowSubStatusDispFPvs(void *, int);

int TWindowSubStatusDisp__sub_8026DFE8(void) { return 0; }

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
