#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

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

int TObjPlayer__sub_801B3FD8(void* p) { return reset_ring__10TObjPlayerFPv((char*)p + 0x63c); }
int TObjPlayer__sub_801B3FFC(void* p) { return TObjPlayer__sub_801C5C0C((char*)p + 0x63c); }
int TObjPlayer__sub_801B4020(void* p) { return TObjPlayer__sub_801BF500((char*)p + 0x63c); }
int TObjPlayer__sub_801B4044(void* p) { return TObjPlayer__sub_801BF524((char*)p + 0x63c); }
s32 TObjPlayer__sub_801B4068(void) {
    s8 temp_r3;

    temp_r3 = TObjPlayer__sub_801AFDB0();
    switch (temp_r3) {
    case 5:
    case 9:
    case 2:
        return 1;
    case 4:
        return 2;
    default:
        return 0;
    }
}

}
