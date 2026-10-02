#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Obj_802EDCF0 {
    u8 pad0[0x6D4];
    s32 f6D4;
    s32 f6D8;
    void *f6DC[4];
    u8 pad6EC[0x708 - 0x6EC];
    void *f708;
    u8 pad70C[0x718 - 0x70C];
    void *f718;
    void *f71C;
    void *f720;
    u8 pad724[0x784 - 0x724];
    void *f784;
    void *f788[6];
};

extern "C" {
M2C_UNK __dt__7TObjectFv(void *, int);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK free_if_positive__13TBoss2DeRolLeFis(void *, int);
M2C_UNK __dt__9TObjEneDDFv(void *, int);
M2C_UNK TBoss8Dragon__sub_800BC5A0(void *, int);
M2C_UNK free__11TOBoss4RockFUi(s32);
M2C_UNK clear_obj_links(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK destroy_child__8TObjFishFPv(void *);
extern M2C_UNK lbl_804E3E54[];
extern u32 lbl_805D6938;
u8 *fn_802EDCF0(u8 *arg0, s16 arg1);
}

extern "C" {

u8 *fn_802EDCF0(u8 *arg0, s16 arg1) {
    Obj_802EDCF0 *o = (Obj_802EDCF0 *) arg0;
    s32 i;
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E3E54;
        if (o->f784 != 0) {
            queue_destruction__7TObjectFv(o->f784);
            o->f784 = 0;
        }
        for (i = 0; i < 6; i++) {
            if (o->f788[i] != 0) {
                queue_destruction__7TObjectFv(o->f788[i]);
                o->f788[i] = 0;
            }
        }
        free__11TOBoss4RockFUi(o->f6D4);
        o->f6D4 = 0;
        if (o->f71C != 0) {
            queue_destruction__7TObjectFv(o->f71C);
            o->f71C = 0;
        }
        if (o->f720 != 0) {
            queue_destruction__7TObjectFv(o->f720);
            o->f720 = 0;
        }
        if (o->f718 != 0) {
            TBoss8Dragon__sub_800BC5A0(o->f718, 1);
            o->f718 = 0;
        }
        if (o->f708 != 0) {
            queue_destruction__7TObjectFv(o->f708);
            o->f708 = 0;
        }
        for (i = 3; i >= 0; i--) {
            queue_destruction__7TObjectFv(o->f6DC[i]);
            o->f6DC[i] = 0;
        }
        free__11TOBoss4RockFUi(o->f6D8);
        clear_obj_links(arg0);
        if (lbl_805D6938 == (u32) arg0) {
            lbl_805D6938 = 0;
        }
        destroy_child__8TObjFishFPv(arg0);
        __dt__7TObjectFv(arg0 + 0x690, -1);
        free_if_positive__13TBoss2DeRolLeFis(arg0 + 0x670, -1);
        free_if_positive__13TBoss2DeRolLeFis(arg0 + 0x650, -1);
        free_if_positive__13TBoss2DeRolLeFis(arg0 + 0x630, -1);
        __dt__9TObjEneDDFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
