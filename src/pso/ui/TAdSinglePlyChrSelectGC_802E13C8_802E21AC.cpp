#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 is_visible__17TWindowSubComCardFPv(u32);
M2C_UNK poll_card_load__15TAdPlayerLoadGCFi(int);
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FBB1C();
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FBB7C();
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FBBDC();
s32 TWindowSubComCard__sub_80265BF8(int);
M2C_UNK TAdSinglePlyChrSelectGC__sub_802E1DF8(void *, int);
M2C_UNK TAdSinglePlyChrSelectGC__sub_802E1F14(void *);
void TAdSinglePlyChrSelectGC__sub_802E22A4(u8 *arg0);
}

extern "C" {

void build_selection_summary__23TAdSinglePlyChrSelectGCFPv(u8 *arg0);
M2C_UNK *get_localized_text_entry(M2C_UNK, M2C_UNK);
M2C_UNK strcat(void *, void *);
M2C_UNK close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(void *, void *, int, int, int);
M2C_UNK create_backgrounds__23TAdSinglePlyChrSelectGCFPv();

extern M2C_UNK lbl_805DE8F8;

void build_selection_summary__23TAdSinglePlyChrSelectGCFPv(u8 *arg0) {
    create_backgrounds__23TAdSinglePlyChrSelectGCFPv();
    M2C_FIELD(arg0, s8 *, 0x68) = 0;
    if (M2C_FIELD(arg0, s32 *, 0x44) & 0x80) {
        strcat((void *) (arg0 + 0x68), (void *) (get_localized_text_entry(0x1C, 0x1D)));
        strcat((void *) (arg0 + 0x68), (void *) (&lbl_805DE8F8));
    }
    if (M2C_FIELD(arg0, s32 *, 0x44) & 0x100) {
        strcat((void *) (arg0 + 0x68), (void *) (get_localized_text_entry(0x1C, 0x1E)));
        strcat((void *) (arg0 + 0x68), (void *) (&lbl_805DE8F8));
    }
    if (M2C_FIELD(arg0, s32 *, 0x44) & 0x200) {
        strcat((void *) (arg0 + 0x68), (void *) (get_localized_text_entry(0x1C, 0x1F)));
        strcat((void *) (arg0 + 0x68), (void *) (&lbl_805DE8F8));
    }
    close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv((void *) (arg0), (void *) (arg0 + 0x68), (int) (1), (int) (get_localized_text_entry(0x1C, 0x2A)), (int) (get_localized_text_entry(0x1C, 0x2B)));
}
void TAdSinglePlyChrSelectGC__sub_802E22A4(u8 *arg0) {
    s32 temp_r3;
    u32 temp_r3_2;
    temp_r3_2 = M2C_FIELD(arg0, u32 *, 0x54);
    if (temp_r3_2 == 0U || is_visible__17TWindowSubComCardFPv(temp_r3_2) == 0) {
        return;
    }
    temp_r3 = TWindowSubComCard__sub_80265BF8((int) (M2C_FIELD(arg0, u32 *, 0x54)));
        switch (temp_r3) {
        case 0:
            if (M2C_FIELD(arg0, s32 *, 0x44) & 0x80) {
                TAdSinglePlyChrSelectGC__sub_801FBBDC();
            }
            if (M2C_FIELD(arg0, s32 *, 0x44) & 0x100) {
                TAdSinglePlyChrSelectGC__sub_801FBB1C();
            }
            if (M2C_FIELD(arg0, s32 *, 0x44) & 0x200) {
                TAdSinglePlyChrSelectGC__sub_801FBB7C();
            }
            poll_card_load__15TAdPlayerLoadGCFi((int) (0));
            TAdSinglePlyChrSelectGC__sub_802E1F14((void *) (arg0));
            TAdSinglePlyChrSelectGC__sub_802E1DF8((void *) (arg0), (int) (0));
            break;
        case 1:
            poll_card_load__15TAdPlayerLoadGCFi((int) (0));
            TAdSinglePlyChrSelectGC__sub_802E1F14((void *) (arg0));
            TAdSinglePlyChrSelectGC__sub_802E1DF8((void *) (arg0), (int) (0));
            break;
        }
}

}
