#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma scheduling off

struct AdLoadState_805A82C0 {
    s32 x0;
    s32 active;
    s32 x8;
    s32 xc;
    s32 x10;
    s32 result;
    s32 arg;
    s32 a;
    s32 b;
};

extern "C" {
M2C_UNK TAdSinglePlyChrSelectGC__sub_803F47BC();
void TLobby__sub_803F4B2C(s32 arg0);
s32 TLobby__sub_803F4AD8(s32 arg0);
s32 TLobby__sub_803F4AB4(void);
s32 TLobby__sub_803F4B10(s32 arg0);
s32 TLobby__sub_803F4AEC(void);
s32 TLobby__sub_803F4B68(s32 mode);
s32 TLobby__sub_803F4AB4(void);
extern AdLoadState_805A82C0 lbl_805A82C0;
s32 TAdPlayerLoadGC__sub_803F4554(s32 arg0);
s32 TLobby__sub_803F4AB4(void);
extern AdLoadState_805A82C0 lbl_805A82C0;
s32 TAdPlayerLoadGC__sub_803F45E0(s32 *arg0, s32 *arg1);
s32 get_or_set_channel_flag__15TAdPlayerLoadGCFii(s32 arg0, s32 arg1);
s32 TAdPlayerLoadGC__sub_803F3A14(s32 arg0, s32 *arg1);
s32 TAdPlayerLoadGC__sub_803F3AF0(s32 arg0, const char *arg1);
extern char lbl_804FCE68[];
extern AdLoadState_805A82C0 lbl_805A82C0;
void TAdPlayerLoadGC__sub_803F467C(void);
}

extern "C" {

s32 TAdPlayerLoadGC__sub_803F4B24(void);
s32 TAdPlayerLoadGC__sub_803F4B80(void);
s32 TLobby__sub_803F4AD8(s32 arg0);
s32 TLobby__sub_803F4B10(s32 arg0);

extern s32 lbl_805D79A4;

#pragma push
#pragma scheduling off
s32 TAdPlayerLoadGC__sub_803F4554(s32 arg0) {
    AdLoadState_805A82C0 *s;
    switch (TLobby__sub_803F4AB4()) {
    case 0:
        return -1;
    case 1:
    case 2:
    case 3:
        break;
    default:
        return -5;
    }
    s = &lbl_805A82C0;
    if (s->active != 0) {
        return -4;
    }
    s->active = 1;
    s->x8 = 1;
    s->arg = arg0;
    s->result = 200;
    return 0;
}
#pragma pop

#pragma push
#pragma scheduling off
s32 TAdPlayerLoadGC__sub_803F45E0(s32 *arg0, s32 *arg1) {
    AdLoadState_805A82C0 *s;
    s32 r;
    s32 res;
    if (TLobby__sub_803F4AB4() == 0) {
        return -1;
    }
    s = &lbl_805A82C0;
    if (s->active == 1) {
        *arg0 = s->a;
        *arg1 = s->b;
        res = s->result;
        r = res;
        if (res != 200) {
            s->active = 0;
            s->x8 = 0;
        }
    } else {
        *arg0 = 0;
        *arg1 = 0;
        r = -4;
    }
    return r;
}
#pragma pop

#pragma push
#pragma scheduling off
void TAdPlayerLoadGC__sub_803F467C(void) {
    AdLoadState_805A82C0 *s;
    AdLoadState_805A82C0 *t;
    s = &lbl_805A82C0;
    switch (s->x8) {
    case 1:
        get_or_set_channel_flag__15TAdPlayerLoadGCFii(s->arg, 1);
        lbl_805A82C0.a = TAdPlayerLoadGC__sub_803F3AF0(s->arg, lbl_804FCE68);
        if (lbl_805A82C0.a < 0) {
            get_or_set_channel_flag__15TAdPlayerLoadGCFii(s->arg, 0);
            lbl_805A82C0.result = -209;
            s->x8 = 27;
            break;
        }
        s->x8 = 2;
    case 2:
        t = &lbl_805A82C0;
        lbl_805A82C0.a = TAdPlayerLoadGC__sub_803F3A14(t->arg, &t->b);
        switch (lbl_805A82C0.a) {
        case 0:
        case -102:
            get_or_set_channel_flag__15TAdPlayerLoadGCFii(t->arg, 0);
            lbl_805A82C0.result = 0;
            s->x8 = 25;
            break;
        case 200:
            break;
        default:
            get_or_set_channel_flag__15TAdPlayerLoadGCFii(t->arg, 0);
            lbl_805A82C0.result = -209;
            s->x8 = 27;
            break;
        }
        break;
    }
}
#pragma pop

s32 TLobby__sub_803F4AB4(void) { return TLobby__sub_803F4AD8(4); }

s32 TLobby__sub_803F4AD8(s32 arg0) {
    if (arg0 < 4) {
        lbl_805D79A4 = arg0;
    }
    return lbl_805D79A4;
}

extern s32 lbl_805D79A8;

s32 TLobby__sub_803F4AEC(void) { return TLobby__sub_803F4B10(2); }

s32 TLobby__sub_803F4B10(s32 arg0) {
    if (arg0 < 2) {
        lbl_805D79A8 = arg0;
    }
    return lbl_805D79A8;
}

extern s32 lbl_805D4708;

s32 TAdPlayerLoadGC__sub_803F4B24(void) {
    return lbl_805D4708;
}

void TLobby__sub_803F4B2C(s32 arg0) {
    if (TLobby__sub_803F4AB4() >= 1) {
        lbl_805D4708 = arg0;
        TAdSinglePlyChrSelectGC__sub_803F47BC();
    }
}

#pragma push
#pragma scheduling off
s32 TLobby__sub_803F4B68(s32 mode) {
    s32 n = 0x19D4;
    if (mode == 1) {
        n <<= 1;
    }
    return n;
}
#pragma pop

s32 TAdPlayerLoadGC__sub_803F4B80(void) {
    return 0x8000;
}

}
