#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u8 * TObjFish__sub_8001EDB0(void *, int);
extern u32 TObjContainerJungEx__data_805D5BA8;
u8 *TObjContainerJungEx__sub_8018D900(s32 arg0);
u8 * TObjFish__sub_8001EDC4(void *, int);
extern u32 TObjContainerJungEx__data_805D5BA8;
u8 *TObjContainerJungEx__sub_8018D93C(s32 arg0);
}

extern "C" {

void free_data__19TObjContainerJungExFv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 TObjContainerJungEx__data_805D5BA8;

u8 *TObjContainerJungEx__sub_8018D900(s32 arg0) {
    if ((void *) (*(u8 * *)&TObjContainerJungEx__data_805D5BA8) != NULL) {
        return TObjFish__sub_8001EDB0((*(u8 * *)&TObjContainerJungEx__data_805D5BA8), arg0);
    }
    return NULL;
}

u8 *TObjContainerJungEx__sub_8018D93C(s32 arg0) {
    if ((void *) (*(u8 * *)&TObjContainerJungEx__data_805D5BA8) != NULL) {
        return TObjFish__sub_8001EDC4((*(u8 * *)&TObjContainerJungEx__data_805D5BA8), arg0);
    }
    return NULL;
}

void free_data__19TObjContainerJungExFv(void) {
    if ((u32) TObjContainerJungEx__data_805D5BA8 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjContainerJungEx__data_805D5BA8, 1);
        TObjContainerJungEx__data_805D5BA8 = 0U;
    }
}

}
