#include "types.h"
#include "pso/item/EquippedItemDrawQueue.h"
#include "pso/item/TItem.h"

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
extern u32 model_render_flags, chunk_polygon_flags_and_mask, chunk_polygon_flags_or_mask;
extern u32 lbl_805D5660, lbl_805D5664, lbl_805D5668;
extern Color saved_model_draw_color, model_material_color;
extern EquippedItemDrawQueue *player_item_id_list;
void render_equipped_item_queue();
}

extern "C" {

int push_to_list__10TObjPlayerFPvi(void*, void*);

    extern EquippedItemDrawQueue *player_item_id_list;
void TItem::push_to_player_list(void* a0) { push_to_list__10TObjPlayerFPvi((void*)(player_item_id_list), a0); }
void render_equipped_item_queue() {
    reset_transform_state__10TObjPlayerFv();
    lbl_805D5660 = model_render_flags;
    lbl_805D5664 = chunk_polygon_flags_and_mask;
    lbl_805D5668 = chunk_polygon_flags_or_mask;
    copy_vec4__13TRaderMapCoreFPvPv(&saved_model_draw_color, &model_material_color);
    u32 *id = player_item_id_list->item_ids;
    s32 remaining = player_item_id_list->count;
    while (remaining != 0) {
        DrawTarget *item = query_game_join_id__10TObjPlayerFv(*id++);
        if (item) {
            item->render();
            reset_transform_state__10TObjPlayerFv();
            copy_vec4__13TRaderMapCoreFPvPv(&model_material_color, &saved_model_draw_color);
            chunk_polygon_flags_and_mask = lbl_805D5664;
            chunk_polygon_flags_or_mask = lbl_805D5668;
            model_render_flags = lbl_805D5660;
        }
        --remaining;
    }
}

}
