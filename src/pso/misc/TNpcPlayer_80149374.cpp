#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TNpcPlayer__sub_80149374(s32 arg0);
s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
M2C_UNK TLobby__send_and_handle_60(void *);
void TObjNpcBase__sub_80149358(void* p, s32 v);
void TObjNpcBase__sub_80149360(void* p, s32 v);
void TObjNpcBase__sub_80149368(void* p);
void TObjNpcBase__vt86(void);
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
M2C_UNK bswap_6x3E__10TNpcPlayerFi();
s32 read_be16_field2__10TObjPlayerFPv();

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {

void TNpcPlayer__sub_80149374(s32 arg0) {
    bswap_6x3E__10TNpcPlayerFi();
    TLobby__send_and_handle_60((void *) (arg0));
}

}

}
