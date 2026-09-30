#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270 {
    M2C_UNK value;
    u8 remaining[0xAC];
};

struct RecoveredGlobal_8000F7FC_lbl_80515F48 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_8000F9E4_lbl_804FE120 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F90C_lbl_804FE120 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F9CC_lbl_804FE120 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F8FC_lbl_804FE120 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F8EC_lbl_804FE120 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F91C_lbl_804FE120 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct G_8000F92C { s32 f0; s32 f4; s32 f8; s32 fc; s32 f10; };

struct G_8000F9B0 { s32 f0; s32 f4; s32 f8; s32 fc; s32 f10; };

typedef struct GXColor_8000FA00 { u8 r, g, b, a; } GXColor_8000FA00;

extern "C" {
extern s32 lbl_805D49C0;
void TKeyBoardControl__sub_8000F950(void);
extern s32 lbl_805D49C0;
void TKeyBoardControl__sub_8000F95C(void);
extern s32 lbl_805D49BC;
void TKeyBoardControl__sub_8000F978(void);
extern s32 lbl_805D49BC;
void TKeyBoardControl__sub_8000F984(void);
extern s32 lbl_805D49B8;
void TKeyBoardControl__sub_8000F998(void);
extern s32 lbl_805D49B8;
void TKeyBoardControl__sub_8000F9A4(void);
s32 flush_input__16TKeyBoardControlFv(void);
M2C_UNK reset_state_byte__6TLobbyFv();
M2C_UNK disable_disconnected_ports__16TKeyBoardControlFv(void *);
M2C_UNK TAdSinglePlyChrSelectGC__sub_802430F4();
M2C_UNK TKeyBoardControl__sub_803DEA18();
extern RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270 TKeyBoardControl__data_80506270;
void TKeyBoardControl__sub_8000F764(void);
M2C_UNK run_tasks__7TObjectFv(M2C_UNK *);
extern RecoveredGlobal_8000F7FC_lbl_80515F48 lbl_80515F48;
void TKeyBoardControl__sub_8000F7FC(void);
extern RecoveredGlobal_8000F9E4_lbl_804FE120 lbl_804FE120;
void TKeyBoardControl__sub_8000F9E4(void);
extern RecoveredGlobal_8000F9E4_lbl_804FE120 lbl_804FE120;
void TKeyBoardControl__sub_8000F90C(s32 arg0);
extern RecoveredGlobal_8000F9E4_lbl_804FE120 lbl_804FE120;
void TKeyBoardControl__sub_8000F9CC(s32 arg0);
extern RecoveredGlobal_8000F9E4_lbl_804FE120 lbl_804FE120;
s32 get_main_phase(void);
extern RecoveredGlobal_8000F9E4_lbl_804FE120 lbl_804FE120;
s32 TKeyBoardControl__sub_8000F8EC(void);
extern RecoveredGlobal_8000F9E4_lbl_804FE120 lbl_804FE120;
void TKeyBoardControl__sub_8000F91C(s32 arg0);
extern s32 lbl_805D49BC;
bool TKeyBoardControl__sub_8000F968(void);
extern RecoveredGlobal_8000F9E4_lbl_804FE120 lbl_804FE120;
s32 TKeyBoardControl__sub_8000F92C(void);
extern RecoveredGlobal_8000F9E4_lbl_804FE120 lbl_804FE120;
s32 TKeyBoardControl__sub_8000F9B0(void);
void set_cull_none__8TObjFishFv(void);
void GXSetCopyClear(GXColor_8000FA00 clear_clr, u32 clear_z);
void GXCopyDisp(void *dest, int clear);
void GXInitLightPos(void *lt_obj, f32 x, f32 y, f32 z);
void GXInitLightColor(void *lt_obj, GXColor_8000FA00 color);
void GXLoadLightObjImm(void *lt_obj, int light);
void GXSetChanAmbColor(int chan, GXColor_8000FA00 amb_color);
void GXSetChanMatColor(int chan, GXColor_8000FA00 mat_color);
extern u8 lbl_804FE020[];
extern void *lbl_805D773C;
extern void *lbl_805D7740;
extern GXColor_8000FA00 lbl_805D7D00;
extern GXColor_8000FA00 lbl_805D7D04;
extern GXColor_8000FA00 lbl_805D7D08;
extern const f32 lbl_805D7D0C;
extern const f32 lbl_805D7D10;
extern GXColor_8000FA00 lbl_805E1200;
void TKeyBoardControl__sub_8000FA00(void);
}

extern "C" {

int TKeyBoardControl__sub_8000F828(void);
int get_fog_ctrl__16TKeyBoardControlFPv(void* p);
s32 get_input__16TKeyBoardControlFv(void);
s32 get_key_state__16TKeyBoardControlFv(void);
void run_tasks__16TKeyBoardControlFv(void);
void shutdown_and_reset_system(void);
void update__16TKeyBoardControlFv(void);
int OSResetSystem(void*, void*, void*);
int TAdPlayerLoadGC__sub_801E1350(void);
int TAdSinglePlyChrSelectGC__sub_80201970(void);
int TAdWarningBaseGC__sub_8032D188(void);
int TFogCtrl__sub_800FAD08(void*);
int TLobby__sub_80147978(void);
int TLobby__sub_8020E3BC(void);
M2C_UNK TLobby__sub_80226FA0();
int TLobby__sub_80227794(void);
M2C_UNK TLobby__sub_80228074();
int TLobby__sub_8022809C(void);
int TLobby__sub_802433A8(void);
int TObjBoss2Tunnel__sub_8036EF4C(void);
M2C_UNK TObjPlayer__sub_80083FB0();
int TObjPlayer__sub_80141604(void);
int TObjPlayer__sub_801D92A4(void);
int TObjTailsTailsMove__sub_800FFE0C(void);
int TParticleCtrl__sub_801E5330(void);
int TWindowSnapShot__sub_802A7DA0(void);
int TWindowSubStatusDisp__sub_803386F0(void);
int destroy_game_heap__6TLobbyFv(void);
int destroy_resources__16TObjEneMe3StelthFv(void);
int fn_80082A6C(void);
int VIWaitForRetrace(void);
int VIFlush(void);
int VISetBlack(void*);
int free_resources__23TAdSinglePlyChrSelectGCFv(void);
int free_system__13TParticleCtrlFv(void);
M2C_UNK run_tasks__7TObjectFv(M2C_UNK *);
int xfree__FPv(void*);

extern M2C_UNK lbl_80515F70[];
extern s32 lbl_805D62B0;

typedef char RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270_size[sizeof(RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270) == 0xB0 ? 1 : -1];
void TKeyBoardControl__sub_8000F764(void) {
    TKeyBoardControl__sub_803DEA18();
    disable_disconnected_ports__16TKeyBoardControlFv((void *) (&TKeyBoardControl__data_80506270.value));
    flush_input__16TKeyBoardControlFv();
    TAdSinglePlyChrSelectGC__sub_802430F4();
    reset_state_byte__6TLobbyFv();
}

void run_tasks__16TKeyBoardControlFv(void) {
    TObjPlayer__sub_80083FB0();
    TLobby__sub_80228074();
    if ((s32) lbl_805D62B0 != 0) {
        TLobby__sub_80226FA0();
    }
    run_tasks__7TObjectFv(lbl_80515F70);
}

int get_fog_ctrl__16TKeyBoardControlFPv(void* p) { return TFogCtrl__sub_800FAD08(p); }

typedef char RecoveredGlobal_8000F7FC_lbl_80515F48_size[sizeof(RecoveredGlobal_8000F7FC_lbl_80515F48) == 0x28 ? 1 : -1];
void TKeyBoardControl__sub_8000F7FC(void) {
    run_tasks__7TObjectFv((M2C_UNK *)(&lbl_80515F48.value));
}

void update__16TKeyBoardControlFv(void) {  }
int TKeyBoardControl__sub_8000F828(void) { return 0; }

    extern int lbl_805D49A0;
    extern int lbl_805D49A4;
    extern int lbl_805D49A8;
    extern int lbl_805D49B0;
    extern int lbl_805D5678;
    extern int lbl_805D5680;
void shutdown_and_reset_system(void) { TLobby__sub_802433A8(); TObjTailsTailsMove__sub_800FFE0C(); TObjPlayer__sub_80141604(); destroy_resources__16TObjEneMe3StelthFv(); TAdPlayerLoadGC__sub_801E1350(); free_system__13TParticleCtrlFv(); TParticleCtrl__sub_801E5330(); fn_80082A6C(); free_resources__23TAdSinglePlyChrSelectGCFv(); TObjPlayer__sub_801D92A4(); TLobby__sub_8020E3BC(); TWindowSnapShot__sub_802A7DA0(); TAdWarningBaseGC__sub_8032D188(); destroy_game_heap__6TLobbyFv(); TLobby__sub_8022809C(); TLobby__sub_80227794(); TAdSinglePlyChrSelectGC__sub_80201970(); TWindowSubStatusDisp__sub_803386F0(); TObjBoss2Tunnel__sub_8036EF4C(); TLobby__sub_80147978(); xfree__FPv((void*)(lbl_805D49A0)); xfree__FPv((void*)(lbl_805D49A4)); xfree__FPv((void*)(lbl_805D49B0)); xfree__FPv((void*)(lbl_805D5680)); xfree__FPv((void*)(lbl_805D5678)); xfree__FPv((void*)(lbl_805D49A8)); VISetBlack((void*)1); VIFlush(); VIWaitForRetrace(); OSResetSystem((void*)1, (void*)0, (void*)1); }

extern s32 lbl_805D49C0;

typedef char RecoveredGlobal_8000F90C_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F90C_lbl_804FE120) == 0x18 ? 1 : -1];

typedef char RecoveredGlobal_8000F8FC_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F8FC_lbl_804FE120) == 0x18 ? 1 : -1];

typedef char RecoveredGlobal_8000F8EC_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F8EC_lbl_804FE120) == 0x18 ? 1 : -1];
s32 TKeyBoardControl__sub_8000F8EC(void) {
    return M2C_FIELD(&(*(RecoveredGlobal_8000F8EC_lbl_804FE120 *)&lbl_804FE120).value, s32 *, 0x14);
}

s32 get_main_phase(void) {
    return (*(RecoveredGlobal_8000F8FC_lbl_804FE120 *)&lbl_804FE120).value;
}

void TKeyBoardControl__sub_8000F90C(s32 arg0) {
    M2C_FIELD(&(*(RecoveredGlobal_8000F90C_lbl_804FE120 *)&lbl_804FE120).value, s32 *, 0xC) = arg0;
}

typedef char RecoveredGlobal_8000F91C_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F91C_lbl_804FE120) == 0x18 ? 1 : -1];
void TKeyBoardControl__sub_8000F91C(s32 arg0) {
    M2C_FIELD(&(*(RecoveredGlobal_8000F91C_lbl_804FE120 *)&lbl_804FE120).value, s32 *, 8) = arg0;
}

s32 TKeyBoardControl__sub_8000F92C(void) {
    (*(G_8000F92C *)&lbl_804FE120).f10 = 3;
    return (*(G_8000F92C *)&lbl_804FE120).f4 = (*(G_8000F92C *)&lbl_804FE120).fc;
}

s32 get_input__16TKeyBoardControlFv(void) {
    return lbl_805D49C0;
}

extern s32 lbl_805D49B8;

void TKeyBoardControl__sub_8000F950(void) {
    lbl_805D49C0 = 1;
}

void TKeyBoardControl__sub_8000F95C(void) {
    lbl_805D49C0 = 0;
}

bool TKeyBoardControl__sub_8000F968(void) {
    return lbl_805D49BC != 0;
}

void TKeyBoardControl__sub_8000F978(void) {
    lbl_805D49BC = 1;
}

void TKeyBoardControl__sub_8000F984(void) {
    lbl_805D49BC = 0;
}

s32 get_key_state__16TKeyBoardControlFv(void) {
    return lbl_805D49B8;
}

void TKeyBoardControl__sub_8000F998(void) {
    lbl_805D49B8 = 1;
}

void TKeyBoardControl__sub_8000F9A4(void) {
    lbl_805D49B8 = 0;
}
typedef char RecoveredGlobal_8000F9E4_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F9E4_lbl_804FE120) == 0x18 ? 1 : -1];

typedef char RecoveredGlobal_8000F9CC_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F9CC_lbl_804FE120) == 0x18 ? 1 : -1];

s32 TKeyBoardControl__sub_8000F9B0(void) {
    (*(G_8000F9B0 *)&lbl_804FE120).f10 = 2;
    return (*(G_8000F9B0 *)&lbl_804FE120).f4 = (*(G_8000F9B0 *)&lbl_804FE120).f8;
}

void TKeyBoardControl__sub_8000F9CC(s32 arg0) {
    M2C_FIELD(&(*(RecoveredGlobal_8000F9CC_lbl_804FE120 *)&lbl_804FE120).value, s32 *, 4) = arg0;
    M2C_FIELD(&(*(RecoveredGlobal_8000F9CC_lbl_804FE120 *)&lbl_804FE120).value, s32 *, 0x10) = 1;
}

void TKeyBoardControl__sub_8000F9E4(void) {
    M2C_FIELD(&lbl_804FE120.value, s32 *, 0) = 1;
    M2C_FIELD(&lbl_804FE120.value, s32 *, 8) = 1;
    M2C_FIELD(&lbl_804FE120.value, s32 *, 0xC) = 1;
    M2C_FIELD(&lbl_804FE120.value, s32 *, 0x14) = 1;
}
void TKeyBoardControl__sub_8000FA00(void) {
    GXColor_8000FA00 c0 = lbl_805D7D00;
    GXColor_8000FA00 c1 = lbl_805D7D04;
    GXColor_8000FA00 c2 = lbl_805D7D08;
    GXSetCopyClear(lbl_805E1200, 0xFFFFFF);
    GXInitLightPos(lbl_804FE020, lbl_805D7D0C, lbl_805D7D10, lbl_805D7D0C);
    GXInitLightColor(lbl_804FE020, c2);
    GXLoadLightObjImm(lbl_804FE020, 1);
    GXSetChanAmbColor(0, c0);
    GXSetChanAmbColor(2, c2);
    GXSetChanMatColor(4, c1);
    GXCopyDisp(lbl_805D7740, 1);
    GXCopyDisp(lbl_805D773C, 1);
    set_cull_none__8TObjFishFv();
}

}
