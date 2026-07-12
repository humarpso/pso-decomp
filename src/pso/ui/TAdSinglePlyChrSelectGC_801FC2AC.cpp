#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_ready__23TAdSinglePlyChrSelectGCFv(void);
u16 TAdSinglePlyChrSelectGC__sub_801FC2FC(int arg0);
u16 get_card_window_status__23TAdSinglePlyChrSelectGCFi(int arg0);
u16 TAdSinglePlyChrSelectGC__sub_801FC36C(int arg0);
u16 TAdSinglePlyChrSelectGC__sub_801FC3A4(int arg0);
u16 get_card_flag__23TAdSinglePlyChrSelectGCFi(int arg0);
u16 get_card_field__23TAdSinglePlyChrSelectGCFi(int arg0);
u16 get_card_status__23TAdSinglePlyChrSelectGCFi(int arg0);
u16 TAdSinglePlyChrSelectGC__sub_801FC484(int arg0);
u16 TAdSinglePlyChrSelectGC__sub_801FC4BC(int arg0);
s32 TLobby__sub_8030A730();
s32 TLobby__sub_8030A770();
s32 TLobby__sub_8030A7B0();
void *get_card_window__17TWindowSubComCardFUi(u16);

s32 is_ready__23TAdSinglePlyChrSelectGCFv(void) {
    if (TLobby__sub_8030A7B0() == 0) {
        return 1;
    }
    if (TLobby__sub_8030A770() != 0) {
        return 0;
    }
    return (u32) __cntlzw(TLobby__sub_8030A730()) >> 5;
}

u16 TAdSinglePlyChrSelectGC__sub_801FC2FC(int arg0) {
    void *temp_r3;

    temp_r3 = get_card_window__17TWindowSubComCardFUi(arg0);
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, u16 *, 0x235A);
    }
    return 0U;
}

u16 get_card_window_status__23TAdSinglePlyChrSelectGCFi(int arg0) {
    void *temp_r3;

    temp_r3 = get_card_window__17TWindowSubComCardFUi(arg0);
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, u16 *, 0x2358);
    }
    return 0U;
}

u16 TAdSinglePlyChrSelectGC__sub_801FC36C(int arg0) {
    void *temp_r3;

    temp_r3 = get_card_window__17TWindowSubComCardFUi(arg0);
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, u16 *, 0x2356);
    }
    return 0U;
}

u16 TAdSinglePlyChrSelectGC__sub_801FC3A4(int arg0) {
    void *temp_r3;

    temp_r3 = get_card_window__17TWindowSubComCardFUi(arg0);
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, u16 *, 0x2354);
    }
    return 0U;
}

u16 get_card_flag__23TAdSinglePlyChrSelectGCFi(int arg0) {
    void *temp_r3;

    temp_r3 = get_card_window__17TWindowSubComCardFUi(arg0);
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, u16 *, 0x21B0);
    }
    return 0U;
}

u16 get_card_field__23TAdSinglePlyChrSelectGCFi(int arg0) {
    void *temp_r3;

    temp_r3 = get_card_window__17TWindowSubComCardFUi(arg0);
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, u16 *, 0x21AE);
    }
    return 0U;
}

u16 get_card_status__23TAdSinglePlyChrSelectGCFi(int arg0) {
    void *temp_r3;

    temp_r3 = get_card_window__17TWindowSubComCardFUi(arg0);
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, u16 *, 0x21AC);
    }
    return 0U;
}

u16 TAdSinglePlyChrSelectGC__sub_801FC484(int arg0) {
    void *temp_r3;

    temp_r3 = get_card_window__17TWindowSubComCardFUi(arg0);
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, u16 *, 0x21AA);
    }
    return 0U;
}

u16 TAdSinglePlyChrSelectGC__sub_801FC4BC(int arg0) {
    void *temp_r3;

    temp_r3 = get_card_window__17TWindowSubComCardFUi(arg0);
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, u16 *, 0x21A8);
    }
    return 0U;
}

}
