#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Glob_801E75F0 { s32 f0; s32 f4; s32 f8; s32 fC; s32 f10; u8 rest[0xC]; };

extern "C" {
M2C_UNK TAdStorySelectGC__sub_80207D44(int);
extern s32 TLobby__data_805D5E78;
void TLobby__sub_801E73B4(s32 arg0);
u32 __nw__7TObjectFUl(u32);
void TLobby__sub_800F8498(u32, s32, s32, s32, u8, u8, u8, u8);
extern Glob_801E75F0 TLobby__data_80512220;
extern s32 tl_01;
void TLobby__sub_801E75F0(void);
}

extern "C" {

void request_1c38_1_7__6TLobbyFv(void);
void reset_and_set_mode__6TLobbyFv(void);
M2C_UNK TLobby__sub_801F1C38(M2C_UNK, M2C_UNK);
int TLobby__sub_801F1C8C(void*, void*);

void request_1c38_1_7__6TLobbyFv(void) {
    TLobby__sub_801F1C38(1, 7);
}

    extern int TLobby__data_805D5EA4;
void reset_and_set_mode__6TLobbyFv(void) { TLobby__data_805D5EA4 = 0; TLobby__sub_801F1C8C((void*)1, (void*)7); }
void TLobby__sub_801E73B4(s32 arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC));
    switch (temp_r0) {
    case 0:
        TAdStorySelectGC__sub_80207D44((int) (0));
        return;
    case 1:
        TAdStorySelectGC__sub_80207D44((int) (1));
        return;
    }
}
void TLobby__sub_801E75F0(void) {
    s32 a = TLobby__data_80512220.f0;
    s32 b = TLobby__data_80512220.f4;
    s32 c = TLobby__data_80512220.f8;
    s32 d = TLobby__data_80512220.fC;
    s32 e = TLobby__data_80512220.f10;
    u32 obj = __nw__7TObjectFUl(0x30);
    if (obj != 0) {
        TLobby__sub_800F8498(obj, tl_01, 0, e, (u8)d, (u8)a, (u8)b, (u8)c);
    }
}

}
