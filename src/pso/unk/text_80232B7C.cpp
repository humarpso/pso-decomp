#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Ent_80232E0C { u32 a; u32 count; };

struct Obj_80232E0C {
    u8 pad0[0x18];
    void *vt;
    void **items;
    s32 f20;
    s32 kind;
};

extern "C" {
void __dt__7TObjectFv(void *, s32);
void queue_destruction__7TObjectFv(void *);
void free__11TOBoss4RockFUi(void *);
void TLobby__sub_80226294(s32);
void __dl__7TObjectFPv(void *);
extern Ent_80232E0C lbl_8044D53C[];
extern u8 lbl_804CC888[];
Obj_80232E0C *fn_80232E0C(Obj_80232E0C *arg0, s16 arg1);
}

extern "C" {

Obj_80232E0C *fn_80232E0C(Obj_80232E0C *arg0, s16 arg1) {
    u32 i;
    if (arg0 != NULL) {
        arg0->vt = lbl_804CC888;
        for (i = 0; i < lbl_8044D53C[arg0->kind].count; i++) {
            if (arg0->items[i] != NULL) {
                queue_destruction__7TObjectFv(arg0->items[i]);
            }
        }
        TLobby__sub_80226294(arg0->f20);
        free__11TOBoss4RockFUi(arg0->items);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
