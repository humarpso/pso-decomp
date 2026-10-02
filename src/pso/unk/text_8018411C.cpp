#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18_26a62c { char pad[0x18]; };

struct VObj_18_26a62c : VBase_18_26a62c {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

struct RecoveredGlobal_8018417C_lbl_8050DC38 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8018417C_lbl_8050DC50 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_8018411C_lbl_804B5D38 {
    M2C_UNK value;
    u8 remaining[0x30];
};

extern "C" {
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK TObjFish__sub_803E46BC(void *);
extern RecoveredGlobal_8018417C_lbl_8050DC38 lbl_8050DC38;
extern RecoveredGlobal_8018417C_lbl_8050DC50 lbl_8050DC50;
extern const f32 lbl_805DBC4C;
extern const f32 lbl_805DBC6C;
void TLobby__sub_8018417C(u8 *arg0);
s32 TPhotonMagicSquare__sub_801A2640(void *, void *);
extern RecoveredGlobal_8018411C_lbl_804B5D38 lbl_804B5D38;
extern s32 lbl_805D3278;
u8 *TObjCity_Season_HalloweenPumpkin__ct(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

typedef char RecoveredGlobal_8018417C_lbl_8050DC38_size[sizeof(RecoveredGlobal_8018417C_lbl_8050DC38) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8018417C_lbl_8050DC50_size[sizeof(RecoveredGlobal_8018417C_lbl_8050DC50) == 0x18 ? 1 : -1];

typedef char RecoveredGlobal_8018411C_lbl_804B5D38_size[sizeof(RecoveredGlobal_8018411C_lbl_804B5D38) == 0x34 ? 1 : -1];
u8 *TObjCity_Season_HalloweenPumpkin__ct(u8 *arg0, s32 arg1, s32 arg2) {
    TPhotonMagicSquare__sub_801A2640((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804B5D38.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3278;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    return arg0;
}

void TLobby__sub_8018417C(u8 *arg0) {
    u8 *temp_r31;
    temp_r31 = (u8 *)(M2C_FIELD(&lbl_8050DC38.value, u8 **, 8));
    if ((temp_r31 != NULL) && (((VObj_18_26a62c *)(arg0))->m8(lbl_805DBC6C, lbl_805DBC4C) != 0)) {
        set_global_param__8TObjFishFi((int) (M2C_FIELD(&lbl_8050DC50.value, s32 *, 8)));
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        TObjFish__sub_803E46BC((void *) (M2C_FIELD(M2C_FIELD(temp_r31, u8 **, 0x42C), s32 *, 0x58)));
        pop_matrix();
    }
}

}
