#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define PAD_VIRT virtual void CAT(pv, __LINE__)();
struct Base_A_8021282C { char pad[0x18]; };
struct V_A_8021282C : Base_A_8021282C {
    virtual void m0();
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    virtual M2C_UNK m7(M2C_UNK, M2C_UNK);
    virtual s32 m8();
};

struct VBase_18_97738d { char pad[0x18]; };

struct VObj_18_97738d : VBase_18_97738d {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual M2C_UNK m7(M2C_UNK, M2C_UNK);
};

struct RecoveredGlobal_802128B0_THunterGuildSeqOffline__data_80513DC8 {
    M2C_UNK value;
    u8 remaining[0xC];
};

typedef s32 M2C_UNK;
struct Base_80212B88 { char pad[0x18]; };

struct Seq_80212B88 : Base_80212B88 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6();
    virtual M2C_UNK m7(M2C_UNK, M2C_UNK);
    virtual s32 m8();
    u8 pad1c[8];
    s32 player;
};

struct List_80212B88 {
    u8 pad0[0x28];
    void (*cancelled)(void);
    void (*accepted)(void);
    void (*download)(void);
};

struct Base_802129FC { char pad[0x18]; };

struct Seq_802129FC : Base_802129FC {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6();
    virtual M2C_UNK m7(M2C_UNK, M2C_UNK);
    virtual s32 m8();
    u8 pad1c[0x24 - 0x1C];
    s32 f24;
    u8 pad28[0x34 - 0x28];
    void *f34;
    s32 f38;
};

extern "C" {
s32 is_visible__17TWindowSubComCardFPv(void *);
s32 get_status_flag__17TWindowSubComCardFPv(void *);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);
s32 create_quest_thread(s32);
void TWindow__close(void *);
s32 get_selected_menu_value(void *);
extern RecoveredGlobal_802128B0_THunterGuildSeqOffline__data_80513DC8 THunterGuildSeqOffline__data_80513DC8;
void handle_cancel_choice__22THunterGuildSeqOfflineFPv(u8 *arg0);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);
List_80212B88 *TQuestListOffline__ct(void *, s32, Seq_80212B88 *, s32);
void *__nw__7TObjectFUl(u32);
List_80212B88 *TQuestListChallenge__ct(void *, s32, Seq_80212B88 *, s32);
s32 get_game_play_mode();
void set_state_close__22THunterGuildSeqOfflineFv(void);
void set_state_4__22THunterGuildSeqOfflineFv(void);
void THunterGuildSeqOffline__sub_80212710(void);
void set_state_close2__22THunterGuildSeqOfflineFv(void);
void request_close__22THunterGuildSeqOfflineFv(void);
extern s32 tl_05;
void open_quest_list__22THunterGuildSeqOfflineFPv(Seq_80212B88 *self);
void obj_getField1c(s32);
void queue_destruction__7TObjectFv(void *);
void init__22THunterGuildSeqOfflineFPvPvPv(void *, void *, void *);
void queue_destruction__19THunterGuildWarningFv();
void THunterGuildSeqOffline__sub_8021E180();
void fn_802233F8(void *);
void close_window__13TShopSequenceFPv(void *);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
void *__nw__7TObjectFUl(u32);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
void set_enemy_mode_0__22THunterGuildSeqOfflineFv(void);
void set_enemy_mode_1__22THunterGuildSeqOfflineFv(void);
void set_enemy_mode_3__12TQuestListVMFv(void);
void set_enemy_mode_5__22THunterGuildSeqOfflineFv(void);
extern void *tl_00;
void THunterGuildSeqOffline__vt11(Seq_802129FC *arg0);
}

extern "C" {

struct Base_80212858_8021282C { char pad[0x18]; };
struct VObj_80212858_8021282C : Base_80212858_8021282C {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7(int, int);
};

void handle_window_input__22THunterGuildSeqOfflineFPv(void *arg0);
void request_close__22THunterGuildSeqOfflineFv(void);
void set_enemy_mode_0__22THunterGuildSeqOfflineFv(void);
int TKeyBoardControl__sub_8000F950(void);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
int clear_counter__6TLobbyFv(void);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);

    extern int evt2_random_enemies_mode;
void set_enemy_mode_0__22THunterGuildSeqOfflineFv(void) { clear_counter__6TLobbyFv(); evt2_random_enemies_mode = 0; TKeyBoardControl__sub_8000F950(); }

extern struct VObj_80212858_8021282C *THunterGuildSeqOffline__data_805D6188;

void request_close__22THunterGuildSeqOfflineFv(void) {
    if (THunterGuildSeqOffline__data_805D6188 != NULL) {
        THunterGuildSeqOffline__data_805D6188->m7(6, 1);
        M2C_FIELD(THunterGuildSeqOffline__data_805D6188, s32 *, 0x38) = 2;
        set_field_20__12TQuestListVMFPvi(THunterGuildSeqOffline__data_805D6188, 5);
    }
}

typedef char RecoveredGlobal_802128B0_THunterGuildSeqOffline__data_80513DC8_size[sizeof(RecoveredGlobal_802128B0_THunterGuildSeqOffline__data_80513DC8) == 0x10 ? 1 : -1];
void handle_cancel_choice__22THunterGuildSeqOfflineFPv(u8 *arg0) {
    s32 temp_r3_2;
    u8 *temp_r3;
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x2C));
    if (temp_r3 != NULL) {
        if (is_visible__17TWindowSubComCardFPv(temp_r3) != 0) {
            temp_r3_2 = get_selected_menu_value(M2C_FIELD(arg0, u8 **, 0x2C));
            if (temp_r3_2 == 0) {
                TWindow__close(M2C_FIELD(arg0, u8 **, 0x2C));
                M2C_FIELD(arg0, u8 **, 0x2C) = NULL;
                ((VObj_18_97738d *)(arg0))->m7(9, 1);
                M2C_FIELD(arg0, s32 *, 0x38) = 1;
                if ((s32) M2C_FIELD(&THunterGuildSeqOffline__data_80513DC8.value, s32 *, 8) != -1) {
                    M2C_FIELD(arg0, s32 *, 0x34) = create_quest_thread(M2C_FIELD(&THunterGuildSeqOffline__data_80513DC8.value, s32 *, 8));
                }
                set_field_20__12TQuestListVMFPvi((void *)(arg0), (M2C_UNK)(5));
                return;
            }
            if (temp_r3_2 == 1) {
                TWindow__close(M2C_FIELD(arg0, u8 **, 0x2C));
                M2C_FIELD(arg0, u8 **, 0x2C) = NULL;
                ((VObj_18_97738d *)(arg0))->m7(0xA, 1);
                M2C_FIELD(arg0, s32 *, 0x38) = 0;
                set_field_20__12TQuestListVMFPvi((void *)(arg0), (M2C_UNK)(5));
                return;
            }
            goto block_8;
        }
block_8:
        if (get_status_flag__17TWindowSubComCardFPv(M2C_FIELD(arg0, u8 **, 0x2C)) != 0) {
            TWindow__close(M2C_FIELD(arg0, u8 **, 0x2C));
            M2C_FIELD(arg0, u8 **, 0x2C) = NULL;
            ((VObj_18_97738d *)(arg0))->m7(0xA, 1);
            M2C_FIELD(arg0, s32 *, 0x38) = 0;
            set_field_20__12TQuestListVMFPvi((void *)(arg0), (M2C_UNK)(5));
        }
    }
}

void THunterGuildSeqOffline__vt11(Seq_802129FC *arg0) {
    void *o;
    if (arg0->f34 != NULL) {
        if (all_parents_unqueued_for_destruction__7TObjectFv(arg0->f34) == 1) {
            return;
        }
        arg0->f34 = NULL;
    }
    if (arg0->m8() == 0) {
        return;
    }
    if (TShopWindowBase__sub_80223A48(arg0) == 0 && TShopWindowBase__sub_802239EC(arg0) == 0) {
        return;
    }
    switch (arg0->f38) {
    case 0:
        break;
    case 1:
        o = __nw__7TObjectFUl(0x28);
        if (o != NULL) {
            init__22THunterGuildSeqOfflineFPvPvPv(o, tl_00, (void *)set_enemy_mode_0__22THunterGuildSeqOfflineFv);
        }
        obj_getField1c(arg0->f24);
        THunterGuildSeqOffline__sub_8021E180();
        break;
    case 2:
        o = __nw__7TObjectFUl(0x28);
        if (o != NULL) {
            init__22THunterGuildSeqOfflineFPvPvPv(o, tl_00, (void *)set_enemy_mode_1__22THunterGuildSeqOfflineFv);
        }
        obj_getField1c(arg0->f24);
        THunterGuildSeqOffline__sub_8021E180();
        break;
    case 3:
        o = __nw__7TObjectFUl(0x28);
        if (o != NULL) {
            init__22THunterGuildSeqOfflineFPvPvPv(o, tl_00, (void *)set_enemy_mode_3__12TQuestListVMFv);
        }
        obj_getField1c(arg0->f24);
        THunterGuildSeqOffline__sub_8021E180();
        break;
    case 4:
        o = __nw__7TObjectFUl(0x28);
        if (o != NULL) {
            init__22THunterGuildSeqOfflineFPvPvPv(o, tl_00, (void *)set_enemy_mode_5__22THunterGuildSeqOfflineFv);
        }
        obj_getField1c(arg0->f24);
        THunterGuildSeqOffline__sub_8021E180();
        break;
    }
    close_window__13TShopSequenceFPv(arg0);
    fn_802233F8(arg0);
    queue_destruction__19THunterGuildWarningFv();
    queue_destruction__7TObjectFv(arg0);
}

void open_quest_list__22THunterGuildSeqOfflineFPv(Seq_80212B88 *self) {
    List_80212B88 *list;
    if (self->m8() == 0) return;
    switch (get_game_play_mode()) {
    case 2:
        list = (List_80212B88 *)__nw__7TObjectFUl(0x5C);
        if (list != NULL) list = TQuestListChallenge__ct(list, tl_05, self, self->player);
        if (list != NULL) {
            list->accepted = request_close__22THunterGuildSeqOfflineFv;
            list->cancelled = set_state_close2__22THunterGuildSeqOfflineFv;
            set_field_20__12TQuestListVMFPvi(self, 10);
        }
        break;
    case 1:
        list = (List_80212B88 *)__nw__7TObjectFUl(0x5C);
        if (list != NULL) list = TQuestListChallenge__ct(list, tl_05, self, self->player);
        if (list != NULL) {
            list->accepted = set_state_4__22THunterGuildSeqOfflineFv;
            list->cancelled = set_state_close__22THunterGuildSeqOfflineFv;
            set_field_20__12TQuestListVMFPvi(self, 10);
        }
        break;
    case 0:
    default:
        list = (List_80212B88 *)__nw__7TObjectFUl(0x58);
        if (list != NULL) list = TQuestListOffline__ct(list, tl_05, self, self->player);
        if (list != NULL) {
            list->accepted = request_close__22THunterGuildSeqOfflineFv;
            list->cancelled = set_state_close2__22THunterGuildSeqOfflineFv;
            list->download = THunterGuildSeqOffline__sub_80212710;
            set_field_20__12TQuestListVMFPvi(self, 10);
        }
        break;
    }
}

void handle_window_input__22THunterGuildSeqOfflineFPv(void *arg0) {
    void *temp_r3 = M2C_FIELD(arg0, void **, 0x34);

    if (temp_r3 != NULL) {
        if (all_parents_unqueued_for_destruction__7TObjectFv(temp_r3) != 1) {
            M2C_FIELD(arg0, u32 *, 0x34) = 0U;
            goto block_3;
        }
    } else {
block_3:
        if ((((V_A_8021282C *) arg0)->m8() != 0) && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
            ((V_A_8021282C *) arg0)->m7(0xC, 1);
            M2C_FIELD(arg0, s32 *, 0x38) = 1;
            set_field_20__12TQuestListVMFPvi(arg0, 5);
        }
    }
}

}
