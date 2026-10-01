#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK TObjDFTenchuFuru__sub_80051A7C();
M2C_UNK register_callback__16TObjDFTenchuFuruFv();
M2C_UNK sync_player_globals__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_80052390(f32);
u8 *TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK TCharaMaking__draw_colored_hair(int, void *, int, f32);
M2C_UNK clear_flag_bit0__12TCharaMakingFv();
M2C_UNK enable_making__12TCharaMakingFv();
M2C_UNK TObjPlayer__sub_803D97F0(void *);
int TObjPlayer__sub_803D9B78(void);
M2C_UNK set_global_param__8TObjFishFi(void *);
M2C_UNK TObjFish__sub_803E46BC(int);
M2C_UNK TObjEneSlimeOne__sub_803E4AF4(int, void *, f32);
extern M2C_UNK lbl_804FF240[];
extern const f32 lbl_805D8A30;
extern const f32 lbl_805D8A34;
void TObjPlayer__sub_80051BE0(u16 arg0, s32 arg1, f32 farg0, f32 farg1);
}

extern "C" {

void render__16TObjDFTenchuFuruFPv(void* a0);
int TObjDFTenchuFuru__sub_80051AD0(void*);
int TObjPlayer__sub_803D8CD4(void*);
int TObjPlayer__sub_803D9B2C(void);
int TObjPlayer__sub_803D9B78(void);

    extern int lbl_805D4D78;
void render__16TObjDFTenchuFuruFPv(void* a0) { lbl_805D4D78 = 0; TObjPlayer__sub_803D9B2C(); TObjPlayer__sub_803D8CD4((void*)0); TObjDFTenchuFuru__sub_80051AD0(a0); TObjPlayer__sub_803D9B78(); }
void TObjPlayer__sub_80051BE0(u16 arg0, s32 arg1, f32 farg0, f32 farg1) {
    u8 *p;
    u32 a;
    u32 b;
    u8 *c;
    u32 d;
    u8 *e;
    s32 f;
    u8 *g;
    if (lbl_805D8A30 == farg1) {
        return;
    }
    if (arg0 == 0xFFFF) {
        return;
    }
    p = TPlayerBattleCtrl4P__sub_801BA74C(arg0);
    if (p == NULL || M2C_FIELD(p, s32 *, 0xCFC) != 0) {
        return;
    }
    c = p + 0xA1C;
    a = M2C_FIELD(p, u32 *, 0x8B0);
    e = p + 0xB88;
    b = M2C_FIELD(p, u32 *, 0x8AC);
    d = M2C_FIELD(p, u32 *, 0x8B4);
    g = p + 0xCF4;
    f = M2C_FIELD(p, s32 *, 0x34);
    if (farg1 < lbl_805D8A34) {
        TObjPlayer__sub_80052390(farg1);
    }
    set_global_param__8TObjFishFi(g);
    register_callback__16TObjDFTenchuFuruFv();
    TObjEneSlimeOne__sub_803E4AF4(f, (void *)arg1, farg0);
    TObjDFTenchuFuru__sub_80051A7C();
    if (d != 0) {
        TObjPlayer__sub_803D97F0((u8 *)lbl_804FF240 + 0x30);
        set_global_param__8TObjFishFi(e);
        TObjFish__sub_803E46BC(d);
        TObjPlayer__sub_803D9B78();
    }
    if (a != 0) {
        enable_making__12TCharaMakingFv();
        TObjPlayer__sub_803D97F0(lbl_804FF240);
        set_global_param__8TObjFishFi(c);
        TObjFish__sub_803E46BC(a);
        TObjPlayer__sub_803D9B78();
        clear_flag_bit0__12TCharaMakingFv();
    }
    if (farg1 < lbl_805D8A34) {
        sync_player_globals__10TObjPlayerFv();
    }
    if (b != 0) {
        enable_making__12TCharaMakingFv();
        TObjPlayer__sub_803D97F0(lbl_804FF240);
        set_global_param__8TObjFishFi(c);
        TCharaMaking__draw_colored_hair(b, p + 0x85C, 0, farg1);
        TObjPlayer__sub_803D9B78();
        clear_flag_bit0__12TCharaMakingFv();
    }
}

}
