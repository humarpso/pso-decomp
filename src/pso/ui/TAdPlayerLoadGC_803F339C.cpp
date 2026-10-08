#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct S_803F3328 { u8 pad0[4]; s32 state; u8 card[0x80]; };
typedef struct Slot_803F3478 {
    s32 f0;
    char name[0x20];
    char name2[0x20];
    s32 f44;
    s32 f48;
    s32 f4C;
    s32 f50;
    s32 f54;
    s32 f58;
    s32 f5C;
    u8 pad60[8];
} Slot_803F3478;

struct S_803F3690 { s16 f0; s16 pad2; s32 state; u8 card[0x80]; };

extern "C" {
M2C_UNK OSFreeToHeap(int, void *);
s32 TLobby__sub_803F4AB4();
M2C_UNK TLobby__sub_803F4AD8(int);
M2C_UNK TLobby__sub_803F4B10(int);
M2C_UNK TLobby__sub_803F4B2C(int);
extern s32 __OSCurrHeap;
extern s32 lbl_805D79B0;
extern u32 lbl_805D79C0;
extern s32 lbl_805D7940;
s32 TAdPlayerLoadGC__sub_803F31BC(void);
s32 CARDUnmount(s32 chan);
void TAdPlayerLoadGC__sub_803F389C(s32 chan);
M2C_UNK memset(void *, int, int);
extern Slot_803F3478 lbl_805A28E0[];
void reset_slot_entry__15TAdPlayerLoadGCFi(s32 arg0);
extern S_803F3328 lbl_805A29B0[];
s32 CARDClose(void *);
M2C_UNK memset(void *, int, int);
s32 close_card_slot__15TAdPlayerLoadGCFi(s32 arg0);
s32 CARDProbe(s32 chan);
char *strcpy(char *, const char *);
u32 strlen(const char *);
M2C_UNK memset(void *, int, int);
extern Slot_803F3478 lbl_805A28E0[];
s32 get_load_state__15TAdPlayerLoadGCFv(void);
s32 finish_load_slot_state4__15TAdPlayerLoadGCFiPv(s32 arg0, s32 *arg1);
extern Slot_803F3478 lbl_805A28E0[];
s32 get_load_state__15TAdPlayerLoadGCFv(void);
s32 TAdPlayerLoadGC__sub_803F3998(s32 chan);
char *strcpy(char *, const char *);
u32 strlen(const char *);
M2C_UNK memset(void *, int, int);
s32 get_load_state__15TAdPlayerLoadGCFv(void);
extern Slot_803F3478 lbl_805A28E0[];
extern S_803F3328 lbl_805A29B0[];
s32 TAdPlayerLoadGC__sub_803F3690(s32 chan, const char *name);
}

extern "C" {

s32 get_load_state__15TAdPlayerLoadGCFv(void);
s32 get_or_set_channel_flag__15TAdPlayerLoadGCFii(s32 arg0, s32 arg1);

extern M2C_UNK lbl_805D4700;

extern s32 lbl_805D7940;

s32 finish_load_slot_state4__15TAdPlayerLoadGCFiPv(s32 arg0, s32 *arg1) {
    s32 r;
    s32 t;
    if (get_load_state__15TAdPlayerLoadGCFv() < 1) {
        return -1;
    }
    if (lbl_805A28E0[arg0].f44 == 0x4) {
        *arg1 = lbl_805A28E0[arg0].f5C;
        t = lbl_805A28E0[arg0].f58;
        r = t;
        if (t != 200) {
            lbl_805A28E0[arg0].f0 = 0;
            memset(lbl_805A28E0[arg0].name, 0, 0x20);
            memset(lbl_805A28E0[arg0].name2, 0, 0x20);
            lbl_805A28E0[arg0].f44 = 0;
            lbl_805A28E0[arg0].f48 = 0;
            lbl_805A28E0[arg0].f4C = 0;
            lbl_805A28E0[arg0].f50 = 0;
            lbl_805A28E0[arg0].f54 = -1;
            lbl_805A28E0[arg0].f58 = 0;
            lbl_805A28E0[arg0].f5C = 0;
        }
    } else {
        *arg1 = 0;
        r = -4;
    }
    return r;
}

s32 queue_network_request__15TAdPlayerLoadGCFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 chan;

    if (get_load_state__15TAdPlayerLoadGCFv() < 1) {
        return -1;
    }
    if (arg0 < 0 || arg0 >= 100 || ((chan = lbl_805A29B0[arg0].state) != 0 && chan != 1)) {
        return -2;
    }
    if (lbl_805A28E0[chan].f44 != 0) {
        return -4;
    }
    lbl_805A28E0[chan].f44 = 4;
    lbl_805A28E0[chan].f48 = 9;
    lbl_805A28E0[chan].f58 = 200;
    lbl_805A28E0[chan].f0 = arg1;
    lbl_805A28E0[chan].f50 = arg2;
    lbl_805A28E0[chan].f4C = arg3;
    lbl_805A28E0[chan].f54 = arg0;
    return 0;
}
s32 finish_load_slot_state3__15TAdPlayerLoadGCFiPv(s32 arg0, s32 *arg1) {
    s32 r;
    s32 t;

    if (get_load_state__15TAdPlayerLoadGCFv() < 1) {
        return -1;
    }
    if (lbl_805A28E0[arg0].f44 == 3) {
        *arg1 = lbl_805A28E0[arg0].f5C;
        t = lbl_805A28E0[arg0].f58;
        r = t;
        if (t != 200) {
            if (r != 0) {
                memset(&lbl_805A29B0[lbl_805A28E0[arg0].f54], 0, 0x88);
                lbl_805A29B0[lbl_805A28E0[arg0].f54].state = 2;
            }
            lbl_805A28E0[arg0].f0 = 0;
            memset(lbl_805A28E0[arg0].name, 0, 0x20);
            memset(lbl_805A28E0[arg0].name2, 0, 0x20);
            lbl_805A28E0[arg0].f44 = 0;
            lbl_805A28E0[arg0].f48 = 0;
            lbl_805A28E0[arg0].f4C = 0;
            lbl_805A28E0[arg0].f50 = 0;
            lbl_805A28E0[arg0].f54 = -1;
            lbl_805A28E0[arg0].f58 = 0;
            lbl_805A28E0[arg0].f5C = 0;
        }
    } else {
        *arg1 = 0;
        r = -4;
    }
    return r;
}

#pragma push
#pragma opt_dead_assignments off
#pragma optimize_for_size off
s32 TAdPlayerLoadGC__sub_803F3690(s32 chan, const char *name) {
    s32 i;
    s32 *pc;
    s32 idx;
    if (get_load_state__15TAdPlayerLoadGCFv() < 1) {
        return -1;
    }
    if (strlen(name) >= 0x20) {
        return -2;
    }
    if (lbl_805A28E0[chan].f44 != 0) {
        return -4;
    }
    i = 0;
    while (i < 100) {
        if (((S_803F3690 *)&lbl_805A29B0)[i].f0 == 0) {
            break;
        }
        i++;
    }
    if (i == 100) {
        return -204;
    }
    ((S_803F3690 *)&lbl_805A29B0)[i].f0 = 1;
    pc = &((S_803F3690 *)&lbl_805A29B0)[i].state;
    *pc = chan;
    idx = *pc;
    lbl_805A28E0[idx].f44 = 3;
    lbl_805A28E0[idx].f48 = 8;
    lbl_805A28E0[idx].f58 = 200;
    memset(lbl_805A28E0[idx].name, 0, 0x20);
    strcpy(lbl_805A28E0[*pc].name, name);
    lbl_805A28E0[*pc].f54 = i;
    return i;
}
#pragma pop

void TAdPlayerLoadGC__sub_803F389C(s32 chan) {
    CARDUnmount(chan);
}
s32 take_network_info_load_result__15TAdPlayerLoadGCFiPv(s32 arg0, s32 *arg1) {
    s32 r;
    s32 t;

    if (get_load_state__15TAdPlayerLoadGCFv() < 1) {
        return -1;
    }
    if (lbl_805A28E0[arg0].f44 == 1) {
        *arg1 = lbl_805A28E0[arg0].f5C;
        t = lbl_805A28E0[arg0].f58;
        r = t;
        if (t != 200) {
            lbl_805A28E0[arg0].f0 = 0;
            memset(lbl_805A28E0[arg0].name, 0, 0x20);
            memset(lbl_805A28E0[arg0].name2, 0, 0x20);
            lbl_805A28E0[arg0].f44 = 0;
            lbl_805A28E0[arg0].f48 = 0;
            lbl_805A28E0[arg0].f4C = 0;
            lbl_805A28E0[arg0].f50 = 0;
            lbl_805A28E0[arg0].f54 = -1;
            lbl_805A28E0[arg0].f58 = 0;
            lbl_805A28E0[arg0].f5C = 0;
        }
    } else {
        *arg1 = 0;
        r = -4;
    }
    return r;
}

s32 TAdPlayerLoadGC__sub_803F3998(s32 chan) {
    s32 r;
    if (get_load_state__15TAdPlayerLoadGCFv() < 1) {
        return -1;
    }
    if (lbl_805A28E0[chan].f44 != 0) {
        r = -4;
    } else {
        lbl_805A28E0[chan].f44 = 1;
        lbl_805A28E0[chan].f48 = 1;
        r = 0;
        lbl_805A28E0[chan].f58 = 200;
    }
    return r;
}

s32 take_network_info_poll_result__15TAdPlayerLoadGCFiPv(s32 arg0, s32 *arg1) {
    s32 r;
    s32 t;

    if (get_load_state__15TAdPlayerLoadGCFv() < 1) {
        return -1;
    }
    if (lbl_805A28E0[arg0].f44 == 9) {
        *arg1 = lbl_805A28E0[arg0].f5C;
        t = lbl_805A28E0[arg0].f58;
        r = t;
        if (t != 200) {
            lbl_805A28E0[arg0].f0 = 0;
            memset(lbl_805A28E0[arg0].name, 0, 0x20);
            memset(lbl_805A28E0[arg0].name2, 0, 0x20);
            lbl_805A28E0[arg0].f44 = 0;
            lbl_805A28E0[arg0].f48 = 0;
            lbl_805A28E0[arg0].f4C = 0;
            lbl_805A28E0[arg0].f50 = 0;
            lbl_805A28E0[arg0].f54 = -1;
            lbl_805A28E0[arg0].f58 = 0;
            lbl_805A28E0[arg0].f5C = 0;
        }
    } else {
        *arg1 = 0;
        r = -4;
    }
    return r;
}
s32 request_card_open__15TAdPlayerLoadGCFiPv(s32 arg0, const char *arg1) {
    s32 r = 0;
    s32 n = 0;

    if (get_load_state__15TAdPlayerLoadGCFv() < 1) {
        return -1;
    }
    if (strlen(arg1) >= 0x20) {
        return -2;
    }
    if (lbl_805A28E0[arg0].f44 != 0) {
        return -4;
    }
    while (r != 1) {
        if (0x19000 <= n) {
            break;
        }
        r = CARDProbe(arg0);
        n++;
    }
    if (r != 1) {
        return -100;
    }
    lbl_805A28E0[arg0].f44 = 9;
    lbl_805A28E0[arg0].f48 = 1;
    lbl_805A28E0[arg0].f58 = 200;
    memset(lbl_805A28E0[arg0].name, 0, 0x20);
    strcpy(lbl_805A28E0[arg0].name, arg1);
    return 0;
}

}
