#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__19TWindowSubEquipListFv(void *arg0, s16 arg1);
int fn_8027929C(void);
int render__19TWindowSubEquipListFv(void);
int run_task__19TWindowSubEquipListFv(void* p);
int TWindowSubStatusDisp__sub_80268048(void*);
void __dl__7TObjectFPv(void *);
void destroy_item_list_resources__20TWindowSubStatusDispFPvs(void *, int);

int fn_8027929C(void) { return 0; }
int render__19TWindowSubEquipListFv(void) { return 0; }

int run_task__19TWindowSubEquipListFv(void* p) { return TWindowSubStatusDisp__sub_80268048(p); }

extern M2C_UNK __vt__19TWindowSubEquipList[];

void *__dt__19TWindowSubEquipListFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TWindowSubEquipList;
        destroy_item_list_resources__20TWindowSubStatusDispFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
