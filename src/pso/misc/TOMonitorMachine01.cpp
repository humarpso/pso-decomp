#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {
void TLobby__sub_8001FE7C(void *, s32);
extern s32 TOMonitorMachine01__data_8050DB68[];
extern s32 TOMonitorMachine01__data_805D5A5C;
extern void *TOMonitorMachine01__data_805D5A58;
void TOMonitorMachine01__sub_8017240C(void);
}

extern "C" {

void *__dt__18TOMonitorMachine01Fv(void *arg0, s16 arg1);
void *create__18TOMonitorMachine01FPv(void *arg0);
void *TOMonitorMachine01__ct(void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_key_base__5TOKeyFPvs(void *, int);

void *create__18TOMonitorMachine01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD8);
    if (o != NULL) {
        o = TOMonitorMachine01__ct(o, arg0);
    }
    return o;
}

extern M2C_UNK __vt__18TOMonitorMachine01[];

void TOMonitorMachine01__sub_8017240C(void) {
    s32 i;
    TOMonitorMachine01__data_805D5A5C = 0;
    for (i = 0; i < 2; i++) {
        TOMonitorMachine01__data_8050DB68[i] = 0;
    }
    if (TOMonitorMachine01__data_805D5A58 != 0) {
        TLobby__sub_8001FE7C(TOMonitorMachine01__data_805D5A58, 1);
        TOMonitorMachine01__data_805D5A58 = 0;
    }
}

void *__dt__18TOMonitorMachine01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TOMonitorMachine01;
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
