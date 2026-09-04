#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void TBoss4Type2__vt35(void);

void TBoss4Type2__vt35(void) {  }

}
#else
#if PSO_CLASS_PACKAGE == 0x8004A978
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 is_active__11TBoss4Type2Fv(void);

extern s32 lbl_805D4D74;

u8 is_active__11TBoss4Type2Fv(void) {
    return (u8) (lbl_805D4D74 != 0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8005109C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * create_jisin__11TBoss4Type2FPvPv(void *arg0, void *arg1);
void *TObjDFJisin__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

void * create_jisin__11TBoss4Type2FPvPv(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x2C);
    if (o != NULL) {
        o = TObjDFJisin__ct(o, arg0, arg1);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800517F8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * create_recover__11TBoss4Type2FPvPvPv(void *arg0, void *arg1, void *arg2);
void *TObjDFRecover__ct(void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

void * create_recover__11TBoss4Type2FPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x44);
    if (o != NULL) {
        o = TObjDFRecover__ct(o, arg0, arg1, arg2);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800528B8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss4Type2__sub_800528B8(void *arg0);
M2C_UNK TBoss4Type2__sub_800535A8(void *);
f32 calc_boss4_scale__10TObjPlayerFi();
M2C_UNK TBoss4Type2__sub_80053504(void *);

extern f32 lbl_805D8B08;

void TBoss4Type2__sub_800528B8(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x398) == 0) {
        if (calc_boss4_scale__10TObjPlayerFi() < lbl_805D8B08) {
            TBoss4Type2__sub_800535A8(arg0);
            return;
        }
        TBoss4Type2__sub_80053504(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80052910
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_timer__11TBoss4Type2FPv(u8 *arg0);
M2C_UNK TBoss4Type2__sub_80054FC0(void *, f32);

extern const f32 lbl_805D8B0C;

void init_timer__11TBoss4Type2FPv(u8 *arg0) {
    TBoss4Type2__sub_80054FC0((void *) (arg0 + 0x38), (f32) (lbl_805D8B0C));
    M2C_FIELD(arg0, s32 *, 0x398) = 0x96;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80052AE0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_scale_state__11TBoss4Type2FPv(void *arg0);
M2C_UNK TBoss4Type2__sub_80053504(void *);
M2C_UNK TBoss4Type2__sub_80053CEC(void *, M2C_UNK);
M2C_UNK TRaderMapCore__sub_80053914(void *, M2C_UNK *);
M2C_UNK set_map_position__13TRaderMapCoreFPvPv(void *, M2C_UNK *);
f32 calc_boss4_scale__10TObjPlayerFi();

extern const f64 lbl_80437620[];

void update_scale_state__11TBoss4Type2FPv(void *arg0) {
    M2C_UNK sp8;
    M2C_UNK var_r31;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x398) == 0) {
        if (calc_boss4_scale__10TObjPlayerFi() < lbl_80437620[0]) {
            TBoss4Type2__sub_80053504(arg0);
            return;
        }
        var_r31 = 8;
        if ((s32) M2C_FIELD(arg0, s32 *, 0x374) == 8) {
            var_r31 = 9;
        }
        TRaderMapCore__sub_80053914(arg0, &sp8);
        set_map_position__13TRaderMapCoreFPvPv(arg0, &sp8);
        TBoss4Type2__sub_80053CEC(arg0, var_r31);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80052B6C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void init_child_and_set_timer__11TBoss4Type2FPv(void *arg0);
void create__16TObjDFBeamCursorFPvPv(void *, void *);

void init_child_and_set_timer__11TBoss4Type2FPv(void *arg0) {
    create__16TObjDFBeamCursorFPvPv(arg0, (void *)((char *)arg0 + 952));
    M2C_FIELD(arg0, u32 *, 0x398) = 75;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80052BA4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

typedef struct { char pad[0x444]; struct { char b[0x18]; } arr[1]; } Foo;

void update_attack_countdown__11TBoss4Type2FPv(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
M2C_UNK TBoss4Type2__sub_800542B0(void *, M2C_UNK);

void update_attack_countdown__11TBoss4Type2FPv(u8 *arg0) {
    s32 temp_r0;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x398) == 0x2D) {
        TBoss3Volopt__sub_8022675C(0x4003AD11, &((Foo *) arg0)->arr[M2C_FIELD(arg0, s32 *, 0x3A8)], 0, 1);
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x398) - 1;
    M2C_FIELD(arg0, s32 *, 0x398) = temp_r0;
    if (temp_r0 < 0) {
        TBoss4Type2__sub_800542B0(arg0, 1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80052C18
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_state__11TBoss4Type2FPv(void *arg0);
M2C_UNK TBoss4Type2__sub_80053504();
M2C_UNK TBoss4Type2__sub_800535A8();

void update_state__11TBoss4Type2FPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x398) == 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3A8) == 1) {
            TBoss4Type2__sub_800535A8();
            return;
        }
        TBoss4Type2__sub_80053504();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80053050
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_state_transition__11TBoss4Type2FPv(void* p);
void TBoss4Type2__sub_8005307C(void* p);
void update_flag800_state__11TBoss4Type2FPv(void *arg0);
s32 TBoss4Type2__sub_80053504(void);
int check_state_transition__11TBoss4Type2FPv(void*);
s32 TBoss4Type2__sub_80053CEC(void * a0 = 0, s32 a1 = 0);

void update_state_transition__11TBoss4Type2FPv(void* p) { if (*(int*)((char*)p + 0x398) == 0) { check_state_transition__11TBoss4Type2FPv(p); } }
void TBoss4Type2__sub_8005307C(void* p) { *(u32*)((char*)p + 0x398) = *(u32*)((char*)p + 0x3cc); }
void update_flag800_state__11TBoss4Type2FPv(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x30) & 0x800) {
        TBoss4Type2__sub_80053CEC(arg0, 4);
        return;
    }
    TBoss4Type2__sub_80053504();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80053190
#include "types.h"

extern "C" {

void check_state_if_idle__11TBoss4Type2FPv(void* p);
void TBoss4Type2__sub_800531BC(void* p);
int check_state_transition__11TBoss4Type2FPv(void*);

void check_state_if_idle__11TBoss4Type2FPv(void* p) { if (*(int*)((char*)p + 0x398) == 0) { check_state_transition__11TBoss4Type2FPv(p); } }
void TBoss4Type2__sub_800531BC(void* p) { *(s32*)((char*)p + 0x398) = 75; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8005354C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void check_state_transition__11TBoss4Type2FPv(void *arg0);
M2C_UNK TBoss4Type2__sub_80053CEC(void *, M2C_UNK);
s32 TBoss4DarkFalz__sub_8004D990(s32);

void check_state_transition__11TBoss4Type2FPv(void *arg0) {
    if (TBoss4DarkFalz__sub_8004D990(M2C_FIELD(arg0, s32 *, 0x38C)) <= (s32) (0xC - M2C_FIELD(arg0, s32 *, 0x3C4))) {
        TBoss4Type2__sub_80053CEC(arg0, 5);
        return;
    }
    TBoss4Type2__sub_80053CEC(arg0, 6);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8005416C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 calc_wave_offset__11TBoss4Type2Ff(f32 farg0);
f32 TBoss8Dragon__sub_803D64DC(s32);

extern const f32 lbl_805D8B18;
extern const f32 lbl_805D8B60;
extern const f32 lbl_805D8B74;

f32 calc_wave_offset__11TBoss4Type2Ff(f32 farg0) {
    return lbl_805D8B60 * (lbl_805D8B18 - TBoss8Dragon__sub_803D64DC((s32) (lbl_805D8B74 * farg0)));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800541B0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void calc_scaled_field__11TBoss4Type2FPvii(void *arg0, s32 arg1, s32 arg2);
s32 TBoss4Type2__sub_80141FA8(s32, s32);

extern M2C_UNK lbl_80437628;

void calc_scaled_field__11TBoss4Type2FPvii(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) (arg1 + (s32) (M2C_FIELD(arg0, f32 *, 0x39C) * (f32) TBoss4Type2__sub_80141FA8(arg1, arg2)));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800548AC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void request_state_3__11TBoss4Type2FPv(void *arg0);
M2C_UNK TBoss4Type2__sub_800542B0(void *, M2C_UNK);

void request_state_3__11TBoss4Type2FPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x374);
    if ((temp_r0 != 3) && (temp_r0 != 4)) {
        TBoss4Type2__sub_800542B0(arg0, 3);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80055300
#include "types.h"

extern "C" {

void TBoss4Type2__sub_80055300(void);
int TBoss4Type2__sub_80054FC0(s32, f32);

    extern const f32 lbl_805D8B20;
    void TBoss4Type2__sub_80055300(void) { TBoss4Type2__sub_80054FC0(0, lbl_805D8B20); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800558C8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * create_zanzo__11TBoss4Type2FPvPv(void *arg0, void *arg1);
void *__ct__11TBoss4ZanzoFv(void *, void *, void *);
void *__nw__7TObjectFUl(int);

void * create_zanzo__11TBoss4Type2FPvPv(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x4C);
    if (o != NULL) {
        o = __ct__11TBoss4ZanzoFv(o, arg0, arg1);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80055A84
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss4Type2__vt34(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);

extern const f32 TBoss4Type2__data_805D8BAC;

void TBoss4Type2__vt34(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) TBoss4Type2__data_805D8BAC;
    TBoss3Volopt__sub_8022675C(0x40039E21, arg0 + 0x38, 0, 1);
    M2C_FIELD(arg0, s32 *, 0x398) = 0x96;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80055AD4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss4Type2__vt24(void *arg0);

M2C_UNK TBoss4Type2__sub_80057048(void *, M2C_UNK);

void TBoss4Type2__vt24(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x398) - 1;
    M2C_FIELD(arg0, s32 *, 0x398) = temp_r0;
    if (temp_r0 < 0) {
        TBoss4Type2__sub_80057048(arg0, 1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80055B08
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss4Type2__vt22(void *arg0);
void TBoss4Type2__vt23(void *arg0);
void TBoss4Type2__vt25(void *arg0);
void TBoss4Type2__vt28(void *arg0);
void TBoss4Type2__vt31(void *arg0);
M2C_UNK TBoss4Type2__sub_80056A54(void *);
M2C_UNK TBoss4Type2__sub_80056F90(void *, M2C_UNK, s32);
s32 TBoss4Type2__sub_80057224(void *);
f32 calc_boss4_scale__10TObjPlayerFi();

extern f32 lbl_805D8BB0;

void TBoss4Type2__vt23(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x398) == 0) {
        if (calc_boss4_scale__10TObjPlayerFi() < lbl_805D8BB0) {
            TBoss4Type2__sub_80056A54(arg0);
            return;
        }
        TBoss4Type2__sub_80056F90(arg0, 4, TBoss4Type2__sub_80057224(arg0));
    }
}

extern f32 TBoss4Type2__data_805D8BAC;

void TBoss4Type2__vt31(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) TBoss4Type2__data_805D8BAC;
    M2C_FIELD(arg0, s32 *, 0x398) = 0x12C;
}

extern f32 TBoss4Type2__data_805D8BAC;

void TBoss4Type2__vt28(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) TBoss4Type2__data_805D8BAC;
    M2C_FIELD(arg0, s32 *, 0x398) = 0xE1;
}

extern f32 TBoss4Type2__data_805D8BAC;

void TBoss4Type2__vt25(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) TBoss4Type2__data_805D8BAC;
    M2C_FIELD(arg0, s32 *, 0x398) = 0x96;
}

extern f32 TBoss4Type2__data_805D8BAC;

void TBoss4Type2__vt22(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) TBoss4Type2__data_805D8BAC;
    M2C_FIELD(arg0, s32 *, 0x398) = 0x4B;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80055F1C
#include "types.h"

extern "C" {

void TBoss4Type2__vt20(void);

void TBoss4Type2__vt20(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80056340
#include "types.h"

extern "C" {

void TBoss4Type2__vt14(void);

void TBoss4Type2__vt14(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800564EC
#include "types.h"

extern "C" {

void TBoss4Type2__vt11(void);

void TBoss4Type2__vt11(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800564F0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss4Type2__vt10(void *arg0);

extern f32 TBoss4Type2__data_805D8BAC;

void TBoss4Type2__vt10(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) TBoss4Type2__data_805D8BAC;
    M2C_FIELD(arg0, s32 *, 0x398) = 0x4B;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80056610
#include "types.h"

extern "C" {

void TBoss4Type2__vt8(void* p);

int TBoss4Type2__sub_80056998(void*);

void TBoss4Type2__vt8(void* p) { if (*(int*)((char*)p + 0x398) == 0) { TBoss4Type2__sub_80056998(p); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8005663C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss4Type2__vt7(void *arg0);

extern f32 TBoss4Type2__data_805D8BAC;

void TBoss4Type2__vt7(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) TBoss4Type2__data_805D8BAC;
    M2C_FIELD(arg0, s32 *, 0x3E0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3E0) + 1);
    M2C_FIELD(arg0, s32 *, 0x398) = (s32) M2C_FIELD(arg0, s32 *, 0x41C);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80056690
#include "types.h"

extern "C" {

void TBoss4Type2__vt5(void);
void TBoss4Type2__vt4(void* p);

void TBoss4Type2__vt5(void) {  }
void TBoss4Type2__vt4(void* p) { *(s32*)((char*)p + 0x398) = 75; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80056758
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss4Type2__vt0(void *arg0);

extern f32 TBoss4Type2__data_805D8BAC;

void TBoss4Type2__vt0(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) TBoss4Type2__data_805D8BAC;
    M2C_FIELD(arg0, s32 *, 0x398) = 0x3C;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80056938
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_resta_heal__11TBoss4Type2FPv(void *arg0);

void *dispatch_shared_handler_a__6TLobbyFPv(M2C_UNK, void *);
M2C_UNK fn_80052420(u16, s32);
f32 TTecResta__sub_802394B0(s32);

void apply_resta_heal__11TBoss4Type2FPv(void *arg0) {
    s16 temp_r31;
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0x2B0);
    temp_r31 = M2C_FIELD(temp_r4, s16 *, 2);
    fn_80052420(M2C_FIELD(arg0, u16 *, 0x3C4), (temp_r31 / 5) + (s32) TTecResta__sub_802394B0(M2C_FIELD(dispatch_shared_handler_a__6TLobbyFPv(0x37, temp_r4), s32 *, 0x1C)));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80056DA4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_grid_pos__11TBoss4Type2FPvPv(void *arg0, void *arg1);

extern const f32 lbl_805D8BF4;
extern const f32 lbl_805D8BF8;

void set_grid_pos__11TBoss4Type2FPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x3AC) = (s32) ((lbl_805D8BF4 + M2C_FIELD(arg1, f32 *, 0)) / lbl_805D8BF8);
    M2C_FIELD(arg0, s32 *, 0x3B0) = (s32) ((lbl_805D8BF4 + M2C_FIELD(arg1, f32 *, 8)) / lbl_805D8BF8);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80056E64
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 compute_wave_offset__11TBoss4Type2Ff(f32 farg0);
f32 TBoss8Dragon__sub_803D64DC(s32);

extern const f32 TBoss4Type2__data_805D8BD8;
extern const f32 lbl_805D8BFC;
extern const f32 lbl_805D8C00;

f32 compute_wave_offset__11TBoss4Type2Ff(f32 farg0) {
    return lbl_805D8BFC * (TBoss4Type2__data_805D8BD8 - TBoss8Dragon__sub_803D64DC((s32) (lbl_805D8C00 * farg0)));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800574E0
#include "types.h"

extern "C" {

void init_hanger__11TBoss4Type2FPv(void* p);
int TBoss4Type2__sub_80057270(void*);
int TOHangerMachine01__sub_803D9C00(void*);
int toggle_particle_effect__10TObjPlayerFv(void*);
int end_effect_render__13TParticleCtrlFv(void);
int TObjPlayer__sub_803D9214(void*, void*);
int TObjPlayer__sub_803D9B2C(void);
int TObjPlayer__sub_803D9B78(void);

void init_hanger__11TBoss4Type2FPv(void* p) { toggle_particle_effect__10TObjPlayerFv(p); TObjPlayer__sub_803D9B2C(); TOHangerMachine01__sub_803D9C00((char*)p + 0x38); TObjPlayer__sub_803D9214((void*)0, *(void**)((char*)p + 0x60)); TBoss4Type2__sub_80057270(p); TObjPlayer__sub_803D9B78(); end_effect_render__13TParticleCtrlFv(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80057534
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void advance_afterimage__11TBoss4Type2FPv(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);

extern const f32 lbl_805D8C18;

void advance_afterimage__11TBoss4Type2FPv(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) + lbl_805D8C18);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80057578
#include "types.h"

extern "C" {

int TBoss4Type2__sub_80057578(void* p);
int init_hanger__11TBoss4Type2FPv(void*);

int TBoss4Type2__sub_80057578(void* p) { return init_hanger__11TBoss4Type2FPv(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8005785C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_state3_unless_2or3__11TBoss4Type2FPv(void *arg0);
M2C_UNK TBoss4Type2__sub_80057048(void *, M2C_UNK);

void set_state3_unless_2or3__11TBoss4Type2FPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x374);
    if ((temp_r0 != 3) && (temp_r0 != 2)) {
        TBoss4Type2__sub_80057048(arg0, 3);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80057894
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_state__11TBoss4Type2FPv(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int, void *);

extern const f32 TBoss4Type2__data_805D8BD8;

void init_state__11TBoss4Type2FPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3E4) = 1;
    M2C_FIELD(arg0, f32 *, 0x3F0) = (f32) TBoss4Type2__data_805D8BD8;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFDFF);
    TBoss3Volopt__sub_8022675C(0x4003B723, arg0 + 0x38, 0, 1, arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80057CA0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create__11TBoss4Type2Fi(s32 arg0);
s32 TBoss4Type2__ct(s32, s32, s32);
s32 TObjControl__ct(s32, s32);
s32 __nw__7TObjectFUl(M2C_UNK);

extern s32 tl_04;

s32 create__11TBoss4Type2Fi(s32 arg0) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x474);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TBoss4Type2__ct(var_r31, var_r4, arg0);
    }
    return var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80058208
#include "types.h"

extern "C" {

void TBoss4Type2__sub_80058208(void);
void TBoss4Type2__sub_8005820C(void);
void TBoss4Type2__sub_80058210(void);
void TBoss4Type2__sub_80058214(void);
void TBoss4Type2__sub_80058218(void);
void TBoss4Type2__sub_8005821C(void);
void TBoss4Type2__sub_80058220(void);

void TBoss4Type2__sub_80058208(void) {  }
void TBoss4Type2__sub_8005820C(void) {  }
void TBoss4Type2__sub_80058210(void) {  }
void TBoss4Type2__sub_80058214(void) {  }
void TBoss4Type2__sub_80058218(void) {  }
void TBoss4Type2__sub_8005821C(void) {  }
void TBoss4Type2__sub_80058220(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80086C44
#include "types.h"

extern "C" {

void request_destroy__11TBoss4Type2FUi(u32 arg0);

int queue_destruction__7TObjectFv();

void request_destroy__11TBoss4Type2FUi(u32 arg0) {
    if (arg0 != 0U) {
        queue_destruction__7TObjectFv();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800875C0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_param_ptr__11TBoss4Type2FPvi(void *arg0, s32 arg1);

extern s32 lbl_805D4EF8;
extern s32 lbl_805D4EFC;
extern const f32 TParticleCtrl__data_805D94E0;
extern const f32 TParticleCtrl__data_805D94E4;

void set_param_ptr__11TBoss4Type2FPvi(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) TParticleCtrl__data_805D94E0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) TParticleCtrl__data_805D94E4;
    if (arg1 >= 0x200) {
        M2C_FIELD(arg0, s32 *, 0x28) = (s32) (lbl_805D4EFC + ((arg1 - 0x200) * 0x98));
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (lbl_805D4EF8 + (arg1 * 0x98));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8008760C
#include "types.h"

extern "C" {

void copy_vec3__11TBoss4Type2FPvPv(void* p, void* q);
void set_flags__11TBoss4Type2FPvUi(void* p, u32 v);
void copy_pos__11TNowLoadingFPvPv(void* p, void* q);

void copy_vec3__11TBoss4Type2FPvPv(void* p, void* q) { *(u32*)((char*)p + 0x6c) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x70) = *(u32*)((char*)q + 0x4); *(u32*)((char*)p + 0x74) = *(u32*)((char*)q + 0x8); }
void set_flags__11TBoss4Type2FPvUi(void* p, u32 v) { *(u16*)((char*)p + 0x2c) |= v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8033FEEC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void advance_offset__11TBoss4Type2FPv(void *arg0);

extern M2C_UNK lbl_80478560;
extern const f32 lbl_805DFB08;
extern const f32 lbl_805DFB0C;

void advance_offset__11TBoss4Type2FPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x58) = (s32) ((f32) M2C_FIELD(arg0, s32 *, 0x58) + lbl_805DFB08);
    M2C_FIELD(arg0, s32 *, 0x5C) = (s32) ((f32) M2C_FIELD(arg0, s32 *, 0x5C) + lbl_805DFB0C);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80340160
#include "types.h"

extern "C" {

int TBoss4Type2__sub_80340160(void* p);
int TObjPlayer__sub_8033FDB0(void*);

int TBoss4Type2__sub_80340160(void* p) { return TObjPlayer__sub_8033FDB0(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80340220
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *destroy__11TBoss4Type2FPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void fn_80340040(void *);
void request_destroy__11TBoss4Type2FUi(void *);

extern M2C_UNK lbl_804EFB78[];

void *destroy__11TBoss4Type2FPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EFB78;
        if (M2C_FIELD(arg0, void **, 0x20) != NULL) { request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x20)); M2C_FIELD(arg0, M2C_UNK *, 0x20) = 0; }
        fn_80340040(arg0);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
