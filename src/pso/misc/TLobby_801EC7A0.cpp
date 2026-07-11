#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TLobby__sub_801EC7A0(void);
int TLobby__sub_801EC7C4(void);
void TLobby__sub_801EC7E8(void);
int TLobby__sub_801EC834(void* p);
int TLobby__sub_801EC854(void* p);
int TLobby__sub_801EC874(void* p);
int TLobby__sub_801EC894(void* p);
int TOMineTrap__sub_80171370(void*);
M2C_UNK fn_8006F848(s32);
int fn_801A3BA4(void*);
int fn_801A3BF4(void*);
int fn_801F36BC(void*);
int fn_801F36D8(void*);

int TLobby__sub_801EC7A0(void) { return TOMineTrap__sub_80171370((void*)(0)); }
int TLobby__sub_801EC7C4(void) { return TOMineTrap__sub_80171370((void*)(1)); }

s32 is_split_screen(void);
extern s32 TLobby__data_80512220[];

void TLobby__sub_801EC7E8(void) {
    s32 temp_r31;

    temp_r31 = TLobby__data_80512220[0];
    if (is_split_screen() == 1) {
        fn_8006F848(temp_r31);
        return;
    }
    fn_8006F848(temp_r31);
}

int TLobby__sub_801EC834(void* p) { return fn_801A3BA4(p); }
int TLobby__sub_801EC854(void* p) { return fn_801F36BC(p); }
int TLobby__sub_801EC874(void* p) { return fn_801A3BF4(p); }
int TLobby__sub_801EC894(void* p) { return fn_801F36D8(p); }

}
