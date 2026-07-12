#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *construct__23TAdSinglePlyChrSelectGCFPv(void *arg0);
s32 TAdSinglePlyChrSelectGC__sub_802E3AE4();
M2C_UNK __ct__12TAdBackTxtGCFv(void *, void *);
M2C_UNK __ct__7TObjectFP7TObject(void *, s32);
M2C_UNK __ct__9TAdBackGCFv(void *, void *);
void *__nw__7TObjectFUl(M2C_UNK);
s8 TAdSinglePlyChrSelectGC__sub_8001C5E8(void *);
M2C_UNK TAdSinglePlyChrSelectGC__sub_80242D2C();
M2C_UNK alloc_download_buffer__23TAdSinglePlyChrSelectGCFPv(void *);

M2C_UNK clear_buffer(void *);
extern void *lbl_804EF8C0[];
extern s32 tl_01;

void *construct__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    void *p;

    __ct__7TObjectFP7TObject(arg0, tl_01);
    M2C_FIELD(arg0, void **, 0x18) = lbl_804EF8C0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) TAdSinglePlyChrSelectGC__sub_8001C5E8(lbl_804EF8C0);
    M2C_FIELD(arg0, s32 *, 0x28) = TAdSinglePlyChrSelectGC__sub_802E3AE4();
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    p = __nw__7TObjectFUl(0x24);
    if (p != NULL) {
        __ct__9TAdBackGCFv(p, arg0);
    }
    p = __nw__7TObjectFUl(0x28);
    if (p != NULL) {
        __ct__12TAdBackTxtGCFv(p, arg0);
    }
    alloc_download_buffer__23TAdSinglePlyChrSelectGCFPv(arg0);
    clear_buffer(arg0);
    TAdSinglePlyChrSelectGC__sub_80242D2C();
    return arg0;
}

}
