#include "types.h"
#include "pso/object/TObjChip.h"
#include "pso/object/TObject_80019A50.h"
#include "pso/unk/text_803D96A8.h"
#include "pso/system/vector.h"
#include "pso/object/TObjMotion.h"
#include "pso/misc/TORockJungleS01.h"
#include "pso/misc/TMotorcycle.h"
#include "pso/misc/TOKeyMachine01.h"
#include "pso/object/TObjMapCsn.h"
#include "pso/player/TObjPlayer.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off

struct ByteBlock_3C { u8 bytes[0x3C]; };

struct RecoveredGlobal_8029C9C8_lbl_804DC3A0 {
    s32 value;
    u8 remaining[0x80];
};

struct RecoveredGlobal_8029C9C8_lbl_804DC424 {
    s32 value;
    u8 remaining[0x20];
};

struct RecoveredGlobal_8029C9C8___vt__15TORockJungleS01 {
    s32 value;
    u8 remaining[0x4C];
};

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Vec_8029C7DC { f32 x, y, z; };

struct Spawn_8029C7DC {
    u8 pad0[0xC];
    Vec_8029C7DC pos;
    u8 pad18[0x20];
    f32 f38;
    u8 pad3c[4];
    s32 f40;
    s32 f44;
    u8 pad48[4];
};

struct Offs_8029C7DC { Vec_8029C7DC v[1]; };

struct Rock_8029C7DC {
    u8 pad0[0x38];
    Vec_8029C7DC pos;
    u8 pad44[0x60 - 0x44];
    s32 rotY;
};

extern "C" {
u8 * get_bml_model(void *, int);
extern u32 TORockJungleS01__bml_resource;
s32 init_collision_body_parts(void *, void *, int);
void *TORockCaveBrakable__ct(void *arg0);
extern RecoveredGlobal_8029C9C8_lbl_804DC3A0 rock_jungle_collision_body_parts;
extern RecoveredGlobal_8029C9C8_lbl_804DC424 rock_jungle_vec3_table;
extern s32 __vt__15TORockJungleS01[];
extern s32 TORockJungleS01__name;
extern const f32 lbl_805DDD1C;
extern u32 TORockJungleS01__texture_resource;
void *load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
void *alloc__23TAdSinglePlyChrSelectGCFv(s32);
u8 *load_gvm_texture_file(s32 arg0);
extern u8 lbl_804658EC[];
extern u8 lbl_80465904[];
extern u8 lbl_8046591C[];
extern u8 TORockJungleS01_resource_descriptor[];
extern const f32 lbl_805DDD20;
extern const f32 lbl_805DDD24;
void *__nw__7TObjectFUl(int);
s32 vec3_add_to(void *, void *);
s32 rotate_vector_by_matrix(int, void *, void *);
s32 rotate_matrix_y(int, int);
extern Offs_8029C7DC lbl_8046581C;
extern Spawn_8029C7DC lbl_80465828;
extern u8 identity_matrix[];
extern s32 tl_05;
s32 play_sound_effect(s32, s32, s32, s32);
void TLobby__sub_8001FE7C(void*, int);
s32 TLobby__sub_803DA16C(void*);
void free_collision_body_parts(void *);
void __dl__7TObjectFPv(void *);
void *__dt__18TORockCaveBrakableFv(void *arg0, s16 arg1);

void TORockJungleS01::vfunc_18() {
    s32 arg0 = (s32)this;
    play_sound_effect(0x4BC19, arg0 + 0x38, 0, 0);
}

void TORockJungleS01::vfunc_16() {
    Rock_8029C7DC *self = (Rock_8029C7DC *)this;
    Offs_8029C7DC off = lbl_8046581C;
    Spawn_8029C7DC p = lbl_80465828;
    Vec_8029C7DC v;
    s32 i;
    void *o;
    p.pos.x = self->pos.x;
    p.pos.y = self->pos.y;
    p.pos.z = self->pos.z;
    p.f38 = p.pos.y;
    for (i = 0; i < 1; i++) {
        VecCopy((Vec *)&v, (const Vec *)&off.v[i]);
        push_matrix_from(identity_matrix);
        rotate_matrix_y(0, self->rotY);
        rotate_vector_by_matrix(0, &v, &v);
        pop_matrix();
        VecCopy((Vec *)&p.pos, (const Vec *)&self->pos);
        vec3_add_to(&p.pos, &v);
        p.f40 = (s32)TORockJungleS01::get_model(1);
        p.f44 = get_jungle_rock_texture_resource(1);
        o = __nw__7TObjectFUl(0x234);
        if (o != NULL) {
            construct_debris__8TObjChipFPvPvPv((u8 *)o, (u8 *)tl_05, (u8 *)&p);
        }
    }
}

void *TORockJungleS01::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC0);
    if (o != NULL) {
        o = TORockJungleS01__ct((u8 *)o, (s32)arg0);
    }
    return o;
}

void *__dt__15TORockJungleS01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__15TORockJungleS01;
        if (*(void **)((s8 *)arg0 + 0xBC) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0xBC)); *(s32 *)&((TORockJungleS01 *)arg0)->m_bc = 0; }
        ((TUnk_804AF8A0 *)arg0)->unregister_object_by_id();
        free_collision_body_parts(arg0);
        __dt__18TORockCaveBrakableFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_8029C9C8_lbl_804DC3A0_size[sizeof(RecoveredGlobal_8029C9C8_lbl_804DC3A0) == 0x84 ? 1 : -1];
typedef char RecoveredGlobal_8029C9C8_lbl_804DC424_size[sizeof(RecoveredGlobal_8029C9C8_lbl_804DC424) == 0x24 ? 1 : -1];
typedef char RecoveredGlobal_8029C9C8___vt__15TORockJungleS01_size[sizeof(RecoveredGlobal_8029C9C8___vt__15TORockJungleS01) == 0x50 ? 1 : -1];
u8 *TORockJungleS01__ct(u8 *arg0, s32 arg1) {
    struct CopyStack_8029C9C8 { u8 bytes[0x3C]; };
    CopyStack_8029C9C8 copy_storage_8029C9C8;
    s32 temp_r0;
    TORockCaveBrakable__ct((arg0));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8029C9C8___vt__15TORockJungleS01 *)&__vt__15TORockJungleS01).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TORockJungleS01__name;
    ((TORockJungleS01 *)(arg0))->apply_object_set_data((void *)arg1);
    *(u8 * *)&((TORockJungleS01 *)arg0)->model = TORockJungleS01::get_model(0);
    ((TORockJungleS01 *)arg0)->texture_id = get_jungle_rock_texture_resource(0);
    ((TORockJungleS01 *)arg0)->m_b0 = (f32) (lbl_805DDD1C + *(f32 *)((s8 *)(*(void **)((s8 *)(*(u8 * *)&((TORockJungleS01 *)arg0)->model) + 4)) + 0x14));
    init_collision_body_parts(arg0, &rock_jungle_collision_body_parts.value, 1);
    ((TUnk_804AF8A0 *)arg0)->refresh_collision_body_centers();
    ((TObjPlayer *)arg0)->reset_photon_effect();
    *(s32 *)&((TORockJungleS01 *)arg0)->m_b8 = (s32) ((TORockJungleS01 *)arg0)->m_84;
    temp_r0 = *(s32 *)&((TORockJungleS01 *)arg0)->m_b8;
    if ((temp_r0 < 0) || (temp_r0 >= 0x100)) {
        *(s32 *)&((TORockJungleS01 *)arg0)->m_b8 = -1;
    }
    *(ByteBlock_3C *)(copy_storage_8029C9C8.bytes) = *(const ByteBlock_3C *)((arg1 - 4) + 4);
    VecCopy((Vec *)((copy_storage_8029C9C8.bytes + 0x24)), (const Vec *)(&rock_jungle_vec3_table.value));
    *(s32 *)&((TORockJungleS01 *)arg0)->m_bc = TObjMapCsn::create((s32)((void *) ((copy_storage_8029C9C8.bytes))));
    return arg0;
}

s32 get_jungle_rock_texture_resource(s32 a) {
    if ((*(void * *)&TORockJungleS01__texture_resource) != 0) return (s32)(*(void * *)&TORockJungleS01__texture_resource);
    return 0;
}

u8 *TORockJungleS01::get_model(s32 arg0) {
    if ((void *) (*(u8 * *)&TORockJungleS01__bml_resource) != NULL) {
        return get_bml_model((*(u8 * *)&TORockJungleS01__bml_resource), arg0);
    }
    return NULL;
}

void TORockJungleS01::free_globals() {
    if ((u32) TORockJungleS01__texture_resource != 0U) {
        TLobby__sub_803DA16C((void*)TORockJungleS01__texture_resource);
        TAdSinglePlyChrSelectGC::safe_free(TORockJungleS01__texture_resource);
        TORockJungleS01__texture_resource = 0U;
    }
    if ((u32) TORockJungleS01__bml_resource != 0U) {
        TLobby__sub_8001FE7C((void*)TORockJungleS01__bml_resource, 1);
        TORockJungleS01__bml_resource = 0U;
    }
}
void TORockJungleS01::load_resources() {
    void *o;
    o = alloc__23TAdSinglePlyChrSelectGCFv(0x440);
    if (o != NULL) {
        o = load_resource_from_descriptor(o, 1, TORockJungleS01_resource_descriptor, 0, 0, 0);
    }
    TORockJungleS01__bml_resource = (u32)o;
    switch (TOKeyMachine01::get_global_state()) {
    case 27:
        TORockJungleS01__texture_resource = (u32)load_gvm_texture_file((s32)lbl_804658EC);
        break;
    case 26:
        TORockJungleS01__texture_resource = (u32)load_gvm_texture_file((s32)lbl_80465904);
        break;
    case 25:
    default:
        TORockJungleS01__texture_resource = (u32)load_gvm_texture_file((s32)lbl_8046591C);
        break;
    }
    TMotorcycle::add_entry((s16)0x3E, (s32)(TORockJungleS01::get_model(0)), (s32)(get_jungle_rock_texture_resource(0)), (f32)lbl_805DDD20, (f32)lbl_805DDD24);
}

}
