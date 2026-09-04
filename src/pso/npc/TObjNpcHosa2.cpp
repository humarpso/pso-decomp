#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__12TObjNpcHosa2Fv(void *arg0, s16 arg1);
void close_dialog_window__12TObjNpcHosa2Fv(void);
void TLobby__sub_8001FE7C(void*, int);
void __dl__7TObjectFPv(void *);
void destroy_npc_lappy_base__12TObjNpcLappyFPvs(void *, int);

extern u32 TObjNpcHosa2__data_805D69D8;

void close_dialog_window__12TObjNpcHosa2Fv(void) {
    if ((u32) TObjNpcHosa2__data_805D69D8 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjNpcHosa2__data_805D69D8, 1);
        TObjNpcHosa2__data_805D69D8 = 0U;
    }
}

extern M2C_UNK __vt__12TObjNpcHosa2[];

void *__dt__12TObjNpcHosa2Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TObjNpcHosa2;
        destroy_npc_lappy_base__12TObjNpcLappyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
