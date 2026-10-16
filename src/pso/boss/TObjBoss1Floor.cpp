#include "types.h"
#include "pso/boss/TObjBoss1MokoHill_Solo.h"
#include "pso/object/TObjFish.h"

extern "C" {

void TObjBoss1Floor__sub_8002CB40(void);
void TObjBoss1Floor__sub_8002CB78(void);
void create_instance__14TObjBoss1FloorFv(void);
void render__22TObjBoss1MokoHill_SoloFv(u8 *arg0);
s32 update_dragon_trail_uvs(void *);
s32 TObjBoss1Floor__ct(void*, s32);
s32 draw_chunk_object(void *);
s32 translate_matrix(int, f32, f32, f32);
s32 push_matrix();
s32 pop_matrix();
void* __nw__7TObjectFUl(s32);
s32 set_chunk_material_override_pair(int, int, void *, void *);

void TObjBoss1Floor__sub_8002CB40(void) {  }

extern s32 tl_02;

void create_instance__14TObjBoss1FloorFv(void) {
    void* obj = __nw__7TObjectFUl(0x38);
    if (obj != 0) {
        TObjBoss1Floor__ct(obj, tl_02);
    }
}

void TObjBoss1Floor__sub_8002CB78(void) {  }

extern u8 *lbl_805D4B50;
extern s32 dragon_common_texture_list;
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 chunk_polygon_flags_or_mask;
extern s32 chunk_polygon_flags_and_mask;
extern s32 model_render_flags;

void TObjBoss1MokoHill_Solo::render() {
    u8 *arg0 = (u8 *)this;
    TObjFish::set_global_param((s32)((void *) (dragon_common_texture_list)));
    update_dragon_trail_uvs((void *) (arg0 + 0x28));
    push_matrix();
    translate_matrix((int) (0), (f32) (this->m_28), (f32) (*(f32 *)((s8 *)arg0 + 0x34)), (f32) (this->m_30));
    if ((s32) this->m_48 != 0) {
        lbl_805D5660 = model_render_flags;
        lbl_805D5664 = chunk_polygon_flags_and_mask;
        lbl_805D5668 = chunk_polygon_flags_or_mask;
        model_render_flags |= 0x800;
        set_chunk_material_override_pair((int) (0xFF00), (int) (0x100), (void *) (chunk_polygon_flags_or_mask), (void *) (chunk_polygon_flags_and_mask));
        draw_chunk_object((void *) (*(s32 *)((s8 *)(*(void **)((s8 *)lbl_805D4B50 + 0x42C)) + 0x38)));
        chunk_polygon_flags_and_mask = lbl_805D5664;
        chunk_polygon_flags_or_mask = lbl_805D5668;
        model_render_flags = lbl_805D5660;
    } else {
        draw_chunk_object((void *) (*(s32 *)((s8 *)(*(void **)((s8 *)lbl_805D4B50 + 0x42C)) + 0x38)));
    }
    pop_matrix();
}

}
