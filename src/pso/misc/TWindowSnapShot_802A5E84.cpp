#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowSnapShot__sub_802A5E84(u8 *arg0);
s32 TGStream__sub_800FDADC(s32, s32);
s32 TLobby__sub_800FD944(s32);
s32 TWindowSnapShot__sub_802A604C(void *, s32);
s32 TWindowSnapShot__sub_802A6054();
s32 TWindowSnapShot__sub_802A605C(void *);
u32 alloc_buffer__11TOBoss4RockFPv();
void fn_802A5CB8(void* p);
M2C_UNK memset(void *, int, int);

#include "types.h"
extern "C" {

void TWindowSnapShot__sub_802A5E84(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    memset((void *) (arg0 + 0x1C), (int) (0), (int) (0x20));
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}

}

}
