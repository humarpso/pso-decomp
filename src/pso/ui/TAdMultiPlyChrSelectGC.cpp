#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_event__22TAdMultiPlyChrSelectGCFPvi(void *arg0, s32 arg1);

s32 fn_801FE854();
M2C_UNK fn_802C5BCC(void *, s32 *, s32 *);
M2C_UNK fn_802C6418();
M2C_UNK fn_802C658C();
void * TAdMultiPlyChrSelectGC__sub_802C6920();
M2C_UNK fn_802E0024(s32, s32);
M2C_UNK fn_802E0064(s32, s32);

void handle_event__22TAdMultiPlyChrSelectGCFPvi(void *arg0, s32 arg1) {
    void *temp_r3;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;

    switch (arg1) {
    case 10:
        temp_r3 = TAdMultiPlyChrSelectGC__sub_802C6920();
        fn_802C5BCC(temp_r3, &sp14, &sp10);
        fn_802C6418();
        fn_802E0064(M2C_FIELD(arg0, s32 *, 0x5C), sp14);
        fn_802E0024(M2C_FIELD(arg0, s32 *, 0x5C), sp10);
        M2C_FIELD(arg0, s32 *, 0x9C) = 1;
        return;
    case 4:
        TAdMultiPlyChrSelectGC__sub_802C6920();
        fn_802C658C();
        if (fn_801FE854() == 0) {
            temp_r3 = TAdMultiPlyChrSelectGC__sub_802C6920();
            fn_802C5BCC(temp_r3, &spC, &sp8);
            fn_802C6418();
            fn_802E0064(M2C_FIELD(arg0, s32 *, 0x5C), spC);
            fn_802E0024(M2C_FIELD(arg0, s32 *, 0x5C), sp8);
        }
        M2C_FIELD(arg0, s32 *, 0x9C) = 1;
        return;
    }
}

}
