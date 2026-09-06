#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TOChatSensorFolder__ct(int, int);
u32 TOChatSensor__ct(int, void *, void *);
u32 __nw__7TObjectFUl(int);
extern u32 lbl_805D58D0;
extern s32 tl_05;
u32 TOChatSensor__create(s32 arg0);
}

extern "C" {

void *__dt__12TOChatSensorFv(void *arg0, s16 arg1);
void destroy_global__12TOChatSensorFv(void);
void TLobby__sub_800F957C(void*);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

extern M2C_UNK __vt__12TOChatSensor[];

void *__dt__12TOChatSensorFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TOChatSensor;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern u32 lbl_805D58D4;

u32 TOChatSensor__create(s32 arg0) {
    u32 temp_r3;
    u32 temp_r3_2;
    u32 var_r0;
    if ((u32) lbl_805D58D0 == 0U) {
        temp_r3 = __nw__7TObjectFUl((int) (0x1C));
        if (temp_r3 != 0U) {
            TOChatSensorFolder__ct((int) (temp_r3), (int) (tl_05));
        }
    }
    if ((u32) lbl_805D58D0 != 0U) {
        temp_r3_2 = __nw__7TObjectFUl((int) (0xD0));
        var_r0 = temp_r3_2;
        if (var_r0 != 0U) {
            var_r0 = TOChatSensor__ct((int) (temp_r3_2), (void *) (lbl_805D58D0), (void *) (arg0));
        }
        return var_r0;
    }
    return 0U;
}

void destroy_global__12TOChatSensorFv(void) {
    if ((u32) lbl_805D58D4 != 0U) {
        TLobby__sub_800F957C((void*)lbl_805D58D4);
        lbl_805D58D4 = 0U;
    }
}

}
