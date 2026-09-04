#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void* init_fields__17TWindowSubComCardFPvii(void* a0, int a1, int a2);
int is_flag_4_set__17TWindowSubComCardFPv(void* p);
void TWindowKeyBoardSoft__sub_8025B928(void);
s32 convert_input_text__19TWindowKeyBoardSoftFPv();
s32 get_state__19TWindowKeyBoardSoftFPv(void* p);
void reset_entry__20TWindowSubStatusDispFPv(void*, int);
s32 select_next__19TWindowKeyBoardSoftFPv();
s32 update__19TWindowKeyBoardSoftFPv();

    extern unsigned char lbl_804CFA58[];
    extern const float lbl_805DD02C;
void* init_fields__17TWindowSubComCardFPvii(void* a0, int a1, int a2) { reset_entry__20TWindowSubStatusDispFPv(a0, a2); *(int*)((char*)a0 + 0x4) = (int)lbl_804CFA58; *(float*)((char*)a0 + 0x14) = lbl_805DD02C; *(int*)((char*)a0 + 0x24) = -1; *(int*)((char*)a0 + 0x1c) = 0; *(int*)((char*)a0 + 0x20) = 0; *(int*)((char*)a0 + 0x18) = 0; return a0; }

int is_flag_4_set__17TWindowSubComCardFPv(void* p) { return *(u16*)((char*)p + 0x0) & 0x4; }

}
