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

extern "C" {
s32 is_visible__17TWindowSubComCardFPv(void *);
s32 get_status_flag__17TWindowSubComCardFPv(void *);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);
s32 TQuestThread__sub_801F5C50(s32);
void TWindow__close(void *);
s32 TWindowSubComCard__sub_80265BF8(void *);
extern RecoveredGlobal_802128B0_THunterGuildSeqOffline__data_80513DC8 THunterGuildSeqOffline__data_80513DC8;
void THunterGuildSeqOffline__sub_802128B0(u8 *arg0);
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
void THunterGuildSeqOffline__sub_802128B0(u8 *arg0) {
    s32 temp_r3_2;
    u8 *temp_r3;
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x2C));
    if (temp_r3 != NULL) {
        if (is_visible__17TWindowSubComCardFPv(temp_r3) != 0) {
            temp_r3_2 = TWindowSubComCard__sub_80265BF8(M2C_FIELD(arg0, u8 **, 0x2C));
            if (temp_r3_2 == 0) {
                TWindow__close(M2C_FIELD(arg0, u8 **, 0x2C));
                M2C_FIELD(arg0, u8 **, 0x2C) = NULL;
                ((VObj_18_97738d *)(arg0))->m7(9, 1);
                M2C_FIELD(arg0, s32 *, 0x38) = 1;
                if ((s32) M2C_FIELD(&THunterGuildSeqOffline__data_80513DC8.value, s32 *, 8) != -1) {
                    M2C_FIELD(arg0, s32 *, 0x34) = TQuestThread__sub_801F5C50(M2C_FIELD(&THunterGuildSeqOffline__data_80513DC8.value, s32 *, 8));
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
