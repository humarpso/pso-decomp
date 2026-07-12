#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TObjEneMe1Canadin__vt107(void);
void fn_8009E378(void *arg0);
void set_flag3c8_bit40__23TObjEneMe1CanadinLeaderFPv(void* p);
void set_flag3c8_bit20__23TObjEneMe1CanadinLeaderFPv(void* p);
void set_flag3c8_bit8__23TObjEneMe1CanadinLeaderFPv(void* p);
int TObjEneMe1CanadinLeader__sub_8009E36C(void* p);
int TObjEneMe1Canadin__vt114(void);
void TObjEneMe1Canadin__vt115(void);
s32 TPhotonMylla__sub_80154CB4(u16);
void TObjEneMe1CanadinLeader__sub_8009E27C(void* p);
void TObjEneMe1CanadinLeader__sub_8009E28C(void* p);
int fn_8009E2DC(void* a0 = 0);
s32 TBoss2DeRolLe__sub_800B98D8(void *);

void fn_8009E378(void *arg0) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) == 2) {
        M2C_FIELD(arg0, s32 *, 0x3C0) = TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0x4C8));
        fn_8009E2DC((void*)(M2C_FIELD(arg0, s32 *, 0x3C0)));
    }
}
int TObjEneMe1Canadin__vt107(void) { return 1; }

}
