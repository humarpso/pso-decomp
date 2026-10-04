#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Info_80315B10 { s32 a, b, c, d; };
struct Rec_80315B10 { u8 pad0[8]; s32 f8; s32 fC; u8 pad10[8]; s32 f18; s32 f1C; };
struct Obj_80315B10 { u8 pad0[0x42C]; Rec_80315B10 *rec; s32 f430; };
struct Sub_80315B10 { u8 pad0[0xC]; f32 fC; };

extern "C" {
s32 is_split_screen(void);
s32 dispatch_shared_handler_a__6TLobbyFPv(s32);
Obj_80315B10 *load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
void *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
s32 spawn_npc_enemy__6TLobbyFsiiiff(int, int, int, void *, f32, f32);
extern Info_80315B10 lbl_80475D84;
extern Info_80315B10 lbl_80475D94;
extern s32 TObjEneDelDepth__data_805D6AC0;
extern const f32 TObjEneDelDepth__data_805DF258;
}

extern "C" {

s32 TObjEneDelDepth__create(s32 arg0);
void free_shared_data__15TObjEneDelDepthFv(void);
void TLobby__sub_8001FE7C(void*, int);
s32 TObjControl__ct(s32, s32);
s32 TObjEneDelDepth__ct(s32, s32, s32);
s32 __nw__7TObjectFUl(M2C_UNK);

extern "C" void TObjEneDelDepth__sub_80313740();
extern "C" void TObjEneDelDepth__sub_803138F8();
extern "C" void TObjEneDelDepth__sub_80313954();
extern "C" void TObjEneDelDepth__sub_80313DE4();
extern "C" void TObjEneDelDepth__sub_80313E34();
extern "C" void TObjEneDelDepth__sub_80313FAC();
extern "C" void TObjEneDelDepth__sub_803141A8();
extern "C" void TObjEneDelDepth__sub_803142DC();
extern "C" void TObjEneDelDepth__sub_80314500();
extern "C" void TObjEneDelDepth__sub_80314758();
extern "C" void TObjEneDelDepth__sub_80314C10();
extern "C" void TObjEneDelDepth__sub_80314D1C();
extern "C" void TObjEneDelDepth__sub_80314E78();
extern "C" void TObjEneDelDepth__sub_80314EC4();
extern "C" void TObjEneDelDepth__sub_80315064();
extern "C" void enter_appear_state__15TObjEneDelDepthFPv();
extern "C" void enter_state8__15TObjEneDelDepthFPv();
extern "C" void init_depth__15TObjEneDelDepthFPv();
extern "C" void init_draw_state__15TObjEneDelDepthFPv();
extern "C" void init_move__15TObjEneDelDepthFPv();
extern "C" void init_params__15TObjEneDelDepthFPv();
extern "C" void init_state__15TObjEneDelDepthFPv();
extern "C" u8 lbl_80475BD8[];
extern "C" u8 lbl_80475BE8[];
extern "C" u8 lbl_80475BF8[];
extern "C" u8 lbl_80475C08[];
extern "C" u8 lbl_80475C20[];
extern "C" u8 lbl_80475C38[];
extern "C" u8 lbl_80475C50[];
extern "C" u8 lbl_80475C64[];
extern "C" u8 lbl_80475C78[];
extern "C" u8 lbl_80475C90[];
extern "C" u8 lbl_80475CA8[];
extern "C" u8 lbl_80475CC0[];
extern "C" u8 lbl_80475CD8[];
extern "C" u8 lbl_80475CF0[];
extern "C" u8 lbl_80475D04[];
extern "C" u8 lbl_80475D18[];
extern "C" u8 lbl_80475D30[];
extern "C" u8 lbl_80475D40[];
extern "C" void setup_depth_draw__15TObjEneDelDepthFPv();
extern "C" void start_attack_motion__15TObjEneDelDepthFPv();
extern "C" void try_enter_appear__15TObjEneDelDepthFPv();
extern "C" void try_relocate_on_timer__15TObjEneDelDepthFPv();
extern "C" void update_ai_state__15TObjEneDelDepthFPv();
extern "C" void update_attack_cast__15TObjEneDelDepthFPv();
extern "C" void update_state__15TObjEneDelDepthFPv();
extern "C" void update_state_flag__15TObjEneDelDepthFPv();
extern void *lbl_804E80C0[4];
extern void *lbl_804E80D0[13];
extern void *lbl_804E8114[4];
extern void *lbl_804E8124[13];
void *lbl_804E80C0[4] = {
    (void *)&lbl_80475BD8, (void *)&lbl_80475BE8, (void *)&lbl_80475BF8, (void *)0x0,
};
void *lbl_804E80D0[13] = {
    (void *)&lbl_80475C08, (void *)&lbl_80475C20, (void *)&lbl_80475C38, (void *)&lbl_80475C50,
    (void *)&lbl_80475C64, (void *)&lbl_80475C78, (void *)&lbl_80475C90, (void *)&lbl_80475CA8,
    (void *)&lbl_80475CC0, (void *)&lbl_80475CD8, (void *)&lbl_80475CF0, (void *)&lbl_80475D04,
    (void *)0x0,
};
void *lbl_804E8104[4] = {
    (void *)&lbl_80475D18, (void *)&lbl_804E80C0, (void *)&lbl_804E80D0, (void *)0x3000c,
};
void *lbl_804E8114[4] = {
    (void *)&lbl_80475D30, (void *)&lbl_80475BE8, (void *)&lbl_80475BF8, (void *)0x0,
};
void *lbl_804E8124[13] = {
    (void *)&lbl_80475C08, (void *)&lbl_80475C20, (void *)&lbl_80475C38, (void *)&lbl_80475C50,
    (void *)&lbl_80475C64, (void *)&lbl_80475C78, (void *)&lbl_80475C90, (void *)&lbl_80475CA8,
    (void *)&lbl_80475CC0, (void *)&lbl_80475CD8, (void *)&lbl_80475CF0, (void *)&lbl_80475D04,
    (void *)0x0,
};
void *lbl_804E8158[4] = {
    (void *)&lbl_80475D40, (void *)&lbl_804E8114, (void *)&lbl_804E8124, (void *)0x3000c,
};
void *lbl_804E8168[11] = {
    (void *)0x0, (void *)0x41700000, (void *)0x0, (void *)0x41200000,
    (void *)0x0, (void *)0x0, (void *)0x8003, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void *lbl_804E8194[24] = {
    (void *)0x10000, (void *)0xb, (void *)0x3f000000, (void *)0x0,
    (void *)0x20000, (void *)0x5, (void *)0x3f4ccccd, (void *)0x0,
    (void *)0x30000, (void *)0x6, (void *)0x3f4ccccd, (void *)0x0,
    (void *)0x30000, (void *)0xb, (void *)0x3f000000, (void *)0x0,
    (void *)0x30000, (void *)0x9, (void *)0x3f4ccccd, (void *)0x0,
    (void *)0x30000, (void *)0xa, (void *)0x3f333333, (void *)0x0,
};
void *lbl_804E81F4[94] = {
    (void *)0x10000, (void *)0xb, (void *)0x3f000000, (void *)0x0,
    (void *)0x0, (void *)0xffffffff, (void *)&init_params__15TObjEneDelDepthFPv, (void *)0x0,
    (void *)0xffffffff, (void *)&try_relocate_on_timer__15TObjEneDelDepthFPv, (void *)0x0, (void *)0xffffffff,
    (void *)&TObjEneDelDepth__sub_80315064, (void *)0x0, (void *)0xffffffff, (void *)&TObjEneDelDepth__sub_80314EC4,
    (void *)0x0, (void *)0xffffffff, (void *)&TObjEneDelDepth__sub_80314E78, (void *)0x0,
    (void *)0xffffffff, (void *)&TObjEneDelDepth__sub_80314D1C, (void *)0x0, (void *)0xffffffff,
    (void *)&TObjEneDelDepth__sub_80314C10, (void *)0x0, (void *)0xffffffff, (void *)&TObjEneDelDepth__sub_80314758,
    (void *)0x0, (void *)0xffffffff, (void *)&enter_state8__15TObjEneDelDepthFPv, (void *)0x0,
    (void *)0xffffffff, (void *)&update_state__15TObjEneDelDepthFPv, (void *)0x0, (void *)0xffffffff,
    (void *)&enter_appear_state__15TObjEneDelDepthFPv, (void *)0x0, (void *)0xffffffff, (void *)&try_enter_appear__15TObjEneDelDepthFPv,
    (void *)0x0, (void *)0xffffffff, (void *)&TObjEneDelDepth__sub_80314500, (void *)0x0,
    (void *)0xffffffff, (void *)&TObjEneDelDepth__sub_803142DC, (void *)0x0, (void *)0xffffffff,
    (void *)&init_depth__15TObjEneDelDepthFPv, (void *)0x0, (void *)0xffffffff, (void *)&TObjEneDelDepth__sub_803141A8,
    (void *)0x0, (void *)0xffffffff, (void *)&setup_depth_draw__15TObjEneDelDepthFPv, (void *)0x0,
    (void *)0xffffffff, (void *)&TObjEneDelDepth__sub_80313FAC, (void *)0x0, (void *)0xffffffff,
    (void *)&TObjEneDelDepth__sub_80313DE4, (void *)0x0, (void *)0xffffffff, (void *)&update_attack_cast__15TObjEneDelDepthFPv,
    (void *)0x0, (void *)0xffffffff, (void *)&init_draw_state__15TObjEneDelDepthFPv, (void *)0x0,
    (void *)0xffffffff, (void *)&TObjEneDelDepth__sub_80313E34, (void *)0x0, (void *)0xffffffff,
    (void *)&init_state__15TObjEneDelDepthFPv, (void *)0x0, (void *)0xffffffff, (void *)&update_state_flag__15TObjEneDelDepthFPv,
    (void *)0x0, (void *)0xffffffff, (void *)&start_attack_motion__15TObjEneDelDepthFPv, (void *)0x0,
    (void *)0xffffffff, (void *)&update_ai_state__15TObjEneDelDepthFPv, (void *)0x0, (void *)0xffffffff,
    (void *)&init_move__15TObjEneDelDepthFPv, (void *)0x0, (void *)0xffffffff, (void *)&TObjEneDelDepth__sub_80313954,
    (void *)0x0, (void *)0xffffffff, (void *)&TObjEneDelDepth__sub_803138F8, (void *)0x0,
    (void *)0xffffffff, (void *)&TObjEneDelDepth__sub_80313740,
};
void *lbl_804E836C[90] = {
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0,
};

void free_shared_data__15TObjEneDelDepthFv(void) {
    extern u32 TObjEneDelDepth__data_805D6AC4;
    if ((u32) TObjEneDelDepth__data_805D6AC4 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjEneDelDepth__data_805D6AC4, 1);
        TObjEneDelDepth__data_805D6AC4 = 0U;
    }
}

void TObjEneDelDepth__sub_80315B10(void) {
    extern Obj_80315B10 *TObjEneDelDepth__data_805D6AC4;
    Sub_80315B10 *g;

    if (is_split_screen() != 0) {
        Obj_80315B10 *p = (Obj_80315B10 *)alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != NULL) {
            p = load_resource_from_descriptor(p, 1, lbl_804E8158, 0, 0, 0);
        }
        TObjEneDelDepth__data_805D6AC4 = p;
    } else {
        Obj_80315B10 *p = (Obj_80315B10 *)alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != NULL) {
            p = load_resource_from_descriptor(p, 1, lbl_804E8104, 0, 0, 0);
        }
        TObjEneDelDepth__data_805D6AC4 = p;
    }
    g = (Sub_80315B10 *)lbl_804E8168;
    {
        Info_80315B10 info = lbl_80475D84;
        info.a = TObjEneDelDepth__data_805D6AC4->f430;
        spawn_npc_enemy__6TLobbyFsiiiff(0x47, TObjEneDelDepth__data_805D6AC4->rec->f8, TObjEneDelDepth__data_805D6AC4->rec->fC, &info, g->fC, TObjEneDelDepth__data_805DF258);
    }
    {
        Info_80315B10 info = lbl_80475D94;
        info.a = TObjEneDelDepth__data_805D6AC4->f430;
        spawn_npc_enemy__6TLobbyFsiiiff(0x48, TObjEneDelDepth__data_805D6AC4->rec->f18, TObjEneDelDepth__data_805D6AC4->rec->f1C, &info, g->fC, TObjEneDelDepth__data_805DF258);
    }
    TObjEneDelDepth__data_805D6AC0 = dispatch_shared_handler_a__6TLobbyFPv(0x30);
}

extern s32 tl_04;

s32 TObjEneDelDepth__create(s32 arg0) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x434);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TObjEneDelDepth__ct(var_r31, var_r4, arg0);
    }
    return var_r31;
}

}
