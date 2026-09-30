#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8019A574_lbl_804B8E18 {
    M2C_UNK value;
    u8 remaining[0x13C];
};

struct RecoveredGlobal_8019A574_lbl_8050DD58 {
    M2C_UNK value;
    u8 remaining[0x50];
};

struct RecoveredGlobal_8019A574_lbl_8050DDAC {
    M2C_UNK value;
    u8 remaining[0x18];
};

struct Pkt_8019A098 { u8 cmd; u8 size; u16 id; f32 x; f32 z; s32 flag; };

struct Player_8019A098 { u8 pad[0x60]; s32 area; };

struct Win_8019A44C { u8 pad0[0x50]; f32 f50[3]; u8 pad5C[0x2D8]; s32 f334; u8 pad338[0xC]; f32 f344; f32 f348; f32 f34C; u8 pad350[0x40]; f32 f390; f32 f394; f32 f398; f32 f39C; f32 f3A0; };

extern "C" {
s32 bswap_32__FPUl(s32);
s32 read_be16_field2__10TObjPlayerFPv();
void bswap_6x79_gogo_ball__12TWindowTimerFi(s32 arg0);
void TWindowTimer__sub_8019A6F8(void* p);
    extern int lbl_8050DD50[];
int set_timer_value__12TWindowTimerFii(int a0, int a1);
int TWindowCtrl__sub_8024A4EC(void*);
int TWindowTimer__sub_8019A770(void* p);
u8 * TObjPlayer__sub_80019038(void *);
void reset_photon_effect__10TObjPlayerFPv(s32);
s32 initialize_linked_object_reference(void *, s32);
extern M2C_UNK lbl_804B8E18[];
extern RecoveredGlobal_8019A574_lbl_8050DD58 lbl_8050DD58;
extern M2C_UNK lbl_8050DDAC[];
extern const f32 lbl_805DBF58;
extern const f32 lbl_805DBF64;
extern const f32 lbl_805DBF74;
u8 *TWindowTimer__sub_8019A574(u8 *arg0);
extern int lbl_8050DD50[];
s16 TWindowTimer__sub_8019A70C(s32 i);
extern int lbl_8050DD50[];
void TWindowTimer__sub_8019A738(s32 i);
extern int lbl_8050DD50[];
void TWindowTimer__sub_8019A754(s32 i);
void TNpcPlayer__sub_80152E74(void *cmd);
Player_8019A098 *TPlayerBattleCtrl4P__sub_801BA74C(s32);
void TObjPlayer__sub_801CFD5C(void *arg0, s32 arg1, f32 *arg2, f32 *arg3);
void sync_from_lobby__10TNpcPlayerFPv(void *p);
extern s32 lbl_805D53A0;
void TWindowTimer__sub_8019A098(void);
void VecCopy__FP3VecPC3Vec(void *, void *);
void TObjBoss2Tunnel__sub_8007E764(void *, void *, s32);
f32 TBoss6Kakusan__sub_803D8BD8(void *, f32);
extern RecoveredGlobal_8019A574_lbl_8050DD58 lbl_8050DD58;
extern M2C_UNK lbl_8050DDAC[];
extern const f32 lbl_805DBF58;
extern const f32 lbl_805DBF98;
void TWindowTimer__sub_8019A44C(Win_8019A44C *arg0, s32 arg1);
}

extern "C" {

void *destroy_player_obj__12TWindowTimerFPvs(void *arg0, s16 arg1);
void send_gogo_ball__12TWindowTimerFi(s32 arg0);
void update_best_time__12TWindowTimerFPv(void *arg0);
M2C_UNK TLobby__send_and_handle_60(void *);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK __dl__7TObjectFPv(void *);
s32 bswap_32__FPUl(s32);
M2C_UNK clear_obj_links(void *);
M2C_UNK destroy_motion_object__10TObjPlayerFPvs(void *, M2C_UNK);
s32 read_be16_field2__10TObjPlayerFPv();

extern M2C_UNK lbl_8050DDAC[];

void update_best_time__12TWindowTimerFPv(void *arg0) {
    if ((M2C_FIELD(lbl_8050DDAC, s16 *, 0x12) == 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x354) <= (s32) M2C_FIELD(lbl_8050DDAC, s32 *, 0x14))) {
        M2C_FIELD(arg0, s32 *, 0x354) = (s32) M2C_FIELD(lbl_8050DDAC, s32 *, 0x14);
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(lbl_8050DDAC, f32 *, 0);
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) M2C_FIELD(lbl_8050DDAC, f32 *, 4);
        M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(lbl_8050DDAC, f32 *, 8);
        TWindowTimer__sub_8019A44C((Win_8019A44C *)(arg0), (s32)(M2C_FIELD(lbl_8050DDAC, s32 *, 0xC)));
    }
    M2C_FIELD(lbl_8050DDAC, s16 *, 0x12) = 1;
}

extern M2C_UNK lbl_804B8E18[];

void TWindowTimer__sub_8019A098(void) {
    Pkt_8019A098 pkt;
    f32 x;
    f32 z;
    Player_8019A098 *p;
    TNpcPlayer__sub_80152E74(&pkt);
    p = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if (p != 0) {
        pkt.id = lbl_805D53A0;
        TObjPlayer__sub_801CFD5C(p, p->area, &x, &z);
        pkt.x = x;
        pkt.z = z;
        pkt.flag = 0;
        sync_from_lobby__10TNpcPlayerFPv(&pkt);
    }
}

void TWindowTimer__sub_8019A44C(Win_8019A44C *arg0, s32 arg1) {
    arg0->f390 = ((f32 *)&lbl_8050DD58)[3];
    arg0->f394 = ((f32 *)&lbl_8050DD58)[4];
    if ((s32)((u8 *)&lbl_8050DDAC)[0x18] == 1) {
        arg0->f390 = ((f32 *)&lbl_8050DD58)[0x13];
        arg0->f394 = ((f32 *)&lbl_8050DD58)[0x14];
    }
    arg0->f398 = lbl_805DBF98;
    arg0->f39C = lbl_805DBF98;
    arg0->f344 = lbl_805DBF58;
    arg0->f348 = arg0->f394;
    arg0->f34C = arg0->f390;
    arg0->f3A0 = TBoss6Kakusan__sub_803D8BD8(&arg0->f344, lbl_805DBF98);
    TObjBoss2Tunnel__sub_8007E764(&arg0->f344, &arg0->f344, arg1);
    arg0->f334 = arg1;
    VecCopy__FP3VecPC3Vec(arg0->f50, &arg0->f344);
    arg0->f50[1] = lbl_805DBF58;
}

void *destroy_player_obj__12TWindowTimerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B8E18;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        clear_obj_links(arg0);
        destroy_motion_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {

typedef char RecoveredGlobal_8019A574_lbl_804B8E18_size[sizeof(RecoveredGlobal_8019A574_lbl_804B8E18) == 0x140 ? 1 : -1];
typedef char RecoveredGlobal_8019A574_lbl_8050DD58_size[sizeof(RecoveredGlobal_8019A574_lbl_8050DD58) == 0x54 ? 1 : -1];
typedef char RecoveredGlobal_8019A574_lbl_8050DDAC_size[sizeof(RecoveredGlobal_8019A574_lbl_8050DDAC) == 0x1C ? 1 : -1];
u8 *TWindowTimer__sub_8019A574(u8 *arg0) {
    TObjPlayer__sub_80019038(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8019A574_lbl_804B8E18 *)&lbl_804B8E18).value;
    M2C_FIELD(arg0, f32 *, 0x390) = (f32) lbl_805DBF58;
    M2C_FIELD(arg0, f32 *, 0x394) = (f32) lbl_805DBF58;
    M2C_FIELD(arg0, f32 *, 0x398) = (f32) lbl_805DBF58;
    M2C_FIELD(arg0, f32 *, 0x39C) = (f32) lbl_805DBF58;
    M2C_FIELD(arg0, f32 *, 0x344) = (f32) lbl_805DBF58;
    M2C_FIELD(arg0, f32 *, 0x348) = (f32) lbl_805DBF58;
    M2C_FIELD(arg0, f32 *, 0x34C) = (f32) lbl_805DBF58;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(&lbl_8050DD58.value, f32 *, 0x20);
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) M2C_FIELD(&lbl_8050DD58.value, f32 *, 0x24);
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(&lbl_8050DD58.value, f32 *, 0x28);
    M2C_FIELD(arg0, s32 *, 0x350) = 0;
    M2C_FIELD(arg0, s32 *, 0x354) = 0;
    M2C_FIELD(arg0, s32 *, 0x334) = 0;
    M2C_FIELD(arg0, s32 *, 0x338) = 0;
    M2C_FIELD(arg0, f32 *, 0x33C) = (f32) M2C_FIELD(&lbl_8050DD58.value, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0x340) = (f32) M2C_FIELD(&lbl_8050DD58.value, f32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x358) = 0;
    M2C_FIELD(arg0, f32 *, 0x364) = (f32) lbl_805DBF58;
    M2C_FIELD(arg0, f32 *, 0x368) = (f32) lbl_805DBF58;
    M2C_FIELD(arg0, f32 *, 0x36C) = (f32) lbl_805DBF58;
    M2C_FIELD(arg0, f32 *, 0x370) = (f32) lbl_805DBF74;
    M2C_FIELD(arg0, f32 *, 0x374) = (f32) lbl_805DBF64;
    M2C_FIELD(arg0, s32 *, 0x378) = 1;
    M2C_FIELD(arg0, s32 *, 0x37C) = 0x40107;
    initialize_linked_object_reference(arg0, (s32) (arg0 + 0x364));
    reset_photon_effect__10TObjPlayerFPv((s32) arg0);
    M2C_FIELD(arg0, s32 *, 0x35C) = 0;
    M2C_FIELD(&(*(RecoveredGlobal_8019A574_lbl_8050DDAC *)&lbl_8050DDAC).value, s16 *, 0x10) = 0;
    M2C_FIELD(&(*(RecoveredGlobal_8019A574_lbl_8050DDAC *)&lbl_8050DDAC).value, s8 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x360) = 0;
    return arg0;
}

void send_gogo_ball__12TWindowTimerFi(s32 arg0) {
    bswap_6x79_gogo_ball__12TWindowTimerFi((s32)(arg0));
    TLobby__send_and_handle_60((void *) (arg0));
}
void bswap_6x79_gogo_ball__12TWindowTimerFi(s32 arg0) {
    read_be16_field2__10TObjPlayerFPv();
    bswap_32__FPUl(arg0 + 4);
    bswap_32__FPUl(arg0 + 8);
    bswap_32__FPUl(arg0 + 0xC);
    bswap_32__FPUl(arg0 + 0x10);
}
void TWindowTimer__sub_8019A6F8(void* p) { *(u8*)((char*)p + 0x0) = 121; *(u8*)((char*)p + 0x1) = 6; }

s16 TWindowTimer__sub_8019A70C(s32 i) {
    return ((s32 *)&lbl_8050DD50)[i];
}

int set_timer_value__12TWindowTimerFii(int a0, int a1) { lbl_8050DD50[a0] = a1; return (int)lbl_8050DD50; }

void TWindowTimer__sub_8019A738(s32 i) {
    ((s32 *)&lbl_8050DD50)[i] += 3;
}

void TWindowTimer__sub_8019A754(s32 i) {
    ((s32 *)&lbl_8050DD50)[i] += 1;
}

int TWindowTimer__sub_8019A770(void* p) { return TWindowCtrl__sub_8024A4EC(p); }

}

}
