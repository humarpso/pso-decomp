#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_80299A60(void);
s32 TLobby__sub_80299A94(void);
void TLobby__sub_80299B00(void);
M2C_UNK TLobby__sub_8007B858();
int TLobby__sub_8007BA20(void);
s32 TLobby__sub_8007BB2C();
int TLobby__sub_80207FFC(void);
int TLobby__sub_80227248(void);
int TLobby__sub_8022743C(void);
int TLobby__sub_80227F7C(void);
M2C_UNK TLobby__sub_80227FB4();
M2C_UNK TOKeyMachine01__sub_802034A8();
M2C_UNK TObjLight__sub_80133D78();
u32 __nw__7TObjectFUl(M2C_UNK);
int fn_800F7B84(void);
M2C_UNK fn_8029F4C4(void*, s32);
M2C_UNK fn_802B0F8C();
int fn_802FE9E0(void);
s32 is_split_screen();

void TLobby__sub_80299A60(void) { TLobby__sub_80227F7C(); TLobby__sub_8022743C(); TLobby__sub_80227248(); fn_800F7B84(); TLobby__sub_80207FFC(); TLobby__sub_8007BA20(); }

extern s32 tl_particlemodel;

s32 TLobby__sub_80299A94(void) {
    void* obj;
    TOKeyMachine01__sub_802034A8();
    TLobby__sub_80227FB4();
    if (TLobby__sub_8007BB2C() != 0) {
        return 0;
    }
    TObjLight__sub_80133D78();
    TLobby__sub_8007B858();
    if ((is_split_screen() == 0) && ((obj = (void*)__nw__7TObjectFUl(0x3C)) != 0)) {
        fn_8029F4C4(obj, tl_particlemodel);
    }
    fn_802B0F8C();
    return 1;
}

void TLobby__sub_80299B00(void) { TLobby__sub_80227F7C(); TLobby__sub_8022743C(); TLobby__sub_80227248(); fn_802FE9E0(); fn_800F7B84(); TLobby__sub_80207FFC(); TLobby__sub_8007BA20(); }

}
