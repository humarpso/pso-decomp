#include "types.h"

extern "C" {

void TObjPlayer__sub_802C4518(void* p, u8 v);
void* TObjPlayer__sub_802C45C0(void* p);
void TObjPlayer__sub_802C45C8(void* p, u8 v);
void TObjPlayer__sub_802C45D0(void* p, u8 v);
void TObjPlayer__sub_802C45D8(void* p, u8 v);
void TObjPlayer__sub_802C45E0(void* p, u8 v);
void TObjPlayer__sub_802C45E8(void* p, u8 v);
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
int TObjPlayer__sub_8011E238(void*, void*);
int enable_camera__19TAdSelectGameModeGCFv(void*);
s32 fn_801A2FAC();
int TAdSinglePlyChrSelectGC__sub_80203220(void*);
s32 TAdSelectGameModeGC__sub_802A1438();
s32 TAdMultiPlyChrSelectGC__sub_802C6558();
s32 getDateStamp__FP9DateStamp(s32 *);

void fn_802C4700(void* p) { TObjPlayer__sub_8011E204(p, (void*)524288); }
void set_flag_80000__10TObjPlayerFPv(void* p) { TObjPlayer__sub_8011E238(p, (void*)524288); }
int fn_802C4748(void* p) { return sync_char_select_state__10TObjPlayerFv(p); }

}
