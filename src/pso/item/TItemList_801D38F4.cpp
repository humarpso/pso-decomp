#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void * create_node__9TItemListFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void *destroy__9TItemListFPvs(void *arg0, s16 arg1);
void *TItemList__sub_801D39C8(void *, void *, void *, void *, void *, void *);
M2C_UNK TItemList__sub_801D59E8(void *, s32);
M2C_UNK TItemList__sub_801D5A28(void *, s32);
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK TItemList__sub_801D3FC4(void *, M2C_UNK);

extern void *tl_07;

void * create_node__9TItemListFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x58);
    if (o != NULL) {
        o = TItemList__sub_801D39C8(o, tl_07, arg0, arg1, arg2, arg3);
    }
    return o;
}

extern M2C_UNK lbl_804C4468[];

void *destroy__9TItemListFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804C4468;
        TItemList__sub_801D5A28(arg0, M2C_FIELD(arg0, s32 *, 0x54));
        TItemList__sub_801D59E8(arg0, M2C_FIELD(arg0, s32 *, 0x54));
        TItemList__sub_801D3FC4(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
