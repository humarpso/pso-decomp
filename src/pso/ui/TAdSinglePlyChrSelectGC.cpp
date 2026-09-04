#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset__23TAdSinglePlyChrSelectGCFPv(void *arg0);

void reset__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(arg0, s32 *, 0x20);
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = -1;
    M2C_FIELD(arg0, s32 *, 0x58) = -1;
    M2C_FIELD(arg0, s32 *, 0x5C) = -1;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8001ED80
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_global_state__23TAdSinglePlyChrSelectGCFv(void);

extern s32 lbl_805D5F6C;

s32 get_global_state__23TAdSinglePlyChrSelectGCFv(void) {
    return lbl_805D5F6C;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80076DF4
#include "types.h"

extern "C" {

s32 TLobby__sub_80076BC8(void *);
s32 TWindowSubSymbolChat__sub_80076F88(void *);
s32 TWindowDD__sub_80348C78(void *);
void TWindowShortListCtrl__sub_80076D1C(void);
int TWindowKeyBoardSoft__sub_80076E2C(void);
int fn_80076CD0(void);
void TAdSinglePlyChrSelectGC__sub_80076DF4(void* p, void* q);

void TAdSinglePlyChrSelectGC__sub_80076DF4(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80077AE8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdSinglePlyChrSelectGC__sub_80077AE8(s32 arg0);
u32 alloc__23TAdSinglePlyChrSelectGCFPv(M2C_UNK);
M2C_UNK fn_80077B34(u32, s32);

extern u32 lbl_805D4E58;

void TAdSinglePlyChrSelectGC__sub_80077AE8(s32 arg0) {
    if ((u32) lbl_805D4E58 == 0U) {
        lbl_805D4E58 = alloc__23TAdSinglePlyChrSelectGCFPv(0x704);
    }
    fn_80077B34(lbl_805D4E58, arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007B7E4
#include "types.h"

extern "C" {

int get_state__23TAdSinglePlyChrSelectGCFv(void);

    extern int lbl_805D5F68;
int get_state__23TAdSinglePlyChrSelectGCFv(void) {  return lbl_805D5F68; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007EB94
#include "types.h"
typedef s32 M2C_UNK;

extern "C" {

int alloc__23TAdSinglePlyChrSelectGCFPv(void* p);
int TQuestVmDownLoadServer__sub_8007EBDC(void* p);
int alloc__22TQuestVmDownLoadServerFPv(void* p);
int fn_803DE864(void*);
int xmalloc__FUl(void*);
M2C_UNK xfree__FPv();

int alloc__23TAdSinglePlyChrSelectGCFPv(void* p) { return xmalloc__FUl(p); }
void safe_free__23TAdSinglePlyChrSelectGCFUi(u32 arg0) {
    if (arg0 != 0U) {
        xfree__FPv();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FFC34
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void advance_field28__23TAdSinglePlyChrSelectGCFPv(void *arg0);
M2C_UNK TAdSinglePlyChrSelectGC__sub_800FFB38();

void advance_field28__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    TAdSinglePlyChrSelectGC__sub_800FFB38();
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) + 0x444);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801334D4
#include "types.h"

extern "C" {

s32 get_selected_slot__23TAdSinglePlyChrSelectGCFPv(void* p);
s32 TAdSinglePlyChrSelectGC__sub_801334DC(void* p);
void TAdSinglePlyChrSelectGC__sub_801334E4(void);
void set_position__23TAdSinglePlyChrSelectGCFPvPv(void* p, void* q);
void noop_laser__23TAdSinglePlyChrSelectGCFv(void);
void TAdSinglePlyChrSelectGC__sub_80133508(void);
void forward_to_field_0x14__23TAdSinglePlyChrSelectGCFPvPv(void* p, void* a1);
void TAdSinglePlyChrSelectGC__sub_80133530(void* p, void* q);
void TAdSinglePlyChrSelectGC__sub_80133544(void);
void TAdSinglePlyChrSelectGC__sub_80133548(void);
void set_vec3__23TAdSinglePlyChrSelectGCFPvPv(void* p, void* q);

s32 get_selected_slot__23TAdSinglePlyChrSelectGCFPv(void* p) { return *(s32*)((char*)p + 0xac); }
s32 TAdSinglePlyChrSelectGC__sub_801334DC(void* p) { return *(s32*)((char*)p + 0xa4); }
void TAdSinglePlyChrSelectGC__sub_801334E4(void) {  }
void set_position__23TAdSinglePlyChrSelectGCFPvPv(void* p, void* q) { *(f32*)((char*)p + 0x20) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x24) = *(f32*)((char*)q + 0x8); *(f32*)((char*)p + 0x28) = *(f32*)((char*)q + 0xc); }
void noop_laser__23TAdSinglePlyChrSelectGCFv(void) {  }
void TAdSinglePlyChrSelectGC__sub_80133508(void) {  }
void forward_to_field_0x14__23TAdSinglePlyChrSelectGCFPvPv(void* p, void* a1) { TAdSinglePlyChrSelectGC__sub_80133530((void*)((char*)p + 0x14), (void*)(a1)); }
void TAdSinglePlyChrSelectGC__sub_80133530(void* p, void* q) { *(f32*)((char*)p + 0x0) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); }
void TAdSinglePlyChrSelectGC__sub_80133544(void) {  }
void TAdSinglePlyChrSelectGC__sub_80133548(void) {  }
void set_vec3__23TAdSinglePlyChrSelectGCFPvPv(void* p, void* q) { *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0xc) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x10) = *(f32*)((char*)q + 0x8); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80145778
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render_status_disp__23TAdSinglePlyChrSelectGCFPvff(void *arg0, f32 arg1, f32 arg2);
M2C_UNK TWindowSubStatusDisp__sub_8014556C(void *, s32, s32, f32, f32, f32);

extern const f32 lbl_805DB1A8;

void render_status_disp__23TAdSinglePlyChrSelectGCFPvff(void *arg0, f32 arg1, f32 arg2) {
    TWindowSubStatusDisp__sub_8014556C(arg0, -1, 0, arg1, arg2, lbl_805DB1A8);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801457A4
#include "types.h"
#pragma fp_contract on
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_801457A4 { char pad[0x18]; };
struct VObj_801457A4 : Base_801457A4 {
    virtual void m0(int);
};

extern "C" {

void free_resources__23TAdSinglePlyChrSelectGCFv(void);
M2C_UNK TLobby__sub_803DA16C(M2C_UNK *);
M2C_UNK free__11TOBoss4RockFUi(s32);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(s32);

extern M2C_UNK lbl_804A74E8[];
extern s32 lbl_805D56B0;
extern s32 lbl_805D56B4;
extern s32 lbl_805D56BC;
extern struct VObj_801457A4 *lbl_805D56C4;

void free_resources__23TAdSinglePlyChrSelectGCFv(void) {
    if (lbl_805D56C4 != NULL) {
        lbl_805D56C4->m0(1);
    }
    TLobby__sub_803DA16C(lbl_804A74E8);
    free__11TOBoss4RockFUi(lbl_805D56BC);
    free__11TOBoss4RockFUi(lbl_805D56B4);
    safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D56B0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A6D60
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *arg0);
s32 pack_color_bits__13TRaderMapCoreFii();

u8 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    return (u8) ((M2C_FIELD(arg0, s32 *, 0x4C) & pack_color_bits__13TRaderMapCoreFii()) != 0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C50A8
#include "types.h"

extern "C" {

void set_slot__23TAdSinglePlyChrSelectGCFi(int a0);

    extern int lbl_805D5F64;
void set_slot__23TAdSinglePlyChrSelectGCFi(int a0) { *(short*)((char*)lbl_805D5F64 + 0x21b0) = a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C50B4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u16 get_char_select_slot__23TAdSinglePlyChrSelectGCFv(void);

extern u8 *lbl_805D5F64;

u16 get_char_select_slot__23TAdSinglePlyChrSelectGCFv(void) {
    return M2C_FIELD(lbl_805D5F64, u16 *, 0x21B0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C50C0
#include "types.h"

extern "C" {

void TAdSinglePlyChrSelectGC__sub_801C50C0(int a0);

    extern int lbl_805D5F64;
void TAdSinglePlyChrSelectGC__sub_801C50C0(int a0) { *(short*)((char*)lbl_805D5F64 + 0x21ae) = a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C50CC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u16 TAdSinglePlyChrSelectGC__sub_801C50CC(void);

extern u8 *lbl_805D5F64;

u16 TAdSinglePlyChrSelectGC__sub_801C50CC(void) {
    return M2C_FIELD(lbl_805D5F64, u16 *, 0x21AE);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C50D8
#include "types.h"

extern "C" {

void TAdSinglePlyChrSelectGC__sub_801C50D8(int a0);

    extern int lbl_805D5F64;
void TAdSinglePlyChrSelectGC__sub_801C50D8(int a0) { *(short*)((char*)lbl_805D5F64 + 0x21ac) = a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C50E4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u16 TAdSinglePlyChrSelectGC__sub_801C50E4(void);

extern u8 *lbl_805D5F64;

u16 TAdSinglePlyChrSelectGC__sub_801C50E4(void) {
    return M2C_FIELD(lbl_805D5F64, u16 *, 0x21AC);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C50F0
#include "types.h"

extern "C" {

void TAdSinglePlyChrSelectGC__sub_801C50F0(int a0);

    extern int lbl_805D5F64;
void TAdSinglePlyChrSelectGC__sub_801C50F0(int a0) { *(short*)((char*)lbl_805D5F64 + 0x21aa) = a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C50FC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u16 TAdSinglePlyChrSelectGC__sub_801C50FC(void);

extern u8 *lbl_805D5F64;

u16 TAdSinglePlyChrSelectGC__sub_801C50FC(void) {
    return M2C_FIELD(lbl_805D5F64, u16 *, 0x21AA);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C5108
#include "types.h"

extern "C" {

void TAdSinglePlyChrSelectGC__sub_801C5108(int a0);

    extern int lbl_805D5F64;
void TAdSinglePlyChrSelectGC__sub_801C5108(int a0) { *(short*)((char*)lbl_805D5F64 + 0x21a8) = a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C5114
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u16 TAdSinglePlyChrSelectGC__sub_801C5114(void);

extern u8 *lbl_805D5F64;

u16 TAdSinglePlyChrSelectGC__sub_801C5114(void) {
    return M2C_FIELD(lbl_805D5F64, u16 *, 0x21A8);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C5120
#include "types.h"

extern "C" {

void TAdSinglePlyChrSelectGC__sub_801C5120(void);

    extern int lbl_805D5D90;
void TAdSinglePlyChrSelectGC__sub_801C5120(void) { lbl_805D5D90 = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C512C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy__23TAdSinglePlyChrSelectGCFv(void);
M2C_UNK queue_destruction__7TObjectFv(void*);

extern u32 lbl_805D5DD0;

void destroy__23TAdSinglePlyChrSelectGCFv(void) {
    if ((u32) lbl_805D5DD0 != 0U) {
        queue_destruction__7TObjectFv((void*)lbl_805D5DD0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C5158
#include "types.h"

extern "C" {

void TAdSinglePlyChrSelectGC__sub_801C5158(void);

    extern int lbl_805D5DD0;
void TAdSinglePlyChrSelectGC__sub_801C5158(void) { lbl_805D5DD0 = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C5164
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create_if_key_pressed__23TAdSinglePlyChrSelectGCFv(void);
s32 get_global_state__14TOKeyMachine01Fv();
u32 __nw__7TObjectFUl(M2C_UNK);
u32 fn_801C5380(void *, s32);

extern u32 lbl_805D5DD0;
extern s32 tl_00;

s32 create_if_key_pressed__23TAdSinglePlyChrSelectGCFv(void) {
    s32 temp_r3;
    u32 var_r0;

    temp_r3 = get_global_state__14TOKeyMachine01Fv();
    if ((temp_r3 != 0x10) && (temp_r3 != 0x11)) {
        return 0;
    }
    if ((u32) lbl_805D5DD0 != 0U) {
        return 0;
    }
    var_r0 = __nw__7TObjectFUl(0x28);
    if (var_r0 != 0U) {
        var_r0 = fn_801C5380((void *) var_r0, tl_00);
    }
    lbl_805D5DD0 = var_r0;
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D5DAC
#include "types.h"

extern "C" {

int get_game_mode__23TAdSinglePlyChrSelectGCFv(void);

    extern int lbl_805D5FA4;
int get_game_mode__23TAdSinglePlyChrSelectGCFv(void) {  return lbl_805D5FA4; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D5DB4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 is_both_confirmed__23TAdSinglePlyChrSelectGCFPv(void *arg0);

u8 is_both_confirmed__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    s32 var_r4;

    var_r4 = 0;
    if (((u8) M2C_FIELD(arg0, u8 *, 0) == 1) && ((u8) M2C_FIELD(arg0, u8 *, 1) == 1)) {
        var_r4 = 1;
    }
    return (u8)var_r4;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D5DDC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s16 TAdSinglePlyChrSelectGC__sub_801D5DDC(void *arg0);
M2C_UNK set_section_index__15TFontSmallLobbyFPvs(void *, M2C_UNK);

s16 TAdSinglePlyChrSelectGC__sub_801D5DDC(void *arg0) {
    s16 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s16 *, 4);
    if ((temp_r3 < 0) || (temp_r3 > 0xA)) {
        set_section_index__15TFontSmallLobbyFPvs(arg0, 0);
    }
    return M2C_FIELD(arg0, s16 *, 4);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801E4CF0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void advance_wrapped_cursor__23TAdSinglePlyChrSelectGCFPv(void *arg0);

void advance_wrapped_cursor__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;

    M2C_FIELD(arg0, s32 *, 0x4C) = (s32) (M2C_FIELD(arg0, s32 *, 0x4C) + 1);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x4C);
    temp_r4 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r0 >= temp_r4) {
        M2C_FIELD(arg0, s32 *, 0x4C) = (s32) (temp_r0 - temp_r4);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801E4D18
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *destroy_and_free__23TAdSinglePlyChrSelectGCFPvs(void *arg0, s16 arg1);
M2C_UNK TLobby__sub_803DA16C(s32);
M2C_UNK __dl__FPv(void *);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(s32);

extern M2C_UNK lbl_804C57E0[];

void *destroy_and_free__23TAdSinglePlyChrSelectGCFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x50) = lbl_804C57E0;
        TLobby__sub_803DA16C(M2C_FIELD(arg0, s32 *, 0x3C));
        safe_free__23TAdSinglePlyChrSelectGCFUi(M2C_FIELD(arg0, s32 *, 0x44));
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801E4D78
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_image_buffer__23TAdSinglePlyChrSelectGCFPvPvi(u8 *arg0, u8 *arg1, s32 arg2);
M2C_UNK TLobby__sub_801E47C4(void *);
M2C_UNK set_render_rect__10TObjPlayerFPviiii(void *, int, int, int, int);
M2C_UNK TObjPlayer__sub_803DA218(void *, void *, int, int);
s32 alloc__22TQuestVmDownLoadServerFPv(int);

void init_image_buffer__23TAdSinglePlyChrSelectGCFPvPvi(u8 *arg0, u8 *arg1, s32 arg2) {
    u8 *temp_r3;

    M2C_FIELD(arg0, void **, 0x40) = arg1;
    M2C_FIELD(arg0, s32 *, 0x48) = arg2;
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), u16 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), u16 *, 0x1E);
    temp_r3 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x40));
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(temp_r3, u16 *, 8);
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) | (M2C_FIELD(temp_r3, u16 *, 0xA) << 0x10));
    M2C_FIELD(arg0, s32 *, 0x44) = alloc__22TQuestVmDownLoadServerFPv((int) ((M2C_FIELD(arg0, s32 *, 0) * (M2C_FIELD(arg0, s32 *, 4) * 2)) + 0x20));
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x3C), void **, 0) = (void *) (arg0 + 0xC);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x3C), s32 *, 4) = 1;
    set_render_rect__10TObjPlayerFPviiii((void *) (arg0 + 0x18), (int) (M2C_FIELD(arg0, s32 *, 0x44) + 0x20), (int) (5), (int) (M2C_FIELD(arg0, s32 *, 4)), (int) (M2C_FIELD(arg0, s32 *, 0)));
    TObjPlayer__sub_803DA218((void *) (arg0 + 0xC), (void *) (arg0 + 0x18), (int) (M2C_FIELD(arg0, s32 *, 8)), (int) (0x40800000));
    TLobby__sub_801E47C4((void *) (M2C_FIELD(arg0, void **, 0x3C)));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801FBF54
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void copy_name__23TAdSinglePlyChrSelectGCFi(s32 arg0);
u32 TAdPlayerLoadGC__sub_80381ABC();

M2C_UNK strncpy(M2C_UNK *, M2C_UNK *, M2C_UNK);
extern M2C_UNK lbl_805D5FB0;

void copy_name__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    u32 var_r3;
    if (arg0 >= 0) {
        var_r3 = TAdPlayerLoadGC__sub_80381ABC();
        if (var_r3 != 0U) {
            strncpy((M2C_UNK *)var_r3, &lbl_805D5FB0, 4);
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801FC1A4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 is_level_capped__23TAdSinglePlyChrSelectGCFPv(void *arg0);
s32 find_entry__23TAdSinglePlyChrSelectGCFii(s32 arg0, s32 arg1);
s32 TObjPlayer__sub_801049C8(s32, s32);
s32 TCheckRoomSequence__sub_80211574(s32);

u8 is_level_capped__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    return (u8) (M2C_FIELD(arg0, s32 *, 0x248) >= 0xC8);
}

s32 find_entry__23TAdSinglePlyChrSelectGCFii(s32 arg0, s32 arg1) {
    s32 var_r31;
    s32 var_r30;

    var_r31 = arg0 + 0x250;
    var_r30 = 0;
loop_1:
    if ((TCheckRoomSequence__sub_80211574(var_r31) == 0) && (TObjPlayer__sub_801049C8(arg1, var_r31) != 0)) {
        return 1;
    }
    var_r30 += 1;
    var_r31 += 0x18;
    if (var_r30 >= 0xC8) {
        return 0;
    }
    goto loop_1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801FC234
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 register_in_free_room_slot__23TAdSinglePlyChrSelectGCFPvi(u8 *arg0, s32 arg1);
M2C_UNK TCheckRoomSequence__sub_802114D4(int, void *);
s32 TCheckRoomSequence__sub_80211574(int);

s32 register_in_free_room_slot__23TAdSinglePlyChrSelectGCFPvi(u8 *arg0, s32 arg1) {
    s32 var_r31;
    s32 var_r30;

    var_r30 = 0;
    var_r31 = (long) (arg0 + 0x250);
loop_1:
    if (TCheckRoomSequence__sub_80211574((int) (var_r31)) != 0) {
        TCheckRoomSequence__sub_802114D4((int) (var_r31), (void *) (arg1));
        M2C_FIELD(arg0, s32 *, 0x248) = (s32) (M2C_FIELD(arg0, s32 *, 0x248) + 1);
        return 1;
    }
    var_r30 += 1;
    var_r31 += 0x18;
    if (var_r30 >= 0xC8) {
        return 0;
    }
    goto loop_1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801FC2AC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_ready__23TAdSinglePlyChrSelectGCFv(void);
u16 get_card_window_field__23TAdSinglePlyChrSelectGCFi(int arg0);
u16 get_card_window_status__23TAdSinglePlyChrSelectGCFi(int arg0);
u16 TAdSinglePlyChrSelectGC__sub_801FC36C(int arg0);
u16 get_card_state__23TAdSinglePlyChrSelectGCFi(int arg0);
u16 get_card_flag__23TAdSinglePlyChrSelectGCFi(int arg0);
u16 get_card_field__23TAdSinglePlyChrSelectGCFi(int arg0);
u16 get_card_status__23TAdSinglePlyChrSelectGCFi(int arg0);
u16 get_card_value__23TAdSinglePlyChrSelectGCFi(int arg0);
u16 get_card_field_21a8__23TAdSinglePlyChrSelectGCFi(int arg0);
s32 is_ready__6TLobbyFv();
s32 TLobby__sub_8030A770();
s32 TLobby__sub_8030A7B0();
void *get_card_window__17TWindowSubComCardFUi(u16);

s32 is_ready__23TAdSinglePlyChrSelectGCFv(void) {
    if (TLobby__sub_8030A7B0() == 0) {
        return 1;
    }
    if (TLobby__sub_8030A770() != 0) {
        return 0;
    }
    return (u32) __cntlzw(is_ready__6TLobbyFv()) >> 5;
}

u16 get_card_window_field__23TAdSinglePlyChrSelectGCFi(int arg0) {
    void *temp_r3;

    temp_r3 = get_card_window__17TWindowSubComCardFUi(arg0);
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, u16 *, 0x235A);
    }
    return 0U;
}

u16 get_card_window_status__23TAdSinglePlyChrSelectGCFi(int arg0) {
    void *temp_r3;

    temp_r3 = get_card_window__17TWindowSubComCardFUi(arg0);
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, u16 *, 0x2358);
    }
    return 0U;
}

u16 TAdSinglePlyChrSelectGC__sub_801FC36C(int arg0) {
    void *temp_r3;

    temp_r3 = get_card_window__17TWindowSubComCardFUi(arg0);
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, u16 *, 0x2356);
    }
    return 0U;
}

u16 get_card_state__23TAdSinglePlyChrSelectGCFi(int arg0) {
    void *temp_r3;

    temp_r3 = get_card_window__17TWindowSubComCardFUi(arg0);
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, u16 *, 0x2354);
    }
    return 0U;
}

u16 get_card_flag__23TAdSinglePlyChrSelectGCFi(int arg0) {
    void *temp_r3;

    temp_r3 = get_card_window__17TWindowSubComCardFUi(arg0);
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, u16 *, 0x21B0);
    }
    return 0U;
}

u16 get_card_field__23TAdSinglePlyChrSelectGCFi(int arg0) {
    void *temp_r3;

    temp_r3 = get_card_window__17TWindowSubComCardFUi(arg0);
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, u16 *, 0x21AE);
    }
    return 0U;
}

u16 get_card_status__23TAdSinglePlyChrSelectGCFi(int arg0) {
    void *temp_r3;

    temp_r3 = get_card_window__17TWindowSubComCardFUi(arg0);
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, u16 *, 0x21AC);
    }
    return 0U;
}

u16 get_card_value__23TAdSinglePlyChrSelectGCFi(int arg0) {
    void *temp_r3;

    temp_r3 = get_card_window__17TWindowSubComCardFUi(arg0);
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, u16 *, 0x21AA);
    }
    return 0U;
}

u16 get_card_field_21a8__23TAdSinglePlyChrSelectGCFi(int arg0) {
    void *temp_r3;

    temp_r3 = get_card_window__17TWindowSubComCardFUi(arg0);
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, u16 *, 0x21A8);
    }
    return 0U;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801FC858
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdSinglePlyChrSelectGC__sub_801FC8B4(s32 arg0, s16 arg1);
s32 register_callback__23TAdSinglePlyChrSelectGCFis(s32 arg0, s16 arg1);
M2C_UNK __dl__FPv(s32);
M2C_UNK __dt__12TPlyCharDataFv(M2C_UNK, M2C_UNK);
M2C_UNK TObjPlayer__sub_803966F8(s32, M2C_UNK *, M2C_UNK, M2C_UNK);

s32 register_callback__23TAdSinglePlyChrSelectGCFis(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        TObjPlayer__sub_803966F8(arg0 + 4, (M2C_UNK *)TAdSinglePlyChrSelectGC__sub_801FC8B4, 0x2798, 7);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

s32 TAdSinglePlyChrSelectGC__sub_801FC8B4(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        __dt__12TPlyCharDataFv(arg0, -1);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801FC94C
#include "types.h"

extern "C" {

void* init_char_data__23TAdSinglePlyChrSelectGCFPv(void* p);
int TAdSinglePlyChrSelectGC__sub_801FC984(void*);
int __ct__12TPlyCharDataFv(void*);

void* init_char_data__23TAdSinglePlyChrSelectGCFPv(void* p) { __ct__12TPlyCharDataFv(p); TAdSinglePlyChrSelectGC__sub_801FC984((char*)p + 0x41c); return p; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801FC9D4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fields_equal__23TAdSinglePlyChrSelectGCFPvPv(void *arg0, void *arg1);

s32 fields_equal__23TAdSinglePlyChrSelectGCFPvPv(void *arg0, void *arg1) {
    return (u32) __cntlzw((u32) (M2C_FIELD(arg1, s32 *, 0x118) - M2C_FIELD(arg0, s32 *, 0x118))) >> 5;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801FCAE4
#include "types.h"

extern "C" {

int poll_memcard_status__23TAdSinglePlyChrSelectGCFPv(void* p);
int TAdSinglePlyChrSelectGC__sub_801FC5D8(void*);

int poll_memcard_status__23TAdSinglePlyChrSelectGCFPv(void* p) { return TAdSinglePlyChrSelectGC__sub_801FC5D8(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801FCCCC
#include "types.h"

extern "C" {

void set_id__23TAdSinglePlyChrSelectGCFPvi(void* p, s32 v);
s32 get_type__23TAdSinglePlyChrSelectGCFPv(void* p);

void set_id__23TAdSinglePlyChrSelectGCFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }
s32 get_type__23TAdSinglePlyChrSelectGCFPv(void* p) { return *(s32*)((char*)p + 0x0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801FD94C
#include "types.h"

extern "C" {

void setup__23TAdSinglePlyChrSelectGCFi(int a0);
int draw_window_bg__23TAdSinglePlyChrSelectGCFiiii(void*, void*, void*, void*);
int set_quest_download_server__23TAdSinglePlyChrSelectGCFi(void);

    extern unsigned char lbl_804C89BC[];
    extern int lbl_805D49B4;
    extern int lbl_805D5F80;
    extern int lbl_805D5F88;
    extern int lbl_805D5F98;
void setup__23TAdSinglePlyChrSelectGCFi(int a0) { lbl_805D5F80 = a0; set_quest_download_server__23TAdSinglePlyChrSelectGCFi(); lbl_805D49B4 = 1; draw_window_bg__23TAdSinglePlyChrSelectGCFiiii((void*)(lbl_805D5F80), lbl_804C89BC, (void*)(lbl_805D5F98), (void*)(lbl_805D5F88)); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801FDB14
#include "types.h"

extern "C" {

void open_confirm_window__23TAdSinglePlyChrSelectGCFv(void);
int draw_window_bg__23TAdSinglePlyChrSelectGCFiiii(void*, void*, void*, void*);

    extern unsigned char lbl_804C88C0[];
    extern int lbl_805D49B4;
    extern int lbl_805D5F78;
    extern int lbl_805D5F84;
    extern int lbl_805D5F94;
void open_confirm_window__23TAdSinglePlyChrSelectGCFv(void) { lbl_805D49B4 = 1; draw_window_bg__23TAdSinglePlyChrSelectGCFiiii((void*)1, lbl_804C88C0, (void*)(lbl_805D5F94), (void*)(lbl_805D5F84)); lbl_805D5F78 = 18; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801FDC64
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 swap_characters__23TAdSinglePlyChrSelectGCFii(s32 arg0, s32 arg1);
s32 try_move_char__23TAdSinglePlyChrSelectGCFii(s32 arg0, s32 arg1);
s32 check_page_cross__23TAdSinglePlyChrSelectGCFiiii(u32, s32, u32, s32);
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FDEE4(u32, s32, u32, s32);
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FE380(u32, s32, u32, s32);
M2C_UNK increment_counters__23TAdSinglePlyChrSelectGCFv();

extern u32 lbl_805D5F58;
extern u32 lbl_805D5F5C;

s32 swap_characters__23TAdSinglePlyChrSelectGCFii(s32 arg0, s32 arg1) {
    s32 result;
    if ((arg0 >= 7) || (arg1 >= 7)) {
        return 0;
    }
    if ((u32) lbl_805D5F58 == 0U) {
        goto return_zero;
    }
    if ((u32) lbl_805D5F5C == 0U) {
        goto return_zero;
    }
    if (check_page_cross__23TAdSinglePlyChrSelectGCFiiii(lbl_805D5F5C, arg0, lbl_805D5F58, arg1) == 0) {
        goto return_zero;
    }
    increment_counters__23TAdSinglePlyChrSelectGCFv();
    TAdSinglePlyChrSelectGC__sub_801FE380(lbl_805D5F5C, arg0, lbl_805D5F58, arg1);
    return 1;
return_zero:
    return 0;
}

extern u32 lbl_805D5F58;
extern u32 lbl_805D5F5C;

s32 try_move_char__23TAdSinglePlyChrSelectGCFii(s32 arg0, s32 arg1) {
    if ((arg0 >= 7) || (arg1 >= 7)) {
        return 0;
    }
    if (arg1 > 3) {
        return 0;
    }
    if (arg0 <= 3) {
        return 0;
    }
    if ((lbl_805D5F58 != 0U) && (lbl_805D5F5C != 0U) && (check_page_cross__23TAdSinglePlyChrSelectGCFiiii(lbl_805D5F58, arg0, lbl_805D5F5C, arg1) != 0)) {
        increment_counters__23TAdSinglePlyChrSelectGCFv();
        TAdSinglePlyChrSelectGC__sub_801FDEE4(lbl_805D5F58, arg0, lbl_805D5F5C, arg1);
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801FDE94
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_page_cross__23TAdSinglePlyChrSelectGCFiiii(s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 TAdSinglePlyChrSelectGC__sub_801FDDAC();
s32 TAdSinglePlyChrSelectGC__sub_801FDE14();

s32 check_page_cross__23TAdSinglePlyChrSelectGCFiiii(s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if ((arg2 >= 4) && (arg4 <= 3)) {
        return TAdSinglePlyChrSelectGC__sub_801FDDAC();
    }
    if ((arg2 <= 3) && (arg4 >= 4)) {
        return TAdSinglePlyChrSelectGC__sub_801FDE14();
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801FE468
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_entry__23TAdSinglePlyChrSelectGCFi(s32 arg0);
s32 TAdSinglePlyChrSelectGC__sub_801FCCDC(s32, s32);

extern s32 lbl_805D5F5C;

struct Ent_801FE468 { char pad4[4]; char body[0x2798 - 4]; };

s32 get_entry__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    if (TAdSinglePlyChrSelectGC__sub_801FCCDC(lbl_805D5F5C, arg0) != 0) {
        return (s32) &((struct Ent_801FE468 *) lbl_805D5F5C)[arg0].body[0];
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801FE7D4
#include "types.h"

extern "C" {

int TAdSinglePlyChrSelectGC__sub_801FE7D4(int a0);
int get_char_table_entry__23TAdSinglePlyChrSelectGCFi(int a0);

    extern int lbl_805137D8[];
int TAdSinglePlyChrSelectGC__sub_801FE7D4(int a0) {  return lbl_805137D8[a0 + 4]; }

    extern int lbl_805137D8[];
int get_char_table_entry__23TAdSinglePlyChrSelectGCFi(int a0) {  return lbl_805137D8[a0]; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801FE854
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_slot_active__23TAdSinglePlyChrSelectGCFUi(u32 arg0);
s32 load_player_data__23TAdSinglePlyChrSelectGCFv(void);
s32 load_player__23TAdSinglePlyChrSelectGCFv(void);
s32 get_instance__15TAdPlayerLoadGCFv();
s32 TAdPlayerLoadGC__sub_801E0D8C(s32);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
s32 TAdPlayerLoadGC__sub_801E2048(s32, M2C_UNK *);
s32 TAdSinglePlyChrSelectGC__sub_801FC564(s32);
s32 TAdSinglePlyChrSelectGC__sub_801FCCDC(u32, u32);
s32 setup__23TAdSinglePlyChrSelectGCFi(s32);
s32 check_ready__23TAdSinglePlyChrSelectGCFv();
M2C_UNK set_player_index__23TAdSinglePlyChrSelectGCFi(M2C_UNK);
M2C_UNK set_save_slot__23TAdSinglePlyChrSelectGCFi(M2C_UNK);
s8 get_chr_select_state__23TAdSinglePlyChrSelectGCFv();

extern u32 lbl_805D5F58;

s32 is_slot_active__23TAdSinglePlyChrSelectGCFUi(u32 arg0) {
    u32 var_r4 = arg0;
    u32 var_r3;
    if (var_r4 >= 7U) {
        return 0;
    }
    var_r3 = lbl_805D5F58;
    if ((var_r3 != 0U) && (TAdSinglePlyChrSelectGC__sub_801FCCDC(var_r3, var_r4) != 0)) {
        return 1;
    }
    return 0;
}

extern M2C_UNK lbl_804C89BC[];
extern u32 lbl_805D5F68;
extern s32 lbl_805D5F80;

s32 load_player_data__23TAdSinglePlyChrSelectGCFv(void) {
    s32 var_r31;

    var_r31 = 0xFFFF0000;
    if (((u32) lbl_805D5F68 != 0U) && (get_instance__15TAdPlayerLoadGCFv() == 0) && (TAdPlayerLoadGC__sub_801E0D8C(lbl_805D5F80) != 0)) {
        var_r31 = TAdPlayerLoadGC__sub_801E2048(lbl_805D5F80, lbl_804C89BC);
        if ((var_r31 == 0) && (check_ready__23TAdSinglePlyChrSelectGCFv() != 0)) {
            var_r31 = setup__23TAdSinglePlyChrSelectGCFi(lbl_805D5F80);
            if (var_r31 == 0) {
                set_player_index__23TAdSinglePlyChrSelectGCFi(0xC);
            }
        }
    }
    return var_r31;
}

extern M2C_UNK lbl_804C89BC[];
extern u32 lbl_805D5F68;
extern s32 lbl_805D5F78;
extern s32 lbl_805D5F80;

s32 load_player__23TAdSinglePlyChrSelectGCFv(void) {
    s32 var_r31;
    s32 var_r3;
    s8 temp_r3;

    set_save_slot__23TAdSinglePlyChrSelectGCFi(0);
    var_r31 = 0xFFFF0000;
    if (((u32) lbl_805D5F68 != 0U) && (get_instance__15TAdPlayerLoadGCFv() == 0)) {
        temp_r3 = get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
        lbl_805D5F80 = temp_r3;
        var_r31 = TAdPlayerLoadGC__sub_801E1B50(lbl_805D5F80);
        if (var_r31 == 0) {
            var_r31 = TAdPlayerLoadGC__sub_801E2048(lbl_805D5F80, lbl_804C89BC);
            if (var_r31 == 0) {
                var_r3 = TAdSinglePlyChrSelectGC__sub_801FC564(lbl_805D5F80);
                if (var_r3 == 0) {
                    lbl_805D5F78 = 0xD;
                }
                return var_r3;
            }
        }
    }
    return var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801FEAFC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_ready__23TAdSinglePlyChrSelectGCFv(void);
s32 try_confirm_selection__23TAdSinglePlyChrSelectGCFv(void);
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FFF14();
M2C_UNK create_instance__23TAdSinglePlyChrSelectGCFv();
M2C_UNK init_slots__23TAdSinglePlyChrSelectGCFv();

extern u32 lbl_805D5F68;
extern u32 lbl_805D5F98;

s32 check_ready__23TAdSinglePlyChrSelectGCFv(void) {
    s32 var_r3;

    init_slots__23TAdSinglePlyChrSelectGCFv();
    var_r3 = 0;
    if (((u32) lbl_805D5F68 != 0U) && ((u32) lbl_805D5F98 != 0U)) {
        TAdSinglePlyChrSelectGC__sub_801FFF14();
        var_r3 = 1;
    }
    return var_r3;
}

extern u32 lbl_805D5F6C;
extern u32 lbl_805D5F9C;

s32 try_confirm_selection__23TAdSinglePlyChrSelectGCFv(void) {
    s32 var_r3;

    init_slots__23TAdSinglePlyChrSelectGCFv();
    var_r3 = 0;
    if (((u32) lbl_805D5F6C != 0U) && ((u32) lbl_805D5F9C != 0U)) {
        create_instance__23TAdSinglePlyChrSelectGCFv();
        var_r3 = 1;
    }
    return var_r3;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801FEC34
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 load_selected_char__23TAdSinglePlyChrSelectGCFv(void);
s32 load_selected_character__23TAdSinglePlyChrSelectGCFv(void);
s32 start_load__23TAdSinglePlyChrSelectGCFv(void);
s32 get_instance__15TAdPlayerLoadGCFv();
s32 TAdPlayerLoadGC__sub_801E1B50(void*);
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FDA4C();
s32 TAdSinglePlyChrSelectGC__sub_801FE75C();
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FF58C();
M2C_UNK TAdSinglePlyChrSelectGC__sub_80200470();
s8 get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
M2C_UNK getDateStamp__FP9DateStamp(M2C_UNK *);

extern M2C_UNK lbl_80513904[];
extern u32 lbl_805D5F58;
extern u32 lbl_805D5F60;
extern u32 lbl_805D5F64;
extern s32 lbl_805D5F78;
extern s32 lbl_805D5F7C;

s32 load_selected_char__23TAdSinglePlyChrSelectGCFv(void) {
    s32 var_r31;

    lbl_805D5F7C = (s32) get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
    var_r31 = 0xFFFF0000;
    if (((u32) lbl_805D5F60 != 0U) && ((u32) lbl_805D5F64 != 0U) && ((u32) lbl_805D5F58 != 0U) && (get_instance__15TAdPlayerLoadGCFv() == 0x10) && ((s32) lbl_805D5F7C >= 0) && ((s32) lbl_805D5F7C <= 7)) {
        var_r31 = TAdPlayerLoadGC__sub_801E1B50((void*)lbl_805D5F7C);
        if (var_r31 == 0) {
            var_r31 = TAdSinglePlyChrSelectGC__sub_801FE75C();
            if (var_r31 == 0) {
                lbl_805D5F78 = 8;
                getDateStamp__FP9DateStamp(lbl_80513904);
            }
        }
    }
    return var_r31;
}

extern M2C_UNK lbl_80513904[];
extern u32 lbl_805D5F58;
extern u32 lbl_805D5F60;
extern u32 lbl_805D5F64;
extern s32 lbl_805D5F78;
extern s32 lbl_805D5F7C;

s32 load_selected_character__23TAdSinglePlyChrSelectGCFv(void) {
    s32 var_r31;

    lbl_805D5F7C = (s32) get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
    var_r31 = 0xFFFF0000;
    if (((u32) lbl_805D5F60 != 0U) && ((u32) lbl_805D5F64 != 0U) && ((u32) lbl_805D5F58 != 0U) && (get_instance__15TAdPlayerLoadGCFv() == 0) && ((s32) lbl_805D5F7C >= 0) && ((s32) lbl_805D5F7C <= 7)) {
        var_r31 = TAdPlayerLoadGC__sub_801E1B50((void*)lbl_805D5F7C);
        if (var_r31 == 0) {
            var_r31 = TAdSinglePlyChrSelectGC__sub_801FE75C();
            if (var_r31 == 0) {
                lbl_805D5F78 = 8;
                getDateStamp__FP9DateStamp(lbl_80513904);
            }
        }
    }
    return var_r31;
}

M2C_UNK init_buffer();
extern u32 lbl_805D5F58;
extern u32 lbl_805D5F60;
extern u32 lbl_805D5F64;
extern s32 lbl_805D5F78;
extern s32 lbl_805D5F7C;

s32 start_load__23TAdSinglePlyChrSelectGCFv(void) {
    lbl_805D5F7C = (s32) get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
    if (((u32) lbl_805D5F60 != 0U) && ((u32) lbl_805D5F64 != 0U) && ((u32) lbl_805D5F58 != 0U) && (get_instance__15TAdPlayerLoadGCFv() == 0) && ((s32) lbl_805D5F7C >= 0) && ((s32) lbl_805D5F7C <= 7)) {
        TAdSinglePlyChrSelectGC__sub_801FF58C();
        init_buffer();
        TAdSinglePlyChrSelectGC__sub_80200470();
        TAdSinglePlyChrSelectGC__sub_801FDA4C();
        lbl_805D5F78 = 6;
        return 7;
    }
    return 0xFFFF0000;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801FF464
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 init__23TAdSinglePlyChrSelectGCFv(void);
M2C_UNK TAdSinglePlyChrSelectGC__sub_80200470();
M2C_UNK TAdSinglePlyChrSelectGC__sub_802010E8();
M2C_UNK clear_flags__23TAdSinglePlyChrSelectGCFi(M2C_UNK);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 is_technique_ready__8TTecCtrlFv();
s32 fn_80203284();
M2C_UNK init_slots__23TAdSinglePlyChrSelectGCFv();
M2C_UNK TAdSinglePlyChrSelectGC__sub_8028DC14();
M2C_UNK init_battle_selection__10TObjPlayerFv();

M2C_UNK copy_card_window_data();
extern s32 lbl_805D53A0;
extern u32 lbl_805D5F58;
extern u32 lbl_805D5F60;
extern u32 lbl_805D5F64;

s32 init__23TAdSinglePlyChrSelectGCFv(void) {
    init_slots__23TAdSinglePlyChrSelectGCFv();
    if (((u32) lbl_805D5F60 != 0U) && ((u32) lbl_805D5F64 != 0U) && ((u32) lbl_805D5F58 != 0U)) {
        if ((TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0) != 0U) && (is_technique_ready__8TTecCtrlFv() == 0) && (fn_80203284() != 1)) {
            init_battle_selection__10TObjPlayerFv();
            TAdSinglePlyChrSelectGC__sub_8028DC14();
        }
        clear_flags__23TAdSinglePlyChrSelectGCFi(3);
        TAdSinglePlyChrSelectGC__sub_802010E8();
        copy_card_window_data();
        TAdSinglePlyChrSelectGC__sub_80200470();
    }
    return 0xFFFF0000;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801FFD78
#include "types.h"

extern "C" {

s32 init_windows__23TAdSinglePlyChrSelectGCFi(s32 arg0);
int TAdSinglePlyChrSelectGC__sub_801FFDB8(s32);
int TAdSinglePlyChrSelectGC__sub_801FFDFC(s32);

s32 init_windows__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    TAdSinglePlyChrSelectGC__sub_801FFDFC(arg0 + 4);
    TAdSinglePlyChrSelectGC__sub_801FFDB8(arg0 + 0xD2C4);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801FFF58
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create_instance__23TAdSinglePlyChrSelectGCFv(void);
M2C_UNK TAdSinglePlyChrSelectGC__sub_80200998();
s32 TAdSinglePlyChrSelectGC__sub_80201204(s32 *, M2C_UNK);

extern s32 *lbl_805D5F6C;

void create_instance__23TAdSinglePlyChrSelectGCFv(void) {
    *lbl_805D5F6C = 0;
    *lbl_805D5F6C = TAdSinglePlyChrSelectGC__sub_80201204(lbl_805D5F6C, 0x11C);
    TAdSinglePlyChrSelectGC__sub_80200998();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80201074
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 update_elapsed_time__23TAdSinglePlyChrSelectGCFPv(void *arg0);
M2C_UNK DateToSeconds__FP9DateStampPi(M2C_UNK *, s32 *);
M2C_UNK getDateStamp__FP9DateStamp(M2C_UNK *);

extern M2C_UNK lbl_80513904[];

s32 update_elapsed_time__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    M2C_UNK sp10[4];
    s32 spC;
    s32 sp8;

    if (arg0 != NULL) {
        DateToSeconds__FP9DateStampPi(lbl_80513904, &spC);
        getDateStamp__FP9DateStamp(sp10);
        DateToSeconds__FP9DateStampPi(sp10, &sp8);
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + (sp8 - spC));
        return M2C_FIELD(arg0, s32 *, 0xC);
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80201168
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 init_and_register__23TAdSinglePlyChrSelectGCFi(s32 arg0);
M2C_UNK register_callback__23TAdSinglePlyChrSelectGCFis(s32, M2C_UNK);
s32 TAdSinglePlyChrSelectGC__sub_801FC900();
M2C_UNK set_id__23TAdSinglePlyChrSelectGCFPvi(s32, M2C_UNK);
u32 get_type__23TAdSinglePlyChrSelectGCFPv(s32);
M2C_UNK TAdSinglePlyChrSelectGC__sub_80200690(s32, s32);
u32 TAdSinglePlyChrSelectGC__sub_80201204(s32, M2C_UNK);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(M2C_UNK);

s32 init_and_register__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    s32 var_r29;
    u32 temp_r30;
    u32 temp_r31;

    var_r29 = alloc__23TAdSinglePlyChrSelectGCFPv(0x1156C);
    if (var_r29 != 0) {
        var_r29 = TAdSinglePlyChrSelectGC__sub_801FC900();
    }
    TAdSinglePlyChrSelectGC__sub_80200690(var_r29, arg0);
    temp_r30 = get_type__23TAdSinglePlyChrSelectGCFPv(var_r29);
    set_id__23TAdSinglePlyChrSelectGCFPvi(var_r29, 0);
    temp_r31 = TAdSinglePlyChrSelectGC__sub_80201204(var_r29, 0x1156C);
    register_callback__23TAdSinglePlyChrSelectGCFis(var_r29, 1);
    if (temp_r30 == temp_r31) {
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020147C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 free_buffer__23TAdSinglePlyChrSelectGCFv(void);
s32 free_data__23TAdSinglePlyChrSelectGCFv(void);
void safe_free__23TAdSinglePlyChrSelectGCFUi(void*);

extern u32 lbl_805D5F98;

s32 free_buffer__23TAdSinglePlyChrSelectGCFv(void) {
    if ((u32) lbl_805D5F98 != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi((void*)lbl_805D5F98);
        lbl_805D5F98 = 0U;
        return 1;
    }
    return 0;
}

extern u32 lbl_805D5F9C;

s32 free_data__23TAdSinglePlyChrSelectGCFv(void) {
    if ((u32) lbl_805D5F9C != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi((void*)lbl_805D5F9C);
        lbl_805D5F9C = 0U;
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802015B4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 free__23TAdSinglePlyChrSelectGCFv(void);
void safe_free__23TAdSinglePlyChrSelectGCFUi(void*);

extern u32 lbl_805D5F94;

s32 free__23TAdSinglePlyChrSelectGCFv(void) {
    if ((u32) lbl_805D5F94 != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi((void*)lbl_805D5F94);
        lbl_805D5F94 = 0U;
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020289C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_callbacks__23TAdSinglePlyChrSelectGCFv(void);
void register_callback__23TAdSinglePlyChrSelectGCFis(void*, int);
void __dl__FPv(void*);

extern u32 lbl_805D5F5C;
extern u32 lbl_805D5F70;

void free_callbacks__23TAdSinglePlyChrSelectGCFv(void) {
    if ((u32) lbl_805D5F5C != 0U) {
        register_callback__23TAdSinglePlyChrSelectGCFis((void*)lbl_805D5F5C, 1);
        lbl_805D5F5C = 0U;
    }
    if ((u32) lbl_805D5F70 != 0U) {
        __dl__FPv((void*)lbl_805D5F70);
        lbl_805D5F70 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80202958
#include "types.h"

extern "C" {

int get_serial_access_field_118__23TAdSinglePlyChrSelectGCFPv(void* p);
int get_field_118__22TAdEnterSerialAccessGCFv(void*);

int get_serial_access_field_118__23TAdSinglePlyChrSelectGCFPv(void* p) { return get_field_118__22TAdEnterSerialAccessGCFv(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802029E8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_char_index__23TAdSinglePlyChrSelectGCFUi(u32 arg0);
s32 get_char_table_entry__23TAdSinglePlyChrSelectGCFi(u32);

s32 is_split_screen();
extern s32 lbl_805D5F60;

s32 get_char_index__23TAdSinglePlyChrSelectGCFUi(u32 arg0) {
    if (is_split_screen() != 0) {
        if (arg0 == 0xFFFF) {
            return get_char_table_entry__23TAdSinglePlyChrSelectGCFi(0U);
        }
        return get_char_table_entry__23TAdSinglePlyChrSelectGCFi(arg0);
    }
    return lbl_805D5F60;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80202AD0
#include "types.h"

extern "C" {

s32 __dt__12TPlyCharDataFv(s32, s32);
s32 __dl__FPv(s32);
u8 TAdSinglePlyChrSelectGC__sub_80202B30(void* p);

s32 free_chardata__23TAdSinglePlyChrSelectGCFis(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        __dt__12TPlyCharDataFv(arg0, -1);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80202B30
#include "types.h"

extern "C" {

s32 __dt__12TPlyCharDataFv(s32, s32);
s32 __dl__FPv(s32);
u8 TAdSinglePlyChrSelectGC__sub_80202B30(void* p);

u8 TAdSinglePlyChrSelectGC__sub_80202B30(void* p) { return *(u8*)((char*)p + 0x0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80202B7C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int get_selection__23TAdSinglePlyChrSelectGCFv(void);
void set_global_flags__23TAdSinglePlyChrSelectGCFi(s32 arg0);
int get_instance__23TAdSinglePlyChrSelectGCFv(void);
void set_player_index__23TAdSinglePlyChrSelectGCFi(int a0);
void set_save_slot__23TAdSinglePlyChrSelectGCFi(int a0);
void clear_flags__23TAdSinglePlyChrSelectGCFi(s32 arg0);
u8 check_flag__23TAdSinglePlyChrSelectGCFi(s32 arg0);

    extern int lbl_805D5F74;
int get_selection__23TAdSinglePlyChrSelectGCFv(void) {  return lbl_805D5F74; }

extern s32 *lbl_805D5F64;

void set_global_flags__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    if ((s32 *) lbl_805D5F64 != NULL) {
        *lbl_805D5F64 |= arg0;
    }
}

    extern int lbl_805D5F58;
int get_instance__23TAdSinglePlyChrSelectGCFv(void) {  return lbl_805D5F58; }

    extern int lbl_805D5F78;
void set_player_index__23TAdSinglePlyChrSelectGCFi(int a0) { lbl_805D5F78 = a0; }

    extern int lbl_805D5FAC;
void set_save_slot__23TAdSinglePlyChrSelectGCFi(int a0) { lbl_805D5FAC = a0; }

extern s32 *lbl_805D5F64;

void clear_flags__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    if ((s32 *) lbl_805D5F64 != NULL) {
        *lbl_805D5F64 &= ~arg0;
    }
}

extern s32 *lbl_805D5F64;

u8 check_flag__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    if ((s32 *) lbl_805D5F64 != NULL) {
        return (u8) ((*lbl_805D5F64 & arg0) != 0);
    }
    return 0U;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80202C00
#include "types.h"

extern "C" {

void set_state__23TAdSinglePlyChrSelectGCFi(int a0);

    extern int lbl_805D5FA0;
void set_state__23TAdSinglePlyChrSelectGCFi(int a0) { lbl_805D5FA0 = a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80202C34
#include "types.h"

extern "C" {

void set_chr_select_state__23TAdSinglePlyChrSelectGCFi(int a0);

    extern int lbl_805D5FA4;
void set_chr_select_state__23TAdSinglePlyChrSelectGCFi(int a0) { lbl_805D5FA4 = a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802030C8
#include "types.h"

extern "C" {

int copy_item_data__6TLobbyFPvPv(void*);
void* copy_item_data__23TAdSinglePlyChrSelectGCFPvPv(void* p, void* a1);
int __ct__12TPlyCharDataFv(void*);
int TAdSinglePlyChrSelectGC__sub_80203190(void* a0 = 0);
void* TAdSinglePlyChrSelectGC__sub_80203158(void* p);
int init_guild_card_tag__17TWindowSubComCardFi(void*);
void TAdSinglePlyChrSelectGC__sub_80203210(void* p);

void* copy_item_data__23TAdSinglePlyChrSelectGCFPvPv(void* p, void* a1) { copy_item_data__6TLobbyFPvPv(p); *(short*)((char*)p + 0x14) = *(short*)((char*)a1 + 0x14); *(short*)((char*)p + 0x16) = *(short*)((char*)a1 + 0x16); return p; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80203158
#include "types.h"

extern "C" {

int copy_item_data__6TLobbyFPvPv(void*);
void* copy_item_data__23TAdSinglePlyChrSelectGCFPvPv(void* p, void* a1);
int __ct__12TPlyCharDataFv(void*);
int TAdSinglePlyChrSelectGC__sub_80203190(void* a0 = 0);
void* TAdSinglePlyChrSelectGC__sub_80203158(void* p);
int init_guild_card_tag__17TWindowSubComCardFi(void*);
void TAdSinglePlyChrSelectGC__sub_80203210(void* p);

void* TAdSinglePlyChrSelectGC__sub_80203158(void* p) { __ct__12TPlyCharDataFv(p); TAdSinglePlyChrSelectGC__sub_80203190((char*)p + 0x41c); return p; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802031E0
#include "types.h"

extern "C" {

int copy_item_data__6TLobbyFPvPv(void*);
void* copy_item_data__23TAdSinglePlyChrSelectGCFPvPv(void* p, void* a1);
int __ct__12TPlyCharDataFv(void*);
int TAdSinglePlyChrSelectGC__sub_80203190(void* a0 = 0);
void* TAdSinglePlyChrSelectGC__sub_80203158(void* p);
int init_guild_card_tag__17TWindowSubComCardFi(void*);
void TAdSinglePlyChrSelectGC__sub_80203210(void* p);

void* init_guild_card_tag__23TAdSinglePlyChrSelectGCFPv(void* p) { init_guild_card_tag__17TWindowSubComCardFi(p); return p; }
void TAdSinglePlyChrSelectGC__sub_80203210(void* p) { *(u32*)((char*)p + 0x4) &= 0xfffffff7; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802115C0
#include "types.h"

extern "C" {

int copy_entry_bytes__10TObjPlayerFPvPv(void*, void*);
void copy_data__18TCheckRoomSequenceFPvPv(void* p, void* a1);
int TAdSinglePlyChrSelectGC__sub_80211584(void* a0 = 0);
void* TAdSinglePlyChrSelectGC__sub_802115C0(void* p);
void TShopWindowBase__sub_802115F0(void);
int is_confirmed__24TShopEquipmentSellWindowFPv(void* p);
s32 get_result__24TShopEquipmentSellWindowFPv(void* p);
int is_confirmed__18TWindowInputNumberFPv(void* p);
void set_position__18TCheckRoomSequenceFPvff(void* p, f32 a, f32 b);

void* TAdSinglePlyChrSelectGC__sub_802115C0(void* p) { TAdSinglePlyChrSelectGC__sub_80211584(p); return p; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80223350
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdSinglePlyChrSelectGC__sub_80223350(void *arg0, void *arg1);

s32 TAdSinglePlyChrSelectGC__sub_80223350(void *arg0, void *arg1) {
    u8 temp_r0;
    u8 temp_r5;

    temp_r5 = M2C_FIELD(arg0, u8 *, 0);
    temp_r0 = M2C_FIELD(arg1, u8 *, 0);
    if (temp_r5 > temp_r0) {
        return 1;
    }
    if ((temp_r5 == temp_r0) && ((u8) M2C_FIELD(arg0, u8 *, 1) > (u8) M2C_FIELD(arg1, u8 *, 1))) {
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8022338C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 TAdSinglePlyChrSelectGC__sub_8022338C(u8 *arg0, u8 *arg1);

u32 TAdSinglePlyChrSelectGC__sub_8022338C(u8 *arg0, u8 *arg1) {
    return (u32) (*arg1 - *arg0) >> 0x1FU;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802233A0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void swap_item_data__23TAdSinglePlyChrSelectGCFPvPv(M2C_UNK *arg0, M2C_UNK *arg1);
M2C_UNK copy_item_data__23TAdSinglePlyChrSelectGCFPvPv(void *, void *);
M2C_UNK TAdSinglePlyChrSelectGC__sub_802115C0(void *);

void swap_item_data__23TAdSinglePlyChrSelectGCFPvPv(M2C_UNK *arg0, M2C_UNK *arg1) {
    struct { u8 _pad[0x20]; } sp8;

    TAdSinglePlyChrSelectGC__sub_802115C0(&sp8);
    copy_item_data__23TAdSinglePlyChrSelectGCFPvPv(&sp8, arg0);
    copy_item_data__23TAdSinglePlyChrSelectGCFPvPv(arg0, arg1);
    copy_item_data__23TAdSinglePlyChrSelectGCFPvPv(arg1, &sp8);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80242B24
#include "types.h"

extern "C" {

void TAdSinglePlyChrSelectGC__sub_80242B24(void* p);

void TAdSinglePlyChrSelectGC__sub_80242B24(void* p) { *(s16*)((char*)p + 0x0) = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80242CFC
#include "types.h"

extern "C" {

void reset_state__23TAdSinglePlyChrSelectGCFPv(void* a0);

    extern const float lbl_805DCA04;
void reset_state__23TAdSinglePlyChrSelectGCFPv(void* a0) { *(unsigned char*)((char*)a0 + 0x0) = 0; *(unsigned char*)((char*)a0 + 0x1) = 0; *(short*)((char*)a0 + 0x2) = 0; *(float*)((char*)a0 + 0x4) = lbl_805DCA04; *(float*)((char*)a0 + 0x8) = lbl_805DCA04; *(float*)((char*)a0 + 0xc) = lbl_805DCA04; *(short*)((char*)a0 + 0x10) = 0; *(short*)((char*)a0 + 0x12) = 0; *(int*)((char*)a0 + 0x14) = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80242D2C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_slots__23TAdSinglePlyChrSelectGCFv(void);
M2C_UNK TAdSinglePlyChrSelectGC__sub_80243070(M2C_UNK);
M2C_UNK TAdSinglePlyChrSelectGC__sub_8037DD44(s32, M2C_UNK);

void init_slots__23TAdSinglePlyChrSelectGCFv(void) {
    s32 var_r31;

    TAdSinglePlyChrSelectGC__sub_80243070(2);
    var_r31 = 0;
    do {
        TAdSinglePlyChrSelectGC__sub_8037DD44(var_r31, 0);
        var_r31 += 1;
    } while (var_r31 < 4);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802431D0
#include "types.h"

extern "C" {

int TAdSinglePlyChrSelectGC__sub_802431D0(void);
int test_card_flag8__23TAdSinglePlyChrSelectGCFPv(void* p);
void draw_window_bg__23TAdSinglePlyChrSelectGCFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void load_player__23TAdSinglePlyChrSelectGCFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
int load_player_slot__23TAdSinglePlyChrSelectGCFPvii(void* p, int a1, int a2);
s32 TAdPlayerLoadGC__sub_801E15A4(s32, s32, s32, s32, s32 *, s32);
int TAdPlayerLoadGC__sub_801E1944(void*, int, int, int);
s32 TAdSinglePlyChrSelectGC__sub_80142108(s32 *);
int test_card_flag__19TWindowKeyBoardHardFii(void*, int);
int TAdSinglePlyChrSelectGC__sub_80243070(void*);

int TAdSinglePlyChrSelectGC__sub_802431D0(void) { return TAdSinglePlyChrSelectGC__sub_80243070((void*)(0)); }
int test_card_flag8__23TAdSinglePlyChrSelectGCFPv(void* p) { return test_card_flag__19TWindowKeyBoardHardFii(p, 8); }
void draw_window_bg__23TAdSinglePlyChrSelectGCFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp8;

    TAdSinglePlyChrSelectGC__sub_80142108(&sp8);
    TAdPlayerLoadGC__sub_801E15A4(arg0, arg1, arg2, arg3, &sp8, 0x800000FF);
}
void load_player__23TAdSinglePlyChrSelectGCFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp8;

    TAdSinglePlyChrSelectGC__sub_80142108(&sp8);
    TAdPlayerLoadGC__sub_801E15A4(arg0, arg1, arg2, arg3, &sp8, 0x80000000);
}
int load_player_slot__23TAdSinglePlyChrSelectGCFPvii(void* p, int a1, int a2) { return TAdPlayerLoadGC__sub_801E1944(p, a1, a2, 0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8028C650
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void start_character_load_task__23TAdSinglePlyChrSelectGCFPv(u8 *arg0);
s32 TLobby__sub_8001EEF4();
u32 TLobby__sub_8002058C(u32, M2C_UNK, void *, void *, M2C_UNK, M2C_UNK, s32);
s32 start_load_default__6TLobbyFPv(s32);
u32 alloc__23TAdSinglePlyChrSelectGCFPv(M2C_UNK);
s32 try_acquire_slot__23TAdSinglePlyChrSelectGCFPv(void *);

void start_character_load_task__23TAdSinglePlyChrSelectGCFPv(u8 *arg0) {
    u32 var_r31;

    if ((TLobby__sub_8001EEF4() != 0) && (try_acquire_slot__23TAdSinglePlyChrSelectGCFPv(arg0) != 0)) {
        var_r31 = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (var_r31 != 0U) {
            var_r31 = TLobby__sub_8002058C(var_r31, 6, arg0 + 0x60, arg0 + 0x64, 0, 0, start_load_default__6TLobbyFPv(M2C_FIELD(arg0, s32 *, 0x24)));
        }
        M2C_FIELD(arg0, u32 *, 0x68) = var_r31;
        if (var_r31 != 0U) {
            M2C_FIELD(arg0, s32 *, 0x74) = 0x12C;
            M2C_FIELD(arg0, s32 *, 0x2C) = 1;
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8028C8E0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 try_acquire_slot__23TAdSinglePlyChrSelectGCFPv(void *arg0);

extern s32 lbl_805D64E8;

s32 try_acquire_slot__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    if (((s32) lbl_805D64E8 < 0) || ((s32) lbl_805D64E8 > 1)) {
        return 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x6C) != 0) {
        return 0;
    }
    if ((s32) lbl_805D64E8 >= 1) {
        return 0;
    }
    lbl_805D64E8 += 1;
    M2C_FIELD(arg0, s32 *, 0x6C) = 1;
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8028C998
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdSinglePlyChrSelectGC__sub_8028C998(void *arg0);

s32 TAdSinglePlyChrSelectGC__sub_8028C998(void *arg0) {
    return (u32) __cntlzw((u32) (*M2C_FIELD(arg0, s32 **, 0x3C) & 0x7F)) >> 5;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8028CFE8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_and_destroy__23TAdSinglePlyChrSelectGCFPv(void *arg0);
s32 TAdSinglePlyChrSelectGC__sub_8028C938();
M2C_UNK TAdSinglePlyChrSelectGC__sub_8028C9B0(void *);
M2C_UNK TAdSinglePlyChrSelectGC__sub_8028CEEC(void *, s32 *);
M2C_UNK queue_destruction__7TObjectFv(void *);

void close_and_destroy__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    s32 *temp_r4;

    if (TAdSinglePlyChrSelectGC__sub_8028C938() != 0) {
        TAdSinglePlyChrSelectGC__sub_8028C9B0(arg0);
        temp_r4 = M2C_FIELD(arg0, s32 **, 0x3C);
        *temp_r4 &= 0xFFFFFF7F;
        TAdSinglePlyChrSelectGC__sub_8028CEEC(arg0, temp_r4);
        queue_destruction__7TObjectFv(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8028D044
#include "types.h"

extern "C" {

void try_advance_state__23TAdSinglePlyChrSelectGCFPv(void* p);
int TAdSinglePlyChrSelectGC__sub_8028C998(void*);
int TAdSinglePlyChrSelectGC__sub_8028CB6C(void*);

void try_advance_state__23TAdSinglePlyChrSelectGCFPv(void* p) { if (TAdSinglePlyChrSelectGC__sub_8028C998(p) != 0) { TAdSinglePlyChrSelectGC__sub_8028CB6C(p); *(int*)((char*)p + 0x60) = 2; } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8028D5D4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 is_selection_done__23TAdSinglePlyChrSelectGCFPv(void *arg0);

u8 is_selection_done__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    return (u8) (M2C_FIELD(arg0, s32 *, 0x2C) == 2);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8028D5E8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_result__23TAdSinglePlyChrSelectGCFPv(void *arg0);
s32 is_selection_done__23TAdSinglePlyChrSelectGCFPv();

s32 get_result__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    if (is_selection_done__23TAdSinglePlyChrSelectGCFPv() != 0) {
        return M2C_FIELD(arg0, s32 *, 0x28);
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8028DC14
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *get_char_index__23TAdSinglePlyChrSelectGCFUi(s32);
int fn_8028DBC4(void* a0 = 0);
int TAdSinglePlyChrSelectGC__sub_8028DC1C(void* p);
int TAdSinglePlyChrSelectGC__sub_8028DC14(void);

int TAdSinglePlyChrSelectGC__sub_8028DC14(void) { return 1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8028DC1C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TAdSinglePlyChrSelectGC__sub_8028DC1C(void* p);
int TAdSinglePlyChrSelectGC__sub_8028DC14(void);
int fn_8028DBC4(void* a0 = 0);
void *get_char_index__23TAdSinglePlyChrSelectGCFUi(s32);

int TAdSinglePlyChrSelectGC__sub_8028DC1C(void* p) { fn_8028DBC4(p); return 1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8028EF14
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_char_panels__23TAdSinglePlyChrSelectGCFPv(u8 *arg0);
M2C_UNK TLobby__sub_803DA16C(void *);

void update_char_panels__23TAdSinglePlyChrSelectGCFPv(u8 *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0x14) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x10) != 0)) {
        TLobby__sub_803DA16C(arg0 + 0x178);
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x188) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x184) != 0)) {
        TLobby__sub_803DA16C(arg0 + 0x2EC);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x2F8) != 0) {
        TLobby__sub_803DA16C(arg0 + 0x460);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8028F998
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 map_button_code__23TAdSinglePlyChrSelectGCFi(s32 arg0);

s32 map_button_code__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    switch (arg0) {
    case 0x29:
        return 3;
    case 0x2C:
        return 4;
    case 0xFF:
        return -1;
    default:
        return -2;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8028FF04
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_if_active__23TAdSinglePlyChrSelectGCFv(void);
void draw_player_model__23TAdSinglePlyChrSelectGCFPv(void* p);
M2C_UNK TAdSinglePlyChrSelectGC__sub_8028FD90();
int draw_model_with_callback__10TObjPlayerFPv(void*);
int TObjPlayer__sub_8014394C(void*);

extern s32 lbl_805D6530;

void close_if_active__23TAdSinglePlyChrSelectGCFv(void) {
    if ((s32) lbl_805D6530 != 0) {
        TAdSinglePlyChrSelectGC__sub_8028FD90();
    }
}

void draw_player_model__23TAdSinglePlyChrSelectGCFPv(void* p) { TObjPlayer__sub_8014394C(p); draw_model_with_callback__10TObjPlayerFPv(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80290218
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_field_FC__23TAdSinglePlyChrSelectGCFPv(void *arg0);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(s32);

void free_field_FC__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    safe_free__23TAdSinglePlyChrSelectGCFUi(M2C_FIELD(arg0, s32 *, 0xFC));
    M2C_FIELD(arg0, s32 *, 0xFC) = 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802905A4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdSinglePlyChrSelectGC__sub_802905A4(void* p, void* q);
int TAdSinglePlyChrSelectGC__sub_802905B8(void);
u8 is_active__23TAdSinglePlyChrSelectGCFv(void);

void TAdSinglePlyChrSelectGC__sub_802905A4(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); }

    extern int lbl_805D6534;
int TAdSinglePlyChrSelectGC__sub_802905B8(void) {  return lbl_805D6534; }

extern s32 lbl_805D6530;

u8 is_active__23TAdSinglePlyChrSelectGCFv(void) {
    return (u8) (lbl_805D6530 == 1);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80290884
#include "types.h"

extern "C" {

void TAdSinglePlyChrSelectGC__sub_80290884(void* p, void* q);
void update_pair__23TAdSinglePlyChrSelectGCFPv(void* p);
int TAdSinglePlyChrSelectGC__sub_8029071C(void*);
int TAdSinglePlyChrSelectGC__sub_802907E4(void*);

void TAdSinglePlyChrSelectGC__sub_80290884(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); }
void update_pair__23TAdSinglePlyChrSelectGCFPv(void* p) { TAdSinglePlyChrSelectGC__sub_802907E4(p); TAdSinglePlyChrSelectGC__sub_8029071C(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8029A914
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_global__23TAdSinglePlyChrSelectGCFv(void);
void TLobby__sub_803DA16C(void*);

extern u32 lbl_805D65B0;

void free_global__23TAdSinglePlyChrSelectGCFv(void) {
    if ((u32) lbl_805D65B0 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D65B0);
        lbl_805D65B0 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8029BC4C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_singleton_805D65C0__23TAdSinglePlyChrSelectGCFv(void);
void TLobby__sub_803DA16C(void*);

extern u32 lbl_805D65C0;

void free_singleton_805D65C0__23TAdSinglePlyChrSelectGCFv(void) {
    if ((u32) lbl_805D65C0 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D65C0);
        lbl_805D65C0 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8029FC10
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_all_resources__23TAdSinglePlyChrSelectGCFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TLobby__sub_803DA16C(void*);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern u32 lbl_805D6618;
extern u32 lbl_805D661C;
extern u32 lbl_805D6620;

void free_all_resources__23TAdSinglePlyChrSelectGCFv(void) {
    if ((u32) lbl_805D6620 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D6620);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D6620);
        lbl_805D6620 = 0U;
    }
    if ((u32) lbl_805D661C != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D661C);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D661C);
        lbl_805D661C = 0U;
    }
    if ((u32) lbl_805D6618 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D6618, 1);
        lbl_805D6618 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D3ADC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create_chr_warp__23TAdSinglePlyChrSelectGCFii(s32 arg0, s32 arg1);
s32 TAdSinglePlyChrSelectGC__sub_802D4D9C();
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, M2C_UNK);
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(M2C_UNK, M2C_UNK);
M2C_UNK TWindowSubComCard__sub_80265C30(s32);
M2C_UNK TWindowSubComCard__sub_80265F60(s32);
s32 check_room_seq_4__16TAdChrSelASlotGCFii(s32, M2C_UNK);

s32 create_chr_warp__23TAdSinglePlyChrSelectGCFii(s32 arg0, s32 arg1) {
    s32 var_r31 = arg1;

    if (TAdSinglePlyChrSelectGC__sub_802D4D9C() != 0) {
        var_r31 = check_room_seq_4__16TAdChrSelASlotGCFii(arg1, 4);
        forward_trade_action_default__16TObjCityMainWarpFPviii(var_r31, TAdSinglePlyChrSelectGC__sub_80132F2C(0x1E, 1), 6, 0);
        forward_trade_action_default__16TObjCityMainWarpFPviii(var_r31, TAdSinglePlyChrSelectGC__sub_80132F2C(0x1E, 2), 6, 1);
        forward_trade_action_default__16TObjCityMainWarpFPviii(var_r31, TAdSinglePlyChrSelectGC__sub_80132F2C(0x1E, 3), 6, 2);
        forward_trade_action_default__16TObjCityMainWarpFPviii(var_r31, TAdSinglePlyChrSelectGC__sub_80132F2C(0x1E, 4), 6, 3);
    } else {
        var_r31 = check_room_seq_4__16TAdChrSelASlotGCFii(arg1, 3);
        forward_trade_action_default__16TObjCityMainWarpFPviii(var_r31, TAdSinglePlyChrSelectGC__sub_80132F2C(0x1E, 1), 6, 0);
        forward_trade_action_default__16TObjCityMainWarpFPviii(var_r31, TAdSinglePlyChrSelectGC__sub_80132F2C(0x1E, 3), 6, 2);
        forward_trade_action_default__16TObjCityMainWarpFPviii(var_r31, TAdSinglePlyChrSelectGC__sub_80132F2C(0x1E, 4), 6, 3);
    }
    TWindowSubComCard__sub_80265F60(var_r31);
    TWindowSubComCard__sub_80265C30(var_r31);
    return var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D3E14
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_card_select__23TAdSinglePlyChrSelectGCFPv(void *arg0);
void handle_card_select2__23TAdSinglePlyChrSelectGCFPv(void *arg0);
void update_card_input__23TAdSinglePlyChrSelectGCFPv(void *arg0);
void update__23TAdSinglePlyChrSelectGCFPv(void *arg0);
s32 get_card_data__17TWindowSubComCardFPv(s32);
s32 TWindowSubComCard__sub_802A57FC(s32);
M2C_UNK TAdSinglePlyChrSelectGC__sub_801334DC(s32);
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FE2D0();
M2C_UNK clear_transition_flag__17TWindowSubComCardFPv(s32);
M2C_UNK set_selection_state__21TAdMultiSelGameModeGCFPvi(s32, M2C_UNK);
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(s32);
M2C_UNK set_cursor_index__22TAdMultiPlyChrSelectGCFPvi(s32, M2C_UNK);
s32 get_slot_or_neg1__17TWindowSubComCardFPv(s32);

void handle_card_select__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    s32 temp_r3;

    if (get_player_index__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x28)) == 1) {
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        return;
    }
    if (TWindowSubComCard__sub_802A57FC(M2C_FIELD(arg0, s32 *, 0x50)) != 0) {
        temp_r3 = get_slot_or_neg1__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x50));
        switch (temp_r3) {
        case 0:
            M2C_FIELD(arg0, s32 *, 0x5C) = 3;
            M2C_FIELD(arg0, s32 *, 0x20) = 0xC;
            return;
        case 1:
            clear_transition_flag__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x38));
            set_selection_state__21TAdMultiSelGameModeGCFPvi(M2C_FIELD(arg0, s32 *, 0x2C), 1);
            M2C_FIELD(arg0, s32 *, 0x20) = 5;
            return;
        }
    } else if (get_card_data__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x50)) != 0) {
        clear_transition_flag__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x38));
        set_selection_state__21TAdMultiSelGameModeGCFPvi(M2C_FIELD(arg0, s32 *, 0x2C), 1);
        M2C_FIELD(arg0, s32 *, 0x20) = 5;
    }
}

void handle_card_select2__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    s32 temp_r3;

    if (get_player_index__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x28)) == 1) {
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        return;
    }
    if (TWindowSubComCard__sub_802A57FC(M2C_FIELD(arg0, s32 *, 0x4C)) != 0) {
        temp_r3 = get_slot_or_neg1__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x4C));
        switch (temp_r3) {
        case 0:
            M2C_FIELD(arg0, s32 *, 0x5C) = 1;
            M2C_FIELD(arg0, s32 *, 0x20) = 0xC;
            return;
        case 1:
            clear_transition_flag__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x38));
            set_selection_state__21TAdMultiSelGameModeGCFPvi(M2C_FIELD(arg0, s32 *, 0x2C), 1);
            M2C_FIELD(arg0, s32 *, 0x20) = 5;
            return;
        }
    } else if (get_card_data__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x4C)) != 0) {
        clear_transition_flag__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x38));
        set_selection_state__21TAdMultiSelGameModeGCFPvi(M2C_FIELD(arg0, s32 *, 0x2C), 1);
        M2C_FIELD(arg0, s32 *, 0x20) = 5;
    }
}

void update_card_input__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    s32 temp_r3;

    if (get_player_index__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x28)) == 1) {
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        return;
    }
    if (TWindowSubComCard__sub_802A57FC(M2C_FIELD(arg0, s32 *, 0x44)) != 0) {
        temp_r3 = get_slot_or_neg1__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x44));
        switch (temp_r3) {
        case 0:
            M2C_FIELD(arg0, s32 *, 0x5C) = 3;
            M2C_FIELD(arg0, s32 *, 0x20) = 0xC;
            return;
        case 1:
            set_selection_state__21TAdMultiSelGameModeGCFPvi(M2C_FIELD(arg0, s32 *, 0x2C), 1);
            M2C_FIELD(arg0, s32 *, 0x20) = 5;
            return;
        }
    } else if (get_card_data__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x44)) != 0) {
        set_selection_state__21TAdMultiSelGameModeGCFPvi(M2C_FIELD(arg0, s32 *, 0x2C), 1);
        M2C_FIELD(arg0, s32 *, 0x20) = 5;
    }
}

void update__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    s32 temp_r3;

    if (get_player_index__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x28)) == 1) {
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        return;
    }
    if (TWindowSubComCard__sub_802A57FC(M2C_FIELD(arg0, s32 *, 0x48)) != 0) {
        temp_r3 = get_slot_or_neg1__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x48));
        switch (temp_r3) {
        case 0:
            TAdSinglePlyChrSelectGC__sub_801334DC(M2C_FIELD(arg0, s32 *, 0x2C));
            TAdSinglePlyChrSelectGC__sub_801FE2D0();
            get_player_index__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x28));
            set_cursor_index__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x28), 0xF);
            set_selection_state__21TAdMultiSelGameModeGCFPvi(M2C_FIELD(arg0, s32 *, 0x2C), 1);
            M2C_FIELD(arg0, s32 *, 0x20) = 0;
            return;
        case 1:
            set_selection_state__21TAdMultiSelGameModeGCFPvi(M2C_FIELD(arg0, s32 *, 0x2C), 1);
            M2C_FIELD(arg0, s32 *, 0x20) = 5;
            return;
        }
    } else if (get_card_data__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x48)) != 0) {
        set_selection_state__21TAdMultiSelGameModeGCFPvi(M2C_FIELD(arg0, s32 *, 0x2C), 1);
        M2C_FIELD(arg0, s32 *, 0x20) = 5;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D49A8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void cleanup__23TAdSinglePlyChrSelectGCFPv(void *arg0);
M2C_UNK TAdEnterSerialAccessGC__sub_802AEBA8(s32);
M2C_UNK set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(s32, M2C_UNK, M2C_UNK *);
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
M2C_UNK close__17TWindowSubComCardFPv(void *);
M2C_UNK TWindow__close(void *);
M2C_UNK *TAdSinglePlyChrSelectGC__sub_80132F2C(M2C_UNK, M2C_UNK);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, M2C_UNK);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(s32);
M2C_UNK set_field_100__22TAdMultiPlyChrSelectGCFPvi(s32, M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern char lbl_8050E208[];
extern M2C_UNK lbl_805DE784;

void cleanup__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    TAdEnterSerialAccessGC__sub_802AEBA8(M2C_FIELD(arg0, s32 *, 0x2C));
    set_field_100__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x30), 1);
    set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(M2C_FIELD(arg0, s32 *, 0x34), 0, &lbl_805DE784);
    set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(M2C_FIELD(arg0, s32 *, 0x34), 1, &lbl_805DE784);
    M2C_FIELD(arg0, s32 *, 0x58) = -1;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x38) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x38));
        M2C_FIELD(arg0, u32 *, 0x38) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x44) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x44));
        M2C_FIELD(arg0, u32 *, 0x44) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x48) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x48));
        M2C_FIELD(arg0, u32 *, 0x48) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x4C) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x4C));
        M2C_FIELD(arg0, u32 *, 0x4C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x50) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x50));
        M2C_FIELD(arg0, u32 *, 0x50) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x3C));
        M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x40));
        M2C_FIELD(arg0, u32 *, 0x40) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x54) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x54));
        M2C_FIELD(arg0, u32 *, 0x54) = 0U;
    }
    if ((TWindowShortListCtrl__check_controller_button(lbl_8050E208 + 0x20, 2) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv(lbl_8050E208 + 0x160, 2) != 0)) {
        TBoss3Volopt__sub_8022675C(0x52F16, 0, 0, 0);
        M2C_FIELD(arg0, s32 *, 0x20) = 0xB;
        return;
    }
    if (get_player_index__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x28)) == 0xE) {
        set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(M2C_FIELD(arg0, s32 *, 0x34), 0, TAdSinglePlyChrSelectGC__sub_80132F2C(0x1E, 0));
        set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(M2C_FIELD(arg0, s32 *, 0x34), 1, &lbl_805DE784);
        M2C_FIELD(arg0, s32 *, 0x20) = 1;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D4E58
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__23TAdSinglePlyChrSelectGCFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK __vt__23TAdSinglePlyChrSelectGC[];

void *__dt__23TAdSinglePlyChrSelectGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__23TAdSinglePlyChrSelectGC;
        if (M2C_FIELD(arg0, void **, 0x38) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x38)); M2C_FIELD(arg0, M2C_UNK *, 0x38) = 0; }
        if (M2C_FIELD(arg0, void **, 0x3C) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x3C)); M2C_FIELD(arg0, M2C_UNK *, 0x3C) = 0; }
        if (M2C_FIELD(arg0, void **, 0x40) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x40)); M2C_FIELD(arg0, M2C_UNK *, 0x40) = 0; }
        if (M2C_FIELD(arg0, void **, 0x44) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x44)); M2C_FIELD(arg0, M2C_UNK *, 0x44) = 0; }
        if (M2C_FIELD(arg0, void **, 0x48) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x48)); M2C_FIELD(arg0, M2C_UNK *, 0x48) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802E13C8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TAdSinglePlyChrSelectGC__sub_802E13C8(void *arg0, s16 arg1);
void *init_object__23TAdSinglePlyChrSelectGCFPvPv(void *arg0, void *);
void *create__23TAdSinglePlyChrSelectGCFv(void);
void __ct__7TObjectFP7TObject(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void *__nw__7TObjectFUl(int);
void copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);

extern M2C_UNK lbl_804E34FC[];

void *TAdSinglePlyChrSelectGC__sub_802E13C8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E34FC;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804E34FC[];
extern M2C_UNK lbl_804E3050[];
extern void *lbl_805D3F84;

void *init_object__23TAdSinglePlyChrSelectGCFPvPv(void *arg0, void *) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E34FC;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3F84;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *)((char *)arg0 + 32), lbl_804E3050);
    return arg0;
}

extern void *tl_clipout;

void *create__23TAdSinglePlyChrSelectGCFv(void) {
    void *o = __nw__7TObjectFUl(0x28);
    if (o != NULL) {
        o = init_object__23TAdSinglePlyChrSelectGCFPvPv((void *)(o), (void *)(tl_clipout));
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802E15FC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_load_complete__23TAdSinglePlyChrSelectGCFv(void);
s32 poll_load_status__23TAdSinglePlyChrSelectGCFPv(void *arg0);
s32 TAdPlayerLoadGC__sub_801E0D8C(M2C_UNK);
s32 get_load_result__15TAdPlayerLoadGCFv(M2C_UNK);
s32 TAdPlayerLoadGC__sub_801E1B50(M2C_UNK);
s32 TAdPlayerLoadGC__sub_801E1E38(M2C_UNK);
s32 check_memcard_status__15TAdPlayerLoadGCFi(M2C_UNK);
s32 TAdPlayerLoadGC__sub_801E24F8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 TAdSinglePlyChrSelectGC__sub_801FF310();
s32 TAdSinglePlyChrSelectGC__sub_801FF384();
s32 TAdSinglePlyChrSelectGC__sub_801FF3F4();
s32 TAdSinglePlyChrSelectGC__sub_802E14B8();
s32 TAdSinglePlyChrSelectGC__sub_802E14F0();
s32 TAdSinglePlyChrSelectGC__sub_802E1528();
s32 TAdSinglePlyChrSelectGC__sub_802E1560();
s32 TAdSinglePlyChrSelectGC__sub_802E1594();
s32 TAdSinglePlyChrSelectGC__sub_802E15C8();
M2C_UNK TAdSinglePlyChrSelectGC__sub_802E1F14(void *);

s32 is_load_complete__23TAdSinglePlyChrSelectGCFv(void) {
    return (u32) __cntlzw((u32) TAdPlayerLoadGC__sub_801E24F8(0, 0, 0, 0, 0)) >> 5;
}

s32 poll_load_status__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    s32 temp_r3;
    s32 var_r31;
    s32 var_r31_2;
    s32 var_r3;

    if (TAdPlayerLoadGC__sub_801E1B50(0) != 0) {
        M2C_FIELD(arg0, s32 *, 0x40) = (s32) (M2C_FIELD(arg0, s32 *, 0x40) + 1);
        return 2;
    }
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    if (TAdPlayerLoadGC__sub_801E1E38(0) == 0) {
        TAdSinglePlyChrSelectGC__sub_802E1F14(arg0);
        return 1;
    }
    if (TAdPlayerLoadGC__sub_801E0D8C(0) == 0) {
        temp_r3 = get_load_result__15TAdPlayerLoadGCFv(0);
        switch (temp_r3) {
        case -125:
            return 4;
        case -127:
            return 8;
        case -223:
            return 0x10;
        default:
            return 0x20;
        }
    } else {
        if (check_memcard_status__15TAdPlayerLoadGCFi(0) != 0) {
            return 0x40;
        }
        if (TAdSinglePlyChrSelectGC__sub_802E1528() != 0) {
            return 0x80;
        }
        var_r31_2 = 0;
        if (TAdSinglePlyChrSelectGC__sub_802E14F0() != 0) {
            var_r31_2 |= 0x100;
        }
        if (TAdSinglePlyChrSelectGC__sub_802E14B8() != 0) {
            var_r31_2 |= 0x200;
        }
        if (var_r31_2 != 0) {
            return var_r31_2;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x24) == -1) {
            M2C_FIELD(arg0, s32 *, 0x24) = 0;
            if (TAdSinglePlyChrSelectGC__sub_801FF310() != 0) {
                M2C_FIELD(arg0, s32 *, 0x24) = 1;
            }
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x24) == 1) {
            return 0x80;
        }
        if (TAdSinglePlyChrSelectGC__sub_802E15C8() != 0) {
            if ((s32) M2C_FIELD(arg0, s32 *, 0x28) == -1) {
                M2C_FIELD(arg0, s32 *, 0x28) = 0;
                if (TAdSinglePlyChrSelectGC__sub_801FF384() != 0) {
                    M2C_FIELD(arg0, s32 *, 0x28) = 1;
                }
            }
            if ((s32) M2C_FIELD(arg0, s32 *, 0x2C) == -1) {
                M2C_FIELD(arg0, s32 *, 0x2C) = 0;
                if (TAdSinglePlyChrSelectGC__sub_801FF3F4() != 0) {
                    M2C_FIELD(arg0, s32 *, 0x2C) = 1;
                }
            }
            var_r3 = 0;
            if ((s32) M2C_FIELD(arg0, s32 *, 0x28) == 1) {
                var_r3 |= 0x100;
            }
            if ((s32) M2C_FIELD(arg0, s32 *, 0x2C) == 1) {
                var_r3 |= 0x200;
            }
            if (var_r3 != 0) {
                return var_r3;
            }
            goto block_43;
        }
block_43:
        var_r31 = 0;
        if (TAdSinglePlyChrSelectGC__sub_802E15C8() == 0) {
            var_r31 |= 0x400;
        }
        if (TAdSinglePlyChrSelectGC__sub_802E1594() == 0) {
            var_r31 |= 0x800;
        }
        if (TAdSinglePlyChrSelectGC__sub_802E1560() == 0) {
            var_r31 |= 0x1000;
        }
        return var_r31;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802E18C8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdSinglePlyChrSelectGC__sub_802E1DF8(s32 a0 = 0, s32 a1 = 0);
s32 fn_8023F18C(void);
s32 fn_8023F160(void);
s32 init_change_mode__21TAdMultiChgGameModeGCFv(void);
s32 TLobby__sub_80226328(void);
s32 TLobby__sub_802261E0(s16 a0 = 0);
s32 TLobby__sub_8022614C(s32 a0 = 0);
s32 set_language__19TWindowKeyBoardSoftFc(u8 a0 = 0);
void * get_global_state__23TAdSinglePlyChrSelectGCFv(void);
void close_and_next__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(void* p, void* a1, void* a2, void* a3, void* a4);
int TAdSinglePlyChrSelectGC__sub_802E1A04(void*, void*, void*, void*, void*);
int TAdSinglePlyChrSelectGC__sub_802E1A8C(void*, void*, void*, void*, void*);
int close_windows__23TAdSinglePlyChrSelectGCFPv(void*);
int TAdSinglePlyChrSelectGC__sub_802E18C8(void);
int TKeyBoardControl__sub_8000F9CC(void*);

int TAdSinglePlyChrSelectGC__sub_802E18C8(void) { return TKeyBoardControl__sub_8000F9CC((void*)(0)); }
void apply_settings__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    void *temp_r3;

    temp_r3 = get_global_state__23TAdSinglePlyChrSelectGCFv();
    if (temp_r3 == NULL) {
        TAdSinglePlyChrSelectGC__sub_802E1DF8(arg0, 1);
        return;
    }
    set_language__19TWindowKeyBoardSoftFc(M2C_FIELD(temp_r3, u8 *, 7));
    TLobby__sub_802261E0(M2C_FIELD(temp_r3, s16 *, 4));
    TLobby__sub_8022614C(M2C_FIELD(temp_r3, s8 *, 6));
    TLobby__sub_80226328();
    fn_8023F160();
    fn_8023F18C();
    init_change_mode__21TAdMultiChgGameModeGCFv();
}
void close_and_next__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(void* p, void* a1, void* a2, void* a3, void* a4) { close_windows__23TAdSinglePlyChrSelectGCFPv(p); TAdSinglePlyChrSelectGC__sub_802E1A04(p, a1, a2, a3, a4); }
void close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(void* p, void* a1, void* a2, void* a3, void* a4) { close_windows__23TAdSinglePlyChrSelectGCFPv(p); TAdSinglePlyChrSelectGC__sub_802E1A8C(p, a1, a2, a3, a4); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802E1BF4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_windows__23TAdSinglePlyChrSelectGCFPv(void *arg0);
M2C_UNK TWindow__close(void *);
M2C_UNK TAdPlyStatusGC__sub_802E11BC(void *);

void close_windows__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x50) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x50));
        M2C_FIELD(arg0, u32 *, 0x50) = 0U;
        M2C_FIELD(arg0, s32 *, 0x60) = 7;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x54) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x54));
        M2C_FIELD(arg0, u32 *, 0x54) = 0U;
        M2C_FIELD(arg0, s32 *, 0x60) = 7;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x58) != 0U) {
        TAdPlyStatusGC__sub_802E11BC(M2C_FIELD(arg0, void **, 0x58));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802E1C6C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void create_backgrounds__23TAdSinglePlyChrSelectGCFPv(void *arg0);
void *__ct__12TAdBackTxtGCFv(void *, void *);
void *__ct__9TAdBackGCFv(void *, void *);
void *__nw__7TObjectFUl(int);

void create_backgrounds__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    void *o;
    void *o2;
    if (M2C_FIELD(arg0, void **, 0x48) == NULL) {
        o = __nw__7TObjectFUl(0x24);
        if (o != NULL) {
            o = __ct__9TAdBackGCFv(o, arg0);
        }
        M2C_FIELD(arg0, void **, 0x48) = o;
    }
    if (M2C_FIELD(arg0, void **, 0x4C) == NULL) {
        o2 = __nw__7TObjectFUl(0x28);
        if (o2 != NULL) {
            o2 = __ct__12TAdBackTxtGCFv(o2, arg0);
        }
        M2C_FIELD(arg0, void **, 0x4C) = o2;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802E1CEC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_capacity__23TAdSinglePlyChrSelectGCFi(s32 arg0);
s32 TAdPlayerLoadGC__sub_801E0FA4(M2C_UNK);
s32 query_memcard_capacity__15TAdPlayerLoadGCFi(M2C_UNK, M2C_UNK);
s32 count_selected_flags__23TAdSinglePlyChrSelectGCFPv(s32);
s32 count_flags__23TAdSinglePlyChrSelectGCFPv();

s32 check_capacity__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    s32 temp_r29;
    s32 temp_r30;
    s32 temp_r31;
    s32 temp_r3;

    temp_r29 = count_flags__23TAdSinglePlyChrSelectGCFPv();
    temp_r30 = count_selected_flags__23TAdSinglePlyChrSelectGCFPv(arg0);
    temp_r31 = TAdPlayerLoadGC__sub_801E0FA4(0);
    temp_r3 = query_memcard_capacity__15TAdPlayerLoadGCFi(0, 0);
    if ((temp_r29 > temp_r31) || (temp_r30 > temp_r3)) {
        return 0;
    }
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802E1D5C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 count_selected_flags__23TAdSinglePlyChrSelectGCFPv(void *arg0);
s32 TAdSinglePlyChrSelectGC__sub_8001C5F0();
s32 get_flag_count__23TAdSinglePlyChrSelectGCFv();
s32 get_selected_count__23TAdSinglePlyChrSelectGCFv();

s32 count_selected_flags__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    s32 var_r31;

    var_r31 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x44) & 0x400) {
        var_r31 = get_selected_count__23TAdSinglePlyChrSelectGCFv();
    }
    if (M2C_FIELD(arg0, s32 *, 0x44) & 0x800) {
        var_r31 += get_flag_count__23TAdSinglePlyChrSelectGCFv();
    }
    if (M2C_FIELD(arg0, s32 *, 0x44) & 0x1000) {
        var_r31 += TAdSinglePlyChrSelectGC__sub_8001C5F0();
    }
    return var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802E1DC8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 count_flags__23TAdSinglePlyChrSelectGCFPv(void *arg0);

s32 count_flags__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    s32 temp_r4;
    s32 var_r3;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x44);
    var_r3 = 0;
    if (temp_r4 & 0x400) {
        var_r3 = 1;
    }
    if (temp_r4 & 0x800) {
        var_r3 += 1;
    }
    if (temp_r4 & 0x1000) {
        return var_r3 + 1;
    }
    return var_r3;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802E1E7C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 apply_settings__23TAdSinglePlyChrSelectGCFi(void);
s32 TAdSinglePlyChrSelectGC__sub_802E18C8(void);
s32 TAdSinglePlyChrSelectGC__sub_802E1F14(void);
s32 TAdSinglePlyChrSelectGC__sub_802E1DF8(void * a0 = 0, s32 a1 = 0);
s32 poll_load_status__23TAdSinglePlyChrSelectGCFPv(void * a0 = 0);
s32 create__23TAdSinglePlyChrSelectGCFv(void);
int TAdSinglePlyChrSelectGC__sub_802E1F8C(void* p);
int close_windows__23TAdSinglePlyChrSelectGCFPv(void*);

void init__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    TAdSinglePlyChrSelectGC__sub_802E1F14();
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = create__23TAdSinglePlyChrSelectGCFv();
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = poll_load_status__23TAdSinglePlyChrSelectGCFPv(arg0);
    M2C_FIELD(arg0, s32 *, 0x1C) = -1;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x44) == 0) {
        TAdSinglePlyChrSelectGC__sub_802E1DF8(arg0, 1);
        return;
    }
    TAdSinglePlyChrSelectGC__sub_802E1DF8(arg0, 0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802E1F3C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 apply_settings__23TAdSinglePlyChrSelectGCFi(void);
s32 TAdSinglePlyChrSelectGC__sub_802E18C8(void);
s32 TAdSinglePlyChrSelectGC__sub_802E1F14(void);
s32 TAdSinglePlyChrSelectGC__sub_802E1DF8(void * a0 = 0, s32 a1 = 0);
s32 poll_load_status__23TAdSinglePlyChrSelectGCFPv(void * a0 = 0);
s32 create__23TAdSinglePlyChrSelectGCFv(void);
int TAdSinglePlyChrSelectGC__sub_802E1F8C(void* p);
int close_windows__23TAdSinglePlyChrSelectGCFPv(void*);

void update_state__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    s32 temp_r0;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x60) <= 0) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x5C);
        switch (temp_r0) {
        case 0:
            apply_settings__23TAdSinglePlyChrSelectGCFi();
            return;
        default:
        case 1:
            TAdSinglePlyChrSelectGC__sub_802E18C8();
            break;
        }
    }
}
int TAdSinglePlyChrSelectGC__sub_802E1F8C(void* p) { return close_windows__23TAdSinglePlyChrSelectGCFPv(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802E2158
#include "types.h"

extern "C" {

void TAdSinglePlyChrSelectGC__sub_802E2158(void);
void create_result_bg__23TAdSinglePlyChrSelectGCFi(s32 arg0);
s32 close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(s32, s32, s32, s32, s32);
s32 create_backgrounds__23TAdSinglePlyChrSelectGCFPv();
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(s32, s32);

void TAdSinglePlyChrSelectGC__sub_802E2158(void) {  }
void create_result_bg__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    create_backgrounds__23TAdSinglePlyChrSelectGCFPv();
    close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(arg0, TAdSinglePlyChrSelectGC__sub_80132F2C(0x1C, 0x1C), -1, 0, 0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802E21AC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void build_selection_summary__23TAdSinglePlyChrSelectGCFPv(u8 *arg0);
M2C_UNK *TAdSinglePlyChrSelectGC__sub_80132F2C(M2C_UNK, M2C_UNK);
M2C_UNK TAdSinglePlyChrSelectGC__sub_8039DC70(void *, void *);
M2C_UNK close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(void *, void *, int, int, int);
M2C_UNK create_backgrounds__23TAdSinglePlyChrSelectGCFPv();

extern M2C_UNK lbl_805DE8F8;

void build_selection_summary__23TAdSinglePlyChrSelectGCFPv(u8 *arg0) {
    create_backgrounds__23TAdSinglePlyChrSelectGCFPv();
    M2C_FIELD(arg0, s8 *, 0x68) = 0;
    if (M2C_FIELD(arg0, s32 *, 0x44) & 0x80) {
        TAdSinglePlyChrSelectGC__sub_8039DC70((void *) (arg0 + 0x68), (void *) (TAdSinglePlyChrSelectGC__sub_80132F2C(0x1C, 0x1D)));
        TAdSinglePlyChrSelectGC__sub_8039DC70((void *) (arg0 + 0x68), (void *) (&lbl_805DE8F8));
    }
    if (M2C_FIELD(arg0, s32 *, 0x44) & 0x100) {
        TAdSinglePlyChrSelectGC__sub_8039DC70((void *) (arg0 + 0x68), (void *) (TAdSinglePlyChrSelectGC__sub_80132F2C(0x1C, 0x1E)));
        TAdSinglePlyChrSelectGC__sub_8039DC70((void *) (arg0 + 0x68), (void *) (&lbl_805DE8F8));
    }
    if (M2C_FIELD(arg0, s32 *, 0x44) & 0x200) {
        TAdSinglePlyChrSelectGC__sub_8039DC70((void *) (arg0 + 0x68), (void *) (TAdSinglePlyChrSelectGC__sub_80132F2C(0x1C, 0x1F)));
        TAdSinglePlyChrSelectGC__sub_8039DC70((void *) (arg0 + 0x68), (void *) (&lbl_805DE8F8));
    }
    close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv((void *) (arg0), (void *) (arg0 + 0x68), (int) (1), (int) (TAdSinglePlyChrSelectGC__sub_80132F2C(0x1C, 0x2A)), (int) (TAdSinglePlyChrSelectGC__sub_80132F2C(0x1C, 0x2B)));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802E2374
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_menu_window__23TAdSinglePlyChrSelectGCFi(s32 arg0);
M2C_UNK close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(s32, s32, M2C_UNK, s32, M2C_UNK);
M2C_UNK create_backgrounds__23TAdSinglePlyChrSelectGCFPv();
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(M2C_UNK, M2C_UNK);
M2C_UNK TAdSinglePlyChrSelectGC__sub_8039DC70(s32, M2C_UNK *);
M2C_UNK TAdSinglePlyChrSelectGC__sub_8039DCE0(s32, s32);

extern M2C_UNK lbl_805DE8F8;

void init_menu_window__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    create_backgrounds__23TAdSinglePlyChrSelectGCFPv();
    TAdSinglePlyChrSelectGC__sub_8039DCE0(arg0 + 0x68, TAdSinglePlyChrSelectGC__sub_80132F2C(0x1C, 1));
    TAdSinglePlyChrSelectGC__sub_8039DC70(arg0 + 0x68, &lbl_805DE8F8);
    close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(arg0, arg0 + 0x68, -2, TAdSinglePlyChrSelectGC__sub_80132F2C(0x1C, 0x16), 0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802E2670
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdSinglePlyChrSelectGC__sub_80132F2C(s32, s32);
s32 close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(s32, s32, s32, s32, s32);
s32 TAdSinglePlyChrSelectGC__sub_8039DCE0(s32, s32);
s32 TAdPlyStatusGC__sub_802E11C8(void *);
s32 check_ready__23TAdSinglePlyChrSelectGCFv();
s32 init_timestamped_data();
s8 get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
s32 setup__23TAdSinglePlyChrSelectGCFi(s32);
s32 set_player_index__23TAdSinglePlyChrSelectGCFi(s32);
s32 TAdSinglePlyChrSelectGC__sub_801FD990(s32);
s32 try_confirm_selection__23TAdSinglePlyChrSelectGCFv();
s32 TAdSinglePlyChrSelectGC__sub_802012AC();
s32 get_instance__15TAdPlayerLoadGCFv();
s32 close_windows__23TAdSinglePlyChrSelectGCFPv(void *);
s32 TAdSinglePlyChrSelectGC__sub_802E1DF8(void *, s32);
s32 TAdSinglePlyChrSelectGC__sub_802E1868(void *);
int start_load__23TAdSinglePlyChrSelectGCFv(void*);
int close_and_next__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(void*, void*, void*, void*, void*);
int create_backgrounds__23TAdSinglePlyChrSelectGCFPv(void*);
void TAdSinglePlyChrSelectGC__sub_802E2848(void* p);
void TAdSinglePlyChrSelectGC__sub_802E2A7C(void* p);

void update_close_on_load__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x44) & 2) && (get_instance__15TAdPlayerLoadGCFv() == 0)) {
        close_windows__23TAdSinglePlyChrSelectGCFPv(arg0);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x60) == 0) {
            M2C_FIELD(arg0, s32 *, 0x3C) = 1;
            TAdSinglePlyChrSelectGC__sub_802E1DF8(arg0, 0);
        }
    }
}
void try_setup__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    if (setup__23TAdSinglePlyChrSelectGCFi(get_chr_select_state__23TAdSinglePlyChrSelectGCFv()) == 0) {
        set_player_index__23TAdSinglePlyChrSelectGCFi(0xC);
        TAdSinglePlyChrSelectGC__sub_802E1DF8((void *)(arg0), 0xF);
    }
}
void update_state__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    init_timestamped_data();
    if (check_ready__23TAdSinglePlyChrSelectGCFv() == 0) {
        TAdSinglePlyChrSelectGC__sub_802E1DF8((void *)(arg0), 0);
        return;
    }
    create_backgrounds__23TAdSinglePlyChrSelectGCFPv((void*)(arg0));
    close_and_next__23TAdSinglePlyChrSelectGCFPvPvPvPvPv((void*)(arg0), (void*)(5), (void*)(-1), (void*)(-1), (void*)(-1));
}
void update_close_timer__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) (M2C_FIELD(arg0, s32 *, 0x64) - 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x64) < 0) {
        M2C_FIELD(arg0, s32 *, 0x64) = 0;
    }
    if (!(M2C_FIELD(arg0, s32 *, 0x44) & 2) && (get_instance__15TAdPlayerLoadGCFv() == 0)) {
        if (((s32) M2C_FIELD(arg0, s32 *, 0x64) < 0xF) && (TAdSinglePlyChrSelectGC__sub_802E1868(arg0) != 0)) {
            M2C_FIELD(arg0, s32 *, 0x64) = 0;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x64) == 0) {
            close_windows__23TAdSinglePlyChrSelectGCFPv(arg0);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x60) == 0) {
                M2C_FIELD(arg0, s32 *, 0x38) = 1;
                TAdSinglePlyChrSelectGC__sub_802E1DF8(arg0, 0);
            }
        }
    }
}
void TAdSinglePlyChrSelectGC__sub_802E2848(void* p) { start_load__23TAdSinglePlyChrSelectGCFv(p); create_backgrounds__23TAdSinglePlyChrSelectGCFPv(p); close_and_next__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(p, (void*)4, (void*)-1, (void*)-1, (void*)-1); *(int*)((char*)p + 0x64) = 30; }
void TAdSinglePlyChrSelectGC__sub_802E289C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) (M2C_FIELD(arg0, s32 *, 0x64) - 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x64) < 0) {
        M2C_FIELD(arg0, s32 *, 0x64) = 0;
    }
    if (!(M2C_FIELD(arg0, s32 *, 0x44) & 2) && (get_instance__15TAdPlayerLoadGCFv() == 0)) {
        if (((s32) M2C_FIELD(arg0, s32 *, 0x64) < 0xF) && (TAdSinglePlyChrSelectGC__sub_802E1868(arg0) != 0)) {
            M2C_FIELD(arg0, s32 *, 0x64) = 0;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x64) == 0) {
            close_windows__23TAdSinglePlyChrSelectGCFPv(arg0);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x60) == 0) {
                M2C_FIELD(arg0, s32 *, 0x34) = 1;
                TAdSinglePlyChrSelectGC__sub_802E1DF8(arg0, 0);
            }
        }
    }
}
void init_screen__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    TAdSinglePlyChrSelectGC__sub_802012AC();
    if (try_confirm_selection__23TAdSinglePlyChrSelectGCFv() == 0) {
        TAdSinglePlyChrSelectGC__sub_802E1DF8((void *)(arg0), 0);
        return;
    }
    TAdSinglePlyChrSelectGC__sub_801FD990(get_chr_select_state__23TAdSinglePlyChrSelectGCFv());
    set_player_index__23TAdSinglePlyChrSelectGCFi(0xF);
    create_backgrounds__23TAdSinglePlyChrSelectGCFPv((void*)(arg0));
    close_and_next__23TAdSinglePlyChrSelectGCFPvPvPvPvPv((void*)(arg0), (void*)(3), (void*)(-1), (void*)(-1), (void*)(-1));
    M2C_FIELD(arg0, s32 *, 0x64) = 0x1E;
}
void update_char_timer__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) (M2C_FIELD(arg0, s32 *, 0x64) - 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x64) < 0) {
        M2C_FIELD(arg0, s32 *, 0x64) = 0;
    }
    if (!(M2C_FIELD(arg0, s32 *, 0x44) & 2)) {
        if (((s32) M2C_FIELD(arg0, s32 *, 0x64) < 0xF) && (TAdSinglePlyChrSelectGC__sub_802E1868(arg0) != 0)) {
            M2C_FIELD(arg0, s32 *, 0x64) = 0;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x64) == 0) {
            close_windows__23TAdSinglePlyChrSelectGCFPv(arg0);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x60) == 0) {
                TAdSinglePlyChrSelectGC__sub_802E1DF8(arg0, 0);
            }
        }
    }
}
void TAdSinglePlyChrSelectGC__sub_802E2A7C(void* p) { *(s32*)((char*)p + 0x64) = 30; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802E2AD4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create_backgrounds__23TAdSinglePlyChrSelectGCFi(s32 arg0);
void update_timer__23TAdSinglePlyChrSelectGCFPv(void *arg0);
void TAdSinglePlyChrSelectGC__sub_802E2BC8(void* p);
s32 TAdSinglePlyChrSelectGC__sub_802E1868(void *);
s32 close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(s32, s32, s32, s32, s32);
s32 close_windows__23TAdSinglePlyChrSelectGCFPv(void *);
s32 create_backgrounds__23TAdSinglePlyChrSelectGCFPv();
s32 TAdSinglePlyChrSelectGC__sub_802E1DF8(void *, s32);
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(s32, s32);

void create_backgrounds__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    create_backgrounds__23TAdSinglePlyChrSelectGCFPv();
    close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(arg0, TAdSinglePlyChrSelectGC__sub_80132F2C(0x1C, 0xA), -1, 0, 0);
}
void update_timer__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) (M2C_FIELD(arg0, s32 *, 0x64) - 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x64) < 0) {
        M2C_FIELD(arg0, s32 *, 0x64) = 0;
    }
    if (!(M2C_FIELD(arg0, s32 *, 0x44) & 2)) {
        if (((s32) M2C_FIELD(arg0, s32 *, 0x64) < 0xF) && (TAdSinglePlyChrSelectGC__sub_802E1868(arg0) != 0)) {
            M2C_FIELD(arg0, s32 *, 0x64) = 0;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x64) == 0) {
            close_windows__23TAdSinglePlyChrSelectGCFPv(arg0);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x60) == 0) {
                TAdSinglePlyChrSelectGC__sub_802E1DF8(arg0, 0);
            }
        }
    }
}
void TAdSinglePlyChrSelectGC__sub_802E2BC8(void* p) { *(s32*)((char*)p + 0x64) = 30; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802E2C20
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdSinglePlyChrSelectGC__sub_8039DCE0(s32, s32);
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(s32, s32);
s32 close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(s32, s32, s32, s32, s32);
s32 create_backgrounds__23TAdSinglePlyChrSelectGCFPv();
s32 TAdPlayerLoadGC__sub_801E0CE0(s32);
s32 TAdSinglePlyChrSelectGC__sub_802E1868(void *);
s32 TAdSinglePlyChrSelectGC__sub_802E1DF8(void *, s32);
s32 get_instance__15TAdPlayerLoadGCFv();
s32 load_player__23TAdSinglePlyChrSelectGCFv();
s32 load_system_file(s32);
void TAdSinglePlyChrSelectGC__sub_802E2D3C(void* p);
int close_and_next_cancel__23TAdSinglePlyChrSelectGCFPv(void* p);
void TAdSinglePlyChrSelectGC__sub_802E2F20(void);
int TAdSinglePlyChrSelectGC__sub_802E2F68(void* p);
void TAdSinglePlyChrSelectGC__sub_802E2FEC(void);
int TAdSinglePlyChrSelectGC__sub_802E3038(void* p);
int close_and_next__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(void*, int, int, int, int);
int close_windows__23TAdSinglePlyChrSelectGCFPv(void*);

void close_scene__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    create_backgrounds__23TAdSinglePlyChrSelectGCFPv();
    close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(arg0, TAdSinglePlyChrSelectGC__sub_80132F2C(0x1C, 9), -1, 0, 0);
}
void update_load_countdown__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    if (TAdPlayerLoadGC__sub_801E0CE0(0) == 0) {
        TAdSinglePlyChrSelectGC__sub_802E1DF8(arg0, 0x16);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) (M2C_FIELD(arg0, s32 *, 0x64) - 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x64) < 0) {
        M2C_FIELD(arg0, s32 *, 0x64) = 0;
    }
    if (!(M2C_FIELD(arg0, s32 *, 0x44) & 2)) {
        if (((s32) M2C_FIELD(arg0, s32 *, 0x64) < 0xF) && (TAdSinglePlyChrSelectGC__sub_802E1868(arg0) != 0)) {
            M2C_FIELD(arg0, s32 *, 0x64) = 0;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x64) == 0) {
            M2C_FIELD(arg0, s32 *, 0x30) = 1;
            close_windows__23TAdSinglePlyChrSelectGCFPv((void*)(arg0));
            if ((s32) M2C_FIELD(arg0, s32 *, 0x60) == 0) {
                TAdSinglePlyChrSelectGC__sub_802E1DF8(arg0, 0);
            }
        }
    }
}
void TAdSinglePlyChrSelectGC__sub_802E2D3C(void* p) { *(s32*)((char*)p + 0x64) = 30; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802E2D48
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_load_state__23TAdSinglePlyChrSelectGCFi(s32 arg0);
s32 get_instance__15TAdPlayerLoadGCFv();
s32 TAdPlayerLoadGC__sub_801E0CE0(s32);
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(s32, s32);
s32 TAdSinglePlyChrSelectGC__sub_802E1868(void *);
s32 TAdSinglePlyChrSelectGC__sub_802E1DF8(void *, s32);
void TAdSinglePlyChrSelectGC__sub_802E2D3C(void* p);
void TAdSinglePlyChrSelectGC__sub_802E2F20(void);
int TAdSinglePlyChrSelectGC__sub_802E2F68(void* p);
void TAdSinglePlyChrSelectGC__sub_802E2FEC(void);
int TAdSinglePlyChrSelectGC__sub_802E3038(void* p);
s32 TAdSinglePlyChrSelectGC__sub_8039DCE0(s32, s32);
s32 close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(s32, s32, s32, s32, s32);
int close_and_next__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(void*, int, int, int, int);
int close_and_next_cancel__23TAdSinglePlyChrSelectGCFPv(void* p);
int close_windows__23TAdSinglePlyChrSelectGCFPv(void*);
s32 create_backgrounds__23TAdSinglePlyChrSelectGCFPv();
s32 is_load_complete__23TAdSinglePlyChrSelectGCFv();
s32 load_player__23TAdSinglePlyChrSelectGCFv();
s32 load_system_file(s32);

#include "types.h"
extern "C" {

void update_load_state__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    if (is_load_complete__23TAdSinglePlyChrSelectGCFv() != 0) {
        if (TAdPlayerLoadGC__sub_801E0CE0((int) (0)) == 0) {
            TAdSinglePlyChrSelectGC__sub_802E1DF8((void *) (arg0), (int) (0x16));
            return;
        }
        TAdSinglePlyChrSelectGC__sub_802E1DF8((void *) (arg0), (int) (7));
    }
}

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802E2DA8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdSinglePlyChrSelectGC__sub_8039DCE0(s32, s32);
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(s32, s32);
s32 close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(s32, s32, s32, s32, s32);
s32 create_backgrounds__23TAdSinglePlyChrSelectGCFPv();
s32 TAdPlayerLoadGC__sub_801E0CE0(s32);
s32 TAdSinglePlyChrSelectGC__sub_802E1868(void *);
s32 TAdSinglePlyChrSelectGC__sub_802E1DF8(void *, s32);
s32 get_instance__15TAdPlayerLoadGCFv();
s32 load_player__23TAdSinglePlyChrSelectGCFv();
s32 load_system_file(s32);
void TAdSinglePlyChrSelectGC__sub_802E2D3C(void* p);
int close_and_next_cancel__23TAdSinglePlyChrSelectGCFPv(void* p);
void TAdSinglePlyChrSelectGC__sub_802E2F20(void);
int TAdSinglePlyChrSelectGC__sub_802E2F68(void* p);
void TAdSinglePlyChrSelectGC__sub_802E2FEC(void);
int TAdSinglePlyChrSelectGC__sub_802E3038(void* p);
int close_and_next__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(void*, int, int, int, int);
int close_windows__23TAdSinglePlyChrSelectGCFPv(void*);

int close_and_next_cancel__23TAdSinglePlyChrSelectGCFPv(void* p) { return close_and_next__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(p, 2, -1, -1, -1); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802E2E60
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdSinglePlyChrSelectGC__sub_8039DCE0(s32, s32);
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(s32, s32);
s32 close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(s32, s32, s32, s32, s32);
s32 create_backgrounds__23TAdSinglePlyChrSelectGCFPv();
s32 TAdPlayerLoadGC__sub_801E0CE0(s32);
s32 TAdSinglePlyChrSelectGC__sub_802E1868(void *);
s32 TAdSinglePlyChrSelectGC__sub_802E1DF8(void *, s32);
s32 get_instance__15TAdPlayerLoadGCFv();
s32 load_player__23TAdSinglePlyChrSelectGCFv();
s32 load_system_file(s32);
void TAdSinglePlyChrSelectGC__sub_802E2D3C(void* p);
int close_and_next_cancel__23TAdSinglePlyChrSelectGCFPv(void* p);
void TAdSinglePlyChrSelectGC__sub_802E2F20(void);
int TAdSinglePlyChrSelectGC__sub_802E2F68(void* p);
void TAdSinglePlyChrSelectGC__sub_802E2FEC(void);
int TAdSinglePlyChrSelectGC__sub_802E3038(void* p);
int close_and_next__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(void*, int, int, int, int);
int close_windows__23TAdSinglePlyChrSelectGCFPv(void*);

void open_char_select__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    create_backgrounds__23TAdSinglePlyChrSelectGCFPv();
    TAdSinglePlyChrSelectGC__sub_8039DCE0(arg0 + 0x68, TAdSinglePlyChrSelectGC__sub_80132F2C(0x1C, 8));
    close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(arg0, arg0 + 0x68, 1, TAdSinglePlyChrSelectGC__sub_80132F2C(0x1C, 0x29), TAdSinglePlyChrSelectGC__sub_80132F2C(0x1C, 0x16));
}
void reset_on_load_complete__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    if (get_instance__15TAdPlayerLoadGCFv() == 0) {
        M2C_FIELD(arg0, s32 *, 0x5C) = 0;
        TAdSinglePlyChrSelectGC__sub_802E1DF8(arg0, 0x18);
    }
}
void TAdSinglePlyChrSelectGC__sub_802E2F20(void) {  }
void ensure_player_loaded__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x44) & 2)) {
        load_player__23TAdSinglePlyChrSelectGCFv();
        TAdSinglePlyChrSelectGC__sub_802E1DF8(arg0, 4);
    }
}
int TAdSinglePlyChrSelectGC__sub_802E2F68(void* p) { return close_windows__23TAdSinglePlyChrSelectGCFPv(p); }
void update_load_state__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    if (get_instance__15TAdPlayerLoadGCFv() == 0) {
        M2C_FIELD(arg0, s32 *, 0x20) = 1;
        if ((s32) M2C_FIELD(arg0, s32 *, 0x44) == 0) {
            TAdSinglePlyChrSelectGC__sub_802E1DF8(arg0, 3);
            return;
        }
        TAdSinglePlyChrSelectGC__sub_802E1DF8(arg0, 0);
    }
}
void TAdSinglePlyChrSelectGC__sub_802E2FEC(void) {  }
void ensure_system_file_loaded__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x44) & 2)) {
        load_system_file(0);
        TAdSinglePlyChrSelectGC__sub_802E1DF8(arg0, 2);
    }
}
int TAdSinglePlyChrSelectGC__sub_802E3038(void* p) { return close_windows__23TAdSinglePlyChrSelectGCFPv(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802E3290
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void rebuild_and_maybe_close__23TAdSinglePlyChrSelectGCFPv(void *arg0);
M2C_UNK close_and_next__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(void *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK close_windows__23TAdSinglePlyChrSelectGCFPv(void *);
M2C_UNK create_backgrounds__23TAdSinglePlyChrSelectGCFPv();

void rebuild_and_maybe_close__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    create_backgrounds__23TAdSinglePlyChrSelectGCFPv();
    close_windows__23TAdSinglePlyChrSelectGCFPv(arg0);
    if (M2C_FIELD(arg0, s32 *, 0x44) & 1) {
        close_and_next__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(arg0, 0, -1, -1, -1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80336054
#include "types.h"

extern "C" {

int get_data__23TAdSinglePlyChrSelectGCFv(void);

    extern int lbl_805D6D44;
int get_data__23TAdSinglePlyChrSelectGCFv(void) {  return lbl_805D6D44; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8033605C
#include "types.h"

extern "C" {

int TAdSinglePlyChrSelectGC__sub_8033605C(void);

int TAdSinglePlyChrSelectGC__sub_8033605C(void) { return 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80336064
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 start_offline_seq__23TAdSinglePlyChrSelectGCFPv(void *arg0);
u32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK init__22THunterGuildSeqOfflineFPvPvPv(s32, M2C_UNK, M2C_UNK *);

extern M2C_UNK queue_destruction_and_cleanup__6TLobbyFv[];
extern s32 tl_fade;

s32 start_offline_seq__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    M2C_UNK *temp_r3;
    if (!(M2C_FIELD(arg0, s32 *, 0x3C) & 2)) {
        temp_r3 = (M2C_UNK *) __nw__7TObjectFUl(0x28);
        if (temp_r3 != NULL) {
            init__22THunterGuildSeqOfflineFPvPvPv((s32) temp_r3, tl_fade, queue_destruction_and_cleanup__6TLobbyFv);
        }
        M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) | 2);
    }
    return M2C_FIELD(arg0, s32 *, 0x3C) & 4;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8033A8EC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_quest_id__23TAdSinglePlyChrSelectGCFv(void);

extern s32 lbl_805D6D8C;

void reset_quest_id__23TAdSinglePlyChrSelectGCFv(void) {
    lbl_805D6D8C = 0xFFFF;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8033A8FC
#include "types.h"

extern "C" {

void set_quest_download_server__23TAdSinglePlyChrSelectGCFi(int a0);

    extern int lbl_805D6D8C;
void set_quest_download_server__23TAdSinglePlyChrSelectGCFi(int a0) { lbl_805D6D8C = a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8033A904
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_logo_state__23TAdSinglePlyChrSelectGCFi(s32 arg0);

extern s32 lbl_805D6D80;
extern s32 lbl_805D6D84;
extern s32 lbl_805D6D88;
extern s32 lbl_805D6D8C;

void init_logo_state__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    lbl_805D6D88 = 0;
    lbl_805D6D84 = 0;
    lbl_805D6D80 = arg0;
    lbl_805D6D8C = 0xFFFF;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8033AA44
#include "types.h"

extern "C" {

int queue_destruction__23TAdSinglePlyChrSelectGCFPv(void* p);
int queue_destruction__7TObjectFv(void*);

int queue_destruction__23TAdSinglePlyChrSelectGCFPv(void* p) { return queue_destruction__7TObjectFv(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8033ABE8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_setup__23TAdSinglePlyChrSelectGCFPv(void *arg0);
s32 setup__23TAdSinglePlyChrSelectGCFi(s32);
M2C_UNK set_player_index__23TAdSinglePlyChrSelectGCFi(M2C_UNK);
M2C_UNK TAdSinglePlyChrSelectGC__sub_8033B5F0(void *);

void update_setup__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    if (setup__23TAdSinglePlyChrSelectGCFi(M2C_FIELD(arg0, s32 *, 0x24)) == 0) {
        M2C_FIELD(arg0, s32 *, 0x2C) = 8;
        set_player_index__23TAdSinglePlyChrSelectGCFi(0xC);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    TAdSinglePlyChrSelectGC__sub_8033B5F0(arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8033ADC8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_select_state__23TAdSinglePlyChrSelectGCFPv(void *arg0);
s32 TAdSinglePlyChrSelectGC__sub_801FDA4C();
M2C_UNK set_player_index__23TAdSinglePlyChrSelectGCFi(M2C_UNK);
M2C_UNK set_char_slots__23TAdSinglePlyChrSelectGCFPvii(void *, M2C_UNK, M2C_UNK);
M2C_UNK TAdSinglePlyChrSelectGC__sub_8033B5F0(void *);

void update_select_state__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    if (TAdSinglePlyChrSelectGC__sub_801FDA4C() == 0) {
        M2C_FIELD(arg0, s32 *, 0x2C) = 5;
        set_player_index__23TAdSinglePlyChrSelectGCFi(6);
        set_char_slots__23TAdSinglePlyChrSelectGCFPvii(arg0, 0xC, -1);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    TAdSinglePlyChrSelectGC__sub_8033B5F0(arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8033B1E0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TQuestVmDownLoadServer__sub_8006EF6C(s32);
s32 send_and_handle__6TLobbyFPvii(s32, s32, s32);
int TAdSinglePlyChrSelectGC__sub_8033B244(void* p);
int TKeyBoardControl__sub_8000F9B0(void*);

void set_char_slots__23TAdSinglePlyChrSelectGCFPvii(void *arg0, s32 arg1, s32 arg2) {
    send_and_handle__6TLobbyFPvii(M2C_FIELD(arg0, s32 *, 0x38), TQuestVmDownLoadServer__sub_8006EF6C(arg1), 1);
    if (arg2 != -1) {
        send_and_handle__6TLobbyFPvii(M2C_FIELD(arg0, s32 *, 0x38), TQuestVmDownLoadServer__sub_8006EF6C(arg2), 8);
    }
}
int TAdSinglePlyChrSelectGC__sub_8033B244(void* p) { return TKeyBoardControl__sub_8000F9B0(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8033B4B4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_window__23TAdSinglePlyChrSelectGCFPv(void *arg0);
M2C_UNK TWindow__close(void *);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);

void close_window__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    void *temp_r3 = M2C_FIELD(arg0, void **, 0x3C);
    if ((u32) temp_r3 != 0U) {
        if (all_parents_unqueued_for_destruction__7TObjectFv(temp_r3) != 0) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x3C));
            M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8033B504
#include "types.h"

extern "C" {

void init_warp__23TAdSinglePlyChrSelectGCFPv(void* a0);
int close_window__23TAdSinglePlyChrSelectGCFPv(void);
int forward_trade_action_default__16TObjCityMainWarpFPviii(void*, void*, void*, void*);
int TQuestVmDownLoadServer__sub_8006EF6C(void*);
int TWindowSubComCard__sub_80265E60(void*, float);
int check_room_seq_4__16TAdChrSelASlotGCFii(void*, void*);

    extern unsigned char lbl_80477D58[];
    extern const float lbl_805DFA30;
void init_warp__23TAdSinglePlyChrSelectGCFPv(void* a0) { close_window__23TAdSinglePlyChrSelectGCFPv(); *(int*)((char*)a0 + 0x3c) = check_room_seq_4__16TAdChrSelASlotGCFii(lbl_80477D58, (void*)2); forward_trade_action_default__16TObjCityMainWarpFPviii((void*)(*(int*)((char*)a0 + 0x3c)), (void*)TQuestVmDownLoadServer__sub_8006EF6C((void*)14), (void*)6, (void*)1); TWindowSubComCard__sub_80265E60((void*)(*(int*)((char*)a0 + 0x3c)), lbl_805DFA30); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8033B56C
#include "types.h"

extern "C" {

void init_warps__23TAdSinglePlyChrSelectGCFPv(void* a0);
int close_window__23TAdSinglePlyChrSelectGCFPv(void);
int forward_trade_action_default__16TObjCityMainWarpFPviii(void*, void*, void*, void*);
int TQuestVmDownLoadServer__sub_8006EF6C(void*);
int TWindowSubComCard__sub_80265E60(void*, float);
int check_room_seq_4__16TAdChrSelASlotGCFii(void*, void*);

    extern unsigned char lbl_80477D58[];
    extern const float lbl_805DFA30;
void init_warps__23TAdSinglePlyChrSelectGCFPv(void* a0) { close_window__23TAdSinglePlyChrSelectGCFPv(); *(int*)((char*)a0 + 0x3c) = check_room_seq_4__16TAdChrSelASlotGCFii(lbl_80477D58, (void*)2); forward_trade_action_default__16TObjCityMainWarpFPviii((void*)(*(int*)((char*)a0 + 0x3c)), (void*)TQuestVmDownLoadServer__sub_8006EF6C((void*)13), (void*)6, (void*)0); forward_trade_action_default__16TObjCityMainWarpFPviii((void*)(*(int*)((char*)a0 + 0x3c)), (void*)TQuestVmDownLoadServer__sub_8006EF6C((void*)14), (void*)6, (void*)1); TWindowSubComCard__sub_80265E60((void*)(*(int*)((char*)a0 + 0x3c)), lbl_805DFA30); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8033B5F0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdSinglePlyChrSelectGC__sub_8033B5F0(void *arg0);
M2C_UNK TWindow__close(void *);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);

void TAdSinglePlyChrSelectGC__sub_8033B5F0(void *arg0) {
    void *temp_r3 = M2C_FIELD(arg0, void **, 0x38);
    if ((u32) temp_r3 != 0U) {
        if (all_parents_unqueued_for_destruction__7TObjectFv(temp_r3) != 0) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x38));
            M2C_FIELD(arg0, u32 *, 0x38) = 0U;
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8033B8A4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *destroy__23TAdSinglePlyChrSelectGCFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void free_buffer__23TAdSinglePlyChrSelectGCFPv(void *);

extern M2C_UNK lbl_804EF8C0[];

void *destroy__23TAdSinglePlyChrSelectGCFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EF8C0;
        free_buffer__23TAdSinglePlyChrSelectGCFPv(arg0);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8033B904
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *construct__23TAdSinglePlyChrSelectGCFPv(void *arg0);
s32 get_flag_count__23TAdSinglePlyChrSelectGCFv();
M2C_UNK __ct__12TAdBackTxtGCFv(void *, void *);
M2C_UNK __ct__7TObjectFP7TObject(void *, s32);
M2C_UNK __ct__9TAdBackGCFv(void *, void *);
void *__nw__7TObjectFUl(M2C_UNK);
s8 get_chr_select_state__23TAdSinglePlyChrSelectGCFv(void *);
M2C_UNK init_slots__23TAdSinglePlyChrSelectGCFv();
M2C_UNK alloc_download_buffer__23TAdSinglePlyChrSelectGCFPv(void *);

M2C_UNK clear_buffer(void *);
extern void *lbl_804EF8C0[];
extern s32 tl_01;

void *construct__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    void *p;

    __ct__7TObjectFP7TObject(arg0, tl_01);
    M2C_FIELD(arg0, void **, 0x18) = lbl_804EF8C0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) get_chr_select_state__23TAdSinglePlyChrSelectGCFv(lbl_804EF8C0);
    M2C_FIELD(arg0, s32 *, 0x28) = get_flag_count__23TAdSinglePlyChrSelectGCFv();
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    p = __nw__7TObjectFUl(0x24);
    if (p != NULL) {
        __ct__9TAdBackGCFv(p, arg0);
    }
    p = __nw__7TObjectFUl(0x28);
    if (p != NULL) {
        __ct__12TAdBackTxtGCFv(p, arg0);
    }
    alloc_download_buffer__23TAdSinglePlyChrSelectGCFPv(arg0);
    clear_buffer(arg0);
    init_slots__23TAdSinglePlyChrSelectGCFv();
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8033B9D8
#include "types.h"

extern "C" {

s32 get_field_44__23TAdSinglePlyChrSelectGCFPv(void* p);
void TAdSinglePlyChrSelectGC__sub_8033B9E0(void* p);
void TAdSinglePlyChrSelectGC__sub_8033B9EC(void* p);

s32 get_field_44__23TAdSinglePlyChrSelectGCFPv(void* p) { return *(s32*)((char*)p + 0x44); }
void TAdSinglePlyChrSelectGC__sub_8033B9E0(void* p) { *(s32*)((char*)p + 0x40) = 1; }
void TAdSinglePlyChrSelectGC__sub_8033B9EC(void* p) { *(s32*)((char*)p + 0x4c) = 1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8033C640
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * create_check_memory_card__23TAdSinglePlyChrSelectGCFPvPvPv(void *arg0, void *arg1, void *arg2);
void *TCheckMemoryCard__ct(void *, void *, void *, void *, int);
void *__nw__7TObjectFUl(int);

void * create_check_memory_card__23TAdSinglePlyChrSelectGCFPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x250);
    if (o != NULL) {
        o = TCheckMemoryCard__ct(o, arg0, arg1, arg2, 0);
    }
    return o;
}

}
#endif
#endif
