#include "types.h"

extern "C" {

int TObjPlayer__sub_802C456C(void);
int TObjPlayer__sub_802C457C(void);
int TObjPlayer__sub_802C4600(void);
int TObjPlayer__sub_802C4648(void* a0 = 0, void* a1 = 0);
int TObjPlayer__sub_802C4668(void);
int TObjPlayer__sub_802C4688(void);
int TObjPlayer__sub_802C4698(void);
int TObjPlayer__sub_802C46BC(void* p);
int TObjPlayer__sub_802C46E0(void* p);
void* get_action_data__10TObjPlayerFPv(void* p);
void set_action_flags__10TObjPlayerFPvUc(void* p, u8 v);
void set_byte_13b__10TObjPlayerFPvUc(void* p, u8 v);
void set_field_157__10TObjPlayerFPvUc(void* p, u8 v);
void set_field_18f__10TObjPlayerFPvUc(void* p, u8 v);
void set_field_1ab__10TObjPlayerFPvUc(void* p, u8 v);
void set_flag_103__10TObjPlayerFPvUc(void* p, u8 v);
void set_flag_40__10TObjPlayerFPv(void* p);
void set_flag_524288__10TObjPlayerFPv(void* p);
void set_flag_80000__10TObjPlayerFPv(void* p);
void set_flag_e7__10TObjPlayerFPvUc(void* p, u8 v);
s32 DateToSeconds__FP9DateStampPi(s32 *, s32 *);
s32 TAdMultiPlyChrSelectGC__sub_802C6558();
s32 TAdSelectGameModeGC__sub_801A2FAC();
int TAdSinglePlyChrSelectGC__sub_80203220(void*);
int TObjPlayer__sub_8011E204(void*, void*);
int TObjPlayer__sub_801D7D4C(void*);
int TWindowActionPalette__sub_801C1CA8(void*);
int enable_camera__19TAdSelectGameModeGCFv(void*);
int fn_802C4748(void* p);
s32 getDateStamp__FP9DateStamp(s32 *);
s32 get_main_phase();
s32 get_mode_data__19TAdSelectGameModeGCFv();
void set_action_state__10TObjPlayerFPvUc(void* p, u8 v);
int set_state_flags__10TObjPlayerFPvUi(void*, void*);
int sync_char_select_state__10TObjPlayerFv(void*);

int TObjPlayer__sub_802C456C(void) { return 0; }
int TObjPlayer__sub_802C457C(void) { return 0; }

void* get_action_data__10TObjPlayerFPv(void* p) { return (char*)p + 0x408; }
void set_field_157__10TObjPlayerFPvUc(void* p, u8 v) { *(u8*)((char*)p + 0x157) = v; }
void set_byte_13b__10TObjPlayerFPvUc(void* p, u8 v) { *(u8*)((char*)p + 0x13b) = v; }
void set_action_flags__10TObjPlayerFPvUc(void* p, u8 v) { *(u8*)((char*)p + 0x11f) = v; }
void set_flag_103__10TObjPlayerFPvUc(void* p, u8 v) { *(u8*)((char*)p + 0x103) = v; }
void set_flag_e7__10TObjPlayerFPvUc(void* p, u8 v) { *(u8*)((char*)p + 0xe7) = v; }
void set_field_1ab__10TObjPlayerFPvUc(void* p, u8 v) { *(u8*)((char*)p + 0x1ab) = v; }
void set_field_18f__10TObjPlayerFPvUc(void* p, u8 v) { *(u8*)((char*)p + 0x18f) = v; }

int TObjPlayer__sub_802C4600(void) { return 0; }
int TObjPlayer__sub_802C4648(void* a0, void* a1) { return 0; }
int TObjPlayer__sub_802C4668(void) { return 0; }
int TObjPlayer__sub_802C4688(void) { return 0; }
int TObjPlayer__sub_802C4698(void) { return 0; }

void set_flag_40__10TObjPlayerFPv(void* p) { *(u8*)((char*)p + 0x7) |= 0x40; }
int TObjPlayer__sub_802C46BC(void* p) { return TObjPlayer__sub_801D7D4C((char*)p + 0x24); }

int TObjPlayer__sub_802C46E0(void* p) { return TWindowActionPalette__sub_801C1CA8(p); }

void set_flag_524288__10TObjPlayerFPv(void* p) { TObjPlayer__sub_8011E204(p, (void*)524288); }
void set_flag_80000__10TObjPlayerFPv(void* p) { set_state_flags__10TObjPlayerFPvUi(p, (void*)524288); }

}
