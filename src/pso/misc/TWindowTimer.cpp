#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create__12TWindowTimerFv(void);
s32 create_alt__12TWindowTimerFv(void);
s32 TWindowTimer__ct();
s32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK fn_80287AD8(s32);
M2C_UNK fn_80287B60(s32);

s32 create__12TWindowTimerFv(void) {
    s32 var_r31;

    var_r31 = __nw__7TObjectFUl(0x64);
    if (var_r31 != 0) {
        var_r31 = TWindowTimer__ct();
    }
    fn_80287AD8(var_r31);
    return var_r31;
}

s32 create_alt__12TWindowTimerFv(void) {
    s32 var_r31;

    var_r31 = __nw__7TObjectFUl(0x64);
    if (var_r31 != 0) {
        var_r31 = TWindowTimer__ct();
    }
    fn_80287B60(var_r31);
    return var_r31;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80198814
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TWindowTimer__sub_80198814(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK lbl_804B8DD0[];

void *TWindowTimer__sub_80198814(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B8DD0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80198C84
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TWindowTimer__sub_80198C84(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK lbl_804B8DE8[];

void *TWindowTimer__sub_80198C84(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B8DE8;
        if (M2C_FIELD(arg0, void **, 0x3C) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x3C)); M2C_FIELD(arg0, M2C_UNK *, 0x3C) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80198D98
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowTimer__sub_80198D98(void);
void * __nw__7TObjectFUl(M2C_UNK);
M2C_UNK TWindowTimer__sub_80199410(void *, s32);

extern s32 tl_03;

void TWindowTimer__sub_80198D98(void) {
    void *obj = __nw__7TObjectFUl(0x20);
    if (obj != 0) {
        TWindowTimer__sub_80199410(obj, tl_03);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801993B0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *dt__12TWindowTimerFPvs(void *arg0, s16 arg1);
void TWindowTimer__sub_8019A770();
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK lbl_804B8E00[];

void *dt__12TWindowTimerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B8E00;
        TWindowTimer__sub_8019A770();
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80199EA0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_best_time__12TWindowTimerFPv(void *arg0);
M2C_UNK TWindowTimer__sub_8019A44C(void *, s32);

extern M2C_UNK lbl_8050DDAC[];

void update_best_time__12TWindowTimerFPv(void *arg0) {
    if ((M2C_FIELD(lbl_8050DDAC, s16 *, 0x12) == 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x354) <= (s32) M2C_FIELD(lbl_8050DDAC, s32 *, 0x14))) {
        M2C_FIELD(arg0, s32 *, 0x354) = (s32) M2C_FIELD(lbl_8050DDAC, s32 *, 0x14);
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(lbl_8050DDAC, f32 *, 0);
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) M2C_FIELD(lbl_8050DDAC, f32 *, 4);
        M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(lbl_8050DDAC, f32 *, 8);
        TWindowTimer__sub_8019A44C(arg0, M2C_FIELD(lbl_8050DDAC, s32 *, 0xC));
    }
    M2C_FIELD(lbl_8050DDAC, s16 *, 0x12) = 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8019A50C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *destroy_player_obj__12TWindowTimerFPvs(void *arg0, s16 arg1);
M2C_UNK destroy_motion_object__10TObjPlayerFPvs(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK clear_obj_links(void *);

extern M2C_UNK lbl_804B8E18[];

void *destroy_player_obj__12TWindowTimerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B8E18;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        clear_obj_links(arg0);
        destroy_motion_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8019A678
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void send_gogo_ball__12TWindowTimerFi(s32 arg0);
M2C_UNK TLobby__send_and_handle_60(void *);
void TWindowTimer__sub_8019A6F8(void* p);
s32 bswap_32__FPUl(s32);
M2C_UNK bswap_6x79_gogo_ball__12TWindowTimerFi();
s32 read_be16_field2__10TObjPlayerFPv();

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {

void send_gogo_ball__12TWindowTimerFi(s32 arg0) {
    bswap_6x79_gogo_ball__12TWindowTimerFi();
    TLobby__send_and_handle_60((void *) (arg0));
}

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8019A6AC
#include "types.h"

extern "C" {

s32 read_be16_field2__10TObjPlayerFPv();
s32 bswap_32__FPUl(s32);
void TWindowTimer__sub_8019A6F8(void* p);

void bswap_6x79_gogo_ball__12TWindowTimerFi(s32 arg0) {
    read_be16_field2__10TObjPlayerFPv();
    bswap_32__FPUl(arg0 + 4);
    bswap_32__FPUl(arg0 + 8);
    bswap_32__FPUl(arg0 + 0xC);
    bswap_32__FPUl(arg0 + 0x10);
}
void TWindowTimer__sub_8019A6F8(void* p) { *(u8*)((char*)p + 0x0) = 121; *(u8*)((char*)p + 0x1) = 6; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8019A724
#include "types.h"

extern "C" {

int set_timer_value__12TWindowTimerFii(int a0, int a1);

    extern int lbl_8050DD50[];
int set_timer_value__12TWindowTimerFii(int a0, int a1) { lbl_8050DD50[a0] = a1; return (int)lbl_8050DD50; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8019A770
#include "types.h"

extern "C" {

int TWindowTimer__sub_8019A770(void* p);
int TWindowCtrl__sub_8024A4EC(void*);

int TWindowTimer__sub_8019A770(void* p) { return TWindowCtrl__sub_8024A4EC(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80287C18
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_chat_parts__12TWindowTimerFPv(u8 *arg0);
s32 is_active__19TWindowSubShortMailFv();
M2C_UNK copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, s32);
s32 fn_80246CD0();
s32 fn_80246CDC();
s32 TWindowSubComCard__sub_8026CBB8(M2C_UNK);

void update_chat_parts__12TWindowTimerFPv(u8 *arg0) {
    s32 var_r3;

    if (M2C_FIELD(arg0, s32 *, 0x60) & 1) {
        var_r3 = TWindowSubComCard__sub_8026CBB8(0xA9);
    } else if ((is_active__19TWindowSubShortMailFv() != 0) || (fn_80246CD0() != 0) || (fn_80246CDC() != 0)) {
        var_r3 = TWindowSubComCard__sub_8026CBB8(0xA8);
    } else {
        var_r3 = TWindowSubComCard__sub_8026CBB8(0x22);
    }
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(arg0 + 0x30, var_r3);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80287C9C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw__12TWindowTimerFPvii(void *arg0, s32 arg1, s32 arg2);
M2C_UNK TWindowChallengeResult__sub_80228DB4(s32, M2C_UNK);
M2C_UNK reset_float_field__15TWindowHelpItemFPv(s32);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);
M2C_UNK TWindowSubStatusDisp__sub_802290E0();
M2C_UNK TWindowSubStatusDisp__sub_8025AC50(s32, s32, M2C_UNK);
s32 TLobby__sub_8001DC24();
M2C_UNK TWindowSubStatusDisp__sub_80229080(M2C_UNK *);

extern M2C_UNK lbl_8044FCE0[];
extern M2C_UNK lbl_805DD884;

void draw__12TWindowTimerFPvii(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r31;

    temp_r31 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0);
    TWindowSubStatusDisp__sub_802290E0();
    TWindowSubStatusDisp__sub_80229080(&lbl_805DD884);
    TWindowChallengeResult__sub_80228DB4(arg1, 3);
    TWindowSubStatusDisp__sub_80229080(lbl_8044FCE0);
    TWindowChallengeResult__sub_80228DB4(arg2, 3);
    TWindowSubStatusDisp__sub_8025AC50(temp_r31, TLobby__sub_8001DC24(), 0x20);
    reset_float_field__15TWindowHelpItemFPv(temp_r31);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80287F64
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__12TWindowTimerFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_window_base__9TWindowDDFPvs(void *, int);

extern M2C_UNK __vt__12TWindowTimer[];

void *__dt__12TWindowTimerFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TWindowTimer;
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
