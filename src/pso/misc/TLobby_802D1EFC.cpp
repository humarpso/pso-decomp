#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Entry_802D20C8 { u32 id; s32 count; };

struct ItemA_802D20C8 { u8 b[0x14]; };

struct ItemB_802D20C8 { u8 b[0x1C]; };

extern "C" {
s32 copy_and_register_item_data__11TItemObjectFPv(u32);
u32 TLobby__sub_80101AB0();
M2C_UNK copy_to_item_data__5TItemFPvPv(void *, void *);
s32 TObjPlayer__sub_801049C8(void *, void *);
s32 TObjPlayer__sub_801C1AC8();
void *get_trade_obj_ptr__6TLobbyFPv(s32);
Entry_802D20C8 *TLobby__sub_802D230C(void *);
s32 TLobby__sub_802D20C8(Entry_802D20C8 *arg0, u32 arg1, s32 arg2);
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
