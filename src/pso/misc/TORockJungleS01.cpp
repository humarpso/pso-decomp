#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_38 { u8 bytes[0x38]; };

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct M2CCopy_3C { u8 bytes[0x3C]; };

struct RecoveredGlobal_8029C9C8_lbl_804DC3A0 {
    M2C_UNK value;
    u8 remaining[0x80];
};

struct RecoveredGlobal_8029C9C8_lbl_804DC424 {
    M2C_UNK value;
    u8 remaining[0x20];
};

struct RecoveredGlobal_8029C9C8___vt__15TORockJungleS01 {
    M2C_UNK value;
    u8 remaining[0x4C];
};

typedef s32 M2C_UNK;
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
u8 *get_model__15TORockJungleS01Fi(s32 arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 refresh_collision_body_centers(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 TORockCaveBrakable__ct(void *);
s32 create__10TObjMapCsnFi(void *);
u8 *get_model__15TORockJungleS01Fi(s32 arg0);
extern RecoveredGlobal_8029C9C8_lbl_804DC3A0 rock_jungle_collision_body_parts;
extern RecoveredGlobal_8029C9C8_lbl_804DC424 rock_jungle_vec3_table;
extern M2C_UNK __vt__15TORockJungleS01[];
extern s32 lbl_805D3D3C;
extern const f32 lbl_805DDD1C;
u8 *TORockJungleS01__ct(u8 *arg0, s32 arg1);
extern u32 TORockJungleS01__texture_resource;
s32 get_jungle_rock_texture_resource(s32 a);
void *load_resource_from_descriptor(void *, M2C_UNK, void *, M2C_UNK, M2C_UNK, M2C_UNK);
void *alloc__23TAdSinglePlyChrSelectGCFPv(M2C_UNK);
s32 load_gvm_texture_file(void *);
s32 get_global_state__14TOKeyMachine01Fv();
s32 get_jungle_rock_texture_resource(s32 a);
u8 *get_model__15TORockJungleS01Fi(s32 arg0);
M2C_UNK add_entry__11TMotorcycleFsiiff(M2C_UNK, void *, s32, f32, f32);
extern u8 lbl_804658EC[];
extern u8 lbl_80465904[];
extern u8 lbl_8046591C[];
extern u8 TORockJungleS01_resource_descriptor[];
extern u32 TORockJungleS01__bml_resource;
extern u32 TORockJungleS01__texture_resource;
extern const f32 lbl_805DDD20;
extern const f32 lbl_805DDD24;
void load_resources__15TORockJungleS01Fv(void);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK construct_debris__8TObjChipFPvPvPv(void *, s32, void *);
void *__nw__7TObjectFUl(int);
s32 get_jungle_rock_texture_resource(s32 a);
u8 *get_model__15TORockJungleS01Fi(s32 arg0);
M2C_UNK vec3_add_to(void *, void *);
M2C_UNK rotate_vector_by_matrix(int, void *, void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix_from(void *);
M2C_UNK pop_matrix();
extern Offs_8029C7DC lbl_8046581C;
extern Spawn_8029C7DC lbl_80465828;
extern u8 identity_matrix[];
extern s32 tl_05;
void TORockJungleS01__vt14(Rock_8029C7DC *self);
}

extern "C" {

void TORockJungleS01__vt16(s32 arg0);
void *__dt__15TORockJungleS01Fv(void *arg0, s16 arg1);
void *create__15TORockJungleS01FPv(void *arg0);
void free_globals__15TORockJungleS01Fv(void);
M2C_UNK play_sound_effect(M2C_UNK, s32, M2C_UNK, M2C_UNK);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TLobby__sub_803DA16C(void*);
void free_collision_body_parts(void *);
void unregister_object_by_id(void *);
void __dl__7TObjectFPv(void *);
void __dt__18TORockCaveBrakableFv(void *, int);
void *__nw__7TObjectFUl(int);
void queue_destruction__7TObjectFv(void *);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

void TORockJungleS01__vt16(s32 arg0) {
    play_sound_effect(0x4BC19, arg0 + 0x38, 0, 0);
}

void TORockJungleS01__vt14(Rock_8029C7DC *self) {
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
        VecCopy__FP3VecPC3Vec(&v, &off.v[i]);
        push_matrix_from(identity_matrix);
        rotate_matrix_y(0, self->rotY);
        rotate_vector_by_matrix(0, &v, &v);
        pop_matrix();
        VecCopy__FP3VecPC3Vec(&p.pos, &self->pos);
        vec3_add_to(&p.pos, &v);
        p.f40 = (s32)get_model__15TORockJungleS01Fi(1);
        p.f44 = get_jungle_rock_texture_resource(1);
        o = __nw__7TObjectFUl(0x234);
        if (o != NULL) {
            construct_debris__8TObjChipFPvPvPv(o, tl_05, &p);
        }
    }
}

void *create__15TORockJungleS01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC0);
    if (o != NULL) {
        o = TORockJungleS01__ct((u8 *)(o), (s32)(arg0));
    }
    return o;
}

extern M2C_UNK __vt__15TORockJungleS01[];

void *__dt__15TORockJungleS01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TORockJungleS01;
        if (M2C_FIELD(arg0, void **, 0xBC) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xBC)); M2C_FIELD(arg0, M2C_UNK *, 0xBC) = 0; }
        unregister_object_by_id(arg0);
        free_collision_body_parts(arg0);
        __dt__18TORockCaveBrakableFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern u32 TORockJungleS01__bml_resource;
extern u32 TORockJungleS01__texture_resource;

typedef char RecoveredGlobal_8029C9C8_lbl_804DC3A0_size[sizeof(RecoveredGlobal_8029C9C8_lbl_804DC3A0) == 0x84 ? 1 : -1];
typedef char RecoveredGlobal_8029C9C8_lbl_804DC424_size[sizeof(RecoveredGlobal_8029C9C8_lbl_804DC424) == 0x24 ? 1 : -1];
typedef char RecoveredGlobal_8029C9C8___vt__15TORockJungleS01_size[sizeof(RecoveredGlobal_8029C9C8___vt__15TORockJungleS01) == 0x50 ? 1 : -1];
u8 *TORockJungleS01__ct(u8 *arg0, s32 arg1) {
    struct CopyStack_8029C9C8 { u8 bytes[0x3C]; };
    CopyStack_8029C9C8 copy_storage_8029C9C8;
    s32 temp_r0;
    s32 temp_r4;
    TORockCaveBrakable__ct((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8029C9C8___vt__15TORockJungleS01 *)&__vt__15TORockJungleS01).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3D3C;
    ((VObj_18_1a504b *)(arg0))->m5(arg1);
    M2C_FIELD(arg0, u8 **, 0x34) = get_model__15TORockJungleS01Fi(0);
    M2C_FIELD(arg0, s32 *, 0x24) = get_jungle_rock_texture_resource((s32)((int) (0)));
    M2C_FIELD(arg0, f32 *, 0xB0) = (f32) (lbl_805DDD1C + M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x34), void **, 4), f32 *, 0x14));
    init_collision_body_parts((void *) (arg0), (void *) (&rock_jungle_collision_body_parts.value), (int) (1));
    refresh_collision_body_centers((void *) (arg0));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0xB8) = (s32) M2C_FIELD(arg0, s32 *, 0x84);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xB8);
    if ((temp_r0 < 0) || (temp_r0 >= 0x100)) {
        M2C_FIELD(arg0, s32 *, 0xB8) = -1;
    }
    temp_r4 = arg1 - 4;
    *(M2CCopy_3C *)(copy_storage_8029C9C8.bytes) = *(const M2CCopy_3C *)(temp_r4 + 4);
    VecCopy__FP3VecPC3Vec((void *) ((copy_storage_8029C9C8.bytes + 0x24)), (void *) (&rock_jungle_vec3_table.value));
    M2C_FIELD(arg0, s32 *, 0xBC) = create__10TObjMapCsnFi((void *) ((copy_storage_8029C9C8.bytes)));
    return arg0;
}

s32 get_jungle_rock_texture_resource(s32 a) {
    if ((*(void * *)&TORockJungleS01__texture_resource) != 0) return (s32)(*(void * *)&TORockJungleS01__texture_resource);
    return 0;
}

u8 *get_model__15TORockJungleS01Fi(s32 arg0) {
    if ((void *) (*(u8 * *)&TORockJungleS01__bml_resource) != NULL) {
        return get_bml_model((*(u8 * *)&TORockJungleS01__bml_resource), arg0);
    }
    return NULL;
}

void free_globals__15TORockJungleS01Fv(void) {
    if ((u32) TORockJungleS01__texture_resource != 0U) {
        TLobby__sub_803DA16C((void*)TORockJungleS01__texture_resource);
        safe_free__23TAdSinglePlyChrSelectGCFUi(TORockJungleS01__texture_resource);
        TORockJungleS01__texture_resource = 0U;
    }
    if ((u32) TORockJungleS01__bml_resource != 0U) {
        TLobby__sub_8001FE7C((void*)TORockJungleS01__bml_resource, 1);
        TORockJungleS01__bml_resource = 0U;
    }
}
void load_resources__15TORockJungleS01Fv(void) {
    void *o;
    o = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
    if (o != NULL) {
        o = load_resource_from_descriptor(o, 1, TORockJungleS01_resource_descriptor, 0, 0, 0);
    }
    TORockJungleS01__bml_resource = (u32)o;
    switch (get_global_state__14TOKeyMachine01Fv()) {
    case 27:
        TORockJungleS01__texture_resource = load_gvm_texture_file(lbl_804658EC);
        break;
    case 26:
        TORockJungleS01__texture_resource = load_gvm_texture_file(lbl_80465904);
        break;
    case 25:
    default:
        TORockJungleS01__texture_resource = load_gvm_texture_file(lbl_8046591C);
        break;
    }
    add_entry__11TMotorcycleFsiiff(0x3E, get_model__15TORockJungleS01Fi(0), get_jungle_rock_texture_resource(0), lbl_805DDD20, lbl_805DDD24);
}

}
