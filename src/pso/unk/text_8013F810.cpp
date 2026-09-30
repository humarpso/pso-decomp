#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct L_8013FF20 { u8 pad0[0x1012]; s16 a[0x1000]; u8 pad1[0x5016 - 0x3012]; s16 b[0x1101]; };

#define NIL_8013FCB0 0x1000
struct Lz_8013FCB0 {
    u8 pad[0x1012];
    s16 dad[0x1001];
    s16 lson[0x1001];
    s16 rson[0x1101];
};

extern "C" {
void TLobby__sub_8013FF64(u8 *arg0, s8 arg1);
u8 TLobby__sub_8013FF94(u8 *arg0);
u8 TLobby__sub_8013FF78(u8 *arg0);
void TLobby__sub_8013FF20(L_8013FF20 *arg0);
void TLobby__sub_8013FCB0(Lz_8013FCB0 *t, s32 p);
}

extern "C" {

void update_floor__6TLobbyFv(void);
int TLobby__sub_8007BA20(void);
int reset_keyboard_control__6TLobbyFv(void);
int update_current_floor__6TLobbyFv(void);
int TLobby__sub_8022743C(void);
int refresh_render_state__6TLobbyFv(void);

void TLobby__sub_8013FCB0(Lz_8013FCB0 *t, s32 p) {
    s32 q;
    if (t->dad[p] == NIL_8013FCB0) {
        return;
    }
    if (t->rson[p] == NIL_8013FCB0) {
        q = t->lson[p];
    } else if (t->lson[p] == NIL_8013FCB0) {
        q = t->rson[p];
    } else {
        q = t->lson[p];
        if (t->rson[q] != NIL_8013FCB0) {
            do {
                q = t->rson[q];
            } while (t->rson[q] != NIL_8013FCB0);
            t->rson[t->dad[q]] = t->lson[q];
            t->dad[t->lson[q]] = t->dad[q];
            t->lson[q] = t->lson[p];
            t->dad[t->lson[p]] = q;
        }
        t->rson[q] = t->rson[p];
        t->dad[t->rson[p]] = q;
    }
    t->dad[q] = t->dad[p];
    if (t->rson[t->dad[p]] == p) {
        t->rson[t->dad[p]] = q;
    } else {
        t->lson[t->dad[p]] = q;
    }
    t->dad[p] = NIL_8013FCB0;
}

void TLobby__sub_8013FF20(L_8013FF20 *arg0) {
    s32 i;
    for (i = 0x1001; i < 0x1101; i++) {
        arg0->b[i] = 0x1000;
    }
    for (i = 0; i < 0x1000; i++) {
        arg0->a[i] = 0x1000;
    }
}

void TLobby__sub_8013FF64(u8 *arg0, s8 arg1) {
    s8 *temp_r5;
    temp_r5 = M2C_FIELD(arg0, s8 **, 0x7224);
    M2C_FIELD(arg0, s8 **, 0x7224) = (s8 *) (temp_r5 + 1);
    *temp_r5 = arg1;
}

u8 TLobby__sub_8013FF78(u8 *arg0) {
    return (u8) ((u32) M2C_FIELD(arg0, u32 *, 0x7220) > (u32) M2C_FIELD(arg0, u32 *, 0x7228));
}

u8 TLobby__sub_8013FF94(u8 *arg0) {
    u8 *temp_r4;
    temp_r4 = M2C_FIELD(arg0, u8 **, 0x7220);
    M2C_FIELD(arg0, u8 **, 0x7220) = (u8 *) (temp_r4 + 1);
    return *temp_r4;
}

}
