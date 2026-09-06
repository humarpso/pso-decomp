#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
#define PADV virtual void CAT(f,__LINE__)();
struct Base_A_80213788 { char pad[0x18]; };
struct V_A_80213788 : Base_A_80213788 {
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    virtual void m7(s32, s32);
    virtual s32 m8();
};
struct Base_A_8021383c_80213788 { char pad[0x18]; };
struct V_A_8021383c_80213788 : public Base_A_8021383c_80213788 {
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void m7(int, int);
    virtual s32 m8();
};
struct Base_802138F0_80213788 { char pad[0x18]; };
struct VObj_802138F0_80213788 : Base_802138F0_80213788 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7(s32, s32);
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

struct Stack_80213B18 {
    f32 sp8;
    f32 spC;
};

extern "C" {
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);
u32 TShopSequence__sub_80223600(void *, s32, s32);
s32 TWindowSubComCard__sub_8026CBB8(int, f32);
extern const f32 lbl_805DC658;
extern const f32 lbl_805DC65C;
void THunterGuildSeqOffline__sub_80213B18(u8 *arg0);
}

extern "C" {

void handle_close__22THunterGuildSeqOfflineFPv(void *arg0);
void reset_random_enemies_mode(void);
void restore_and_init_quest_list__22THunterGuildSeqOfflineFPv(void *arg0);
void update_close_shop__22THunterGuildSeqOfflineFPv(void *arg0);
void update_shop_close__22THunterGuildSeqOfflineFPv(void *arg0);
s32 THunterGuildSeqOffline__sub_8022350C(void *, M2C_UNK);
int TKeyBoardControl__sub_8000F950(void);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
int clear_counter__6TLobbyFv(void);
M2C_UNK restore_player_state__13TShopSequenceFPv();
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);

void update_shop_close__22THunterGuildSeqOfflineFPv(void *arg0) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0x38);
    if (temp_r3 != NULL) {
        if (all_parents_unqueued_for_destruction__7TObjectFv(temp_r3) != 1) {
            M2C_FIELD(arg0, u32 *, 0x38) = 0U;
            goto block_3;
        }
    } else {
block_3:
        if ((((V_A_80213788 *) arg0)->m8() != 0) && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
            ((V_A_80213788 *) arg0)->m7(0xC, 1);
            M2C_FIELD(arg0, s32 *, 0x34) = 1;
            set_field_20__12TQuestListVMFPvi(arg0, 0xC);
        }
    }
}

void update_close_shop__22THunterGuildSeqOfflineFPv(void *arg0) {
    void *p = M2C_FIELD(arg0, void **, 0x38);
    if (p != 0) {
        if (all_parents_unqueued_for_destruction__7TObjectFv(p) == 0) {
            M2C_FIELD(arg0, u32 *, 0x38) = 0U;
            goto block_3;
        }
    } else {
block_3:
        if ((((V_A_8021383c_80213788 *) arg0)->m8() != 0) && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
            ((V_A_8021383c_80213788 *) arg0)->m7(0xC, 1);
            M2C_FIELD(arg0, s32 *, 0x34) = 1;
            set_field_20__12TQuestListVMFPvi(arg0, 0xC);
        }
    }
}

void handle_close__22THunterGuildSeqOfflineFPv(void *arg0) {
    if ((((VObj_802138F0_80213788 *)arg0)->m8() != 0) && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
        ((VObj_802138F0_80213788 *)arg0)->m7(0xC, 1);
        M2C_FIELD(arg0, s32 *, 0x34) = 0;
        set_field_20__12TQuestListVMFPvi(arg0, 0xC);
    }
}

void THunterGuildSeqOffline__sub_80213B18(u8 *arg0) {
    Stack_80213B18 stack;
    stack.sp8 = lbl_805DC658;
    stack.spC = lbl_805DC65C;
    TShopSequence__sub_80223600(arg0, TWindowSubComCard__sub_8026CBB8((int) (0x2C), (f32) (lbl_805DC658)), (s32) &stack.sp8);
    ((VObj_18_97738d *)(arg0))->m7(1, 1);
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    set_field_20__12TQuestListVMFPvi((void *)(arg0), (M2C_UNK)(2));
}

void restore_and_init_quest_list__22THunterGuildSeqOfflineFPv(void *arg0) {
    restore_player_state__13TShopSequenceFPv();
    M2C_FIELD(arg0, s32 *, 0x2C) = THunterGuildSeqOffline__sub_8022350C(arg0, 1);
    set_field_20__12TQuestListVMFPvi(arg0, 1);
}

    extern int evt2_random_enemies_mode;
void reset_random_enemies_mode(void) { clear_counter__6TLobbyFv(); evt2_random_enemies_mode = 0; TKeyBoardControl__sub_8000F950(); }

}
