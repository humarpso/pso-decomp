#include "types.h"
#include "pso/item/EquippedItemDrawQueue.h"

struct DrawPrefix { u8 prefix[0x18]; };

struct DrawTarget : DrawPrefix {
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
    virtual void reserved14();
    virtual void reserved15();
    virtual void reserved16();
    virtual void reserved17();
    virtual void reserved18();
    virtual void reserved19();
    virtual void reserved20();
    virtual void reserved21();
    virtual void reserved22();
    virtual void reserved23();
    virtual void render();
};

struct Color { f32 a, r, g, b; };

extern "C" {
void reset_transform_state__10TObjPlayerFv();
void copy_vec4__13TRaderMapCoreFPvPv(Color *, const Color *);
DrawTarget *query_game_join_id__10TObjPlayerFv(u32);
extern u32 some_id_805c6f74, lbl_805D7784, lbl_805D7780;
extern u32 lbl_805D5660, lbl_805D5664, lbl_805D5668;
extern Color saved_model_draw_color, lbl_8058D4C0;
extern EquippedItemDrawQueue *player_item_id_list;
void render_equipped_item_queue();
}

extern "C" {

void push_to_player_list__5TItemFPv(void* a0);
int push_to_list__10TObjPlayerFPvi(void*, void*);

    extern EquippedItemDrawQueue *player_item_id_list;
void push_to_player_list__5TItemFPv(void* a0) { push_to_list__10TObjPlayerFPvi((void*)(player_item_id_list), a0); }
void render_equipped_item_queue() {
    reset_transform_state__10TObjPlayerFv();
    lbl_805D5660 = some_id_805c6f74;
    lbl_805D5664 = lbl_805D7784;
    lbl_805D5668 = lbl_805D7780;
    copy_vec4__13TRaderMapCoreFPvPv(&saved_model_draw_color, &lbl_8058D4C0);
    u32 *id = player_item_id_list->item_ids;
    s32 remaining = player_item_id_list->count;
    while (remaining != 0) {
        DrawTarget *item = query_game_join_id__10TObjPlayerFv(*id++);
        if (item) {
            item->render();
            reset_transform_state__10TObjPlayerFv();
            copy_vec4__13TRaderMapCoreFPvPv(&lbl_8058D4C0, &saved_model_draw_color);
            lbl_805D7784 = lbl_805D5664;
            lbl_805D7780 = lbl_805D5668;
            some_id_805c6f74 = lbl_805D5660;
        }
        --remaining;
    }
}

}
