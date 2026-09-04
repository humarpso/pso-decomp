#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 draw_default_entry__9TWindowDDFi();
M2C_UNK TWindowKeyBoardSoft__sub_802616BC(void *, int);
M2C_UNK TWindowKeyBoardSoft__sub_80261DD8(void *, int);
M2C_UNK TWindowKeyBoardSoft__sub_8026227C(void *, int);
void TWindowKeyBoardSoft__sub_802625D4(s32 arg0);
}

extern "C" {

void close__19TWindowKeyBoardSoftFPv(void* p);
int fn_8025CD10(void*);
int update_focus_flags__19TWindowKeyBoardSoftFPv(void*);

void close__19TWindowKeyBoardSoftFPv(void* p) { if (*(unsigned int*)((char*)p + 0x6c) != 0) { fn_8025CD10(*(void**)((char*)p + 0x6c)); update_focus_flags__19TWindowKeyBoardSoftFPv(p); } }

void TWindowKeyBoardSoft__sub_802625D4(s32 arg0) {
    s32 temp_r3;
    temp_r3 = draw_default_entry__9TWindowDDFi();
    TWindowKeyBoardSoft__sub_8026227C((void *) (arg0), (int) (temp_r3));
    TWindowKeyBoardSoft__sub_80261DD8((void *) (arg0), (int) (temp_r3));
    TWindowKeyBoardSoft__sub_802616BC((void *) (arg0), (int) (temp_r3));
}

}
