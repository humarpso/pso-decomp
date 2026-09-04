#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TWindowDD__sub_8034094C(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_window_base__9TWindowDDFPvs(void *, int);

extern M2C_UNK lbl_804EFBAC[];

void *TWindowDD__sub_8034094C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EFBAC;
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x801E32E8
#include "types.h"

extern "C" {

int TObjPlayer__sub_803DAD28(void*);
int TObjPlayer__sub_803E2810(void*, void*, void*);
void TCameraCtrl__sub_801E32E4(void);

void draw_transformed_primitive__9TWindowDDFPvPvPvPv(void* p, void* a1, void* a2, void* a3) { TObjPlayer__sub_803DAD28(a2); TObjPlayer__sub_803E2810(p, a1, a3); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020C2DC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_all_ready__9TWindowDDFi(s32 arg0);
u8 *resolve_matching_object__6TLobbyFPv();
s32 get_object_type__6TLobbyFi(s32);

s32 check_all_ready__9TWindowDDFi(s32 arg0) {
    s16 temp_r3_2;
    s32 temp_r3;
    s32 i;
    u8 *var_r31;

    var_r31 = resolve_matching_object__6TLobbyFPv();
    temp_r3 = get_object_type__6TLobbyFi(arg0);
    if (var_r31 != NULL) {
        for (i = 0; i < temp_r3; i++) {
            temp_r3_2 = M2C_FIELD(var_r31, s16 *, 2);
            if (!(temp_r3_2 & 8) && (temp_r3_2 & 2)) {
                return 0;
            }
            var_r31 += 0x48;
        }
    }
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80244CF4
#include "types.h"

extern "C" {

void draw_default_entry__9TWindowDDFi(s32 arg0);
int TWindowSubComCard__sub_80244C0C(s32, s32);
s32 fn_8026CB68();

void draw_default_entry__9TWindowDDFi(s32 arg0) {
    TWindowSubComCard__sub_80244C0C(arg0, fn_8026CB68());
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024662C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

int update_com_card__9TWindowDDFPv(void* p);
int initialize_subwindow__9TWindowDDFPv(void* p);
void TWindowDD__sub_8024666C(void);
void TWindowDD__sub_80246670(void);
void *destroy_window_base__9TWindowDDFPvs(void *arg0, s16 arg1);
int TWindowSubComCard__sub_8024634C(void*);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
int TWindowSubComCard__sub_80246464(void*);
void TWindowSubStatusDisp__sub_80257CB8(void *);
void TWindowCtrlMain__sub_8026CC28(void *);

int update_com_card__9TWindowDDFPv(void* p) { return TWindowSubComCard__sub_8024634C(p); }
int initialize_subwindow__9TWindowDDFPv(void* p) { return TWindowSubComCard__sub_80246464(p); }
void TWindowDD__sub_8024666C(void) {  }
void TWindowDD__sub_80246670(void) {  }

extern M2C_UNK lbl_804CE018[];

void *destroy_window_base__9TWindowDDFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CE018;
        TWindowSubStatusDisp__sub_80257CB8((s8 *)arg0 + 0x24);
        TWindowCtrlMain__sub_8026CC28(arg0);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80246F8C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void refresh_status_display__9TWindowDDFv(void);
M2C_UNK TWindowSubStatusDisp__sub_8025A9C0(f32);

extern const f32 lbl_805DCB70;

void refresh_status_display__9TWindowDDFv(void) {
    TWindowSubStatusDisp__sub_8025A9C0(lbl_805DCB70);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803407BC
#include "types.h"

extern "C" {

int update_fade__17TWindowSubComCardFPv(void*);
int initialize_subwindow__9TWindowDDFPv(void*);
s32 TWindowDD__sub_80340820(void* p);
void TWindowDD__sub_80340910(void* p);

void update_draw__9TWindowDDFPv(void* p) { initialize_subwindow__9TWindowDDFPv(p); update_fade__17TWindowSubComCardFPv(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80340820
#include "types.h"

extern "C" {

int update_fade__17TWindowSubComCardFPv(void*);
int initialize_subwindow__9TWindowDDFPv(void*);
s32 TWindowDD__sub_80340820(void* p);
void TWindowDD__sub_80340910(void* p);

s32 TWindowDD__sub_80340820(void* p) { return *(s32*)((char*)p + 0x68); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80340910
#include "types.h"

extern "C" {

int update_fade__17TWindowSubComCardFPv(void*);
int initialize_subwindow__9TWindowDDFPv(void*);
s32 TWindowDD__sub_80340820(void* p);
void TWindowDD__sub_80340910(void* p);

void TWindowDD__sub_80340910(void* p) { *(s32*)((char*)p + 0x60) = 1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80340A0C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__9TWindowDDFv(void);
void *TWindowDD__sub_803409A4(void *);
void *__nw__7TObjectFUl(int);

void *create__9TWindowDDFv(void) {
    void *o = __nw__7TObjectFUl(0x6C);
    if (o != NULL) {
        o = TWindowDD__sub_803409A4(o);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80340DEC
#include "types.h"

extern "C" {

void init__9TWindowDDFPv(void* p);
int update_fade__17TWindowSubComCardFPv(void*);
int initialize_subwindow__9TWindowDDFPv(void*);

void init__9TWindowDDFPv(void* p) { initialize_subwindow__9TWindowDDFPv(p); update_fade__17TWindowSubComCardFPv(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80340E50
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_scale__9TWindowDDFPvii(void *arg0, s32 arg1, s32 arg2);

extern M2C_UNK lbl_804785D8;
extern const f32 lbl_805DFC6C;

void set_scale__9TWindowDDFPvii(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, f32 *, 0x64) = (f32) arg1;
    M2C_FIELD(arg0, f32 *, 0x68) = (f32) arg2;
    M2C_FIELD(arg0, f32 *, 0x60) = (f32) (lbl_805DFC6C / M2C_FIELD(arg0, f32 *, 0x64));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80340EA8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *dt__9TWindowDDFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_window_base__9TWindowDDFPvs(void *, int);

extern M2C_UNK lbl_804EFBE4[];

void *dt__9TWindowDDFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EFBE4;
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80340F70
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TWindowDD__sub_80340F70(void);
void *TWindowDD__sub_80340F00(void *);
void *__nw__7TObjectFUl(int);

void *TWindowDD__sub_80340F70(void) {
    void *o = __nw__7TObjectFUl(0x70);
    if (o != NULL) {
        o = TWindowDD__sub_80340F00(o);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80341108
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_and_scroll_entry__9TWindowDDFi(s32 arg0);
M2C_UNK draw_entry_if_visible__9TWindowDDFPvPv(s32, void *);
M2C_UNK TWindowDD__sub_80348AFC(s32, void *);
void *draw_default_entry__9TWindowDDFi();
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(s32, s32, void *, f32);

extern f32 lbl_805DFC90;

void draw_and_scroll_entry__9TWindowDDFi(s32 arg0) {
    f32 temp_f1;
    void *temp_r3;

    temp_r3 = draw_default_entry__9TWindowDDFi();
    TWindowDD__sub_80348AFC(arg0, temp_r3);
    draw_entry_if_visible__9TWindowDDFPvPv(arg0, temp_r3);
    temp_f1 = M2C_FIELD(temp_r3, f32 *, 0x14);
    M2C_FIELD(temp_r3, f32 *, 0x14) = (f32) (temp_f1 + lbl_805DFC90);
    TWindowSubStatusDisp__sub_80257BC0(arg0, arg0 + 0x24, temp_r3, temp_f1);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80341174
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_entry_if_visible__9TWindowDDFPvPv(void *arg0, void *arg1);
M2C_UNK draw__9TWindowDDFPviif(void *, void *, s32, f32);

extern f32 lbl_805DFC94;

void draw_entry_if_visible__9TWindowDDFPvPv(void *arg0, void *arg1) {
    if ((s32) M2C_FIELD(arg1, s32 *, 0x30) >= 0) {
        draw__9TWindowDDFPviif(arg0, arg1,
                               M2C_FIELD(arg0, s32 *, 0x60), lbl_805DFC94);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803411A8
#include "types.h"

extern "C" {

void init_window__9TWindowDDFPv(void* p);
int update_fade__17TWindowSubComCardFPv(void*);
int initialize_subwindow__9TWindowDDFPv(void*);
int TWindowSubStatusDisp__sub_80257C28(void*, void*);

void init_window__9TWindowDDFPv(void* p) { initialize_subwindow__9TWindowDDFPv(p); update_fade__17TWindowSubComCardFPv(p); TWindowSubStatusDisp__sub_80257C28(p, (char*)p + 0x24); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x803411E8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void init_and_set_field50__9TWindowDDFPvPv(void *arg0, void *arg1);
void copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);

void init_and_set_field50__9TWindowDDFPvPv(void *arg0, void *arg1) {
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *)((char *)arg0 + 48), (void *)((char *)arg0 + 100));
    M2C_FIELD(arg0, void **, 0x50) = arg1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80341224
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_position__9TWindowDDFPvi(u8 *arg0, s32 arg1);
M2C_UNK copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);

extern const f32 lbl_805DFC94;

void update_position__9TWindowDDFPvi(u8 *arg0, s32 arg1) {
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(arg0 + 0x30, arg0 + 0x6C);
    M2C_FIELD(arg0, s32 *, 0x50) = arg1;
    if (M2C_FIELD(arg0, f32 *, 0x6C) < lbl_805DFC94) {
        M2C_FIELD(arg0, f32 *, 0x30) = (f32) (M2C_FIELD(arg0, f32 *, 0x30) - M2C_FIELD(arg0, f32 *, 0x38));
    }
    if (M2C_FIELD(arg0, f32 *, 0x70) < lbl_805DFC94) {
        M2C_FIELD(arg0, f32 *, 0x34) = (f32) (M2C_FIELD(arg0, f32 *, 0x34) - M2C_FIELD(arg0, f32 *, 0x3C));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80341334
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__9TWindowDDFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_window_base__9TWindowDDFPvs(void *, int);

extern M2C_UNK lbl_804EFC38[];

void *__dt__9TWindowDDFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EFC38;
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80341A08
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowDD__sub_80341AC0(void);
void set_mode_2__9TWindowDDFPv(void* p);
void reset_cursor__9TWindowDDFPv(void* p);

s32 can_scroll__9TWindowDDFPvi(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r5;

    if (TWindowDD__sub_80341AC0() == 0) {
        return 0;
    }
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x78);
    temp_r5 = temp_r4 / 2;
    if (arg1 > 0) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x6C);
        if (temp_r0 < temp_r5) {
            return 0;
        }
        return (M2C_FIELD(arg0, s32 *, 0x68) + (temp_r4 - temp_r0)) < M2C_FIELD(arg0, s32 *, 0x74);
    }
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x6C);
    if (temp_r3 >= temp_r5) {
        return 0;
    }
    return ((u32) (M2C_FIELD(arg0, s32 *, 0x68) - (temp_r3 + 1)) >> 0x1FU) ^ 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80341B10
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowDD__sub_80341AC0(void);
void set_mode_2__9TWindowDDFPv(void* p);
void reset_cursor__9TWindowDDFPv(void* p);

void set_mode_2__9TWindowDDFPv(void* p) { *(s32*)((char*)p + 0x64) = 2; }
void reset_cursor__9TWindowDDFPv(void* p) { *(s32*)((char*)p + 0x64) = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80341EB8
#include "types.h"

extern "C" {

void init_and_mark_field8C__9TWindowDDFPv(void* p);
int TWindowDD__sub_80341F9C(void*);
int TWindowDD__sub_80341FFC(void*);

void init_and_mark_field8C__9TWindowDDFPv(void* p) { TWindowDD__sub_80341F9C(p); TWindowDD__sub_80341FFC(p); *(int*)((char*)p + 0x8c) = 1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80341EF4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void free_child__9TWindowDDFPv(void *arg0);
void free__11TOBoss4RockFUi(void *);
void TWindowSubStatusDisp__sub_80257CB8(void *);

void free_child__9TWindowDDFPv(void *arg0) {
    if (M2C_FIELD(arg0, void **, 0x80) != NULL) {
        free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0x80));
        M2C_FIELD(arg0, u32 *, 0x80) = 0;
    }
    TWindowSubStatusDisp__sub_80257CB8((void *)((char *)arg0 + 36));
    M2C_FIELD(arg0, u32 *, 0x74) = 0;
    M2C_FIELD(arg0, u32 *, 0x7C) = 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80341F48
#include "types.h"

extern "C" {

void init_child__9TWindowDDFPvPv(void* p, void* a1);
int free_child__9TWindowDDFPv(void*);
int TWindowDD__sub_80341F9C(void*);
int reset_fields__9TWindowDDFPv(void*);
int TWindowDD__sub_80341FFC(void*);

void init_child__9TWindowDDFPvPv(void* p, void* a1) { free_child__9TWindowDDFPv(p); *(void**)((char*)p + 0x70) = a1; TWindowDD__sub_80341F9C(p); TWindowDD__sub_80341FFC(p); reset_fields__9TWindowDDFPv(p); *(int*)((char*)p + 0x8c) = 1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80341FD8
#include "types.h"

extern "C" {

void reset_fields__9TWindowDDFPv(void* a0);

    extern const float TWindowDD__data_805DFCA8;
void reset_fields__9TWindowDDFPv(void* a0) { *(float*)((char*)a0 + 0x88) = TWindowDD__data_805DFCA8; *(float*)((char*)a0 + 0x84) = TWindowDD__data_805DFCA8; *(int*)((char*)a0 + 0x68) = 0; *(int*)((char*)a0 + 0x6c) = 0; *(int*)((char*)a0 + 0x8c) = 1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80342134
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_pos_and_data__9TWindowDDFPvf(u8 *arg0, f32 farg0);

extern s32 TWindowDD__data_805DFB50;

void set_pos_and_data__9TWindowDDFPvf(u8 *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x30) = farg0;
    M2C_FIELD(arg0, s32 *, 0x50) = (s32) TWindowDD__data_805DFB50;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80342144
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_field_20__17TWindowSubComCardFPv(void);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void * a0 = 0, s32 a1 = 0);
s32 get_field_0x74__9TWindowDDFPv(void* p);
s32 get_cursor_index__9TWindowDDFPv(void* p);

s32 get_field_0x74__9TWindowDDFPv(void* p) { return *(s32*)((char*)p + 0x74); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8034218C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_field_20__17TWindowSubComCardFPv(void);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void * a0 = 0, s32 a1 = 0);
s32 get_field_0x74__9TWindowDDFPv(void* p);
s32 get_cursor_index__9TWindowDDFPv(void* p);

s32 get_cursor_index__9TWindowDDFPv(void* p) { return *(s32*)((char*)p + 0x6c); }
s32 update_if_field28_set__9TWindowDDFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x28) != 0U) {
        get_array_entry__20TWindowSubStatusDispFPvi(arg0, M2C_FIELD(arg0, s32 *, 0x6C));
        return get_field_20__17TWindowSubComCardFPv();
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80342218
#include "types.h"

extern "C" {

int spawn_window__9TWindowDDFv(void);
s32 get_field_68__9TWindowDDFPv(void* p);

s32 get_field_68__9TWindowDDFPv(void* p) { return *(s32*)((char*)p + 0x68); }
void add_scroll_offset__9TWindowDDFPvi(void* a0, int a1) { *(int*)((char*)a0 + 0x68) = (*(int*)((char*)a0 + 0x68) + a1); *(int*)((char*)a0 + 0x8c) = 1; spawn_window__9TWindowDDFv(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8034227C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *destroy__9TWindowDDFPvs(void *arg0, s16 arg1);
void free__11TOBoss4RockFUi(void *);
void __dl__7TObjectFPv(void *);
void destroy_window_base__9TWindowDDFPvs(void *, int);

extern M2C_UNK lbl_804EFC90[];

void *destroy__9TWindowDDFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EFC90;
        if (M2C_FIELD(arg0, void **, 0x80) != NULL) { free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0x80)); M2C_FIELD(arg0, M2C_UNK *, 0x80) = 0; }
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803424EC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_input__9TWindowDDFi(s32 arg0);
M2C_UNK TWindowDD__sub_8034330C(s32);
M2C_UNK TWindowDD__sub_80347B70();
M2C_UNK play_se__9TWindowDDFv();
M2C_UNK play_sound__9TWindowDDFv();
s32 TWindowDD__sub_803482B0(s32);
s32 test_input_flag_4__9TWindowDDFPv(s32);
M2C_UNK TWindowDD__sub_803484C4(s32);

void handle_input__9TWindowDDFi(s32 arg0) {
    TWindowDD__sub_80347B70();
    if (test_input_flag_4__9TWindowDDFPv(arg0) != 0) {
        play_sound__9TWindowDDFv();
        TWindowDD__sub_803484C4(arg0);
        return;
    }
    if (TWindowDD__sub_803482B0(arg0) != 0) {
        play_se__9TWindowDDFv();
        TWindowDD__sub_8034330C(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80342554
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void enter_state_19__9TWindowDDFPv(void *arg0);
s32 TWindowDD__sub_80342F84();
s32 update_close_flag__9TWindowDDFPv(void *);
M2C_UNK TWindowDD__sub_8034330C(void *);
M2C_UNK TWindowDD__sub_803435A0(void *);
M2C_UNK TWindowDD__sub_80347B70(void *);
M2C_UNK TWindowDD__sub_80347C50();
M2C_UNK play_se__9TWindowDDFv();
M2C_UNK play_sound__9TWindowDDFv();
s32 TWindowDD__sub_803482B0(void *);
s32 test_input_flag_4__9TWindowDDFPv(void *);

void enter_state_19__9TWindowDDFPv(void *arg0) {
    s32 temp_r0;
    s32 var_r31;

    var_r31 = 0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xB8);
    switch (temp_r0) {
    case 0:
        TWindowDD__sub_80347C50();
        TWindowDD__sub_80347B70(arg0);
        if (test_input_flag_4__9TWindowDDFPv(arg0) != 0) {
            play_sound__9TWindowDDFv();
            var_r31 = update_close_flag__9TWindowDDFPv(arg0) == 0;
        } else if (TWindowDD__sub_803482B0(arg0) != 0) {
            play_se__9TWindowDDFv();
            TWindowDD__sub_8034330C(arg0);
        }
        break;
    case 1:
        var_r31 = TWindowDD__sub_80342F84();
        break;
    }
    if ((s32) var_r31 != 0) {
        M2C_FIELD(arg0, s32 *, 0xB4) = 0x13;
        TWindowDD__sub_803435A0(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80342610
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void enter_state_18__9TWindowDDFPv(void *arg0);
s32 TWindowDD__sub_80342F84();
s32 update_close_flag__9TWindowDDFPv(void *);
M2C_UNK TWindowDD__sub_8034330C(void *);
M2C_UNK TWindowDD__sub_803435A0(void *);
M2C_UNK TWindowDD__sub_80347B70(void *);
M2C_UNK TWindowDD__sub_80347C50();
M2C_UNK play_se__9TWindowDDFv();
M2C_UNK play_sound__9TWindowDDFv();
s32 TWindowDD__sub_803482B0(void *);
s32 test_input_flag_4__9TWindowDDFPv(void *);

void enter_state_18__9TWindowDDFPv(void *arg0) {
    s32 temp_r0;
    s32 var_r31;

    var_r31 = 0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xB8);
    switch (temp_r0) {
    case 0:
        TWindowDD__sub_80347C50();
        TWindowDD__sub_80347B70(arg0);
        if (test_input_flag_4__9TWindowDDFPv(arg0) != 0) {
            play_sound__9TWindowDDFv();
            var_r31 = update_close_flag__9TWindowDDFPv(arg0) == 0;
        } else if (TWindowDD__sub_803482B0(arg0) != 0) {
            play_se__9TWindowDDFv();
            TWindowDD__sub_8034330C(arg0);
        }
        break;
    case 1:
        var_r31 = TWindowDD__sub_80342F84();
        break;
    }
    if ((s32) var_r31 != 0) {
        M2C_FIELD(arg0, s32 *, 0xB4) = 0x12;
        TWindowDD__sub_803435A0(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803426CC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void enter_state_16__9TWindowDDFPv(void *arg0);
s32 TWindowDD__sub_80342F84();
s32 update_close_flag__9TWindowDDFPv(void *);
M2C_UNK TWindowDD__sub_8034330C(void *);
M2C_UNK TWindowDD__sub_803435A0(void *);
M2C_UNK TWindowDD__sub_80347B70(void *);
M2C_UNK TWindowDD__sub_80347C50();
M2C_UNK play_se__9TWindowDDFv();
M2C_UNK play_sound__9TWindowDDFv();
s32 TWindowDD__sub_803482B0(void *);
s32 test_input_flag_4__9TWindowDDFPv(void *);

void enter_state_16__9TWindowDDFPv(void *arg0) {
    s32 temp_r0;
    s32 var_r31;

    var_r31 = 0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xB8);
    switch (temp_r0) {
    case 0:
        TWindowDD__sub_80347C50();
        TWindowDD__sub_80347B70(arg0);
        if (test_input_flag_4__9TWindowDDFPv(arg0) != 0) {
            play_sound__9TWindowDDFv();
            var_r31 = update_close_flag__9TWindowDDFPv(arg0) == 0;
        } else if (TWindowDD__sub_803482B0(arg0) != 0) {
            play_se__9TWindowDDFv();
            TWindowDD__sub_8034330C(arg0);
        }
        break;
    case 1:
        var_r31 = TWindowDD__sub_80342F84();
        break;
    }
    if ((s32) var_r31 != 0) {
        M2C_FIELD(arg0, s32 *, 0xB4) = 0x10;
        TWindowDD__sub_803435A0(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80342788
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_state__9TWindowDDFPv(void *arg0);
M2C_UNK TWindowDD__sub_8034330C(void *);
M2C_UNK TWindowDD__sub_803435A0(void *);
M2C_UNK TWindowDD__sub_80347B70(void *);
M2C_UNK TWindowDD__sub_80347C50();
M2C_UNK play_se__9TWindowDDFv();
M2C_UNK play_sound__9TWindowDDFv();
s32 TWindowDD__sub_803482B0(void *);
s32 test_input_flag_4__9TWindowDDFPv(void *);

void update_state__9TWindowDDFPv(void *arg0) {
    TWindowDD__sub_80347C50();
    TWindowDD__sub_80347B70(arg0);
    if (test_input_flag_4__9TWindowDDFPv(arg0) != 0) {
        play_sound__9TWindowDDFv();
        M2C_FIELD(arg0, s32 *, 0xB4) = 0xF;
        TWindowDD__sub_803435A0(arg0);
        return;
    }
    if (TWindowDD__sub_803482B0(arg0) != 0) {
        play_se__9TWindowDDFv();
        TWindowDD__sub_8034330C(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80342940
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update__9TWindowDDFi(s32 arg0);
M2C_UNK TWindowDD__sub_803428C4(s32);
M2C_UNK TWindowDD__sub_8034330C(s32);
M2C_UNK TWindowDD__sub_803435A0(s32);
M2C_UNK TWindowDD__sub_80347C50();
M2C_UNK play_se__9TWindowDDFv();
M2C_UNK play_sound__9TWindowDDFv();
s32 TWindowDD__sub_803482B0(s32);
s32 test_input_flag_4__9TWindowDDFPv(s32);

void update__9TWindowDDFi(s32 arg0) {
    TWindowDD__sub_80347C50();
    if (test_input_flag_4__9TWindowDDFPv(arg0) != 0) {
        play_sound__9TWindowDDFv();
        TWindowDD__sub_803428C4(arg0);
        TWindowDD__sub_803435A0(arg0);
        return;
    }
    if (TWindowDD__sub_803482B0(arg0) != 0) {
        play_se__9TWindowDDFv();
        TWindowDD__sub_8034330C(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80342AA0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void enter_state_9__9TWindowDDFPv(void *arg0);
s32 TWindowDD__sub_80342F84();
s32 update_close_flag__9TWindowDDFPv(void *);
M2C_UNK TWindowDD__sub_8034330C(void *);
M2C_UNK TWindowDD__sub_803435A0(void *);
M2C_UNK TWindowDD__sub_80347B70(void *);
M2C_UNK TWindowDD__sub_80347C50();
M2C_UNK play_se__9TWindowDDFv();
M2C_UNK play_sound__9TWindowDDFv();
s32 TWindowDD__sub_803482B0(void *);
s32 test_input_flag_4__9TWindowDDFPv(void *);

void enter_state_9__9TWindowDDFPv(void *arg0) {
    s32 temp_r0;
    s32 var_r31;

    var_r31 = 0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xB8);
    switch (temp_r0) {
    case 0:
        TWindowDD__sub_80347C50();
        TWindowDD__sub_80347B70(arg0);
        if (test_input_flag_4__9TWindowDDFPv(arg0) != 0) {
            play_sound__9TWindowDDFv();
            var_r31 = update_close_flag__9TWindowDDFPv(arg0) == 0;
        } else if (TWindowDD__sub_803482B0(arg0) != 0) {
            play_se__9TWindowDDFv();
            TWindowDD__sub_8034330C(arg0);
        }
        break;
    case 1:
        var_r31 = TWindowDD__sub_80342F84();
        break;
    }
    if ((s32) var_r31 != 0) {
        M2C_FIELD(arg0, s32 *, 0xB4) = 9;
        TWindowDD__sub_803435A0(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80342BB4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_dispatch__9TWindowDDFi(s32 arg0);
M2C_UNK TWindowDD__sub_80342B5C(s32);
M2C_UNK TWindowDD__sub_8034330C(s32);
M2C_UNK TWindowDD__sub_803435A0(s32);
M2C_UNK TWindowDD__sub_80347C50();
M2C_UNK play_sound__9TWindowDDFv();
s32 TWindowDD__sub_803482B0(s32);
s32 test_input_flag_4__9TWindowDDFPv(s32);

void update_dispatch__9TWindowDDFi(s32 arg0) {
    TWindowDD__sub_80347C50();
    if (test_input_flag_4__9TWindowDDFPv(arg0) != 0) {
        play_sound__9TWindowDDFv();
        TWindowDD__sub_80342B5C(arg0);
        TWindowDD__sub_803435A0(arg0);
        return;
    }
    if (TWindowDD__sub_803482B0(arg0) != 0) {
        play_sound__9TWindowDDFv();
        TWindowDD__sub_8034330C(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80342C24
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_layout__9TWindowDDFPv(void *arg0);
M2C_UNK TWindowDD__sub_8034330C(void *);
M2C_UNK TWindowDD__sub_803435A0(void *);
M2C_UNK TWindowDD__sub_80347B70();
M2C_UNK play_se__9TWindowDDFv();
M2C_UNK play_sound__9TWindowDDFv();
s32 TWindowDD__sub_803482B0(void *);
s32 test_input_flag_4__9TWindowDDFPv(void *);

void update_layout__9TWindowDDFPv(void *arg0) {
    TWindowDD__sub_80347B70();
    if (test_input_flag_4__9TWindowDDFPv(arg0) != 0) {
        play_sound__9TWindowDDFv();
        M2C_FIELD(arg0, s32 *, 0xB4) = 0x14;
        M2C_FIELD(arg0, s32 *, 0x8C) = -0x3C;
        TWindowDD__sub_803435A0(arg0);
        return;
    }
    if (TWindowDD__sub_803482B0(arg0) != 0) {
        play_se__9TWindowDDFv();
        TWindowDD__sub_8034330C(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80342C9C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_transition__9TWindowDDFPv(void *arg0);
M2C_UNK TWindowDD__sub_8034330C(void *);
M2C_UNK TWindowDD__sub_803435A0(void *);
M2C_UNK TWindowDD__sub_80347B70(void *);
M2C_UNK TWindowDD__sub_80347C50();
M2C_UNK play_se__9TWindowDDFv();
M2C_UNK play_sound__9TWindowDDFv();
s32 TWindowDD__sub_803482B0(void *);
s32 test_input_flag_4__9TWindowDDFPv(void *);

void update_transition__9TWindowDDFPv(void *arg0) {
    TWindowDD__sub_80347C50();
    TWindowDD__sub_80347B70(arg0);
    if (test_input_flag_4__9TWindowDDFPv(arg0) != 0) {
        play_sound__9TWindowDDFv();
        M2C_FIELD(arg0, s32 *, 0xB4) = 6;
        TWindowDD__sub_803435A0(arg0);
        return;
    }
    if (TWindowDD__sub_803482B0(arg0) != 0) {
        play_se__9TWindowDDFv();
        TWindowDD__sub_8034330C(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80342E40
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update__9TWindowDDFPv(void *arg0);
M2C_UNK TWindowDD__sub_8034330C(void *);
M2C_UNK TWindowDD__sub_803435A0(void *);
M2C_UNK TWindowDD__sub_80347B70();
M2C_UNK play_se__9TWindowDDFv();
M2C_UNK play_sound__9TWindowDDFv();
s32 TWindowDD__sub_803482B0(void *);
s32 test_input_flag_4__9TWindowDDFPv(void *);
M2C_UNK TWindowDD__sub_803484C4(void *);

void update__9TWindowDDFPv(void *arg0) {
    TWindowDD__sub_80347B70();
    if (test_input_flag_4__9TWindowDDFPv(arg0) != 0) {
        play_sound__9TWindowDDFv();
        if ((s32) M2C_FIELD(arg0, s32 *, 0xB0) == 1) {
            M2C_FIELD(arg0, s32 *, 0xB4) = 0x14;
            M2C_FIELD(arg0, s32 *, 0x8C) = -0x3C;
            TWindowDD__sub_803435A0(arg0);
            return;
        }
        TWindowDD__sub_803484C4(arg0);
        return;
    }
    if (TWindowDD__sub_803482B0(arg0) != 0) {
        play_se__9TWindowDDFv();
        TWindowDD__sub_8034330C(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803430BC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 update_close_flag__9TWindowDDFPv(void *arg0);
M2C_UNK TWindowDD__sub_80347EF4();
s32 classify_id__9TWindowDDFs();

s32 update_close_flag__9TWindowDDFPv(void *arg0) {
    TWindowDD__sub_80347EF4();
    if (classify_id__9TWindowDDFs() != 7) {
        M2C_FIELD(arg0, s32 *, 0xB8) = 1;
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80343C04
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__9TWindowDDFv(void *arg0, s16 arg1);
void TWindowDD__sub_80348520(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK __vt__9TWindowDD[];

void *__dt__9TWindowDDFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__9TWindowDD;
        TWindowDD__sub_80348520(arg0);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80343FEC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_buffers__9TWindowDDFv(void);
void TLobby__sub_800F957C(void*);
M2C_UNK fn_8034AF18();
void free__11TOBoss4RockFUi(void*);

extern u32 TWindowDD__data_805D6E0C;
extern u32 lbl_805D6E10;
extern u32 lbl_805D6E14;
extern u32 TWindowDD__data_805D6E18;
extern u32 TWindowDD__data_805D6E1C;
extern u32 lbl_805D6E20;
extern u32 lbl_805D6E50;
extern u32 lbl_805D6E54;
extern u32 lbl_805D6E58;
extern u32 lbl_805D6E5C;
extern u32 lbl_805D6E60;

void free_buffers__9TWindowDDFv(void) {
    fn_8034AF18();
    if ((u32) TWindowDD__data_805D6E1C != 0U) {
        free__11TOBoss4RockFUi((void*)TWindowDD__data_805D6E1C);
        TWindowDD__data_805D6E1C = 0U;
    }
    if ((u32) lbl_805D6E20 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D6E20);
        lbl_805D6E20 = 0U;
    }
    if ((u32) TWindowDD__data_805D6E18 != 0U) {
        free__11TOBoss4RockFUi((void*)TWindowDD__data_805D6E18);
        TWindowDD__data_805D6E18 = 0U;
    }
    if ((u32) lbl_805D6E14 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D6E14);
        lbl_805D6E14 = 0U;
    }
    if ((u32) lbl_805D6E10 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D6E10);
        lbl_805D6E10 = 0U;
    }
    if ((u32) TWindowDD__data_805D6E0C != 0U) {
        free__11TOBoss4RockFUi((void*)TWindowDD__data_805D6E0C);
        TWindowDD__data_805D6E0C = 0U;
    }
    if ((u32) lbl_805D6E60 != 0U) {
        TLobby__sub_800F957C((void*)lbl_805D6E60);
        lbl_805D6E60 = 0U;
    }
    if ((u32) lbl_805D6E5C != 0U) {
        TLobby__sub_800F957C((void*)lbl_805D6E5C);
        lbl_805D6E5C = 0U;
    }
    if ((u32) lbl_805D6E58 != 0U) {
        TLobby__sub_800F957C((void*)lbl_805D6E58);
        lbl_805D6E58 = 0U;
    }
    if ((u32) lbl_805D6E54 != 0U) {
        TLobby__sub_800F957C((void*)lbl_805D6E54);
        lbl_805D6E54 = 0U;
    }
    if ((u32) lbl_805D6E50 != 0U) {
        TLobby__sub_800F957C((void*)lbl_805D6E50);
        lbl_805D6E50 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80346A84
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_element_ptr__9TWindowDDFi(s32 arg0);

extern s32 TWindowDD__data_805D6E08;
extern s32 TWindowDD__data_805D6E1C;
extern s32 TWindowDD__data_805D6E2C;
extern s32 lbl_805D6E38;

s32 get_element_ptr__9TWindowDDFi(s32 arg0) {
    if (arg0 == -1) {
        return 0;
    }
    if (arg0 == -0x32) {
        switch ((s32) TWindowDD__data_805D6E08) {
        case 0:
            return TWindowDD__data_805D6E2C + 0x8C0;
        default:
            return TWindowDD__data_805D6E2C + 0x920;
        case 4:
            return TWindowDD__data_805D6E2C + 0x920;
        case 2:
            return TWindowDD__data_805D6E2C + 0x920;
        case 3:
            return TWindowDD__data_805D6E2C + 0x928;
        }
    } else {
        if ((arg0 >= 0) && (arg0 < (s32) lbl_805D6E38)) {
            return TWindowDD__data_805D6E2C + (arg0 * 8);
        }
        switch (arg0) {
        default:
            return 0;
        case -60:
            return TWindowDD__data_805D6E1C + 0x10;
        case -70:
            return TWindowDD__data_805D6E1C + 0x18;
        case -40:
            return TWindowDD__data_805D6E1C;
        case -45:
            return TWindowDD__data_805D6E1C + 8;
        case -80:
            return TWindowDD__data_805D6E1C + 0x20;
        case -90:
            return TWindowDD__data_805D6E1C + 0x28;
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80346E64
#include "types.h"

extern "C" {

void render__9TWindowDDFv(void);

void render__9TWindowDDFv(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80346F48
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_selection__9TWindowDDFPv(void* a0);
void update_selected_id__9TWindowDDFPv(void *arg0);
s32 TWindowDD__sub_80346FC0(s16);
int TWindowDD__sub_803467CC(void);

    extern short lbl_805D6E24;
void reset_selection__9TWindowDDFPv(void* a0) { *(short*)((char*)a0 + 0x1c) = -1; lbl_805D6E24 = -1; TWindowDD__sub_803467CC(); }

extern s16 lbl_805D6E24;

void update_selected_id__9TWindowDDFPv(void *arg0) {
    if (((s16) M2C_FIELD(arg0, s16 *, 2) == 1) && (TWindowDD__sub_80346FC0(M2C_FIELD(arg0, s16 *, 4)) != 0)) {
        lbl_805D6E24 = M2C_FIELD(arg0, s16 *, 4);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803471C0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void open__9TWindowDDFii(s32 arg0, s32 arg1);
M2C_UNK open__11TWindowCtrlFiii(s32, s32, M2C_UNK);
M2C_UNK update_state__9TWindowDDFv(s32, s32, s32);

extern s32 lbl_805D6E10;

void open__9TWindowDDFii(s32 arg0, s32 arg1) {
    update_state__9TWindowDDFv(arg0, lbl_805D6E10, arg1);
    open__11TWindowCtrlFiii(arg1, lbl_805D6E10, 0x4F);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8034725C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 classify_id__9TWindowDDFs(s16 arg0);
s32 get_player_battle_flag_state__9TWindowDDFUs(u16 arg0);
void *TPlayerBattleCtrl4P__sub_801BA74C(u16);
s32 TWindowDD__sub_80347204(s16);
s32 TWindowDD__sub_80347238();

s32 classify_id__9TWindowDDFs(s16 arg0) {
    s32 var_r3;

    if (arg0 == 0x2E4) {
        return 0;
    }
    if (TWindowDD__sub_80347238() != 0) {
        return 1;
    }
    if (TWindowDD__sub_80347204(arg0) != 0) {
        return 2;
    }
    if (arg0 == 0x4F3) {
        return 3;
    }
    if (arg0 == 0x635) {
        return 4;
    }
    var_r3 = 7;
    if (arg0 == 0x650) {
        var_r3 = 5;
    }
    return var_r3;
}

s32 get_player_battle_flag_state__9TWindowDDFUs(u16 arg0) {
    s32 temp_r3_2;
    void *temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((u16) arg0);
    if (temp_r3 != NULL) {
        temp_r3_2 = M2C_FIELD(temp_r3, s32 *, 0x890);
        if (temp_r3_2 & 1) {
            return 0;
        }
        if (temp_r3_2 & 2) {
            return 2;
        }
        goto block_5;
    }
block_5:
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8034787C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_state_zero_unless_0x2C8__9TWindowDDFs(s16 arg0);
s32 TWindowDD__sub_80347858();

s32 is_state_zero_unless_0x2C8__9TWindowDDFs(s16 arg0) {
    if (arg0 == 0x2C8) {
        return 0;
    }
    return (u32) __cntlzw((u32) TWindowDD__sub_80347858()) >> 5;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80347D9C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 setup_entry__9TWindowDDFPvi(void *arg0, s32 arg1);
M2C_UNK init_and_set_field50__9TWindowDDFPvPv(u32, s32);
M2C_UNK TWindowDD__sub_803412A0(u32);
M2C_UNK TWindowDD__sub_803412F0(u32, s32);
s32 TWindowDD__sub_80348B70(s32);

extern s32 TWindowDD__data_805DFB50;

s32 setup_entry__9TWindowDDFPvi(void *arg0, s32 arg1) {
    s32 var_r31;
    u32 temp_r30;

    s32 temp_r4;
    var_r31 = 0;
    temp_r30 = M2C_FIELD(arg0, u32 *, 0x6C);
    if ((temp_r30 != 0U) && ((temp_r4 = TWindowDD__sub_80348B70(arg1)) != 0)) {
        TWindowDD__sub_803412F0(temp_r30, temp_r4);
        TWindowDD__sub_803412A0(temp_r30);
        init_and_set_field50__9TWindowDDFPvPv(temp_r30, TWindowDD__data_805DFB50);
        var_r31 = 1;
    }
    return var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80347F34
#include "types.h"

extern "C" {

void* get_entry__9TWindowDDFii(int a0, int a1);

    extern unsigned char lbl_804EFCA8[];
void* get_entry__9TWindowDDFii(int a0, int a1) {  return (char*)lbl_804EFCA8 + a1 * 8; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80347FD8
#include "types.h"

extern "C" {

void refresh_sub__9TWindowDDFPvPv(void* p, void* a1);
void apply_input__9TWindowDDFPvPv(void* p, void* a1);
void update__9TWindowDDFPvPv(void* p, void* a1);
int TWindowDD__sub_80341AE0(void*);
int set_mode_2__9TWindowDDFPv(void*);
int reset_cursor__9TWindowDDFPv(void*);

void refresh_sub__9TWindowDDFPvPv(void* p, void* a1) { TWindowDD__sub_80341AE0(a1); set_mode_2__9TWindowDDFPv(a1); }

void apply_input__9TWindowDDFPvPv(void* p, void* a1) { TWindowDD__sub_80341AE0(a1); reset_cursor__9TWindowDDFPv(a1); }

void update__9TWindowDDFPvPv(void* p, void* a1) { TWindowDD__sub_80341AE0(a1); set_mode_2__9TWindowDDFPv(a1); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80348080
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update__9TWindowDDFPvi(void *arg0, s32 arg1);
M2C_UNK TWindowDD__sub_80340E20(u32, s32);
M2C_UNK set_scale__9TWindowDDFPvii(u32, s32, s32);
M2C_UNK TWindowDD__sub_80341AF8(s32);
M2C_UNK reset_cursor__9TWindowDDFPv(s32);
s32 get_field_0x74__9TWindowDDFPv(s32);
s32 TWindowDD__sub_8034217C(s32);

extern f32 lbl_805DFB54;

void update__9TWindowDDFPvi(void *arg0, s32 arg1) {
    TWindowDD__sub_80341AF8(arg1);
    reset_cursor__9TWindowDDFPv(arg1);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 0U) {
        set_scale__9TWindowDDFPvii(M2C_FIELD(arg0, u32 *, 0x7C), get_field_0x74__9TWindowDDFPv(arg1), (s32) lbl_805DFB54);
        TWindowDD__sub_80340E20(M2C_FIELD(arg0, u32 *, 0x7C), TWindowDD__sub_8034217C(arg1));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80348100
#include "types.h"

extern "C" {

void set_default_coords__9TWindowDDFiPv(int a0, void* a1);
void init_layout__9TWindowDDFiPv(int a0, void* a1);
void set_default_positions__9TWindowDDFiPv(int a0, void* a1);
int refresh_sub__9TWindowDDFPvPv(void);
int update__9TWindowDDFPvPv(void);
int update__9TWindowDDFPvi(void);

    extern const float lbl_805DFB94;
    extern const float lbl_805DFB98;
    extern const float lbl_805DFB9C;
    extern const float lbl_805DFBA0;
void set_default_coords__9TWindowDDFiPv(int a0, void* a1) { refresh_sub__9TWindowDDFPvPv(); *(float*)((char*)a1 + 0x30) = lbl_805DFB94; *(float*)((char*)a1 + 0x40) = lbl_805DFB94; *(float*)((char*)a1 + 0x34) = lbl_805DFB98; *(float*)((char*)a1 + 0x44) = lbl_805DFB98; *(float*)((char*)a1 + 0x38) = lbl_805DFB9C; *(float*)((char*)a1 + 0x48) = lbl_805DFB9C; *(float*)((char*)a1 + 0x3c) = lbl_805DFBA0; *(float*)((char*)a1 + 0x4c) = lbl_805DFBA0; }

    extern const float lbl_805DFB80;
    extern const float lbl_805DFB84;
    extern const float lbl_805DFB88;
    extern const float lbl_805DFB8C;
void init_layout__9TWindowDDFiPv(int a0, void* a1) { update__9TWindowDDFPvPv(); *(float*)((char*)a1 + 0x30) = lbl_805DFB80; *(float*)((char*)a1 + 0x40) = lbl_805DFB80; *(float*)((char*)a1 + 0x34) = lbl_805DFB84; *(float*)((char*)a1 + 0x44) = lbl_805DFB84; *(float*)((char*)a1 + 0x38) = lbl_805DFB88; *(float*)((char*)a1 + 0x48) = lbl_805DFB88; *(float*)((char*)a1 + 0x3c) = lbl_805DFB8C; *(float*)((char*)a1 + 0x4c) = lbl_805DFB8C; }

    extern const float TWindowDD__data_805DFB6C;
    extern const float lbl_805DFB70;
    extern const float TWindowDD__data_805DFB74;
    extern const float lbl_805DFB78;
void set_default_positions__9TWindowDDFiPv(int a0, void* a1) { update__9TWindowDDFPvi(); *(float*)((char*)a1 + 0x30) = TWindowDD__data_805DFB6C; *(float*)((char*)a1 + 0x40) = TWindowDD__data_805DFB6C; *(float*)((char*)a1 + 0x34) = lbl_805DFB70; *(float*)((char*)a1 + 0x44) = lbl_805DFB70; *(float*)((char*)a1 + 0x38) = TWindowDD__data_805DFB74; *(float*)((char*)a1 + 0x48) = TWindowDD__data_805DFB74; *(float*)((char*)a1 + 0x3c) = lbl_805DFB78; *(float*)((char*)a1 + 0x4c) = lbl_805DFB78; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80348214
#include "types.h"

extern "C" {

int TBoss3Volopt__sub_8022675C(void*, void*, void*, void*);
int test_input_flag_4__9TWindowDDFPv(void* p);
int TWindowDD__sub_80340508(void*, int);

void spawn_window__9TWindowDDFv(void) { TBoss3Volopt__sub_8022675C((void*)344320, (void*)0, (void*)0, (void*)0); }
void play_se__9TWindowDDFv(void) { TBoss3Volopt__sub_8022675C((void*)339734, (void*)0, (void*)0, (void*)0); }
void play_sound__9TWindowDDFv(void) { TBoss3Volopt__sub_8022675C((void*)339201, (void*)0, (void*)0, (void*)0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80348304
#include "types.h"

extern "C" {

int TBoss3Volopt__sub_8022675C(void*, void*, void*, void*);
int test_input_flag_4__9TWindowDDFPv(void* p);
int TWindowDD__sub_80340508(void*, int);

int test_input_flag_4__9TWindowDDFPv(void* p) { return TWindowDD__sub_80340508((char*)p + 0x1c, 4); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8034832C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void dispatch_state__9TWindowDDFv(void);
M2C_UNK TWindowDD__sub_8034435C();
M2C_UNK TWindowDD__sub_80344568();
M2C_UNK TWindowDD__sub_80344774();
M2C_UNK TWindowDD__sub_80346434();
M2C_UNK TWindowDD__sub_80346640();

extern s32 TWindowDD__data_805D6E08;

void dispatch_state__9TWindowDDFv(void) {
    switch ((s32) TWindowDD__data_805D6E08) {
    case 0:
        TWindowDD__sub_80346640();
        return;
    default:
        TWindowDD__sub_80346434();
        return;
    case 4:
        TWindowDD__sub_80344774();
        return;
    case 2:
        TWindowDD__sub_80344568();
        return;
    case 3:
        TWindowDD__sub_8034435C();
        return;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80348424
#include "types.h"

extern "C" {

int TWindowDD__sub_80348520(void* a0 = 0);
void set_state__9TWindowDDFPv(void* p);
int TWindowDD__sub_80348424(void);
int TWindowDD__sub_80348448(void);
int TWindowDD__sub_8034B008(void*);

int TWindowDD__sub_80348424(void) { return TWindowDD__sub_8034B008((void*)(1)); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8034849C
#include "types.h"

extern "C" {

int TWindowDD__sub_80348520(void* a0 = 0);
void set_state__9TWindowDDFPv(void* p);
int TWindowDD__sub_80348424(void);
int TWindowDD__sub_80348448(void);
int TWindowDD__sub_8034B008(void*);

void set_state__9TWindowDDFPv(void* p) { *(int*)((char*)p + 0xa8) = 3; TWindowDD__sub_80348520(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8034861C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_state__9TWindowDDFv(void);
M2C_UNK TWindowDD__sub_80344980();
M2C_UNK TWindowDD__sub_80344F54();
M2C_UNK TWindowDD__sub_80345608();
M2C_UNK TWindowDD__sub_80345C64();
M2C_UNK TWindowDD__sub_803461CC();

extern s32 TWindowDD__data_805D6E08;

void update_state__9TWindowDDFv(void) {
    switch ((s32) TWindowDD__data_805D6E08) {
    case 0:
        TWindowDD__sub_803461CC();
        return;
    default:
        TWindowDD__sub_80345C64();
        return;
    case 4:
        TWindowDD__sub_80345608();
        return;
    case 2:
        TWindowDD__sub_80344F54();
        return;
    case 3:
        TWindowDD__sub_80344980();
        return;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803486F0
#include "types.h"

extern "C" {

s32 clamp_range_5FA_682__9TWindowDDFs(s16 arg0);

s32 clamp_range_5FA_682__9TWindowDDFs(s16 arg0) {
    if ((arg0 >= 0x5FA) && (arg0 <= 0x682)) {
        return arg0 - 0x5FA;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80348714
#include "types.h"

extern "C" {

s32 clamp_range_2C9_552__9TWindowDDFs(s16 arg0);

s32 clamp_range_2C9_552__9TWindowDDFs(s16 arg0) {
    if ((arg0 >= 0x2C9) && (arg0 <= 0x552)) {
        return arg0 - 0x2C9;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80348738
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void show_message_by_count__9TWindowDDFii(s32 arg0, s32 arg1);
s32 TWindowDD__sub_803487DC();
M2C_UNK TWindowDD__sub_80348818(M2C_UNK, s32, s32);

void show_message_by_count__9TWindowDDFii(s32 arg0, s32 arg1) {
    if (TWindowDD__sub_803487DC() > 0xF) {
        TWindowDD__sub_80348818(0xA, arg0, arg1);
        return;
    }
    TWindowDD__sub_80348818(0x20, arg0, arg1);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80348794
#include "types.h"

extern "C" {

void maybe_scroll__9TWindowDDFPvPv(void* p, void* a1);
int TWindowDD__sub_803487DC(void*);
int TWindowDD__sub_80348818(void*, void*, void*);

void maybe_scroll__9TWindowDDFPvPv(void* p, void* a1) { if (TWindowDD__sub_803487DC(p) > 15) { TWindowDD__sub_80348818((void*)10, p, a1); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x803488A8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

typedef struct { char pad[0xBC]; } Buf;

void append_string__9TWindowDDFiiPv(s32 arg0, s32 arg1, s32 *arg2);
void draw__9TWindowDDFPviif(void *arg0, s32 arg1, s32 arg2, f32 farg0);
s32 TWindowDD__sub_803485F4(s32, s32 *);
M2C_UNK TWindowDD__sub_803489B8(s32, Buf *, M2C_UNK);
M2C_UNK TWindowDD__sub_80348A2C(s32, Buf *);
M2C_UNK TWindowDD__sub_80348A9C(Buf *, s32);
M2C_UNK TWindowDD__sub_80348AD4(f32, f32);
s32 get_draw_count__9TWindowDDFPv(s32);
M2C_UNK draw_transformed_primitive__9TWindowDDFPvPvPvPv(Buf *, M2C_UNK, s32, M2C_UNK);
M2C_UNK TWindowDD__sub_803403F8(Buf *, M2C_UNK);
s32 strlen();
M2C_UNK strncpy(s32, s32, s32);

void append_string__9TWindowDDFiiPv(s32 arg0, s32 arg1, s32 *arg2) {
    s32 temp_r31;

    if (arg0 != 0) {
        temp_r31 = strlen();
        if (TWindowDD__sub_803485F4(temp_r31, arg2) != 0) {
            strncpy(arg1 + *arg2, arg0, temp_r31);
            *arg2 += temp_r31;
        }
    }
}

extern s32 lbl_805D63F0;

void draw__9TWindowDDFPviif(void *arg0, s32 arg1, s32 arg2, f32 farg0) {
    Buf sp8;
    s32 temp_r31;

    temp_r31 = get_draw_count__9TWindowDDFPv(lbl_805D63F0);
    TWindowDD__sub_80348AD4(M2C_FIELD(arg0, f32 *, 0x54), farg0);
    TWindowDD__sub_803403F8(&sp8, -1);
    TWindowDD__sub_80348A9C(&sp8, arg2);
    TWindowDD__sub_80348A2C(arg1, &sp8);
    TWindowDD__sub_803489B8(arg1, &sp8, 0);
    draw_transformed_primitive__9TWindowDDFPvPvPvPv(&sp8, 8, temp_r31, 1);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80348AE8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_draw_count__9TWindowDDFPv(void **arg0);

s32 get_draw_count__9TWindowDDFPv(void **arg0) {
    return *M2C_FIELD(M2C_FIELD(*arg0, void **, 0x20), s32 **, 0xC);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80348BC8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_entry__9TWindowDDFi(s32 arg0);

extern s32 TWindowDD__data_805D6E30;
extern s32 lbl_805D6E3C;

s32 get_entry__9TWindowDDFi(s32 arg0) {
    if ((arg0 < 0) || (arg0 >= (s32) lbl_805D6E3C)) {
        return 0;
    }
    return TWindowDD__data_805D6E30 + (arg0 * 8);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80348C54
#include "types.h"

extern "C" {

int handle_word_select__9TWindowDDFPv(void* p);
int TWindowDD__sub_80348D0C(void*);

int handle_word_select__9TWindowDDFPv(void* p) { return TWindowDD__sub_80348D0C((char*)p + 0x4); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80348CC4
#include "types.h"

extern "C" {

int TLobby__send_and_handle_60(void*);
int handle_word_select__9TWindowDDFPv(void*);
void init_header__9TWindowDDFPv(void* p);
void reset_index__9TWindowDDFPv(void* p);
void set_field14__9TWindowDDFPvi(void* p, s32 v);
s32 TWindowDD__sub_80348D88(void* p);

void update_and_send_lobby__9TWindowDDFPv(void* p) { handle_word_select__9TWindowDDFPv(p); TLobby__send_and_handle_60(p); }
void init_header__9TWindowDDFPv(void* p) { *(u8*)((char*)p + 0x0) = 116; *(u8*)((char*)p + 0x1) = 8; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80348D74
#include "types.h"

extern "C" {

int TLobby__send_and_handle_60(void*);
int handle_word_select__9TWindowDDFPv(void*);
void init_header__9TWindowDDFPv(void* p);
void reset_index__9TWindowDDFPv(void* p);
void set_field14__9TWindowDDFPvi(void* p, s32 v);
s32 TWindowDD__sub_80348D88(void* p);

void reset_index__9TWindowDDFPv(void* p) { *(s32*)((char*)p + 0x14) = 0; }
void set_field14__9TWindowDDFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x14) = v; }
s32 TWindowDD__sub_80348D88(void* p) { return *(s32*)((char*)p + 0x14); }

}
#endif
#endif
