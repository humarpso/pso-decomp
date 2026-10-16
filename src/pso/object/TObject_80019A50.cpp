#include "types.h"
#include "pso/ui/TAdDrawLineCtrl.h"

struct Ent_80019B08 { s32 key; s32 val; };

struct Tbl_80019B08 { s32 count; Ent_80019B08 *ents; };

struct Obj_80019B08 { u8 pad[0x1c]; Tbl_80019B08 *tbl; };

struct Node_80019AB0 { u8 pad[0xc]; Node_80019AB0 *next; };

struct Sub_80019AB0 { u8 pad[0x14]; Node_80019AB0 *head; };

struct Obj_80019AB0 { u8 pad[0x20]; Sub_80019AB0 *sub; f32 f24; };

extern "C" {
void fn_80019B08(Obj_80019B08 *self, s32 key);
void fn_80019EB8(Node_80019AB0 *n, f32 v);
}

extern "C" {

void TAdDrawLineTask__sub_80019A8C(void* p, void* q);
s32 get_logo_texture_e_handle(void);
void func_80019A68__Fv(void);
void queue_destruction__7TObjectFv(void *arg0);
s32 TBoss8Dragon__sub_8036B088();
s32 fn_8036B18C();

void queue_destruction__7TObjectFv(void *arg0) {
    *(u16 *)((s8 *)arg0 + 4) = (u16) (*(u16 *)((s8 *)arg0 + 4) | 1);
}

extern s32 logo_texture_e_handle;

s32 get_logo_texture_e_handle(void) {
    return logo_texture_e_handle;
}

void func_80019A68__Fv(void) {
    fn_8036B18C();
    TBoss8Dragon__sub_8036B088();
}

void TAdDrawLineTask__sub_80019A8C(void* p, void* q) { *(f32*)((char*)p + 0x0) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x8); *(u32*)((char*)p + 0xc) = *(u32*)((char*)q + 0xc); }

void TAdDrawLineCtrl::set_draw_line_param_all_nodes(f32 v) {
    Node_80019AB0 *n;
    ((Obj_80019AB0 *)this)->f24 = v;
    for (n = ((Obj_80019AB0 *)this)->sub->head; n != 0; n = n->next) {
        fn_80019EB8(n, v);
    }
}

void fn_80019B08(Obj_80019B08 *self, s32 key) {
    s32 i;
    for (i = 0; i != self->tbl->count; i++) {
        Ent_80019B08 *e = &self->tbl->ents[i];
        if (e->key == key) {
            ((TAdDrawLineCtrl *)self)->sub_80019B78(e->val);
        }
    }
}

}
