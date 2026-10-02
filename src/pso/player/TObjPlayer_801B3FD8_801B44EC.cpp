#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct pkt_801B1674 {
    u8 hdr[2];
    u16 player_id;
};

extern "C" {
void recover_full__10TObjPlayerFPv(void *arg0);
s32 update_medical_font__10TObjPlayerFi(s32 arg0, void *arg1);
u32 get_player_by_client_id(int);
void TFontSmallLobby__sub_801C01BC(void *);
M2C_UNK set_code_49_1__10TObjPlayerFPv(void *);
s32 validate_6x31_use_medical_center(void *);
s32 update_medical_font__10TObjPlayerFi(s32 arg0, void * _w1);
void handle_6x31_use_medical_center(void *arg0);
s32 obj_getArrWord_254(void *, M2C_UNK);
s32 obj_testFlags30(void *, M2C_UNK);
s32 get_recovery_need_flags__10TObjPlayerFPv(void *arg0);
}

extern "C" {

struct S801B44EC_801b44ec_801B3FD8 { s8 b[2]; s16 h; };
struct Base_801B4540_801B3FD8 { char pad[0x18]; };
struct VObj_801B4540_801B3FD8 : Base_801B4540_801B3FD8 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51();
    virtual void m52(); virtual void m53();
};
struct S801B4630_801B3FD8 { s8 b[2]; s16 h; };

s32 can_use_action__10TObjPlayerFi(s32 arg0);
void recover_full__10TObjPlayerFPv(void *arg0);
void send_code50_packet__10TObjPlayerFi(s32 arg0);
void send_code_49_1__10TObjPlayerFi(s32 arg0);
void send_field_state__10TObjPlayerFPv(void* p);
M2C_UNK TFontSmallLobby__sub_801C0228();
s32 TLobby__sub_800822E8(s32, M2C_UNK);
M2C_UNK TObjPlayer__sub_8011E204(void *, M2C_UNK);
int TObjPlayer__sub_801BF324(void*);
M2C_UNK bswap_font_lobby__10TObjPlayerFPv(void *);
s32 check_action_usable__10TObjPlayerFPvi(s32, M2C_UNK);
s32 check_flag_100__10TObjPlayerFPv(s32);
s32 is_ready__15TFontSmallLobbyFPv(s32);
M2C_UNK obj_clearFlags30(void *, M2C_UNK);
s16 obj_getField1c(s32);
s32 obj_isState2_324();
M2C_UNK play_voice_pair__10TObjPlayerFPv();
int send_field_state_if_active__10TObjPlayerFii(void*, void*);
M2C_UNK send_font_state__10TObjPlayerFPv(void *);
M2C_UNK set_code_49_1__10TObjPlayerFPv(void *);
M2C_UNK set_code_50_1__10TObjPlayerFPv(void *);

void send_code50_packet__10TObjPlayerFi(s32 arg0) {
    struct S801B44EC_801b44ec_801B3FD8 sp8;

    if ((arg0 == 0) || (obj_isState2_324() == 0)) {
        set_code_50_1__10TObjPlayerFPv(&sp8);
        sp8.h = obj_getField1c(arg0);
        send_font_state__10TObjPlayerFPv(&sp8);
    }
}

void recover_full__10TObjPlayerFPv(void *arg0) {
    struct VObj_801B4540_801B3FD8 *o = (struct VObj_801B4540_801B3FD8 *)arg0;
    play_voice_pair__10TObjPlayerFPv();
    o->m53();
    obj_clearFlags30(arg0, 0xE00);
    TObjPlayer__sub_8011E204(arg0, 1);
}

void handle_6x31_use_medical_center(void *arg0) {
    struct pkt_801B1674 pkt;
    set_code_49_1__10TObjPlayerFPv((void *)((M2C_UNK *)(&pkt)));
    update_medical_font__10TObjPlayerFi((s32)((s32)((s32) &pkt)), (void *)((void *)(arg0)));
    TFontSmallLobby__sub_801C01BC(&pkt);
    if (validate_6x31_use_medical_center(&pkt) != 0) {
        u8 *p = (u8 *) get_player_by_client_id(pkt.player_id);
        if (p != NULL) {
            recover_full__10TObjPlayerFPv((void *)(p));
        }
    }
}

s32 update_medical_font__10TObjPlayerFi(s32 arg0, void * _w1) {
    TFontSmallLobby__sub_801C0228();
    return arg0;
}

void send_code_49_1__10TObjPlayerFi(s32 arg0) {
    struct S801B4630_801B3FD8 sp8;

    if ((arg0 == 0) || (obj_isState2_324() == 0)) {
        set_code_49_1__10TObjPlayerFPv(&sp8);
        sp8.h = obj_getField1c(arg0);
        bswap_font_lobby__10TObjPlayerFPv(&sp8);
    }
}

s32 get_recovery_need_flags__10TObjPlayerFPv(void *arg0) {
    s32 var_r31;
    var_r31 = 0;
    if ((s16) M2C_FIELD(arg0, s16 *, 0x32C) < (s16) M2C_FIELD(arg0, s16 *, 0x2B8)) {
        var_r31 |= 1;
    }
    if ((s16) M2C_FIELD(arg0, s16 *, 0x32E) < (s16) M2C_FIELD(arg0, s16 *, 0x2BA)) {
        var_r31 |= 2;
    }
    if (obj_testFlags30(arg0, 0x3F) != 0) {
        var_r31 |= 4;
    }
    switch (obj_getArrWord_254(arg0, 2)) {
    case 0xB:
        var_r31 |= 4;
        break;
    }
    switch (obj_getArrWord_254(arg0, 3)) {
    case 0xC:
        var_r31 |= 4;
        break;
    }
    return var_r31;
}

s32 can_use_action__10TObjPlayerFi(s32 arg0) {
    if (check_action_usable__10TObjPlayerFPvi(arg0 + 0x550, 0x200) == 0) {
        return 0;
    }
    if (check_flag_100__10TObjPlayerFPv(arg0) != 0) {
        return 0;
    }
    if (TLobby__sub_800822E8(arg0, 0x200) != 0) {
        return 0;
    }
    return is_ready__15TFontSmallLobbyFPv(arg0 + 0x4AC) != 0 ? 1 : 0;
}

void send_field_state__10TObjPlayerFPv(void* p) { TObjPlayer__sub_801BF324((char*)p + 0x384); send_field_state_if_active__10TObjPlayerFii(p, (void*)142625); }

}
