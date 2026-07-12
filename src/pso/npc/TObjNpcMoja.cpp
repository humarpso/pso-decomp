#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * TObjNpcMoja__sub_8014C6C0(void *arg0);
void *TObjNpcMoja__sub_8014C728(void *arg0, s16 arg1);
void *TObjControl__ct(void *, void *);
void *TObjNpcMoja__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__11TObjNpcBaseFv(void *, int);
void *__nw__7TObjectFUl(int);

extern void *tl_04;

void * TObjNpcMoja__sub_8014C6C0(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3B8);
    if (o2 != NULL) {
        o2 = TObjNpcMoja__ct(o2, o, arg0);
    }
    return o2;
}

extern M2C_UNK lbl_804AAC04[];

void *TObjNpcMoja__sub_8014C728(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804AAC04;
        __dt__11TObjNpcBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
