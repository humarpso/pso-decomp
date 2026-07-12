#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_80126EA8(void* p);
void TObjPlayer__sub_80126EE4(s32 arg0);
void TObjPlayer__sub_80126F10(s32 arg0);
void TObjPlayer__sub_80126F3C(void);
int TBoss7Tentacle__sub_803D9BA0(void*);
int TObjPlayer__sub_80121200(void*);
M2C_UNK approach_value__20TItemEffOrgaFlowShotFPvff(s32, f32, f32);

void TObjPlayer__sub_80126EA8(void* p) { if (TObjPlayer__sub_80121200(p) == 2) { TBoss7Tentacle__sub_803D9BA0((char*)p + 0x1f8); } }

extern const f32 lbl_805DADA0;
extern const f32 lbl_805DADA4;

void TObjPlayer__sub_80126EE4(s32 arg0) {
    approach_value__20TItemEffOrgaFlowShotFPvff(arg0 + 0x200, lbl_805DADA0, lbl_805DADA4);
}

extern const f32 lbl_805DADA8;
extern const f32 lbl_805DADAC;

void TObjPlayer__sub_80126F10(s32 arg0) {
    approach_value__20TItemEffOrgaFlowShotFPvff(arg0 + 0x200, lbl_805DADA8, lbl_805DADAC);
}

void TObjPlayer__sub_80126F3C(void) {  }

}
