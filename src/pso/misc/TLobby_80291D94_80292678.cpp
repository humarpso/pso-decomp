#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct PBase_80292730 { u8 pad[0x18]; };

struct Pl_80292730 : PBase_80292730 {
    virtual void v0(int);
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
};

struct Vec_80292730 { f32 x, y, z; };

struct Hdr_80292730 { u32 w[2]; };

struct Info_80292730 { u8 pad0[0x31]; u8 cls; u8 pad32[2]; u32 flags; u8 pad38[0x50 - 0x38]; };

struct CharData_80292730 { u8 pad0[0x370]; Info_80292730 info; u8 pad3C0[0x41C - 0x3C0]; };

struct Entry_80292730 { s32 val; s32 id; };

struct Tbl_80292730 { s32 f0; s32 f4; s32 f8; Entry_80292730 *entries; };

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
void save_position__14TBoss4DarkFalzFi(void *);
void TBoss4DarkFalz__sub_8004C220(void *, void *);
Tbl_80292730 *TLobby__sub_8006EF98(s32, s32);
void __dt__12TPlyCharDataFv(void *, int);
void copy_header_struct__6TLobbyFPvPv(void *, void *);
void TNpcPlayer__sub_8007206C(void *, void *);
void __ct__12TPlyCharDataFv(void *);
void clear_header_struct__10TObjPlayerFPv(void *);
s32 get_map_id__13TRaderMapCoreFPv(void *);
Pl_80292730 *get_player_by_client_id(s32);
Pl_80292730 *TObjPlayer__sub_801BDEF8(s32, s32, void *);
void clamp_and_set_unit_value__10TObjPlayerFiUci(void *, u8, s16);
void TObjPlayer__sub_801D9B38(void *, int);
void begin_action_state__10TObjPlayerFPv(void *);
void send_command__10TNpcPlayerFiciiPv(u8, s32, s32, s32, void *);
void TLobby__sub_80292730(s32 arg0);
}

extern "C" {

s32 set_camera_height_if_valid__6TLobbyFf(f32 farg0);
s32 try_set_split_screen__6TLobbyFi(s32 arg0);
s32 TLobby__sub_80293080();

extern M2C_UNK lbl_804DB1F0[];
extern f32 lbl_805DD9D0;
extern f32 lbl_805DD9D4;

s32 set_camera_height_if_valid__6TLobbyFf(f32 farg0) {
    if (TLobby__sub_80293080() == 0) {
        return 0;
    }
    if ((farg0 < lbl_805DD9D0) || (farg0 > lbl_805DD9D4)) {
        return 0;
    }
    M2C_FIELD(&lbl_804DB1F0, f32 *, 4) = farg0;
    return 1;
}

extern s32 lbl_805D5550;

s32 try_set_split_screen__6TLobbyFi(s32 arg0) {
    if (TLobby__sub_80293080() == 0) {
        return 0;
    }
    lbl_805D5550 = arg0;
    return 1;
}
void TLobby__sub_80292730(s32 arg0) {
    CharData_80292730 cd;
    Info_80292730 info;
    Vec_80292730 pos;
    Hdr_80292730 hdr;
    s32 i;
    Pl_80292730 *p;
    Tbl_80292730 *tbl;
    s32 map;
    Entry_80292730 *e;
    if (arg0 < 0 || arg0 >= 0x10) {
        return;
    }
    for (i = 0; i < 4; i++) {
        p = get_player_by_client_id(i);
        clear_header_struct__10TObjPlayerFPv(&hdr);
        if (p != NULL) {
            VecCopy__FP3VecPC3Vec(&pos, (u8 *)p + 0x38);
            TNpcPlayer__sub_8007206C(&info, (u8 *)p + 0x85C);
            copy_header_struct__6TLobbyFPvPv(&hdr, (u8 *)p + 0xDAC);
            map = get_map_id__13TRaderMapCoreFPv(p);
            if (p != NULL) {
                p->v0(1);
            }
            switch (info.flags & 0xE0) {
            case 0x20:
                tbl = TLobby__sub_8006EF98(0, arg0);
                break;
            case 0x40:
                tbl = TLobby__sub_8006EF98(1, arg0);
                break;
            case 0x80:
                tbl = TLobby__sub_8006EF98(2, arg0);
                break;
            default:
                tbl = TLobby__sub_8006EF98(0, arg0);
                break;
            }
            __ct__12TPlyCharDataFv(&cd);
            TNpcPlayer__sub_8007206C(&cd.info, &info);
            begin_action_state__10TObjPlayerFPv(&cd);
            send_command__10TNpcPlayerFiciiPv(info.cls, tbl->f4, tbl->f8, tbl->f0, &cd);
            p = TObjPlayer__sub_801BDEF8(i, map, &cd);
            if (p == NULL) {
                __dt__12TPlyCharDataFv(&cd, -1);
                return;
            }
            __dt__12TPlyCharDataFv(&cd, -1);
            copy_header_struct__6TLobbyFPvPv((u8 *)p + 0xDAC, &hdr);
            TBoss4DarkFalz__sub_8004C220(p, &pos);
            save_position__14TBoss4DarkFalzFi(p);
            p->v6();
            TObjPlayer__sub_801D9B38((u8 *)p + 0x428, 0xFF);
            if (tbl->entries != NULL) {
                for (e = tbl->entries; e->id != 0xFF; e++) {
                    clamp_and_set_unit_value__10TObjPlayerFiUci(p, e->id, e->val);
                }
            }
            M2C_FIELD(p, s32 *, 0xD58) = 0;
        }
    }
}

}
