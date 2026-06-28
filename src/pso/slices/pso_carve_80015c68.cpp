#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TOSwitchAttack__sub_80087278(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
s32 obj_testFlags30(void * a0 = 0, s32 a1 = 0);
void fn_80015DB0(void* p, void* q);

int fn_80015C68(void) { return 0; }
void fn_80015CB8(void *arg0, s32 arg1) {
    s32 temp_r0;

    if (obj_testFlags30(arg0, 0x02000000) == 0) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x2E4);
        switch (temp_r0) {
        case 1:
            TOSwitchAttack__sub_80087278(arg1, 0xF1, 0x40);
            return;
        case 2:
            TOSwitchAttack__sub_80087278(arg1, 0xF2, 0x40);
            return;
        case 4:
            TOSwitchAttack__sub_80087278(arg1, 0xE3, 0x40);
            return;
        case 8:
            TOSwitchAttack__sub_80087278(arg1, 0x10D, 0x40);
            break;
        }
    }
}
int fn_80015D74(void) { return 0; }
void fn_80015DB0(void* p, void* q) { *(u8*)((char*)p + 0x0) = *(u8*)((char*)q + 0x0); *(u8*)((char*)p + 0x1) = *(u8*)((char*)q + 0x1); }
int fn_80015DC4(void) { return 0; }

}
