#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Vec_800CC950 { f32 x, y, z; };

struct G_800CC950 { s32 t[4][3]; Vec_800CC950 v; };

struct Q_800CC950 { s32 a, b, c, d; };

struct E_800CC950 { u8 pad[0x8]; s32 f8; s32 fc; };

struct D_800CC950 { u8 pad[0x42C]; E_800CC950 *f42c; s32 f430; };

extern "C" {
s32 is_split_screen();
s32 dispatch_shared_handler_a__6TLobbyFPv(s32);
s32 register_object__6TLobbyFPv(s32);
s32 dispatch_shared_handler_b__6TLobbyFPv(s32);
s32 register_boss__6TLobbyFPv(s32);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(s32);
s32 TBreakUpMdl__sub_8009705C(s32, s32);
D_800CC950 *load_enemy_bml_resource(void *);
M2C_UNK TObjPlayer__sub_800F0928(s32);
u8 *collect_and_count__12TBoss3VoloptFUii(s32, M2C_UNK);
M2C_UNK cache_result_805D6660__13TObjEneMe1GeeFv();
M2C_UNK spawn_npc_enemy__6TLobbyFsiiiff(s16, s32, s32, void *, f32, f32);
extern s32 lbl_8043BCD8[];
extern s32 lbl_8043BCE4[];
extern s32 lbl_8043BCF0[];
extern s32 lbl_8043BCFC[];
extern Q_800CC950 lbl_8043BE6C;
extern u8 lbl_804937E8[];
extern u8 lbl_80493818[];
extern D_800CC950 *TObjEneMe1Gee__data_805D51B0;
extern u8 *lbl_805D51B4;
extern s32 TObjEneMe1Gee__data_805D51B8;
extern s32 TObjEneMe1Gee__data_805D51C0;
extern s32 TObjEneMe1Gee__data_805D51C4;
extern s32 lbl_805D51C8;
extern const f32 TObjEneMe1Gee__data_805DA0B4;
extern const f32 TObjEneMe1Gee__data_805DA0C0;
extern const f32 lbl_805DA150;
void TObjEneMe1Gee__sub_800CC950(void);
}

extern "C" {

s32 lbl_80500E38[3];
s32 lbl_80500E44[3];
s32 lbl_80500E50[3];
s32 lbl_80500E5C[3];
f32 lbl_80500E68[4];
void TObjEneMe1Gee__sub_800CC950(void) {
    s32 i;
    s32 p;
    s32 t;
    Vec_800CC950 *v;
    v = (Vec_800CC950 *)lbl_80500E68;
    lbl_80500E68[0] = TObjEneMe1Gee__data_805DA0B4;
    v->y = TObjEneMe1Gee__data_805DA0B4;
    v->z = TObjEneMe1Gee__data_805DA0B4;
    if (((s32 (*)(void *))is_split_screen)(v) != 0) {
        TObjEneMe1Gee__data_805D51B0 = load_enemy_bml_resource(lbl_80493818);
    } else {
        TObjEneMe1Gee__data_805D51B0 = load_enemy_bml_resource(lbl_804937E8);
    }
    cache_result_805D6660__13TObjEneMe1GeeFv();
    lbl_805D51B4 = collect_and_count__12TBoss3VoloptFUii(TObjEneMe1Gee__data_805D51B0->f42c->f8, 7);
    for (i = 0; i < 3; i++) {
        lbl_80500E38[i] = register_boss__6TLobbyFPv(lbl_8043BCD8[i]);
        lbl_80500E44[i] = dispatch_shared_handler_b__6TLobbyFPv(lbl_8043BCE4[i]);
        lbl_80500E50[i] = register_object__6TLobbyFPv(lbl_8043BCF0[i]);
        lbl_80500E5C[i] = dispatch_shared_handler_a__6TLobbyFPv(lbl_8043BCFC[i]);
    }
    TObjEneMe1Gee__data_805D51B8 = 0;
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0x10);
    if (p != 0) {
        p = TBreakUpMdl__sub_8009705C(p, TObjEneMe1Gee__data_805D51B0->f42c->f8);
    }
    TObjEneMe1Gee__data_805D51C0 = p;
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0x10);
    if (p != 0) {
        p = TBreakUpMdl__sub_8009705C(p, TObjEneMe1Gee__data_805D51B0->f42c->f8);
    }
    TObjEneMe1Gee__data_805D51C4 = p;
    t = M2C_FIELD(M2C_FIELD(collect_and_count__12TBoss3VoloptFUii(TObjEneMe1Gee__data_805D51B0->f42c->f8, 4), u8 **, 4), s32 *, 4);
    lbl_805D51C8 = t + 4;
    TObjPlayer__sub_800F0928(t);
    {
        Q_800CC950 sp8 = lbl_8043BE6C;
        sp8.a = TObjEneMe1Gee__data_805D51B0->f430;
        spawn_npc_enemy__6TLobbyFsiiiff(0x10, TObjEneMe1Gee__data_805D51B0->f42c->f8, TObjEneMe1Gee__data_805D51B0->f42c->fc, &sp8, lbl_805DA150, TObjEneMe1Gee__data_805DA0C0);
    }
}

}
