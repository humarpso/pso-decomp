#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

typedef struct {
    s32 x0;
    M2C_UNK (*fn)(M2C_UNK);
} Ent_801F2B0C;

M2C_UNK TLobby__sub_801F2D2C(void *);
extern Ent_801F2B0C lbl_804C69D8[];

void qst_getargs_801F2B0C(s32 arg0) {
    Ent_801F2B0C *temp_r3;
    M2C_UNK (*temp_r31)(M2C_UNK);

    temp_r3 = lbl_804C69D8;
    temp_r3 += arg0;
    temp_r31 = temp_r3->fn;
    temp_r31(TLobby__sub_801F2D2C(temp_r3));
}

}
