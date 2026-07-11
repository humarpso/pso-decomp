#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void free_child__9TWindowDDFPv(void *arg0);
void free__11TOBoss4RockFUi(void *);
void fn_80257CB8(void *);

void free_child__9TWindowDDFPv(void *arg0) {
    if (M2C_FIELD(arg0, void **, 0x80) != NULL) {
        free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0x80));
        M2C_FIELD(arg0, u32 *, 0x80) = 0;
    }
    fn_80257CB8((void *)((char *)arg0 + 36));
    M2C_FIELD(arg0, u32 *, 0x74) = 0;
    M2C_FIELD(arg0, u32 *, 0x7C) = 0;
}

}
