#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__18TWindowSubItemListFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_item_list_resources__20TWindowSubStatusDispFPvs(void *, int);

extern M2C_UNK __vt__18TWindowSubItemList[];

void *__dt__18TWindowSubItemListFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TWindowSubItemList;
        destroy_item_list_resources__20TWindowSubStatusDispFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8027AE64
#include "types.h"

extern "C" {

int run_task__18TWindowSubItemListFv(void* p);
int TWindowSubStatusDisp__sub_80268048(void*);

int run_task__18TWindowSubItemListFv(void* p) { return TWindowSubStatusDisp__sub_80268048(p); }

}
#endif
#endif
