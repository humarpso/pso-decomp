#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjEneDD__ct(void *arg0);
void *TObjEneDD__vt0(void *arg0, s16 arg1);
void TObjEnemy__ct(void *);
void __dl__7TObjectFPv(void *);
void __dt__9TObjEnemyFv(void *, int);

extern M2C_UNK __vt__9TObjEneDD[];

void *TObjEneDD__vt0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__9TObjEneDD;
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__9TObjEneDD[];
extern const f32 lbl_805D9EA8;
extern void *lbl_805D2A30;

void *TObjEneDD__ct(void *arg0) {
    TObjEnemy__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__9TObjEneDD;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2A30;
    M2C_FIELD(arg0, u32 *, 0x374) = 0;
    M2C_FIELD(arg0, u32 *, 0x378) = 0;
    M2C_FIELD(arg0, f32 *, 0x37C) = lbl_805D9EA8;
    M2C_FIELD(arg0, u32 *, 0x380) = 0;
    M2C_FIELD(arg0, u32 *, 0x384) = 0;
    M2C_FIELD(arg0, u32 *, 0x388) = 0;
    return arg0;
}

}
