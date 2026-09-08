#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
bool TBoss8Dragon__sub_802FCCBC(u8 *arg0);
}

extern "C" {

s32 VecCopy__FP3VecPC3Vec(s32, s32);
int TBoss8Dragon__sub_802FBBFC(void*, void*);
void set_state_22__12TBoss8DragonFPv(void* p);
void TBoss8Dragon__sub_802FCD00(void);
void TBoss8Dragon__sub_802FCD04(void);
void TBoss8Dragon__sub_802FCD08(void);
void TBoss8Dragon__sub_802FCD0C(void);

bool TBoss8Dragon__sub_802FCCBC(u8 *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x326) != 0x1E;
}

}
