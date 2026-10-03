#include "pso/TBoss1DragonColli.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_8002B250 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct RecoveredGlobal_8002B250___vt__17TBoss1DragonColli { M2C_UNK value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_8002B250___vt__17TBoss1DragonColli_size[sizeof(RecoveredGlobal_8002B250___vt__17TBoss1DragonColli) == 0x18 ? 1 : -1];

struct E_8002B3F4 { u8 pad[0x18]; u32 flags; u8 pad2[0x2c - 0x1c]; };

struct O_8002B3F4 { u8 pad[0xa4]; E_8002B3F4 *elems; s32 count; };

struct E_8002B42C { u8 pad[0x18]; u32 flags; u8 pad2[0x2c - 0x1c]; };

struct O_8002B42C { u8 pad[0xa4]; E_8002B42C *elems; s32 count; };

typedef s32 M2C_UNK;
struct O_8002B3F4;
struct E_8002B4CC { f32 x, y, z, w; u8 pad10[8]; u32 flags; u8 pad1c[0x2c - 0x1c]; };

struct O_8002B4CC {
    s32 f0;
    u8 pad4[0x18 - 4];
    void *vt;
    s16 f1c;
    u8 pad1e[0xa4 - 0x1e];
    E_8002B4CC *elems;
    s32 count;
    u8 pos[0xc];
};

extern "C" {
s32 __nw__7TObjectFUl(int);
s32 __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_8002B250___vt__17TBoss1DragonColli __vt__17TBoss1DragonColli;
extern s32 lbl_805D265C;
extern const f32 lbl_805D8108;
extern const f32 lbl_805D810C;
extern const f32 lbl_805D8110;
extern const f32 lbl_805D8114;
extern const f32 lbl_805D8118;
extern const f32 lbl_805D811C;
u8 *TBoss1DragonColli__ct(u8 *arg0, s32 arg1);
void TBoss1DragonColli__sub_8002B3F4(O_8002B3F4 *self);
void TBoss1DragonColli__sub_8002B42C(O_8002B42C *self);
void VecCopy__FP3VecPC3Vec(void *, void *);
void TBoss1DragonColli__sub_8002B3F4(O_8002B3F4 *self);
void fn_8002B630(u8 *arg0, u8 *arg1);
E_8002B4CC *alloc_buffer__11TOBoss4RockFPv(s32);
M2C_UNK register_entity_by_id(void *);
int refresh_collision_body_centers(void*);
M2C_UNK TObjPlayer__sub_801569F4(void *, void *);
s16 TLobby__sub_801A2078(int);
extern u8 lbl_80481B90[];
extern M2C_UNK lbl_80481BD4[];
extern s32 lbl_805D2658;
extern const f32 lbl_805D8108;
extern const f32 lbl_805D8120;
s32 create_sphere_chain__17TBoss1DragonColliFiPviPvf(int arg0, void *arg1, int arg2, void *arg3, f32 scale);
}

extern "C" {
void queue_destruction__7TObjectFv(void*);
}

TBoss1DragonColli::~TBoss1DragonColli() {
    for (s32 index = 0; index < 3; ++index) {
        if (objects[index] != NULL) {
            queue_destruction__7TObjectFv(objects[index]);
            objects[index] = NULL;
        }
    }
}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include "types.h"
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_C { u8 bytes[0xc]; };

extern "C" {
void fn_8002B630(u8 *arg0, u8 *arg1);
}

extern "C" {

void TBoss1DragonColli__sub_8002B358(void);
void TBoss1DragonColli__sub_8002B35C(void* p);
void *destroy__17TBoss1DragonColliFPvs(void *arg0, s16 arg1);
void draw__17TBoss1DragonColliFPvPvPv(void* p, void* a1, void* a2);
void TBoss1DragonDemo__sub_8002B68C(void);
void TBoss1DragonDemo__sub_8002B690(void);
int TCameraCtrl__sub_803D8934(void*, void*, void*);
int post_translate_matrix(void*);
M2C_UNK free_collision_body_parts(void *);
M2C_UNK unregister_object_by_id(void *);
int refresh_collision_body_centers(void*);
int TObjPlayer__sub_803D8CD4(void*);
int rotate_matrix_y(void*, void*);
int push_matrix(void*);
int pop_matrix(void);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK destroy_particle_controller__10TObjPlayerFPvs(void *, M2C_UNK);
void render__16TBoss1DragonDemoFv(void);

u8 *TBoss1DragonColli__ct(u8 *arg0, s32 arg1) {
    typedef char sp8_offset[(offsetof(Stack_8002B250, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8002B250, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8002B250, sp10) == 0x8) ? 1 : -1];
    Stack_8002B250 stack;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__17TBoss1DragonColli.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D265C;
    stack.sp8 = lbl_805D8108;
    stack.spC = lbl_805D8108;
    stack.sp10 = lbl_805D8108;
    temp_r3 = __nw__7TObjectFUl((int) (0xB8));
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = create_sphere_chain__17TBoss1DragonColliFiPviPvf((int)((int) (temp_r3)), (void *)((void *) (arg0)), (int)((int) (1)), (void *)((void *) (&stack.sp8)), (f32) (lbl_805D810C));
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = var_r0;
    stack.sp8 = lbl_805D8110;
    stack.spC = lbl_805D8108;
    stack.sp10 = lbl_805D8114;
    temp_r3_2 = __nw__7TObjectFUl((int) (0xB8));
    var_r0_2 = temp_r3_2;
    if (var_r0_2 != 0) {
        var_r0_2 = create_sphere_chain__17TBoss1DragonColliFiPviPvf((int)((int) (temp_r3_2)), (void *)((void *) (arg0)), (int)((int) (3)), (void *)((void *) (&stack.sp8)), (f32) (lbl_805D8118));
    }
    M2C_FIELD(arg0, s32 *, 0x20) = var_r0_2;
    stack.sp8 = lbl_805D8110;
    stack.spC = lbl_805D8108;
    stack.sp10 = lbl_805D811C;
    temp_r3_3 = __nw__7TObjectFUl((int) (0xB8));
    var_r0_3 = temp_r3_3;
    if (var_r0_3 != 0) {
        var_r0_3 = create_sphere_chain__17TBoss1DragonColliFiPviPvf((int)((int) (temp_r3_3)), (void *)((void *) (arg0)), (int)((int) (5)), (void *)((void *) (&stack.sp8)), (f32) (lbl_805D8118));
    }
    M2C_FIELD(arg0, s32 *, 0x24) = var_r0_3;
    return arg0;
}

void TBoss1DragonColli__sub_8002B358(void) {  }

void TBoss1DragonColli__sub_8002B35C(void* p) { TBoss1DragonColli__sub_8002B3F4((O_8002B3F4 *)((void*)(p))); }

void draw__17TBoss1DragonColliFPvPvPv(void* p, void* a1, void* a2) { push_matrix(p); TObjPlayer__sub_803D8CD4((void*)0); post_translate_matrix(a1); rotate_matrix_y((void*)0, a2); TCameraCtrl__sub_803D8934((void*)0, (char*)p + 0xac, (char*)p + 0x38); pop_matrix(); *(void**)((char*)p + 0x60) = a2; refresh_collision_body_centers(p); TBoss1DragonColli__sub_8002B42C((O_8002B42C *)((void*)(p))); }

void TBoss1DragonColli__sub_8002B3F4(O_8002B3F4 *self) {
    s32 i;
    for (i = 0; i < self->count; i++) {
        self->elems[i].flags &= ~1;
    }
}

extern M2C_UNK lbl_80481BD4[];

void TBoss1DragonColli__sub_8002B42C(O_8002B42C *self) {
    s32 i;
    for (i = 0; i < self->count; i++) {
        self->elems[i].flags |= 1;
    }
}

void *destroy__17TBoss1DragonColliFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80481BD4;
        unregister_object_by_id(arg0);
        free_collision_body_parts(arg0);
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if ((s16) arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

#define self ((O_8002B4CC *)arg0)
s32 create_sphere_chain__17TBoss1DragonColliFiPviPvf(int arg0, void *arg1, int arg2, void *arg3, f32 scale) {
    E_8002B4CC *e;
    s32 i;
    f32 zero;
    f32 step;
    f32 z;
    TObjPlayer__sub_801569F4(self, arg1);
    self->vt = ((u8 *)&lbl_80481BD4);
    self->f0 = lbl_805D2658;
    VecCopy__FP3VecPC3Vec(self->pos, arg3);
    self->f1c = TLobby__sub_801A2078(0);
    self->count = arg2;
    self->elems = alloc_buffer__11TOBoss4RockFPv(self->count * 0x2C);
    step = lbl_805D8120 * scale;
    e = self->elems;
    zero = lbl_805D8108;
    z = scale * (f32)(self->count - 1);
    for (i = 0; i < self->count; i++) {
        fn_8002B630((u8 *)e, lbl_80481B90);
        e->x = zero;
        e->y = zero;
        e->z = z;
        z -= step;
        e->w = scale;
        e->flags = 0x10003;
        e++;
    }
    refresh_collision_body_centers(self);
    register_entity_by_id(self);
    TBoss1DragonColli__sub_8002B3F4((O_8002B3F4 *)self);
    return arg0;
}
#undef self

void fn_8002B630(u8 *arg0, u8 *arg1) {
    *(M2CCopy_C *)(arg0) = *(const M2CCopy_C *)(arg1);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) M2C_FIELD(arg1, f32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg1, s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg1, s32 *, 0x18);
    *(M2CCopy_C *)((s32) arg0 + 0x1C) = *(const M2CCopy_C *)((s32) arg1 + 0x1C);
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) M2C_FIELD(arg1, f32 *, 0x28);
}

}
