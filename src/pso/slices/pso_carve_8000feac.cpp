#include "types.h"

extern "C" {

s32 fn_80087638(s32, s32);
s32 fn_8022675C(s32, s32, s32, s32);
s32 fn_80015CB8(s32, s32);
s32 TOSwitchAttack__sub_80087278(s32, s32, s32);
s32 TObjPlayer__sub_80019248(s32);
u16 obj_getField1c(void* a0 = 0);
int fn_8000FEAC(void* p);
int fn_8000FED0(void* p);
int fn_8000FEF4(void* p);
int fn_8000FF18(void* p);
void fn_8000FF4C(void* p, s16 v);
u16 fn_8000FF54(void* p);
int obj_testFlags30(void*, int);

int fn_8000FEAC(void* p) { return obj_testFlags30(p, 4096); }
int fn_8000FED0(void* p) { return obj_testFlags30(p, 2048); }
int fn_8000FEF4(void* p) { return obj_testFlags30(p, 512); }
int fn_8000FF18(void* p) { return obj_testFlags30(p, 256); }
int fn_8000FF3C(void) { return 0; }
void fn_8000FF4C(void* p, s16 v) { *(s16*)((char*)p + 0x2d4) = v; }
u16 fn_8000FF54(void* p) { return *(u16*)((char*)p + 0x2d4); }
s32 fn_8000FF5C(s32 arg0) {
    if (obj_getField1c() < 0x1000U) {
        return TObjPlayer__sub_80019248(arg0);
    }
    return 0;
}
void fn_8000FFA4(s32 arg0, s32 arg1) {
    if (obj_testFlags30((void*)(arg0), 0x02000000) == 0) {
        TOSwitchAttack__sub_80087278(arg1, 0xB9, 0x40);
        TOSwitchAttack__sub_80087278(arg1, 0xBA, 0x40);
        fn_80015CB8(arg0, arg1);
    }
}
int fn_8001000C(void) { return 0; }
void fn_800100A0(s32 arg0, s32 arg1) {
    s32 temp_r3;

    if (obj_testFlags30((void*)(arg0), 0x02000000) == 0) {
        temp_r3 = TOSwitchAttack__sub_80087278(arg0 + 0x2FC, 0x21, 0x50);
        if (temp_r3 != 0) {
            fn_80087638(temp_r3, obj_getField1c((void*)(arg0)));
        }
        if (arg1 != 0) {
            fn_8022675C(0xB210, arg0 + 0x38, 0, 0);
        }
    }
}
void fn_80010128(s32 arg0, s32 arg1) {
    s32 temp_r3;

    if (obj_testFlags30((void*)(arg0), 0x02000000) == 0) {
        temp_r3 = TOSwitchAttack__sub_80087278(arg0 + 0x2FC, 0x24, 0x50);
        if (temp_r3 != 0) {
            fn_80087638(temp_r3, obj_getField1c((void*)(arg0)));
        }
        if (arg1 != 0) {
            fn_8022675C(0xB20E, arg0 + 0x38, 0, 0);
        }
    }
}
void fn_800101B0(s32 arg0, s32 arg1) {
    s32 temp_r3;

    if (obj_testFlags30((void*)(arg0), 0x02000000) == 0) {
        temp_r3 = TOSwitchAttack__sub_80087278(arg0 + 0x2FC, 0x27, 0x50);
        if (temp_r3 != 0) {
            fn_80087638(temp_r3, obj_getField1c((void*)(arg0)));
        }
        if (arg1 != 0) {
            fn_8022675C(0xB20D, arg0 + 0x38, 0, 0);
        }
    }
}
void fn_80010238(s32 arg0, s32 arg1) {
    s32 temp_r3;

    if (obj_testFlags30((void*)(arg0), 0x02000000) == 0) {
        temp_r3 = TOSwitchAttack__sub_80087278(arg0 + 0x2FC, 0x26, 0x50);
        if (temp_r3 != 0) {
            fn_80087638(temp_r3, obj_getField1c((void*)(arg0)));
        }
        if (arg1 != 0) {
            fn_8022675C(0xB20C, arg0 + 0x38, 0, 0);
        }
    }
}
void fn_800102C0(s32 arg0, s32 arg1) {
    s32 temp_r3;

    if (obj_testFlags30((void*)(arg0), 0x02000000) == 0) {
        temp_r3 = TOSwitchAttack__sub_80087278(arg0 + 0x2FC, 0x25, 0x50);
        if (temp_r3 != 0) {
            fn_80087638(temp_r3, obj_getField1c((void*)(arg0)));
        }
        if (arg1 != 0) {
            fn_8022675C(0xCD0B, arg0 + 0x38, 0, 0);
        }
    }
}

}
