#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
#define VA virtual void CAT(f,__LINE__)();
struct Base_8021EEEC_8021EEE4 { char pad[0x18]; };
struct VObj_8021EEEC_8021EEE4 : Base_8021EEEC_8021EEE4 {
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
    virtual s32 m14();
};

struct ShopPlayerHeader { char taskHeader[0x18]; };

struct ShopPlayerLevel : ShopPlayerHeader {
    virtual void reserved0();
    virtual void reserved1();
    virtual void reserved2();
    virtual void reserved3();
    virtual void reserved4();
    virtual void reserved5();
    virtual void reserved6();
    virtual void reserved7();
    virtual void reserved8();
    virtual void reserved9();
    virtual void reserved10();
    virtual void reserved11();
    virtual void reserved12();
    virtual void reserved13();
    virtual s32 levelIndex();
};

extern "C" {
s32 get_task_id__14TFontSmallTaskFPv(M2C_UNK *);
void *get_player_by_client_id(s32);
M2C_UNK clear_shop_armor_flags();
M2C_UNK clear_shop_tool_flags();
M2C_UNK clear_shop_weapon_flags();
extern M2C_UNK TLobby__data_805011D8[];
extern s32 lbl_805D53A0;
extern s32 game_difficulty_selection;
extern s32 lbl_805D6238;
extern s32 shop_world_player_level;
extern s32 shop_difficulty_tier;
extern s32 lbl_805D6244;
void init_shop_world_context(void);
}

extern "C" {

void calc_item_count__18TShopGetItemWindowFPvPv(void *arg0, s32 *arg1);
s16 get_cursor_index__18TShopGetItemWindowFPv(void* p);
void *get_player_by_client_id(s32);
s32 is_not_split_screen__13TRaderMapCoreFv();

s16 get_cursor_index__18TShopGetItemWindowFPv(void* p) { return *(s16*)((char*)p + 0x74); }

extern s32 lbl_805D53A0;

void calc_item_count__18TShopGetItemWindowFPvPv(void *arg0, s32 *arg1) {
    s32 var_r31;
    void *temp_r3;

    var_r31 = 1;
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        var_r31 = ((VObj_8021EEEC_8021EEE4 *)arg0)->m14() + 1;
    } else {
        temp_r3 = get_player_by_client_id(lbl_805D53A0);
        if (temp_r3 != NULL) {
            var_r31 = ((VObj_8021EEEC_8021EEE4 *)temp_r3)->m14() + 1;
        }
    }
    if (var_r31 < 1) {
        var_r31 = 1;
    }
    if (var_r31 > 0xC7) {
        var_r31 = 0xC7;
    }
    *arg1 = var_r31;
}
#pragma push
#pragma opt_dead_code off
void init_shop_world_context(void) {
    s32 temp_r3_2;
    s32 temp_r3_3;
    void *temp_r3;
    temp_r3 = get_player_by_client_id(lbl_805D53A0);
    if (temp_r3 != NULL) {
        shop_world_player_level = ((ShopPlayerLevel*)temp_r3)->levelIndex();
        shop_world_player_level++;
    } else {
        shop_world_player_level = 1;
    }
    if ((s32) shop_world_player_level < 1) {
        shop_world_player_level = 1;
    }
    if ((s32) shop_world_player_level > 0xC7) {
        shop_world_player_level = 0xC7;
    }
    temp_r3_3 = get_task_id__14TFontSmallTaskFPv(TLobby__data_805011D8);
    lbl_805D6238 = temp_r3_3;
    if (temp_r3_3 < 0) {
        lbl_805D6238 = 0;
    }
    if ((s32) lbl_805D6238 > 9) {
        lbl_805D6238 = 9;
    }
    shop_difficulty_tier = game_difficulty_selection;
    if ((s32) game_difficulty_selection < 0) {
        shop_difficulty_tier = 0;
    }
    if ((s32) shop_difficulty_tier > 3) {
        shop_difficulty_tier = 3;
    }
    clear_shop_weapon_flags();
    clear_shop_armor_flags();
    clear_shop_tool_flags();
    lbl_805D6244 = 0;
}
#pragma pop

}
