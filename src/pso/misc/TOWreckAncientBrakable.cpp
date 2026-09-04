#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__22TOWreckAncientBrakableFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__14TOWreckAncientFv(void *, int);

extern M2C_UNK __vt__22TOWreckAncientBrakable[];

void *__dt__22TOWreckAncientBrakableFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TOWreckAncientBrakable;
        __dt__14TOWreckAncientFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8017D444
#include "types.h"

extern "C" {

void TOWreckAncientBrakable__sub_8017D444(void);

void TOWreckAncientBrakable__sub_8017D444(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8017D5A4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_break_state__22TOWreckAncientBrakableFPv(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
u8 TODoorAncient08__sub_80229220(u16);
M2C_UNK TObjEneDellBiter__sub_80087350(void *, M2C_UNK);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK TOWreckAncientBrakable__sub_8017D444(void *);
M2C_UNK TOWreckAncientBrakable__sub_8017D448(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK set_flag8__6TLobbyFPv(void *);

void update_break_state__22TOWreckAncientBrakableFPv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    if (check_demo_mode__10TObjPlayerFv() == 1) {
        TOWreckAncientBrakable__sub_8017D444(arg0);
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xB4);
    switch (temp_r0) {
    default:
        M2C_FIELD(arg0, s32 *, 0xB4) = 0;
    case 0:
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0xB8);
        if ((temp_r0_2 >= 0) && (temp_r0_2 < 0x100) && (TODoorAncient08__sub_80229220((u16) temp_r0_2) == 1)) {
            M2C_FIELD(arg0, s32 *, 0xB4) = 1;
            TBoss3Volopt__sub_8022675C(0x43C11, arg0 + 0x38, 0, 0);
            TObjEneDellBiter__sub_80087350(arg0 + 0x38, 0x45);
            TObjEneDellBiter__sub_80087350(arg0 + 0x38, 0x46);
            TOWreckAncientBrakable__sub_8017D448(arg0);
        }
        return;
    case 1:
        set_flag8__6TLobbyFPv(arg0);
        queue_destruction__7TObjectFv(arg0);
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8017D6D8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TOWreckAncientBrakable__ct(void *arg0);
void TOWreckAncient__ct(void *);

extern M2C_UNK __vt__22TOWreckAncientBrakable[];
extern void *lbl_805D3210;

void *TOWreckAncientBrakable__ct(void *arg0) {
    TOWreckAncient__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TOWreckAncientBrakable;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3210;
    M2C_FIELD(arg0, u32 *, 0xB4) = 0;
    M2C_FIELD(arg0, u32 *, 0xB8) = -1;
    return arg0;
}

}
#endif
#endif
