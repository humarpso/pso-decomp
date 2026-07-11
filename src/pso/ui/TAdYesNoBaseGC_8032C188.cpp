#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void init_parts__14TAdYesNoBaseGCFPvPvPv(void *arg0, void *arg1, void *arg2);
void copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *);

void init_parts__14TAdYesNoBaseGCFPvPvPv(void *arg0, void *arg1, void *arg2) {
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *)((char *)arg0 + 48));
    ((void (*)(void *, void *))copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv)((void *)((char *)arg0 + 56), arg2);
}

}
