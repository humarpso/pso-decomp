#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80288C78 { char pad[0x18]; };
struct VObj_80288C78 : Base_80288C78 {
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
struct Entry_80288C78 {
    u8 pad00[0xC];
    s32 fieldC;
};

extern "C" {

void TQuestListChallenge__sub_80288C78(void *arg0);
M2C_UNK TQuestListChallenge__sub_80288B5C(void *);
s32 TWindowSubComCard__sub_8007341C(void *);
s32 TWindowSubComCard__sub_80073DB8(void *);
s32 TWindowSubComCard__sub_80265BF8(u32);
M2C_UNK fn_80073DC4(void *, M2C_UNK);
M2C_UNK fn_801F387C(s32, s32);
s32 fn_80266E0C(s32);

void TQuestListChallenge__sub_80288C78(void *arg0) {
    s32 temp_r0;
    s32 temp_r3_2;
    Entry_80288C78 *temp_r4;
    VObj_80288C78 *temp_r3;
    VObj_80288C78 *temp_r3_3;
    VObj_80288C78 *temp_r3_4;

    temp_r3 = M2C_FIELD(arg0, VObj_80288C78 **, 0x30);
    if (temp_r3->m8() != 0) {
        if ((M2C_FIELD(arg0, void **, 0x34) != NULL) && (TWindowSubComCard__sub_8007341C(M2C_FIELD(arg0, void **, 0x34)) == 1)) {
            temp_r3_2 = TWindowSubComCard__sub_80265BF8(M2C_FIELD(arg0, u32 *, 0x34));
            if (temp_r3_2 == 0) {
                temp_r0 = fn_80266E0C(M2C_FIELD(arg0, s32 *, 0x38));
                temp_r4 = M2C_FIELD(arg0, Entry_80288C78 **, 0x58);
                fn_801F387C(temp_r4[temp_r0].fieldC, (s32) temp_r4);
                fn_80073DC4(arg0, 3);
                return;
            }
            if (temp_r3_2 == 1) {
                TQuestListChallenge__sub_80288B5C(arg0);
                temp_r3_3 = M2C_FIELD(arg0, VObj_80288C78 **, 0x30);
                if (temp_r3_3 != NULL) {
                    temp_r3_3->m7(0x19, 0x80);
                }
                fn_80073DC4(arg0, 0);
                return;
            }
            goto block_9;
        }
block_9:
        if ((M2C_FIELD(arg0, void **, 0x34) != NULL) && (TWindowSubComCard__sub_80073DB8(M2C_FIELD(arg0, void **, 0x34)) == 1)) {
            TQuestListChallenge__sub_80288B5C(arg0);
            temp_r3_4 = M2C_FIELD(arg0, VObj_80288C78 **, 0x30);
            if (temp_r3_4 != NULL) {
                temp_r3_4->m7(0x19, 0x80);
            }
            fn_80073DC4(arg0, 0);
        }
    }
}

}
