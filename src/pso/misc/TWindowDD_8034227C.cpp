#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *destroy__9TWindowDDFPvs(void *arg0, s16 arg1);
void free__11TOBoss4RockFUi(void *);
void __dl__7TObjectFPv(void *);
void destroy_window_base__9TWindowDDFPvs(void *, int);

extern M2C_UNK lbl_804EFC90[];

void *destroy__9TWindowDDFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EFC90;
        if (M2C_FIELD(arg0, void **, 0x80) != NULL) { free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0x80)); M2C_FIELD(arg0, M2C_UNK *, 0x80) = 0; }
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
