#include "types.h"

extern "C" {

void set_action_state__10TObjPlayerFPvUc(void* p, u8 v);
void* TObjPlayer__sub_802C45C0(void* p);
void set_field_157__10TObjPlayerFPvUc(void* p, u8 v);
void set_byte_13b__10TObjPlayerFPvUc(void* p, u8 v);
void set_action_flags__10TObjPlayerFPvUc(void* p, u8 v);
void set_flag_103__10TObjPlayerFPvUc(void* p, u8 v);
void set_flag_e7__10TObjPlayerFPvUc(void* p, u8 v);
void TObjPlayer__sub_802C45F0(void* p, u8 v);
void TObjPlayer__sub_802C45F8(void* p, u8 v);
void TObjPlayer__sub_802C46AC(void* p);
int TObjPlayer__sub_802C46BC(void* p);
int TObjPlayer__sub_802C46E0(void* p);
int fn_802C4748(void* p);
int TWindowActionPalette__sub_801C1CA8(void*);
int TObjPlayer__sub_801D7D4C(void*);
int sync_char_select_state__10TObjPlayerFv(void*);
s32 DateToSeconds__FP9DateStampPi(s32 *, s32 *);
s32 get_main_phase();
int TObjPlayer__sub_8011E204(void*, void*);
int set_state_flags__10TObjPlayerFPvUi(void*, void*);
int enable_camera__19TAdSelectGameModeGCFv(void*);
s32 fn_801A2FAC();
int TAdSinglePlyChrSelectGC__sub_80203220(void*);
s32 TAdSelectGameModeGC__sub_802A1438();
s32 TAdMultiPlyChrSelectGC__sub_802C6558();
s32 getDateStamp__FP9DateStamp(s32 *);

void TObjPlayer__sub_802C4700(void* p) { TObjPlayer__sub_8011E204(p, (void*)524288); }
void set_flag_80000__10TObjPlayerFPv(void* p) { set_state_flags__10TObjPlayerFPvUi(p, (void*)524288); }

}
