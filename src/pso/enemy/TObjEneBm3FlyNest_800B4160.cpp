#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Anim_800B41E8 { s32 motions, actions, initial_action, counts; };

struct Vec_800B41E8 { f32 x, y, z; };

struct Coll_800B41E8 { u8 pad[0xC]; f32 radius; };

struct Res_800B41E8 { u8 pad[0x42C]; u8 *bodies; s32 motions; };

struct Bodies_800B41E8 { u8 pad0[0xC]; s32 textures; u8 pad1[0x18 - 0x10]; s32 model; };

extern "C" {
s32 dispatch_shared_handler_a__6TLobbyFPv(int);
s32 register_object__6TLobbyFPv(int);
s32 dispatch_shared_handler_b__6TLobbyFPv(int);
s32 register_boss__6TLobbyFPv(int);
s32 load_resources__13TObjEneBm3FlyFv();
s32 TObjEneBm3FlyNest__sub_800B47C4();
s32 check_v2_mode__9TObjEneDDFv();
u32 load_enemy_bml_resource_named(void *, void *);
u32 load_enemy_bml_resource(void *);
s32 spawn_npc_enemy__6TLobbyFsiiiff(int, int, int, void *, f32, f32);
extern Anim_800B41E8 lbl_8043B2F4;
extern u8 lbl_8043B380[];
extern Coll_800B41E8 lbl_80491DBC;
extern u8 lbl_80491E34[];
extern Vec_800B41E8 lbl_80500B00;
extern s32 lbl_805D50F8;
extern s32 lbl_805D50FC;
extern s32 lbl_805D5100;
extern s32 lbl_805D5104;
extern u32 lbl_805D5108;
extern s32 lbl_805D510C;
extern s32 lbl_805D5110;
extern s32 lbl_805D5114;
extern s32 lbl_805D5118;
extern const f32 lbl_805D9CF8;
void load_resources__17TObjEneBm3FlyNestFv(void);
}

extern "C" {

void *create__17TObjEneBm3FlyNestFPv(void *arg0);
void free_fly__17TObjEneBm3FlyNestFv(void);
void TLobby__sub_8001FE7C(void*, int);
void *TObjEneBm3FlyNest__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);
M2C_UNK release_shared_data__13TObjEneBm3FlyFv();

extern u32 lbl_805D5108;

void free_fly__17TObjEneBm3FlyNestFv(void) {
    release_shared_data__13TObjEneBm3FlyFv();
    if ((u32) lbl_805D5108 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5108, 1);
        lbl_805D5108 = 0U;
    }
}

extern void *tl_04;

void *create__17TObjEneBm3FlyNestFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x4DC);
    if (o != NULL) {
        o = TObjEneBm3FlyNest__ct(o, tl_04, arg0);
    }
    return o;
}
void load_resources__17TObjEneBm3FlyNestFv(void) {
    Bodies_800B41E8 *bodies;
    lbl_80500B00.x = lbl_805D9CF8;
    lbl_80500B00.y = lbl_805D9CF8;
    lbl_80500B00.z = lbl_805D9CF8;
    lbl_805D510C = 0;
    lbl_805D5110 = 0;
    lbl_805D5114 = 0;
    lbl_805D5118 = 0;
    if (check_v2_mode__9TObjEneDDFv() != 0) {
        lbl_805D5108 = load_enemy_bml_resource_named(lbl_80491E34, lbl_8043B380);
    } else {
        lbl_805D5108 = load_enemy_bml_resource(lbl_80491E34);
    }
    lbl_805D50F8 = register_boss__6TLobbyFPv(1);
    lbl_805D50FC = dispatch_shared_handler_b__6TLobbyFPv(1);
    lbl_805D5100 = register_object__6TLobbyFPv(1);
    lbl_805D5104 = dispatch_shared_handler_a__6TLobbyFPv(1);
    load_resources__13TObjEneBm3FlyFv();
    TObjEneBm3FlyNest__sub_800B47C4();
    {
        Anim_800B41E8 anim = lbl_8043B2F4;
        anim.motions = ((Res_800B41E8 *)lbl_805D5108)->motions;
        bodies = (Bodies_800B41E8 *)((Res_800B41E8 *)lbl_805D5108)->bodies;
        spawn_npc_enemy__6TLobbyFsiiiff(8, bodies->model, bodies->textures, &anim, lbl_80491DBC.radius, lbl_805D9CF8);
    }
}

}
