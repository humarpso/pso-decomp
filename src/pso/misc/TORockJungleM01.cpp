#include "types.h"
#include "pso/object/TObjChip.h"
#include "pso/object/TObject_80019A50.h"
#include "pso/player/TObjPlayer_800D7BFC.h"
#include "pso/unk/text_803D96A8.h"
#include "pso/system/vector.h"
#include "pso/object/TObjFish.h"
#include "pso/misc/TORockCaveBrakable.h"
#include "pso/object/TObjMotion.h"
#include "pso/misc/TORockJungleM01.h"
#include "pso/misc/RenderFadeState.h"
#include "pso/misc/TORockJungleS01.h"
#include "pso/misc/TRaderMapCore.h"
#include "pso/object/TObjMapCsn.h"
#include "pso/player/TObjPlayer.h"

struct Base_8029C320 { char pad[0x14]; };
struct VObj_8029C320 : Base_8029C320 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
};

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off

struct ByteBlock_3C { u8 bytes[0x3C]; };

struct RecoveredGlobal_8029C588_lbl_804DC3A0 {
    s32 value;
    u8 remaining[0x80];
};

struct RecoveredGlobal_8029C588_lbl_804DC424 {
    s32 value;
    u8 remaining[0x20];
};

struct RecoveredGlobal_8029C588___vt__15TORockJungleM01 {
    s32 value;
    u8 remaining[0x4C];
};

struct VBase_8029C6FC { char pad[0x14]; };

struct VObj_8029C6FC : VBase_8029C6FC {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
};

struct Vec_8029C6FC { f32 x, y, z; };

struct Rd_8029C6FC {
    u8 pad0[0x38];
    u8 pos[0xBC - 0x38];
    VObj_8029C6FC fade;
    u8 padd[0xD8 - 0xBC - sizeof(VObj_8029C6FC)];
    s32 fading;
};

struct Vec_8029C390 { f32 x, y, z; };

struct ChipParam_8029C390 {
    u32 x00;
    u32 x04;
    u32 x08;
    Vec_8029C390 pos;
    u8 pad18[0x20];
    f32 y2;
    u32 pad3C;
    s32 res;
    s32 res2;
    u32 x48;
};

struct Offs_8029C390 { Vec_8029C390 v[1]; };

struct Rock_8029C390 {
    u8 pad[0x38];
    Vec_8029C390 pos;
    u8 pad44[0x60 - 0x44];
    s32 x60;
};

extern "C" {
s32 init_collision_body_parts(void *, void *, int);
void *TORockCaveBrakable__ct(void *arg0);
extern RecoveredGlobal_8029C588_lbl_804DC3A0 rock_jungle_collision_body_parts;
extern RecoveredGlobal_8029C588_lbl_804DC424 rock_jungle_vec3_table;
extern s32 __vt__15TORockJungleM01[];
extern s32 lbl_805D3D40;
extern const f32 lbl_805DDD1C;
s32 isFading__15RenderFadeStateCFv(void *);
void matrix_mult_vec(s32, void *, void *);
extern const f32 lbl_805DDD18;
void *__nw__7TObjectFUl(int);
int vec3_add_to(void *, void *);
int rotate_vector_by_matrix(int, void *, void *);
int rotate_matrix_y(int, int);
extern Offs_8029C390 lbl_80465884;
extern ChipParam_8029C390 lbl_80465890;
extern u8 identity_matrix[];
extern void *tl_05;
s32 play_sound_effect(s32, s32, s32, s32);
void free_collision_body_parts(void *);
int update_obstruction_fade(void*);
void __dl__7TObjectFPv(void *);
void *__dt__18TORockCaveBrakableFv(void *arg0, s16 arg1);

void TORockJungleM01::run_task() { update_obstruction_fade((char*)this + 0xbc); update_break_state(); }

void TORockJungleM01::vfunc_18() {
    s32 arg0 = (s32)this;
    play_sound_effect(0x4BC19, arg0 + 0x38, 0, 0);
}

void TORockJungleM01::vfunc_16() {
    Rock_8029C390 *self = (Rock_8029C390 *)this;
    Offs_8029C390 a = lbl_80465884;
    ChipParam_8029C390 chip = lbl_80465890;
    Vec_8029C390 v;
    s32 i;
    void *o;
    chip.pos.x = self->pos.x;
    chip.pos.y = self->pos.y;
    chip.pos.z = self->pos.z;
    chip.y2 = chip.pos.y;
    for (i = 0; i < 1; i++) {
        VecCopy((Vec *)&v, (const Vec *)&a.v[i]);
        push_matrix_from(identity_matrix);
        rotate_matrix_y(0, self->x60);
        rotate_vector_by_matrix(0, &v, &v);
        pop_matrix();
        VecCopy((Vec *)&chip.pos, (const Vec *)&self->pos);
        vec3_add_to(&chip.pos, &v);
        chip.res = (s32)TORockJungleS01::get_model(3);
        chip.res2 = get_jungle_rock_texture_resource(3);
        o = __nw__7TObjectFUl(0x234);
        if (o != NULL) {
            construct_debris__8TObjChipFPvPvPv((u8 *)o, (u8 *)tl_05, (u8 *)&chip);
        }
    }
}

void *TORockJungleM01::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE0);
    if (o != NULL) {
        o = TORockJungleM01__ct((u8 *)o, (s32)arg0);
    }
    return o;
}

void *__dt__15TORockJungleM01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__15TORockJungleM01;
        if (*(void **)((s8 *)arg0 + 0xDC) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0xDC)); *(s32 *)&((TORockJungleM01 *)arg0)->m_dc = 0; }
        ((TUnk_804AF8A0 *)arg0)->unregister_object_by_id();
        free_collision_body_parts(arg0);
        __dt__13TUnk_804949A8Fv((s8 *)arg0 + 0xBC, -1);
        __dt__18TORockCaveBrakableFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_8029C588_lbl_804DC3A0_size[sizeof(RecoveredGlobal_8029C588_lbl_804DC3A0) == 0x84 ? 1 : -1];
typedef char RecoveredGlobal_8029C588_lbl_804DC424_size[sizeof(RecoveredGlobal_8029C588_lbl_804DC424) == 0x24 ? 1 : -1];
typedef char RecoveredGlobal_8029C588___vt__15TORockJungleM01_size[sizeof(RecoveredGlobal_8029C588___vt__15TORockJungleM01) == 0x50 ? 1 : -1];
u8 *TORockJungleM01__ct(u8 *arg0, s32 arg1) {
    struct CopyStack_8029C588 { u8 bytes[0x3C]; };
    CopyStack_8029C588 copy_storage_8029C588;
    s32 temp_r0;
    s32 temp_r4;
    TORockCaveBrakable__ct((arg0));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8029C588___vt__15TORockJungleM01 *)&__vt__15TORockJungleM01).value;
    ((TObjPlayer *)(arg0 + 0xBC))->init_and_activate();
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D3D40;
    ((TORockJungleM01 *)(arg0))->apply_object_set_data((void *)arg1);
    *(u8 * *)&((TORockJungleM01 *)arg0)->model = TORockJungleS01::get_model(2);
    ((TORockJungleM01 *)arg0)->texture_id = get_jungle_rock_texture_resource(2);
    ((TORockJungleM01 *)arg0)->m_b0 = (f32) (lbl_805DDD1C + *(f32 *)((s8 *)(*(void **)((s8 *)(*(u8 * *)&((TORockJungleM01 *)arg0)->model) + 4)) + 0x14));
    init_collision_body_parts(arg0, (void *) ((u8 *)&rock_jungle_collision_body_parts.value + 0x2C), 1);
    ((TUnk_804AF8A0 *)arg0)->refresh_collision_body_centers();
    ((TObjPlayer *)arg0)->reset_photon_effect();
    *(s32 *)&((TORockJungleM01 *)arg0)->m_b8 = (s32) ((TORockJungleM01 *)arg0)->m_84;
    temp_r0 = *(s32 *)&((TORockJungleM01 *)arg0)->m_b8;
    if ((temp_r0 < 0) || (temp_r0 >= 0x100)) {
        *(s32 *)&((TORockJungleM01 *)arg0)->m_b8 = -1;
    }
    temp_r4 = arg1 - 4;
    *(ByteBlock_3C *)(copy_storage_8029C588.bytes) = *(const ByteBlock_3C *)(temp_r4 + 4);
    VecCopy((Vec *)((copy_storage_8029C588.bytes + 0x24)), (const Vec *)(&rock_jungle_vec3_table.value));
    *(s32 *)&((TORockJungleM01 *)arg0)->m_dc = TObjMapCsn::create((s32)((void *) ((copy_storage_8029C588.bytes))));
    ((TObjPlayer *)(arg0 + 0xBC))->activate_and_dispatch();
    return arg0;
}

void TORockJungleM01::vfunc_15() {
    u8 *arg0 = (u8 *)this;
    if ((s32) *(s32 *)&this->m_d8 != 0) {
        ((VObj_8029C320*)(arg0 + 0xBC))->m7();
    }
    TObjFish::set_cull_none();
}
void TORockJungleM01::vfunc_14() {
    Rd_8029C6FC *arg0 = (Rd_8029C6FC *)this;
    Vec_8029C6FC v;
    TObjFish::set_cull_back();
    matrix_mult_vec(0, arg0->pos, &v);
    if (-v.z < lbl_805DDD18) {
        ((RenderFadeState *)(&arg0->fade))->fadeOut();
    } else {
        ((RenderFadeState *)(&arg0->fade))->restore();
    }
    if (TRaderMapCore::is_not_split_screen() == 1) {
        arg0->fading = 0;
    } else {
        arg0->fading = isFading__15RenderFadeStateCFv(&arg0->fade);
    }
    if (arg0->fading != 0) {
        arg0->fade.m6();
    }
}

}
