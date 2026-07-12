#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__16TAdChrSelBSlotGCFPv(void *arg0);
int TAdChrSelBSlotGC__sub_803100EC(void);
int TAdChrSelBSlotGC__sub_803100F4(void);
void *TAdChrSelBSlotGC__ct(void *, void *);
void *__nw__7TObjectFUl(int);

void *create__16TAdChrSelBSlotGCFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x80);
    if (o != NULL) {
        o = TAdChrSelBSlotGC__ct(o, arg0);
    }
    return o;
}

    extern int lbl_805D6AA0;
int TAdChrSelBSlotGC__sub_803100EC(void) {  return lbl_805D6AA0; }

    extern int lbl_805D6A98;
int TAdChrSelBSlotGC__sub_803100F4(void) {  return lbl_805D6A98; }

}
