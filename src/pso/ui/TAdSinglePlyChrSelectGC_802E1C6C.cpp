#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TAdSinglePlyChrSelectGC__sub_802E1C6C(void *arg0);
void *__ct__12TAdBackTxtGCFv(void *, void *);
void *__ct__9TAdBackGCFv(void *, void *);
void *__nw__7TObjectFUl(int);

void TAdSinglePlyChrSelectGC__sub_802E1C6C(void *arg0) {
    void *o;
    void *o2;
    if (M2C_FIELD(arg0, void **, 0x48) == NULL) {
        o = __nw__7TObjectFUl(0x24);
        if (o != NULL) {
            o = __ct__9TAdBackGCFv(o, arg0);
        }
        M2C_FIELD(arg0, void **, 0x48) = o;
    }
    if (M2C_FIELD(arg0, void **, 0x4C) == NULL) {
        o2 = __nw__7TObjectFUl(0x28);
        if (o2 != NULL) {
            o2 = __ct__12TAdBackTxtGCFv(o2, arg0);
        }
        M2C_FIELD(arg0, void **, 0x4C) = o2;
    }
}

}
