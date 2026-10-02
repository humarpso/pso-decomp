#include "types.h"
typedef s32 M2C_UNK;
struct D_803501BC { u8 a, b, c; u8 rest[0x14 - 3]; };

struct E_803501BC { u8 a, b, c; u8 w; };

struct T_803501BC { s32 n; E_803501BC *e; };

extern "C" {
s32 get_field_d8__10TObjPlayerFPv(void *);
void consume_item_by_id(s32);
s32 TItem__sub_801008F0(void *, void *);
u8 get_slot_count__14TItemProShieldFPv(void *);
T_803501BC *get_item_pmt_entry__10TObjPlayerFUc(u8);
s32 rand(void);
extern const f32 lbl_805DFE28;
extern const f32 lbl_805DFE2C;
void fn_803501BC(void *arg0);
}

extern "C" {

void fn_803501BC(void *arg0) {
    T_803501BC *t;
    t = get_item_pmt_entry__10TObjPlayerFUc(get_slot_count__14TItemProShieldFPv(arg0));
    if (t != NULL) {
        s32 r = (s32)(lbl_805DFE28 * (lbl_805DFE2C * (f32)rand()));
        E_803501BC *e = t->e;
        s32 i;
        for (i = t->n; i != 0; i++) {
            if ((u8)r < e->w) {
                D_803501BC d;
                d.a = e->a;
                d.b = e->b;
                d.c = e->c;
                TItem__sub_801008F0(&d, arg0);
                return;
            }
            r -= e->w;
            e++;
        }
    }
    consume_item_by_id(get_field_d8__10TObjPlayerFPv(arg0));
}

}
