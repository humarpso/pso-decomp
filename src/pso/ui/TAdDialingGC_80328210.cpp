#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_803286AC {
    s32 sp8;
    f32 spC;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    u8 pad_1C[0xC];
    s32 sp28;
};

struct RecoveredGlobal_803284F8_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

struct Obj_803285C0 { u8 pad[0x20]; s32 mode; u8 pad2[0xC]; s16 state; };

extern "C" {
s32 get_localized_text_entry(int, int);
M2C_UNK fn_8032D9BC(void *, void *, f32);
M2C_UNK fn_8032DA28(void *);
extern const f32 lbl_805DF6E4;
extern const f32 lbl_805DF6E8;
void TAdDialingGC__sub_803286AC(u8 *arg0);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
extern RecoveredGlobal_803284F8_lbl_8050E208 lbl_8050E208;
s32 TAdDialingGC__sub_803284F8(s32 _w0);
struct Obj_80328730 { u8 pad[0x1C]; s32 state; s32 f20; u8 pad2[0x9C - 0x24]; s32 f9C; };
extern Obj_80328730 *TAdDialingGC__data_805D6C78;
void update_dialing_display__12TAdDialingGCFv(s32);
void TAdDialingGC__sub_80328990(void *);
void init_dialog__12TAdDialingGCFv(void *);
void TAdDialingGC__sub_80328AA0(void *);
void TAdDialingGC__sub_803285C0(Obj_803285C0 *arg0);
}

extern "C" {

void spawn_title_screen__12TAdDialingGCFPvi(void *arg0, s32);
void update__12TAdDialingGCFPv(void *arg0);
void update_dial_state__12TAdDialingGCFPv(void *arg0);
void update_dial_state__12TAdDialingGCFPvi(void *arg0, s32 arg1);
void update_selection__12TAdDialingGCFPv(u8 *arg0);
void update_state__12TAdDialingGCFPv(void *arg0);
M2C_UNK TAdDialingGC__sub_80328874();
M2C_UNK TAdMcSelectGC__sub_80019DA8(void *, M2C_UNK, f32);
M2C_UNK TLobby__sub_803FB184(void *);
M2C_UNK __ct__10TAdTitleGCFv(u32, void *, M2C_UNK);
u32 __nw__7TObjectFUl(M2C_UNK);
s8 func_801A5E54__Fv();
M2C_UNK handle_state__12TAdDialingGCFPv();
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
        if (TAdDialingGC__sub_803284F8((s32)(arg0)) != 0) {
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
        if (TAdDialingGC__sub_803284F8((s32)(arg0)) != 0) {
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
            spawn_title_screen__12TAdDialingGCFPvi((void *)((void *)(arg0)), (s32)((s32)(temp_r4)));
            TAdDialingGC__sub_803286AC((u8 *)(arg0));
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
            TAdDialingGC__sub_803286AC((u8 *)(arg0));
            if (TAdDialingGC__sub_803284F8((s32)(arg0)) != 0) {
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

extern s32 lbl_805D5704;

typedef char RecoveredGlobal_803284F8_lbl_8050E208_size[sizeof(RecoveredGlobal_803284F8_lbl_8050E208) == 0x1B0 ? 1 : -1];
s32 TAdDialingGC__sub_803284F8(s32 _w0) {
    if ((TWindowShortListCtrl__check_controller_button((void *) ((u8 *)&lbl_8050E208.value + 0x20), (int) (0x706)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (0x606)) != 0)) {
        return 1;
    }
    return 0;
}

void update_selection__12TAdDialingGCFPv(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 0x68) = (s16) M2C_FIELD(arg0, s16 *, 0x30);
    if ((s32) lbl_805D5704 != 0) {
        M2C_FIELD(arg0, s16 *, 0x30) = 0;
        return;
    }
    TLobby__sub_803FB184(arg0 + 0x2C);
    if ((s16) M2C_FIELD(arg0, s16 *, 0x68) != (s16) M2C_FIELD(arg0, s16 *, 0x30)) {
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
    }
}

void TAdDialingGC__sub_803285C0(Obj_803285C0 *arg0) {
    if (arg0->mode == 2) {
        switch (arg0->state) {
        case 0:
            TAdDialingGC__sub_80328990(arg0);
            break;
        case 4:
            update_dialing_display__12TAdDialingGCFv(0x14);
            break;
        case 6:
            update_dialing_display__12TAdDialingGCFv(3);
            break;
        case 8:
            TAdDialingGC__sub_80328990(arg0);
            break;
        case 1: case 2: case 3: case 5: case 7:
            break;
        }
    }
    if (arg0->mode == 1) {
        switch (arg0->state) {
        case 0:
            update_dialing_display__12TAdDialingGCFv(0x17);
            break;
        case 2:
            init_dialog__12TAdDialingGCFv(arg0);
            TAdDialingGC__sub_80328AA0(arg0);
            break;
        case 3:
            update_dialing_display__12TAdDialingGCFv(2);
            break;
        case 4:
            update_dialing_display__12TAdDialingGCFv(0x14);
            break;
        case 6:
        case 8:
            update_dialing_display__12TAdDialingGCFv(0x17);
            break;
        case 1: case 5: case 7:
            break;
        }
    }
}

void TAdDialingGC__sub_803286AC(u8 *arg0) {
    Stack_803286AC stack;
    if (!(M2C_FIELD(arg0, s32 *, 0xA4) & 2)) {
        fn_8032DA28((void *) (&stack.sp8));
        stack.sp8 = 1;
        stack.sp28 = get_localized_text_entry((int) (0xF), (int) (0x13));
        stack.spC = lbl_805DF6E4;
        stack.sp14 = lbl_805DF6E4;
        stack.sp10 = lbl_805DF6E8;
        stack.sp18 = lbl_805DF6E8;
        fn_8032D9BC((void *) (arg0), (void *) (&stack.sp8), (f32) (lbl_805DF6E4));
        M2C_FIELD(arg0, s32 *, 0xA4) = (s32) (M2C_FIELD(arg0, s32 *, 0xA4) | 2);
    }
}

void TAdDialingGC__sub_80328730(s32 arg0) {
    if (TAdDialingGC__data_805D6C78 != 0) {
        TAdDialingGC__data_805D6C78->f9C = arg0;
        TAdDialingGC__data_805D6C78->f20 = 2;
        switch (TAdDialingGC__data_805D6C78->state) {
        case 0:
            ((void (*)(void *))spawn_title_screen__12TAdDialingGCFPvi)(TAdDialingGC__data_805D6C78);
            TAdDialingGC__sub_803286AC((u8 *)TAdDialingGC__data_805D6C78);
            break;
        case 1:
        case 2:
            switch (arg0) {
            case 0:
            case 16:
            case 17:
                return;
            }
            ((void (*)(void *))spawn_title_screen__12TAdDialingGCFPvi)(TAdDialingGC__data_805D6C78);
            TAdDialingGC__sub_803286AC((u8 *)TAdDialingGC__data_805D6C78);
            break;
        }
    }
}

void update__12TAdDialingGCFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
    switch (temp_r0) {
    case 0:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x20) != 0) {
            TAdDialingGC__sub_803285C0((Obj_803285C0 *)(arg0));
        }
        break;
    case 1:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x20) == 2) {
            TAdDialingGC__sub_80328874();
            return;
        }
        break;
    case 2:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x20) == 2) {
            handle_state__12TAdDialingGCFPv();
        }
        break;
    }
}

}
