#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_803D259C_lbl_80587400 {
    M2C_UNK value;
    u8 remaining[0x47C];
};

struct Slot_803D2474 {
    void *vt;
    s32 active;
    void *f8;
    s32 fC;
    s32 f10;
    s32 f14;
    s32 f18;
    void *f1C;
    void *f20;
};

extern "C" {
M2C_UNK memset(void *, int, int);
extern RecoveredGlobal_803D259C_lbl_80587400 lbl_80587400;
extern s32 lbl_805D7640;
void release_ref_and_clear_buffer__6TLobbyFv(void);
M2C_UNK memset(void *, int, int);
void TLobby__sub_803D2434(u8 *arg0);
void TLobby__sub_803D2624(void);
extern u8 lbl_8047DEA0[];
extern u8 lbl_804F9E00[];
extern RecoveredGlobal_803D259C_lbl_80587400 lbl_80587400;
Slot_803D2474 *alloc_adx_stream_slot__6TLobbyFii(s32 arg0, s32 arg1);
}

extern "C" {

typedef char RecoveredGlobal_803D259C_lbl_80587400_size[sizeof(RecoveredGlobal_803D259C_lbl_80587400) == 0x480 ? 1 : -1];

void TLobby__sub_803D2434(u8 *arg0) {
    if (arg0 != NULL) {
        memset((void *)(arg0), (int) (0), (int) (0x24));
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
}

#pragma push
#pragma optimize_for_size off
Slot_803D2474 *alloc_adx_stream_slot__6TLobbyFii(s32 arg0, s32 arg1) {
    s32 i;
    Slot_803D2474 *s;
    for (i = 0; i < 32; i++) {
        if (((Slot_803D2474 *)&lbl_80587400)[i].active == 0) {
            break;
        }
    }
    if (i == 32) {
        return NULL;
    }
    s = &((Slot_803D2474 *)&lbl_80587400)[i];
    s->active = 1;
    s->vt = lbl_804F9E00;
    s->f14 = arg0;
    s->f18 = arg1;
    s->f8 = lbl_8047DEA0;
    s->f1C = (void *)TLobby__sub_803D2624;
    s->f20 = s;
    s->fC = s->f18;
    s->f10 = 0;
    return s;
}
#pragma pop

void release_ref_and_clear_buffer__6TLobbyFv(void) {
    s32 temp_r0;
    temp_r0 = lbl_805D7640 - 1;
    lbl_805D7640 = temp_r0;
    if (temp_r0 == 0) {
        memset((void *) (&lbl_80587400.value), (int) (0), (int) (0x480));
    }
}

}
