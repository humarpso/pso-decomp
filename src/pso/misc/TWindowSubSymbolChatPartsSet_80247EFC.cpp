#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void get_entry_offset_d__28TWindowSubSymbolChatPartsSetFPvi(void *arg0, s32 arg1);
void get_parts_entry__28TWindowSubSymbolChatPartsSetFPvi(void *arg0, s32 arg1);
int get_parts_entry__28TWindowSubSymbolChatPartsSetFi(int a0);
void get_parts_entry__28TWindowSubSymbolChatPartsSetFii(s32 arg0, s32 arg1);
M2C_UNK get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);

    extern int lbl_8044EA74[];
int get_parts_entry__28TWindowSubSymbolChatPartsSetFi(int a0) {  return lbl_8044EA74[a0]; }

void get_entry_offset_d__28TWindowSubSymbolChatPartsSetFPvi(void *arg0, s32 arg1) {
    get_array_entry__20TWindowSubStatusDispFPvi((void *)(arg0), (s32)(arg1 + 0xD));
}

void get_parts_entry__28TWindowSubSymbolChatPartsSetFPvi(void *arg0, s32 arg1) {
    get_array_entry__20TWindowSubStatusDispFPvi((void *)(arg0), (s32)(arg1 + 9));
}

void get_parts_entry__28TWindowSubSymbolChatPartsSetFii(s32 arg0, s32 arg1) {
    get_array_entry__20TWindowSubStatusDispFPvi((void *)(arg0), (s32)(arg1 + 5));
}

}
