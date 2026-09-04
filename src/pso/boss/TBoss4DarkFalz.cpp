#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_visible_flag__14TBoss4DarkFalzFPv(void *arg0);

s32 TLobby__sub_800C6C10();

void update_visible_flag__14TBoss4DarkFalzFPv(void *arg0) {
    if (TLobby__sub_800C6C10() != 0) {
        M2C_FIELD(arg0, s32 *, 0x378) = 0;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x378) = 1;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8004ADA8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 is_state_ready__14TBoss4DarkFalzFv(void);
u8 is_active__14TBoss4DarkFalzFv(void);
u32 TBoss4DarkFalz__sub_8004C1B4();
u32 get_instance__14TBoss4DarkFalzFv();
s32 get_phase__14TBoss4DarkFalzFPv();
s32 get_state__14TBoss4DarkFalzFPv();

u8 is_state_ready__14TBoss4DarkFalzFv(void) {
    int var_r31;

    var_r31 = 0;
    if (TBoss4DarkFalz__sub_8004C1B4() != 0U) {
        TBoss4DarkFalz__sub_8004C1B4();
        if (get_phase__14TBoss4DarkFalzFPv() != 3) {
            TBoss4DarkFalz__sub_8004C1B4();
            if (get_phase__14TBoss4DarkFalzFPv() != 2) {
                var_r31 = 1;
            }
        }
    }
    return (u8) var_r31;
}

u8 is_active__14TBoss4DarkFalzFv(void) {
    int var_r31;

    var_r31 = 0;
    if (get_instance__14TBoss4DarkFalzFv() != 0U) {
        get_instance__14TBoss4DarkFalzFv();
        if (get_state__14TBoss4DarkFalzFPv() != 3) {
            get_instance__14TBoss4DarkFalzFv();
            if (get_state__14TBoss4DarkFalzFPv() != 4) {
                var_r31 = 1;
            }
        }
    }
    return (u8) var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8004AFB8
#include "types.h"

extern "C" {

void TBoss4DarkFalz__sub_8004AFB8(void* p);

void TBoss4DarkFalz__sub_8004AFB8(void* p) { *(s32*)((char*)p + 0x384) = 1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8004B034
#include "types.h"

extern "C" {

u8 is_ending_or_split_screen__14TBoss4DarkFalzFv(void);
int TBoss4DarkFalz__sub_8004B07C(void);
s32 get_main_phase();
s32 is_split_screen();

u8 is_ending_or_split_screen__14TBoss4DarkFalzFv(void) {
    int var_r31;

    var_r31 = 0;
    if ((get_main_phase() == 0xF) || (is_split_screen() != 0)) {
        var_r31 = 1;
    }
    return (u8)var_r31;
}
int TBoss4DarkFalz__sub_8004B07C(void) { return 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8004B334
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 calc_rate_from_field__14TBoss4DarkFalzFPv(void *arg0);
s32 is_timer_expired__14TBoss4DarkFalzFPv(void *arg0);
void *dispatch_shared_handler_a__6TLobbyFPv(M2C_UNK);

s32 calc_rate_from_field__14TBoss4DarkFalzFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0x390);
    if (temp_r3 > 0) {
        return 0x10000 / temp_r3;
    }
    return 0;
}

s32 is_timer_expired__14TBoss4DarkFalzFPv(void *arg0) {
    s32 var_r4;

    var_r4 = M2C_FIELD(dispatch_shared_handler_a__6TLobbyFPv(0x35), s32 *, 0x18);
    if ((var_r4 < 1) || (var_r4 > 0x13)) {
        var_r4 = 2;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x38C) >= (s32) (var_r4 * M2C_FIELD(arg0, s32 *, 0x390))) {
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8004BBC4
#include "types.h"

extern "C" {

void render__14TBoss4DarkFalzFv(void);
void TBoss4DarkFalz__vt61(void);

void render__14TBoss4DarkFalzFv(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8004BC4C
#include "types.h"

extern "C" {

void render__14TBoss4DarkFalzFv(void);
void TBoss4DarkFalz__vt61(void);

void TBoss4DarkFalz__vt61(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8004C09C
#include "types.h"

extern "C" {

void cleanup_global__14TBoss4DarkFalzFv(void);
int TLobby__sub_8001FE7C(void*, void*);
int free_global_instance__14TBoss4DarkFalzFv(void);
int TBoss4DarkFalz__sub_8030AD38(void);

    extern int lbl_805D4D58;
void cleanup_global__14TBoss4DarkFalzFv(void) { free_global_instance__14TBoss4DarkFalzFv(); TBoss4DarkFalz__sub_8030AD38(); TLobby__sub_8001FE7C((void*)(lbl_805D4D58), (void*)1); lbl_805D4D58 = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8004C134
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create__14TBoss4DarkFalzFi(s32 arg0);
s32 TBoss4DarkFalz__ct(s32, s32, s32);
s32 TObjControl__ct(s32, s32);
s32 __nw__7TObjectFUl(M2C_UNK);

extern s32 tl_04;

s32 create__14TBoss4DarkFalzFi(s32 arg0) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x3AC);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TBoss4DarkFalz__ct(var_r31, var_r4, arg0);
    }
    return var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8004C1AC
#include "types.h"

extern "C" {

int TBoss4DarkFalz__sub_8004C1AC(void);

    extern int TBoss4DarkFalz__data_805D4D64;
int TBoss4DarkFalz__sub_8004C1AC(void) {  return TBoss4DarkFalz__data_805D4D64; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8004C1B4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TBoss4DarkFalz__sub_8004C1B4(void);
s32 get_instance__14TBoss4DarkFalzFv(void);

extern s32 TBoss4DarkFalz__data_805D4D60;

s32 TBoss4DarkFalz__sub_8004C1B4(void) {
    return TBoss4DarkFalz__data_805D4D60;
}

extern s32 TBoss4DarkFalz__data_805D4D5C;

s32 get_instance__14TBoss4DarkFalzFv(void) {
    return TBoss4DarkFalz__data_805D4D5C;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8004C1C4
#include "types.h"

extern "C" {

void swap_bytes__14TBoss4DarkFalzFPv(void* p);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
void swap_and_send__14TBoss4DarkFalzFPv(void* p);
int TLobby__send_and_handle_60(void*);
int is_field378_zero__14TBoss4DarkFalzFPv(void* p);
s32 get_action_state__14TBoss4DarkFalzFPv(void* p);
s32 get_phase__14TBoss4DarkFalzFPv(void* p);
s32 get_state__14TBoss4DarkFalzFPv(void* p);
void* get_hit_data__14TBoss4DarkFalzFPv(void* p);
int TBoss4DarkFalz__sub_8004C220(void* p);
void set_code_25_4__14TBoss4DarkFalzFPv(void* p);
int VecCopy__FP3VecPC3Vec(void*, void* a1 = 0);

int is_field378_zero__14TBoss4DarkFalzFPv(void* p) { return *(u32*)((char*)p + 0x378) == 0; }
s32 get_action_state__14TBoss4DarkFalzFPv(void* p) { return *(s32*)((char*)p + 0x374); }
s32 get_phase__14TBoss4DarkFalzFPv(void* p) { return *(s32*)((char*)p + 0x374); }
s32 get_state__14TBoss4DarkFalzFPv(void* p) { return *(s32*)((char*)p + 0x374); }
void* get_hit_data__14TBoss4DarkFalzFPv(void* p) { return (char*)p + 0x5c; }
void save_position__14TBoss4DarkFalzFi(s32 arg0) {
    VecCopy__FP3VecPC3Vec((void*)(arg0 + 0x44), (void*)(arg0 + 0x38));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8004C244
#include "types.h"

extern "C" {

void swap_bytes__14TBoss4DarkFalzFPv(void* p);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
void swap_and_send__14TBoss4DarkFalzFPv(void* p);
int TLobby__send_and_handle_60(void*);
int is_field378_zero__14TBoss4DarkFalzFPv(void* p);
s32 get_action_state__14TBoss4DarkFalzFPv(void* p);
s32 get_phase__14TBoss4DarkFalzFPv(void* p);
s32 get_state__14TBoss4DarkFalzFPv(void* p);
void* get_hit_data__14TBoss4DarkFalzFPv(void* p);
int TBoss4DarkFalz__sub_8004C220(void* p);
void set_code_25_4__14TBoss4DarkFalzFPv(void* p);
int VecCopy__FP3VecPC3Vec(void*, void* a1 = 0);

void swap_and_send__14TBoss4DarkFalzFPv(void* p) { swap_bytes__14TBoss4DarkFalzFPv(p); TLobby__send_and_handle_60(p); }
void swap_bytes__14TBoss4DarkFalzFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); }
void set_code_25_4__14TBoss4DarkFalzFPv(void* p) { *(u8*)((char*)p + 0x0) = 25; *(u8*)((char*)p + 0x1) = 4; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8004C378
#include "types.h"

extern "C" {

void set_state__14TBoss4DarkFalzFPv(void* p);
int TBoss4DarkFalz__sub_8004BA70(void*);
int create__16TObjOnlineEndingFPv(void*);

void set_state__14TBoss4DarkFalzFPv(void* p) { TBoss4DarkFalz__sub_8004BA70(p); create__16TObjOnlineEndingFPv(p); *(int*)((char*)p + 0x380) = 454; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8004C474
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void begin_defeat_sequence__14TBoss4DarkFalzFPv(u8 *arg0);
M2C_UNK TBoss4DarkFalz__sub_8004BA70();
M2C_UNK TBoss4DarkFalz__sub_8004D8C8(void *, void *, void *, void *);
M2C_UNK create__11TObjDFDemo5FPvPvPv(void *, void *, s32);
M2C_UNK dispatch_by_main_phase__14TBoss4DarkFalzFUs(M2C_UNK);
M2C_UNK TLobby__sub_8022743C();
M2C_UNK check_ready__12TBoss4ThanksFv();
M2C_UNK queue_destruction__7TObjectFv(void *);

M2C_UNK obj_setArrS16_FC(void *, s32, u16);
extern M2C_UNK lbl_80485454[];
extern u8 *TBoss4DarkFalz__data_805D4D64;

void begin_defeat_sequence__14TBoss4DarkFalzFPv(u8 *arg0) {
    u16 sp8[4];
    s32 var_r29;

    TBoss4DarkFalz__sub_8004BA70();
    TLobby__sub_8022743C();
    dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x37);
    check_ready__12TBoss4ThanksFv();
    if ((void *) TBoss4DarkFalz__data_805D4D64 != NULL) {
        create__11TObjDFDemo5FPvPvPv(arg0, TBoss4DarkFalz__data_805D4D64 + 0x38, M2C_FIELD(TBoss4DarkFalz__data_805D4D64, s32 *, 0x60));
    } else {
        create__11TObjDFDemo5FPvPvPv(arg0, lbl_80485454, 0);
    }
    if ((void *) TBoss4DarkFalz__data_805D4D64 != NULL) {
        TBoss4DarkFalz__sub_8004D8C8(TBoss4DarkFalz__data_805D4D64, arg0 + 0x2D6, arg0 + 0x2D4, sp8);
        queue_destruction__7TObjectFv(TBoss4DarkFalz__data_805D4D64);
        TBoss4DarkFalz__data_805D4D64 = NULL;
        var_r29 = 0;
        do {
            obj_setArrS16_FC(arg0, var_r29, sp8[var_r29]);
            var_r29 += 1;
        } while (var_r29 < 4);
    }
    M2C_FIELD(arg0, s32 *, 0x380) = 0x12E;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8004C540
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss4DarkFalz__sub_8004C540(void);
void request_action_e__14TBoss4DarkFalzFi(s32 arg0);
void start_phase__14TBoss4DarkFalzFPv(void* p);
s32 TBoss4DarkFalz__sub_8004B07C(s32);
M2C_UNK TBoss4DarkFalz__sub_8004B1BC(s32, M2C_UNK);
int TBoss4DarkFalz__sub_8004B77C(void*);
int TBoss4DarkFalz__sub_8004BA18(void*);
s32 get_action_state__14TBoss4DarkFalzFPv(u32);

void TBoss4DarkFalz__sub_8004C540(void) {  }

extern u32 TBoss4DarkFalz__data_805D4D64;

void request_action_e__14TBoss4DarkFalzFi(s32 arg0) {
    if (((u32) TBoss4DarkFalz__data_805D4D64 == 0U) || (get_action_state__14TBoss4DarkFalzFPv(TBoss4DarkFalz__data_805D4D64) == 3) || (get_action_state__14TBoss4DarkFalzFPv(TBoss4DarkFalz__data_805D4D64) == 2) || (TBoss4DarkFalz__sub_8004B07C(arg0) != 0)) {
        TBoss4DarkFalz__sub_8004B1BC(arg0, 0xE);
    }
}

void start_phase__14TBoss4DarkFalzFPv(void* p) { TBoss4DarkFalz__sub_8004BA18(p); TBoss4DarkFalz__sub_8004B77C(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8004C6BC
#include "types.h"

extern "C" {

void enter_state_126__14TBoss4DarkFalzFPv(void* a0);
int TBoss4DarkFalz__sub_8004B7DC(void);
int TBoss4DarkFalz__sub_8004AB90(void*, void*);

    extern int lbl_805D4D68;
void enter_state_126__14TBoss4DarkFalzFPv(void* a0) { *(int*)((char*)a0 + 0x380) = 126; lbl_805D4D68 = 2; TBoss4DarkFalz__sub_8004B7DC(); TBoss4DarkFalz__sub_8004AB90(a0, (void*)2); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8004C798
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void init_state__14TBoss4DarkFalzFPv(void *arg0);
void TBoss4DarkFalz__sub_8004BA70(void *);
void create__11TObjDFDemo4FPvPvPv(void *, void *, void *);
void TObjBgmColCtrl__sub_802274B8(void *);

extern M2C_UNK lbl_80437298[];

void init_state__14TBoss4DarkFalzFPv(void *arg0) {
    TBoss4DarkFalz__sub_8004BA70(arg0);
    create__11TObjDFDemo4FPvPvPv(arg0, (void *)((char *)arg0 + 924), M2C_FIELD(arg0, void **, 0x3A8));
    TObjBgmColCtrl__sub_802274B8(lbl_80437298);
    M2C_FIELD(arg0, u32 *, 0x380) = 114;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8004C8A8
#include "types.h"

extern "C" {

void TBoss4DarkFalz__sub_8004C8A8(void);
void enter_state_142__14TBoss4DarkFalzFPv(void* p);
int TBoss4DarkFalz__sub_8004BA70(void*);
int create__11TObjDFDemo3FPvPvPv(void*, void*, void*);

void TBoss4DarkFalz__sub_8004C8A8(void) {  }
void enter_state_142__14TBoss4DarkFalzFPv(void* p) { TBoss4DarkFalz__sub_8004BA70(p); create__11TObjDFDemo3FPvPvPv(p, (char*)p + 0x39c, *(void**)((char*)p + 0x3a8)); *(int*)((char*)p + 0x380) = 142; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8004C8F0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_timer__14TBoss4DarkFalzFPv(void *arg0);
void TBoss4DarkFalz__sub_8004B20C(void*, M2C_UNK);

extern s32 lbl_805D5550;

void update_timer__14TBoss4DarkFalzFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x380) - 1;
    M2C_FIELD(arg0, s32 *, 0x380) = temp_r0;
    if (temp_r0 < 0) {
        if ((s32) lbl_805D5550 == 0) {
            TBoss4DarkFalz__sub_8004B20C(arg0, 0xA);
            return;
        }
        TBoss4DarkFalz__sub_8004B20C(arg0, 0xB);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8004C93C
#include "types.h"

extern "C" {

void TBoss4DarkFalz__sub_8004C93C(void);

void TBoss4DarkFalz__sub_8004C93C(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8004CA80
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss4DarkFalz__sub_8004CA80(void);
void request_action_9__14TBoss4DarkFalzFi(s32 arg0);
void update_parts__14TBoss4DarkFalzFPv(void* p);
s32 TBoss4DarkFalz__sub_8004B07C(s32);
M2C_UNK TBoss4DarkFalz__sub_8004B1BC(s32, M2C_UNK);
int TBoss4DarkFalz__sub_8004B77C(void*);
int TBoss4DarkFalz__sub_8004BA18(void*);
s32 get_phase__14TBoss4DarkFalzFPv(u32);

void TBoss4DarkFalz__sub_8004CA80(void) {  }

extern u32 TBoss4DarkFalz__data_805D4D60;

void request_action_9__14TBoss4DarkFalzFi(s32 arg0) {
    if (((u32) TBoss4DarkFalz__data_805D4D60 == 0U) || (get_phase__14TBoss4DarkFalzFPv(TBoss4DarkFalz__data_805D4D60) == 3) || (get_phase__14TBoss4DarkFalzFPv(TBoss4DarkFalz__data_805D4D60) == 2) || (TBoss4DarkFalz__sub_8004B07C(arg0) != 0)) {
        TBoss4DarkFalz__sub_8004B1BC(arg0, 9);
    }
}

void update_parts__14TBoss4DarkFalzFPv(void* p) { TBoss4DarkFalz__sub_8004BA18(p); TBoss4DarkFalz__sub_8004B77C(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8004CBBC
#include "types.h"

extern "C" {

void TBoss4DarkFalz__sub_8004CBBC(void);

void TBoss4DarkFalz__sub_8004CBBC(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8004CC48
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void spawn_ancient_trap__14TBoss4DarkFalzFi(s32 arg0);
void request_action_7__14TBoss4DarkFalzFi(s32 arg0);
s32 TBoss4DarkFalz__sub_8004B07C(s32);
M2C_UNK TBoss4DarkFalz__sub_8004B1BC(s32, M2C_UNK);
s32 get_state__14TBoss4DarkFalzFPv(u32);
M2C_UNK TOTrapAncient01__sub_80226578(M2C_UNK, s32, M2C_UNK, M2C_UNK, M2C_UNK);
s32 TBoss4DarkFalz__sub_8004D990();

void spawn_ancient_trap__14TBoss4DarkFalzFi(s32 arg0) {
    if (TBoss4DarkFalz__sub_8004D990() > 0) {
        TOTrapAncient01__sub_80226578(0x4003A30A, arg0, 0, -0x20, 2);
    }
}

extern u32 TBoss4DarkFalz__data_805D4D5C;

void request_action_7__14TBoss4DarkFalzFi(s32 arg0) {
    if (((u32) TBoss4DarkFalz__data_805D4D5C == 0U) || (get_state__14TBoss4DarkFalzFPv(TBoss4DarkFalz__data_805D4D5C) == 3) || (get_state__14TBoss4DarkFalzFPv(TBoss4DarkFalz__data_805D4D5C) == 4) || (TBoss4DarkFalz__sub_8004B07C(arg0) != 0)) {
        TBoss4DarkFalz__sub_8004B1BC(arg0, 7);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8004CE90
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss4DarkFalz__sub_8004CE90(void);
void start_effect__14TBoss4DarkFalzFPv(void *arg0);
void spawn_trap__14TBoss4DarkFalzFi(s32 arg0);
void check_timeout__14TBoss4DarkFalzFi(s32 arg0);
void update_parts__14TBoss4DarkFalzFi(s32 arg0);
s32 TBoss4DarkFalz__sub_8004B07C(s32);
s32 TBoss4DarkFalz__sub_8004B1BC(s32, s32);
s32 TBoss4DarkFalz__sub_8004B3BC(s32);
s32 TBoss4DarkFalz__sub_8004B77C(s32);
s32 TBoss4DarkFalz__sub_8004BA18(s32);
s32 TBoss4DarkFalz__sub_8004BA70();
s32 TOTrapAncient01__sub_80226578(s32, s32, s32, s32, s32);
s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
s32 TLobby__sub_8022743C();
s32 is_timer_expired__14TBoss4DarkFalzFPv();

void TBoss4DarkFalz__sub_8004CE90(void) {  }
void start_effect__14TBoss4DarkFalzFPv(void *arg0) {
    TBoss4DarkFalz__sub_8004BA70();
    TLobby__sub_8022743C();
    TBoss3Volopt__sub_8022675C(0x4003A80B, 0, 0, 0);
    M2C_FIELD(arg0, s32 *, 0x380) = 0;
}
void spawn_trap__14TBoss4DarkFalzFi(s32 arg0) {
    TOTrapAncient01__sub_80226578(0x4003A30A, arg0, 0, -0x18, 2);
}
void check_timeout__14TBoss4DarkFalzFi(s32 arg0) {
    if ((is_timer_expired__14TBoss4DarkFalzFPv() != 0) || (TBoss4DarkFalz__sub_8004B07C(arg0) != 0)) {
        TBoss4DarkFalz__sub_8004B1BC(arg0, 5);
    }
}
void update_parts__14TBoss4DarkFalzFi(s32 arg0) {
    TBoss3Volopt__sub_8022675C(0x4003AD0C, 0, 0, 0);
    TBoss4DarkFalz__sub_8004BA18(arg0);
    TBoss4DarkFalz__sub_8004B77C(arg0);
    TBoss4DarkFalz__sub_8004B3BC(arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8004D050
#include "types.h"

extern "C" {

void init_timer__14TBoss4DarkFalzFPv(void* a0);
int TBoss4DarkFalz__sub_8004B77C(void*);
int create__14TObjDFUsoTowerFPv(void);

    extern int lbl_805D4D68;
void init_timer__14TBoss4DarkFalzFPv(void* a0) { *(int*)((char*)a0 + 0x380) = 30; lbl_805D4D68 = 1; *(int*)((char*)a0 + 0x394) = create__14TObjDFUsoTowerFPv(); TBoss4DarkFalz__sub_8004B77C(a0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8004D184
#include "types.h"

extern "C" {

void start_demo__14TBoss4DarkFalzFPv(void* p);
int TBoss4DarkFalz__sub_8004AB90(void*, void*);
int TBoss4DarkFalz__sub_8004B8F8(void*);
int TBoss4DarkFalz__sub_8004BA70(void*);
int TLobby__sub_80227220(void*);
int create__11TObjDFDemoFFPv(void*);
int fn_8036A514(void*);

void start_demo__14TBoss4DarkFalzFPv(void* p) { TBoss4DarkFalz__sub_8004B8F8(p); TBoss4DarkFalz__sub_8004AB90(p, (void*)1); TBoss4DarkFalz__sub_8004BA70(p); create__11TObjDFDemoFFPv(p); TLobby__sub_80227220((void*)1); fn_8036A514((void*)23); *(int*)((char*)p + 0x380) = 120; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8004D29C
#include "types.h"

extern "C" {

void TBoss4DarkFalz__sub_8004D29C(void* p);
int TBoss4DarkFalz__sub_8004B20C(void*, void*);
int check_demo_mode__10TObjPlayerFv(void*);

void TBoss4DarkFalz__sub_8004D29C(void* p) { if (check_demo_mode__10TObjPlayerFv(p) == 0) { TBoss4DarkFalz__sub_8004B20C(p, (void*)1); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8004D9A0
#include "types.h"

extern "C" {

void TBoss4DarkFalz__sub_8004D9A0(void* p, s32 v);

void TBoss4DarkFalz__sub_8004D9A0(void* p, s32 v) { *(s32*)((char*)p + 0x90) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8004E8C0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * create_demo1__14TBoss4DarkFalzFPvPvPv(void *arg0, void *arg1, void *arg2);
void *TObjDFDemo1__ct(void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

void * create_demo1__14TBoss4DarkFalzFPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x130);
    if (o != NULL) {
        o = TObjDFDemo1__ct(o, arg0, arg1, arg2);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8004ECC8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * create_demo2__14TBoss4DarkFalzFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void *TObjDFDemo2__ct(void *, void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

void * create_demo2__14TBoss4DarkFalzFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0xC4);
    if (o != NULL) {
        o = TObjDFDemo2__ct(o, arg0, arg1, arg2, arg3);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D94B8
#include "types.h"

extern "C" {

int get_instance_count__14TBoss4DarkFalzFv(void);

    extern int lbl_805D4D68;
int get_instance_count__14TBoss4DarkFalzFv(void) {  return lbl_805D4D68; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D94C0
#include "types.h"

extern "C" {

s32 TBoss4DarkFalz__sub_801D94C0(void* p);

s32 TBoss4DarkFalz__sub_801D94C0(void* p) { return *(s32*)((char*)p + 0x14); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F4830
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void dispatch_by_main_phase__14TBoss4DarkFalzFUs(u16 arg0);
M2C_UNK TLobby__sub_801F37CC(int, M2C_UNK);
M2C_UNK fn_801F4790(u16);
s32 get_main_phase();

void dispatch_by_main_phase__14TBoss4DarkFalzFUs(u16 arg0) {
    if (get_main_phase() == 0xF) {
        TLobby__sub_801F37CC(arg0, 0);
        return;
    }
    fn_801F4790(arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802E5274
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_global_instance__14TBoss4DarkFalzFv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 lbl_805D68F4;

void free_global_instance__14TBoss4DarkFalzFv(void) {
    if ((u32) lbl_805D68F4 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D68F4, 1);
        lbl_805D68F4 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8030AD38
#include "types.h"

extern "C" {

int TBoss4DarkFalz__sub_8030AD38(void* p);
int TBoss4DarkFalz__sub_8030AD08(void*);

int TBoss4DarkFalz__sub_8030AD38(void* p) { return TBoss4DarkFalz__sub_8030AD08(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8030AD58
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_uro_link__14TBoss4DarkFalzFv(void);
M2C_UNK TBoss4DarkFalz__sub_8030AD08();
M2C_UNK get_instance_count__9TBoss4UroFv();
s32 TObjFish__sub_8001EDB0(M2C_UNK, M2C_UNK);
void *TObjFish__sub_8001EDC4(M2C_UNK, M2C_UNK);

extern s32 lbl_805D6A68;
extern u32 lbl_805D6A6C;
extern s32 lbl_805D6A74;

void init_uro_link__14TBoss4DarkFalzFv(void) {
    u32 temp_r3_2;
    void *temp_r3;

    lbl_805D6A68 = TObjFish__sub_8001EDB0(get_instance_count__9TBoss4UroFv(), 8);
    temp_r3 = M2C_FIELD(TObjFish__sub_8001EDC4(get_instance_count__9TBoss4UroFv(), 8), void **, 0x2C);
    M2C_FIELD(temp_r3, s32 *, 0) = (s32) (M2C_FIELD(temp_r3, s32 *, 0) & 0xFFFFFFFD);
    temp_r3_2 = M2C_FIELD(temp_r3, u32 *, 4);
    if (temp_r3_2 != 0U) {
        lbl_805D6A6C = temp_r3_2;
        lbl_805D6A74 = 0;
        TBoss4DarkFalz__sub_8030AD08();
    }
}

}
#endif
#endif
