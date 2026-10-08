#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
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
M2C_UNK __dl__FPv(void *);
s32 alloc_buffer__11TOBoss4RockFPv(s32);
M2C_UNK visit_matching_models(void *, s32, s32);
M2C_UNK visit_model_tree_recursive();
M2C_UNK free__11TOBoss4RockFUi(void *);

void offset_position__6TSceneFPvii(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, s16 *, 0x10) + arg1);
    M2C_FIELD(arg0, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, s16 *, 0x12) + arg2);
    apply_uv_offset__6TSceneFPvss((void *)(arg0), (s16)(M2C_FIELD(arg0, s16 *, 0x10)), (s16)(M2C_FIELD(arg0, s16 *, 0x12)));
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
        if ((u32) M2C_FIELD(arg0, u32 *, 0xC) != 0U) {
            free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0xC));
            M2C_FIELD(arg0, u32 *, 0xC) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 8) != 0U) {
            free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 8));
            M2C_FIELD(arg0, u32 *, 8) = 0U;
        }
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_805D6C70;
extern s32 lbl_805D6C74;

void *init_buffers__6TSceneFPvii(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    visit_model_tree_recursive();
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r0 > 0) {
        M2C_FIELD(arg0, s32 *, 8) = alloc_buffer__11TOBoss4RockFPv(temp_r0 * 8);
        M2C_FIELD(arg0, s32 *, 0xC) = alloc_buffer__11TOBoss4RockFPv(M2C_FIELD(arg0, s32 *, 0) * 4);
        lbl_805D6C70 = M2C_FIELD(arg0, s32 *, 8);
        lbl_805D6C74 = M2C_FIELD(arg0, s32 *, 0xC);
        visit_matching_models(arg0, arg1, arg2);
    }
    M2C_FIELD(arg0, s16 *, 0x10) = 0;
    M2C_FIELD(arg0, s16 *, 0x12) = 0;
    return arg0;
}

}
