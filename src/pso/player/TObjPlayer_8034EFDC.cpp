#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8034EFDC { char pad[0x18]; };
struct VObj_8034EFDC : Base_8034EFDC {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63(s32, void *);
};

struct VBase_18 { char pad[0x18]; };

struct VObj_18 : VBase_18 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual s16 m14();
};

struct RecoveredGlobal_8034F754_lbl_804F0A00 {
    M2C_UNK value;
    u8 remaining[0xF4];
};

struct O_8034F590 { u8 pad[0x40]; u32 flags; u8 pad2[0x70 - 0x44]; void *f70; void *f74; };

struct Elem_80125628 { u8 pad[0x1c]; u8 f1c[0x2c - 0x1c]; };

struct Obj_80125628 { u8 pad[0xa4]; Elem_80125628 *elems; };

struct Ctx_80125628 { Obj_80125628 *obj; s32 idx; };

struct Self_8012573C { u8 pad[0x23c]; u32 f23c; };

struct Out_8012573C { u8 pad[0x40]; u32 f40; u8 pad44[0x50 - 0x44]; s32 f50; u8 pad54[0x70 - 0x54]; void *f70; void *f74; s32 f78; s32 f7c; };

struct P_8034F020 { u8 pad0[0x1F8]; s32 f1F8; };

typedef struct SlicerLaunchData_8012D9C8 {
    u16 player; u16 pad;
    void *textures; void *model; u32 weapon;
    s16 kind, stage; f32 multiplier; f32 color[4];
    s32 facing, spin; f32 first[3], second[3];
} SlicerLaunchData_8012D9C8;

struct Elem_8034F204 { u8 x[0x2C]; };

struct Tbl_8034F204 { u8 pad[0x1C]; Elem_8034F204 arr[1]; };

typedef s32 M2C_UNK;
struct Info_8034F4FC {
    u8 pad0[0x10];
    s32 f10;
    u8 pad14[0x80 - 0x14];
};

extern "C" {
void TObjPlayer__sub_8034F470(s32 arg0, s32 arg1);
int fn_80308244(void);
u32 TLobby__sub_80101AB0(void);
int fn_80308244(void);
void TObjPlayer__sub_8034F470(s32 arg0, s32 arg1);
void * enter_timed_state__10TObjPlayerFPv(void *, M2C_UNK, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *TObjPlayer__sub_8034F1AC(u8 *arg0);
void * init_photon_state__10TObjPlayerFPv(void *, M2C_UNK, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *TObjPlayer__sub_8034F418(u8 *arg0);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *TObjPlayer__sub_8034F7B8(s32 arg0);
void TObjPlayer__sub_80120D50(void *, void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
extern M2C_UNK lbl_804F0A00[];
u8 *TObjPlayer__sub_8034F754(u8 *arg0, u8 *arg1, s32 _w2);
void TObjPlayer__sub_8034F470(s32 arg0, s32 arg1);
void TObjPlayer__sub_8034F590(void *a, O_8034F590 *o);
u32 TLobby__sub_80101AB0(void);
void TObjPlayer__sub_8034F4AC(s32 arg0, s32 arg1);
s32 get_player_list__10TObjPlayerFv();
M2C_UNK rotate_matrix_z(M2C_UNK, s32);
void TObjPlayer__sub_8034F020(P_8034F020 *arg0);
void TObjPlayer__sub_801295FC(SlicerLaunchData_8012D9C8 *);
u16 obj_getField1c(void *);
u32 get_field_d8__10TObjPlayerFPv(void *);
s16 TObjPlayer__sub_801D2F4C(void *);
s16 TObjPlayer__sub_801D2EA8(void *);
f32 query_extended_state__10TObjPlayerFPv(void *);
void TObjPlayer__sub_80120304(f32 *, void *);
void copy_vec4__13TRaderMapCoreFPvPv(f32 *, f32 *);
void draw_icon__10TObjPlayerFPvii(void *, int, f32 *);
u8 *create__10TTecSlicerFPUs(SlicerLaunchData_8012D9C8 *);
extern const f32 lbl_805DFDF8;
void TObjPlayer__sub_8034F268(u8 *weapon);
M2C_UNK TObjEneDellBiter__sub_80087350(void *, M2C_UNK);
void *TPhotonMylla__sub_80154CB4(s32);
void TObjPlayer__sub_8034F204(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, s32);
M2C_UNK fill_status_info__10TObjPlayerFPvPv(u32, void *);
M2C_UNK init_vtable_c4__10TObjPlayerFPv(void *, s32, void *);
void *__nw__7TObjectFUl(u32);
M2C_UNK TTecRaFoie__sub_802385EC(void *, void *, s32, s32, f32);
M2C_UNK TObjPlayer__sub_802E449C(void *);
extern s32 tl_05;
extern s32 tl_particle;
extern const f32 lbl_805DFE00;
s32 TObjPlayer__sub_8034F4FC(u32 a0, s32 a1);
}

extern "C" {

void *item_equip_variant_deleting_dtor_8034F104(void *arg0, s16 arg1);
void *item_equip_variant_deleting_dtor_8034F36C(void *arg0, s16 arg1);
void *item_equip_variant_deleting_dtor_8034F6FC(void *arg0, s16 arg1);
void *item_equip_variant_deleting_dtor_8034F948(void *arg0, s16 arg1);
void TObjPlayer__sub_8034F8B8(void* p);
void TObjPlayer__sub_8034F900(void* p);
int apply_recoil_forward__10TObjPlayerFPv(void* p);
void clamp_angles__10TObjPlayerFPv(void* p);
void dispatch_by_state__10TObjPlayerFPv(void *arg0);
void handle_turn_input__10TObjPlayerFPv(void *arg0);
void reset_aim_angles__10TObjPlayerFPv(void* p);
void reset_animation_flags__10TObjPlayerFPv(void* p);
void reset_shoot_models__10TObjPlayerFPv(void* p);
int shrink_field1f8__10TObjPlayerFPv(void* p);
void spawn_effect__10TObjPlayerFPv(void *arg0);
M2C_UNK rotate_matrix_z(M2C_UNK, s32);
M2C_UNK rotate_matrix_x(M2C_UNK, s32);
M2C_UNK TObjEneDellBiter__sub_80087350(void *, M2C_UNK);
int TObjPlayer__sub_80115BC0(void*, void*, void*);
int TObjPlayer__sub_8011E87C(void*, void*);
int TObjPlayer__sub_80120BBC(void*, void*);
void free_obj_heap__10TObjPlayerFPv(void *);
s32 get_player_list__10TObjPlayerFv();
void item_equip_variant_deleting_dtor_80120CF8(void *, int);
void *item_equip_variant_deleting_dtor_8034F104(void *arg0, s16 arg1);
void *item_equip_variant_deleting_dtor_8034F36C(void *arg0, s16 arg1);
void *item_equip_variant_deleting_dtor_8034F6FC(void *arg0, s16 arg1);
void set_status_flags__10TObjPlayerFPvUi(void *, int);

void spawn_effect__10TObjPlayerFPv(void *arg0) {
    u8 sp8[0x18];
    struct VObj_8034EFDC *o = (struct VObj_8034EFDC *)M2C_FIELD(arg0, void **, 0xF0);
    o->m63(0x30, sp8);
    TObjEneDellBiter__sub_80087350(sp8, 0x1D0);
}

void TObjPlayer__sub_8034F020(P_8034F020 *arg0) {
    switch (get_player_list__10TObjPlayerFv()) {
    case 1:
        ((s32)rotate_matrix_z((M2C_UNK)(0), (s32)(arg0->f1F8)));
        break;
    }
}

void reset_shoot_models__10TObjPlayerFPv(void* p) { TObjPlayer__sub_80120BBC(p, (void*)49); TObjPlayer__sub_8011E87C(p, (void*)0); TObjPlayer__sub_8011E87C(p, (void*)1); }
int apply_recoil_forward__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_80115BC0((void*)((char*)p + 0x1f8), (void*)(1820), (void*)(13653)); }
int shrink_field1f8__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_80115BC0((void*)((char*)p + 0x1f8), (void*)(-4551), (void*)(0)); }

extern M2C_UNK lbl_804F0810[];

void *item_equip_variant_deleting_dtor_8034F104(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F0810;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804F0810[];

void *enter_timed_state__10TObjPlayerFPv(void *arg0, M2C_UNK _w1, void * _w2) {
    TObjPlayer__sub_80120D50((void *)(arg0), (void *)(_w1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F0810;
    set_status_flags__10TObjPlayerFPvUi(arg0, 1);
    M2C_FIELD(arg0, u32 *, 0x1F8) = 13653;
    return arg0;
}

extern M2C_UNK lbl_804F0908[];

u8 *TObjPlayer__sub_8034F1AC(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1FC));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)enter_timed_state__10TObjPlayerFPv((void *)(temp_r3), (M2C_UNK)(tl_05), (void *)(arg0))));
        }
        return var_r0;
    }
    return NULL;
}
void TObjPlayer__sub_8034F204(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *temp_r5;
    void *temp_r3;
    temp_r3 = TPhotonMylla__sub_80154CB4(arg2);
    if (temp_r3 != NULL) {
        temp_r5 = M2C_FIELD(temp_r3, u8 **, 0xA4);
        if ((temp_r5 != NULL) && (arg3 < (s32) M2C_FIELD(temp_r3, s32 *, 0xA8))) {
            TObjEneDellBiter__sub_80087350(&((Tbl_8034F204 *)temp_r5)->arr[arg3], 0x1BF);
        }
    }
}

void TObjPlayer__sub_8034F268(u8 *weapon) {
    f32 tmp[4];
    SlicerLaunchData_8012D9C8 launch;
    u8 *t;
    TObjPlayer__sub_801295FC(&launch);
    launch.player = obj_getField1c(M2C_FIELD(weapon, u8 **, 0xF0));
    launch.weapon = get_field_d8__10TObjPlayerFPv(weapon);
    launch.textures = M2C_FIELD(weapon, void **, 0x24);
    launch.model = M2C_FIELD(weapon, void **, 0x188);
    launch.kind = TObjPlayer__sub_801D2F4C(M2C_FIELD(weapon, u8 **, 0xF0) + 0x7CC);
    launch.stage = TObjPlayer__sub_801D2EA8(M2C_FIELD(weapon, u8 **, 0xF0) + 0x7CC);
    launch.multiplier = query_extended_state__10TObjPlayerFPv(M2C_FIELD(weapon, u8 **, 0xF0));
    TObjPlayer__sub_80120304(tmp, weapon);
    copy_vec4__13TRaderMapCoreFPvPv(launch.color, tmp);
    launch.facing = M2C_FIELD(M2C_FIELD(weapon, u8 **, 0xF0), s32 *, 0x60);
    launch.spin = 0;
    draw_icon__10TObjPlayerFPvii(weapon, 3, launch.first);
    draw_icon__10TObjPlayerFPvii(weapon, 2, launch.second);
    t = create__10TTecSlicerFPUs(&launch);
    if (t != NULL) {
        M2C_FIELD(t, s32 *, 0x5C) += 0x4000;
        M2C_FIELD(t, f32 *, 0x68) = lbl_805DFDF8;
        M2C_FIELD(t, f32 *, 0x6C) = lbl_805DFDF8;
        M2C_FIELD(t, f32 *, 0x70) = lbl_805DFDF8;
        M2C_FIELD(t, s32 *, 0x13C) = 0;
    }
}

void *item_equip_variant_deleting_dtor_8034F36C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F0908;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804F0908[];

void *init_photon_state__10TObjPlayerFPv(void *arg0, M2C_UNK _w1, void * _w2) {
    TObjPlayer__sub_80120D50((void *)(arg0), (void *)(_w1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F0908;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F4) = ((M2C_UNK *)TObjPlayer__sub_8034F204);
    set_status_flags__10TObjPlayerFPvUi(arg0, 2);
    return arg0;
}

u8 *TObjPlayer__sub_8034F418(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1F8));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)init_photon_state__10TObjPlayerFPv((void *)(temp_r3), (M2C_UNK)(tl_05), (void *)(arg0))));
        }
        return var_r0;
    }
    return NULL;
}

void TObjPlayer__sub_8034F470(s32 arg0, s32 arg1) {
    u32 temp_r3 = TLobby__sub_80101AB0();
    if (temp_r3 != 0U) {
        TObjPlayer__sub_8034F4FC((u32)(temp_r3), (s32)(arg1));
    }
}

void TObjPlayer__sub_8034F4AC(s32 arg0, s32 arg1) {
    Ctx_80125628 *ctx = (Ctx_80125628 *)arg1;
    u32 p = TLobby__sub_80101AB0();
    if (p != 0U) {
        TObjPlayer__sub_8034F4FC((u32)(p), (s32)((s32)ctx->obj->elems[ctx->idx].f1c));
    }
}

s32 TObjPlayer__sub_8034F4FC(u32 a0, s32 a1) {
    Info_8034F4FC info;
    void *o;
    TObjPlayer__sub_802E449C(&info);
    fill_status_info__10TObjPlayerFPvPv(a0, &info);
    VecCopy__FP3VecPC3Vec(&info, a1);
    info.f10 = 0xA;
    o = __nw__7TObjectFUl(0xC8);
    if (o != NULL) {
        init_vtable_c4__10TObjPlayerFPv(o, tl_05, &info);
    }
    o = __nw__7TObjectFUl(0x64);
    if (o != NULL) {
        ((M2C_UNK (*)(f32, void *, void *, s32, s32))TTecRaFoie__sub_802385EC)(lbl_805DFE00, o, &info, 0, tl_particle);
    }
}

void TObjPlayer__sub_8034F590(void *a, O_8034F590 *o) {
    o->f74 = (void *)TObjPlayer__sub_8034F4AC;
    o->f70 = (void *)TObjPlayer__sub_8034F470;
    o->flags |= 0x80;
}

void handle_turn_input__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = get_player_list__10TObjPlayerFv();
    switch (temp_r3) {
    case 2:
        rotate_matrix_x(0, M2C_FIELD(arg0, s32 *, 0x1F8));
        return;
    case 3:
        rotate_matrix_x(0, M2C_FIELD(arg0, s32 *, 0x1FC));
        return;
    case 5:
        rotate_matrix_z(0, M2C_FIELD(arg0, s32 *, 0x200));
        return;
    case 4:
        rotate_matrix_z(0, -M2C_FIELD(arg0, s32 *, 0x200));
        return;
    }
}

void clamp_angles__10TObjPlayerFPv(void* p) { TObjPlayer__sub_80115BC0((void*)((char*)p + 0x1f8), (void*)((void*)1820), (void*)((void*)7281)); TObjPlayer__sub_80115BC0((void*)((char*)p + 0x1fc), (void*)((void*)-1820), (void*)((void*)-5461)); TObjPlayer__sub_80115BC0((void*)((char*)p + 0x200), (void*)((void*)1820), (void*)((void*)9102)); }

void reset_aim_angles__10TObjPlayerFPv(void* p) { TObjPlayer__sub_80115BC0((void*)((char*)p + 0x1f8), (void*)((void*)-3640), (void*)((void*)0)); TObjPlayer__sub_80115BC0((void*)((char*)p + 0x1fc), (void*)((void*)2730), (void*)((void*)0)); TObjPlayer__sub_80115BC0((void*)((char*)p + 0x200), (void*)((void*)-1820), (void*)((void*)0)); }

extern M2C_UNK lbl_804F0A00[];

void *item_equip_variant_deleting_dtor_8034F6FC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F0A00;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_8034F754_lbl_804F0A00_size[sizeof(RecoveredGlobal_8034F754_lbl_804F0A00) == 0xF8 ? 1 : -1];
u8 *TObjPlayer__sub_8034F754(u8 *arg0, u8 *arg1, s32 _w2) {
    TObjPlayer__sub_80120D50((void *)(arg0), (void *)(arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8034F754_lbl_804F0A00 *)&lbl_804F0A00).value;
    set_status_flags__10TObjPlayerFPvUi((void *)(arg0), (int)(0x8000));
    M2C_FIELD(arg0, s32 *, 0x1F8) = -0x1C71;
    M2C_FIELD(arg0, s32 *, 0x1FC) = -0x1555;
    M2C_FIELD(arg0, s32 *, 0x200) = 0x238E;
    return arg0;
}

u8 *TObjPlayer__sub_8034F7B8(s32 arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != 0) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x204));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(TObjPlayer__sub_8034F754((u8 *)(temp_r3), (u8 *)(tl_05), (s32)(arg0)));
        }
        return var_r0;
    }
    return NULL;
}
#include "types.h"
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include "types.h"
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

void dispatch_by_state__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = get_player_list__10TObjPlayerFv();
    switch (temp_r3) {
    case 2:
        rotate_matrix_z(0, M2C_FIELD(arg0, s32 *, 0x1F8));
        return;
    case 8:
        rotate_matrix_z(0, M2C_FIELD(arg0, s32 *, 0x1FC));
        return;
    }
}

void reset_animation_flags__10TObjPlayerFPv(void* p) { TObjPlayer__sub_80120BBC(p, (void*)49); TObjPlayer__sub_8011E87C(p, (void*)0); TObjPlayer__sub_8011E87C(p, (void*)1); }

void TObjPlayer__sub_8034F8B8(void* p) { TObjPlayer__sub_80115BC0((void*)((char*)p + 0x1f8), (void*)((void*)-8192), (void*)((void*)-30947)); TObjPlayer__sub_80115BC0((void*)((char*)p + 0x1fc), (void*)((void*)-1820), (void*)((void*)-7281)); }

void TObjPlayer__sub_8034F900(void* p) { TObjPlayer__sub_80115BC0((void*)((char*)p + 0x1f8), (void*)((void*)16384), (void*)((void*)0)); TObjPlayer__sub_80115BC0((void*)((char*)p + 0x1fc), (void*)((void*)3640), (void*)((void*)0)); }

extern M2C_UNK lbl_804F0AF8[];

void *item_equip_variant_deleting_dtor_8034F948(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F0AF8;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
