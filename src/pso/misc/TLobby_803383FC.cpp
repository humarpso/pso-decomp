#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct G_80338534 { u8 p0[0x2C]; u8 a[0x40]; u8 b[0x60]; u8 c[0x40]; };

struct A_80338608 { u8 pad[0x14]; u32 col; };

struct B_80338608 { u8 pad[0xC]; u32 col; };

extern "C" {
s32 get_instance__15TAdPlayerLoadGCFv();
void TLobby__sub_803384D4(void);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(int);
s32 alloc__22TQuestVmDownLoadServerFPv(int);
M2C_UNK TLobby__sub_800F7DAC(int, int);
M2C_UNK set_stream_state__6TLobbyFi(void *, int);
M2C_UNK load_gvm_texture_archive(int, void *);
extern M2C_UNK lbl_80477BC4[];
extern M2C_UNK lbl_804EF1DC[];
extern s32 lbl_805D6D58;
void TLobby__sub_8033843C(void);
void TCameraCtrl__sub_80068EF0(void);
void TCameraCtrl__sub_80069024(void);
void reset_transform_state__10TObjPlayerFv(void);
void init_xyz_limits__10TObjPlayerFv(void);
void begin_effect_render__13TParticleCtrlFv(void);
void end_effect_render__13TParticleCtrlFv(void);
void set_global_param__8TObjFishFi(s32);
void set_texture_num(s32);
void reset_player_state__15TObjBoss2TunnelFv(void);
void TObjBoss2Tunnel__sub_803E2BCC(void *, s32);
void TObjBoss2Tunnel__sub_803E2D10(s32);
void reset_player_state__6TLobbyFv(void);
void TLobby__sub_803E2D70(void *, s32);
void TLobby__sub_803E2EE4(s32);
extern G_80338534 lbl_804EF1B8;
extern s32 lbl_805D63F0;
extern s32 lbl_805D6D58;
extern int lbl_805D6D5C;
void TLobby__sub_80338534(void);
f32 TBoss8Dragon__sub_803D64DC(s32);
extern A_80338608 lbl_804EF224[];
extern B_80338608 lbl_804EF1E4[];
extern s32 lbl_805D6D58;
extern s32 lbl_805D6D60;
extern const f32 lbl_805DF9A0;
extern const f32 lbl_805DF9A4;
extern const f32 lbl_805DF9A8;
extern const f32 lbl_805DF9B4;
extern const f32 lbl_805DF9B8;
void TLobby__sub_80338608(s32 arg0);
}

extern "C" {

void TWindowSubStatusDisp__sub_803386F0(void);
void handle_flag2_request__6TLobbyFv(void);
void load_info_icon(void);
int load_gvm_texture_file(void*);
M2C_UNK TLobby__sub_803DA16C(M2C_UNK *);
int free_if_valid__10TObjPlayerFi(void*);

extern M2C_UNK lbl_804EF1DC[];
extern s32 lbl_805D6D58;

void handle_flag2_request__6TLobbyFv(void) {
    if (lbl_805D6D58 & 2) {
        TLobby__sub_803DA16C(lbl_804EF1DC);
        lbl_805D6D58 &= 0xFFFFFFFD;
    }
}

    extern int lbl_805D6D5C;

void TLobby__sub_8033843C(void) {
    s32 temp_r31;
    s32 temp_r3;
    if (!(lbl_805D6D58 & 2)) {
        temp_r31 = alloc__22TQuestVmDownLoadServerFPv((int) (0x11000));
        temp_r3 = alloc__22TQuestVmDownLoadServerFPv((int) (0x2000));
        set_stream_state__6TLobbyFi((void *) (lbl_80477BC4), (int) (temp_r3));
        TLobby__sub_800F7DAC((int) (temp_r3), (int) (temp_r31));
        load_gvm_texture_archive((int) (temp_r31), (void *) (lbl_804EF1DC));
        safe_free__23TAdSinglePlyChrSelectGCFUi((int) (temp_r3));
        safe_free__23TAdSinglePlyChrSelectGCFUi((int) (temp_r31));
        lbl_805D6D58 |= 2;
    }
}

void TLobby__sub_803384D4(void) {
    s32 temp_r3;
    temp_r3 = get_instance__15TAdPlayerLoadGCFv();
    switch (temp_r3) {
    case 5:
    case 6:
    case 11:
    case 12:
    case 15:
    case 19:
        TLobby__sub_80338608((s32)((int) (0)));
        TLobby__sub_80338534();
        return;
    case 18:
        TLobby__sub_80338608((s32)((int) (1)));
        TLobby__sub_80338534();
    default:
        return;
    }
}

#pragma push
#pragma opt_propagation off
void TLobby__sub_80338534(void) {
    G_80338534 *t = &lbl_804EF1B8;
    TCameraCtrl__sub_80069024();
    reset_transform_state__10TObjPlayerFv();
    begin_effect_render__13TParticleCtrlFv();
    TObjBoss2Tunnel__sub_803E2D10(1);
    TObjBoss2Tunnel__sub_803E2BCC(t->a, 4);
    reset_player_state__15TObjBoss2TunnelFv();
    if ((u32)lbl_805D6D5C != 0) {
        set_global_param__8TObjFishFi(lbl_805D6D5C);
        if (lbl_805D6D58 & 4) {
            set_texture_num(1);
        } else {
            set_texture_num(0);
        }
        init_xyz_limits__10TObjPlayerFv();
        TLobby__sub_803E2EE4(1);
        TLobby__sub_803E2D70(t->b, 4);
        reset_player_state__6TLobbyFv();
        reset_transform_state__10TObjPlayerFv();
        set_global_param__8TObjFishFi(lbl_805D63F0);
        set_texture_num(5);
        TLobby__sub_803E2EE4(1);
        TLobby__sub_803E2D70(t->c, 4);
        reset_player_state__6TLobbyFv();
    }
    reset_transform_state__10TObjPlayerFv();
    TCameraCtrl__sub_80068EF0();
    end_effect_render__13TParticleCtrlFv();
}
#pragma pop

#pragma push
#pragma fp_contract on
void TLobby__sub_80338608(s32 arg0) {
    f32 t;
    u32 c0;
    u32 c1;
    s32 i;
    B_80338608 *b;
    A_80338608 *a;
    f32 s = lbl_805DF9A4 + TBoss8Dragon__sub_803D64DC(lbl_805D6D60);
    t = s * lbl_805DF9A8 + lbl_805DF9A0;
    lbl_805D6D60 += 0xCCC;
    c0 = ((u32)(lbl_805DF9B4 * t) << 24) | 0xFFFFFF;
    c1 = (u32)(lbl_805DF9B8 * t) << 24;
    a = lbl_804EF224;
    b = lbl_804EF1E4;
    for (i = 0; i < 4; i++) {
        a->col = c0;
        a++;
        b->col = c1;
        b++;
    }
    switch (arg0) {
    case 0:
        lbl_805D6D58 &= ~4;
        break;
    case 1:
        lbl_805D6D58 |= 4;
        break;
    }
}
#pragma pop

void TWindowSubStatusDisp__sub_803386F0(void) { free_if_valid__10TObjPlayerFi((void*)(lbl_805D6D5C)); }

    extern unsigned char lbl_80477BD4[];
    extern int lbl_805D6D5C;
void load_info_icon(void) { lbl_805D6D5C = load_gvm_texture_file(lbl_80477BD4); }

}
