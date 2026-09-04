#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8021FEE0_8021FE6C { char pad[0x18]; };
struct VObj_8021FEE0_8021FE6C : Base_8021FEE0_8021FE6C {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(int, int);
};
struct Base_8021FF30_8021FE6C { char pad[0x18]; };
struct VObj_8021FF30_8021FE6C : Base_8021FF30_8021FE6C {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(s32, s32);
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32  m8();
};
struct Base_8021FFB8_8021FE6C { char pad[0x18]; };
struct VObj_8021FFB8_8021FE6C : Base_8021FFB8_8021FE6C {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual int m8();
};

extern "C" {

struct Base_8021FE80_8021FE6C { char pad[0x18]; };
struct VObj_8021FE80_8021FE6C : Base_8021FE80_8021FE6C {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(int, int);
};

int TShopItemTecSequence__sub_8021FE6C(int a0);
void close__20TShopItemTecSequenceFPv(void *arg0);
void close_if_done__20TShopItemTecSequenceFPv(void *arg0);
void handle_select__20TShopItemTecSequenceFPv(void *arg0);
void select_and_advance__20TShopItemTecSequenceFPv(void *arg0);
void set_judgment_target_flag(void *arg0, void *arg1);
u32 TLobby__sub_80101AB0(s32);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
M2C_UNK add_item_flags__10TObjPlayerFPvUi(u32, M2C_UNK);
M2C_UNK close_if_single_screen__13TShopSequenceFv(void *);
M2C_UNK close_window__13TShopSequenceFPv(void *);
s32 is_not_split_screen__13TRaderMapCoreFv();
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, s32);

    extern int lbl_80513EF0[];
int TShopItemTecSequence__sub_8021FE6C(int a0) {  return lbl_80513EF0[a0]; }

extern s32 lbl_805D6248;
extern s32 lbl_805D624C;

void select_and_advance__20TShopItemTecSequenceFPv(void *arg0) {
    if (arg0 != NULL) {
        ((VObj_8021FE80_8021FE6C *)arg0)->m4(0x1B, 1);
        set_field_20__12TQuestListVMFPvi((void *)(arg0), (s32)(6));
        lbl_805D6248 = 0x1A;
        lbl_805D624C = 2;
    }
}

void close__20TShopItemTecSequenceFPv(void *arg0) {
    struct VObj_8021FEE0_8021FE6C *o = (struct VObj_8021FEE0_8021FE6C *)arg0;
    if (o != NULL) {
        o->m4(0x1A, 1);
        set_field_20__12TQuestListVMFPvi((void *)(arg0), (s32)(2));
    }
}

extern s32 lbl_805D6248;
extern s32 lbl_805D624C;

void handle_select__20TShopItemTecSequenceFPv(void *arg0) {
    if ((((VObj_8021FF30_8021FE6C*)arg0)->m8() != 0) && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
        ((VObj_8021FF30_8021FE6C*)arg0)->m4(lbl_805D6248, 1);
        set_field_20__12TQuestListVMFPvi((void *)(arg0), (s32)(lbl_805D624C));
    }
}

void close_if_done__20TShopItemTecSequenceFPv(void *arg0) {
    if ((((VObj_8021FFB8_8021FE6C *)arg0)->m8() != 0) && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
        close_if_single_screen__13TShopSequenceFv(arg0);
        close_window__13TShopSequenceFPv(arg0);
        queue_destruction__7TObjectFv(arg0);
    }
}

void set_judgment_target_flag(void *arg0, void *arg1) {
    u32 temp_r3;
    if ((is_not_split_screen__13TRaderMapCoreFv() == 1) && ((temp_r3 = TLobby__sub_80101AB0(M2C_FIELD(arg1, s32 *, 0xC))) != 0U) && ((s32) M2C_FIELD(arg0, s32 *, 0x168) != 0)) {
        add_item_flags__10TObjPlayerFPvUi(temp_r3, 0x80);
    }
}

}
