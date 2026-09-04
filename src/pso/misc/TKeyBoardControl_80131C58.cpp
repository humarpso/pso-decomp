#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TKeyBoardControl__sub_801323C8(void *, int);
u8 get_key_state_2__16TKeyBoardControlFPv(void* p);
u8 get_key_state__16TKeyBoardControlFPv(void* p);
void reset_inactive_keys__16TKeyBoardControlFi(s32 arg0);
void reset_input__16TKeyBoardControlFi(s32 arg0);
void reset_keys__16TKeyBoardControlFPv(void *arg0);
M2C_UNK TKeyBoardControl__sub_80132824(s32);
M2C_UNK TKeyBoardControl__sub_803F0C50();
M2C_UNK fn_803F1864(M2C_UNK *);

u8 get_key_state_2__16TKeyBoardControlFPv(void* p) { return *(u8*)((char*)p + 0x2); }

int TKeyBoardControl__sub_801323C8(void *, int) { return 0; }

u8 get_key_state__16TKeyBoardControlFPv(void* p) { return *(u8*)((char*)p + 0x1); }

void reset_inactive_keys__16TKeyBoardControlFi(s32 arg0) {
    s32 var_r29;
    u8 *var_r28;

    var_r29 = 0;
    var_r28 = (unsigned char *) (arg0 + 0xA0);
    do {
        if (TKeyBoardControl__sub_801323C8((void *)((void *) (arg0)), (int)((int) (M2C_FIELD(var_r28, u8 *, 0)))) == 0) {
            M2C_FIELD(var_r28, u8 *, 0) = 0U;
            M2C_FIELD(var_r28, s8 *, 1) = 0x23;
        }
        var_r29 += 1;
        var_r28 += 2;
    } while (var_r29 < 8);
}

void reset_keys__16TKeyBoardControlFPv(void *arg0) {
    s32 i;
    ((u8 *)arg0)[4] = 0;
    ((u8 *)arg0)[3] = 0;
    for (i = 0; i < 128; i++) {
        ((u8 *)arg0)[i + 5] = 0;
    }
}

extern M2C_UNK TKeyBoardControl__sub_801320CC[];

void reset_input__16TKeyBoardControlFi(s32 arg0) {
    TKeyBoardControl__sub_803F0C50();
    TKeyBoardControl__sub_80132824(arg0);
    fn_803F1864(TKeyBoardControl__sub_801320CC);
}

}
