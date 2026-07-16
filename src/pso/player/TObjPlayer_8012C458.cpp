#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_8012C458(u8 *arg0);
s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(int);
M2C_UNK TObjContainerIdo__sub_803D96A8(int, int);
s32 TObjEneDellBiter__sub_80087350(u32, s32);
void TObjPlayer__sub_8012C4E0(void);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
s32 is_owner_alive__10TObjPlayerFPv();
M2C_UNK notify_fish_if_valid__10TObjPlayerFUi(int);
s32 update_rico_ring__10TObjPlayerFUi(u32);

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {

void TObjPlayer__sub_8012C458(u8 *arg0) {
    if ((is_owner_alive__10TObjPlayerFPv() != 0) && ((u32) M2C_FIELD(arg0, u32 *, 0x58) != 0U) && ((u32) M2C_FIELD(arg0, u32 *, 0x5C) != 0U)) {
        TObjPlayer__sub_803D9B2C();
        notify_fish_if_valid__10TObjPlayerFUi((int) (M2C_FIELD(arg0, u32 *, 0x5C)));
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x1C));
        TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x2C)));
        TObjContainerIdo__sub_803D96A8((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x28) - 0x4000));
        TObjBoss2Tunnel__sub_803DB470((int) (M2C_FIELD(arg0, u32 *, 0x58)));
        TObjPlayer__sub_803D9B78();
    }
}

}

}
