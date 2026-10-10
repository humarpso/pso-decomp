#include "types.h"
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Obj_800A73F8 { u8 pad0[0x18]; void *vt; u8 pad1c[0x3C0 - 0x1C]; void *items[3]; };

extern "C" {
s32 queue_destruction__7TObjectFv(void *);
void *TObjPlayer__sub_800A05B8(void *, s16);
void __dt__9TObjEnemyFv(void *, int);
s32 free_collision_body_parts(void *);
s32 __dl__7TObjectFPv(void *);
extern u8 TObjEneSaver__vtable[];
Obj_800A73F8 *fn_800A73F8(Obj_800A73F8 *arg0, s16 arg1);
}

extern "C" {

Obj_800A73F8 *fn_800A73F8(Obj_800A73F8 *arg0, s16 arg1) {
    s32 i;
    if (arg0 != NULL) {
        i = 0;
        arg0->vt = TObjEneSaver__vtable;
        do {
            if (arg0->items[i] != NULL) {
                queue_destruction__7TObjectFv(arg0->items[i]);
                arg0->items[i] = NULL;
            }
            i++;
        } while (i < 3);
        free_collision_body_parts(arg0);
        TObjPlayer__sub_800A05B8((u8 *)arg0 + 0x3A4, -1);
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
