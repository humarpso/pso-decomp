#include "types.h"
#include "pso/system/memory.h"
#include "pso/player/TObjPlayer.h"
#include "pso/item/TItem.h"
#include "pso/item/TItemProShield.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

typedef struct Rec_801D40D4 {
    u8 pad0[4];
    s32 flags;
    u8 type;
    u8 pad9[0x1C - 9];
} Rec_801D40D4;

typedef struct Ent_801D41B4 {
    u8 pad0[8];
    u8 sub[0xC];
    s32 id;
    u8 pad18[4];
} Ent_801D41B4;

typedef struct Ent_801D4744 {
    u32 key;
    u32 val;
} Ent_801D4744;

typedef struct List_801D4744 {
    s32 count;
    Ent_801D4744 *items;
} List_801D4744;

extern "C" {
u8 get_field_ec__5TItemFv(void *, int);
s32 is_item_equipped(void *, int);
void TObjPlayer__sub_801D45B0(s32 *arg0, s32 arg1);
s8 TObjPlayer__sub_80102C30(void *);
s32 export_inventory_entry__10TObjPlayerFiPv(s32 arg0, u8 *arg1);
s32 start_inventory_update__10TObjPlayerFi(void *, void *);
s32 set_field_1c__10TObjPlayerFl(int, int);
s32 TObjPlayer__sub_801D47EC(s32 arg0, s32 arg1, s32 arg2);
u8 *get_ptr_4__10TObjPlayerFv();
s32 get_char_index__23TAdSinglePlyChrSelectGCFUi(int);
s32 fn_801D4270(s32 arg0);
void mem_free(int);
u8 *TObjPlayer__sub_801D4678(u8 *arg0, s16 arg1);
void *mem_alloc(void *);
s32 __construct_new_array(void *, void *, int, int, int);
void TObjPlayer__sub_801D4730(void* p);
u8 *TObjPlayer__sub_801D46D4(u8 *arg0, s32 arg1);
void fn_801C1BA8(void *, void *);
s32 fn_801D40D4(s32 arg0, Rec_801D40D4 *arg1, u8 *arg2);
int reset(void* p);
s32 is_both_confirmed__23TAdSinglePlyChrSelectGCFv(void *);
void memcpy(void *, void *, s32);
void remove_list_entry_by_id(s32 arg0);
void TObjPlayer__sub_801D47D8(void* p, void* q);
s32 check_player_action_allowed(void);
s32 is_quest_active();
s32 get_game_play_mode();
s32 get_main_phase();
s32 is_technique_ready__8TTecCtrlFv();
int memset(void*, int, int);

s32 fn_801D40D4(s32 arg0, Rec_801D40D4 *arg1, u8 *arg2) {
    s32 i;
    for (i = 0; i < arg0; i++) {
        if (arg1->flags & 8) {
            if (arg1->type == 0) {
                fn_801C1BA8(arg2, arg1);
            }
            if (arg1->type == 2) {
                fn_801C1BA8(arg2 + 0x1C, arg1);
            }
        }
        arg1++;
    }
    return 1;
}

s32 check_player_action_allowed(void) {
    if ((get_main_phase() == 0xE) || (is_technique_ready__8TTecCtrlFv() != 0) || ((is_quest_active() == 1) && (get_game_play_mode() == 1))) {
        return 0;
    }
    return TAdSinglePlyChrSelectGC::get_game_mode();
}

void remove_list_entry_by_id(s32 arg0) {
    u8 *cnt;
    s32 i;
    s32 n;
    Ent_801D41B4 *p;
    s32 rem;
    cnt = ((u8 *)get_char_index__23TAdSinglePlyChrSelectGCFUi((int)(0xFFFF)));
    if (cnt != NULL) {
        p = ((Ent_801D41B4 *)get_ptr_4__10TObjPlayerFv());
        n = *cnt;
        for (i = 0; i < n; p++, i++) {
            if (p->id == arg0) {
                if (is_both_confirmed__23TAdSinglePlyChrSelectGCFv(p->sub) != 0) {
                    TAdSinglePlyChrSelectGC::remove_matching_entries((s32)cnt);
                }
                rem = n - i;
                *cnt -= 1;
                if (rem <= 0) {
                    reset((void*)(p));
                    return;
                }
                memcpy(p, p + 1, rem * 0x1C);
                return;
            }
        }
    }
}

s32 fn_801D4270(s32 arg0) {
    s32 i;
    u8 *p;
    if ((u32)get_char_index__23TAdSinglePlyChrSelectGCFUi(0xFFFF) == 0) {
        return 0;
    }
    p = get_ptr_4__10TObjPlayerFv();
    for (i = 0; i < 30; i++, p += 0x1C) {
        if (*(s32 *)(p + 0x14) == arg0) {
            return 1;
        }
    }
    return 0;
}

int reset(void* p) { return memset(p, 0, 28); }

s32 export_inventory_entry__10TObjPlayerFiPv(s32 arg0, u8 *arg1) {
    if (((TItem *)arg0)->copy_to_item_data((void *) (arg1 + 8)) != 0) {
        *(s8 *)((s8 *)arg1 + 0) = TObjPlayer__sub_80102C30((void *) (arg0));
        *(s32 *)((s8 *)arg1 + 4) = ((TItem *)arg0)->get_item_flags();
        return 1;
    }
    return 0;
}

void TObjPlayer__sub_801D45B0(s32 *arg0, s32 arg1) {
    s32 temp_r4;
    u8 temp_r3;
    *arg0 = 0;
    temp_r4 = get_field_ec__5TItemFv((void *) (arg1), (int) (arg1)) << 0x19;
    *arg0 |= temp_r4;
    if (get_field_ec__5TItemFv((void *) (arg1), (int) (temp_r4)) == 1) {
        *arg0 |= (((TItem *)arg1)->get_field_ed() << 0x11) & 0x01FE0000;
    } else {
        *arg0 |= (((TItem *)arg1)->get_field_ed() << 8) & 0xFF00;
    }
    temp_r3 = ((TItemProShield *)arg1)->get_slot_count();
    *arg0 |= temp_r3;
    if (is_item_equipped((void *) (arg1), (int) (temp_r3)) == 0) {
        *arg0 |= 0x10000;
    }
}

u8 *TObjPlayer__sub_801D4678(u8 *arg0, s16 arg1) {
    u8 *q;
    if (arg0 != NULL) {
        q = *(u8 **)(arg0 + 4);
        if (q != NULL) {
            if (q != NULL) {
                mem_free((int)(q - 0x10));
            }
        }
        if (arg1 > 0) {
            ::operator delete(arg0);
        }
    }
    return arg0;
}

u8 *TObjPlayer__sub_801D46D4(u8 *arg0, s32 arg1) {
    s32 n;
    *(s32 *)arg0 = arg1;
    n = *(s32 *)arg0;
    *(s32 *)(arg0 + 4) = __construct_new_array(mem_alloc((void *)(n * 8 + 0x10)), TObjPlayer__sub_801D4730, 0, 8, n);
    return arg0;
}

void TObjPlayer__sub_801D4730(void* p) { *(s32*)((char*)p + 0x0) = -1; *(s32*)((char*)p + 0x4) = 0; }

void TObjPlayer::sort_by_key() {
    List_801D4744 *arg0 = (List_801D4744 *)this;
    Ent_801D4744 t;
    s32 n;
    s32 j;
    Ent_801D4744 *p;
    Ent_801D4744 *q;
    TObjPlayer__sub_801D4730((void*)(&t));
    n = arg0->count;
    while (--n > 0) {
        p = arg0->items;
        for (j = 0; j < n; p++, j++) {
            q = p + 1;
            if (p->key > q->key) {
                TObjPlayer__sub_801D47D8((void*)(&t), (void*)(p));
                TObjPlayer__sub_801D47D8((void*)(p), (void*)(q));
                TObjPlayer__sub_801D47D8((void*)(q), (void*)(&t));
            }
        }
    }
}

void TObjPlayer__sub_801D47D8(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); }
s32 TObjPlayer__sub_801D47EC(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r3_4;
    temp_r3 = start_inventory_update__10TObjPlayerFi((void *) (arg0), (void *) (arg1));
    if (temp_r3 == 0) {
        return 0;
    }
    temp_r3_2 = start_inventory_update__10TObjPlayerFi((void *) (arg0), (void *) (arg2));
    if (temp_r3_2 == 0) {
        return 0;
    }
    temp_r3_3 = ((TObjPlayer *)temp_r3)->get_owner_if_alive();
    if (temp_r3_3 == 0) {
        return 0;
    }
    temp_r3_4 = ((TObjPlayer *)temp_r3_2)->get_owner_if_alive();
    if (temp_r3_4 == 0) {
        return 0;
    }
    set_field_1c__10TObjPlayerFl((int) (temp_r3), (int) (temp_r3_4));
    set_field_1c__10TObjPlayerFl((int) (temp_r3_2), (int) (temp_r3_3));
    return 1;
}

}
