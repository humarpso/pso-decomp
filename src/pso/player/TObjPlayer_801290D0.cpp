#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 TObjPlayer__sub_8001BEF8(void *, int);
s32 TAdRicoRing__sub_8001BEE8(s32, s32);
int TObjPlayer__sub_80121200(void*);
int TObjBoss2Tunnel__sub_803D929C(void*, void*);
void handle_tunnel_state_0__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_80129124(void* p);

s32 TObjPlayer__sub_801290D0(u8 *arg0) {
    if (TObjPlayer__sub_8001BEF8((void *) (arg0 + 0x1FC), (int) (4)) != 0) {
        return M2C_FIELD(arg0, s32 *, 0x188);
    }
    return M2C_FIELD(arg0, s32 *, 0x184);
}

}

}
