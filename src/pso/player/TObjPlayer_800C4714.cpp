#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_800C53B4(void);
int clear_flag_0x100__10TObjPlayerFPv(void* p);
void enter_state7__10TObjPlayerFPv(void *arg0);
void enter_state_8__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_800F6EB0(void*);
int clear_player_status_flag__10TObjPlayerFPviUi(void*, void*, void*);
s32 obj_clearFlags30(void * a0 = 0, s32 a1 = 0);
int refresh_lobby_state__10TObjPlayerFPv(void*);
int send_entity_set_flags__6TLobbyFPv(void*);

void enter_state_8__10TObjPlayerFPv(void* p) { if (*(short*)((char*)p + 0x326) != 8) { *(short*)((char*)p + 0x326) = 8; *(short*)((char*)p + 0xb8) = 8; TObjPlayer__sub_800F6EB0(p); clear_player_status_flag__10TObjPlayerFPviUi(p, (void*)0, (void*)1); refresh_lobby_state__10TObjPlayerFPv(p); send_entity_set_flags__6TLobbyFPv(p); } }

void enter_state7__10TObjPlayerFPv(void *arg0) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 7) {
        M2C_FIELD(arg0, s16 *, 0x326) = 7;
        M2C_FIELD(arg0, s16 *, 0xB8) = 6;
    }
    obj_clearFlags30(arg0, 0x240000);
}
void TObjPlayer__sub_800C53B4(void) {  }
int clear_flag_0x100__10TObjPlayerFPv(void* p) { return obj_clearFlags30(p, 256); }

}
