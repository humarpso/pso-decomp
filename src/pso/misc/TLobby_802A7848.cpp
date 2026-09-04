#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct _VBase802A78E4_802a78e4_802A7848 { char pad[8]; };
struct _VObj802A78E4_802a78e4_802A7848 : _VBase802A78E4_802a78e4_802A7848 { virtual s32 m0(s32, s32); };

void TLobby__sub_802A7AE4(void* p, void* q);
s32 get_hold_effect_size_by_type__6TLobbyFv(void);
s32 send_packet__6TLobbyFPviiii(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void set_field_4__6TLobbyFPvi(void* p, s32 v);
s32 alloc_buffer__11TOBoss4RockFPv(s32);
M2C_UNK free__11TOBoss4RockFUi(s32);
s32 get_hold_effect_count__10TObjPlayerFv(void);
M2C_UNK send_type2_event__6TLobbyFiii(s32, s32, s32);
s32 write_packet_header__6TLobbyFPviiUi(s32, s32, s32, M2C_UNK);

void set_field_4__6TLobbyFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x4) = v; }
s32 get_hold_effect_size_by_type__6TLobbyFv(void) {
    s32 temp_r3;

    temp_r3 = get_hold_effect_count__10TObjPlayerFv();
    switch (temp_r3) {
    case 0:
        return 0x38;
    case 1:
        return 0x10;
    default:
        return 0;
    }
}

s32 send_packet__6TLobbyFPviiii(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r31;
    s32 temp_r31_2;
    s32 temp_r3;
    s32 temp_r0;

    temp_r31_2 = (arg3 + 0x1F) & 0xFFFFFFE0;
    temp_r3 = alloc_buffer__11TOBoss4RockFPv(temp_r31_2);
    if (temp_r3 == 0) {
        return 0;
    }
    send_type2_event__6TLobbyFiii(arg4, temp_r3, temp_r31_2);
    temp_r0 = ((_VObj802A78E4_802a78e4_802A7848*)arg0)->m0(arg1, arg2);
    temp_r31 = write_packet_header__6TLobbyFPviiUi(temp_r3, arg3, temp_r0, 0x4000);
    free__11TOBoss4RockFUi(temp_r3);
    return temp_r31;
}

void TLobby__sub_802A7AE4(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); }

}
