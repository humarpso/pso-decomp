#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_dial_state__12TAdDialingGCFPv(void *arg0);
void update_state__12TAdDialingGCFPv(void *arg0);
void update_dial_state__12TAdDialingGCFPvi(void *arg0, s32 arg1);
void spawn_title_screen__12TAdDialingGCFPvi(void *arg0, s32);
s32 TAdDialingGC__sub_803284F8(void *);
M2C_UNK TAdDialingGC__sub_803286AC(void *);
M2C_UNK TAdMcSelectGC__sub_80019DA8(void *, M2C_UNK, f32);
M2C_UNK __ct__10TAdTitleGCFv(u32, void *, M2C_UNK);
u32 __nw__7TObjectFUl(M2C_UNK);
s8 func_801A5E54__Fv();
M2C_UNK queue_destruction__7TObjectFv();

void update_dial_state__12TAdDialingGCFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x20);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x20) = 1;
        return;
    case 2:
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x9C);
        if (temp_r0_2 < 0x10) {
            if (temp_r0_2 == 0) {
                goto block_11;
            }
            goto block_12;
        }
        if (temp_r0_2 < 0x12) {
block_11:
            M2C_FIELD(arg0, s32 *, 0x20) = 3;
            return;
        }
block_12:
        if (TAdDialingGC__sub_803284F8(arg0) != 0) {
            M2C_FIELD(arg0, s32 *, 0x20) = 3;
        }
        break;
    case 3:
        queue_destruction__7TObjectFv();
        break;
    }
}

void update_state__12TAdDialingGCFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x20);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x20) = 1;
        return;
    case 2:
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x9C);
        if (temp_r0_2 < 0x10) {
            if (temp_r0_2 == 0) {
                goto block_11;
            }
            goto block_12;
        }
        if (temp_r0_2 < 0x12) {
block_11:
            M2C_FIELD(arg0, s32 *, 0x20) = 3;
            return;
        }
block_12:
        if (TAdDialingGC__sub_803284F8(arg0) != 0) {
            M2C_FIELD(arg0, s32 *, 0x20) = 3;
        }
        break;
    case 3:
        queue_destruction__7TObjectFv();
        break;
    }
}

void update_dial_state__12TAdDialingGCFPvi(void *arg0, s32 arg1) {
    s32 temp_r4;
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x20);
    switch (temp_r0) {
    case 0:
        temp_r4 = M2C_FIELD(arg0, s32 *, 0xA0);
        M2C_FIELD(arg0, s32 *, 0xA0) = temp_r4 + 1;
        if ((s32) M2C_FIELD(arg0, s32 *, 0xA0) > 0x5A) {
            spawn_title_screen__12TAdDialingGCFPvi((void *)(arg0), (s32)(temp_r4));
            TAdDialingGC__sub_803286AC(arg0);
            M2C_FIELD(arg0, s32 *, 0xA0) = 0;
            M2C_FIELD(arg0, s32 *, 0x20) = 1;
        }
        return;
    case 2:
        if (func_801A5E54__Fv() != 0) {
            M2C_FIELD(arg0, s32 *, 0x20) = 3;
            return;
        }
        M2C_FIELD(arg0, s32 *, 0xA0) = (s32) (M2C_FIELD(arg0, s32 *, 0xA0) + 1);
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x9C);
        switch (temp_r0_2) {
        case 16:
        case 0:
            if ((s32) M2C_FIELD(arg0, s32 *, 0xA0) > 0x5A) {
                M2C_FIELD(arg0, s32 *, 0x20) = 3;
                return;
            }
            break;
        case 17:
            M2C_FIELD(arg0, s32 *, 0x20) = 3;
            return;
        default:
            TAdDialingGC__sub_803286AC(arg0);
            if (TAdDialingGC__sub_803284F8(arg0) != 0) {
                M2C_FIELD(arg0, s32 *, 0x20) = 3;
                return;
            }
            break;
        }
        break;
    case 3:
        queue_destruction__7TObjectFv();
        break;
    }
}

extern f32 lbl_805DF6E0;

void spawn_title_screen__12TAdDialingGCFPvi(void *arg0, s32) {
    if (!(M2C_FIELD(arg0, s32 *, 0xA4) & 1)) {
        u32 temp_nw;
        if (((s32) M2C_FIELD(arg0, s32 *, 0x1C) == 0) && ((temp_nw = __nw__7TObjectFUl(0x138)) != 0U)) {
            __ct__10TAdTitleGCFv(temp_nw, arg0, 5);
        }
        TAdMcSelectGC__sub_80019DA8(arg0, 0x11, lbl_805DF6E0);
        M2C_FIELD(arg0, s32 *, 0xA4) = (s32) (M2C_FIELD(arg0, s32 *, 0xA4) | 1);
    }
}

}
