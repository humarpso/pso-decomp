#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_803D2E04_lbl_80587880 {
    M2C_UNK value;
    u8 remaining[0x2FFC];
};

struct RecoveredGlobal_803D2E94_lbl_8058A880 {
    M2C_UNK value;
    u8 remaining[0xBFC];
};

typedef s32 M2C_UNK;
struct Obj_803D2C84 {
    void *vt;
    s32 used;
    void *uuid;
    s32 xc;
    s32 x10;
    s32 x14;
    s32 x18;
    s32 data;
    s32 bsize;
    s32 x24;
    void (*errfn)(void);
    void *errobj;
};

extern "C" {
M2C_UNK memset(void *, int, int);
extern RecoveredGlobal_803D2E04_lbl_80587880 lbl_80587880;
extern s32 lbl_805D7648;
void release_ref_and_clear_buffer_3000__6TLobbyFv(void);
M2C_UNK memset(void *, int, int);
extern RecoveredGlobal_803D2E94_lbl_8058A880 lbl_8058A880;
extern s32 lbl_805D7650;
void dec_ref_and_clear_buffer__6TLobbyFv(void);
void TLobby__sub_803D2E90(void);
void restore_interrupts_nested__6TLobbyFv(void);
void lock_enter__6TLobbyFv(void);
void TLobby__sub_803D2E90(void);
extern RecoveredGlobal_803D2E04_lbl_80587880 lbl_80587880;
extern u8 lbl_804F9E30[];
extern u8 lbl_8047DEDC[];
Obj_803D2C84 *TLobby__sub_803D2C84(s32 data, s32 bsize, s32 x24);
M2C_UNK memset(void *, int, int);
extern RecoveredGlobal_803D2E04_lbl_80587880 lbl_80587880;
extern s32 lbl_805D7648;
extern const char *const volatile lbl_805E0DB8;
void add_ref_and_clear_buffer_3000__6TLobbyFv(void);
}

extern "C" {

typedef char RecoveredGlobal_803D2E04_lbl_80587880_size[sizeof(RecoveredGlobal_803D2E04_lbl_80587880) == 0x3000 ? 1 : -1];

Obj_803D2C84 *TLobby__sub_803D2C84(s32 data, s32 bsize, s32 x24) {
    Obj_803D2C84 *s;
    s32 i;
    lock_enter__6TLobbyFv();
    for (i = 0; i < 256; i++) {
        if (((Obj_803D2C84 *)&lbl_80587880)[i].used == 0) {
            break;
        }
    }
    if (i == 256) {
        s = 0;
    } else {
        s = &((Obj_803D2C84 *)&lbl_80587880)[i];
        s->used = 1;
        s->vt = lbl_804F9E30;
        s->data = data;
        s->bsize = bsize;
        s->x24 = x24;
        s->uuid = lbl_8047DEDC;
        s->errfn = TLobby__sub_803D2E90;
        s->errobj = s;
        s->xc = 0;
        s->x10 = s->bsize;
        s->x14 = 0;
        s->x18 = 0;
    }
    restore_interrupts_nested__6TLobbyFv();
    return s;
}

void release_ref_and_clear_buffer_3000__6TLobbyFv(void) {
    s32 temp_r0;
    temp_r0 = lbl_805D7648 - 1;
    lbl_805D7648 = temp_r0;
    if (temp_r0 == 0) {
        memset((void *) (&lbl_80587880.value), (int) (0), (int) (0x3000));
    }
}
typedef char RecoveredGlobal_803D2E94_lbl_8058A880_size[sizeof(RecoveredGlobal_803D2E94_lbl_8058A880) == 0xC00 ? 1 : -1];

void add_ref_and_clear_buffer_3000__6TLobbyFv(void) {
    const char *ver = lbl_805E0DB8;
    if (lbl_805D7648 == 0) {
        memset(&lbl_80587880, 0, 0x3000);
    }
    lbl_805D7648 += 1;
}

void TLobby__sub_803D2E90(void) {
    while (1) {
    }
}

void dec_ref_and_clear_buffer__6TLobbyFv(void) {
    s32 temp_r0;
    temp_r0 = lbl_805D7650 - 1;
    lbl_805D7650 = temp_r0;
    if (temp_r0 == 0) {
        memset((void *) (&lbl_8058A880.value), (int) (0), (int) (0xC00));
    }
}

}
