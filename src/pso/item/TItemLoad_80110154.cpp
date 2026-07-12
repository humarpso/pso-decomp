#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void get_data_entry__9TItemLoadFiPv(s32 arg0, s32 *arg1);
void lookup_item_data__9TItemLoadFiPv(s32 arg0, s32 *arg1);
void get_item_params__9TItemLoadFPvPvPv(s32 *arg0, s32 *arg1, s32 *arg2);
void get_model_ids__9TItemLoadFUcPvPv(u8 arg0, s32 *arg1, s32 *arg2);
s32 TObjFish__sub_8001EDB0(s32, M2C_UNK);
s32 TObjFish__sub_8001EDC4(s32, s32);
s32 TObjFish__sub_8001ED9C(s32, M2C_UNK);

extern s32 TItemLoad__data_805D5480;

void get_data_entry__9TItemLoadFiPv(s32 arg0, s32 *arg1) {
    if (arg1 != NULL) {
        *arg1 = TObjFish__sub_8001EDB0(TItemLoad__data_805D5480, 0);
    }
}

extern s32 TItemLoad__data_805D5480;

void lookup_item_data__9TItemLoadFiPv(s32 arg0, s32 *arg1) {
    if (arg1 != NULL) {
        *arg1 = TObjFish__sub_8001EDC4((s32)(TItemLoad__data_805D5480), (s32)(arg0));
    }
}

extern s32 TItemLoad__data_805D5480;

void get_item_params__9TItemLoadFPvPvPv(s32 *arg0, s32 *arg1, s32 *arg2) {
    if ((arg0 != NULL) && (arg1 != NULL) && (arg2 != NULL)) {
        *arg0 = TObjFish__sub_8001EDC4((s32)(TItemLoad__data_805D5480), (s32)(1));
        *arg1 = TObjFish__sub_8001EDB0(TItemLoad__data_805D5480, 0);
        *arg2 = TObjFish__sub_8001ED9C(TItemLoad__data_805D5480, 0);
    }
}

extern s32 TItemLoad__data_805D5480;

void get_model_ids__9TItemLoadFUcPvPv(u8 arg0, s32 *arg1, s32 *arg2) {
    if ((arg1 != NULL) && (arg2 != NULL)) {
        *arg1 = TObjFish__sub_8001EDC4((s32)(TItemLoad__data_805D5480), (s32)(arg0 + 2));
        *arg2 = TObjFish__sub_8001EDB0(TItemLoad__data_805D5480, 0);
    }
}

}
