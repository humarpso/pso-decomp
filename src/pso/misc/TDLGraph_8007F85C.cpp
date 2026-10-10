#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {
extern void *lbl_8048DF94[];
void launch_switcher_dol(void *p);
void select_dial_image__12TAdDialingGCFPvi(void *self, s32 x);
}

extern "C" {

void *create__8TDLGraphFv(void);
void *TDLGraph__ct(void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_clipout;

void *create__8TDLGraphFv(void) {
    void *o = __nw__7TObjectFUl(0x64);
    if (o != NULL) {
        o = TDLGraph__ct(o, tl_clipout);
    }
    return o;
}
void select_dial_image__12TAdDialingGCFPvi(void *self, s32 x) {
    launch_switcher_dol(lbl_8048DF94[x ? 1 : 0]);
}

}
