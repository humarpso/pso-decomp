#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TObjPlayer__sub_80115BC0(void);
int TObjPlayer__sub_80115BFC(void);
void approach_value__20TItemEffOrgaFlowShotFPvff(f32 *arg0, f32 farg0, f32 farg1);
int fn_80115AF0(void* p);
int fn_80115B14(void);
int decrement_packed_timer__15TObjBoss2TunnelFPvi(void*);
int decrement_timer__17TItemEffectWeaponFPv(void* p);
int set_flags__10TObjPlayerFPvUi(void*);

int fn_80115AF0(void* p) { return set_flags__10TObjPlayerFPvUi((char*)p + 0x1c); }
int fn_80115B14(void) { return 0; }

extern const f32 lbl_805DABE8;

void approach_value__20TItemEffOrgaFlowShotFPvff(f32 *arg0, f32 farg0, f32 farg1) {
    *arg0 += farg0;
    if (farg0 > lbl_805DABE8) {
        if (*arg0 > farg1) {
            *arg0 = farg1;
        }
    } else if (*arg0 < farg1) {
        *arg0 = farg1;
    }
}

int TObjPlayer__sub_80115BC0(void) { return 0; }
int TObjPlayer__sub_80115BFC(void) { return 0; }

}
