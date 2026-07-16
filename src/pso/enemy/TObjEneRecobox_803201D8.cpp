#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void release_static_instance__14TObjEneRecoboxFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK release_static_instance__12TObjEneReconFv();

extern u32 TObjEneRecobox__data_805D6B20;

void release_static_instance__14TObjEneRecoboxFv(void) {
    release_static_instance__12TObjEneReconFv();
    if ((u32) TObjEneRecobox__data_805D6B20 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjEneRecobox__data_805D6B20, 1);
        TObjEneRecobox__data_805D6B20 = 0U;
    }
}

}
