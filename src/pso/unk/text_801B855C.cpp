#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include "pso/item/TItemData.h"
#include <stddef.h>

struct Stack_801B8A80 {
    M2C_UNK sp8;
    u8 pad_C[0x8];
    s32 sp14;
    u8 trailing_storage[0x4];
};

#include "pso/player/TObjPlayer.h"
struct DeathDropRecord {
    s32 state;
    s32 source_id;
    TItemData item;
};

struct DeathItemPosition { f32 x,y,z; };

struct PlayerDeathItemFields {
    u8 before_position[0x38];
    DeathItemPosition position;
    u8 before_inventory[0xD00-0x44];
    u8* inventory_owner;
};

typedef struct Msg_801B87E4 {
    u8 pad0[2];
    u16 slot;
    s16 a;
    s16 b;
    s32 c;
    u8 d[16];
} Msg_801B87E4;

typedef struct Player_801B87E4 {
    u8 pad0[0xD00];
    void *inv;
} Player_801B87E4;

struct VBase_801B8AF8 { char pad[0x18]; };

struct VObj_801B8AF8 : VBase_801B8AF8 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33();
    virtual s32 m34();
};

struct Item_801B8AF8 {
    u8 data[0xC];
    s32 id;
    u8 data2[4];
};

extern "C" {
s32 init__9TItemDataFv(void *);
s32 count_items_by_id__10TObjPlayerFPvi(int, void *);
s32 TObjPlayer__sub_801B8C10(u8 *arg0, s8 arg1, s8 arg2, s8 arg3);
s32 init_item_data__10TObjPlayerFPvi(void *, void *);
s32 play_effect_default__10TObjPlayerFii(void *, int);
s32 set_action_flag_2__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801BF914(void *);
s32 insert_item_node__10TObjPlayerFiiiii(int, void *, void *, void *, int);
void TObjPlayer__sub_801B8A80(u8 *arg0, s32 arg1);
s32 obj_getPtr2B0_20(TObjPlayer*);
s32 obj_isState3_324(TObjPlayer*);
void* get_item_field_6__10TObjPlayerFPv(TObjPlayer*);
s32 get_field_d8__10TObjPlayerFPv(void*);
s32 is_script_controlled__10TObjPlayerFPv(TObjPlayer*);
s32 check_flag_01000000__10TObjPlayerFPv(TObjPlayer*);
s32 is_technique_ready__8TTecCtrlFv();
void send_6x26_unequip_item__10TObjPlayerFPvPv(TObjPlayer*,s32);
TItemData* TObjPlayer__sub_801C2058(DeathDropRecord*);
void set_field4__10TObjPlayerFPvi(DeathDropRecord*,s32);
void TItemList__sub_801D35FC(u8*,DeathItemPosition*,TObjPlayer*,DeathDropRecord*,s32);
s32 set_globals_and_notify__6TLobbyFPvii(u8*,TObjPlayer*,DeathDropRecord*);
void* init_c2098_return_self__10TObjPlayerFPv(void*);
void __construct_array(void*,void*(*)(void*),void*,u32,u32);
extern DeathItemPosition lbl_8050BF60;
extern const f32 TObjPlayer__data_805DC2BC;
void drop_items_on_death__10TObjPlayerFPv(TObjPlayer* player);
s32 is_volopt_phase_final__10TObjPlayerFv();
Player_801B87E4 *get_player_by_client_id(u16);
void bswap_fields__10TObjPlayerFi(void *);
void TObjPlayer__sub_801C106C(void *, void *);
void init_6x2A__10TObjPlayerFPv(void *);
void update_inventory_item__10TObjPlayerFPviiiii(void *, void *, int, void *, int, int);
s32 validate_6x2A_drop_item(void *);
void handle_6x2A_drop_item(void *arg0);
s8 get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
void copy_to_item_data__5TItemFPvPv(VObj_801B8AF8 *, Item_801B8AF8 *);
void set_stack_count__24TShopEquipmentListWindowFPvc(Item_801B8AF8 *, u8);
s32 play_effect_default__10TObjPlayerFii(void *, int);
s32 set_action_flag_2__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801BF914(void *);
s32 insert_item_node__10TObjPlayerFiiiii(int, void *, void *, void *, int);
s32 check_player_action_allowed();
u32 start_inventory_update__10TObjPlayerFPvi(s32, s32);
VObj_801B8AF8 *get_owner_if_alive__10TObjPlayerFPv();
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
s32 TAdPlayerLoadGC__sub_801E1E38(s32);
void play_sound_effect(s32, s32, s32, s32);
void request_item_drop__10TObjPlayerFPvii(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

s32 try_spend_actor_meseta(s32, s32);
s32 obj_getField1c(s32);
s32 init_owner__5TItemFPvUs(void *, s32);
s32 get_item_type_or_default__9TItemListFPv(void *);
s32 can_pickup_item__10TObjPlayerFPvPv();
int get_item_record__23TShopJudgmentItemWindowFPv(void* p);
int TObjPlayer__sub_801B8DE8(void*);

int try_add_sale_meseta__10TObjPlayerFv(void) { return 0; }
s32 try_buy_item(s32 arg0, void *arg1) {
    if (can_pickup_item__10TObjPlayerFPvPv() == 0) {
        return 1;
    }
    if (try_spend_actor_meseta(arg0, M2C_FIELD(arg1, s32 *, 0x10) * get_item_type_or_default__9TItemListFPv(arg1)) != 0) {
        init_owner__5TItemFPvUs(arg1, obj_getField1c(arg0));
        return 0;
    }
    return 2;
}

typedef char DeathDropRecordSize[(sizeof(DeathDropRecord)==0x1C)?1:-1];
typedef char DeathDropItemOffset[(offsetof(DeathDropRecord,item)==8)?1:-1];
typedef char DeathPlayerInventoryOffset[(offsetof(PlayerDeathItemFields,inventory_owner)==0xD00)?1:-1];
void drop_items_on_death__10TObjPlayerFPv(TObjPlayer* player) {
    DeathDropRecord records[9];
    DeathDropRecord* record;
    s32 count;
    TItemData* item;
    void* equipped;
    PlayerDeathItemFields* fields=(PlayerDeathItemFields*)player;
    if (fields->inventory_owner==NULL || obj_isState3_324(player)!=0 || is_script_controlled__10TObjPlayerFPv(player)!=0) {
        return;
    }
    __construct_array(records,init_c2098_return_self__10TObjPlayerFPv,NULL,sizeof(DeathDropRecord),9);
    count=0;
    if (is_technique_ready__8TTecCtrlFv()!=0) {
        if (check_flag_01000000__10TObjPlayerFPv(player)==0) {
            count=set_globals_and_notify__6TLobbyFPvii(fields->inventory_owner,player,records);
        }
        if (obj_getPtr2B0_20(player)!=0) {
            record=&records[count];
            set_field4__10TObjPlayerFPvi(record,-1);
            item=TObjPlayer__sub_801C2058(record);
            init_item_data__10TObjPlayerFPvi(item,(void*)obj_getPtr2B0_20(player));
            count+=1;
            item->id=-1;
        }
    } else if (check_flag_01000000__10TObjPlayerFPv(player)==0) {
        count=set_globals_and_notify__6TLobbyFPvii(fields->inventory_owner,player,records);
    } else {
        equipped=get_item_field_6__10TObjPlayerFPv(player);
        if (equipped!=NULL) {
            send_6x26_unequip_item__10TObjPlayerFPvPv(player,get_field_d8__10TObjPlayerFPv(equipped));
        }
    }
    if (count>0) {
        lbl_8050BF60.x=fields->position.x;
        lbl_8050BF60.y=TObjPlayer__data_805DC2BC+fields->position.y;
        lbl_8050BF60.z=fields->position.z;
        TItemList__sub_801D35FC(fields->inventory_owner+0x20,&lbl_8050BF60,player,records,count);
        set_action_flag_2__10TObjPlayerFPv(player);
    }
}

void handle_6x2A_drop_item(void *arg0) {
    Msg_801B87E4 m;
    Player_801B87E4 *p;
    init_6x2A__10TObjPlayerFPv(&m);
    TObjPlayer__sub_801C106C(&m, arg0);
    bswap_fields__10TObjPlayerFi(&m);
    if (validate_6x2A_drop_item(&m) != 0) {
        p = get_player_by_client_id(m.slot);
        if ((p != NULL) && (is_volopt_phase_final__10TObjPlayerFv() == 0)) {
            update_inventory_item__10TObjPlayerFPviiiii(p->inv, p, m.c, m.d, m.a, m.b);
        }
    }
}

void TObjPlayer__sub_801B8A80(u8 *arg0, s32 arg1) {
    typedef char sp8_offset[(offsetof(Stack_801B8A80, sp8) == 0x0) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_801B8A80, sp14) == 0xC) ? 1 : -1];
    Stack_801B8A80 stack;
    if (arg1 > 0) {
        play_effect_default__10TObjPlayerFii((void *) (arg0), (int) (0x384));
        set_action_flag_2__10TObjPlayerFPv((void *) (arg0));
        init_item_data__10TObjPlayerFPvi((void *) (&stack.sp8), (void *) (arg1));
        stack.sp14 = -1;
        insert_item_node__10TObjPlayerFiiiii((int) (M2C_FIELD(arg0, s32 *, 0xD00) + 0x20), (void *) (TObjPlayer__sub_801BF914((void *) (arg0 + 0x84C))), (void *) (arg0), (void *) (&stack.sp8), (int) (-1));
    }
}

void request_item_drop__10TObjPlayerFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    Item_801B8AF8 item;
    VObj_801B8AF8 *owner;
    s32 id;
    if (check_player_action_allowed() != 0 &&
        (TAdPlayerLoadGC__sub_801E1B50(get_chr_select_state__23TAdSinglePlyChrSelectGCFv()) != 0 ||
         TAdPlayerLoadGC__sub_801E1E38(get_chr_select_state__23TAdSinglePlyChrSelectGCFv()) != 1)) {
        play_sound_effect(0x53F06, 0, 0, 0);
        return;
    }
    if (start_inventory_update__10TObjPlayerFPvi(*(s32 *)(arg0 + 0xD00), arg1) == 0) {
        return;
    }
    owner = get_owner_if_alive__10TObjPlayerFPv();
    if (owner == NULL) {
        return;
    }
    play_effect_default__10TObjPlayerFii(arg0, 0x384);
    set_action_flag_2__10TObjPlayerFPv(arg0);
    copy_to_item_data__5TItemFPvPv(owner, &item);
    set_stack_count__24TShopEquipmentListWindowFPvc(&item, arg2);
    id = item.id;
    if (owner->m34() - arg2 > 0) {
        item.id = -1;
    }
    insert_item_node__10TObjPlayerFiiiii(*(s32 *)(arg0 + 0xD00) + 0x20, (void *)TObjPlayer__sub_801BF914(arg0 + 0x84C), arg0, &item, id);
}

s32 TObjPlayer__sub_801B8C10(u8 *arg0, s8 arg1, s8 arg2, s8 arg3) {
    TItemData item_data;
    if ((u32) M2C_FIELD(arg0, u32 *, 0xD00) == 0U) {
        return 0;
    }
    init__9TItemDataFv((void *) (&item_data.data1.data_u8[0]));
    item_data.data1.data_u8[0] = arg1;
    item_data.data1.data_u8[1] = arg2;
    item_data.data1.data_u8[2] = arg3;
    return count_items_by_id__10TObjPlayerFPvi((int) (M2C_FIELD(arg0, u32 *, 0xD00)), (void *) (&item_data.data1.data_u8[0]));
}

}
