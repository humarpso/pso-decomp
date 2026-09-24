#include "types.h"
#include "pso/boss/TBoss1Dragon.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern s32 lbl_805D53A0;
extern s32 *TLobby__data_805D5E78;
void TLobby__sub_801EDFF4(u8 reg);
extern s32 TLobby__data_805D53AC;
extern s32 *TLobby__data_805D5E78;
void TLobby__sub_801EDFE0(u8 reg);
}

extern "C" {

int TLobby__sub_801EE028(void* p);
void TLobby__sub_801EE09C(void* p);
void create_quest_bgm_ctrl__6TLobbyFv(void);
int forward_801F36E4__6TLobbyFPv(void* p);
int TLobby__sub_801F36E4(void*);
void* TQuestBgmCtrl__ct(void*, s32);
void* __nw__7TObjectFUl(u32);
int set_cleanup_flag__6TLobbyFv(void*);

extern s32 tl_05;

void create_quest_bgm_ctrl__6TLobbyFv(void) {
    void* obj = __nw__7TObjectFUl(0x1C);
    if (obj != 0) {
        TQuestBgmCtrl__ct(obj, tl_05);
    }
}

void TLobby__sub_801EDFE0(u8 reg) {
    TLobby__data_805D5E78[reg] = TLobby__data_805D53AC;
}

void TLobby__sub_801EDFF4(u8 reg) {
    TLobby__data_805D5E78[reg] = lbl_805D53A0;
}

int forward_801F36E4__6TLobbyFPv(void* p) { return TLobby__sub_801F36E4(p); }
int TLobby__sub_801EE028(void* p) { return set_cleanup_flag__6TLobbyFv(p); }

void TLobby__sub_801EE09C(void* p) { TBoss1Dragon::requestActionRefresh(); }

}
