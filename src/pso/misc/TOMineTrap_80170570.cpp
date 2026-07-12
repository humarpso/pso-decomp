#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TOMineTrap__sub_80170570(void);
void TOMineTrap__sub_80170574(void);
void update_state__10TOMineTrapFPv(void *arg0);
s32 get_main_phase();
int TAdSinglePlyChrSelectGC__sub_80132F2C(void*, void*);

void TOMineTrap__sub_80170570(void) {  }
void TOMineTrap__sub_80170574(void) { TAdSinglePlyChrSelectGC__sub_80132F2C((void*)16, (void*)16); }
void update_state__10TOMineTrapFPv(void *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0x348) = (s32) M2C_FIELD(arg0, f32 *, 0x70);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x348);
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0x344) = 0;
        return;
    }
    if (temp_r0 > 0) {
        M2C_FIELD(arg0, s32 *, 0x344) = 1;
        return;
    }
    if (get_main_phase() == 0xE) {
        M2C_FIELD(arg0, s32 *, 0x344) = 0;
        M2C_FIELD(arg0, s32 *, 0x8C) = 0x1E;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x344) = 2;
}

}
