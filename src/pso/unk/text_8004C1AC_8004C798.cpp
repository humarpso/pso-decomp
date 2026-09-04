#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss4DarkFalz__sub_8004C8A8(void);
void enter_state_142__14TBoss4DarkFalzFPv(void* p);
void init_state__14TBoss4DarkFalzFPv(void *arg0);
void update_timer__14TBoss4DarkFalzFPv(void *arg0);
void TBoss4DarkFalz__sub_8004B20C(void*, M2C_UNK);
int TBoss4DarkFalz__sub_8004BA70(void*);
void TObjBgmColCtrl__sub_802274B8(void *);
int create__11TObjDFDemo3FPvPvPv(void*, void*, void*);
void create__11TObjDFDemo4FPvPvPv(void *, void *, void *);

extern M2C_UNK lbl_80437298[];

void init_state__14TBoss4DarkFalzFPv(void *arg0) {
    TBoss4DarkFalz__sub_8004BA70((void*)(arg0));
    create__11TObjDFDemo4FPvPvPv(arg0, (void *)((char *)arg0 + 924), M2C_FIELD(arg0, void **, 0x3A8));
    TObjBgmColCtrl__sub_802274B8(lbl_80437298);
    M2C_FIELD(arg0, u32 *, 0x380) = 114;
}

void TBoss4DarkFalz__sub_8004C8A8(void) {  }
void enter_state_142__14TBoss4DarkFalzFPv(void* p) { TBoss4DarkFalz__sub_8004BA70((void*)(p)); create__11TObjDFDemo3FPvPvPv(p, (char*)p + 0x39c, *(void**)((char*)p + 0x3a8)); *(int*)((char*)p + 0x380) = 142; }

extern s32 lbl_805D5550;

void update_timer__14TBoss4DarkFalzFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x380) - 1;
    M2C_FIELD(arg0, s32 *, 0x380) = temp_r0;
    if (temp_r0 < 0) {
        if ((s32) lbl_805D5550 == 0) {
            TBoss4DarkFalz__sub_8004B20C(arg0, 0xA);
            return;
        }
        TBoss4DarkFalz__sub_8004B20C(arg0, 0xB);
    }
}

}
