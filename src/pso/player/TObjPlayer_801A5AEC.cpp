#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801A5EC4_TKeyBoardControl__data_80506270 {
    M2C_UNK value;
    u8 remaining[0xAC];
};

struct RecoveredGlobal_801A5EC4_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

extern "C" {
M2C_UNK check_and_read__16TKeyBoardControlFi(void *);
void TKeyBoardControl__sub_801A5EA0(u8 arg0);
s32 is_split_screen();
M2C_UNK TKeyBoardControl__sub_80132650(void *);
M2C_UNK TKeyBoardControl__sub_801A6910(int);
M2C_UNK fn_801A6BB0(int);
extern RecoveredGlobal_801A5EC4_TKeyBoardControl__data_80506270 TKeyBoardControl__data_80506270;
extern RecoveredGlobal_801A5EC4_lbl_8050E208 lbl_8050E208;
void TKeyBoardControl__sub_801A5EC4(void);
}

extern "C" {

void reset_fields__10TObjPlayerFPv(void* p);

void reset_fields__10TObjPlayerFPv(void* p) { *(s32*)((char*)p + 0x0) = 0; *(s32*)((char*)p + 0x4) = 0; *(s32*)((char*)p + 0x8) = 0; }

void TKeyBoardControl__sub_801A5EA0(u8 arg0) {
    check_and_read__16TKeyBoardControlFi((void *) (arg0));
}
typedef char RecoveredGlobal_801A5EC4_TKeyBoardControl__data_80506270_size[sizeof(RecoveredGlobal_801A5EC4_TKeyBoardControl__data_80506270) == 0xB0 ? 1 : -1];
typedef char RecoveredGlobal_801A5EC4_lbl_8050E208_size[sizeof(RecoveredGlobal_801A5EC4_lbl_8050E208) == 0x1B0 ? 1 : -1];
void TKeyBoardControl__sub_801A5EC4(void) {
    u8 *temp_r31;
    TKeyBoardControl__sub_80132650((void *) (&TKeyBoardControl__data_80506270.value));
    if (is_split_screen() == 0) {
        temp_r31 = (u8 *)&lbl_8050E208.value + 0x160;
        TKeyBoardControl__sub_801A6910((int) (temp_r31));
        fn_801A6BB0((int) (temp_r31));
    }
}

}
