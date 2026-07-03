#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__nw__7TObjectFUl(int);
void *TQuestThreadBoard__ct(void *, void *, void *);
extern void *lbl_805D5EE8;

void *fn_801F5200(void *arg0) {
    void *o = __nw__7TObjectFUl(0x194);
    if (o != NULL) {
        TQuestThreadBoard__ct(o, lbl_805D5EE8, arg0);
    }
    return o;
}

}
