#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_eecf68 { char pad[0x18]; };

struct VObj_18_eecf68 : VBase_18_eecf68 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual s32 m14();
};

extern "C" {
u32 get_quest_id__12TQuestListVMFPv();
s32 TWindowHelpItem__sub_80104FCC(s32, s32, M2C_UNK *);
u8 *TItemData__sub_8010EA38(s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s16);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);
M2C_UNK TWindowHelpItem__sub_802549B0(void *);
void TWindowHelpItem__sub_80254C30(u8 *arg0);
u8 * TLobby__sub_80101AB0(s32);
s32 copy_to_item_data__5TItemFPvPv(void *, void *);
void set_displayed_item_data__15TWindowHelpItemFPvPvPv(void* p, void* a1, void* a2);
void TWindowHelpItem__set_displayed_item_by_id(u8 *arg0, s32 arg1);
u8 * TLobby__sub_80101AB0(s32);
s32 copy_to_item_data__5TItemFPvPv(void *, void *);
void set_items_and_refresh__15TWindowHelpItemFPvPvPv(void* p, void* a1, void* a2);
void TWindowHelpItem__sub_802558D0(u8 *arg0, s32 arg1);
}

extern "C" {

void set_displayed_item_colored__15TWindowHelpItemFPvUi(void *arg0, u32 arg1);
void set_displayed_item_data__15TWindowHelpItemFPvPvPv(void* p, void* a1, void* a2);
void set_items_and_refresh__15TWindowHelpItemFPvPvPv(void* p, void* a1, void* a2);
void update_stat_disp2__15TWindowHelpItemFPv(void *arg0);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s16);
s32 TWindowHelpItem__sub_80104FCC(s32, s32, M2C_UNK *);
int TWindowHelpItem__sub_80255440(void*);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);
M2C_UNK set_flag_0x10__15TWindowHelpItemFPvi(s32, M2C_UNK);
int update_cursor_selection__15TWindowHelpItemFPv(void*);

void update_stat_disp2__15TWindowHelpItemFPv(void *arg0) {
    M2C_UNK sp8;
    s32 temp_r31;
    s32 temp_r30;
    s32 temp_r29;
    s32 temp_r28;
    s32 temp_r27;
    s32 temp_r3;
    u32 temp_r4;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, s16 *, 0x20));
    if ((temp_r3 != 0) && (temp_r31 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0), temp_r30 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 1), temp_r29 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 2), temp_r28 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 3), temp_r27 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 4), (temp_r4 = M2C_FIELD(arg0, u32 *, 0x70), (temp_r4 == 0U) == 0))) {
        if (TWindowHelpItem__sub_80104FCC(temp_r3, temp_r4, &sp8) != 0) {
            set_flag_0x10__15TWindowHelpItemFPvi(temp_r31, 1);
            set_flag_0x10__15TWindowHelpItemFPvi(temp_r30, 1);
            set_flag_0x10__15TWindowHelpItemFPvi(temp_r29, 1);
            set_flag_0x10__15TWindowHelpItemFPvi(temp_r28, 1);
            set_flag_0x10__15TWindowHelpItemFPvi(temp_r27, 1);
            return;
        }
        set_flag_0x10__15TWindowHelpItemFPvi(temp_r31, 0);
        set_flag_0x10__15TWindowHelpItemFPvi(temp_r30, 0);
        set_flag_0x10__15TWindowHelpItemFPvi(temp_r29, 0);
        set_flag_0x10__15TWindowHelpItemFPvi(temp_r28, 0);
        set_flag_0x10__15TWindowHelpItemFPvi(temp_r27, 0);
    }
}

void TWindowHelpItem__sub_80254C30(u8 *arg0) {
    s32 sp8;
    u8 *temp_r30;
    u8 *temp_r31;
    u8 *temp_r3;
    temp_r3 = (u8 *)(((u8 *)TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, s16 *, 0x20))));
    if (temp_r3 != NULL) {
        if (get_quest_id__12TQuestListVMFPv() != 0U) {
            TWindowHelpItem__sub_802549B0((void *) (arg0));
            temp_r30 = (u8 *)(((u8 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0xA)));
            temp_r31 = (u8 *)(TItemData__sub_8010EA38(M2C_FIELD(arg0, s32 *, 0x68)));
            if (TWindowHelpItem__sub_80104FCC((s32)((int) (temp_r3)), (s32)((int) (M2C_FIELD(arg0, s32 *, 0x68))), (M2C_UNK *)((void *) (&sp8))) == 0) {
                if (!(sp8 & 1)) {
                    goto block_4;
                }
            } else {
block_4:
                if ((u8) M2C_FIELD(temp_r31, u8 *, 0x10) != 0) {
                    M2C_FIELD(temp_r30, s32 *, 0x20) = (s32) (((VObj_18_eecf68 *)(temp_r3))->m14() + 1);
                }
            }
        }
    }
}

void TWindowHelpItem__set_displayed_item_by_id(u8 *arg0, s32 arg1) {
    u8 *temp_r3;
    if (arg1 == -1) {
        set_displayed_item_data__15TWindowHelpItemFPvPvPv((void*)(arg0), (void*)(NULL), (void*)((void *)-1));
        return;
    }
    temp_r3 = (u8 *)(TLobby__sub_80101AB0(arg1));
    if (temp_r3 == NULL) {
        set_displayed_item_data__15TWindowHelpItemFPvPvPv((void*)(arg0), (void*)(NULL), (void*)((void *) arg1));
        return;
    }
    copy_to_item_data__5TItemFPvPv(temp_r3, arg0 + 0x88);
    set_displayed_item_data__15TWindowHelpItemFPvPvPv((void*)(arg0), (void*)(arg0 + 0x88), (void*)((void *) arg1));
}

void TWindowHelpItem__sub_802558D0(u8 *arg0, s32 arg1) {
    u8 *temp_r3;
    if (arg1 == -1) {
        set_items_and_refresh__15TWindowHelpItemFPvPvPv((void*)(arg0), (void*)(NULL), (void*)((void *)-1));
        return;
    }
    temp_r3 = (u8 *)(TLobby__sub_80101AB0(arg1));
    if (temp_r3 == NULL) {
        set_items_and_refresh__15TWindowHelpItemFPvPvPv((void*)(arg0), (void*)(NULL), (void*)((void *) arg1));
        return;
    }
    copy_to_item_data__5TItemFPvPv(temp_r3, arg0 + 0x74);
    set_items_and_refresh__15TWindowHelpItemFPvPvPv((void*)(arg0), (void*)(arg0 + 0x74), (void*)((void *) arg1));
}

void set_displayed_item_colored__15TWindowHelpItemFPvUi(void *arg0, u32 arg1) {
    M2C_UNK var_r5;

    var_r5 = -0x100;
    if (arg1 == 0U) {
        var_r5 = -1;
    }
    set_displayed_item_data__15TWindowHelpItemFPvPvPv((void*)((void*)(arg0)), (void*)((void*)(arg1)), (void*)((void*)(var_r5)));
}

void set_displayed_item_data__15TWindowHelpItemFPvPvPv(void* p, void* a1, void* a2) { *(void**)((char*)p + 0xa4) = a2; *(void**)((char*)p + 0x70) = a1; update_cursor_selection__15TWindowHelpItemFPv(p); TWindowHelpItem__sub_80255440(p); }

void set_items_and_refresh__15TWindowHelpItemFPvPvPv(void* p, void* a1, void* a2) { *(void**)((char*)p + 0xa0) = a2; *(void**)((char*)p + 0x6c) = a1; update_cursor_selection__15TWindowHelpItemFPv(p); TWindowHelpItem__sub_80255440(p); }

}
