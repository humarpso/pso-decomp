#include "pso/TAdSelectGameModeGC.h"

TAdSelectGameModeGC::~TAdSelectGameModeGC() {}

#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void render__19TAdSelectGameModeGCFv(void);
int TAdSelectGameModeGC__sub_802C476C(void* p);
int enable_camera__19TAdSelectGameModeGCFv(void);
s32 get_main_phase();
s32 get_mode_data__19TAdSelectGameModeGCFv();
int enable_camera__19TAdSelectGameModeGCFv(void);
s32 TAdSelectGameModeGC__sub_801A2FAC();
s32 TAdMultiPlyChrSelectGC__sub_802C6558();
void TAdSelectGameModeGC__sub_802C478C(void);
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
int enable_camera__19TAdSelectGameModeGCFv(void);
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

int TAdSelectGameModeGC__sub_802C476C(void* p) { return enable_camera__19TAdSelectGameModeGCFv(); }
void TAdSelectGameModeGC__sub_802C478C(void) {
    s32 temp_r3;
    if (get_main_phase() == 0xE) {
        temp_r3 = get_mode_data__19TAdSelectGameModeGCFv();
        switch (temp_r3) {
        case 0:
            ((M2C_UNK)enable_camera__19TAdSelectGameModeGCFv());
            return;
        case 1:
            ((M2C_UNK)TAdMultiPlyChrSelectGC__sub_802C6558());
            TAdSelectGameModeGC__sub_801A2FAC();
            return;
        }
    } else {
        enable_camera__19TAdSelectGameModeGCFv();
    }
}

}
