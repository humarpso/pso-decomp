#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Entry_802D20C8 { u32 id; s32 count; };

struct ItemA_802D20C8 { u8 b[0x14]; };

struct ItemB_802D20C8 { u8 b[0x1C]; };

struct VBase802D1F30 { char pad[0x18]; };

struct VObj802D1F30 : VBase802D1F30 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual M2C_UNK m34();
};

extern "C" {
s32 copy_and_register_item_data__11TItemObjectFPv(u32);
u32 TLobby__sub_80101AB0();
M2C_UNK copy_to_item_data__5TItemFPvPv(void *, void *);
s32 TObjPlayer__sub_801049C8(void *, void *);
s32 TObjPlayer__sub_801C1AC8();
void *get_trade_obj_ptr__6TLobbyFPv(s32);
Entry_802D20C8 *TLobby__sub_802D230C(void *);
s32 TLobby__sub_802D20C8(Entry_802D20C8 *arg0, u32 arg1, s32 arg2);
u8 *get_quest_id__12TQuestListVMFPv(void *);
u32 TLobby__sub_80101AB0();
u8 *get_player_by_client_id(s32);
s32 run_and_get_result__10TObjPlayerFPvi(int, void *);
void update_both_halves__6TLobbyFPv(void* p);
void *get_trade_obj_ptr__6TLobbyFPv(s32);
void TLobby__sub_802D1F30(s32 arg0, s32 arg1);
}

extern "C" {

void clear_stale_entries__6TLobbyFPv(u8 *arg0);
void set_trade_field_4__6TLobbyFii(s32 arg0, s32 arg1);
void update_both_halves__6TLobbyFPv(void* p);
u32 TLobby__sub_80101AB0();
int TLobby__sub_802D2358(void*);
void *get_trade_obj_ptr__6TLobbyFPv(s32);

void set_trade_field_4__6TLobbyFii(s32 arg0, s32 arg1) {
    M2C_FIELD(get_trade_obj_ptr__6TLobbyFPv(arg0 + 0xF8), s32 *, 4) = arg1;
}

void TLobby__sub_802D1F30(s32 arg0, s32 arg1) {
    s32 ids[0x1E];
    s32 temp_r29;
    s32 var_r31;
    u8 *temp_r31;
    u8 *temp_r3;
    s32 var_r26;
    u8 *temp_r3_2;
    u8 *temp_r3_3;
    u8 *var_r25;
    update_both_halves__6TLobbyFPv((void *) arg0);
    temp_r3 = get_player_by_client_id(arg1);
    if (temp_r3 != NULL) {
        temp_r29 = run_and_get_result__10TObjPlayerFPvi((int) (M2C_FIELD(temp_r3, s32 *, 0xD00)), (void *) ids);
        var_r25 = (unsigned char *) (arg0 + 0xF8);
        var_r26 = 0;
        while (var_r26 < temp_r29) {
            temp_r3_2 = ((u8 *(*)(s32)) TLobby__sub_80101AB0)(ids[var_r26]);
            if (temp_r3_2 != NULL) {
                M2C_FIELD(var_r25, s32 *, 0) = ids[var_r26];
                M2C_FIELD(var_r25, s32 *, 4) = ((VObj802D1F30 *)temp_r3_2)->m34();
                if ((s32) M2C_FIELD(var_r25, s32 *, 4) <= 0) {
                    M2C_FIELD(var_r25, s32 *, 4) = 1;
                }
                var_r25 += 8;
            }
            var_r26 += 1;
        }
        temp_r31 = (u8 *) get_trade_obj_ptr__6TLobbyFPv(arg0 + 0xF8);
        temp_r3_3 = get_quest_id__12TQuestListVMFPv(temp_r3);
        M2C_FIELD(temp_r31, s32 *, 0) = -0xFF;
        if (temp_r3_3 != NULL) {
            M2C_FIELD(temp_r31, s32 *, 4) = (s32) M2C_FIELD(temp_r3_3, s32 *, 0x20);
            return;
        }
        M2C_FIELD(temp_r31, s32 *, 4) = 0;
    }
}

void update_both_halves__6TLobbyFPv(void* p) { TLobby__sub_802D2358(p); TLobby__sub_802D2358((char*)p + 0xf8); }

void clear_stale_entries__6TLobbyFPv(u8 *arg0) {
    u8 *var_r29;
    s32 var_r28;

    var_r29 = arg0;
    var_r28 = 0;
    do {
        if (((u32) (M2C_FIELD(var_r29, s32 *, 0) + 0x10000) != 0xFFFFU) && ((TLobby__sub_80101AB0() == 0U) || ((s32) M2C_FIELD(var_r29, s32 *, 4) <= 0))) {
            M2C_FIELD(var_r29, s32 *, 0) = -1;
            M2C_FIELD(var_r29, s32 *, 4) = 0;
        }
        var_r28 += 1;
        var_r29 += 8;
    } while (var_r28 < 0x1E);
}
s32 TLobby__sub_802D20C8(Entry_802D20C8 *arg0, u32 arg1, s32 arg2) {
    ItemB_802D20C8 a;
    ItemA_802D20C8 b;
    u32 item;
    Entry_802D20C8 *e;
    u32 found;
    s32 i;
    if (arg1 == 0xFFFFFF01) {
        s32 *t = (s32 *) get_trade_obj_ptr__6TLobbyFPv((s32) arg0);
        t[1] += arg2;
        return t[1] > 999999;
    }
    item = ((u32 (*)(u32)) TLobby__sub_80101AB0)(arg1);
    if (item == 0) {
        return 0;
    }
    if (TObjPlayer__sub_801C1AC8() != 0) {
        copy_to_item_data__5TItemFPvPv((void *) item, &a);
        e = arg0;
        for (i = 0; i < 30; i++, e++) {
            if (e->id != 0xFFFFFFFF && e->id != 0xFFFFFF01) {
                found = ((u32 (*)(u32)) TLobby__sub_80101AB0)(e->id);
                if (found != 0) {
                    copy_to_item_data__5TItemFPvPv((void *) found, &b);
                    if (TObjPlayer__sub_801049C8(&b, &a) != 0) {
                        e->count += arg2;
                        if (e->count > copy_and_register_item_data__11TItemObjectFPv(found)) {
                            return 2;
                        }
                    }
                }
            }
        }
    }
    e = TLobby__sub_802D230C(arg0);
    if (e == NULL) {
        return 3;
    }
    e->id = arg1;
    e->count = arg2;
    return 0;
}

}
