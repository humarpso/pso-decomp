#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_801D04B4(void* p);
void TObjPlayer__sub_801D0514(void);
void TObjPlayer__sub_801D0518(s32 arg0);
void TObjPlayer__sub_801D05D8(void *arg0);
s32 TFontSmallLobby__sub_801AFEE0();
s32 TItemProShield__sub_8001140C(s32, s32);
s32 TObjPlayer__sub_801AF290(s32);
u32 TObjPlayer__sub_801B5EA4();
s32 TObjPlayer__sub_801B6024(s32);
s32 TObjPlayer__sub_801BE2D0(s32);
int TObjPlayer__sub_801BF964(void*);
s32 TObjPlayer__sub_801D0458(void *);
s32 TObjPlayer__sub_801D0BC0(void *, s16, s32);
s32 TObjPlayer__sub_801D1018(s32);
int TObjPlayer__sub_801D2630(void*);
int TObjPlayer__sub_8001053C(void*);
s32 TObjPlayer__sub_80010550(s32);
s32 fn_800112A4(s32, s32);
int fn_8011E204(void*, void*);
s32 fn_801BA650(void *, s32, s32);
int fn_801C6FD4(void*, void*);

int obj_clearFlags30(void*, void*);

void TObjPlayer__sub_801D04B4(void* p) { obj_clearFlags30(p, (void*)3840); fn_8011E204(p, (void*)128); fn_801C6FD4((char*)p + 0x5e0, (void*)0); TObjPlayer__sub_801D2630(p); TObjPlayer__sub_8001053C(p); TObjPlayer__sub_801BF964((char*)p + 0x5fc); }
void TObjPlayer__sub_801D0514(void) {  }
void TObjPlayer__sub_801D0518(s32 arg0) {
    u32 temp_r3;

    temp_r3 = TObjPlayer__sub_801B5EA4();
    if (temp_r3 == 0U) {
        TObjPlayer__sub_80010550(arg0);
    } else if (temp_r3 == 1U) {
        TObjPlayer__sub_801B6024(arg0);
    }
    if ((TObjPlayer__sub_801BE2D0(arg0) != 0) && (TFontSmallLobby__sub_801AFEE0() == 0) && (TObjPlayer__sub_801AF290(arg0) != 0)) {
        fn_800112A4(arg0, 1);
    }
    if ((TObjPlayer__sub_801D1018(arg0) != 0) && (TFontSmallLobby__sub_801AFEE0() == 0) && (TObjPlayer__sub_801AF290(arg0) != 0)) {
        TItemProShield__sub_8001140C(arg0, 1);
    }
}
void TObjPlayer__sub_801D05D8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x33C) = 1;
    TObjPlayer__sub_801D0BC0(arg0, M2C_FIELD(arg0, s16 *, 0x326), 6);
    TObjPlayer__sub_801D04B4((void*)(arg0));
    fn_801BA650(arg0, 1, TObjPlayer__sub_801D0458(arg0));
}

}
