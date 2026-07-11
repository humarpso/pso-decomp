#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TItemReverseTech__ct(void *arg0);
void *TItemReverseTechPart1__ct(void *, void *, void *);
void *__ct__10TAdEndTextFv(void *, void *);
void __ct__7TObjectFP7TObject(void *);
void *__nw__7TObjectFUl(int);
void fn_802274B8(void *);

extern M2C_UNK __vt__16TItemReverseTech[];
extern void *lbl_805D2C48;
extern void *TItemReverseTech__data_805D54D0;
extern M2C_UNK lbl_8043E708[];

void *TItemReverseTech__ct(void *arg0) {
    void *o;
    void *o2;
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TItemReverseTech;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2C48;
    o = __nw__7TObjectFUl(0x34);
    if (o != NULL) {
        o = TItemReverseTechPart1__ct(o, arg0, TItemReverseTech__data_805D54D0);
    }
    M2C_FIELD(arg0, void **, 0x20) = o;
    M2C_FIELD(arg0, u32 *, 0x24) = 0;
    o2 = __nw__7TObjectFUl(0x197C);
    if (o2 != NULL) {
        __ct__10TAdEndTextFv(o2, arg0);
    }
    fn_802274B8(lbl_8043E708);
    return arg0;
}

}
