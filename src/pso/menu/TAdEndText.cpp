#include "pso/TAdEndText.h"

TAdEndText::~TAdEndText() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdEndText__sub_8001A990(void);
s32 TAdEndText__sub_8001B41C(void);
s32 fn_8001A988(void);
void free_resources__10TAdEndTextFv(void);
void TLobby__sub_800F957C(void*);
void TLobby__sub_803DA16C(void*);

extern s32 lbl_805D4F0C;

s32 fn_8001A988(void) {
    return lbl_805D4F0C;
}

extern s32 TAdEndText__data_805D49F0;

s32 TAdEndText__sub_8001A990(void) {
    return TAdEndText__data_805D49F0;
}

extern u32 TAdEndText__data_805D49F4;
extern u32 TAdEndText__data_805D49F8;

void free_resources__10TAdEndTextFv(void) {
    if ((u32) TAdEndText__data_805D49F4 != 0U) {
        TLobby__sub_803DA16C((void*)TAdEndText__data_805D49F4);
        TAdEndText__data_805D49F4 = 0U;
    }
    if ((u32) TAdEndText__data_805D49F8 != 0U) {
        TLobby__sub_800F957C((void*)TAdEndText__data_805D49F8);
        TAdEndText__data_805D49F8 = 0U;
    }
}

extern s32 lbl_805D6A58;

s32 TAdEndText__sub_8001B41C(void) {
    return lbl_805D6A58;
}

}
