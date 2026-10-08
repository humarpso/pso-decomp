#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Vec_800B86B4 { f32 x, y, z; };
struct G_800B86B4 {
    s32 a[2]; s32 b[2]; s32 c[2]; s32 d[2];
    Vec_800B86B4 v;
};
struct Spawn_800B86B4 { s32 a, b, c, d; };
struct Obj_800B86B4 { u8 pad[0x18]; s32 x18; };
struct Wolf_800B86B4 { u8 pad[0x42c]; s32 *p42c; s32 x430; };

struct O_800B8A24 { s32 a; s32 b; u16 c; };

struct Globals_800B8A40 {
    u8 pad[0x2c];
    u8 chain0[0xc];
    u8 list0[0x8];
    u8 chain1[0xc];
    u8 list1[0x8];
};

extern "C" {
void TObjEneBm5Wolf__sub_800B896C(u8 *arg0, void **arg1, void **arg2);
void TObjEneBm5Wolf__sub_800B89A4(u8 *arg0, void ***arg1, void **arg2);
f32 calc_boss4_scale__10TObjPlayerFi(s32);
s32 actor_rand_int(s32 arg0, s32 arg1);
void TObjEneBm5Wolf__sub_800B8A24(O_800B8A24 *self);
s32 dispatch_shared_handler_a__6TLobbyFPv(s32);
s32 register_object__6TLobbyFPv(s32);
s32 dispatch_shared_handler_b__6TLobbyFPv(s32);
s32 register_boss__6TLobbyFPv(s32);
s32 check_v2_mode__9TObjEneDDFv(void);
Wolf_800B86B4 *load_enemy_bml_resource_named(void *, void *);
Wolf_800B86B4 *load_enemy_bml_resource(void *);
s32 spawn_npc_enemy__6TLobbyFsiiiff(int, int, int, void *, f32, f32);
extern s32 lbl_8043B3A8[];
extern s32 lbl_8043B3B0[];
extern s32 lbl_8043B3B8[];
extern s32 lbl_8043B3C0[];
extern Spawn_800B86B4 lbl_8043B574;
extern u8 lbl_8043B5C0[];
extern f32 lbl_804920EC[];
extern u8 lbl_804921B8[];
__declspec(section ".data") s32 TObjEneBm5Wolf__data_80500B40[2];
__declspec(section ".data") s32 lbl_80500B48[2];
__declspec(section ".data") s32 lbl_80500B50[2];
__declspec(section ".data") s32 lbl_80500B58[2];
Vec_800B86B4 lbl_80500B60;
u32 lbl_80500B6C[3];
u32 TObjEneBm5Wolf__data_80500B78[5];
u32 TObjEneBm5Wolf__data_80500B8C[3];
extern Wolf_800B86B4 *TObjEneBm5Wolf__bml_resource;
extern s32 TObjEneBm5Wolf__spawn_timer;
extern s32 TObjEneBm5Wolf__data_805D5128;
extern const f32 TObjEneBm5Wolf__data_805D9D78;
void* reset__14TObjEneBm5WolfFPv(void* p);
s32 __dt__14TObjEneBm5WolfFis(s32 arg0, s16 arg1);
void __register_global_object(void *obj, void *dtor, void *chain);
void register_global_objects__14TObjEneBm5WolfFv(void);
}

extern "C" {

s32 get_group_id__14TObjEneBm5WolfFPv(void* p);
s32 __dt__14TObjEneBm5WolfFis(s32 arg0, s16 arg1);
void apply_to_position__14TObjEneBm5WolfFPvPv(void* p, void* a1);
void *create__14TObjEneBm5WolfFPv(void *arg0);
s32 destroy__14TObjEneBm5WolfFis(s32 arg0, s16 arg1);
void play_sound__14TObjEneBm5WolfFPv(void *arg0);
void* reset__14TObjEneBm5WolfFPv(void* p);
void reset_fields__14TObjEneBm5WolfFPv(void* p);
void set_field8_from_obj__14TObjEneBm5WolfFPvi(void *arg0, s32 arg1);
void update__14TObjEneBm5WolfFPvPv(void* p, void* a1);
void *TObjEneBm5Wolf__ct(void *, void *, void *);
s32 find_entity_by_id(u16);
int __dl__FPv();
void *__nw__7TObjectFUl(int);
void* fn_800B8B00(void* p);
s16 obj_getField1c(s32);

extern void *tl_04;

void *create__14TObjEneBm5WolfFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x46C);
    if (o != NULL) {
        o = TObjEneBm5Wolf__ct(o, tl_04, arg0);
    }
    return o;
}

void load_resources__14TObjEneBm5WolfFv(void) {
    s32 i;

    if (check_v2_mode__9TObjEneDDFv() != 0) {
        TObjEneBm5Wolf__bml_resource = load_enemy_bml_resource_named(lbl_804921B8, lbl_8043B5C0);
    } else {
        TObjEneBm5Wolf__bml_resource = load_enemy_bml_resource(lbl_804921B8);
    }
    reset_fields__14TObjEneBm5WolfFPv(TObjEneBm5Wolf__data_80500B78);
    reset_fields__14TObjEneBm5WolfFPv(TObjEneBm5Wolf__data_80500B8C);
    TObjEneBm5Wolf__spawn_timer = 0;
    TObjEneBm5Wolf__data_805D5128 = 0;
    lbl_80500B60.x = TObjEneBm5Wolf__data_805D9D78;
    lbl_80500B60.y = TObjEneBm5Wolf__data_805D9D78;
    lbl_80500B60.z = TObjEneBm5Wolf__data_805D9D78;
    for (i = 0; i < 2; i++) {
        TObjEneBm5Wolf__data_80500B40[i] = register_boss__6TLobbyFPv(lbl_8043B3A8[i]);
        lbl_80500B48[i] = dispatch_shared_handler_b__6TLobbyFPv(lbl_8043B3B0[i]);
        lbl_80500B50[i] = register_object__6TLobbyFPv(lbl_8043B3B8[i]);
        lbl_80500B58[i] = dispatch_shared_handler_a__6TLobbyFPv(lbl_8043B3C0[i]);
    }
    {
    Spawn_800B86B4 sp = lbl_8043B574;
    sp.a = TObjEneBm5Wolf__bml_resource->x430;
    spawn_npc_enemy__6TLobbyFsiiiff(9, TObjEneBm5Wolf__bml_resource->p42c[6], TObjEneBm5Wolf__bml_resource->p42c[3], &sp, lbl_804920EC[3], TObjEneBm5Wolf__data_805D9D78);
    spawn_npc_enemy__6TLobbyFsiiiff(10, TObjEneBm5Wolf__bml_resource->p42c[2], TObjEneBm5Wolf__bml_resource->p42c[3], &sp, lbl_804920EC[3], TObjEneBm5Wolf__data_805D9D78);
    }
}

void update__14TObjEneBm5WolfFPvPv(void* p, void* a1) { TObjEneBm5Wolf__sub_800B89A4((u8 *)((void*)(a1)), (void ***)((void*)(p)), (void **)((void*)((char*)p + 0x4))); }
void apply_to_position__14TObjEneBm5WolfFPvPv(void* p, void* a1) { TObjEneBm5Wolf__sub_800B896C((u8 *)((void*)(a1)), (void **)((void*)(p)), (void **)((void*)((char*)p + 0x4))); }
void reset_fields__14TObjEneBm5WolfFPv(void* p) { *(s32*)((char*)p + 0x0) = 0; *(s32*)((char*)p + 0x4) = 0; }
s32 __dt__14TObjEneBm5WolfFis(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}
void* reset__14TObjEneBm5WolfFPv(void* p) { reset_fields__14TObjEneBm5WolfFPv((void*)(p)); return p; }
void play_sound__14TObjEneBm5WolfFPv(void *arg0) {
    find_entity_by_id(M2C_FIELD(arg0, u16 *, 8));
}
void set_field8_from_obj__14TObjEneBm5WolfFPvi(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 8) = obj_getField1c(arg1);
}

void TObjEneBm5Wolf__sub_800B896C(u8 *arg0, void **arg1, void **arg2) {
    u8 *temp_r0;
    temp_r0 = (u8 *)(*arg2);
    if (temp_r0 != NULL) {
        M2C_FIELD(arg0, void **, 0) = temp_r0;
        M2C_FIELD(*arg2, void **, 4) = arg0;
    } else {
        M2C_FIELD(arg0, void **, 0) = NULL;
        *arg1 = arg0;
    }
    *arg2 = arg0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

void TObjEneBm5Wolf__sub_800B89A4(u8 *arg0, void ***arg1, void **arg2) {
    void **temp_r4;
    u8 *temp_r6;
    temp_r6 = M2C_FIELD(arg0, u8 **, 0);
    if (temp_r6 != NULL) {
        M2C_FIELD(temp_r6, void ***, 4) = (void **) M2C_FIELD(arg0, void ***, 4);
    } else {
        *arg1 = M2C_FIELD(arg0, void ***, 4);
    }
    temp_r4 = M2C_FIELD(arg0, void ***, 4);
    if (temp_r4 != NULL) {
        *temp_r4 = M2C_FIELD(arg0, u8 **, 0);
        return;
    }
    *arg2 = M2C_FIELD(arg0, u8 **, 0);
}

s32 destroy__14TObjEneBm5WolfFis(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}

void TObjEneBm5Wolf__sub_800B8A24(O_800B8A24 *self) {
    self->a = 0;
    self->b = 0;
    self->c = 0xFFFF;
}

#pragma push
#pragma opt_propagation off
void register_global_objects__14TObjEneBm5WolfFv(void) {
    Globals_800B8A40 *g = (Globals_800B8A40 *)TObjEneBm5Wolf__data_80500B40;
    __register_global_object(((void *)reset__14TObjEneBm5WolfFPv((void*)(g->list0))), (void *)__dt__14TObjEneBm5WolfFis, g->chain0);
    __register_global_object(((void *)reset__14TObjEneBm5WolfFPv((void*)(g->list1))), (void *)__dt__14TObjEneBm5WolfFis, g->chain1);
}
#pragma pop

s32 actor_rand_int(s32 arg0, s32 arg1) {
    return (s32) ((f32) arg1 * calc_boss4_scale__10TObjPlayerFi(arg0));
}

s32 get_group_id__14TObjEneBm5WolfFPv(void* p) { return *(s32*)((char*)p + 0x3dc); }

}
