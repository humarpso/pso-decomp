#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Child_8003B250 { u8 pad0[0x44]; f32 f44; };
struct Obj_8003B250 { u8 pad0[0x14]; Child_8003B250 *child; };
struct Obj_8003B1FC { u8 pad[0x14]; Obj_8003B1FC *child; u8 pad2[0x3c - 0x18]; u8 xf[0xC]; };

extern "C" {
s32 vec3_add_to(void *, void *);
s32 set_parent__7TObjectFP7TObject(void *, void *);
extern void *lbl_805D4BF8;
void detach_children__15TObjBoss2TunnelFPvPv(Obj_8003B1FC *self, void *arg);
}

extern "C" {

void TObjBoss2Tunnel__sub_8003B1D8(void);
void release_children__15TObjBoss2TunnelFPvf(Obj_8003B250 *, f32);

extern const f32 lbl_805D85D8;

void TObjBoss2Tunnel__sub_8003B1D8(void) {
    ((void (*)(f32))release_children__15TObjBoss2TunnelFPvf)(lbl_805D85D8);
}
void detach_children__15TObjBoss2TunnelFPvPv(Obj_8003B1FC *self, void *arg) {
    Obj_8003B1FC *c;
    while ((c = self->child) != 0) {
        vec3_add_to(c->xf, arg);
        set_parent__7TObjectFP7TObject(c, lbl_805D4BF8);
    }
}
void release_children__15TObjBoss2TunnelFPvf(Obj_8003B250 *arg0, f32 farg0) {
    Child_8003B250 *c;
    while ((c = arg0->child) != NULL) {
        c->f44 = c->f44 + farg0;
        set_parent__7TObjectFP7TObject(c, lbl_805D4BF8);
    }
}

}
