#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TLobby__sub_800F9A60(void *arg0, void *arg1, void *arg2);
void *__nw__7TObjectFUl(int);
void fn_800F9C00(void *);
void *fn_800F9C68(void *, void *);
void memset(void *, int, int);
void strncpy(void *, void *, int);

extern M2C_UNK lbl_8050113C[];
struct VOff_800F9A60_o_800f9a60 { char pad_0[0x28]; char f_28[1]; };

void TLobby__sub_800F9A60(void *arg0, void *arg1, void *arg2) {
    struct VOff_800F9A60_o_800f9a60 *o;
    o = (struct VOff_800F9A60_o_800f9a60 *)__nw__7TObjectFUl(0x3C);
    if (o != NULL) {
        o = (struct VOff_800F9A60_o_800f9a60 *)fn_800F9C68(o, lbl_8050113C);
    }
    memset(o->f_28, 0, 17);
    strncpy(o->f_28, arg0, 16);
    M2C_FIELD(o, void **, 0x0) = o->f_28;
    M2C_FIELD(o, void **, 0x1C) = arg1;
    M2C_FIELD(o, void **, 0x20) = arg2;
    fn_800F9C00(o);
}

}
