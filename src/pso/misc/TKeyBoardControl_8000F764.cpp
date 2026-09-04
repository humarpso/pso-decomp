#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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
int fn_8037BC54(void);
int fn_8037C8B8(void);
int fn_8037CA40(void*);
int free_resources__23TAdSinglePlyChrSelectGCFv(void);
int free_system__13TParticleCtrlFv(void);
M2C_UNK run_tasks__7TObjectFv(M2C_UNK *);
int xfree__FPv(void*);

extern M2C_UNK lbl_80515F70[];
extern s32 lbl_805D62B0;

void run_tasks__16TKeyBoardControlFv(void) {
    TObjPlayer__sub_80083FB0();
    TLobby__sub_80228074();
    if ((s32) lbl_805D62B0 != 0) {
        TLobby__sub_80226FA0();
    }
    run_tasks__7TObjectFv(lbl_80515F70);
}

int get_fog_ctrl__16TKeyBoardControlFPv(void* p) { return TFogCtrl__sub_800FAD08(p); }

void update__16TKeyBoardControlFv(void) {  }
int TKeyBoardControl__sub_8000F828(void) { return 0; }

    extern int lbl_805D49A0;
    extern int lbl_805D49A4;
    extern int lbl_805D49A8;
    extern int lbl_805D49B0;
    extern int lbl_805D5678;
    extern int lbl_805D5680;
void shutdown_and_reset_system(void) { TLobby__sub_802433A8(); TObjTailsTailsMove__sub_800FFE0C(); TObjPlayer__sub_80141604(); destroy_resources__16TObjEneMe3StelthFv(); TAdPlayerLoadGC__sub_801E1350(); free_system__13TParticleCtrlFv(); TParticleCtrl__sub_801E5330(); fn_80082A6C(); free_resources__23TAdSinglePlyChrSelectGCFv(); TObjPlayer__sub_801D92A4(); TLobby__sub_8020E3BC(); TWindowSnapShot__sub_802A7DA0(); TAdWarningBaseGC__sub_8032D188(); destroy_game_heap__6TLobbyFv(); TLobby__sub_8022809C(); TLobby__sub_80227794(); TAdSinglePlyChrSelectGC__sub_80201970(); TWindowSubStatusDisp__sub_803386F0(); TObjBoss2Tunnel__sub_8036EF4C(); TLobby__sub_80147978(); xfree__FPv((void*)(lbl_805D49A0)); xfree__FPv((void*)(lbl_805D49A4)); xfree__FPv((void*)(lbl_805D49B0)); xfree__FPv((void*)(lbl_805D5680)); xfree__FPv((void*)(lbl_805D5678)); xfree__FPv((void*)(lbl_805D49A8)); fn_8037CA40((void*)1); fn_8037C8B8(); fn_8037BC54(); OSResetSystem((void*)1, (void*)0, (void*)1); }

extern s32 lbl_805D49C0;

s32 get_input__16TKeyBoardControlFv(void) {
    return lbl_805D49C0;
}

extern s32 lbl_805D49B8;

s32 get_key_state__16TKeyBoardControlFv(void) {
    return lbl_805D49B8;
}

}
