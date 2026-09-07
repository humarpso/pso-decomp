#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802C658C_TAdMultiPlyChrSelectGC__data_804E0A48 {
    M2C_UNK value;
    u8 remaining[0xC];
};

extern "C" {
void TAdMultiPlyChrSelectGC__sub_802C5BCC(s32 arg0, s32 *arg1, s32 *arg2);
int TAdMultiPlyChrSelectGC__sub_802C65C0(void);
int TAdMultiPlyChrSelectGC__sub_802C6920(void);
    extern int TAdMultiPlyChrSelectGC__data_805D67D8;
void init__22TAdMultiPlyChrSelectGCFv(void);
extern int TAdMultiPlyChrSelectGC__data_805D67D8;
extern s32 TAdMultiPlyChrSelectGC__data_805D67DC;
extern s32 TAdMultiPlyChrSelectGC__data_805D67E0;
s32 get_status__22TAdMultiPlyChrSelectGCFv(void);
s32 TAdMultiPlyChrSelectGC__sub_80299454();
s32 TAdMultiPlyChrSelectGC__sub_802C6558();
int TAdMultiPlyChrSelectGC__sub_802C6920(void);
s32 is_selection_confirmed__22TAdMultiPlyChrSelectGCFv(void);
s32 TAdMultiPlyChrSelectGC__sub_802C6848(s32);
s32 count_ready__22TAdMultiPlyChrSelectGCFv(void);
extern RecoveredGlobal_802C658C_TAdMultiPlyChrSelectGC__data_804E0A48 TAdMultiPlyChrSelectGC__data_804E0A48;
s32 TAdMultiPlyChrSelectGC__sub_802C658C(s32 arg0);
extern int TAdMultiPlyChrSelectGC__data_805D67D8;
s32 get_clamped_cursor__22TAdMultiPlyChrSelectGCFv(void);
s32 TAdMultiPlyChrSelectGC__sub_802C64D0(s32);
s32 TAdMultiPlyChrSelectGC__sub_802C6848(s32);
s32 find_active_slot__22TAdMultiPlyChrSelectGCFv(void);
}

extern "C" {

void update__22TAdMultiPlyChrSelectGCFi(s32 arg0);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C50EC(s32);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C522C(s32);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C5314(s32);
s32 get_state_flag__9TMainTaskFv();

extern s32 TAdMultiPlyChrSelectGC__data_805D67DC;

void update__22TAdMultiPlyChrSelectGCFi(s32 arg0) {
    if (get_state_flag__9TMainTaskFv() != 1) {
        TAdMultiPlyChrSelectGC__sub_802C5314(arg0);
        switch ((s32) TAdMultiPlyChrSelectGC__data_805D67DC) {
        case 0:
            TAdMultiPlyChrSelectGC__sub_802C522C(arg0);
            return;
        case 1:
            TAdMultiPlyChrSelectGC__sub_802C50EC(arg0);
            break;
        }
    }
}
void TAdMultiPlyChrSelectGC__sub_802C5BCC(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 var_r3;
    var_r3 = TAdMultiPlyChrSelectGC__sub_802C658C((s32)(arg0));
    *arg1 = var_r3 > 3;
    if (var_r3 > 3) {
        var_r3 -= 4;
    }
    *arg2 = var_r3;
}
void init__22TAdMultiPlyChrSelectGCFv(void) { TAdMultiPlyChrSelectGC__data_805D67D8 = TAdMultiPlyChrSelectGC__sub_802C6920(); TAdMultiPlyChrSelectGC__sub_802C6920(); TAdMultiPlyChrSelectGC__sub_802C65C0(); }
s32 get_status__22TAdMultiPlyChrSelectGCFv(void) {
    s32 var_r3 = (s32) (*(s32 *)&TAdMultiPlyChrSelectGC__data_805D67D8);
    if (var_r3 == 0) {
        return 0;
    }
    switch ((s32) TAdMultiPlyChrSelectGC__data_805D67DC) {
    case 0:
        return var_r3;
    case 1:
        return (s32) TAdMultiPlyChrSelectGC__data_805D67E0;
    default:
        return 0;
    }
}
s32 is_selection_confirmed__22TAdMultiPlyChrSelectGCFv(void) {
    if (TAdMultiPlyChrSelectGC__sub_80299454() != 0) {
        if (TAdMultiPlyChrSelectGC__sub_802C6558() > 0) {
            return ((s32)TAdMultiPlyChrSelectGC__sub_802C6920());
        }
        return 0;
    }
    return 0;
}
s32 count_ready__22TAdMultiPlyChrSelectGCFv(void) {
    s32 var_r31;
    s32 var_r30;
    var_r31 = 0;
    var_r30 = 0;
    do {
        if (TAdMultiPlyChrSelectGC__sub_802C6848(var_r30) != 0) {
            var_r31 += 1;
        }
        var_r30 += 1;
    } while (var_r30 < 4);
    return var_r31;
}
s32 TAdMultiPlyChrSelectGC__sub_802C658C(s32 arg0) {
    s32 temp_r3;
    s32 var_r3;
    var_r3 = arg0;
    if ((var_r3 > 3) || (var_r3 < 0)) {
        var_r3 = 3;
    }
    temp_r3 = M2C_FIELD(((u8 *)(&TAdMultiPlyChrSelectGC__data_804E0A48.value) + (var_r3 * 4)), s32 *, 0);
    if (temp_r3 == -1) {
        return 0;
    }
    return temp_r3;
}
s32 get_clamped_cursor__22TAdMultiPlyChrSelectGCFv(void) {
    if (((s32) (*(s32 *)&TAdMultiPlyChrSelectGC__data_805D67D8) < 0) || ((s32) (*(s32 *)&TAdMultiPlyChrSelectGC__data_805D67D8) > 3)) {
        (*(s32 *)&TAdMultiPlyChrSelectGC__data_805D67D8) = 0;
    }
    return (*(s32 *)&TAdMultiPlyChrSelectGC__data_805D67D8);
}
s32 find_active_slot__22TAdMultiPlyChrSelectGCFv(void) {
    s32 var_r31;
    var_r31 = 0;
loop_1:
    if ((TAdMultiPlyChrSelectGC__sub_802C6848(var_r31) != 0) && (TAdMultiPlyChrSelectGC__sub_802C64D0(var_r31) == 0)) {
        return var_r31;
    }
    var_r31 += 1;
    if (var_r31 >= 4) {
        return 3;
    }
    goto loop_1;
}

typedef char RecoveredGlobal_802C658C_TAdMultiPlyChrSelectGC__data_804E0A48_size[sizeof(RecoveredGlobal_802C658C_TAdMultiPlyChrSelectGC__data_804E0A48) == 0x10 ? 1 : -1];

}
