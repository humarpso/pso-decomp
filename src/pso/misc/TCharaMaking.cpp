#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void clear_flag_bit0__12TCharaMakingFv(void);
void enable_making__12TCharaMakingFv(void);
int TObjPlayer__sub_801417E8(void);
int TObjPlayer__sub_80141820(void*);

    extern int some_id_805c6f74;
void clear_flag_bit0__12TCharaMakingFv(void) { TObjPlayer__sub_801417E8(); some_id_805c6f74 = (some_id_805c6f74 & 0xfffffffe); }

    extern int some_id_805c6f74;
void enable_making__12TCharaMakingFv(void) { some_id_805c6f74 = (some_id_805c6f74 | 0x1); TObjPlayer__sub_80141820((void*)31); }

}
#else
#if PSO_CLASS_PACKAGE == 0x8028DC40
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 query_state__12TCharaMakingFv(void);
s32 TObjCMMainMenu__sub_8028EBCC(void*);

extern u32 lbl_805D6524;

s32 query_state__12TCharaMakingFv(void) {
    if ((u32) lbl_805D6524 == 0U) {
        return -1;
    }
    return TObjCMMainMenu__sub_8028EBCC((void*)lbl_805D6524);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8028DE50
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void setup_from_data__12TCharaMakingFii(M2C_UNK arg0, M2C_UNK arg1);
M2C_UNK TCharaMaking__sub_8028DD18(M2C_UNK, M2C_UNK, f32, M2C_UNK);

extern const f32 TCharaMaking__data_805DD92C;

void setup_from_data__12TCharaMakingFii(M2C_UNK arg0, M2C_UNK arg1) {
    TCharaMaking__sub_8028DD18(arg0, arg1, TCharaMaking__data_805DD92C, 0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8028DEA0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_loaded_buffers__12TCharaMakingFPv(u8 *arg0);
M2C_UNK TLobby__sub_803DA16C(void *);

void free_loaded_buffers__12TCharaMakingFPv(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x8B8) != 0) {
        if (!(M2C_FIELD(arg0, s32 *, 0xCFC) & 1)) {
            TLobby__sub_803DA16C(arg0 + 0xA1C);
        }
        M2C_FIELD(arg0, s32 *, 0x8B8) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xA24) != 0) {
        if (!(M2C_FIELD(arg0, s32 *, 0xCFC) & 2)) {
            TLobby__sub_803DA16C(arg0 + 0xB88);
        }
        M2C_FIELD(arg0, s32 *, 0xA24) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xB90) != 0) {
        if (!(M2C_FIELD(arg0, s32 *, 0xCFC) & 4)) {
            TLobby__sub_803DA16C(arg0 + 0xCF4);
        }
        M2C_FIELD(arg0, s32 *, 0xB90) = 0;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8028DF40
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_body_parts__12TCharaMakingFPv(u8 *arg0);
f32 TCharaMaking__sub_8028DCCC(void *);
M2C_UNK TCharaMaking__sub_8028DF98(void *);
M2C_UNK TCharaMaking__sub_8028E2B8(void *, void *, void *, void *);
M2C_UNK create__12TChCrLoadReqFPv(void *);

void update_body_parts__12TCharaMakingFPv(u8 *arg0) {
    TCharaMaking__sub_8028DF98(arg0 + 0x85C);
    M2C_FIELD(arg0, f32 *, 0xD48) = TCharaMaking__sub_8028DCCC(arg0 + 0x85C);
    TCharaMaking__sub_8028E2B8(arg0 + 0x8B8, arg0 + 0xA24, arg0 + 0xB90, arg0 + 0x85C);
    create__12TChCrLoadReqFPv(arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8028E3F4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_end__12TCharaMakingFv(void);
s32 get_display_index__12TCharaMakingFPv(void *arg0);
s32 TCameraCtrl__sub_8006B368();
s32 get_main_phase();

s32 is_end__12TCharaMakingFv(void) {
    if ((get_main_phase() == 0xF) || (TCameraCtrl__sub_8006B368() != 0)) {
        return 1;
    }
    return 0;
}

s32 get_display_index__12TCharaMakingFPv(void *arg0) {
    s8 temp;

    if (!(M2C_FIELD(arg0, s8 *, 0x32) & 0xA)) {
        return M2C_FIELD(arg0, s8 *, 0x31);
    }
    if ((M2C_FIELD(arg0, s8 *, 0x33) <= 0) ||
        ((temp = M2C_FIELD(arg0, s8 *, 0x1C)) < 0) ||
        (temp >= 7)) {
        return M2C_FIELD(arg0, s8 *, 0x31);
    }
    if (is_end__12TCharaMakingFv() != 0) {
        return 0x12 - M2C_FIELD(arg0, s8 *, 0x1C);
    }
    return M2C_FIELD(arg0, s8 *, 0x31);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8028E790
#include "types.h"

extern "C" {

void TCharaMaking__sub_8028E790(void);

void TCharaMaking__sub_8028E790(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8028E820
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 update_main_menu__12TCharaMakingFi(s32 arg0);
s32 is_state_4__14TObjCMMainMenuFv(s32);
s32 is_state_3__14TObjCMMainMenuFv(s32);
M2C_UNK fn_8028D8F4();
M2C_UNK fn_80291268();
M2C_UNK create__15TChCrCharSelectFPv(s32);
M2C_UNK create__9TSaveChCrFPv(M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(s32);

extern s32 tl_03;
extern s32 lbl_805D6524;
extern s32 lbl_805D652C;

s32 update_main_menu__12TCharaMakingFi(s32 arg0) {
    M2C_UNK var_r3;

    if (is_state_3__14TObjCMMainMenuFv(lbl_805D6524) != 0) {
        fn_8028D8F4();
        var_r3 = 0;
        if ((s32) lbl_805D652C == 1) {
            var_r3 = 1;
        }
        create__9TSaveChCrFPv(var_r3);
        fn_80291268();
        queue_destruction__7TObjectFv(arg0);
        return 1;
    }
    if (is_state_4__14TObjCMMainMenuFv(lbl_805D6524) != 0) {
        queue_destruction__7TObjectFv(arg0);
        create__15TChCrCharSelectFPv(tl_03);
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8028E8F4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__12TCharaMakingFPvPv(void *arg0, void *arg1);
void *TCharaMaking__ct(void *, void *);
void *__nw__7TObjectFUl(int);

extern void *lbl_805D6520;

void *create__12TCharaMakingFPvPv(void *arg0, void *arg1) {
    void *o;
    lbl_805D6520 = arg1;
    o = __nw__7TObjectFUl(0x24);
    if (o != NULL) {
        o = TCharaMaking__ct(o, arg0);
    }
    return o;
}

}
#endif
#endif
