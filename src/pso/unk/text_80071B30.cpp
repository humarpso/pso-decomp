#include "types.h"

struct Vec_80071BC0 { f32 x, y, z; };

struct Hdr_80071BC0 { u32 a, b; };

struct Chr_80071BC0 {
    u8 pad0[0x31];
    u8 f31;
    u8 pad32[0x34 - 0x32];
    u32 f34;
    u8 pad38[0x50 - 0x38];
};

class TPlyCharData {
public:
    TPlyCharData();
    ~TPlyCharData();
    u8 pad[0x370];
    Chr_80071BC0 chr;
    u8 pad3c0[0x420 - 0x3c0];
};

struct Pair_80071BC0 { s32 val; s32 id; };

struct Tbl_80071BC0 { s32 a; s32 b; s32 c; Pair_80071BC0 *list; };

struct PBase_80071BC0 { u8 pad[0x18]; };

struct Plr_80071BC0 : PBase_80071BC0 {
    virtual void m0(s32);
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
};

extern "C" {
s32 get_layout_id__20TWindowSubStatusDispFv(s32);
s32 *TWindowSubStatusDisp__sub_8006F0D8(void *);
extern u8 lbl_8048C9D8[];
s32 TLobby__sub_80071B30(s32 arg0, s32 arg1);
void VecCopy__FP3VecPC3Vec(Vec_80071BC0 *, void *);
void save_position__14TBoss4DarkFalzFi(Plr_80071BC0 *);
void set_position_from__14TBoss4DarkFalzFPvPv(Plr_80071BC0 *, Vec_80071BC0 *);
void copy_header_struct__6TLobbyFPvPv(void *, void *);
void copy_player_visual_record(Chr_80071BC0 *, void *);
void clear_header_struct__10TObjPlayerFPv(Hdr_80071BC0 *);
Plr_80071BC0 *get_player_by_client_id(s32);
Plr_80071BC0 *create_player_object(s32, s32, TPlyCharData *);
void clamp_and_set_unit_value__10TObjPlayerFiUci(Plr_80071BC0 *, u8, s16);
void TObjPlayer__sub_801D9B38(void *, s32);
void begin_action_state__10TObjPlayerFPv(TPlyCharData *);
void send_command__10TNpcPlayerFiciiPv(u8, s32, s32, s32, TPlyCharData *);
extern Tbl_80071BC0 lbl_8048A088[];
extern Tbl_80071BC0 lbl_8048B0F4[];
extern Tbl_80071BC0 lbl_8048C244[];
extern s32 lbl_805D53A0;
void rebuild_players_for_stage__10TObjPlayerFi(s32 arg0);
}

extern "C" {

s32 TLobby__sub_80071B30(s32 arg0, s32 arg1) {
    s32 *list;
    s32 n;
    s32 i;
    s32 *q = (s32 *)(lbl_8048C9D8 + arg0 * 0x104 + 0x270);
    if (q[0] == 0) {
        return 0;
    }
    list = TWindowSubStatusDisp__sub_8006F0D8(q + 1);
    n = get_layout_id__20TWindowSubStatusDispFv(arg1);
    for (i = 0; i < n; i++) {
        if (list[i] == 0) {
            break;
        }
    }
    return i;
}
void rebuild_players_for_stage__10TObjPlayerFi(s32 arg0) {
    Hdr_80071BC0 hdr;
    Vec_80071BC0 pos;
    Chr_80071BC0 chr;
    s32 i;
    Plr_80071BC0 *p;
    Tbl_80071BC0 *t;
    Pair_80071BC0 *e;
    if (arg0 < 0 || arg0 >= 0x10) {
        return;
    }
    {
        for (i = 0; i < 4; i++) {
            p = get_player_by_client_id(i);
            clear_header_struct__10TObjPlayerFPv(&hdr);
            if (p == NULL) {
                continue;
            }
            VecCopy__FP3VecPC3Vec(&pos, (u8 *)p + 0x38);
            copy_player_visual_record(&chr, (u8 *)p + 0x85c);
            copy_header_struct__6TLobbyFPvPv(&hdr, (u8 *)p + 0xdac);
            if (p != NULL) {
                p->m0(1);
            }
            switch (chr.f34 & 0xe0) {
            case 0x20:
                t = &lbl_8048B0F4[arg0];
                break;
            case 0x40:
                t = &lbl_8048C244[arg0];
                break;
            case 0x80:
                t = &lbl_8048A088[arg0];
                break;
            default:
                t = &lbl_8048B0F4[arg0];
                break;
            }
            {
                TPlyCharData cd;
                copy_player_visual_record(&cd.chr, &chr);
                begin_action_state__10TObjPlayerFPv(&cd);
                send_command__10TNpcPlayerFiciiPv(chr.f31, t->b, t->c, t->a, &cd);
                if (i == lbl_805D53A0) {
                    p = create_player_object(i, 0, &cd);
                } else {
                    p = create_player_object(i, 4, &cd);
                }
                if (p == NULL) {
                    return;
                }
            }
            copy_header_struct__6TLobbyFPvPv((u8 *)p + 0xdac, &hdr);
            set_position_from__14TBoss4DarkFalzFPvPv(p, &pos);
            save_position__14TBoss4DarkFalzFi(p);
            p->m6();
            TObjPlayer__sub_801D9B38((u8 *)p + 0x428, 0xff);
            if (t->list != NULL) {
                for (e = t->list; e->id != 0xff; e++) {
                    clamp_and_set_unit_value__10TObjPlayerFiUci(p, e->id, e->val);
                }
            }
            *(s32 *)((u8 *)p + 0xd58) = 0;
        }
    }
}

}
