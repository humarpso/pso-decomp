#include "types.h"
#include "pso/misc/TScene.h"

struct Pt_80327B40 { s16 x, y; };

struct Mesh_80327B40 { u16 pad0; u16 n; u8 pad4[4]; Pt_80327B40 *pts; };

struct Entry_80327B40 { Mesh_80327B40 *mesh; Pt_80327B40 *src; };

struct Scene_80327B40 { u8 pad0[4]; s32 count; Entry_80327B40 *entries; };

extern "C" {
void DCFlushRangeNoSync(void *, u32);
}

extern "C" {

s32 __dl__FPv(void *);
s32 mem_alloc(s32);
s32 visit_matching_models(void *, s32, s32);
s32 visit_model_tree_recursive();
s32 mem_free(void *);

void TScene::offset_position(s32 arg1, s32 arg2) {
    *(s16 *)((s8 *)this + 0x10) = (s16) (*(s16 *)((s8 *)this + 0x10) + arg1);
    *(s16 *)((s8 *)this + 0x12) = (s16) (*(s16 *)((s8 *)this + 0x12) + arg2);
    apply_uv_offset((s16)(*(s16 *)((s8 *)this + 0x10)), (s16)(*(s16 *)((s8 *)this + 0x12)));
}

void TScene::apply_uv_offset(s16 arg1, s16 arg2) {
    Scene_80327B40 *scene = (Scene_80327B40 *)this;
    s16 dx = arg1 % 256;
    s16 dy = arg2 % 256;
    s32 i;
    for (i = 0; i < scene->count; i++) {
        Mesh_80327B40 *m = scene->entries[i].mesh;
        Pt_80327B40 *src = scene->entries[i].src;
        Pt_80327B40 *dst = m->pts;
        s32 j;
        for (j = 0; j < m->n; j++) {
            dst->x = src->x + dx;
            dst->y = src->y + dy;
            src++;
            dst++;
        }
        DCFlushRangeNoSync(m->pts, m->n * 4);
    }
}

void *TScene::destroy_buffers(s16 arg1) {
    if (this != NULL) {
        if ((u32) *(u32 *)((s8 *)this + 0xC) != 0U) {
            mem_free(*(void **)((s8 *)this + 0xC));
            *(u32 *)((s8 *)this + 0xC) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)this + 8) != 0U) {
            mem_free(*(void **)((s8 *)this + 8));
            *(u32 *)((s8 *)this + 8) = 0U;
        }
        if (arg1 > 0) {
            __dl__FPv(this);
        }
    }
    return this;
}

extern s32 scroll_uv_entry_write_cursor;
extern s32 scroll_uv_coordinate_write_cursor;

void *TScene::init_buffers(s32 arg1, s32 arg2) {
    s32 temp_r0;

    *(s32 *)((s8 *)this + 4) = 0;
    *(s32 *)((s8 *)this + 0) = 0;
    visit_model_tree_recursive();
    *(s32 *)((s8 *)this + 8) = 0;
    *(s32 *)((s8 *)this + 0xC) = 0;
    temp_r0 = *(s32 *)((s8 *)this + 4);
    if (temp_r0 > 0) {
        *(s32 *)((s8 *)this + 8) = mem_alloc(temp_r0 * 8);
        *(s32 *)((s8 *)this + 0xC) = mem_alloc(*(s32 *)((s8 *)this + 0) * 4);
        scroll_uv_entry_write_cursor = *(s32 *)((s8 *)this + 8);
        scroll_uv_coordinate_write_cursor = *(s32 *)((s8 *)this + 0xC);
        visit_matching_models(this, arg1, arg2);
    }
    *(s16 *)((s8 *)this + 0x10) = 0;
    *(s16 *)((s8 *)this + 0x12) = 0;
    return this;
}

}
