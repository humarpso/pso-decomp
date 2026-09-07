#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80078378_lbl_8048D3B8 {
    M2C_UNK value;
    u8 remaining[0x3C];
};

extern "C" {
void fn_8007841C(void *, void *);
extern RecoveredGlobal_80078378_lbl_8048D3B8 lbl_8048D3B8;
s32 TUdpSocket__sub_80078378(s16 arg0, u8 *arg1);
}

extern "C" {

struct Base_80078064 { char pad[0x18]; };
struct VObj_80078064 : Base_80078064 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5();
};

void *__dt__10TUdpSocketFv(void *arg0, s16 arg1);
void reset_buffer(u8 *arg0);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TSocketFv(void *, M2C_UNK);
M2C_UNK memset(void *, int, int);

extern M2C_UNK __vt__10TUdpSocket[];

void *__dt__10TUdpSocketFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        struct VObj_80078064 *o = (struct VObj_80078064 *)arg0;
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TUdpSocket;
        o->m5();
        __dt__7TSocketFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void reset_buffer(u8 *arg0) {
    memset(arg0 + 0x74, 0, 0x800);
    M2C_FIELD(arg0, s8 *, 0x2B) = 1;
}
typedef char RecoveredGlobal_80078378_lbl_8048D3B8_size[sizeof(RecoveredGlobal_80078378_lbl_8048D3B8) == 0x40 ? 1 : -1];
s32 TUdpSocket__sub_80078378(s16 arg0, u8 *arg1) {
    M2C_UNK (*temp_r12)(void *);
    u8 *temp_r5;
    temp_r5 = (u8 *)(M2C_FIELD(&lbl_8048D3B8.value, M2C_UNK *, ((M2C_FIELD(arg1, s16 *, 0) - 0x400) * 4)));
    if (temp_r5 == NULL) {
        return 1;
    }
    if (arg0 == 0) {
        M2C_FIELD(arg1, s32 *, 4) = (s32) (temp_r5 + 0x74);
        fn_8007841C(temp_r5 + 0x884, arg1);
        M2C_FIELD(arg1, s16 *, 2) = 0x800;
    } else {
        M2C_FIELD(temp_r5, s8 *, 0x2B) = 0;
        M2C_FIELD(temp_r5, s16 *, 0x2E) = 0;
        M2C_FIELD(temp_r5, s16 *, 0x2C) = (s16) M2C_FIELD(arg1, s16 *, 2);
        temp_r12 = M2C_FIELD(temp_r5, M2C_UNK (**)(void *), 0x880);
        if (temp_r12 != NULL) {
            temp_r12(temp_r5);
        }
    }
    return 0;
}

}
