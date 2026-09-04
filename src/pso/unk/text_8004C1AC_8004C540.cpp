#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss4DarkFalz__sub_8004C540(void);
void enter_state_126__14TBoss4DarkFalzFPv(void* a0);
void request_action_e__14TBoss4DarkFalzFi(s32 arg0);
void start_phase__14TBoss4DarkFalzFPv(void* p);
int TBoss4DarkFalz__sub_8004AB90(void*, void*);
s32 TBoss4DarkFalz__sub_8004B07C(s32);
M2C_UNK TBoss4DarkFalz__sub_8004B1BC(s32, M2C_UNK);
int TBoss4DarkFalz__sub_8004B77C(void*);
int TBoss4DarkFalz__sub_8004B7DC(void);
int TBoss4DarkFalz__sub_8004BA18(void*);
s32 get_action_state__14TBoss4DarkFalzFPv(u32);

void TBoss4DarkFalz__sub_8004C540(void) {  }

extern u32 TBoss4DarkFalz__data_805D4D64;

void request_action_e__14TBoss4DarkFalzFi(s32 arg0) {
    if (((u32) TBoss4DarkFalz__data_805D4D64 == 0U) || (get_action_state__14TBoss4DarkFalzFPv(TBoss4DarkFalz__data_805D4D64) == 3) || (get_action_state__14TBoss4DarkFalzFPv(TBoss4DarkFalz__data_805D4D64) == 2) || (TBoss4DarkFalz__sub_8004B07C(arg0) != 0)) {
        TBoss4DarkFalz__sub_8004B1BC(arg0, 0xE);
    }
}

void start_phase__14TBoss4DarkFalzFPv(void* p) { TBoss4DarkFalz__sub_8004BA18(p); TBoss4DarkFalz__sub_8004B77C(p); }

    extern int lbl_805D4D68;
void enter_state_126__14TBoss4DarkFalzFPv(void* a0) { *(int*)((char*)a0 + 0x380) = 126; lbl_805D4D68 = 2; TBoss4DarkFalz__sub_8004B7DC(); TBoss4DarkFalz__sub_8004AB90(a0, (void*)2); }

}
