#include "types.h"

struct RecoveredFields_80141CF8_arg0
{
  f32 field_0;
  u8 unknown_4[0x4];
  f32 field_8;
};

extern "C" {
f32 TObjPlayer__sub_80141CF8(struct RecoveredFields_80141CF8_arg0 *arg0, u8 *arg1);
}

extern "C" {

void TOTrapAncient02R__sub_80141CF0(void);
s32 TObjMapWarp__sub_80141C68(s32 arg0, s16 arg1);
void TObjMapWarp__sub_80141CA4(void* p);
void TObjMapWarp__sub_80141CB0(void);
void TObjMapWarp__sub_80141CB4(void);
void TObjMapWarp__sub_80141CB8(void);
void TObjRoomId__sub_80141CF4(void);
int fn_80141CBC(void);
int __dl__FPv();

s32 TObjMapWarp__sub_80141C68(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}
void TObjMapWarp__sub_80141CA4(void* p) { *(s32*)((char*)p + 0x0) = 0; }
void TObjMapWarp__sub_80141CB0(void) {  }

void TObjMapWarp__sub_80141CB4(void) {  }

void TObjMapWarp__sub_80141CB8(void) {  }

int fn_80141CBC(void) { return 0; }

void TOTrapAncient02R__sub_80141CF0(void) {  }

void TObjRoomId__sub_80141CF4(void) {  }
typedef struct RecoveredFields_80141CF8_arg0 RecoveredFields_80141CF8_arg0;
#pragma fp_contract on
f32 TObjPlayer__sub_80141CF8(struct RecoveredFields_80141CF8_arg0 *arg0, u8 *arg1) {
  f32 temp_f1;
  f32 temp_f3;
  temp_f1 = (*((f32 *) (((s8 *) arg1) + 0))) - arg0->field_0;
  temp_f3 = (*((f32 *) (((s8 *) arg1) + 8))) - arg0->field_8;
  return (temp_f1 * temp_f1) + (temp_f3 * temp_f3);
}

}
