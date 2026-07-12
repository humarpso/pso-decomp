#include "types.h"

extern "C" {

void TLobby__sub_801403B4(void);
void TLobby__sub_801403B8(void);
s32 spawn_boss3_volopt_ctrl__6TLobbyFv(void);
void reset_subsystems__6TLobbyFv(void);
s32 TLobby__sub_8014047C(void);
s32 TBoss3VoloptCtrl__ct();
s32 create_tasks__6TLobbyFv();
int TLobby__sub_8007BA20(void);
s32 check_disconnect_conditions__6TLobbyFv();
int update_current_floor__6TLobbyFv(void);
int TLobby__sub_80227248(void);
int TLobby__sub_8022743C(void);
int TLobby__sub_80227F7C(void);
s32 TLobby__sub_80227FB4();
s32 TOKeyMachine01__sub_802034A8();
s32 TObjLight__sub_80133D78();
int free_heap__13TParticleCtrlFv(void);
s32 init_heap__13TParticleCtrlFPv(s32);
u32 __nw__7TObjectFUl(s32);
int TLobby__sub_800F7B84(void);
s32 TBoss4CheckEmpty__sub_8034A8FC();

void TLobby__sub_801403B4(void) {  }
void TLobby__sub_801403B8(void) { TLobby__sub_80227F7C(); TLobby__sub_8022743C(); TLobby__sub_80227248(); TLobby__sub_800F7B84(); update_current_floor__6TLobbyFv(); TLobby__sub_8007BA20(); }
s32 spawn_boss3_volopt_ctrl__6TLobbyFv(void) {
    TOKeyMachine01__sub_802034A8();
    TLobby__sub_80227FB4();
    if (check_disconnect_conditions__6TLobbyFv() != 0) {
        return 0;
    }
    TObjLight__sub_80133D78();
    create_tasks__6TLobbyFv();
    if (__nw__7TObjectFUl(0x24) != 0U) {
        TBoss3VoloptCtrl__ct();
    }
    return 1;
}
void reset_subsystems__6TLobbyFv(void) { free_heap__13TParticleCtrlFv(); TLobby__sub_80227F7C(); TLobby__sub_8022743C(); TLobby__sub_80227248(); TLobby__sub_800F7B84(); update_current_floor__6TLobbyFv(); TLobby__sub_8007BA20(); }
s32 TLobby__sub_8014047C(void) {
    TOKeyMachine01__sub_802034A8();
    TLobby__sub_80227FB4();
    if (check_disconnect_conditions__6TLobbyFv() != 0) {
        return 0;
    }
    TObjLight__sub_80133D78();
    create_tasks__6TLobbyFv();
    init_heap__13TParticleCtrlFPv(0x10000);
    TBoss4CheckEmpty__sub_8034A8FC();
    return 1;
}

}
