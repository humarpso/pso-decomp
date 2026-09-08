#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80288C78_80288B5C { char pad[0x18]; };
struct VObj_80288C78_80288B5C : Base_80288C78_80288B5C {
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
struct Entry_80288C78_80288B5C {
    u8 pad00[0xC];
    s32 fieldC;
};

extern "C" {
s32 TLobby__sub_80222C28(int, int, int);
s32 select_cursor_entry__6TLobbyFPv(s32);
extern s32 TQuestListChallenge__data_805D64B0;
s32 TQuestListChallenge__sub_80288B04(void);
}

extern "C" {

void * TObjNpcKenkyu__create(void *arg0);
void TQuestListChallenge__sub_80288BE4(void);
void *__dt__19TQuestListChallengeFv(void *arg0, s16 arg1);
void close_windows__19TQuestListChallengeFPv(void *arg0);
void destroy__19TQuestListChallengeFPv(void *arg0);
void handle_confirm_select__19TQuestListChallengeFPv(void *arg0);
void invoke_callback_and_destroy__19TQuestListChallengeFPv(void *arg0);
void reset_globals2__19TQuestListChallengeFv(void);
void reset_globals__19TQuestListChallengeFv(void);
M2C_UNK TLobby__sub_801F387C(s32, s32);
void *TObjControl__ct(void *, void *);
void *TObjNpcKenkyu__ct(void *, void *, void *);
s32 TWindowSubComCard__sub_80265BF8(u32);
s32 TWindow__close(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__15TShopWindowBaseFv(void *, M2C_UNK);
void *__nw__7TObjectFUl(int);
s32 get_status_flag__17TWindowSubComCardFPv(void *);
s32 is_visible__17TWindowSubComCardFPv(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 select_cursor_entry__6TLobbyFPv(s32);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);

#pragma push
#pragma opt_common_subs off
s32 TQuestListChallenge__sub_80288B04(void) {
    u32 temp_r3;
    if ((void *) (*(u8 * *)&TQuestListChallenge__data_805D64B0) != NULL) {
        temp_r3 = M2C_FIELD((*(u8 * *)&TQuestListChallenge__data_805D64B0), u32 *, 0x38);
        if (temp_r3 != 0U) {
            return TLobby__sub_80222C28((int) (M2C_FIELD((*(u8 * *)&TQuestListChallenge__data_805D64B0), s32 *, 0x50)), (int) (M2C_FIELD((M2C_FIELD((*(u8 * *)&TQuestListChallenge__data_805D64B0), s32 *, 0x58) + (select_cursor_entry__6TLobbyFPv((s32)((int) (temp_r3))) * 0x10)), s32 *, 0)), (int) ((*(u8 * *)&TQuestListChallenge__data_805D64B0)));
        }
    }
    return 0;
}
#pragma pop

void close_windows__19TQuestListChallengeFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x34));
        M2C_FIELD(arg0, u32 *, 0x34) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x38) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x38));
        M2C_FIELD(arg0, u32 *, 0x38) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x3C));
        M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x40));
        M2C_FIELD(arg0, u32 *, 0x40) = 0U;
    }
}
void TQuestListChallenge__sub_80288BE4(void) {  }

void invoke_callback_and_destroy__19TQuestListChallengeFPv(void *arg0) {
    M2C_UNK (*temp_r12)(s32);

    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x2C);
    if (temp_r12 != NULL) {
        temp_r12(M2C_FIELD(arg0, s32 *, 0x30));
    }
    queue_destruction__7TObjectFv(arg0);
}

void destroy__19TQuestListChallengeFPv(void *arg0) {
    M2C_UNK (*temp_r12)(s32);

    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x28);
    if (temp_r12 != NULL) {
        temp_r12(M2C_FIELD(arg0, s32 *, 0x30));
    }
    queue_destruction__7TObjectFv(arg0);
}

void handle_confirm_select__19TQuestListChallengeFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r3_2;
    Entry_80288C78_80288B5C *temp_r4;
    VObj_80288C78_80288B5C *temp_r3;
    VObj_80288C78_80288B5C *temp_r3_3;
    VObj_80288C78_80288B5C *temp_r3_4;

    temp_r3 = M2C_FIELD(arg0, VObj_80288C78_80288B5C **, 0x30);
    if (temp_r3->m8() != 0) {
        if ((M2C_FIELD(arg0, void **, 0x34) != NULL) && (is_visible__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x34)) == 1)) {
            temp_r3_2 = TWindowSubComCard__sub_80265BF8(M2C_FIELD(arg0, u32 *, 0x34));
            if (temp_r3_2 == 0) {
                temp_r0 = select_cursor_entry__6TLobbyFPv(M2C_FIELD(arg0, s32 *, 0x38));
                temp_r4 = M2C_FIELD(arg0, Entry_80288C78_80288B5C **, 0x58);
                TLobby__sub_801F387C(temp_r4[temp_r0].fieldC, (s32) temp_r4);
                set_field_20__12TQuestListVMFPvi(arg0, 3);
                return;
            }
            if (temp_r3_2 == 1) {
                close_windows__19TQuestListChallengeFPv((void *)(arg0));
                temp_r3_3 = M2C_FIELD(arg0, VObj_80288C78_80288B5C **, 0x30);
                if (temp_r3_3 != NULL) {
                    temp_r3_3->m7(0x19, 0x80);
                }
                set_field_20__12TQuestListVMFPvi(arg0, 0);
                return;
            }
            goto block_9;
        }
block_9:
        if ((M2C_FIELD(arg0, void **, 0x34) != NULL) && (get_status_flag__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x34)) == 1)) {
            close_windows__19TQuestListChallengeFPv((void *)(arg0));
            temp_r3_4 = M2C_FIELD(arg0, VObj_80288C78_80288B5C **, 0x30);
            if (temp_r3_4 != NULL) {
                temp_r3_4->m7(0x19, 0x80);
            }
            set_field_20__12TQuestListVMFPvi(arg0, 0);
        }
    }
}

extern M2C_UNK __vt__19TQuestListChallenge[];
extern s32 TQuestListChallenge__data_805D64B0;

void *__dt__19TQuestListChallengeFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TQuestListChallenge;
        close_windows__19TQuestListChallengeFPv((void *)((M2C_UNK *)arg0));
        TQuestListChallenge__data_805D64B0 = 0;
        __dt__15TShopWindowBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_805D64A8;
extern s32 lbl_805D64AC;
extern s32 TQuestListChallenge__data_805D64B0;

void reset_globals__19TQuestListChallengeFv(void) {
    lbl_805D64A8 = 0;
    lbl_805D64AC = 0;
    TQuestListChallenge__data_805D64B0 = 0;
}

extern s32 lbl_805D64A8;
extern s32 lbl_805D64AC;
extern s32 TQuestListChallenge__data_805D64B0;

void reset_globals2__19TQuestListChallengeFv(void) {
    lbl_805D64A8 = 0;
    lbl_805D64AC = 0;
    TQuestListChallenge__data_805D64B0 = 0;
}

extern void *tl_04;

void * TObjNpcKenkyu__create(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3B8);
    if (o2 != NULL) {
        o2 = TObjNpcKenkyu__ct(o2, o, arg0);
    }
    return o2;
}

}
