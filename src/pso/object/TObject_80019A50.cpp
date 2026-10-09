#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Ent_80019B08 { s32 key; s32 val; };

struct Tbl_80019B08 { s32 count; Ent_80019B08 *ents; };

struct Obj_80019B08 { u8 pad[0x1c]; Tbl_80019B08 *tbl; };

struct Node_80019AB0 { u8 pad[0xc]; Node_80019AB0 *next; };

struct Sub_80019AB0 { u8 pad[0x14]; Node_80019AB0 *head; };

struct Obj_80019AB0 { u8 pad[0x20]; Sub_80019AB0 *sub; f32 f24; };

extern "C" {
void fn_80019B78(Obj_80019B08 *self, s32 idx);
void fn_80019B08(Obj_80019B08 *self, s32 key);
void fn_80019EB8(Node_80019AB0 *n, f32 v);
void set_draw_line_param_all_nodes(Obj_80019AB0 *self, f32 v);
}

extern "C" {

void TAdDrawLineTask__sub_80019A8C(void* p, void* q);
s32 TObject__sub_80019A60(void);
void func_80019A68__Fv(void);
void queue_destruction__7TObjectFv(void *arg0);
M2C_UNK TBoss8Dragon__sub_8036B088();
M2C_UNK fn_8036B18C();

void queue_destruction__7TObjectFv(void *arg0) {
    M2C_FIELD(arg0, u16 *, 4) = (u16) (M2C_FIELD(arg0, u16 *, 4) | 1);
}

extern s32 logo_texture_e_handle;

s32 TObject__sub_80019A60(void) {
    return logo_texture_e_handle;
}

void func_80019A68__Fv(void) {
    fn_8036B18C();
    TBoss8Dragon__sub_8036B088();
}

void TAdDrawLineTask__sub_80019A8C(void* p, void* q) { *(f32*)((char*)p + 0x0) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x8); *(u32*)((char*)p + 0xc) = *(u32*)((char*)q + 0xc); }

void set_draw_line_param_all_nodes(Obj_80019AB0 *self, f32 v) {
    Node_80019AB0 *n;
    self->f24 = v;
    for (n = self->sub->head; n != 0; n = n->next) {
        fn_80019EB8(n, v);
    }
}

void fn_80019B08(Obj_80019B08 *self, s32 key) {
    s32 i;
    for (i = 0; i != self->tbl->count; i++) {
        Ent_80019B08 *e = &self->tbl->ents[i];
        if (e->key == key) {
            fn_80019B78(self, e->val);
        }
    }
}

}
