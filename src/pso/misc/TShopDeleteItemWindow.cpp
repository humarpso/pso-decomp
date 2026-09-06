#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80337910 { char pad[0x18]; };
struct VObj_80337910 : Base_80337910 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
};
struct Base_80337948_80337910 { char pad[0x18]; };
struct VObj_80337948_80337910 : Base_80337948_80337910 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
};

struct Stack_803379E0 {
    M2C_UNK sp8;
    u8 trailing_storage[0x10];
};

extern "C" {
s32 is_visible__17TWindowSubComCardFPv(int);
s32 get_status_flag__17TWindowSubComCardFPv(int);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);
s32 TCheckRoomSequence__sub_80210904(int);
s32 TCheckRoomSequence__sub_80210E28(int, int, int);
s32 TCheckRoomSequence__sub_80211034(int, void *, int);
s32 TCheckRoomSequence__sub_8021118C(int);
s32 TShopWindowBase__sub_8022397C(void *);
void TWindow__close(void *);
s32 TWindowSubComCard__sub_80265BF8(int);
s32 select_cursor_entry__6TLobbyFPv(int);
void TShopDeleteItemWindow__sub_803379E0(u8 *arg0);
}

extern "C" {

struct Base_80337980_80337910 { char pad[0x18]; };
struct VObj_80337980_80337910 : Base_80337980_80337910 {
    virtual void m0();virtual void m1();virtual void m2();virtual void m3();
    virtual void m4(int a, int b);
};

void *TShopDeleteItemWindow__ct(void *arg0, void *arg1, void *arg2, void *arg3);
void TShopDeleteItemWindow__vt4(void *arg0);
void TShopDeleteItemWindow__vt5(void *arg0);
void *__dt__21TShopDeleteItemWindowFv(void *arg0, s16 arg1);
void destroy__21TShopDeleteItemWindowFPv(void *arg0);
void TWindow__close(void *);
void __ct__15TShopWindowBaseFv(void *);
void __dl__7TObjectFPv(void *);
void __dt__15TShopWindowBaseFv(void *, int);
M2C_UNK clear_selected_and_update_entry__14TWindowSubItemFPv(void *);
void init__9TItemDataFv(void *);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);

void TShopDeleteItemWindow__vt5(void *arg0) {
    struct VObj_80337910 *o = (struct VObj_80337910 *)M2C_FIELD(arg0, void **, 0x64);
    if (o != NULL) {
        o->m5();
    }
}

void TShopDeleteItemWindow__vt4(void *arg0) {
    struct VObj_80337948_80337910 *o = (struct VObj_80337948_80337910 *)M2C_FIELD(arg0, void **, 0x64);
    if (o != NULL) {
        o->m4();
    }
}

void destroy__21TShopDeleteItemWindowFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        clear_selected_and_update_entry__14TWindowSubItemFPv(M2C_FIELD(arg0, void **, 0x30));
    }
    set_field_20__12TQuestListVMFPvi(arg0, 1);
    ((VObj_80337980_80337910 *)arg0)->m4(0x4C, 1);
}

extern M2C_UNK __vt__21TShopDeleteItemWindow[];

void TShopDeleteItemWindow__sub_803379E0(u8 *arg0) {
    Stack_803379E0 stack;
    s32 temp_r30;
    s32 temp_r3_2;
    s32 temp_r3_3;
    u32 temp_r3;
    u32 temp_r3_4;
    temp_r3 = M2C_FIELD(arg0, u32 *, 0x34);
    if ((temp_r3 != 0U) && (is_visible__17TWindowSubComCardFPv((int) (temp_r3)) != 0)) {
        temp_r30 = TShopWindowBase__sub_8022397C((void *) (arg0));
        temp_r3_2 = TWindowSubComCard__sub_80265BF8((int) (M2C_FIELD(arg0, u32 *, 0x34)));
        if (temp_r3_2 == 0) {
            temp_r3_3 = select_cursor_entry__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 0x30)));
            if (TCheckRoomSequence__sub_80211034((int) (temp_r3_3), (void *) (&stack.sp8), (int) (temp_r30)) != 0) {
                TCheckRoomSequence__sub_80210E28((int) (temp_r3_3), (int) (M2C_FIELD(arg0, s32 *, 0x5C)), (int) (temp_r30));
                TCheckRoomSequence__sub_80210904((int) (temp_r30));
                TCheckRoomSequence__sub_8021118C((int) (temp_r30));
                set_field_20__12TQuestListVMFPvi((void *)((void *) (arg0)), (M2C_UNK)((int) (0)));
            }
            TWindow__close((void *)((int) (M2C_FIELD(arg0, u32 *, 0x34))));
            M2C_FIELD(arg0, u32 *, 0x34) = 0U;
            return;
        }
        if (temp_r3_2 == 1) {
            TWindow__close((void *)((int) (M2C_FIELD(arg0, u32 *, 0x34))));
            M2C_FIELD(arg0, u32 *, 0x34) = 0U;
            set_field_20__12TQuestListVMFPvi((void *)((void *) (arg0)), (M2C_UNK)((int) (4)));
            return;
        }
        goto block_8;
    }
block_8:
    temp_r3_4 = M2C_FIELD(arg0, u32 *, 0x34);
    if ((temp_r3_4 != 0U) && (get_status_flag__17TWindowSubComCardFPv((int) (temp_r3_4)) != 0)) {
        TWindow__close((void *)((int) (M2C_FIELD(arg0, u32 *, 0x34))));
        M2C_FIELD(arg0, u32 *, 0x34) = 0U;
        set_field_20__12TQuestListVMFPvi((void *)((void *) (arg0)), (M2C_UNK)((int) (4)));
    }
}

void *__dt__21TShopDeleteItemWindowFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__21TShopDeleteItemWindow;
        if (M2C_FIELD(arg0, void **, 0x30) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x30)); M2C_FIELD(arg0, M2C_UNK *, 0x30) = 0; }
        if (M2C_FIELD(arg0, void **, 0x34) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x34)); M2C_FIELD(arg0, M2C_UNK *, 0x34) = 0; }
        if (M2C_FIELD(arg0, void **, 0x38) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x38)); M2C_FIELD(arg0, M2C_UNK *, 0x38) = 0; }
        if (M2C_FIELD(arg0, void **, 0x3C) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x3C)); M2C_FIELD(arg0, M2C_UNK *, 0x3C) = 0; }
        __dt__15TShopWindowBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__21TShopDeleteItemWindow[];
extern void *lbl_805D4250;

void *TShopDeleteItemWindow__ct(void *arg0, void *arg1, void *arg2, void *arg3) {
    __ct__15TShopWindowBaseFv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__21TShopDeleteItemWindow;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D4250;
    M2C_FIELD(arg0, u32 *, 0x20) = 0;
    M2C_FIELD(arg0, void **, 0x24) = arg3;
    M2C_FIELD(arg0, u32 *, 0x5C) = 1;
    M2C_FIELD(arg0, u8 *, 0x54) = 0;
    M2C_FIELD(arg0, u32 *, 0x60) = 0;
    M2C_FIELD(arg0, u32 *, 0x28) = 0;
    M2C_FIELD(arg0, u32 *, 0x2C) = 0;
    M2C_FIELD(arg0, u32 *, 0x30) = 0;
    M2C_FIELD(arg0, u32 *, 0x34) = 0;
    M2C_FIELD(arg0, u32 *, 0x38) = 0;
    M2C_FIELD(arg0, u32 *, 0x3C) = 0;
    M2C_FIELD(arg0, void **, 0x64) = arg2;
    init__9TItemDataFv((void *)((char *)arg0 + 64));
    return arg0;
}

}
