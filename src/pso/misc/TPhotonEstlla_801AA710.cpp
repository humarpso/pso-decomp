#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_801AA930 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Vec_801AA710 { f32 x, y, z; };

struct Packet_801AA710 { u32 w[8]; };

struct Self_801AA710 {
    u8 pad0[0x38];
    Vec_801AA710 pos;
    u8 pad1[0x150 - 0x44];
    f32 f150;
    u8 pad2[0x17C - 0x154];
    u16 id;
};

struct Owner_801AA710 { u8 pad[0x60]; s32 f60; };

struct Color_801AA818 { f32 a, r, g, b; };

struct Vec_801AA818 { f32 x, y, z; };

struct Self_801AA818 {
    u8 pad0[0x24];
    s32 f24;
    u8 pad1[0x38 - 0x28];
    Vec_801AA818 pos;
    u8 pad2[0x60 - 0x44];
    s32 f60;
    u8 pad3[0x14C - 0x64];
    s16 f14C;
    u8 pad4[0x180 - 0x14E];
    Color_801AA818 color;
    u8 pad5[0x19C - 0x190];
    s32 started;
};

extern "C" {
s32 set_field_b8__14TObjEnePanarmsFPvs(void *, int);
s32 TBoss1Dragon__sub_80143504(void *);
u8 *TPhotonMylla__sub_80154CB4(u16);
s32 TCameraCtrl__sub_801A7310(void *, int);
s32 TObjPlayer__sub_801A7680(void *);
s32 TObjPlayer__sub_801A7748(void *, int);
s32 update_state__10TSceneSoraFPv(void *);
s32 TPhotonMagicSquare__sub_801AD218(int, void *, int, void *, int);
s32 TOTrapAncient01__sub_80226578(int, void *, int, int, int);
u32 __nw__7TObjectFUl(int);
extern const f32 lbl_805DC140;
extern const f32 lbl_805DC144;
extern const f32 lbl_805DC148;
extern const f32 lbl_805DC14C;
extern const f32 lbl_805DC150;
void run_task__13TPhotonEstllaFv(u8 *arg0);
u8 *TPhotonMylla__sub_80154CB4(u16);
s32 TPhotonLine__ct(void *, void *, void *, u16);
u32 __nw__7TObjectFUl(int);
s32 TScene__sub_803D8DB4(int, void *, void *);
s32 rotate_matrix_y(int, int);
s32 TObjPlayer__sub_803D97F0(void *);
s32 TCameraCtrl__sub_803D9858(int);
extern const Packet_801AA710 lbl_80446CE8;
extern u8 lbl_8058D490[];
extern const f32 lbl_805DC138;
extern const f32 lbl_805DC13C;
void fn_801AA710(Self_801AA710 *self);
s32 copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
s32 TObjPlayer__sub_800F5BC0(void *, s16, int);
s32 draw__16TObjEneRe7BeruraFPv(void *);
s32 clear_render_context__10TObjPlayerFv(void *);
s32 TObjPlayer__sub_801A7638(void *);
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
s32 rotate_matrix_y(int, int);
s32 TObjPlayer__sub_803D9B2C();
s32 TObjPlayer__sub_803D9B78();
s32 TObjPlayer__sub_803D9624(int, f32, f32, f32);
s32 set_global_param__8TObjFishFi(int);
s32 set_chunk_material_override_pair(int, int);
s32 set_chunk_material_color(void *);
s32 set_global_flag__10TObjPlayerFv();
s32 clear_global_state__10TObjPlayerFv();
extern Color_801AA818 lbl_8050BEC0;
extern Color_801AA818 lbl_8058D4C0;
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern void *lbl_805D5D30;
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern s32 some_id_805c6f74;
void render__13TPhotonEstllaFv(Self_801AA818 *self);
}

extern "C" {

void fn_801AA710(Self_801AA710 *self) {
    Owner_801AA710 *owner;
    Vec_801AA710 forward;
    Vec_801AA710 direction;
    u32 line;
    owner = (Owner_801AA710 *)TPhotonMylla__sub_80154CB4(self->id);
    forward.x = lbl_805DC138;
    forward.y = lbl_805DC138;
    forward.z = lbl_805DC13C;
    TObjPlayer__sub_803D97F0(lbl_8058D490);
    if (owner) {
        rotate_matrix_y(0, owner->f60);
    }
    TScene__sub_803D8DB4(0, &forward, &direction);
    TCameraCtrl__sub_803D9858(1);
    {
        Packet_801AA710 packet = lbl_80446CE8;
        *(Vec_801AA710 *)&packet.w[0] = self->pos;
        *(Vec_801AA710 *)&packet.w[3] = direction;
        *(f32 *)&packet.w[7] = self->f150;
        line = __nw__7TObjectFUl(0x378);
        if (line) {
            TPhotonLine__ct((void *)line, &packet, self, self->id);
        }
    }
}

void render__13TPhotonEstllaFv(Self_801AA818 *self) {
    if (self->started != 0) {
        TObjPlayer__sub_800F5BC0(lbl_805D5D30, self->f14C, 0);
        begin_effect_render__13TParticleCtrlFv();
        set_global_param__8TObjFishFi(self->f24);
        TObjPlayer__sub_803D9B2C();
        TObjPlayer__sub_803D9624(0, self->pos.x, self->pos.y, self->pos.z);
        rotate_matrix_y(0, self->f60);
        TObjPlayer__sub_801A7638(self);
        lbl_805D5660 = some_id_805c6f74;
        copy_vec4__13TRaderMapCoreFPvPv(&lbl_8050BEC0, &lbl_8058D4C0);
        lbl_805D5664 = lbl_805D7784;
        lbl_805D5668 = lbl_805D7780;
        some_id_805c6f74 |= 0x200820;
        set_global_flag__10TObjPlayerFv();
        set_chunk_material_override_pair(-1, 0x800);
        set_chunk_material_color(&self->color);
        draw__16TObjEneRe7BeruraFPv(self);
        clear_global_state__10TObjPlayerFv();
        lbl_805D7784 = lbl_805D5664;
        lbl_805D7780 = lbl_805D5668;
        copy_vec4__13TRaderMapCoreFPvPv(&lbl_8058D4C0, &lbl_8050BEC0);
        some_id_805c6f74 = lbl_805D5660;
        clear_render_context__10TObjPlayerFv(self);
        TObjPlayer__sub_803D9B78();
        end_effect_render__13TParticleCtrlFv();
    }
}

void run_task__13TPhotonEstllaFv(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_801AA930, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_801AA930, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_801AA930, sp10) == 0x8) ? 1 : -1];
    Stack_801AA930 stack;
    f32 temp_f1;
    u32 temp_r3_2;
    u8 *temp_r3;
    M2C_FIELD(arg0, s32 *, 0x1A0) = (s32) (M2C_FIELD(arg0, s32 *, 0x1A0) + 1);
    if (((s32) M2C_FIELD(arg0, s32 *, 0x1A0) == 0x32) && ((s32) M2C_FIELD(arg0, s32 *, 0x19C) == 0)) {
        M2C_FIELD(arg0, s32 *, 0x19C) = 1;
        temp_r3 = (u8 *)(TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0x17C)));
        if (temp_r3 != NULL) {
            stack.sp8 = M2C_FIELD(temp_r3, f32 *, 0x38);
            stack.spC = lbl_805DC140 + M2C_FIELD(temp_r3, f32 *, 0x3C);
            stack.sp10 = M2C_FIELD(temp_r3, f32 *, 0x40);
        }
        temp_r3_2 = __nw__7TObjectFUl((int) (0xD0));
        if (temp_r3_2 != 0U) {
            TPhotonMagicSquare__sub_801AD218((int) (temp_r3_2), (void *) (arg0), (int) (1), (void *) (&stack.sp8), (int) (0x78));
        }
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x1A0) == 0x64) && ((s16) M2C_FIELD(arg0, s16 *, 0xB8) == 1)) {
        TCameraCtrl__sub_801A7310((void *) (arg0), (int) (0));
        M2C_FIELD(arg0, s32 *, 0x1A0) = 0;
        set_field_b8__14TObjEnePanarmsFPvs((void *) (arg0), (int) (0));
        TObjPlayer__sub_801A7748((void *) (arg0), (int) (1));
    }
    M2C_FIELD(arg0, s16 *, 0x190) = (s16) M2C_FIELD(arg0, s16 *, 0xB8);
    update_state__10TSceneSoraFPv((void *) (arg0));
    TBoss1Dragon__sub_80143504((void *) (arg0));
    TObjPlayer__sub_801A7680((void *) (arg0));
    M2C_FIELD(arg0, s16 *, 0x14C) = (s16) (M2C_FIELD(arg0, s16 *, 0x14C) + 0xF);
    M2C_FIELD(arg0, s16 *, 0x14C) = (s16) (u8) M2C_FIELD(arg0, s16 *, 0x14C);
    if (lbl_805DC144 == (f32) M2C_FIELD(arg0, s32 *, 0x1A0)) {
        fn_801AA710((Self_801AA710 *)((void *) (arg0)));
    }
    if ((f32) M2C_FIELD(arg0, s32 *, 0x1A0) > lbl_805DC148) {
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x180);
        if (temp_f1 > lbl_805DC14C) {
            M2C_FIELD(arg0, f32 *, 0x180) = (f32) (temp_f1 - lbl_805DC150);
        }
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x19C) != 0) {
        TOTrapAncient01__sub_80226578((int) (0x4002462F), (void *) (arg0), (int) (0), (int) (0), (int) (0));
    }
}

}
