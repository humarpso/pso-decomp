#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct E_800AC9DC { u8 pad[8]; s32 x8; s32 xc; };

struct G_800AC9DC { u8 pad[0x42c]; E_800AC9DC *tbl; };

struct O_800AC9DC { u8 pad[0x24]; s32 x24; u8 pad2[0xc]; s32 x34; };

struct Sub_800ACA10 { u8 pad[0x18]; s32 level; };

struct Obj_800ACA10 { u8 pad[0x2B0]; Sub_800ACA10 *sub; };

typedef struct O_800AC5EC {
    u8 pad0[0x18];
    void *vptr;
    u8 pad1c[0x3C4 - 0x1C];
    void *objs[2];
} O_800AC5EC;

struct Anim_800AC318 { s32 motions; void *actions; s32 initial_action; s32 counts; };

struct Pair_800AC318 { s32 a; s32 b; };

struct Bodies_800AC318 { s32 a; s32 b; s32 model; s32 textures; };

struct Res_800AC318 { u8 pad[0x42C]; Bodies_800AC318 *bodies; Pair_800AC318 *motions; };

struct Act_800AC318 { s32 a; s32 idx; f32 c; s32 d; };

extern "C" {
extern u32 lbl_805D50B8;
void TObjPlayer__sub_800AC9DC(O_800AC9DC *self, s32 i);
extern s32 lbl_805D5550;
s32 calc_technique_level__11TObjEneMojaFPv(Obj_800ACA10 *self);
void queue_destruction__7TObjectFv(void *);
void TObjPlayer__sub_800C68FC(void *, int);
void unlink_enemy_group_relations(void *);
void free_collision_body_parts(void *);
void __dl__7TObjectFPv(void *);
void __destroy_arr(void *, void *, int, int);
void __dt__18TObjEneMe3SinowZoaFPvs(void *, int);
extern u8 TObjPlayer__sub_800D7C58[];
extern u8 lbl_8049168C[];
O_800AC5EC *TObjPlayer__sub_800AC5EC(O_800AC5EC *arg0, s16 arg1);
s32 dispatch_shared_handler_a__6TLobbyFPv(int);
s32 register_object__6TLobbyFPv(int);
s32 dispatch_shared_handler_b__6TLobbyFPv(int);
s32 register_boss__6TLobbyFPv(int);
s32 check_v2_mode__9TObjEneDDFv();
u8 *load_enemy_bml_resource_named(void *, void *);
u8 *load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
void *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
void draw_trail_with_colors(void *, s32, s32, s32, s32);
void *init_trail_buffer__11TBoss4Type3FPvifff(void *, s32, f32, f32, f32);
s32 *alloc_buffer__11TOBoss4RockFPv(s32);
void spawn_npc_enemy__6TLobbyFsiiiff(int, int, int, void *, f32, f32);
extern u8 lbl_8043AEDC[];
extern u8 lbl_804914F4[];
extern Act_800AC318 lbl_80491504[];
extern u32 lbl_805D50A8;
extern u32 lbl_805D50AC;
extern u32 lbl_805D50B0;
extern u32 lbl_805D50B4;
extern u32 lbl_805D50B8;
extern u32 lbl_805D50BC;
extern u32 lbl_805D50C0;
extern s32 lbl_805D50C4;
extern const f32 lbl_805D9BA0;
extern const f32 lbl_805D9BAC;
extern const f32 lbl_805D9BC0;
extern const f32 lbl_805D9BC8;
extern const f32 lbl_805D9BCC;
void load_shark_resources__6TLobbyFv(void);
}

extern "C" {

void TObjPlayer__sub_800AC9D8(void);
void TObjPlayer__sub_800ACA0C(void);
void * create__12TObjEneSharkFPv(void *arg0);
void free_resources__12TObjEneSharkFv(void);
void TLobby__sub_8001FE7C(void*, int);
void *TObjControl__ct(void *, void *);
void *TObjEneShark__ct(void *, void *, void *);
void __dt__11TBoss4Type3FPvs(void*, int);
void *__nw__7TObjectFUl(int);
void free__11TOBoss4RockFUi(void*);

extern void *tl_04;

void * create__12TObjEneSharkFPv(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x43C);
    if (o2 != NULL) {
        o2 = TObjEneShark__ct(o2, o, arg0);
    }
    return o2;
}

extern u32 lbl_805D50A8;
extern u32 lbl_805D50AC;
extern u32 lbl_805D50B0;
extern u32 lbl_805D50B4;
extern u32 lbl_805D50B8;
extern u32 lbl_805D50BC;
extern u32 lbl_805D50C0;

void free_resources__12TObjEneSharkFv(void) {
    if ((u32) lbl_805D50A8 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D50A8);
        lbl_805D50A8 = 0U;
    }
    if ((u32) lbl_805D50AC != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D50AC);
        lbl_805D50AC = 0U;
    }
    if ((u32) lbl_805D50B0 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D50B0);
        lbl_805D50B0 = 0U;
    }
    if ((u32) lbl_805D50B4 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D50B4);
        lbl_805D50B4 = 0U;
    }
    if ((u32) lbl_805D50C0 != 0U) {
        __dt__11TBoss4Type3FPvs((void*)lbl_805D50C0, 1);
        lbl_805D50C0 = 0U;
    }
    if ((u32) lbl_805D50BC != 0U) {
        __dt__11TBoss4Type3FPvs((void*)lbl_805D50BC, 1);
        lbl_805D50BC = 0U;
    }
    if ((u32) lbl_805D50B8 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D50B8, 1);
        lbl_805D50B8 = 0U;
    }
}

#define G_A8 (*(s32 **)&lbl_805D50A8)
#define G_AC (*(s32 **)&lbl_805D50AC)
#define G_B0 (*(s32 **)&lbl_805D50B0)
#define G_B4 (*(s32 **)&lbl_805D50B4)
#define G_B8 (*(u8 **)&lbl_805D50B8)
#define G_BC (*(void **)&lbl_805D50BC)
#define G_C0 (*(void **)&lbl_805D50C0)
#define RES ((Res_800AC318 *)G_B8)
void load_shark_resources__6TLobbyFv(void) {
    void *p;
    s32 i;
    if (check_v2_mode__9TObjEneDDFv() != 0) {
        G_B8 = load_enemy_bml_resource_named(lbl_804914F4, lbl_8043AEDC);
    } else {
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != NULL) {
            p = load_resource_from_descriptor(p, 1, lbl_804914F4, 0, 0, 0);
        }
        G_B8 = (u8 *)p;
    }
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0x18);
    if (p != NULL) {
        p = init_trail_buffer__11TBoss4Type3FPvifff(p, 2, lbl_805D9BC8, lbl_805D9BAC, lbl_805D9BC0);
    }
    G_BC = p;
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0x18);
    if (p != NULL) {
        p = init_trail_buffer__11TBoss4Type3FPvifff(p, 2, lbl_805D9BC8, lbl_805D9BAC, lbl_805D9BC0);
    }
    G_C0 = p;
    draw_trail_with_colors(G_BC, RES->bodies->model, RES->motions[lbl_80491504[3].idx].b, 5, 8);
    draw_trail_with_colors(G_C0, RES->bodies->model, RES->motions[lbl_80491504[4].idx].b, 0xA, 0xD);
    G_A8 = alloc_buffer__11TOBoss4RockFPv(0xC);
    G_AC = alloc_buffer__11TOBoss4RockFPv(0xC);
    G_B0 = alloc_buffer__11TOBoss4RockFPv(0xC);
    G_B4 = alloc_buffer__11TOBoss4RockFPv(0xC);
    G_A8[0] = register_boss__6TLobbyFPv(0x4F);
    G_A8[1] = register_boss__6TLobbyFPv(0x50);
    G_A8[2] = register_boss__6TLobbyFPv(0x51);
    G_AC[0] = dispatch_shared_handler_b__6TLobbyFPv(0x54);
    G_AC[1] = dispatch_shared_handler_b__6TLobbyFPv(0x55);
    G_AC[2] = dispatch_shared_handler_b__6TLobbyFPv(0x56);
    G_B0[0] = register_object__6TLobbyFPv(0x4E);
    G_B0[1] = register_object__6TLobbyFPv(0x4F);
    G_B0[2] = register_object__6TLobbyFPv(0x50);
    G_B4[0] = dispatch_shared_handler_a__6TLobbyFPv(0x4E);
    G_B4[1] = dispatch_shared_handler_a__6TLobbyFPv(0x4F);
    G_B4[2] = dispatch_shared_handler_a__6TLobbyFPv(0x50);
    lbl_805D50C4 = 0;
    {
        s16 ids[3] = { 0x2F, 0x30, 0x31 };
        Anim_800AC318 anim = { (s32)RES->motions, lbl_80491504, 2, 0xC0000 };
        for (i = 0; i < 3; i++) {
            spawn_npc_enemy__6TLobbyFsiiiff(ids[i], RES->bodies[i].model, RES->bodies[i].textures, &anim,
                lbl_805D9BCC, lbl_805D9BA0);
        }
    }
}

O_800AC5EC *TObjPlayer__sub_800AC5EC(O_800AC5EC *arg0, s16 arg1) {
    s32 i;
    if (arg0 != NULL) {
        arg0->vptr = lbl_8049168C;
        for (i = 0; i < 2; i++) {
            if (arg0->objs[i] != NULL) {
                queue_destruction__7TObjectFv(arg0->objs[i]);
                arg0->objs[i] = NULL;
            }
        }
        unlink_enemy_group_relations(arg0);
        free_collision_body_parts(arg0);
        __destroy_arr((u8 *)arg0 + 0x3CC, TObjPlayer__sub_800D7C58, 0x1C, 4);
        __dt__18TObjEneMe3SinowZoaFPvs((u8 *)arg0 + 0x3A8, -1);
        TObjPlayer__sub_800C68FC(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TObjPlayer__sub_800AC9D8(void) {  }

void TObjPlayer__sub_800AC9DC(O_800AC9DC *self, s32 i) {
    self->x34 = (*(G_800AC9DC * *)&lbl_805D50B8)->tbl[i].x8;
    self->x24 = (*(G_800AC9DC * *)&lbl_805D50B8)->tbl[i].xc;
}

void TObjPlayer__sub_800ACA0C(void) {  }
s32 calc_technique_level__11TObjEneMojaFPv(Obj_800ACA10 *self) {
    Sub_800ACA10 *p = self->sub;
    s32 v = 0;
    if (p != 0) {
        v = p->level;
        if (v < 0) {
            return 0;
        }
        if (lbl_805D5550 == 3) {
            if (v > 0x1D) {
                v = 0x1D;
            }
            return v;
        }
        if (v > 0xE) {
            v = 0xE;
        }
    }
    return v;
}

}
