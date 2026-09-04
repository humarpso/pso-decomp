#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u8 TBoss1Dragon__sub_80143960(u8 *arg0, s32 arg1);
}

extern "C" {

int TObjPlayer__sub_8014394C(void);
void *TPlyPhotonChair__sub_801438E0(void *arg0, s16 arg1);
s32 TPlyPhotonChair__sub_80143930(void* p);
void activate__15TPlyPhotonChairFPv(void* p);
void *destroy__15TPlyPhotonChairFPvs(void *arg0, s16 arg1);
f32 get_float_c__15TPlyPhotonChairFPv(void* p);
s32 get_id__15TPlyPhotonChairFPv(void* p);
M2C_UNK __dl__FPv(void *);

extern M2C_UNK lbl_804A7478[];

void *destroy__15TPlyPhotonChairFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = lbl_804A7478;
        TPlyPhotonChair__sub_801438E0((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804A7488[];

void *TPlyPhotonChair__sub_801438E0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = lbl_804A7488;
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

f32 get_float_c__15TPlyPhotonChairFPv(void* p) { return *(f32*)((char*)p + 0xc); }

s32 TPlyPhotonChair__sub_80143930(void* p) { return *(s32*)((char*)p + 0x8); }
s32 get_id__15TPlyPhotonChairFPv(void* p) { return *(s32*)((char*)p + 0x0); }
void activate__15TPlyPhotonChairFPv(void* p) { *(s32*)((char*)p + 0x18) = 1; }

int TObjPlayer__sub_8014394C(void) { return 0; }

u8 TBoss1Dragon__sub_80143960(u8 *arg0, s32 arg1) {
    return (u8) ((M2C_FIELD(arg0, s32 *, 0xB0) & arg1) != 0);
}

}
