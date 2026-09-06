#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void set_field_4__6TLobbyFPvi(void* p, s32 v);
s32 get_hold_effect_count__10TObjPlayerFv(void);
s32 get_hold_effect_size_by_type__6TLobbyFv(void);
s32 alloc_buffer__11TOBoss4RockFPv(s32);
M2C_UNK free__11TOBoss4RockFUi(s32);
s32 write_packet_header__6TLobbyFPviiUi(s32, s32, s32, M2C_UNK);
s32 send_packet__6TLobbyFPviiii(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void TLobby__sub_802A7AE4(void* p, void* q);
int TLobby__sub_802A7B8C(void);
int TLobby__sub_802A7B94(void);
int TLobby__sub_802A7B9C(void);
int TLobby__sub_802A7BA4(void);
void TLobby__sub_802A7BAC(void);
int TLobby__sub_802A7BB0(void);
s32 get_param__6TLobbyFPv(void* p);
s32 get_field_04__6TLobbyFPv(void* p);
void TLobby__sub_802A7BC8(void* p);
M2C_UNK free__11TOBoss4RockFUi(s32);
extern u32 lbl_805D6694;
void TLobby__sub_802A7BD8(void);
s32 fn_802A5C3C(s32);
s32 get_size__15TWindowSnapShotFPv(s32);
M2C_UNK memcpy(s32, s32, s32);
extern s32 lbl_805D6690;
extern u32 lbl_805D6694;
extern s32 lbl_805D6698;
s32 copy_if_space(void);
s32 fn_802A5B2C(s32);
s32 fn_802A5B50(s32, s32);
s32 fn_802A5BB4(s32);
M2C_UNK fn_802A6070(s32, s32);
M2C_UNK fn_802A6078(s32, s32);
extern u32 lbl_805D6694;
extern s32 lbl_805D669C;
void set_slot_position__6TLobbyFii(s32 arg0, s32 arg1);
M2C_UNK TLobby__sub_8001D4D8(M2C_UNK, s32, s32, s32, s32);
void send_type2_event__6TLobbyFiii(s32 arg0, s32 arg1, s32 arg2);
s32 alloc_buffer__11TOBoss4RockFPv(s32);
int get_width__15TWindowSnapShotFv(void);
int get_max_players__6TLobbyFv(void);
int get_height__15TWindowSnapShotFv(void);
extern u32 lbl_805D6694;
extern s32 lbl_805D6698;
void TLobby__sub_802A7C5C(void);
}

extern "C" {

void TLobby__sub_802A7848(void* p, s32 _w1);
int TLobby__sub_802A7868(void* p);
void set_photon_chair_flag__6TLobbyFi(int a0);
int fn_802A7238(void*);

void TLobby__sub_802A7848(void* p, s32 _w1) { set_field_4__6TLobbyFPvi((void*)(p), (s32)(_w1)); }
int TLobby__sub_802A7868(void* p) { return fn_802A7238(p); }

    extern int lbl_805D6688;
void set_photon_chair_flag__6TLobbyFi(int a0) { lbl_805D6688 = a0; }
struct _VBase802A78E4_802a78e4_802A7848 { char pad[8]; };
struct _VObj802A78E4_802a78e4_802A7848 : _VBase802A78E4_802a78e4_802A7848 { virtual s32 m0(s32, s32); };
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
    send_type2_event__6TLobbyFiii((s32)(arg4), (s32)(temp_r3), (s32)(temp_r31_2));
    temp_r0 = ((_VObj802A78E4_802a78e4_802A7848*)arg0)->m0(arg1, arg2);
    temp_r31 = write_packet_header__6TLobbyFPviiUi(temp_r3, arg3, temp_r0, 0x4000);
    free__11TOBoss4RockFUi(temp_r3);
    return temp_r31;
}
void TLobby__sub_802A7AE4(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); }
int TLobby__sub_802A7B8C(void) { return 0; }
int TLobby__sub_802A7B94(void) { return 0; }
int TLobby__sub_802A7B9C(void) { return 0; }
int TLobby__sub_802A7BA4(void) { return 0; }
void TLobby__sub_802A7BAC(void) {  }
int TLobby__sub_802A7BB0(void) { return 0; }
s32 get_param__6TLobbyFPv(void* p) { return *(s32*)((char*)p + 0x0); }
s32 get_field_04__6TLobbyFPv(void* p) { return *(s32*)((char*)p + 0x4); }
void TLobby__sub_802A7BC8(void* p) { *(s32*)((char*)p + 0x0) = 0; *(s32*)((char*)p + 0x4) = 0; }
void TLobby__sub_802A7BD8(void) {
    if ((u32) lbl_805D6694 != 0U) {
        free__11TOBoss4RockFUi((s32)((void*)lbl_805D6694));
        lbl_805D6694 = 0U;
    }
}
s32 copy_if_space(void) {
    if (fn_802A5C3C(lbl_805D6690) >= 0x258) {
        return 0;
    }
    memcpy((*(s32 *)&lbl_805D6694), get_size__15TWindowSnapShotFPv(lbl_805D6690), lbl_805D6698);
    return 1;
}

void TLobby__sub_802A7C5C(void) {
  s32 temp_r31;
  s32 temp_r31_2;
  u32 temp_r3;
  u8 *temp_r31_3;
  if (((u32) lbl_805D6694) == 0U)
  {
    temp_r31 = get_height__15TWindowSnapShotFv();
    temp_r31_2 = get_max_players__6TLobbyFv();
    temp_r31_2 = temp_r31_2 * temp_r31;
    temp_r31 = get_width__15TWindowSnapShotFv();
    temp_r31_3 = (u8 *) (temp_r31 + temp_r31_2);
    temp_r3 = ((int)alloc_buffer__11TOBoss4RockFPv((s32)(temp_r31_3)));
    lbl_805D6694 = temp_r3;
    if (temp_r3 != 0U)
    {
      (*(u8 * *)&lbl_805D6698) = temp_r31_3;
    }
  }
}

void set_slot_position__6TLobbyFii(s32 arg0, s32 arg1) {
    s32 temp_r31;
    temp_r31 = fn_802A5BB4((*(s32 *)&lbl_805D6694));
    temp_r31 = (*(s32 *)&lbl_805D6694) + temp_r31;
    temp_r31 = temp_r31 + arg0 * 8;
    fn_802A6078(arg1, lbl_805D669C + fn_802A5B50(temp_r31, (*(s32 *)&lbl_805D6694)));
    fn_802A6070(arg1, fn_802A5B2C(temp_r31));
}
void send_type2_event__6TLobbyFiii(s32 arg0, s32 arg1, s32 arg2) {
    TLobby__sub_8001D4D8(2, arg0, arg1, arg2, arg0);
}

}
