#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct Base_800D3BA0_800D3B38 { char pad[0xC]; };
struct VObj_800D3BA0_800D3B38 : Base_800D3BA0_800D3B38 {
    virtual void m0(s32);
};

void * create__15TObjEneGyaranzoFPv(void *arg0);
void free_static_instances__15TObjEneGyaranzoFv(void);
M2C_UNK TLobby__sub_8001FE7C(u32, s32);
void *TObjControl__ct(void *, void *);
void *TObjEneGyaranzo__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_04;

void * create__15TObjEneGyaranzoFPv(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x45C);
    if (o2 != NULL) {
        o2 = TObjEneGyaranzo__ct(o2, o, arg0);
    }
    return o2;
}

extern u32 lbl_805D51FC;

extern struct VObj_800D3BA0_800D3B38 *lbl_805D5208;

void free_static_instances__15TObjEneGyaranzoFv(void) {
    if (lbl_805D51FC != 0U) {
        TLobby__sub_8001FE7C(lbl_805D51FC, 1);
        lbl_805D51FC = 0U;
    }
    if (lbl_805D5208 != 0) {
        if (lbl_805D5208 != 0) {
            lbl_805D5208->m0(1);
        }
        lbl_805D5208 = 0;
    }
}

struct Pos_800D3C04 { s32 w[4]; };
struct Res_800D3C04 { u8 pad0[0x38]; s32 r38; s32 r3C; u8 pad40[8]; s32 r48; };
struct Area_800D3C04 { u8 pad0[0x42C]; Res_800D3C04 *res; s32 f430; };

s32 dispatch_shared_handler_a__6TLobbyFPv(int);
s32 register_object__6TLobbyFPv(int);
s32 dispatch_shared_handler_b__6TLobbyFPv(int);
s32 register_boss__6TLobbyFPv(int);
s32 TObjFish__sub_8001ED9C(u32, int);
u32 load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
void *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
VObj_800D3BA0_800D3B38 *TBreakUpMdl__sub_80096FD8(void *, s32, s32, f32);
s32 check_v2_mode__9TObjEneDDFv(void);
u32 load_enemy_bml_resource_named(void *, void *);
s32 collect_and_count__12TBoss3VoloptFUii(s32, int);
s32 spawn_npc_enemy__6TLobbyFsiiiff(int, int, int, void *, f32, f32);
extern Pos_800D3C04 lbl_8043C25C;
extern M2C_UNK lbl_8043C428[];
extern M2C_UNK lbl_8049414C[];
extern s16 lbl_80494224[];
extern s32 lbl_80500ED0[];
extern u8 *lbl_80500F28[];
extern s32 lbl_805D51E0;
extern s32 lbl_805D51E4;
extern s32 lbl_805D51E8;
extern s32 lbl_805D51EC;
extern s32 lbl_805D5200;
extern s32 lbl_805D5204;
extern const f32 lbl_805DA258;
extern const f32 lbl_805DA294;
extern const f32 lbl_805DA298;

#define AREA ((Area_800D3C04 *)lbl_805D51FC)
void TLobby__sub_800D3C04(void) {
    s32 i;
    void *p;

    if (check_v2_mode__9TObjEneDDFv() != 0) {
        lbl_805D51FC = load_enemy_bml_resource_named(lbl_8049414C, lbl_8043C428);
    } else {
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != NULL) {
            p = (void *)load_resource_from_descriptor(p, 5, lbl_8049414C, 0, 0, 0);
        }
        lbl_805D51FC = (u32)p;
    }
    for (i = 0; i < 0x16; i++) {
        lbl_80500ED0[i] = collect_and_count__12TBoss3VoloptFUii(AREA->res->r38, lbl_80494224[i]);
    }
    for (i = 0; i < 0xD; i++) {
        lbl_80500F28[i] = (u8 *)collect_and_count__12TBoss3VoloptFUii(AREA->res->r48, lbl_80494224[i]);
    }
    for (i = 0; i < 0xD; i++) {
        M2C_FIELD(lbl_80500F28[i], s32 *, 0x30) = 0;
    }
    lbl_805D5200 = collect_and_count__12TBoss3VoloptFUii(AREA->res->r38, 0x19);
    lbl_805D5204 = collect_and_count__12TBoss3VoloptFUii(AREA->res->r38, 0xD);
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0x10);
    if (p != NULL) {
        p = TBreakUpMdl__sub_80096FD8(p, AREA->res->r38, TObjFish__sub_8001ED9C(lbl_805D51FC, 3), lbl_805DA294);
    }
    lbl_805D5208 = (VObj_800D3BA0_800D3B38 *)p;
    lbl_805D51E0 = register_boss__6TLobbyFPv(0x1D);
    lbl_805D51E4 = dispatch_shared_handler_b__6TLobbyFPv(0x1D);
    lbl_805D51E8 = register_object__6TLobbyFPv(0x1D);
    lbl_805D51EC = dispatch_shared_handler_a__6TLobbyFPv(0x1D);
    {
        Pos_800D3C04 pos = lbl_8043C25C;
        pos.w[0] = AREA->f430;
        spawn_npc_enemy__6TLobbyFsiiiff(0x20, AREA->res->r38, AREA->res->r3C, &pos, lbl_805DA298, lbl_805DA258);
        spawn_npc_enemy__6TLobbyFsiiiff(0x21, AREA->res->r48, AREA->res->r3C, &pos, lbl_805DA298, lbl_805DA258);
    }
}
#undef AREA

}
