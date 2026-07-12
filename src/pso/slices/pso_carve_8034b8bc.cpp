#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdSinglePlyChrSelectGC__sub_80132F2C(s32, s32);
s32 TChallenge4PResult__sub_8034B720(void *, s32);
void TChallenge4PResult__sub_8034B8B0(void* p);
int queue_destruction__18TChallenge4PResultFPv(void* p);
int queue_destruction__7TObjectFv(void*);

int TChallenge4PResult__sub_8034B8BC(void) { return 0; }
int TChallenge4PResult__sub_8034B918(void) { return 0; }
int TChallenge4PResult__sub_8034B974(void) { return 0; }
int TChallenge4PResult__sub_8034BA2C(void) { return 0; }

}
