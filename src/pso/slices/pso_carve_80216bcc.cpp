#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base_80216BCC { char pad[0x18]; };
struct VObj_80216BCC : Base_80216BCC {
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

struct Entry_80216BCC {
    u8 pad00[0x18];
    s32 field18;
};

extern "C" {

s32 TWindowSubComCard__sub_8007341C(void *);
s32 TWindowSubComCard__sub_80073DB8(void *);
M2C_UNK TQuestListVM__sub_80073DC4(void *, M2C_UNK);
M2C_UNK TLobby__sub_801F387C(s32);
M2C_UNK close_sub_windows__7TWindowFPv(void *);
s32 TWindowSubComCard__sub_80265BF8(u32);
s32 select_cursor_entry__6TLobbyFPv(s32);

void handle_confirm_dialog(void *arg0) {
    s32 temp_r0;
    s32 temp_r3_2;
    VObj_80216BCC *temp_r3;
    VObj_80216BCC *temp_r3_3;
    VObj_80216BCC *temp_r3_4;

    temp_r3 = M2C_FIELD(arg0, VObj_80216BCC **, 0x34);
    if (temp_r3->m8() != 0) {
        if ((M2C_FIELD(arg0, void **, 0x38) != NULL) && (TWindowSubComCard__sub_8007341C(M2C_FIELD(arg0, void **, 0x38)) != 0)) {
            temp_r3_2 = TWindowSubComCard__sub_80265BF8(M2C_FIELD(arg0, u32 *, 0x38));
            if (temp_r3_2 == 0) {
                temp_r0 = select_cursor_entry__6TLobbyFPv(M2C_FIELD(arg0, s32 *, 0x3C));
                TLobby__sub_801F387C(M2C_FIELD(arg0, Entry_80216BCC **, 0x54)[temp_r0].field18);
                TQuestListVM__sub_80073DC4(arg0, 3);
                return;
            }
            if (temp_r3_2 == 1) {
                close_sub_windows__7TWindowFPv(arg0);
                temp_r3_3 = M2C_FIELD(arg0, VObj_80216BCC **, 0x34);
                if (temp_r3_3 != NULL) {
                    temp_r3_3->m7(0x19, 1);
                }
                TQuestListVM__sub_80073DC4(arg0, 0);
                return;
            }
            goto block_9;
        }
block_9:
        if ((M2C_FIELD(arg0, void **, 0x38) != NULL) && (TWindowSubComCard__sub_80073DB8(M2C_FIELD(arg0, void **, 0x38)) != 0)) {
            close_sub_windows__7TWindowFPv(arg0);
            temp_r3_4 = M2C_FIELD(arg0, VObj_80216BCC **, 0x34);
            if (temp_r3_4 != NULL) {
                temp_r3_4->m7(0x19, 1);
            }
            TQuestListVM__sub_80073DC4(arg0, 0);
        }
    }
}

}
