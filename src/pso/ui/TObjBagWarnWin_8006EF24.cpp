#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
extern u8 *text_language_group_table;
s32 TQuestVmDownLoadServer__sub_8006EF6C(s32 arg0);
}

extern "C" {

void *create__14TObjBagWarnWinFPv(void *arg0);
void *__ct__14TObjBagWarnWinFv(void *, void *);
void *__nw__7TObjectFUl(int);

void *create__14TObjBagWarnWinFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xA4);
    if (o != NULL) {
        o = __ct__14TObjBagWarnWinFv(o, arg0);
    }
    return o;
}
s32 TQuestVmDownLoadServer__sub_8006EF6C(s32 arg0) {
    return M2C_FIELD(M2C_FIELD(text_language_group_table, s32 *, 0x2C), M2C_UNK *, (arg0 * 4));
}

}
