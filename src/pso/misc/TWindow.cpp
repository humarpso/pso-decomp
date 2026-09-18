#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80216BCC_80216B44 { char pad[0x18]; };
struct VObj_80216BCC_80216B44 : Base_80216BCC_80216B44 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual M2C_UNK m7(M2C_UNK, M2C_UNK);
    virtual s32 m8();
};
struct Entry_80216BCC_80216B44 {
    u8 pad00[0x18];
    s32 field18;
};

extern "C" {

void close_sub_windows__7TWindowFPv(void *arg0);
void handle_confirm_dialog(void *arg0);
M2C_UNK prepare_offline_quest_filenames(s32);
s32 TWindowSubComCard__sub_80265BF8(u32);
M2C_UNK TWindow__close(void *);
s32 get_status_flag__17TWindowSubComCardFPv(void *);
s32 is_visible__17TWindowSubComCardFPv(void *);
s32 select_cursor_entry__6TLobbyFPv(s32);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);

void close_sub_windows__7TWindowFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x38) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x38));
        M2C_FIELD(arg0, u32 *, 0x38) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x44) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x44));
        M2C_FIELD(arg0, u32 *, 0x44) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x40));
        M2C_FIELD(arg0, u32 *, 0x40) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x3C));
        M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
    }
}

void handle_confirm_dialog(void *arg0) {
    s32 temp_r0;
    s32 temp_r3_2;
    VObj_80216BCC_80216B44 *temp_r3;
    VObj_80216BCC_80216B44 *temp_r3_3;
    VObj_80216BCC_80216B44 *temp_r3_4;

    temp_r3 = M2C_FIELD(arg0, VObj_80216BCC_80216B44 **, 0x34);
    if (temp_r3->m8() != 0) {
        if ((M2C_FIELD(arg0, void **, 0x38) != NULL) && (is_visible__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x38)) != 0)) {
            temp_r3_2 = TWindowSubComCard__sub_80265BF8(M2C_FIELD(arg0, u32 *, 0x38));
            if (temp_r3_2 == 0) {
                temp_r0 = select_cursor_entry__6TLobbyFPv(M2C_FIELD(arg0, s32 *, 0x3C));
                prepare_offline_quest_filenames(M2C_FIELD(arg0, Entry_80216BCC_80216B44 **, 0x54)[temp_r0].field18);
                set_field_20__12TQuestListVMFPvi(arg0, 3);
                return;
            }
            if (temp_r3_2 == 1) {
                close_sub_windows__7TWindowFPv((void *)(arg0));
                temp_r3_3 = M2C_FIELD(arg0, VObj_80216BCC_80216B44 **, 0x34);
                if (temp_r3_3 != NULL) {
                    temp_r3_3->m7(0x19, 1);
                }
                set_field_20__12TQuestListVMFPvi(arg0, 0);
                return;
            }
            goto block_9;
        }
block_9:
        if ((M2C_FIELD(arg0, void **, 0x38) != NULL) && (get_status_flag__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x38)) != 0)) {
            close_sub_windows__7TWindowFPv((void *)(arg0));
            temp_r3_4 = M2C_FIELD(arg0, VObj_80216BCC_80216B44 **, 0x34);
            if (temp_r3_4 != NULL) {
                temp_r3_4->m7(0x19, 1);
            }
            set_field_20__12TQuestListVMFPvi(arg0, 0);
        }
    }
}

}
