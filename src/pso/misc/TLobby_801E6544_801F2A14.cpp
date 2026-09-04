#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

typedef struct {
    s32 x0;
    M2C_UNK (*fn)(M2C_UNK);
} Ent_801F2A14;

M2C_UNK stream_read_be32(void *);
extern Ent_801F2A14 lbl_804C69D8[];

void qst_getargs_801F2A14(s32 arg0) {
    Ent_801F2A14 *temp_r3;
    M2C_UNK (*temp_r31)(M2C_UNK);

    temp_r3 = lbl_804C69D8;
    temp_r3 += arg0;
    temp_r31 = temp_r3->fn;
    temp_r31(stream_read_be32(temp_r3));
}

}
