#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__17TOSymbolchatColliFPv(void *arg0);
void TOSymbolchatColli__sub_801789A8(void);
int TOBoss4Rock__sub_80147A80(void*);
void *TOSymbolchatColli__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__17TOSymbolchatColliFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x384);
    if (o != NULL) {
        o = TOSymbolchatColli__ct(o, tl_05, arg0);
    }
    return o;
}

    extern int lbl_805D5AC8;
void TOSymbolchatColli__sub_801789A8(void) { TOBoss4Rock__sub_80147A80((void*)(lbl_805D5AC8)); lbl_805D5AC8 = 0; }

}
