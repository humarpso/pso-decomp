#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjQuestColA__ct(void *arg0);
void TObjQuestColBase__ct(void *);

extern M2C_UNK __vt__13TObjQuestColA[];
extern void *lbl_805D33F0;

void *TObjQuestColA__ct(void *arg0) {
    TObjQuestColBase__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjQuestColA;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D33F0;
    return arg0;
}

}
