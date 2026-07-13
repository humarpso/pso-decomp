#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void create_instance__8TFogCtrlFv(void);
void *TQuestVmDownLoadServer__sub_800FA95C(void *);
void *__nw__7TObjectFUl(int);

extern void *lbl_805D5390;

void create_instance__8TFogCtrlFv(void) {
    void *o;
    o = __nw__7TObjectFUl(0x1C);
    if (o != NULL) {
        o = TQuestVmDownLoadServer__sub_800FA95C(o);
    }
    lbl_805D5390 = o;
}

}
