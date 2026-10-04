#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Ent_80042974 { u16 id; s16 flag; s32 pad; };

struct List_80042974 { s32 count; Ent_80042974 ents[1]; };

extern "C" {
u8 *get_player_data__10TObjPlayerFi(s32);
u16 obj_getField1c(void *);
M2C_UNK TObjPlayer__sub_80042ED0(void *, int, void *);
M2C_UNK fn_80044330(void *);
M2C_UNK create_ex__8TTecFoieFPvPvPvPv(void *, void *, void *, int);
M2C_UNK create__11TTecGiBartaFPvPvPvPv(void *, void *, void *, int);
M2C_UNK create__11TTecGiZondeFPvPvPvPv(void *, void *, void *, int);
extern s32 lbl_805D4C44;
extern s32 lbl_805D586C;
void TObjPlayer__sub_80042974(u8 *arg0);
}

extern "C" {

void TObjPlayer__sub_80042974(u8 *arg0) {
    M2C_UNK sp8;
    s32 n;
    s32 i;
    u8 *p;
    s32 j;
    u8 *q;
    s32 k;
    TObjPlayer__sub_80042ED0(arg0, 0xC, &sp8);
    switch (lbl_805D4C44) {
    case 0:
        fn_80044330(arg0 + 0x3BC);
        n = 0;
        for (i = 0; i < lbl_805D586C; i++) {
            p = get_player_data__10TObjPlayerFi(i);
            if (p != NULL && obj_getField1c(p) < 0x1000 && !(M2C_FIELD(p, s32 *, 0x30) & 0x02000800)) {
                ((List_80042974 *)(arg0 + 0x3BC))->ents[n].id = obj_getField1c(p);
                ((List_80042974 *)(arg0 + 0x3BC))->ents[n].flag = 1;
                n++;
            }
        }
        ((List_80042974 *)(arg0 + 0x3BC))->count = n;
        if (n > 0) {
            create__11TTecGiZondeFPvPvPvPv(arg0, &sp8, arg0 + 0x3BC, 0x1D);
        }
        break;
    case 1:
        for (j = 0; j < lbl_805D586C; j++) {
            p = get_player_data__10TObjPlayerFi(j);
            if (p != NULL && obj_getField1c(p) < 0x1000 && !(M2C_FIELD(p, s32 *, 0x30) & 0x02000800)) {
                create_ex__8TTecFoieFPvPvPvPv(arg0, &sp8, p + 0x2FC, 0x1D);
            }
        }
        break;
    case 2:
        for (k = 0; k < lbl_805D586C; k++) {
            q = get_player_data__10TObjPlayerFi(k);
            if (q != NULL && obj_getField1c(q) < 0x1000 && !(M2C_FIELD(q, s32 *, 0x30) & 0x02000800)) {
                create__11TTecGiBartaFPvPvPvPv(arg0, &sp8, q + 0x2FC, 0x1D);
            }
        }
        break;
    }
}

}
