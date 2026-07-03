#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void __ct__7TObjectFP7TObject(void *);
extern M2C_UNK lbl_804E34FC[];
extern M2C_UNK lbl_804E3050[];
extern void *lbl_805D3F84;
void TWindowSubSymbolChatPartsSet__sub_80052EA0(void *, void *);

void *fn_802E1420(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E34FC;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3F84;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    TWindowSubSymbolChatPartsSet__sub_80052EA0((void *)((char *)arg0 + 32), lbl_804E3050);
    return arg0;
}

}
