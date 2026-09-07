#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_8018386C_lbl_804B5C58 {
    M2C_UNK value;
    u8 remaining[0x34];
};

extern "C" {
s32 TPhotonMagicSquare__sub_801A2640(void *, void *);
extern RecoveredGlobal_8018386C_lbl_804B5C58 lbl_804B5C58;
extern s32 lbl_805D3288;
u8 *TObjCity_Season_FireWorkCtrl__ct(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

typedef char RecoveredGlobal_8018386C_lbl_804B5C58_size[sizeof(RecoveredGlobal_8018386C_lbl_804B5C58) == 0x38 ? 1 : -1];
u8 *TObjCity_Season_FireWorkCtrl__ct(u8 *arg0, s32 arg1, s32 arg2) {
    TPhotonMagicSquare__sub_801A2640((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804B5C58.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3288;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, s32 *, 0x90) = 0;
    return arg0;
}

}
