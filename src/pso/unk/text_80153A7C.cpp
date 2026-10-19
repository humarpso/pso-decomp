#include "types.h"
#include "pso/object/TObjFogCollisionSwitch.h"
#include "pso/misc/TRaderMapCore.h"
#include "pso/player/TUnk_80494AE0.h"
#include "pso/boss/TBoss2DeRolLe.h"
#include "pso/object/TObjFogCollisionPoison.h"
#include "pso/system/ChunkMaterialState.h"
#include "pso/unk/text_80153A7C.h"
#include "pso/unk/text_803D96A8.h"
#include "pso/unk/text_803E2D70.h"
#include "pso/object/TObjFogCollisionSwitch.h"
#include "pso/object/TObjFogCollision.h"

extern "C" {

void __dl__7TObjectFPv(void *);
void *__dt__16TObjFogCollisionFv(void *arg0, s16 arg1);

extern s32 __vt__22TObjFogCollisionSwitch[];

}
TObjFogCollisionSwitch::~TObjFogCollisionSwitch() {

}
extern "C" {

void TObjFogCollision__ct(void *);

extern void *lbl_805D2E7C;

void *TObjFogCollisionSwitch__ct(void *fog_collision_switch) {
    TObjFogCollision__ct(fog_collision_switch);
    *(s32 **)((s8 *)fog_collision_switch + 0x18) = __vt__22TObjFogCollisionSwitch;
    *(void * *)&((TObjFogCollisionSwitch *)fog_collision_switch)->m_name = lbl_805D2E7C;
    return fog_collision_switch;
}

}

struct VBase_18_26a62c { char pad[0x18]; };

struct VObj_18_26a62c : VBase_18_26a62c {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

struct Color_80153B64 { u32 v[4]; };

struct O_80153D98 { u8 pad[0x88]; s32 mode; };

extern "C" {
s32 scale_matrix(int, f32, f32, f32);
s32 push_matrix();
s32 post_translate_matrix(void *);
extern Color_80153B64 lbl_8044002C;
extern Color_80153B64 fog_collision_color_a;
extern Color_80153B64 fog_collision_color_b;
extern s32 saved_model_draw_color[];
extern s32 model_material_color[];
extern s32 lbl_805D28BC;
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 chunk_polygon_flags_or_mask;
extern s32 chunk_polygon_flags_and_mask;
extern s32 model_render_flags;
extern const f32 lbl_805DB258;
extern const f32 lbl_805DB260;
extern const f32 lbl_805DB264;
void debug_printf_at(int, void *, ...);
extern char lbl_804400C8[];
extern char lbl_804400D4[];
extern char lbl_804400E0[];
extern char lbl_805DB268;
f32 horizontal_distance_squared(void *, s32);
s32 get_player_by_client_id(u16);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TObjFogCollisionSwitch__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x98);
    if (o != NULL) {
        o = ((void *(*)(void *, void *, void *))TObjFogCollisionSwitch__ct)(o, tl_05, arg0);
    }
    return o;
}

extern const f32 lbl_805DB26C;

void TObjFogCollision::draw_volume() {
    u8 *arg0 = (u8 *)this;
    f32 s;
    if (((VObj_18_26a62c *)(arg0))->m8(lbl_805DB260, this->scale) != 0) {
        Color_80153B64 c0 = lbl_8044002C;
        Color_80153B64 c3 = fog_collision_color_a;
        Color_80153B64 cd = fog_collision_color_b;
        lbl_805D5660 = model_render_flags;
        ((TRaderMapCore *)saved_model_draw_color)->copy_vec4(model_material_color);
        lbl_805D5664 = chunk_polygon_flags_and_mask;
        lbl_805D5668 = chunk_polygon_flags_or_mask;
        model_render_flags |= 0x810;
        set_chunk_material_override_pair(0xFF00, 0x800);
        switch (this->m_90) {
        case 0:
            ((TUnk_80494AE0 *)((f32 *)&c0))->set_chunk_material_color();
            break;
        case 1:
        case 2:
        case 4:
        case 5:
            ((TUnk_80494AE0 *)((f32 *)&cd))->set_chunk_material_color();
            break;
        case 3:
            ((TUnk_80494AE0 *)((f32 *)&c3))->set_chunk_material_color();
            break;
        }
        push_matrix();
        s = lbl_805DB264 * this->scale;
        post_translate_matrix((u8 *)&this->position);
        scale_matrix(0, s, lbl_805DB258, s);
        draw_chunk_object((void *)lbl_805D28BC);
        pop_matrix();
        chunk_polygon_flags_and_mask = lbl_805D5664;
        chunk_polygon_flags_or_mask = lbl_805D5668;
        ((TRaderMapCore *)model_material_color)->copy_vec4(saved_model_draw_color);
        model_render_flags = lbl_805D5660;
    }
}

void TObjFogCollision::render() {
    u8 *arg0 = (u8 *)this;
    if (((s32)TObjFogCollision__sub_80153F70()) != 0) {
        this->vfunc_14();
    }
    if (((s32)TObjFogCollision__sub_80153F68(arg0)) != 0) {
        this->draw_volume();
    }
}

void TObjFogCollision::vfunc_14() {
    O_80153D98 *arg0 = (O_80153D98 *)this;
    debug_printf_at(0x13001C, &lbl_805DB268);
    debug_printf_at(0x130020, lbl_804400C8);
    if (arg0->mode == 0) {
        debug_printf_at(0x130021, lbl_804400D4);
    } else {
        debug_printf_at(0x130021, lbl_804400E0);
    }
}

void TObjFogCollision::run_task() {
    u16 i;
    if (TObjFogCollision__sub_80153F70() == 0 && TObjFogCollision__sub_80153F68(this) == 0) {
        for (i = 0; i != 4; i++) {
            if (check_collision(i) != 0) {
                record_fog_collision_hit(i, this->m_84, this->m_88 == 0);
            }
        }
    }
}

s32 TObjFogCollision::check_collision(u16 arg1) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f31;
    s32 player;

    player = get_player_by_client_id((u16)arg1);
    if (player != 0) {
        temp_f0 = this->scale;
        temp_f31 = temp_f0 * temp_f0;
        temp_f1 = horizontal_distance_squared((u8 *)&this->position, player + 0x38);
        if (temp_f31 > temp_f1) {
            return 1;
        }
        if ((lbl_805DB26C + temp_f31) < temp_f1) {
            this->m_94 = 0x3C;
        }
        goto block_5;
    }
block_5:
    return 0;
}

void TObjFogCollision::vfunc_13(s32) {
    s32 temp_r0;
    temp_r0 = this->m_84;
    if (temp_r0 < 0) {
        this->m_84 = 0;
        return;
    }
    if (temp_r0 >= 0x80) {
        this->m_84 = 0x7F;
    }
}

int TObjFogCollision__sub_80153F68(void * _w0) { return 0; }
int TObjFogCollision__sub_80153F70(void) { return 0; }

}
