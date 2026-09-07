#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK bswap__13packet_headerFv(void *);
void handle_cmd_9A(u8 *arg0, s32 *arg1);
}

extern "C" {

M2C_UNK set_port__7TSocketFUl(void *, s16);
s32 resolve_domain__7TSocketFPc(void *, s32);
M2C_UNK strncpy(void *, s32, M2C_UNK);
M2C_UNK memset(void *, M2C_UNK, M2C_UNK);

struct BaseDA { char pad[0x18]; };
struct VObjDA : BaseDA {
    virtual M2C_UNK m0();
    virtual M2C_UNK m1();
    virtual M2C_UNK m2();
    virtual M2C_UNK m3();
    virtual M2C_UNK m4();
    virtual M2C_UNK m5();
    virtual M2C_UNK m6();
};

void handle_cmd_9A(u8 *arg0, s32 *arg1) {
    s32 sp8;
    M2C_UNK (*temp_r12)(u8);
    sp8 = M2C_FIELD(arg1, s32 *, 0);
    bswap__13packet_headerFv((void *) (&sp8));
    M2C_FIELD(arg0, s32 *, 0x190C) = (s32) M2C_FIELD(&sp8, u8 *, 0x1);
    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(u8), 0xBC28);
    if (temp_r12 != NULL) {
        temp_r12(M2C_FIELD(&sp8, u8 *, 0x1));
    }
}

s32 socket_set_server_info(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 temp_r31;

    temp_r31 = resolve_domain__7TSocketFPc(arg0, arg5);
    set_port__7TSocketFUl(arg0, arg6);
    if (temp_r31 != 0) {
        return 2;
    }
    memset(arg0 + 0x3EB8, 0, 0x11);
    memset(arg0 + 0x3EC9, 0, 0x11);
    memset(arg0 + 0x3F8A, 0, 0x11);
    memset(arg0 + 0x3F9B, 0, 0x11);
    strncpy(arg0 + 0x3EB8, arg1, 8);
    strncpy(arg0 + 0x3EC9, arg2, 0xC);
    strncpy(arg0 + 0x3F8A, arg3, 8);
    strncpy(arg0 + 0x3F9B, arg4, 0xC);
    if (((VObjDA *)arg0)->m4() < 0) {
        return 1;
    }
    ((VObjDA *)arg0)->m6();
    return 0;
}

}
