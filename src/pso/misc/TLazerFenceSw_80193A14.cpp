#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TLazerFenceSw__vt16(void *arg0);
void TLazerFenceSw__vt17(void *arg0);
void call_vt21__12TBoss3VoloptFPv(void *);
void TOKey__sub_8016A8D0(void *);

extern const f32 TLazerFenceSw__data_805DBE84;

void TLazerFenceSw__vt16(void *arg0) {
    TOKey__sub_8016A8D0(arg0);
    M2C_FIELD(arg0, f32 *, 0xB0) = TLazerFenceSw__data_805DBE84;
    M2C_FIELD(arg0, f32 *, 0xEC) = TLazerFenceSw__data_805DBE84;
}

extern const f32 TLazerFenceSw__data_805DBE84;

void TLazerFenceSw__vt17(void *arg0) {
    call_vt21__12TBoss3VoloptFPv(arg0);
    M2C_FIELD(arg0, f32 *, 0xB0) = TLazerFenceSw__data_805DBE84;
    M2C_FIELD(arg0, f32 *, 0xEC) = TLazerFenceSw__data_805DBE84;
}

}
