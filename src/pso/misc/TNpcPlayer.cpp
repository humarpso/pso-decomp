#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *dt__10TNpcPlayerFPvs(void *arg0, s16 arg1);

M2C_UNK queue_destruction__7TObjectFv(u32);
M2C_UNK __dl__FPv(void *);
M2C_UNK TObjEneGibbles__sub_80156720(u32);

void *dt__10TNpcPlayerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0xA8) != 0U) {
            TObjEneGibbles__sub_80156720(M2C_FIELD(arg0, u32 *, 0xA8));
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, u32 *, 0xA8));
            M2C_FIELD(arg0, u32 *, 0xA8) = 0U;
        }
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x800D87A8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *get_valid_target_player__10TNpcPlayerFv(void);
void *get_battle_param__10TObjPlayerFi();
s32 is_valid_and_active__10TObjPlayerFUi();

void *get_valid_target_player__10TNpcPlayerFv(void) {
    void *temp_r31;

    temp_r31 = get_battle_param__10TObjPlayerFi();
    if (is_valid_and_active__10TObjPlayerFUi() != 0) {
        return temp_r31;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80149374
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void send_6x3E__10TNpcPlayerFi(s32 arg0);
s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
M2C_UNK TLobby__send_and_handle_60(void *);
void TObjNpcBase__sub_80149358(void* p, s32 v);
void TObjNpcBase__sub_80149360(void* p, s32 v);
void TObjNpcBase__sub_80149368(void* p);
void TObjNpcBase__vt86(void);
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
M2C_UNK bswap_6x3E__10TNpcPlayerFi();
s32 read_be16_field2__10TObjPlayerFPv();

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {

void send_6x3E__10TNpcPlayerFi(s32 arg0) {
    bswap_6x3E__10TNpcPlayerFi();
    TLobby__send_and_handle_60((void *) (arg0));
}

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801493A8
#include "types.h"

extern "C" {

s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
s32 read_be16_field2__10TObjPlayerFPv();
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
void TObjNpcBase__vt86(void);
void TObjNpcBase__sub_80149358(void* p, s32 v);
void TObjNpcBase__sub_80149360(void* p, s32 v);
void TObjNpcBase__sub_80149368(void* p);

void bswap_6x3E__10TNpcPlayerFi(s32 arg0) {
    read_be16_field2__10TObjPlayerFPv();
    bswap_16__FPUs(arg0 + 4);
    bswap_16__FPUs(arg0 + 6);
    bswap_16__FPUs(arg0 + 8);
    bswap_16__FPUs(arg0 + 0xA);
    bswap_32__FPUl(arg0 + 0xC);
    bswap_32__FPUl(arg0 + 0x10);
    bswap_32__FPUl(arg0 + 0x14);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8014940C
#include "types.h"

extern "C" {

void init_6x3E_packet__10TNpcPlayerFPv(void* a0);

    extern const float lbl_805DB1C4;
void init_6x3E_packet__10TNpcPlayerFPv(void* a0) { *(short*)((char*)a0 + 0x4) = 0; *(short*)((char*)a0 + 0x6) = 0; *(short*)((char*)a0 + 0x8) = -1; *(short*)((char*)a0 + 0xa) = -1; *(float*)((char*)a0 + 0x14) = lbl_805DB1C4; *(float*)((char*)a0 + 0x10) = lbl_805DB1C4; *(float*)((char*)a0 + 0xc) = lbl_805DB1C4; *(unsigned char*)((char*)a0 + 0x0) = 62; *(unsigned char*)((char*)a0 + 0x1) = 6; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80149448
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TNpcPlayer__sub_80149448(void *arg0);

void TNpcPlayer__sub_80149448(void *arg0) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 2) {
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        return;
    }
    M2C_FIELD(arg0, s16 *, 0xB8) = 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8014DADC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_equipment__10TNpcPlayerFPv(void *arg0);
M2C_UNK TNpcPlayer__sub_801528A8(s32, M2C_UNK, u8);
M2C_UNK clamp_and_set_unit_value__10TObjPlayerFiUci(s32, u8, M2C_UNK);

void init_equipment__10TNpcPlayerFPv(void *arg0) {
    s32 temp_r31;
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x34);
    temp_r31 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x78), s32 *, 0x94);
    if (temp_r4 & 4) {
        clamp_and_set_unit_value__10TObjPlayerFiUci(temp_r31, M2C_FIELD(arg0, u8 *, 0x50), 0);
        clamp_and_set_unit_value__10TObjPlayerFiUci(temp_r31, M2C_FIELD(arg0, u8 *, 0x50), 1);
        TNpcPlayer__sub_801528A8(temp_r31 + 0x428, 0, M2C_FIELD(arg0, u8 *, 0x50));
        TNpcPlayer__sub_801528A8(temp_r31 + 0x428, 1, M2C_FIELD(arg0, u8 *, 0x50));
    } else if (temp_r4 & 8) {
        clamp_and_set_unit_value__10TObjPlayerFiUci(temp_r31, M2C_FIELD(arg0, u8 *, 0x50), 3);
        clamp_and_set_unit_value__10TObjPlayerFiUci(temp_r31, M2C_FIELD(arg0, u8 *, 0x50), 4);
        TNpcPlayer__sub_801528A8(temp_r31 + 0x428, 3, M2C_FIELD(arg0, u8 *, 0x50));
        TNpcPlayer__sub_801528A8(temp_r31 + 0x428, 4, M2C_FIELD(arg0, u8 *, 0x50));
    } else if (temp_r4 & 0x10) {
        clamp_and_set_unit_value__10TObjPlayerFiUci(temp_r31, M2C_FIELD(arg0, u8 *, 0x50), 6);
        clamp_and_set_unit_value__10TObjPlayerFiUci(temp_r31, M2C_FIELD(arg0, u8 *, 0x50), 8);
        TNpcPlayer__sub_801528A8(temp_r31 + 0x428, 6, M2C_FIELD(arg0, u8 *, 0x50));
        TNpcPlayer__sub_801528A8(temp_r31 + 0x428, 8, M2C_FIELD(arg0, u8 *, 0x50));
    }
    clamp_and_set_unit_value__10TObjPlayerFiUci(temp_r31, M2C_FIELD(arg0, u8 *, 0x51), 0xF);
    clamp_and_set_unit_value__10TObjPlayerFiUci(temp_r31, M2C_FIELD(arg0, u8 *, 0x51), 0x10);
    TNpcPlayer__sub_801528A8(temp_r31 + 0x428, 0xF, M2C_FIELD(arg0, u8 *, 0x51));
    TNpcPlayer__sub_801528A8(temp_r31 + 0x428, 0x10, M2C_FIELD(arg0, u8 *, 0x51));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8014DC30
#include "types.h"

extern "C" {

void TNpcPlayer__sub_8014DC30(void);
int TNpcPlayer__sub_8014DC3C(void* p);
int TNpcPlayer__sub_80150A34(void*);

    extern int TNpcPlayer__data_805D5864;
void TNpcPlayer__sub_8014DC30(void) { TNpcPlayer__data_805D5864 = 1; }

int TNpcPlayer__sub_8014DC3C(void* p) { return TNpcPlayer__sub_80150A34(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8014DF78
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void dispatch_action__10TNpcPlayerFPvi(void *arg0, s32 arg1);
M2C_UNK handle_action__10TNpcPlayerFPvi(void *, s32);
M2C_UNK TNpcPlayer__sub_8014E33C(void *, M2C_UNK);
M2C_UNK TNpcPlayer__sub_80150A34(void *, M2C_UNK);
s32 get_condition__10TNpcPlayerFPv(s32);

void dispatch_action__10TNpcPlayerFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 0:
        if (get_condition__10TNpcPlayerFPv(M2C_FIELD(arg0, s32 *, 0x78)) & 0x20) {
            handle_action__10TNpcPlayerFPvi(arg0, arg1);
        } else {
            TNpcPlayer__sub_80150A34(arg0, 0xF);
        }
        if (M2C_FIELD(arg0, s32 *, 0x80) & 0x200) {
            TNpcPlayer__sub_8014E33C(arg0, 0x13);
        }
        return;
    case 1:
        if (get_condition__10TNpcPlayerFPv(M2C_FIELD(arg0, s32 *, 0x78)) & 0x20) {
            handle_action__10TNpcPlayerFPvi(arg0, arg1);
            return;
        }
        break;
    case 2:
        if (get_condition__10TNpcPlayerFPv(M2C_FIELD(arg0, s32 *, 0x78)) & 0x20) {
            handle_action__10TNpcPlayerFPvi(arg0, arg1);
            return;
        }
        TNpcPlayer__sub_80150A34(arg0, 0x10);
        return;
    case 3:
        if (get_condition__10TNpcPlayerFPv(M2C_FIELD(arg0, s32 *, 0x78)) & 0x20) {
            handle_action__10TNpcPlayerFPvi(arg0, arg1);
            return;
        }
        TNpcPlayer__sub_80150A34(arg0, 0x11);
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8014E16C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_action__10TNpcPlayerFPvi(void *arg0, s32 arg1);
s32 fn_801B7C78(s32, M2C_UNK, M2C_UNK);
M2C_UNK fn_801B7F4C(s32, s32, void *);

void handle_action__10TNpcPlayerFPvi(void *arg0, s32 arg1) {
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    void *temp_r5;
    void *temp_r5_2;
    void *temp_r5_3;

    switch (arg1) {
    case 0:
        temp_r3 = fn_801B7C78(M2C_FIELD(M2C_FIELD(arg0, void **, 0x78), s32 *, 0x94), 3, 0);
        if (temp_r3 != -1) {
            temp_r5 = M2C_FIELD(arg0, void **, 0x78);
            fn_801B7F4C(M2C_FIELD(temp_r5, s32 *, 0x94), temp_r3, temp_r5);
            M2C_FIELD(arg0, s32 *, 0x80) = (s32) (M2C_FIELD(arg0, s32 *, 0x80) | 0x10000);
        }
        break;
    case 1:
        temp_r3_2 = fn_801B7C78(M2C_FIELD(M2C_FIELD(arg0, void **, 0x78), s32 *, 0x94), 3, 1);
        if (temp_r3_2 != -1) {
            temp_r5_2 = M2C_FIELD(arg0, void **, 0x78);
            fn_801B7F4C(M2C_FIELD(temp_r5_2, s32 *, 0x94), temp_r3_2, temp_r5_2);
            return;
        }
        break;
    case 2:
        temp_r3_3 = fn_801B7C78(M2C_FIELD(M2C_FIELD(arg0, void **, 0x78), s32 *, 0x94), 3, 6);
        if (temp_r3_3 != -1) {
            temp_r5_3 = M2C_FIELD(arg0, void **, 0x78);
            fn_801B7F4C(M2C_FIELD(temp_r5_3, s32 *, 0x94), temp_r3_3, temp_r5_3);
        }
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8014F3B8
#include "types.h"

extern "C" {

void quick_sort__10TNpcPlayerFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 TNpcPlayer__sub_8014F28C();

void quick_sort__10TNpcPlayerFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r3;

    if (arg2 < arg3) {
        temp_r3 = TNpcPlayer__sub_8014F28C();
        quick_sort__10TNpcPlayerFiiii(arg0, arg1, arg2, temp_r3 - 1);
        quick_sort__10TNpcPlayerFiiii(arg0, arg1, temp_r3 + 1, arg3);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8014FCCC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 try_update_target_flag__10TNpcPlayerFPvi(void *arg0, s32 arg1);
s32 check_and_set_reached__10TNpcPlayerFPv(void *arg0);
s32 try_attack__10TNpcPlayerFPvii(void *arg0, s32 arg1, s32 arg2);
s32 TNpcPlayer__sub_8014F424(void *, s32, s32, s32);
s32 TNpcPlayer__sub_8014F57C(void *, s32);
s32 fn_801B7C78(s32, M2C_UNK, M2C_UNK);
s32 try_camera_action__10TObjPlayerFii(s32, M2C_UNK);

s32 try_update_target_flag__10TNpcPlayerFPvi(void *arg0, s32 arg1) {
    s32 temp_r6;

    temp_r6 = M2C_FIELD(arg0, s32 *, 0x94);
    if (TNpcPlayer__sub_8014F424(arg0, temp_r6 + 0x38, arg1, temp_r6) != 0) {
        M2C_FIELD(arg0, s32 *, 0x8C) = (s32) (M2C_FIELD(arg0, s32 *, 0x8C) | 2);
        return 1;
    }
    return 0;
}

s32 check_and_set_reached__10TNpcPlayerFPv(void *arg0) {
    if (TNpcPlayer__sub_8014F57C(arg0, M2C_FIELD(arg0, s32 *, 0x94) + 0x38) != 0) {
        M2C_FIELD(arg0, s32 *, 0x8C) = (s32) (M2C_FIELD(arg0, s32 *, 0x8C) | 2);
        return 1;
    }
    return 0;
}

s32 try_attack__10TNpcPlayerFPvii(void *arg0, s32 arg1, s32 arg2) {
    switch (arg1) {
    case 0:
        if ((arg2 != 0) && (fn_801B7C78(M2C_FIELD(arg0, s32 *, 0x94), 3, 0) != -1)) {
            M2C_FIELD(arg0, s32 *, 0x90) = (s32) (M2C_FIELD(arg0, s32 *, 0x90) | 0x20);
            return 1;
        }
        if (try_camera_action__10TObjPlayerFii(M2C_FIELD(arg0, s32 *, 0x94), 0xF) != 0) {
            return 1;
        }
        break;
    case 1:
        if (fn_801B7C78(M2C_FIELD(arg0, s32 *, 0x94), 3, 1) != -1) {
            M2C_FIELD(arg0, s32 *, 0x90) = (s32) (M2C_FIELD(arg0, s32 *, 0x90) | 0x20);
            return 1;
        }
        break;
    case 2:
        if (try_camera_action__10TObjPlayerFii(M2C_FIELD(arg0, s32 *, 0x94), 0x10) != 0) {
            return 1;
        }
        break;
    case 3:
        if (fn_801B7C78(M2C_FIELD(arg0, s32 *, 0x94), 3, 6) != -1) {
            M2C_FIELD(arg0, s32 *, 0x90) = (s32) (M2C_FIELD(arg0, s32 *, 0x90) | 0x20);
            return 1;
        }
        if (try_camera_action__10TObjPlayerFii(M2C_FIELD(arg0, s32 *, 0x94), 0x11) != 0) {
            return 1;
        }
        break;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8015004C
#include "types.h"

extern "C" {

void render__10TNpcPlayerFv(void);

void render__10TNpcPlayerFv(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801508DC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_condition_flags__10TNpcPlayerFPv(u8 *arg0);
M2C_UNK TNpcPlayer__sub_8014E33C(void *, M2C_UNK);
M2C_UNK TNpcPlayer__sub_8014FAB0(s32);
s32 check_and_set_reached__10TNpcPlayerFPv(s32, f32);
M2C_UNK TNpcPlayer__sub_8014FEAC(s32);
M2C_UNK TNpcPlayer__sub_801528B8(void *, M2C_UNK);
M2C_UNK TNpcPlayer__sub_801528C8(void *, M2C_UNK);
s16 TNpcPlayer__sub_801528F4(void *, M2C_UNK);
M2C_UNK TNpcPlayer__sub_80152900(void *, M2C_UNK, M2C_UNK);
s32 get_condition__10TNpcPlayerFPv(s32);

extern const f32 lbl_805DB240;

void update_condition_flags__10TNpcPlayerFPv(u8 *arg0) {
    TNpcPlayer__sub_8014FEAC(M2C_FIELD(arg0, s32 *, 0x74));
    TNpcPlayer__sub_8014FAB0(M2C_FIELD(arg0, s32 *, 0x74));
    if (get_condition__10TNpcPlayerFPv(M2C_FIELD(arg0, s32 *, 0x74)) & 2) {
        if (TNpcPlayer__sub_801528F4(arg0 + 0x5C, 0xA) == 0) {
            TNpcPlayer__sub_8014E33C(arg0, 9);
        }
        TNpcPlayer__sub_801528C8(arg0 + 0x5C, 0xA);
    } else {
        TNpcPlayer__sub_801528B8(arg0 + 0x5C, 0xA);
    }
    if (check_and_set_reached__10TNpcPlayerFPv(M2C_FIELD(arg0, s32 *, 0x74), lbl_805DB240) != 0) {
        if (get_condition__10TNpcPlayerFPv(M2C_FIELD(arg0, s32 *, 0x74)) & 8) {
            if (TNpcPlayer__sub_801528F4(arg0 + 0x5C, 9) == 0) {
                TNpcPlayer__sub_8014E33C(arg0, 0xC);
            }
            TNpcPlayer__sub_801528C8(arg0 + 0x5C, 8);
            TNpcPlayer__sub_80152900(arg0 + 0x5C, 9, 0x2BC);
            return;
        }
        TNpcPlayer__sub_801528B8(arg0 + 0x5C, 9);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801509D0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_state__10TNpcPlayerFPv(void *arg0);

M2C_UNK TNpcPlayer__sub_80150050(void *);
M2C_UNK reset_fields_8c__10TNpcPlayerFPv(s32);

void init_state__10TNpcPlayerFPv(void *arg0) {
    s32 temp_r0;

    reset_fields_8c__10TNpcPlayerFPv(M2C_FIELD(arg0, s32 *, 0x74));
    reset_fields_8c__10TNpcPlayerFPv(M2C_FIELD(arg0, s32 *, 0x78));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x28);
    switch (temp_r0) {
    case 0:
        TNpcPlayer__sub_80150050(arg0);
        M2C_FIELD(arg0, s32 *, 0x28) = 1;
    case 1:
        return;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801519FC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 update_follow_target__10TNpcPlayerFPv(u8 *arg0);
M2C_UNK TNpcPlayer__sub_8014E090(void *, int);
s32 TNpcPlayer__sub_8014FF5C(void *);
s32 TNpcPlayer__sub_801500F4();
M2C_UNK TNpcPlayer__sub_801501A0(void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);

s32 update_follow_target__10TNpcPlayerFPv(u8 *arg0) {
    if (TNpcPlayer__sub_801500F4() != 0) {
        TNpcPlayer__sub_801501A0((void *) (arg0));
        if (TNpcPlayer__sub_8014FF5C((void *) (arg0)) != 0) {
            VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xAC), (void *) (arg0 + 0xD0));
            if ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 2U) {
                TNpcPlayer__sub_8014E090((void *) (arg0), (int) (1));
            }
        } else {
            VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xAC), (void *) (M2C_FIELD(M2C_FIELD(arg0, void **, 0x78), s32 *, 0x94) + 0x38));
        }
        return 1;
    }
    if ((M2C_FIELD(arg0, s32 *, 0x80) & 0x20) && ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 8U)) {
        TNpcPlayer__sub_8014E090((void *) (arg0), (int) (0));
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801522BC
#include "types.h"

extern "C" {

void copy__10TNpcPlayerFPvPv(void* p, void* q);

void copy__10TNpcPlayerFPvPv(void* p, void* q) { *(u16*)((char*)p + 0x0) = *(u16*)((char*)q + 0x0); *(u16*)((char*)p + 0x2) = *(u16*)((char*)q + 0x2); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x8); *(f32*)((char*)p + 0xc) = *(f32*)((char*)q + 0xc); *(f32*)((char*)p + 0x10) = *(f32*)((char*)q + 0x10); *(f32*)((char*)p + 0x14) = *(f32*)((char*)q + 0x14); *(f32*)((char*)p + 0x18) = *(f32*)((char*)q + 0x18); *(f32*)((char*)p + 0x1c) = *(f32*)((char*)q + 0x1c); *(u8*)((char*)p + 0x20) = *(u8*)((char*)q + 0x20); *(u8*)((char*)p + 0x21) = *(u8*)((char*)q + 0x21); *(u8*)((char*)p + 0x22) = *(u8*)((char*)q + 0x22); *(u8*)((char*)p + 0x23) = *(u8*)((char*)q + 0x23); *(f32*)((char*)p + 0x24) = *(f32*)((char*)q + 0x24); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80152838
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void ensure_rock_singleton__10TNpcPlayerFv(void);
u32 alloc_buffer__11TOBoss4RockFPv(M2C_UNK);

extern u32 lbl_805D5860;

void ensure_rock_singleton__10TNpcPlayerFv(void) {
    if ((u32) lbl_805D5860 == 0U) {
        lbl_805D5860 = alloc_buffer__11TOBoss4RockFPv(0x1400);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801528DC
#include "types.h"

extern "C" {

void init_model__10TNpcPlayerFPv(void* p);
int read_be16_field2__10TObjPlayerFPv(void*);
int TObjPlayer__sub_80102CE0(void*);
void update__10TNpcPlayerFPv(void* p);
int update_players__6TLobbyFi(void*);
int TNpcPlayer__sub_80152ACC(void*);
void update_players__10TNpcPlayerFPv(void* p);
int TNpcPlayer__sub_80152B5C(void*);
void update_lobby__10TNpcPlayerFPv(void* p);
int TNpcPlayer__sub_80152BEC(void*);
void reset_model__10TNpcPlayerFPv(void* p);
int TNpcPlayer__sub_80152A78(void* a0 = 0);
void* init__10TNpcPlayerFPv(void* p);
s32 TNpcPlayer__sub_801528DC(void* p);
s32 get_npc_state__10TNpcPlayerFPv(void* p);
u16 get_npc_type__10TNpcPlayerFPv(void* p);
s32 TNpcPlayer__sub_80152978(void* p);
s32 get_condition__10TNpcPlayerFPv(void* p);
void copy_transform__10TNpcPlayerFPvPv(void* p, void* q);
s32 get_action_state__10TNpcPlayerFPv(void* p);
void reset_fields_8c__10TNpcPlayerFPv(void* p);
void TNpcPlayer__sub_80152A30(void);
void TNpcPlayer__sub_80152D64(void* p);

s32 TNpcPlayer__sub_801528DC(void* p) { return *(s32*)((char*)p + 0x84); }
s32 get_npc_state__10TNpcPlayerFPv(void* p) { return *(s32*)((char*)p + 0x7c); }
u16 get_npc_type__10TNpcPlayerFPv(void* p) { return *(u16*)((char*)p + 0x8a); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80152978
#include "types.h"

extern "C" {

void init_model__10TNpcPlayerFPv(void* p);
int read_be16_field2__10TObjPlayerFPv(void*);
int TObjPlayer__sub_80102CE0(void*);
void update__10TNpcPlayerFPv(void* p);
int update_players__6TLobbyFi(void*);
int TNpcPlayer__sub_80152ACC(void*);
void update_players__10TNpcPlayerFPv(void* p);
int TNpcPlayer__sub_80152B5C(void*);
void update_lobby__10TNpcPlayerFPv(void* p);
int TNpcPlayer__sub_80152BEC(void*);
void reset_model__10TNpcPlayerFPv(void* p);
int TNpcPlayer__sub_80152A78(void* a0 = 0);
void* init__10TNpcPlayerFPv(void* p);
s32 TNpcPlayer__sub_801528DC(void* p);
s32 get_npc_state__10TNpcPlayerFPv(void* p);
u16 get_npc_type__10TNpcPlayerFPv(void* p);
s32 TNpcPlayer__sub_80152978(void* p);
s32 get_condition__10TNpcPlayerFPv(void* p);
void copy_transform__10TNpcPlayerFPvPv(void* p, void* q);
s32 get_action_state__10TNpcPlayerFPv(void* p);
void reset_fields_8c__10TNpcPlayerFPv(void* p);
void TNpcPlayer__sub_80152A30(void);
void TNpcPlayer__sub_80152D64(void* p);

s32 TNpcPlayer__sub_80152978(void* p) { return *(s32*)((char*)p + 0x80); }
s32 get_condition__10TNpcPlayerFPv(void* p) { return *(s32*)((char*)p + 0x90); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801529AC
#include "types.h"

extern "C" {

void init_model__10TNpcPlayerFPv(void* p);
int read_be16_field2__10TObjPlayerFPv(void*);
int TObjPlayer__sub_80102CE0(void*);
void update__10TNpcPlayerFPv(void* p);
int update_players__6TLobbyFi(void*);
int TNpcPlayer__sub_80152ACC(void*);
void update_players__10TNpcPlayerFPv(void* p);
int TNpcPlayer__sub_80152B5C(void*);
void update_lobby__10TNpcPlayerFPv(void* p);
int TNpcPlayer__sub_80152BEC(void*);
void reset_model__10TNpcPlayerFPv(void* p);
int TNpcPlayer__sub_80152A78(void* a0 = 0);
void* init__10TNpcPlayerFPv(void* p);
s32 TNpcPlayer__sub_801528DC(void* p);
s32 get_npc_state__10TNpcPlayerFPv(void* p);
u16 get_npc_type__10TNpcPlayerFPv(void* p);
s32 TNpcPlayer__sub_80152978(void* p);
s32 get_condition__10TNpcPlayerFPv(void* p);
void copy_transform__10TNpcPlayerFPvPv(void* p, void* q);
s32 get_action_state__10TNpcPlayerFPv(void* p);
void reset_fields_8c__10TNpcPlayerFPv(void* p);
void TNpcPlayer__sub_80152A30(void);
void TNpcPlayer__sub_80152D64(void* p);

void copy_transform__10TNpcPlayerFPvPv(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x8); }
s32 get_action_state__10TNpcPlayerFPv(void* p) { return *(s32*)((char*)p + 0x8c); }
void reset_fields_8c__10TNpcPlayerFPv(void* p) { *(s32*)((char*)p + 0x8c) = 0; *(s32*)((char*)p + 0x90) = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80152A30
#include "types.h"

extern "C" {

void init_model__10TNpcPlayerFPv(void* p);
int read_be16_field2__10TObjPlayerFPv(void*);
int TObjPlayer__sub_80102CE0(void*);
void update__10TNpcPlayerFPv(void* p);
int update_players__6TLobbyFi(void*);
int TNpcPlayer__sub_80152ACC(void*);
void update_players__10TNpcPlayerFPv(void* p);
int TNpcPlayer__sub_80152B5C(void*);
void update_lobby__10TNpcPlayerFPv(void* p);
int TNpcPlayer__sub_80152BEC(void*);
void reset_model__10TNpcPlayerFPv(void* p);
int TNpcPlayer__sub_80152A78(void* a0 = 0);
void* init__10TNpcPlayerFPv(void* p);
s32 TNpcPlayer__sub_801528DC(void* p);
s32 get_npc_state__10TNpcPlayerFPv(void* p);
u16 get_npc_type__10TNpcPlayerFPv(void* p);
s32 TNpcPlayer__sub_80152978(void* p);
s32 get_condition__10TNpcPlayerFPv(void* p);
void copy_transform__10TNpcPlayerFPvPv(void* p, void* q);
s32 get_action_state__10TNpcPlayerFPv(void* p);
void reset_fields_8c__10TNpcPlayerFPv(void* p);
void TNpcPlayer__sub_80152A30(void);
void TNpcPlayer__sub_80152D64(void* p);

void TNpcPlayer__sub_80152A30(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80152A48
#include "types.h"

extern "C" {

void init_model__10TNpcPlayerFPv(void* p);
int read_be16_field2__10TObjPlayerFPv(void*);
int TObjPlayer__sub_80102CE0(void*);
void update__10TNpcPlayerFPv(void* p);
int update_players__6TLobbyFi(void*);
int TNpcPlayer__sub_80152ACC(void*);
void update_players__10TNpcPlayerFPv(void* p);
int TNpcPlayer__sub_80152B5C(void*);
void update_lobby__10TNpcPlayerFPv(void* p);
int TNpcPlayer__sub_80152BEC(void*);
void reset_model__10TNpcPlayerFPv(void* p);
int TNpcPlayer__sub_80152A78(void* a0 = 0);
void* init__10TNpcPlayerFPv(void* p);
s32 TNpcPlayer__sub_801528DC(void* p);
s32 get_npc_state__10TNpcPlayerFPv(void* p);
u16 get_npc_type__10TNpcPlayerFPv(void* p);
s32 TNpcPlayer__sub_80152978(void* p);
s32 get_condition__10TNpcPlayerFPv(void* p);
void copy_transform__10TNpcPlayerFPvPv(void* p, void* q);
s32 get_action_state__10TNpcPlayerFPv(void* p);
void reset_fields_8c__10TNpcPlayerFPv(void* p);
void TNpcPlayer__sub_80152A30(void);
void TNpcPlayer__sub_80152D64(void* p);

void* init__10TNpcPlayerFPv(void* p) { TNpcPlayer__sub_80152A78(p); return p; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80152A98
#include "types.h"

extern "C" {

void init_model__10TNpcPlayerFPv(void* p);
int read_be16_field2__10TObjPlayerFPv(void*);
int TObjPlayer__sub_80102CE0(void*);
void update__10TNpcPlayerFPv(void* p);
int update_players__6TLobbyFi(void*);
int TNpcPlayer__sub_80152ACC(void*);
void update_players__10TNpcPlayerFPv(void* p);
int TNpcPlayer__sub_80152B5C(void*);
void update_lobby__10TNpcPlayerFPv(void* p);
int TNpcPlayer__sub_80152BEC(void*);
void reset_model__10TNpcPlayerFPv(void* p);
int TNpcPlayer__sub_80152A78(void* a0 = 0);
void* init__10TNpcPlayerFPv(void* p);
s32 TNpcPlayer__sub_801528DC(void* p);
s32 get_npc_state__10TNpcPlayerFPv(void* p);
u16 get_npc_type__10TNpcPlayerFPv(void* p);
s32 TNpcPlayer__sub_80152978(void* p);
s32 get_condition__10TNpcPlayerFPv(void* p);
void copy_transform__10TNpcPlayerFPvPv(void* p, void* q);
s32 get_action_state__10TNpcPlayerFPv(void* p);
void reset_fields_8c__10TNpcPlayerFPv(void* p);
void TNpcPlayer__sub_80152A30(void);
void TNpcPlayer__sub_80152D64(void* p);

void update__10TNpcPlayerFPv(void* p) { TNpcPlayer__sub_80152ACC(p); update_players__6TLobbyFi(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80152B28
#include "types.h"

extern "C" {

void init_model__10TNpcPlayerFPv(void* p);
int read_be16_field2__10TObjPlayerFPv(void*);
int TObjPlayer__sub_80102CE0(void*);
void update__10TNpcPlayerFPv(void* p);
int update_players__6TLobbyFi(void*);
int TNpcPlayer__sub_80152ACC(void*);
void update_players__10TNpcPlayerFPv(void* p);
int TNpcPlayer__sub_80152B5C(void*);
void update_lobby__10TNpcPlayerFPv(void* p);
int TNpcPlayer__sub_80152BEC(void*);
void reset_model__10TNpcPlayerFPv(void* p);
int TNpcPlayer__sub_80152A78(void* a0 = 0);
void* init__10TNpcPlayerFPv(void* p);
s32 TNpcPlayer__sub_801528DC(void* p);
s32 get_npc_state__10TNpcPlayerFPv(void* p);
u16 get_npc_type__10TNpcPlayerFPv(void* p);
s32 TNpcPlayer__sub_80152978(void* p);
s32 get_condition__10TNpcPlayerFPv(void* p);
void copy_transform__10TNpcPlayerFPvPv(void* p, void* q);
s32 get_action_state__10TNpcPlayerFPv(void* p);
void reset_fields_8c__10TNpcPlayerFPv(void* p);
void TNpcPlayer__sub_80152A30(void);
void TNpcPlayer__sub_80152D64(void* p);

void update_players__10TNpcPlayerFPv(void* p) { TNpcPlayer__sub_80152B5C(p); update_players__6TLobbyFi(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80152BB8
#include "types.h"

extern "C" {

void init_model__10TNpcPlayerFPv(void* p);
int read_be16_field2__10TObjPlayerFPv(void*);
int TObjPlayer__sub_80102CE0(void*);
void update__10TNpcPlayerFPv(void* p);
int update_players__6TLobbyFi(void*);
int TNpcPlayer__sub_80152ACC(void*);
void update_players__10TNpcPlayerFPv(void* p);
int TNpcPlayer__sub_80152B5C(void*);
void update_lobby__10TNpcPlayerFPv(void* p);
int TNpcPlayer__sub_80152BEC(void*);
void reset_model__10TNpcPlayerFPv(void* p);
int TNpcPlayer__sub_80152A78(void* a0 = 0);
void* init__10TNpcPlayerFPv(void* p);
s32 TNpcPlayer__sub_801528DC(void* p);
s32 get_npc_state__10TNpcPlayerFPv(void* p);
u16 get_npc_type__10TNpcPlayerFPv(void* p);
s32 TNpcPlayer__sub_80152978(void* p);
s32 get_condition__10TNpcPlayerFPv(void* p);
void copy_transform__10TNpcPlayerFPvPv(void* p, void* q);
s32 get_action_state__10TNpcPlayerFPv(void* p);
void reset_fields_8c__10TNpcPlayerFPv(void* p);
void TNpcPlayer__sub_80152A30(void);
void TNpcPlayer__sub_80152D64(void* p);

void update_lobby__10TNpcPlayerFPv(void* p) { TNpcPlayer__sub_80152BEC(p); update_players__6TLobbyFi(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80152D64
#include "types.h"

extern "C" {

void init_model__10TNpcPlayerFPv(void* p);
int read_be16_field2__10TObjPlayerFPv(void*);
int TObjPlayer__sub_80102CE0(void*);
void update__10TNpcPlayerFPv(void* p);
int update_players__6TLobbyFi(void*);
int TNpcPlayer__sub_80152ACC(void*);
void update_players__10TNpcPlayerFPv(void* p);
int TNpcPlayer__sub_80152B5C(void*);
void update_lobby__10TNpcPlayerFPv(void* p);
int TNpcPlayer__sub_80152BEC(void*);
void reset_model__10TNpcPlayerFPv(void* p);
int TNpcPlayer__sub_80152A78(void* a0 = 0);
void* init__10TNpcPlayerFPv(void* p);
s32 TNpcPlayer__sub_801528DC(void* p);
s32 get_npc_state__10TNpcPlayerFPv(void* p);
u16 get_npc_type__10TNpcPlayerFPv(void* p);
s32 TNpcPlayer__sub_80152978(void* p);
s32 get_condition__10TNpcPlayerFPv(void* p);
void copy_transform__10TNpcPlayerFPvPv(void* p, void* q);
s32 get_action_state__10TNpcPlayerFPv(void* p);
void reset_fields_8c__10TNpcPlayerFPv(void* p);
void TNpcPlayer__sub_80152A30(void);
void TNpcPlayer__sub_80152D64(void* p);

void TNpcPlayer__sub_80152D64(void* p) { *(u8*)((char*)p + 0x3) = 0; *(u8*)((char*)p + 0x2) = 0; *(u8*)((char*)p + 0x1) = 0; *(u8*)((char*)p + 0x0) = 0; }
void reset_model__10TNpcPlayerFPv(void* p) { init_model__10TNpcPlayerFPv(p); update_players__6TLobbyFi(p); }
void init_model__10TNpcPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); TObjPlayer__sub_80102CE0((char*)p + 0x4); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80152DE4
#include "types.h"

extern "C" {

void reset_move_state__10TNpcPlayerFPv(void* a0);
void sync_from_lobby__10TNpcPlayerFPv(void* p);
void swap_endian__10TNpcPlayerFPv(void* p);
void TNpcPlayer__sub_80152E74(void* a0);
int read_be16_field2__10TObjPlayerFPv(void*);
int bswap_32__FPUl(void*);
int TObjPlayer__sub_80102CE0(void*);
int update_players__6TLobbyFi(void*);

    extern const float TNpcPlayer__data_805DB1F0;
void reset_move_state__10TNpcPlayerFPv(void* a0) { *(float*)((char*)a0 + 0x8) = TNpcPlayer__data_805DB1F0; *(float*)((char*)a0 + 0x4) = TNpcPlayer__data_805DB1F0; *(unsigned char*)((char*)a0 + 0x0) = 66; *(unsigned char*)((char*)a0 + 0x1) = 3; }

void sync_from_lobby__10TNpcPlayerFPv(void* p) { swap_endian__10TNpcPlayerFPv((void*)(p)); update_players__6TLobbyFi(p); }

void swap_endian__10TNpcPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); TObjPlayer__sub_80102CE0((char*)p + 0x4); bswap_32__FPUl((char*)p + 0xc); }

    extern const float TNpcPlayer__data_805DB1F0;
void TNpcPlayer__sub_80152E74(void* a0) { *(float*)((char*)a0 + 0x8) = TNpcPlayer__data_805DB1F0; *(float*)((char*)a0 + 0x4) = TNpcPlayer__data_805DB1F0; *(int*)((char*)a0 + 0xc) = 0; *(unsigned char*)((char*)a0 + 0x0) = 64; *(unsigned char*)((char*)a0 + 0x1) = 4; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80152E9C
#include "types.h"

extern "C" {

int TFontSmallLobby__sub_80152F28(void* a0 = 0);
void* fn_80152EF8(void* p);
int bswap_16__FPUs(void*);
void set_field2__10TNpcPlayerFPvs(void* p, s16 v);
void set_field_0__10TNpcPlayerFPvs(void* p, s16 v);
void set_state__10TNpcPlayerFPvi(void* p, s32 v);
void set_state__10TNpcPlayerFPvs(void* p, s16 v);
void set_type__10TNpcPlayerFPvs(void* p, s16 v);

void set_field2__10TNpcPlayerFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x2) = v; }
void set_field_0__10TNpcPlayerFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }
void set_state__10TNpcPlayerFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }
void byteswap_pos__10TNpcPlayerFPv(void* p) { bswap_16__FPUs(p); bswap_16__FPUs((char*)p + 0x2); }
void set_state__10TNpcPlayerFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x2) = v; }
void set_type__10TNpcPlayerFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80152F48
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_switch__22TObjFogCollisionPoisonFPv(s32);
s32 TObjFogCollisionPoison__sub_8015346C(s32, u16);
s32 TObjFogCollisionPoison__sub_801534E8(s32, u16);
s32 TObjFogCollisionPoison__sub_80153520(s32);
s32 TObjFogCollisionPoison__sub_801535D0(s32);
s32 check_collision__16TObjFogCollisionFPvUs(s32, u16);
u16 get_action_flags__10TNpcPlayerFPv(void* p);

u16 get_action_flags__10TNpcPlayerFPv(void* p) { return *(u16*)((char*)p + 0x678); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80190E64
#include "types.h"

extern "C" {

void queue_destruction_if_dead__10TNpcPlayerFPv(void* p);
int queue_destruction__7TObjectFv(void*);

void queue_destruction_if_dead__10TNpcPlayerFPv(void* p) { if (*(int*)((char*)p + 0x2c) == 1) { queue_destruction__7TObjectFv(p); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80190E90
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *destroy_and_materialize_player__10TNpcPlayerFPvs(u8 *arg0, s16 arg1);
s32 TNpcPlayer__sub_80152674(s32);
M2C_UNK TObjPlayer__sub_801B1FA4(u16, void *, s32);
u8 *TObjPlayer__sub_801BDEF8(u16, M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_801CA0B4();
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK fn_8019127C(void *);

extern M2C_UNK lbl_804B7C04[];

u8 *destroy_and_materialize_player__10TNpcPlayerFPvs(u8 *arg0, s16 arg1) {
    u8 *temp_r3;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B7C04;
        temp_r3 = TObjPlayer__sub_801BDEF8(M2C_FIELD(arg0, u16 *, 0x30), 6, TNpcPlayer__sub_80152674(M2C_FIELD(arg0, s32 *, 0x34)));
        if (temp_r3 != NULL) {
            M2C_FIELD(temp_r3, s16 *, 0x324) = 6;
            if ((s32) M2C_FIELD(arg0, s32 *, 0x38) == 1) {
                TObjPlayer__sub_801CA0B4();
                fn_8019127C(temp_r3);
            }
            TObjPlayer__sub_801B1FA4(M2C_FIELD(arg0, u16 *, 0x30), arg0 + 0x1C, M2C_FIELD(arg0, s32 *, 0x28));
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802C3CD0
#include "types.h"

extern "C" {

s32 send_command__10TNpcPlayerFiciiPv(s32 arg0, s8 arg1, s32 arg2, s32 arg3, s8 *arg4);
s32 get_ptr_4__10TObjPlayerFPv(s8 *);
int TObjPlayer__sub_802C38B4(s32, s8 *, s32);
int fn_802C3A50(s8, s32, s32);

s32 send_command__10TNpcPlayerFiciiPv(s32 arg0, s8 arg1, s32 arg2, s32 arg3, s8 *arg4) {
    *arg4 = arg1;
    fn_802C3A50(arg1, arg2, get_ptr_4__10TObjPlayerFPv(arg4));
    TObjPlayer__sub_802C38B4(arg0, arg4, arg3);
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8034DC20
#include "types.h"

extern "C" {

void TNpcPlayer__sub_8034DC20(void);

void TNpcPlayer__sub_8034DC20(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8034E104
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void send_code_45_to_player__10TNpcPlayerFi(int arg0);
void play_effect__10TNpcPlayerFi(int arg0);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
M2C_UNK play_effect_default__10TObjPlayerFii(s32, M2C_UNK);
M2C_UNK send_code_45_1__10TObjPlayerFi(s32);

s32 obj_isState2_324();

void send_code_45_to_player__10TNpcPlayerFi(int arg0) {
    s32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((u16) arg0);
    if ((temp_r3 != 0) && (obj_isState2_324() == 0)) {
        send_code_45_1__10TObjPlayerFi(temp_r3);
    }
}

s32 obj_isState2_324();

void play_effect__10TNpcPlayerFi(int arg0) {
    s32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((u16) arg0);
    if ((temp_r3 != 0) && (obj_isState2_324() == 0)) {
        play_effect_default__10TObjPlayerFii(temp_r3, -1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8034E420
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8034E440 { char pad[0x18]; };
struct VObj_8034E440 : Base_8034E440 {
    virtual void m0(int);
};

extern "C" {

void TNpcPlayer__sub_8034E420(void);
void TNpcPlayer__sub_8034E430(void);
void enable_all_battle_ctrl__10TNpcPlayerFv(void);
void *TPlayerBattleCtrl4P__sub_801BA74C(s32);

    extern int lbl_805D6EA0;
void TNpcPlayer__sub_8034E420(void) { lbl_805D6EA0 = (lbl_805D6EA0 & 0xfffffffd); }

    extern int lbl_805D6EA0;
void TNpcPlayer__sub_8034E430(void) { lbl_805D6EA0 = (lbl_805D6EA0 | 0x2); }

s32 obj_isState3_324();

void enable_all_battle_ctrl__10TNpcPlayerFv(void) {
    s32 var_r31;
    void *temp_r3;

    var_r31 = 0;
    do {
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(var_r31);
        if ((temp_r3 != NULL) && (obj_isState3_324() != 0) && (temp_r3 != NULL)) {
            ((VObj_8034E440*)temp_r3)->m0(1);
        }
        var_r31 += 1;
    } while (var_r31 < 4);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8034E708
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_to_players__10TNpcPlayerFiPvi(s32 arg0, void *arg1, s32 arg2);
M2C_UNK TObjPlayer__sub_801C5F54(s32, s32, f32, f32, f32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK TTecLuker__sub_801BAB1C(s32, s32);
u16 get_action_flags__10TNpcPlayerFPv(s32);

s32 obj_isState3_324();
s32 obj_getField1c(s32);

void apply_to_players__10TNpcPlayerFiPvi(s32 arg0, void *arg1, s32 arg2) {
    s32 var_r31;
    s32 temp_r3;

    var_r31 = 0;
    do {
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(var_r31);
        if ((temp_r3 != 0) && (obj_isState3_324() != 0) && ((u16) get_action_flags__10TNpcPlayerFPv(temp_r3) != 0xFFFF)) {
            TObjPlayer__sub_801C5F54(obj_getField1c(temp_r3), arg2, M2C_FIELD(arg1, f32 *, 0), M2C_FIELD(arg1, f32 *, 4), M2C_FIELD(arg1, f32 *, 8));
            TTecLuker__sub_801BAB1C(temp_r3, arg0);
        }
        var_r31 += 1;
    } while (var_r31 < 4);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8034EDB8
#include "types.h"

extern "C" {

void TNpcPlayer__sub_8034EDB8(void);

    extern int lbl_805D6EA0;
void TNpcPlayer__sub_8034EDB8(void) { lbl_805D6EA0 = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8034EE70
#include "types.h"

extern "C" {

s32 set_type__10TObjPlayerFPvi(s32, s32);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u32);
s32 init_photon_blast__10TObjPlayerFPvi(u32, s16);
int bswap_16__FPUs(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int TLobby__send_and_handle_60(void*);
s32 get_field_67c__10TNpcPlayerFPv(void* p);
void set_npc_ctrl_state__10TNpcPlayerFPvi(void* p, s32 v);
void set_npc_control_flag__10TNpcPlayerFPvs(void* p, s16 v);
void build_6x69_npc_control(void* p);

void update_player_field__10TNpcPlayerFUsi(u16 arg0, s32 arg1) {
    u32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(arg0);
    if (temp_r3 != 0U) {
        set_type__10TObjPlayerFPvi(temp_r3 + 0x644, arg1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8034EEE4
#include "types.h"

extern "C" {

s32 set_type__10TObjPlayerFPvi(s32, s32);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u32);
s32 init_photon_blast__10TObjPlayerFPvi(u32, s16);
int bswap_16__FPUs(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int TLobby__send_and_handle_60(void*);
s32 get_field_67c__10TNpcPlayerFPv(void* p);
void set_npc_ctrl_state__10TNpcPlayerFPvi(void* p, s32 v);
void set_npc_control_flag__10TNpcPlayerFPvs(void* p, s16 v);
void build_6x69_npc_control(void* p);

void apply_to_battle_player_slot__10TNpcPlayerFUss(u16 arg0, s16 arg1) {
    u32 temp_r3;

    if ((arg1 < 0x10) && ((temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(arg0)) != 0U)) {
        init_photon_blast__10TObjPlayerFPvi(temp_r3, arg1);
    }
}
s32 get_field_67c__10TNpcPlayerFPv(void* p) { return *(s32*)((char*)p + 0x67c); }
void set_npc_ctrl_state__10TNpcPlayerFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x67c) = v; }
void set_npc_control_flag__10TNpcPlayerFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x678) = v; }
void byteswap_header__10TNpcPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_16__FPUs((char*)p + 0x8); bswap_16__FPUs((char*)p + 0xa); }
void send_state_60__10TNpcPlayerFPv(void* p) { byteswap_header__10TNpcPlayerFPv(p); TLobby__send_and_handle_60(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80152988
#include "types.h"

extern "C" {

void TNpcPlayer__sub_80152988(void* p, void* a1, void* a2);
s32 TNpcPlayer__sub_801528DC(void* p);
s32 TNpcPlayer__sub_80152978(void* p);
void TNpcPlayer__sub_80152A30(void);
int TNpcPlayer__sub_80152A78(void* a0 = 0);
int TNpcPlayer__sub_80152ACC(void*);
int TNpcPlayer__sub_80152B5C(void*);
int TNpcPlayer__sub_80152BEC(void*);
void TNpcPlayer__sub_80152D64(void* p);
int TObjPlayer__sub_80102CE0(void*);
int copy_transform__10TNpcPlayerFPvPv(void* a0 = 0);
s32 get_action_state__10TNpcPlayerFPv(void* p);
s32 get_condition__10TNpcPlayerFPv(void* p);
s32 get_npc_state__10TNpcPlayerFPv(void* p);
u16 get_npc_type__10TNpcPlayerFPv(void* p);
void* init__10TNpcPlayerFPv(void* p);
void init_model__10TNpcPlayerFPv(void* p);
int read_be16_field2__10TObjPlayerFPv(void*);
void reset_fields_8c__10TNpcPlayerFPv(void* p);
void reset_model__10TNpcPlayerFPv(void* p);
void update__10TNpcPlayerFPv(void* p);
void update_lobby__10TNpcPlayerFPv(void* p);
void update_players__10TNpcPlayerFPv(void* p);
int update_players__6TLobbyFi(void*);

void TNpcPlayer__sub_80152988(void* p, void* a1, void* a2) { copy_transform__10TNpcPlayerFPvPv(a2); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80152ACC
#include "types.h"

extern "C" {

int bswap_16__FPUs(void* a0 = 0);
int read_be16_field2__10TObjPlayerFPv(void* a0 = 0);
void TNpcPlayer__sub_80152ACC(void* p);
void init_model__10TNpcPlayerFPv(void* p);
int TObjPlayer__sub_80102CE0(void*);
void update__10TNpcPlayerFPv(void* p);
int update_players__6TLobbyFi(void*);
void update_players__10TNpcPlayerFPv(void* p);
int TNpcPlayer__sub_80152B5C(void*);
void update_lobby__10TNpcPlayerFPv(void* p);
int TNpcPlayer__sub_80152BEC(void*);
void reset_model__10TNpcPlayerFPv(void* p);
int TNpcPlayer__sub_80152A78(void* a0 = 0);
void* init__10TNpcPlayerFPv(void* p);
s32 TNpcPlayer__sub_801528DC(void* p);
s32 get_npc_state__10TNpcPlayerFPv(void* p);
u16 get_npc_type__10TNpcPlayerFPv(void* p);
s32 TNpcPlayer__sub_80152978(void* p);
s32 get_condition__10TNpcPlayerFPv(void* p);
void copy_transform__10TNpcPlayerFPvPv(void* p, void* q);
s32 get_action_state__10TNpcPlayerFPv(void* p);
void reset_fields_8c__10TNpcPlayerFPv(void* p);
void TNpcPlayer__sub_80152A30(void);
void TNpcPlayer__sub_80152D64(void* p);

void TNpcPlayer__sub_80152ACC(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80152B5C
#include "types.h"

extern "C" {

int bswap_16__FPUs(void* a0 = 0);
int read_be16_field2__10TObjPlayerFPv(void* a0 = 0);
void TNpcPlayer__sub_80152B5C(void* p);
void init_model__10TNpcPlayerFPv(void* p);
int TObjPlayer__sub_80102CE0(void*);
void update__10TNpcPlayerFPv(void* p);
int update_players__6TLobbyFi(void*);
int TNpcPlayer__sub_80152ACC(void*);
void update_players__10TNpcPlayerFPv(void* p);
void update_lobby__10TNpcPlayerFPv(void* p);
int TNpcPlayer__sub_80152BEC(void*);
void reset_model__10TNpcPlayerFPv(void* p);
int TNpcPlayer__sub_80152A78(void* a0 = 0);
void* init__10TNpcPlayerFPv(void* p);
s32 TNpcPlayer__sub_801528DC(void* p);
s32 get_npc_state__10TNpcPlayerFPv(void* p);
u16 get_npc_type__10TNpcPlayerFPv(void* p);
s32 TNpcPlayer__sub_80152978(void* p);
s32 get_condition__10TNpcPlayerFPv(void* p);
void copy_transform__10TNpcPlayerFPvPv(void* p, void* q);
s32 get_action_state__10TNpcPlayerFPv(void* p);
void reset_fields_8c__10TNpcPlayerFPv(void* p);
void TNpcPlayer__sub_80152A30(void);
void TNpcPlayer__sub_80152D64(void* p);

void TNpcPlayer__sub_80152B5C(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80152BEC
#include "types.h"

extern "C" {

int bswap_16__FPUs(void* a0 = 0);
int read_be16_field2__10TObjPlayerFPv(void* a0 = 0);
void TNpcPlayer__sub_80152BEC(void* p);
void init_model__10TNpcPlayerFPv(void* p);
int TObjPlayer__sub_80102CE0(void*);
void update__10TNpcPlayerFPv(void* p);
int update_players__6TLobbyFi(void*);
int TNpcPlayer__sub_80152ACC(void*);
void update_players__10TNpcPlayerFPv(void* p);
int TNpcPlayer__sub_80152B5C(void*);
void update_lobby__10TNpcPlayerFPv(void* p);
void reset_model__10TNpcPlayerFPv(void* p);
int TNpcPlayer__sub_80152A78(void* a0 = 0);
void* init__10TNpcPlayerFPv(void* p);
s32 TNpcPlayer__sub_801528DC(void* p);
s32 get_npc_state__10TNpcPlayerFPv(void* p);
u16 get_npc_type__10TNpcPlayerFPv(void* p);
s32 TNpcPlayer__sub_80152978(void* p);
s32 get_condition__10TNpcPlayerFPv(void* p);
void copy_transform__10TNpcPlayerFPvPv(void* p, void* q);
s32 get_action_state__10TNpcPlayerFPv(void* p);
void reset_fields_8c__10TNpcPlayerFPv(void* p);
void TNpcPlayer__sub_80152A30(void);
void TNpcPlayer__sub_80152D64(void* p);

void TNpcPlayer__sub_80152BEC(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }

}
#endif
#endif
