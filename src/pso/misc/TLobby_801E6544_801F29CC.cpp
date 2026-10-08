#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK read_be_u16(void *);

struct Entry804C69D8 {
    u32 field0;
    M2C_UNK (*handler)(M2C_UNK);
};
extern struct Entry804C69D8 qst_opcode_table[];

void qst_getargs_801F29CC(s32 arg0) {
    struct Entry804C69D8 *temp_r3;
    M2C_UNK (*temp_r31)(M2C_UNK);

    temp_r3 = qst_opcode_table;
    temp_r3 += arg0;
    temp_r31 = temp_r3->handler;
    temp_r31(read_be_u16(temp_r3));
}

}
