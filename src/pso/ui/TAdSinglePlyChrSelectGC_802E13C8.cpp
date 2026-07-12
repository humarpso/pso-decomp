#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TAdSinglePlyChrSelectGC__sub_802E13C8(void *arg0, s16 arg1);
void *init_object__23TAdSinglePlyChrSelectGCFPvPv(void *arg0, void *);
void *create__23TAdSinglePlyChrSelectGCFv(void);
void __ct__7TObjectFP7TObject(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void *__nw__7TObjectFUl(int);
void copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);

extern M2C_UNK lbl_804E34FC[];

void *TAdSinglePlyChrSelectGC__sub_802E13C8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E34FC;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804E34FC[];
extern M2C_UNK lbl_804E3050[];
extern void *lbl_805D3F84;

void *init_object__23TAdSinglePlyChrSelectGCFPvPv(void *arg0, void *) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E34FC;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3F84;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *)((char *)arg0 + 32), lbl_804E3050);
    return arg0;
}

extern void *tl_clipout;

void *create__23TAdSinglePlyChrSelectGCFv(void) {
    void *o = __nw__7TObjectFUl(0x28);
    if (o != NULL) {
        o = init_object__23TAdSinglePlyChrSelectGCFPvPv((void *)(o), (void *)(tl_clipout));
    }
    return o;
}

}
