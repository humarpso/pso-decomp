#include "types.h"
typedef s32 M2C_UNK;
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TQuestVmDownLoadServer__sub_8007EBDC(void* p);
void *TQuestVmDownLoadServer__sub_8007EC58(void *arg0, s16 arg1);
void *TQuestVmDownLoadServer__sub_8007ECB0(void *arg0);
int alloc__22TQuestVmDownLoadServerFPv(void* p);
void __ct__7TObjectFP7TObject(void *, s32);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
int alloc__23TAdSinglePlyChrSelectGCFPv(void* p);
int fn_803DE864(void*);
M2C_UNK xfree__FPv();
int xmalloc__FUl(void*);

int TQuestVmDownLoadServer__sub_8007EBDC(void* p) { return fn_803DE864(p); }
int alloc__22TQuestVmDownLoadServerFPv(void* p) { return xmalloc__FUl(p); }

extern M2C_UNK lbl_8048DF58[];

void *TQuestVmDownLoadServer__sub_8007EC58(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8048DF58;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_8048DF58[];

void *TQuestVmDownLoadServer__sub_8007ECB0(void *arg0) {
    __ct__7TObjectFP7TObject(arg0, 0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8048DF58;
    return arg0;
}

}
