#include "types.h"

extern "C" {
s32 is_active__8TItemMagFPv();
void TObjPlayer__sub_801D0BC0(void *, int, int);
void TObjPlayer__sub_801C94B8(u8 *arg0);
}

extern "C" {

int TFontSmallLobby__sub_801C0228(void*);
s32 TObjPlayer__sub_801B1E54(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
s32 is_status_flag_200__10TObjPlayerFPv(void);
void TObjPlayer__sub_801C959C(void);
s32 TObjPlayer__sub_801CB874(void * a0 = 0);
s32 obj_clearFlags30(void * a0 = 0, s32 a1 = 0);
s32 obj_getField1c(void * a0 = 0);
s32 obj_getS16_32C(void * a0 = 0);
s32 use_current_item__10TObjPlayerFPv(void * a0 = 0);

int TObjPlayer__sub_801C9400(void) { return 0; }
void TObjPlayer__sub_801C94B8(u8 *arg0) {
    switch (*(s16 *)(arg0 + 0x328)) {
    case 1:
        if (is_active__8TItemMagFPv() == 0) {
            TObjPlayer__sub_801D0BC0(arg0, 1, 0);
        }
        break;
    }
}

}
