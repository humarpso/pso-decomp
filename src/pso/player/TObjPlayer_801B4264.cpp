#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
int TObjPlayer__sub_801B4118(void);

s8 TObjPlayer__sub_801AFDB0();
s32 send_field_state_if_active__10TObjPlayerFii(s32, s32);
s32 TObjPlayer__sub_801D8E90(s32);
s32 TObjPlayer__sub_800113E4(void *, s16);
s32 obj_isState3_324(void *);
s32 TObjPlayer__sub_80102C78(void *, s16);
s32 TTecCtrl__sub_801B0EE8();
s32 TObjPlayer__sub_801B19EC(void *);
s32 check_camera_mode__10TObjPlayerFv();
int TObjPlayer__sub_801B3FD8(void* p);
int TObjPlayer__sub_801B3FFC(void* p);
int TObjPlayer__sub_801B4020(void* p);
int TObjPlayer__sub_801B4044(void* p);
int TObjPlayer__sub_801BF500(void*);
int TObjPlayer__sub_801BF524(void*);
int reset_ring__10TObjPlayerFPv(void*);
int TObjPlayer__sub_801C5C0C(void*);

void TObjPlayer__sub_801B4264(s32 arg0) {
    if (TObjPlayer__sub_801B4118() != 0) {
        send_field_state_if_active__10TObjPlayerFii(arg0, TObjPlayer__sub_801D8E90(arg0));
    }
}
void TObjPlayer__sub_801B42AC(void *arg0) {
    if ((check_camera_mode__10TObjPlayerFv() == 0) && (TObjPlayer__sub_801B19EC(arg0) != 0) && (TTecCtrl__sub_801B0EE8() == 0) && (obj_isState3_324(arg0) == 0)) {
        TObjPlayer__sub_800113E4(arg0, (s16) ((s16) M2C_FIELD(arg0, s16 *, 0x2B8) / 2));
        return;
    }
    TObjPlayer__sub_800113E4(arg0, M2C_FIELD(arg0, s16 *, 0x2B8));
    TObjPlayer__sub_80102C78(arg0, M2C_FIELD(arg0, s16 *, 0x2BA));
}

}
