#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_801C4F80(s32 arg0);
void TLobby__sub_801C4FBC(void* p, f32 v);
s32 TLobby__sub_801C4FC4(void* p);
void TLobby__sub_801C4FCC(void* p, f32 v);
void TLobby__sub_801C4FD4(void* p, f32 v);
void TLobby__sub_801C4FDC(void* p);
void bswap_set_battle_mode_data__6TLobbyFPv(void* p);
void TLobby__sub_801C5074(void* p);
void build_6x7D_set_battle_mode_data(void* p);
int TLobby__send_and_handle_60(void*);
int TObjPlayer__sub_8001960C(void* a0 = 0);
int bswap_32__FPUl(void* a0 = 0);
int dispatch_packet__6TLobbyFPv(void*);
M2C_UNK fn_801C19C8(f32);

extern const f32 lbl_805DC300;

void TLobby__sub_801C4F80(s32 arg0) {
    fn_801C19C8(lbl_805DC300);
    TLobby__sub_801C4FBC((void*)(arg0), lbl_805DC300);
}

void TLobby__sub_801C4FBC(void* p, f32 v) { *(f32*)((char*)p + 0x4) = v; }
s32 TLobby__sub_801C4FC4(void* p) { return *(s32*)((char*)p + 0x14); }
void TLobby__sub_801C4FCC(void* p, f32 v) { *(f32*)((char*)p + 0x8) = v; }
void TLobby__sub_801C4FD4(void* p, f32 v) { *(f32*)((char*)p + 0xc) = v; }
void TLobby__sub_801C4FDC(void* p) { bswap_set_battle_mode_data__6TLobbyFPv((void*)(p)); TLobby__send_and_handle_60(p); }
void bswap_set_battle_mode_data__6TLobbyFPv(void* p) { TObjPlayer__sub_8001960C(p); { int i; for (i = 0; i < 4; i++) { bswap_32__FPUl((char*)p + 0x8 + i * 4); } } }
void build_6x7D_set_battle_mode_data(void* p) { *(u8*)((char*)p + 0x0) = 125; *(u8*)((char*)p + 0x1) = 6; }
void TLobby__sub_801C5074(void* p) { bswap_set_battle_mode_data__6TLobbyFPv((void*)(p)); dispatch_packet__6TLobbyFPv(p); }

}
