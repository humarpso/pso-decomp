#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TLobby__sub_801469B8(void* p);
void* TLobby__sub_80146D68(int a0);
void TLobby__sub_8014715C(void* p, void* q);
void call_146CA0_with_5708__6TLobbyFv(void);
void teardown_boss2__6TLobbyFv(void);
int TLobby__sub_801469D8(void*);
int TLobby__sub_80146CA0(void*);
M2C_UNK TLobby__sub_8040A3C0();
M2C_UNK TLobby__sub_8040AD64();

int TLobby__sub_801469B8(void* p) { return TLobby__sub_801469D8(p); }

    extern int lbl_805D5708;
void call_146CA0_with_5708__6TLobbyFv(void) { TLobby__sub_80146CA0((void*)(lbl_805D5708)); }

    extern unsigned char lbl_8050C784[];
void* TLobby__sub_80146D68(int a0) {  return (char*)lbl_8050C784 + a0 * 460; }

void TLobby__sub_8014715C(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); }

extern s32 lbl_805D570C;

void teardown_boss2__6TLobbyFv(void) {
    if ((s32) lbl_805D570C != 0) {
        TLobby__sub_8040AD64();
        TLobby__sub_8040A3C0();
        lbl_805D570C = 0;
    }
}

}
