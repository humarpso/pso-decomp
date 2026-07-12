#include "types.h"

extern "C" {

void TLobby__sub_801403B4(void);
void TLobby__sub_801403B8(void);
s32 TLobby__sub_801403EC(void);
void TLobby__sub_80140444(void);
s32 TLobby__sub_8014047C(void);
s32 TBoss3VoloptCtrl__ct();
s32 TLobby__sub_8007B858();
int TLobby__sub_8007BA20(void);
s32 TLobby__sub_8007BB2C();
int TLobby__sub_80207FFC(void);
int TLobby__sub_80227248(void);
int TLobby__sub_8022743C(void);
int TLobby__sub_80227F7C(void);
s32 TLobby__sub_80227FB4();
s32 TOKeyMachine01__sub_802034A8();
s32 TObjLight__sub_80133D78();
int TParticleCtrl__sub_800867AC(void);
s32 TParticleCtrl__sub_800867E4(s32);
u32 __nw__7TObjectFUl(s32);
int fn_800F7B84(void);
s32 fn_8034A8FC();

void TLobby__sub_801403B4(void) {  }
void TLobby__sub_801403B8(void) { TLobby__sub_80227F7C(); TLobby__sub_8022743C(); TLobby__sub_80227248(); fn_800F7B84(); TLobby__sub_80207FFC(); TLobby__sub_8007BA20(); }
s32 TLobby__sub_801403EC(void) {
    TOKeyMachine01__sub_802034A8();
    TLobby__sub_80227FB4();
    if (TLobby__sub_8007BB2C() != 0) {
        return 0;
    }
    TObjLight__sub_80133D78();
    TLobby__sub_8007B858();
    if (__nw__7TObjectFUl(0x24) != 0U) {
        TBoss3VoloptCtrl__ct();
    }
    return 1;
}
void TLobby__sub_80140444(void) { TParticleCtrl__sub_800867AC(); TLobby__sub_80227F7C(); TLobby__sub_8022743C(); TLobby__sub_80227248(); fn_800F7B84(); TLobby__sub_80207FFC(); TLobby__sub_8007BA20(); }
s32 TLobby__sub_8014047C(void) {
    TOKeyMachine01__sub_802034A8();
    TLobby__sub_80227FB4();
    if (TLobby__sub_8007BB2C() != 0) {
        return 0;
    }
    TObjLight__sub_80133D78();
    TLobby__sub_8007B858();
    TParticleCtrl__sub_800867E4(0x10000);
    fn_8034A8FC();
    return 1;
}

}
