#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_690 { u8 bytes[0x690]; };

struct RecoveredGlobal_80070A78_lbl_8048C348 {
    M2C_UNK value;
    u8 remaining[0x68C];
};

struct RecoveredGlobal_80070A78_lbl_8048C9D8 {
    M2C_UNK value;
    u8 remaining[0x744];
};

extern "C" {
extern RecoveredGlobal_80070A78_lbl_8048C348 lbl_8048C348;
extern RecoveredGlobal_80070A78_lbl_8048C9D8 lbl_8048C9D8;
void TLobby__sub_80070A78(void);
}

extern "C" {

void init_on_main_phase__6TLobbyFv(void);
M2C_UNK TLobby__sub_80074C20();
M2C_UNK TLobby__sub_8006F848(M2C_UNK *);
u32 create__10TChallengeFv();
M2C_UNK TObjTombstone__sub_800765B4();

s32 get_main_phase();
extern M2C_UNK lbl_804385B0[];
extern u32 lbl_805D4E28;
extern s32 lbl_805D4E2C;
extern s32 TLobby__data_805D4E30;

void init_on_main_phase__6TLobbyFv(void) {
    lbl_805D4E2C = 0;
    if ((u32) lbl_805D4E28 == 0U) {
        if (get_main_phase() != 0xF) {
            TLobby__data_805D4E30 = 0;
            return;
        }
        TLobby__sub_80074C20();
        if ((s32) TLobby__data_805D4E30 != 0) {
            lbl_805D4E28 = create__10TChallengeFv();
            lbl_805D4E2C = 1;
            TObjTombstone__sub_800765B4();
            TLobby__sub_8006F848(lbl_804385B0);
        }
    }
}
typedef char RecoveredGlobal_80070A78_lbl_8048C348_size[sizeof(RecoveredGlobal_80070A78_lbl_8048C348) == 0x690 ? 1 : -1];
typedef char RecoveredGlobal_80070A78_lbl_8048C9D8_size[sizeof(RecoveredGlobal_80070A78_lbl_8048C9D8) == 0x748 ? 1 : -1];
void TLobby__sub_80070A78(void) {
    *(M2CCopy_690 *)(&lbl_8048C9D8.value) = *(const M2CCopy_690 *)(&lbl_8048C348.value);
}

}

__declspec(section ".ctors") static void *const __sinit_TLobby_80070A00_80070A00_cpp_ref = (void *)TLobby__sub_80070A78;
