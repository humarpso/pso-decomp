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

class VBase_80288FDC { public: u8 pad[0x18]; };
class VObj_80288FDC : public VBase_80288FDC {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual s32 v8();
};

struct RecoveredGlobal_80289200___vt__19TQuestListChallenge {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct RecoveredGlobal_80289200_lbl_8045080C {
    M2C_UNK value;
    u8 remaining[0x4C];
};

struct RecoveredGlobal_80289200_lbl_80450910 {
    M2C_UNK value;
    u8 remaining[0x8C];
};

struct RecoveredGlobal_80289200_lbl_80450A20 {
    M2C_UNK value;
    u8 remaining[0x7C];
};

class QLC_802890AC {
public:
    u8 pad[0x20];
    s32 state;
    void m0();
    void m1();
    void m2();
    void m3();
    void m4();
    void m5();
};

typedef void (QLC_802890AC::*Handler_802890AC)();

extern "C" {

}

extern "C" {
s32 get_quest_list_text(int, int, int);
s32 select_cursor_entry__6TLobbyFPv(s32);
extern s32 TQuestListChallenge__data_805D64B0;
s32 TQuestListChallenge__sub_80288B04(void);
s32 get_game_play_mode();
M2C_UNK __ct__15TShopWindowBaseFv();
s32 calc_min_challenge_progress__6TLobbyFv();
s32 get_instance__6TLobbyFv();
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);
extern s32 TQuestListChallenge__data_805D64B0;
extern M2C_UNK __vt__19TQuestListChallenge[];
extern RecoveredGlobal_80289200_lbl_8045080C lbl_8045080C;
extern RecoveredGlobal_80289200_lbl_80450910 lbl_80450910;
extern RecoveredGlobal_80289200_lbl_80450A20 lbl_80450A20;
extern s32 lbl_805D3AF8;
u8 *TQuestListChallenge__ct(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3);
struct Entry_80288FDC { s32 id; u8 pad[0xC]; };
struct QLC_80288FDC {
    u8 pad[0x24];
    s32 f24;
    u8 pad2[0x30 - 0x28];
    VObj_80288FDC *obj;
    u8 pad3[0x38 - 0x34];
    u32 list;
    u8 pad4[0x50 - 0x3C];
    s32 f50;
    s32 count;
    Entry_80288FDC *entries;
};

s32 obj_getField1c(s32);
s32 get_guild_text(s32);
void calc_list_content_extent(u32);
void add_list_entry__6TLobbyFPviii(u32, s32, s32, s32);
s32 create_item_list_window(s32, s32, s32);
void TQuestListChallenge__sub_80288FDC(QLC_80288FDC *arg0);
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
M2C_UNK prepare_offline_quest_filenames(s32, s32);
void *TObjControl__ct(void *, void *);
void *TObjNpcKenkyu__ct(void *, void *, void *);
s32 get_selected_menu_value(u32);
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
            return get_quest_list_text((int) (M2C_FIELD((*(u8 * *)&TQuestListChallenge__data_805D64B0), s32 *, 0x50)), (int) (M2C_FIELD((M2C_FIELD((*(u8 * *)&TQuestListChallenge__data_805D64B0), s32 *, 0x58) + (select_cursor_entry__6TLobbyFPv((s32)((int) (temp_r3))) * 0x10)), s32 *, 0)), (int) ((*(u8 * *)&TQuestListChallenge__data_805D64B0)));
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
            temp_r3_2 = get_selected_menu_value(M2C_FIELD(arg0, u32 *, 0x34));
            if (temp_r3_2 == 0) {
                temp_r0 = select_cursor_entry__6TLobbyFPv(M2C_FIELD(arg0, s32 *, 0x38));
                temp_r4 = M2C_FIELD(arg0, Entry_80288C78_80288B5C **, 0x58);
                prepare_offline_quest_filenames(temp_r4[temp_r0].fieldC, (s32) temp_r4);
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

void TQuestListChallenge__sub_80288FDC(QLC_80288FDC *arg0) {
    u16 id;
    s32 i;
    s32 e;

    if (arg0->obj->v8() != 0 && arg0->list == 0) {
        id = obj_getField1c(arg0->f24);
        arg0->list = create_item_list_window(get_guild_text(0), 0x40, id);
        for (i = 0; i < arg0->count; i++) {
            e = ((s32 (*)(s32, s32))get_quest_list_text)(arg0->f50, arg0->entries[i].id);
            add_list_entry__6TLobbyFPviii(arg0->list, 0x2C, e, i);
        }
        calc_list_content_extent(arg0->list);
        set_field_20__12TQuestListVMFPvi(arg0, 1);
    }
}

void TQuestListChallenge__vt9(QLC_802890AC *arg0) {
    static Handler_802890AC tbl[] = {
        &QLC_802890AC::m0,
        &QLC_802890AC::m1,
        &QLC_802890AC::m2,
        &QLC_802890AC::m3,
        &QLC_802890AC::m4,
        &QLC_802890AC::m5,
    };
    (arg0->*tbl[arg0->state])();
}

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

typedef char RecoveredGlobal_80289200___vt__19TQuestListChallenge_size[sizeof(RecoveredGlobal_80289200___vt__19TQuestListChallenge) == 0x30 ? 1 : -1];
typedef char RecoveredGlobal_80289200_lbl_8045080C_size[sizeof(RecoveredGlobal_80289200_lbl_8045080C) == 0x50 ? 1 : -1];
typedef char RecoveredGlobal_80289200_lbl_80450910_size[sizeof(RecoveredGlobal_80289200_lbl_80450910) == 0x90 ? 1 : -1];
typedef char RecoveredGlobal_80289200_lbl_80450A20_size[sizeof(RecoveredGlobal_80289200_lbl_80450A20) == 0x80 ? 1 : -1];
u8 *TQuestListChallenge__ct(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    s32 temp_r3;
    s32 var_r3;
    __ct__15TShopWindowBaseFv();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80289200___vt__19TQuestListChallenge *)&__vt__19TQuestListChallenge).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3AF8;
    if ((void *) (*(u8 * *)&TQuestListChallenge__data_805D64B0) != NULL) {
        return arg0;
    }
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = arg2;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = arg3;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    temp_r3 = get_game_play_mode();
    switch (temp_r3) {
    case 1:
        if (get_instance__6TLobbyFv() == 0) {
            M2C_FIELD(arg0, M2C_UNK **, 0x58) = &lbl_80450910.value;
        } else {
            M2C_FIELD(arg0, M2C_UNK **, 0x58) = &lbl_8045080C.value;
        }
        M2C_FIELD(arg0, s32 *, 0x50) = 0xF;
        M2C_FIELD(arg0, s32 *, 0x54) = (s32) (calc_min_challenge_progress__6TLobbyFv() + 1);
        temp_r3 = get_instance__6TLobbyFv();
        var_r3 = 5;
        if (temp_r3 == 0) {
            var_r3 = 9;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x54) > var_r3) {
            M2C_FIELD(arg0, s32 *, 0x54) = var_r3;
        }
        break;
    case 2:
        M2C_FIELD(arg0, s32 *, 0x50) = 0x10;
        M2C_FIELD(arg0, M2C_UNK **, 0x58) = &lbl_80450A20.value;
        M2C_FIELD(arg0, s32 *, 0x54) = 8;
        break;
    }
    set_field_20__12TQuestListVMFPvi((void *)((void *) (arg0)), (M2C_UNK)((int) (0)));
    (*(u8 * *)&TQuestListChallenge__data_805D64B0) = arg0;
    return arg0;
}

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
