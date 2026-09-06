#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void TObjPlayer__sub_800193FC(s32, s32, s32);
void TObjPlayer__sub_8001940C(s32, s32, s32);
void obj_setFlags30(void *, u32);
void TObjPlayer__sub_8001489C(s32 arg0, f32 farg0);
}

extern "C" {

int obj_clearFlags30(void*, void*);
void reset_pose__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_80014830(void);
int TObjPlayer__sub_80014838(void);
void TObjPlayer__sub_80014840(void);
void TObjPlayer__sub_80014884(void);
void TObjPlayer__sub_80014888(void);
void TObjPlayer__sub_8001488C(void);
void TObjPlayer__sub_80014890(void);
void TObjPlayer__sub_80014894(void);
void TObjPlayer__sub_80014898(void);

void TObjPlayer__sub_8001489C(s32 arg0, f32 farg0) {
    TObjPlayer__sub_8001940C(arg0, 4, 0x14);
    TObjPlayer__sub_800193FC(arg0, 4, (s32) farg0);
    obj_setFlags30((void *) arg0, 0x4000U);
}

}
