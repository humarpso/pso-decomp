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
    s32 f60;
    u8 f64;
    u8 pad65[3];
} Slot_803F3478;
typedef Slot_803F3478 Slot_803F1CC4, Slot_803F1E90, Slot_803F2058;

extern "C" {
M2C_UNK OSFreeToHeap(int, void *);
s32 TLobby__sub_803F4AB4();
M2C_UNK TLobby__sub_803F4AD8(int);
M2C_UNK TLobby__sub_803F4B10(int);
M2C_UNK TLobby__sub_803F4B2C(int);
extern s32 __OSCurrHeap;
extern s32 lbl_805D79B0;
extern u32 lobby_net_config_buffer;
extern s32 lbl_805D7940;
s32 TAdPlayerLoadGC__sub_803F31BC(void);
s32 CARDUnmount(s32 chan);
void unmount_card__15TAdPlayerLoadGCFi(s32 chan);
M2C_UNK memset(void *, int, int);
void reset_slot_entry__15TAdPlayerLoadGCFi(s32 arg0);
s32 CARDClose(void *);
M2C_UNK memset(void *, int, int);
s32 close_card_slot__15TAdPlayerLoadGCFi(s32 arg0);
s32 CARDProbe(s32 chan);
char *strcpy(char *, const char *);
u32 strlen(const char *);
M2C_UNK memset(void *, int, int);
s32 get_load_state__15TAdPlayerLoadGCFv(void);
s32 finish_load_slot_state4__15TAdPlayerLoadGCFiPv(s32 arg0, s32 *arg1);
}

extern "C" {

s32 get_load_state__15TAdPlayerLoadGCFv(void);
s32 get_or_set_channel_flag__15TAdPlayerLoadGCFii(s32 arg0, s32 arg1);

void *CARDGetDiskID(s32);
s32 CARDSetDiskID(s32, void *);
s32 CARDGetResultCode(s32);
s32 CARDSetAttributesAsync(s32, s32, u8, void *);
s32 CARDDeleteAsync(s32, const char *, void *);
s32 CARDRenameAsync(s32, const char *, const char *, void *);
void *memcpy(void *, const void *, u32);
extern void *lbl_805D7950;
extern u8 lbl_805E10EC[4];
extern u8 lbl_805E10F4[2];
u8 lbl_805A28C0[0x20];
Slot_803F3478 lbl_805A28E0[2];
S_803F3328 lbl_805A29B0[100];
u8 lbl_805A5ED0[0x30];

extern M2C_UNK lbl_805D4700;

s32 get_or_set_channel_flag__15TAdPlayerLoadGCFii(s32 arg0, s32 arg1) {
    if (((arg0 != 0) && (arg0 != 1)) || (arg1 < 0) || (arg1 > 2)) {
        return 0;
    }
    if (arg1 != 2) {
        (&lbl_805D4700)[arg0] = arg1;
    }
    return (&lbl_805D4700)[arg0];
}

extern s32 lbl_805D7940;

s32 get_load_state__15TAdPlayerLoadGCFv(void) {
    return lbl_805D7940;
}
#pragma push
#pragma opt_propagation off
void step_set_attributes__15TAdPlayerLoadGCFi(s32 arg0) {
    s32 *st;
    st = (s32 *)(lbl_805A28C0 + arg0 * 0x68);
    st += 0x1A;

    switch (*st) {

    case 0x11:
        if (get_or_set_channel_flag__15TAdPlayerLoadGCFii(arg0, 2) == 1) {
            lbl_805D7950 = CARDGetDiskID(arg0);
            memcpy(lbl_805A28C0, lbl_805D7950, 0x20);
            memcpy(lbl_805A28C0, lbl_805E10EC, 4);
            memcpy(lbl_805A28C0 + 4, lbl_805E10F4, 2);
            CARDSetDiskID(arg0, lbl_805A28C0);
        }
        lbl_805A28E0[arg0].f5C = CARDSetAttributesAsync(arg0, lbl_805A28E0[arg0].f60, lbl_805A28E0[arg0].f64, 0);
        if (lbl_805A28E0[arg0].f5C < 0) {
            if (get_or_set_channel_flag__15TAdPlayerLoadGCFii(arg0, 2) == 1 && lbl_805D7950 != NULL) {
                CARDSetDiskID(arg0, lbl_805D7950);
            }
            lbl_805A28E0[arg0].f58 = -0xD4;
            *st = 0x18;
            break;
        }
        *st = 0x12;
    case 0x12:
        lbl_805A28E0[arg0].f5C = CARDGetResultCode(arg0);
        if (lbl_805A28E0[arg0].f5C == 0) {
            if (get_or_set_channel_flag__15TAdPlayerLoadGCFii(arg0, 2) == 1 && lbl_805D7950 != NULL) {
                CARDSetDiskID(arg0, lbl_805D7950);
            }
            lbl_805A28E0[arg0].f58 = 0;
            *st = 0x16;
        } else if (lbl_805A28E0[arg0].f5C != -1) {
            if (get_or_set_channel_flag__15TAdPlayerLoadGCFii(arg0, 2) == 1 && lbl_805D7950 != NULL) {
                CARDSetDiskID(arg0, lbl_805D7950);
            }
            lbl_805A28E0[arg0].f58 = -0xD4;
            *st = 0x18;
        }
        break;
    case 0x13: case 0x14: case 0x15: case 0x16: case 0x17: case 0x18:
        return;
    }
}
#pragma pop
#pragma push
#pragma opt_propagation off
void update_card_delete__15TAdPlayerLoadGCFi(s32 arg0) {
    s32 *st;
    Slot_803F1E90 *s;
    st = (s32 *)(lbl_805A28C0 + arg0 * 0x68);
    st += 0x1A;

    switch (*st) {
    case 0xF:
        if (get_or_set_channel_flag__15TAdPlayerLoadGCFii(arg0, 2) == 1) {
            lbl_805D7950 = CARDGetDiskID(arg0);
            memcpy(lbl_805A28C0, lbl_805D7950, 0x20);
            memcpy(lbl_805A28C0, lbl_805E10EC, 4);
            memcpy(lbl_805A28C0 + 4, lbl_805E10F4, 2);
            CARDSetDiskID(arg0, lbl_805A28C0);
        }
        lbl_805A28E0[arg0].f5C = CARDDeleteAsync(arg0, lbl_805A28E0[arg0].name, 0);
        if (lbl_805A28E0[arg0].f5C < 0) {
            if (get_or_set_channel_flag__15TAdPlayerLoadGCFii(arg0, 2) == 1 && lbl_805D7950 != NULL) {
                CARDSetDiskID(arg0, lbl_805D7950);
            }
            lbl_805A28E0[arg0].f58 = -0xD3;
            *st = 0x18;
            break;
        }
        *st = 0x10;
    case 0x10:
        lbl_805A28E0[arg0].f5C = CARDGetResultCode(arg0);
        if (lbl_805A28E0[arg0].f5C == 0) {
            if (get_or_set_channel_flag__15TAdPlayerLoadGCFii(arg0, 2) == 1 && lbl_805D7950 != NULL) {
                CARDSetDiskID(arg0, lbl_805D7950);
            }
            lbl_805A28E0[arg0].f58 = 0;
            *st = 0x16;
        } else if (lbl_805A28E0[arg0].f5C != -1) {
            if (get_or_set_channel_flag__15TAdPlayerLoadGCFii(arg0, 2) == 1 && lbl_805D7950 != NULL) {
                CARDSetDiskID(arg0, lbl_805D7950);
            }
            lbl_805A28E0[arg0].f58 = -0xD3;
            *st = 0x18;
        }
        break;
    case 0x11: case 0x12: case 0x13: case 0x14: case 0x15: case 0x16: case 0x17: case 0x18:
        return;
    }
}
#pragma pop
#pragma push
#pragma opt_propagation off
void update_card_rename__15TAdPlayerLoadGCFi(s32 arg0) {
    s32 *st;
    s32 off;
    off = arg0 * 0x68;
    st = (s32 *)(lbl_805A28C0 + off);
    st += 0x1A;

    switch (*st) {
    case 0xd:
        if (get_or_set_channel_flag__15TAdPlayerLoadGCFii(arg0, 2) == 1) {
            lbl_805D7950 = CARDGetDiskID(arg0);
            memcpy(lbl_805A28C0, lbl_805D7950, 0x20);
            memcpy(lbl_805A28C0, lbl_805E10EC, 4);
            memcpy(lbl_805A28C0 + 4, lbl_805E10F4, 2);
            CARDSetDiskID(arg0, lbl_805A28C0);
        }
        lbl_805A28E0[arg0].f5C = CARDRenameAsync(arg0, lbl_805A28E0[arg0].name, lbl_805A28E0[arg0].name2, 0);
        if (lbl_805A28E0[arg0].f5C < 0) {
            if (get_or_set_channel_flag__15TAdPlayerLoadGCFii(arg0, 2) == 1 && lbl_805D7950 != NULL) {
                CARDSetDiskID(arg0, lbl_805D7950);
            }
            lbl_805A28E0[arg0].f58 = -210;
            *st = 0x18;
            break;
        }
        *st = 0xe;
    case 0xe:
        lbl_805A28E0[arg0].f5C = CARDGetResultCode(arg0);
        if (lbl_805A28E0[arg0].f5C == 0) {
            if (get_or_set_channel_flag__15TAdPlayerLoadGCFii(arg0, 2) == 1 && lbl_805D7950 != NULL) {
                CARDSetDiskID(arg0, lbl_805D7950);
            }
            lbl_805A28E0[arg0].f58 = 0;
            *st = 0x16;
        } else if (lbl_805A28E0[arg0].f5C != -1) {
            if (get_or_set_channel_flag__15TAdPlayerLoadGCFii(arg0, 2) == 1 && lbl_805D7950 != NULL) {
                CARDSetDiskID(arg0, lbl_805D7950);
            }
            lbl_805A28E0[arg0].f58 = -210;
            *st = 0x18;
        }
        break;
    case 0xf: case 0x10: case 0x11: case 0x12: case 0x13: case 0x14: case 0x15: case 0x16: case 0x17: case 0x18:
        return;
    }
}
#pragma pop
s32 TAdPlayerLoadGC__sub_803F31BC(void) {
    if (lbl_805D7940 == 0) {
        return -1;
    }
    return 0;
}

void reset_slot_entry__15TAdPlayerLoadGCFi(s32 arg0) {
    u8 *temp_r30;
    temp_r30 = (u8 *)lbl_805A28E0 + (arg0 * 0x68);
    M2C_FIELD(temp_r30, s32 *, 0) = 0;
    memset((void *) (temp_r30 + 4), (int) (0), (int) (0x20));
    memset((void *) (temp_r30 + 0x24), (int) (0), (int) (0x20));
    M2C_FIELD(temp_r30, s32 *, 0x44) = 0;
    M2C_FIELD(temp_r30, s32 *, 0x48) = 0;
    M2C_FIELD(temp_r30, s32 *, 0x4C) = 0;
    M2C_FIELD(temp_r30, s32 *, 0x50) = 0;
    M2C_FIELD(temp_r30, s32 *, 0x54) = -1;
    M2C_FIELD(temp_r30, s32 *, 0x58) = 0;
    M2C_FIELD(temp_r30, s32 *, 0x5C) = 0;
}

s32 close_card_slot__15TAdPlayerLoadGCFi(s32 arg0) {
    S_803F3328 *s;
    s32 ret;
    if (arg0 >= 0 && arg0 < 0x64) {
        s = &lbl_805A29B0[arg0];
        ret = CARDClose(s->card);
        memset((void *)(s), (int)(0), (int)(0x88));
        s->state = 2;
    }
    return ret;
}

}
