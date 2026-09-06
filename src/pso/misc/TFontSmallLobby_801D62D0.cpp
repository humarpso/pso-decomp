#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern const f32 lbl_805DC3DC;
s32 TFontSmallLobby__sub_801D67AC(u8 *arg0);
f32 fn_801D6AB4(void *, s32, s32);
s32 TOMineTrap__sub_801D6A44(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

int TFontSmallLobby__sub_801D65B4(void);
int TFontSmallLobby__sub_801D6614(void);
void TFontSmallLobby__sub_801D671C(void* a0, int a1);
int TFontSmallLobby__sub_801D677C(void* p);
void TFontSmallLobby__sub_801D67C8(void* p);
void* TFontSmallLobby__sub_801D6804(void* p);
void* TFontSmallLobby__sub_801D6948(void* p, void* a1);
int TFontSmallLobby__sub_801D698C(void);
void bswap_fields__15TFontSmallLobbyFPv(void* p);
int check_flag_at_40__15TFontSmallLobbyFPv(void* p);
void* clear_photon_blast_ready_flag__15TFontSmallLobbyFPv(void* p);
void draw_and_send__15TFontSmallLobbyFPv(void* p);
int fn_801D6A18(void);
s32 get_field_04__15TFontSmallLobbyFPv(void* p);
s32 get_state__15TFontSmallLobbyFPv(void* p);
u16 get_type__15TFontSmallLobbyFPv(void* p);
void* handle_photon_blast_ready__15TFontSmallLobbyFPv(void* p);
void init_6x39_packet__15TFontSmallLobbyFPv(void* p);
void init_6x3A_packet__15TFontSmallLobbyFPv(void* p);
void init_pkt_cmd_3B__15TFontSmallLobbyFPv(void* p);
void* init_reset_fields__15TFontSmallLobbyFPv(void* p);
void reset_fields__15TFontSmallLobbyFPv(void* p);
void send_state__15TFontSmallLobbyFPv(void* p);
int set_bit1_at_40__15TFontSmallLobbyFPv(void* p);
int set_flag_40_bit5__15TFontSmallLobbyFPv(void* p);
void set_target_count__15TFontSmallLobbyFPvi(void* p, s32 v);
void set_target_index__15TFontSmallLobbyFPvi(void* p, s32 v);
void update_and_send_60__15TFontSmallLobbyFPv(void* p);
void update_and_send__15TFontSmallLobbyFPv(void* p);
int update_field_40__15TFontSmallLobbyFPv(void* p);
int update_ready__15TFontSmallLobbyFPv(void* p);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);
int TLobby__send_and_handle_60(void*);
void TMainCursor__sub_8013E17C(void* p, f32 v);
f32 TMainCursor__sub_8013E184(void* p);
void TMainCursor__sub_8013E18C(void* p, s16 v);
u16 TMainCursor__sub_8013E194(void* p);
void TMainCursor__sub_8013E1C0(void* p, s32 v);
int bswap_16__FPUs(void*);
int clear_flags__11TAdRicoRingFPvUi(void*, int);
int read_be16_field2__10TObjPlayerFPv(void*);
int set_flags__10TObjPlayerFPvUi(void*, int);
void set_target__11TMainCursorFPvi(void* p, s32 a1);
void set_target_index__11TMainCursorFPvs(void* p, s16 v);
void update_cursor_pos__11TMainCursorFPv(void* p);

int TFontSmallLobby__sub_801D65B4(void) { return 0; }
int TFontSmallLobby__sub_801D6614(void) { return 0; }

void reset_fields__15TFontSmallLobbyFPv(void* p) { *(s32*)((char*)p + 0x0) = 0; *(s32*)((char*)p + 0x4) = 0; }
int set_bit1_at_40__15TFontSmallLobbyFPv(void* p) { return clear_flags__11TAdRicoRingFPvUi((char*)p + 0x40, 2); }
void* clear_photon_blast_ready_flag__15TFontSmallLobbyFPv(void* p) { TFontSmallLobby__sub_801C0228(p); return p; }
int update_ready__15TFontSmallLobbyFPv(void* p) { return set_flags__10TObjPlayerFPvUi((char*)p + 0x40, 2); }

s32 get_state__15TFontSmallLobbyFPv(void* p) { return *(s32*)((char*)p + 0x0); }
s32 get_field_04__15TFontSmallLobbyFPv(void* p) { return *(s32*)((char*)p + 0x4); }
int check_flag_at_40__15TFontSmallLobbyFPv(void* p) { return clear_flags__11TAdRicoRingFPvUi((char*)p + 0x40, 32); }
void set_target_count__15TFontSmallLobbyFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x4) = v; }
void set_target_index__15TFontSmallLobbyFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }
void TFontSmallLobby__sub_801D671C(void* a0, int a1) { *(int*)((char*)a0 + 0x4) = (*(int*)((char*)a0 + 0x4) + a1); }
int set_flag_40_bit5__15TFontSmallLobbyFPv(void* p) { return set_flags__10TObjPlayerFPvUi((char*)p + 0x40, 32); }
int update_field_40__15TFontSmallLobbyFPv(void* p) { return clear_flags__11TAdRicoRingFPvUi((char*)p + 0x40, 16); }
int TFontSmallLobby__sub_801D677C(void* p) { return set_flags__10TObjPlayerFPvUi((char*)p + 0x40, 16); }
u16 get_type__15TFontSmallLobbyFPv(void* p) { return *(u16*)((char*)p + 0x0); }

s32 TFontSmallLobby__sub_801D67AC(u8 *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x3C) >= lbl_805DC3DC;
}

void TFontSmallLobby__sub_801D67C8(void* p) { *(s16*)((char*)p + 0x2) = 6; }
void* init_reset_fields__15TFontSmallLobbyFPv(void* p) { reset_fields__15TFontSmallLobbyFPv((void*)(p)); return p; }
void* TFontSmallLobby__sub_801D6804(void* p) { TFontSmallLobby__sub_801C0228(p); return p; }
void init_pkt_cmd_3B__15TFontSmallLobbyFPv(void* p) { *(u8*)((char*)p + 0x0) = 59; *(u8*)((char*)p + 0x1) = 1; }
void update_and_send__15TFontSmallLobbyFPv(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }
void init_6x3A_packet__15TFontSmallLobbyFPv(void* p) { *(u8*)((char*)p + 0x0) = 58; *(u8*)((char*)p + 0x1) = 1; }
void draw_and_send__15TFontSmallLobbyFPv(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }
void init_6x39_packet__15TFontSmallLobbyFPv(void* p) { *(u8*)((char*)p + 0x0) = 57; *(u8*)((char*)p + 0x1) = 1; }
void update_and_send_60__15TFontSmallLobbyFPv(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }
void bswap_fields__15TFontSmallLobbyFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }

void* TFontSmallLobby__sub_801D6948(void* p, void* a1) { TFontSmallLobby__sub_801C0228(p); *(short*)((char*)p + 0x4) = *(unsigned short*)((char*)a1 + 0x4); *(short*)((char*)p + 0x6) = *(short*)((char*)a1 + 0x6); return p; }

int TFontSmallLobby__sub_801D698C(void) { return 0; }

void send_state__15TFontSmallLobbyFPv(void* p) { bswap_fields__15TFontSmallLobbyFPv((void*)((void*)(p))); TLobby__send_and_handle_60(p); }
void* handle_photon_blast_ready__15TFontSmallLobbyFPv(void* p) { TFontSmallLobby__sub_801C0228(p); return p; }

int fn_801D6A18(void) { return 0; }
s32 TOMineTrap__sub_801D6A44(u8 *arg0, s32 arg1, s32 arg2) {
  f32 new_var;
  f32 temp_f1;
  new_var = (f32) arg2;
  *((f32 *) (((s8 *) arg0) + 4)) = (f32) ((*((f32 *) (((s8 *) arg0) + 4))) + new_var);
  new_var = fn_801D6AB4(arg0, arg1, arg2);
  temp_f1 = new_var;
  *((f32 *) (((s8 *) arg0) + 0)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0))) + temp_f1);
  return (s32) temp_f1;
}

}
