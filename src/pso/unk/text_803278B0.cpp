#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Ent_803278B0 { u8 type; u8 pad1; u16 count; u8 pad4[4]; s16 *pts; u8 padC[4]; };

struct Hdr_803278B0 { Ent_803278B0 *ents; u8 pad4[4]; void *a; void *b; };

struct Ref_803278B0 { Ent_803278B0 *ent; s16 *pts; };

extern "C" {
s32 TOComputerMachine01__sub_8023DD0C(void *, u16);
void TOComputerMachine01__sub_8023DD60(void *);
extern Ref_803278B0 *lbl_805D6C70;
extern s16 *lbl_805D6C74;
void TOComputerMachine01__sub_803278B0(s32 arg0, Hdr_803278B0 *arg1, s32 arg2);
}

extern "C" {

void TOComputerMachine01__sub_803278B0(s32 arg0, Hdr_803278B0 *arg1, s32 arg2) {
    s32 hit;
    Ent_803278B0 *e;
    s16 *q;
    s32 i;
    u16 n;
    hit = 0;
    if (arg1->a != 0 && TOComputerMachine01__sub_8023DD0C(arg1->a, (u16) arg2) == 1) {
        TOComputerMachine01__sub_8023DD60(arg1->a);
        hit = 1;
    }
    if (arg1->b != 0 && TOComputerMachine01__sub_8023DD0C(arg1->b, (u16) arg2) == 1) {
        TOComputerMachine01__sub_8023DD60(arg1->b);
        hit = 1;
    }
    if (hit != 0) {
        for (e = arg1->ents; e != 0 && e->type != 0xFF; e++) {
            if (e->type == 5 || e->type == 6) {
                lbl_805D6C70->ent = e;
                lbl_805D6C70->pts = lbl_805D6C74;
                lbl_805D6C70++;
                n = e->count;
                q = e->pts;
                for (i = 0; i < n; i++) {
                    *lbl_805D6C74++ = q[0];
                    *lbl_805D6C74++ = q[1];
                    q += 2;
                }
            }
        }
    }
}

}
