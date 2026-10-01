#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Vtx_8002DB7C { f32 p[3]; f32 n[3]; };

struct Model_8002DB7C {
    u32 *vertices;
    u16 *polygons;
    f32 center[3];
    f32 radius;
};

struct Object_8002DB7C {
    u32 flags;
    Model_8002DB7C *model;
    f32 position[3];
    s32 rotation[3];
    f32 scale[3];
    Object_8002DB7C *child;
    Object_8002DB7C *sibling;
};

struct Grid_8002DB7C {
    s32 width;
    s32 strips;
    s32 stripWords;
    s32 materialWords;
    u32 *vertices;
    u16 *polygons;
    Model_8002DB7C model;
    Object_8002DB7C object;
};

extern "C" {
void *alloc_buffer__11TOBoss4RockFPv(u32);
extern const f32 lbl_805D8198;
extern const f32 lbl_805D81F4;
Grid_8002DB7C *TBoss8Dragon__sub_8002DB7C(Grid_8002DB7C *g, s32 width, s32 strips, s32 materialWords, s16 *material);
}

extern "C" {

s32 TBoss8Dragon__sub_8002DAEC(void *arg0);
s32 TBoss8Dragon__sub_8002DB04(void *arg0);
void *destroy__12TBoss8DragonFPvs(void *arg0, s16 arg1);
M2C_UNK __dl__FPv(void *);
M2C_UNK free__11TOBoss4RockFUi(s32);

s32 TBoss8Dragon__sub_8002DAEC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14) + ((M2C_FIELD(arg0, s32 *, 0xC) + 3) * 2);
}

s32 TBoss8Dragon__sub_8002DB04(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10) + 8;
}

void *destroy__12TBoss8DragonFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        free__11TOBoss4RockFUi(M2C_FIELD(arg0, s32 *, 0x10));
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
        free__11TOBoss4RockFUi(M2C_FIELD(arg0, s32 *, 0x14));
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}
Grid_8002DB7C *TBoss8Dragon__sub_8002DB7C(Grid_8002DB7C *g, s32 width, s32 strips, s32 materialWords, s16 *material) {
    s32 i;
    s32 first;
    s32 second;
    s16 *p;
    s32 row;
    s32 x;
    s32 count;
    u32 *v;
    Vtx_8002DB7C *vt;
    g->width = width;
    g->strips = strips;
    g->materialWords = materialWords;
    g->stripWords = g->width * 6 + 1;
    g->polygons = (u16 *)alloc_buffer__11TOBoss4RockFPv((g->materialWords + 5 + g->stripWords * g->strips) * 2);
    g->vertices = (u32 *)alloc_buffer__11TOBoss4RockFPv((g->width * (g->strips + 1) * 6 + 3) * 4);
    p = (s16 *)g->polygons;
    for (i = 0; i < g->materialWords; i++) {
        *p++ = *material++;
    }
    *p++ = 0x242;
    *p++ = g->stripWords * g->strips + 1;
    *p++ = g->strips;
    first = 0;
    second = g->width;
    for (row = 0; row < g->strips; row++) {
        *p++ = g->width * 2;
        for (x = 0; x < g->width;) {
            *p++ = first++;
            x++;
            *p++ = 0;
            *p++ = 0;
            *p++ = second++;
            *p++ = 0;
            *p++ = 0;
        }
    }
    *p++ = 0xff;
    *p = 0xff;
    count = g->width * (g->strips + 1);
    v = g->vertices;
    *v++ = ((count * 6 + 1) << 16) | 0x29;
    *v++ = count << 16;
    vt = (Vtx_8002DB7C *)v;
    for (i = 0; i < count; i++) {
        vt->p[0] = lbl_805D8198;
        vt->p[1] = lbl_805D8198;
        vt->p[2] = lbl_805D8198;
        vt->n[0] = lbl_805D8198;
        vt->n[1] = lbl_805D8198;
        vt->n[2] = lbl_805D8198;
        vt++;
    }
    *(u32 *)vt = 0xff;
    g->model.vertices = g->vertices;
    g->model.polygons = g->polygons;
    g->model.center[0] = lbl_805D8198;
    g->model.center[1] = lbl_805D8198;
    g->model.center[2] = lbl_805D8198;
    g->model.radius = lbl_805D8198;
    g->object.flags = 0x17;
    g->object.model = &g->model;
    g->object.position[0] = lbl_805D8198;
    g->object.position[1] = lbl_805D8198;
    g->object.position[2] = lbl_805D8198;
    g->object.rotation[0] = 0;
    g->object.rotation[1] = 0;
    g->object.rotation[2] = 0;
    g->object.scale[0] = lbl_805D81F4;
    g->object.scale[1] = lbl_805D81F4;
    g->object.scale[2] = lbl_805D81F4;
    g->object.child = NULL;
    g->object.sibling = NULL;
    return g;
}

}
