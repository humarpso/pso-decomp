#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct TObjBase80194 { char pad[0x18]; };
struct TObjMesBase80194 : TObjBase80194 {
    virtual void v0(s32);
    virtual void v1(s32);
    virtual void v2(s32);
    virtual void v3(s32);
    virtual void v4(s32);
    virtual void ct(s32);
};

extern "C" {

void *TObjMesBase__ct(void *arg0, s32 arg1, s32 arg2);
M2C_UNK TObjPlayer__sub_801569F4();

extern M2C_UNK __vt__11TObjMesBase[];
extern s32 lbl_805D33C8;

void *TObjMesBase__ct(void *arg0, s32 arg1, s32 arg2) {
    TObjPlayer__sub_801569F4();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TObjMesBase;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D33C8;
    ((TObjMesBase80194 *)arg0)->ct(arg2);
    M2C_FIELD(arg0, s32 *, 0xB4) = (s32) M2C_FIELD(arg0, s32 *, 0x84);
    M2C_FIELD(arg0, s32 *, 0xB8) = (s32) M2C_FIELD(arg0, s32 *, 0x8C);
    if ((s32) M2C_FIELD(arg0, s32 *, 0xB8) < 0) {
        M2C_FIELD(arg0, s32 *, 0xB8) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xB8) > 1) {
        M2C_FIELD(arg0, s32 *, 0xB8) = 1;
    }
    M2C_FIELD(arg0, s32 *, 0xAC) = 0;
    M2C_FIELD(arg0, s32 *, 0xB0) = 0;
    return arg0;
}

}
