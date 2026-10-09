#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
struct Base_801717C0 { char pad[0x18]; };

struct VIcon_801717C0 : Base_801717C0 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4();
    virtual void m5(void *);
};

struct Icon_801717C0 {
    s32 f0;
    u8 pad4[0x18 - 4];
    void **vt;
    u8 pad1C[0x24 - 0x1C];
    s32 f24;
    u8 pad28[0x30 - 0x28];
    u32 f30;
    s32 f34;
    u8 pad38[0x68 - 0x38];
    f32 f68;
    f32 f6C;
    u8 pad70[0x84 - 0x70];
    s32 f84;
    s32 f88;
    s32 f8C;
    u8 pad90[0x326 - 0x90];
    s16 f326;
    u8 pad328[0x34C - 0x328];
    f32 f34C;
    f32 f350;
    s32 f354;
    f32 f358;
    u16 f35C;
    u8 pad35E[0x374 - 0x35E];
    s32 f374;
    s32 f378;
};

extern "C" {
M2C_UNK spawn_particle_effect(void *, int);
void calc_attach_pos__10TObjPlayerFPv(void *);
s32 TObjFish__sub_8001EDB0(void *, s32);
s32 get_bml_model(void *, s32);
void init_position_vectors__10TObjPlayerFi(void *);
void reset_photon_effect__10TObjPlayerFPv(void *);
void refresh_collision_body_centers(void *);
void init_collision_body_parts(void *, void *, s32);
void update_state__10TOMineTrapFPv(void *);
void TOMine__ct(void *, void *, void *);
extern u8 mine_collision_body_parts[];
extern M2C_UNK __vt__12TOMineIcon02[];
extern s32 lbl_805D3098;
extern s32 game_difficulty_selection;
extern void *lbl_805D5A50;
extern const f32 lbl_805DB8A8;
extern const f32 lbl_805DB8AC;
extern const f32 lbl_805DB8B0;
extern const f32 lbl_805DB8B4;
extern const f32 lbl_805DB8B8;
void *TOMineIcon02__ct(void *arg0, void *arg1, void *arg2);
}

extern "C" {

void TOMineIcon03__vt82(void);
void *__dt__12TOMineIcon02Fv(void *arg0, s16 arg1);
void *create__12TOMineIcon02FPv(void *arg0);
M2C_UNK free_collision_body_parts(void *);
M2C_UNK unregister_object_by_id(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__6TOMineFv(void *, M2C_UNK);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__12TOMineIcon02FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x37C);
    if (o != NULL) {
        o = TOMineIcon02__ct((void *)(o), (void *)(tl_05), (void *)(arg0));
    }
    return o;
}

extern M2C_UNK __vt__12TOMineIcon02[];

void *__dt__12TOMineIcon02Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TOMineIcon02;
        unregister_object_by_id(arg0);
        free_collision_body_parts(arg0);
        __dt__6TOMineFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

#pragma push
#pragma fp_contract on
void *TOMineIcon02__ct(void *arg0, void *arg1, void *arg2) {
    TOMine__ct(arg0, arg1, arg2);
#define self ((Icon_801717C0 *)arg0)
    self->vt = ((void * *)&__vt__12TOMineIcon02);
    self->f0 = lbl_805D3098;
    ((VIcon_801717C0 *)self)->m5(arg2);
    init_position_vectors__10TObjPlayerFi(self);
    calc_attach_pos__10TObjPlayerFPv(self);
    self->f34 = get_bml_model(lbl_805D5A50, 5);
    self->f24 = TObjFish__sub_8001EDB0(lbl_805D5A50, 5);
    self->f374 = get_bml_model(lbl_805D5A50, 0);
    self->f378 = TObjFish__sub_8001EDB0(lbl_805D5A50, 0);
    self->f326 = 0;
    if (self->f84 < 0) {
        self->f84 = 0;
    }
    if (self->f88 < 15) {
        self->f88 = 15;
    } else if (self->f88 > 18) {
        self->f88 = 18;
    }
    if (self->f8C < 0) {
        self->f8C = 0;
    }
    self->f358 = (f32)self->f84 * (lbl_805DB8AC * (f32)game_difficulty_selection + lbl_805DB8A8);
    if (game_difficulty_selection == 3) {
        self->f358 *= lbl_805DB8AC;
    }
    self->f354 = self->f88;
    self->f34C = lbl_805DB8B4 * self->f68 + lbl_805DB8B0;
    self->f350 = lbl_805DB8B4 * self->f6C + lbl_805DB8B8;
    update_state__10TOMineTrapFPv(self);
    self->f35C = 0xFFFF;
    self->f30 |= 0x60000000;
    init_collision_body_parts(self, mine_collision_body_parts, 1);
    refresh_collision_body_centers(self);
    reset_photon_effect__10TObjPlayerFPv(self);
    return self;
#undef self
}
#pragma pop

void TOMineIcon03__vt82(void) {  }

void TOMineIcon03__vt80(s32 arg0) {
    spawn_particle_effect((void *) (arg0 + 0x2FC), (int) (0x8D));
    spawn_particle_effect((void *) (arg0 + 0x2FC), (int) (0x8D));
}

}
