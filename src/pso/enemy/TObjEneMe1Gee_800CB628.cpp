#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
int TObjEneMe1Gee__sub_800CB560(void* a0 = 0);

s32 fn_800B98D8();
s32 TPhotonMylla__sub_80154CB4(u16);
void TObjEneMe1Gee__sub_800CB4CC(void* p);
void TObjEneMe1Gee__sub_800CB4F0(void* p);
void TObjEneMe1Gee__sub_800CB500(void* p);
void TObjEneMe1Gee__sub_800CB510(void* p);
void TObjEneMe1Gee__vt115(void);
int TObjEneMe1Gee__sub_800CB628(void* p);
int TObjEneMe1Gee__vt107(void);
int TObjEneMe1Gee__vt114(void);

int TObjEneMe1Gee__sub_800CB628(void* p) { return (*(u32*)((char*)p + 0x3c8) >> 15) & 0x1; }
void update_photon_target__13TObjEneMe1GeeFPv(void *arg0) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) == 3) {
        M2C_FIELD(arg0, s32 *, 0x3C0) = TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0x48C));
        TObjEneMe1Gee__sub_800CB560((void*)(M2C_FIELD(arg0, s32 *, 0x3C0)));
    }
}
int TObjEneMe1Gee__vt107(void) { return 1; }

}
