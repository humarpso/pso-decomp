#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void init_and_set_field50__9TWindowDDFPvPv(void *arg0, void *arg1);
void TWindowSubSymbolChatPartsSet__sub_80052EA0(void *, void *);

void init_and_set_field50__9TWindowDDFPvPv(void *arg0, void *arg1) {
    TWindowSubSymbolChatPartsSet__sub_80052EA0((void *)((char *)arg0 + 48), (void *)((char *)arg0 + 100));
    M2C_FIELD(arg0, void **, 0x50) = arg1;
}

}
