#include "types.h"

struct Pt_80327B40 { s16 x, y; };

struct Mesh_80327B40 { u16 pad0; u16 n; u8 pad4[4]; Pt_80327B40 *pts; };

struct Entry_80327B40 { Mesh_80327B40 *mesh; Pt_80327B40 *src; };

struct Scene_80327B40 { u8 pad0[4]; s32 count; Entry_80327B40 *entries; };

extern "C" {
void DCFlushRangeNoSync(void *, u32);
void apply_uv_offset__6TSceneFPvss(void *arg0, s16 arg1, s16 arg2);
}

extern "C" {

void *destroy_buffers__6TSceneFPvs(void *arg0, s16 arg1);
void *init_buffers__6TSceneFPvii(void *arg0, s32 arg1, s32 arg2);
void offset_position__6TSceneFPvii(void *arg0, s32 arg1, s32 arg2);
s32 __dl__FPv(void *);
s32 alloc_buffer__11TOBoss4RockFPv(s32);
s32 visit_matching_models(void *, s32, s32);
s32 visit_model_tree_recursive();
s32 free__11TOBoss4RockFUi(void *);

void offset_position__6TSceneFPvii(void *arg0, s32 arg1, s32 arg2) {
    *(s16 *)((s8 *)arg0 + 0x10) = (s16) (*(s16 *)((s8 *)arg0 + 0x10) + arg1);
    *(s16 *)((s8 *)arg0 + 0x12) = (s16) (*(s16 *)((s8 *)arg0 + 0x12) + arg2);
    apply_uv_offset__6TSceneFPvss((void *)(arg0), (s16)(*(s16 *)((s8 *)arg0 + 0x10)), (s16)(*(s16 *)((s8 *)arg0 + 0x12)));
}

void apply_uv_offset__6TSceneFPvss(void *arg0, s16 arg1, s16 arg2) {
    Scene_80327B40 *scene = (Scene_80327B40 *)arg0;
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

void *destroy_buffers__6TSceneFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if ((u32) *(u32 *)((s8 *)arg0 + 0xC) != 0U) {
            free__11TOBoss4RockFUi(*(void **)((s8 *)arg0 + 0xC));
            *(u32 *)((s8 *)arg0 + 0xC) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 8) != 0U) {
            free__11TOBoss4RockFUi(*(void **)((s8 *)arg0 + 8));
            *(u32 *)((s8 *)arg0 + 8) = 0U;
        }
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

extern s32 scroll_uv_entry_write_cursor;
extern s32 scroll_uv_coordinate_write_cursor;

void *init_buffers__6TSceneFPvii(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;

    *(s32 *)((s8 *)arg0 + 4) = 0;
    *(s32 *)((s8 *)arg0 + 0) = 0;
    visit_model_tree_recursive();
    *(s32 *)((s8 *)arg0 + 8) = 0;
    *(s32 *)((s8 *)arg0 + 0xC) = 0;
    temp_r0 = *(s32 *)((s8 *)arg0 + 4);
    if (temp_r0 > 0) {
        *(s32 *)((s8 *)arg0 + 8) = alloc_buffer__11TOBoss4RockFPv(temp_r0 * 8);
        *(s32 *)((s8 *)arg0 + 0xC) = alloc_buffer__11TOBoss4RockFPv(*(s32 *)((s8 *)arg0 + 0) * 4);
        scroll_uv_entry_write_cursor = *(s32 *)((s8 *)arg0 + 8);
        scroll_uv_coordinate_write_cursor = *(s32 *)((s8 *)arg0 + 0xC);
        visit_matching_models(arg0, arg1, arg2);
    }
    *(s16 *)((s8 *)arg0 + 0x10) = 0;
    *(s16 *)((s8 *)arg0 + 0x12) = 0;
    return arg0;
}

}
