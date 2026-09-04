#include "pso/TAdSelectGameModeGC.h"

TAdSelectGameModeGC::~TAdSelectGameModeGC() {}

#include "types.h"

extern "C" {
void render__19TAdSelectGameModeGCFv(void);
int TAdSelectGameModeGC__sub_802C476C(void* p);
int enable_camera__19TAdSelectGameModeGCFv(void*);
}

extern "C" {

int fn_802C4748(void* p);
s32 DateToSeconds__FP9DateStampPi(s32 *, s32 *);
s32 TAdMultiPlyChrSelectGC__sub_802C6558();
s32 TAdSelectGameModeGC__sub_801A2FAC();
int TAdSinglePlyChrSelectGC__sub_80203220(void*);
int TObjPlayer__sub_8011E204(void*, void*);
int TObjPlayer__sub_801D7D4C(void*);
int TObjPlayer__sub_802C46BC(void* p);
int TObjPlayer__sub_802C46E0(void* p);
int TWindowActionPalette__sub_801C1CA8(void*);
int enable_camera__19TAdSelectGameModeGCFv(void*);
s32 getDateStamp__FP9DateStamp(s32 *);
void* get_action_data__10TObjPlayerFPv(void* p);
s32 get_main_phase();
s32 get_mode_data__19TAdSelectGameModeGCFv();
void set_action_flags__10TObjPlayerFPvUc(void* p, u8 v);
void set_action_state__10TObjPlayerFPvUc(void* p, u8 v);
void set_byte_13b__10TObjPlayerFPvUc(void* p, u8 v);
void set_field_157__10TObjPlayerFPvUc(void* p, u8 v);
void set_field_18f__10TObjPlayerFPvUc(void* p, u8 v);
void set_field_1ab__10TObjPlayerFPvUc(void* p, u8 v);
void set_flag_103__10TObjPlayerFPvUc(void* p, u8 v);
void set_flag_40__10TObjPlayerFPv(void* p);
void set_flag_e7__10TObjPlayerFPvUc(void* p, u8 v);
int set_state_flags__10TObjPlayerFPvUi(void*, void*);
int sync_char_select_state__10TObjPlayerFv(void*);

int fn_802C4748(void* p) { return sync_char_select_state__10TObjPlayerFv(p); }

void render__19TAdSelectGameModeGCFv(void) {  }

int TAdSelectGameModeGC__sub_802C476C(void* p) { return enable_camera__19TAdSelectGameModeGCFv(p); }

}
