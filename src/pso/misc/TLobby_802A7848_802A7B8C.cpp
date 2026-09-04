#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TLobby__sub_802A7B8C(void);
int TLobby__sub_802A7B94(void);
int TLobby__sub_802A7B9C(void);
int TLobby__sub_802A7BA4(void);
void TLobby__sub_802A7BAC(void);
int TLobby__sub_802A7BB0(void);
void TLobby__sub_802A7BC8(void* p);
void TLobby__sub_802A7BD8(void);
s32 get_field_04__6TLobbyFPv(void* p);
s32 get_param__6TLobbyFPv(void* p);
void free__11TOBoss4RockFUi(void*);

int TLobby__sub_802A7B8C(void) { return 0; }
int TLobby__sub_802A7B94(void) { return 0; }
int TLobby__sub_802A7B9C(void) { return 0; }
int TLobby__sub_802A7BA4(void) { return 0; }
void TLobby__sub_802A7BAC(void) {  }
int TLobby__sub_802A7BB0(void) { return 0; }
s32 get_param__6TLobbyFPv(void* p) { return *(s32*)((char*)p + 0x0); }
s32 get_field_04__6TLobbyFPv(void* p) { return *(s32*)((char*)p + 0x4); }
void TLobby__sub_802A7BC8(void* p) { *(s32*)((char*)p + 0x0) = 0; *(s32*)((char*)p + 0x4) = 0; }

extern u32 lbl_805D6694;

void TLobby__sub_802A7BD8(void) {
    if ((u32) lbl_805D6694 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D6694);
        lbl_805D6694 = 0U;
    }
}

}
