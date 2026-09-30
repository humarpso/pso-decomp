#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Obj_8022ACB4 { u8 pad[0xA6]; s16 state; };

extern "C" {
M2C_UNK update_technique_slot__10TTecRaFoieFi(s32, s32, s32);
s32 TBoss3Volopt__sub_8022675C(int, void *, int, int);
void fn_8022ACB4(Obj_8022ACB4 *arg0);
}

extern "C" {

s32 get_flag_9__7TObjectFv(void *arg0);
int TTecAnti__sub_8022AD74(void* p);
void TTecAnti__sub_8022AD94(void);
int fn_80236EE8(void*);
int queue_destruction__7TObjectFv(void*);
int queue_destruction__8TTecAntiFPv(void* p);

s32 get_flag_9__7TObjectFv(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 4) & 0x200;
}
void fn_8022ACB4(Obj_8022ACB4 *arg0) {
    s32 r;
    switch (arg0->state) {
    case 0:
    case 1:
        r = TBoss3Volopt__sub_8022675C(0x4002AB10, (u8 *)arg0 + 0x20, 0, 0);
        if (r >= 0) {
            update_technique_slot__10TTecRaFoieFi(r, 0x100, 0);
        }
        break;
    case 2:
    case 3:
        TBoss3Volopt__sub_8022675C(0x4002AB10, (u8 *)arg0 + 0x20, 0, 0);
        break;
    case 4:
    case 5:
        r = TBoss3Volopt__sub_8022675C(0x4002AB10, (u8 *)arg0 + 0x20, 0, 0);
        if (r >= 0) {
            update_technique_slot__10TTecRaFoieFi(r, -0x100, 0);
        }
        break;
    }
}

}
