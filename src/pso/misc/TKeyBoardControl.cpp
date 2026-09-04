#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close__16TKeyBoardControlFPv(void *arg0);
void release_input__16TKeyBoardControlFPv(void *arg0);
void TKeyBoardControl__sub_802613A4(void *arg0);
void release__16TKeyBoardControlFPv(void *arg0);
M2C_UNK TKeyBoardControl__sub_8025CBC0(void *);
M2C_UNK TKeyBoardControl__sub_8025CBCC(void *);
M2C_UNK TKeyBoardControl__sub_8025CC04(void *);
M2C_UNK TKeyBoardControl__sub_8025CC3C(u32);
M2C_UNK TWindowKeyBoardSoft__sub_80261134(void *);

void close__16TKeyBoardControlFPv(void *arg0) {
    void *temp_r3;
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) | 0x80);
    temp_r3 = M2C_FIELD(arg0, void **, 0x6C);
    if (temp_r3 != NULL) {
        TKeyBoardControl__sub_8025CBC0(temp_r3);
        release__16TKeyBoardControlFPv(arg0);
    }
}

void release_input__16TKeyBoardControlFPv(void *arg0) {
    void *temp_r3;
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) | 0x40);
    temp_r3 = M2C_FIELD(arg0, void **, 0x6C);
    if (temp_r3 != NULL) {
        TKeyBoardControl__sub_8025CBCC(temp_r3);
        release__16TKeyBoardControlFPv(arg0);
    }
}

void TKeyBoardControl__sub_802613A4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) | 0x20);
    if (M2C_FIELD(arg0, void **, 0x6C) != NULL) {
        TKeyBoardControl__sub_8025CC04(M2C_FIELD(arg0, void **, 0x6C));
        release__16TKeyBoardControlFPv(arg0);
    }
}

void release__16TKeyBoardControlFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x6C) != 0U) {
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) | 1);
        TKeyBoardControl__sub_8025CC3C(M2C_FIELD(arg0, u32 *, 0x6C));
        TWindowKeyBoardSoft__sub_80261134(arg0);
    }
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8000F79C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_tasks__16TKeyBoardControlFv(void);
int get_fog_ctrl__16TKeyBoardControlFPv(void* p);
int TFogCtrl__sub_800FAD08(void*);
M2C_UNK TObjPlayer__sub_80083FB0();
M2C_UNK TLobby__sub_80226FA0();
M2C_UNK TLobby__sub_80228074();
M2C_UNK run_tasks__7TObjectFv(M2C_UNK *);

extern M2C_UNK lbl_80515F70[];
extern s32 lbl_805D62B0;

void run_tasks__16TKeyBoardControlFv(void) {
    TObjPlayer__sub_80083FB0();
    TLobby__sub_80228074();
    if ((s32) lbl_805D62B0 != 0) {
        TLobby__sub_80226FA0();
    }
    run_tasks__7TObjectFv(lbl_80515F70);
}

int get_fog_ctrl__16TKeyBoardControlFPv(void* p) { return TFogCtrl__sub_800FAD08(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8000F824
#include "types.h"

extern "C" {

void update__16TKeyBoardControlFv(void);
int TKeyBoardControl__sub_8000F828(void);

void update__16TKeyBoardControlFv(void) {  }
int TKeyBoardControl__sub_8000F828(void) { return 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8000F948
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_input__16TKeyBoardControlFv(void);

extern s32 lbl_805D49C0;

s32 get_input__16TKeyBoardControlFv(void) {
    return lbl_805D49C0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8000F990
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_key_state__16TKeyBoardControlFv(void);

extern s32 lbl_805D49B8;

s32 get_key_state__16TKeyBoardControlFv(void) {
    return lbl_805D49B8;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80131D10
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__16TKeyBoardControlFv(void *arg0, s16 arg1);
void TWindow__close(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK __vt__16TKeyBoardControl[];

void *__dt__16TKeyBoardControlFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TKeyBoardControl;
        if (M2C_FIELD(arg0, void **, 0x28) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x28)); }
        if (M2C_FIELD(arg0, void **, 0x24) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x24)); }
        if (M2C_FIELD(arg0, void **, 0x20) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x20)); }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80131F5C
#include "types.h"

extern "C" {

void TKeyBoardControl__sub_80131F5C(void);
void TKeyBoardControl__sub_80131F60(void);
void set_flag60_bit200__16TKeyBoardControlFPv(void* p);
void clear_flag60_bit200__16TKeyBoardControlFPv(void* p);
int is_key_held__16TKeyBoardControlFPv(void* p);
void set_flag62_bit2__16TKeyBoardControlFPv(void* p);
int is_active__16TKeyBoardControlFPv(void* p);
int is_key_active__16TKeyBoardControlFPv(void* p);
void set_flag62_bit8__16TKeyBoardControlFPv(void* p);

void TKeyBoardControl__sub_80131F5C(void) {  }
void TKeyBoardControl__sub_80131F60(void) {  }
void set_flag60_bit200__16TKeyBoardControlFPv(void* p) { *(u32*)((char*)p + 0x60) |= 0x200; }
void clear_flag60_bit200__16TKeyBoardControlFPv(void* p) { *(u32*)((char*)p + 0x60) &= 0xfffffdff; }
int is_key_held__16TKeyBoardControlFPv(void* p) { return (*(u32*)((char*)p + 0x60) >> 8) & 0x1; }
void set_flag62_bit2__16TKeyBoardControlFPv(void* p) { *(u16*)((char*)p + 0x62) |= 0x2; }
int is_active__16TKeyBoardControlFPv(void* p) { return (*(u16*)((char*)p + 0x60) >> 5) & 0x1; }
int is_key_active__16TKeyBoardControlFPv(void* p) { return *(u16*)((char*)p + 0x60) & 0x1; }
void set_flag62_bit8__16TKeyBoardControlFPv(void* p) { *(u16*)((char*)p + 0x62) |= 0x8; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801320F4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void disable_disconnected_ports__16TKeyBoardControlFv(void);
s32 check_input_ready__16TKeyBoardControlFi(s32 arg0);
s32 TKeyBoardControl__sub_801321B4(s32);
s32 TKeyBoardControl__sub_801322E4(s32);
s32 TKeyBoardControl__sub_80132310(void);
M2C_UNK TKeyBoardControl__sub_803F0E90(s32, M2C_UNK);
s32 TKeyBoardControl__sub_803F1604(s32, M2C_UNK *);

void disable_disconnected_ports__16TKeyBoardControlFv(void) {
    M2C_UNK sp8;
    s32 temp_r3;
    s32 var_r31;

    var_r31 = 0;
    do {
        temp_r3 = TKeyBoardControl__sub_803F1604(var_r31, &sp8);
        if ((temp_r3 == -1) || (temp_r3 == -0x80)) {
            TKeyBoardControl__sub_803F0E90(var_r31, 0);
        }
        var_r31 += 1;
    } while (var_r31 < 4);
}

s32 check_input_ready__16TKeyBoardControlFi(s32 arg0) {
    if (TKeyBoardControl__sub_80132310() != 0) {
        return 0;
    }
    if (TKeyBoardControl__sub_801322E4(arg0) != 0) {
        return 0;
    }
    if (TKeyBoardControl__sub_801321B4(arg0) != 0) {
        return 0;
    }
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801323C0
#include "types.h"

extern "C" {

u8 get_key_state_2__16TKeyBoardControlFPv(void* p);
u8 get_key_state__16TKeyBoardControlFPv(void* p);

u8 get_key_state_2__16TKeyBoardControlFPv(void* p) { return *(u8*)((char*)p + 0x2); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80132404
#include "types.h"

extern "C" {

u8 get_key_state_2__16TKeyBoardControlFPv(void* p);
u8 get_key_state__16TKeyBoardControlFPv(void* p);

u8 get_key_state__16TKeyBoardControlFPv(void* p) { return *(u8*)((char*)p + 0x1); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80132494
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_inactive_keys__16TKeyBoardControlFi(s32 arg0);
s32 TKeyBoardControl__sub_801323C8(void *, int);

void reset_inactive_keys__16TKeyBoardControlFi(s32 arg0) {
    s32 var_r29;
    u8 *var_r28;

    var_r29 = 0;
    var_r28 = (unsigned char *) (arg0 + 0xA0);
    do {
        if (TKeyBoardControl__sub_801323C8((void *) (arg0), (int) (M2C_FIELD(var_r28, u8 *, 0))) == 0) {
            M2C_FIELD(var_r28, u8 *, 0) = 0U;
            M2C_FIELD(var_r28, s8 *, 1) = 0x23;
        }
        var_r29 += 1;
        var_r28 += 2;
    } while (var_r29 < 8);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80132740
#include "types.h"

extern "C" {

void reset_keys__16TKeyBoardControlFPv(void *arg0);

void reset_keys__16TKeyBoardControlFPv(void *arg0) {
    s32 i;
    ((u8 *)arg0)[4] = 0;
    ((u8 *)arg0)[3] = 0;
    for (i = 0; i < 128; i++) {
        ((u8 *)arg0)[i + 5] = 0;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80132884
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_input__16TKeyBoardControlFi(s32 arg0);
M2C_UNK TKeyBoardControl__sub_80132824(s32);
M2C_UNK TKeyBoardControl__sub_803F0C50();
M2C_UNK fn_803F1864(M2C_UNK *);

extern M2C_UNK TKeyBoardControl__sub_801320CC[];

void reset_input__16TKeyBoardControlFi(s32 arg0) {
    TKeyBoardControl__sub_803F0C50();
    TKeyBoardControl__sub_80132824(arg0);
    fn_803F1864(TKeyBoardControl__sub_801320CC);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8019BB2C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void dispatch_select_phase__16TKeyBoardControlFv(void);
s32 TAdStorySelectGC__sub_8019DC14();
M2C_UNK TKeyBoardControl__sub_8000F9CC(M2C_UNK);
M2C_UNK dispatch_by_main_phase__14TBoss4DarkFalzFUs(M2C_UNK);
s32 fn_80219EE8();
M2C_UNK init__23TAdSinglePlyChrSelectGCFv();

void dispatch_select_phase__16TKeyBoardControlFv(void) {
    s32 temp_r3;

    temp_r3 = TAdStorySelectGC__sub_8019DC14();
    switch (temp_r3) {
    case 0:
        if (fn_80219EE8() != 0) {
            dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x3FE);
            TKeyBoardControl__sub_8000F9CC(0xC);
        } else {
            TKeyBoardControl__sub_8000F9CC(0x10);
        }
        break;
    case 1:
        TKeyBoardControl__sub_8000F9CC(8);
        break;
    }
    init__23TAdSinglePlyChrSelectGCFv();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A57C4
#include "types.h"

extern "C" {

void reset__16TKeyBoardControlFv(void);

    extern unsigned char lbl_805D5D09;
void reset__16TKeyBoardControlFv(void) { lbl_805D5D09 = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A584C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_reset_button__16TKeyBoardControlFv(void);

s32 OSGetResetButtonState();
extern u8 lbl_805D5D0A;

s32 check_reset_button__16TKeyBoardControlFv(void) {
    if (OSGetResetButtonState() != 0) {
        lbl_805D5D0A = 1;
    }
    if ((s8) lbl_805D5D0A != 0) {
        if (OSGetResetButtonState() != 0) {
            return 0;
        }
        lbl_805D5D0A = 0;
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A5900
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_and_read__16TKeyBoardControlFi(s32 arg0);
s32 read_input__16TKeyBoardControlFi(s32 arg0);
s32 check_input_ready__16TKeyBoardControlFi(M2C_UNK *);
s32 TKeyBoardControl__sub_801A5998(s32);
s32 TKeyBoardControl__sub_801A5A14(s32);

extern M2C_UNK TKeyBoardControl__data_80506270[];

s32 check_and_read__16TKeyBoardControlFi(s32 arg0) {
    if (check_input_ready__16TKeyBoardControlFi(TKeyBoardControl__data_80506270) != 0) {
        return TKeyBoardControl__sub_801A5998(arg0);
    }
    return 0;
}

extern M2C_UNK TKeyBoardControl__data_80506270[];

s32 read_input__16TKeyBoardControlFi(s32 arg0) {
    if (check_input_ready__16TKeyBoardControlFi(TKeyBoardControl__data_80506270) != 0) {
        return TKeyBoardControl__sub_801A5A14(arg0);
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A5A40
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_input_angle__16TKeyBoardControlFPv(void *arg0);

extern s32 lbl_805D53A4;
extern const f32 lbl_805DC0B0;

s32 check_input_angle__16TKeyBoardControlFPv(void *arg0) {
    s32 temp_r4_2;
    void *temp_r4;
    s32 temp_r5;
    u16 temp_r0;

    temp_r4 = M2C_FIELD(arg0, void **, 8);
    if (temp_r4 == NULL) {
        return 0;
    }
    if (M2C_FIELD(temp_r4, f32 *, 0x24) < lbl_805DC0B0) {
        return 0;
    }
    temp_r5 = M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0) = M2C_FIELD(temp_r4, s32 *, 0x1C);
    temp_r0 = temp_r5 - M2C_FIELD(arg0, s32 *, 0);
    if (((s32) temp_r0 > 0x5000) && ((s32) temp_r0 < 0xB000)) {
        temp_r4_2 = M2C_FIELD(arg0, s32 *, 4);
        M2C_FIELD(arg0, s32 *, 4) = (s32) lbl_805D53A4;
        if ((s32) (M2C_FIELD(arg0, s32 *, 4) - temp_r4_2) < 8) {
            return 1;
        }
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802433DC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void alloc_buffer__16TKeyBoardControlFv(void);
s32 xmalloc__FUl(M2C_UNK);

extern s32 lbl_805D63E0;

void alloc_buffer__16TKeyBoardControlFv(void) {
    lbl_805D63E0 = xmalloc__FUl(0x14000);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8025F27C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 poll_input__16TKeyBoardControlFPv(void *arg0);
u8 get_key_state__16TKeyBoardControlFPv(M2C_UNK *);

extern M2C_UNK TKeyBoardControl__data_80506270[];

s32 poll_input__16TKeyBoardControlFPv(void *arg0) {
    u8 temp_r3;

    if (M2C_FIELD(arg0, s32 *, 0x60) & 0x40) {
        return 3;
    }
    temp_r3 = get_key_state__16TKeyBoardControlFPv(TKeyBoardControl__data_80506270);
    switch ((s32) temp_r3) {
    case 4:
        return 1;
    case 2:
        return 0;
    case 3:
        return 2;
    default:
        return 3;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8025FAF0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void process_key_input__16TKeyBoardControlFPvi(void *arg0, s32 arg1);
s32 TKeyBoardControl__sub_8025EDB4(void *, s32, u16 *);
u32 poll_input__16TKeyBoardControlFPv(void *);
u8 TKeyBoardControl__sub_8025F2F8(void *, u8);
s32 TKeyBoardControl__sub_8025F3D4(void *, s32, u8);
s32 TKeyBoardControl__sub_8025F4A0();
s32 TWindowKeyBoardHard__sub_80260438(void *);
M2C_UNK TWindowKeyBoardSoft__sub_8025C618(s32, u16);
M2C_UNK set_input_mode__20TWindowSubStatusDispFPvUc(s32, s32);

void process_key_input__16TKeyBoardControlFPvi(void *arg0, s32 arg1) {
    u16 sp8;
    s32 temp_r31;

    if (TKeyBoardControl__sub_8025F4A0() != 0) {
        M2C_FIELD(arg0, s32 *, 0x6C) = 7;
        return;
    }
    temp_r31 = TKeyBoardControl__sub_8025EDB4(arg0, arg1, &sp8);
    if (sp8 == 0x1F) {
        M2C_FIELD(arg0, s32 *, 0x6C) = 7;
        return;
    }
    if (poll_input__16TKeyBoardControlFPv(arg0) < 3U) {
        if (TKeyBoardControl__sub_8025F3D4(arg0, arg1, (u8) sp8) == 0) {
            sp8 = (u16) TKeyBoardControl__sub_8025F2F8(arg0, (u8) sp8);
            goto block_7;
        }
    } else {
block_7:
        if ((TWindowKeyBoardHard__sub_80260438(arg0) != 0) && ((s32) sp8 >= 0x61) && ((s32) sp8 <= 0x7A)) {
            sp8 -= 0x20;
        }
        set_input_mode__20TWindowSubStatusDispFPvUc(M2C_FIELD(arg0, s32 *, 0x70), temp_r31);
        TWindowKeyBoardSoft__sub_8025C618(M2C_FIELD(arg0, s32 *, 0x70), sp8);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8025FE9C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void enable_keyboard_led__16TKeyBoardControlFPv(void *arg0);
void enable_kana_led__16TKeyBoardControlFPv(void *arg0);
void enable_caps_led__16TKeyBoardControlFPv(void *arg0);
M2C_UNK TKeyBoardControl__sub_8025CBC0(u32);
M2C_UNK TKeyBoardControl__sub_8025CBCC(u32);
M2C_UNK TKeyBoardControl__sub_8025CC04(u32);
M2C_UNK fn_8025FF8C(void *);

void enable_keyboard_led__16TKeyBoardControlFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x70) != 0U) {
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) | 0x1000);
        TKeyBoardControl__sub_8025CBC0(M2C_FIELD(arg0, u32 *, 0x70));
        fn_8025FF8C(arg0);
    }
}

void enable_kana_led__16TKeyBoardControlFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x70) != 0U) {
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) | 0x800);
        TKeyBoardControl__sub_8025CBCC(M2C_FIELD(arg0, u32 *, 0x70));
        fn_8025FF8C(arg0);
    }
}

void enable_caps_led__16TKeyBoardControlFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x70) != 0U) {
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) | 0x400);
        TKeyBoardControl__sub_8025CC04(M2C_FIELD(arg0, u32 *, 0x70));
        fn_8025FF8C(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80290CB0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_main_menu_scene__16TKeyBoardControlFv(void);
M2C_UNK TKeyBoardControl__sub_8000F90C(M2C_UNK);
M2C_UNK TKeyBoardControl__sub_8000F91C(M2C_UNK);
M2C_UNK TKeyBoardControl__sub_8000F92C();
M2C_UNK TKeyBoardControl__sub_801A66B8();
M2C_UNK TLobby__sub_801E2F44(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TObjCMMainMenu__sub_8028EA88();
M2C_UNK TKeyBoardControl__sub_80290D10();
M2C_UNK render_tick__Fv();

extern u8 lbl_805D6560;

void update_main_menu_scene__16TKeyBoardControlFv(void) {
    TLobby__sub_801E2F44(0, 0, 0xFF);
    TKeyBoardControl__sub_801A66B8();
    TKeyBoardControl__sub_8000F90C(2);
    TKeyBoardControl__sub_8000F91C(6);
    if ((u8) lbl_805D6560 != 0) {
        TKeyBoardControl__sub_80290D10();
        TKeyBoardControl__sub_8000F92C();
        return;
    }
    TObjCMMainMenu__sub_8028EA88();
    render_tick__Fv();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80290D10
#include "types.h"

extern "C" {

void TKeyBoardControl__sub_80290D10(void);

    extern unsigned char lbl_805D6560;
void TKeyBoardControl__sub_80290D10(void) { lbl_805D6560 = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A1218
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_menu_scene__16TKeyBoardControlFv(void);
M2C_UNK TAdSinglePlyChrSelectGC__sub_80201354();
M2C_UNK TKeyBoardControl__sub_8000F90C(M2C_UNK);
M2C_UNK TKeyBoardControl__sub_8000F91C(M2C_UNK);
M2C_UNK TKeyBoardControl__sub_801A66B8();
M2C_UNK TLobby__sub_801E2F44(M2C_UNK, M2C_UNK, M2C_UNK);
u32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK free_keyboard_soft_resources__6TLobbyFv();
M2C_UNK update_keyboard_menu__6TLobbyFv();
M2C_UNK fn_802A1324();
M2C_UNK render_tick__Fv();

extern s8 lbl_805D6638;
extern u8 lbl_805D6639;

void update_menu_scene__16TKeyBoardControlFv(void) {
    TLobby__sub_801E2F44(0, 0, 0);
    TKeyBoardControl__sub_801A66B8();
    TKeyBoardControl__sub_8000F90C(2);
    switch ((s8) lbl_805D6639) {
    case 0:
        TKeyBoardControl__sub_8000F91C(1);
        TKeyBoardControl__sub_8000F90C(9);
        break;
    case 1:
        update_keyboard_menu__6TLobbyFv();
        TAdSinglePlyChrSelectGC__sub_80201354();
        free_keyboard_soft_resources__6TLobbyFv();
        TKeyBoardControl__sub_8000F91C(5);
        break;
    }
    lbl_805D6638 = 0;
    if (__nw__7TObjectFUl(0x24) != 0U) {
        fn_802A1324();
    }
    render_tick__Fv();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A12B8
#include "types.h"

extern "C" {

void TKeyBoardControl__sub_802A12B8(void);
void TKeyBoardControl__sub_802A12BC(void);

void TKeyBoardControl__sub_802A12B8(void) {  }
void TKeyBoardControl__sub_802A12BC(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A12C0
#include "types.h"

extern "C" {

void TKeyBoardControl__sub_802A12C0(void);

    extern unsigned char lbl_805D6638;
void TKeyBoardControl__sub_802A12C0(void) { lbl_805D6638 = 1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A12CC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TKeyBoardControl__sub_802A12CC(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK lbl_804DCB64[];

void *TKeyBoardControl__sub_802A12CC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804DCB64;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803CBDE0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void flush_input__16TKeyBoardControlFv(void);
M2C_UNK TLobby__sub_803D32B4();

void flush_input__16TKeyBoardControlFv(void) {
    TLobby__sub_803D32B4();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803DD2E0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_camera__16TKeyBoardControlFv(void);
M2C_UNK TCameraCtrl__sub_803DD300();

void update_camera__16TKeyBoardControlFv(void) {
    TCameraCtrl__sub_803DD300();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803DD428
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_key_state__16TKeyBoardControlFi(s32 arg0);

extern s32 lbl_805D7718;

void set_key_state__16TKeyBoardControlFi(s32 arg0) {
    lbl_805D7718 = arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803DEC3C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clamp_axes__16TKeyBoardControlFPv(u8 *arg0);

void clamp_axes__16TKeyBoardControlFPv(u8 *arg0) {
    u8 temp_r0;
    u8 temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, u8 *, 2);
    if ((s8) temp_r0 > 0x59) {
        M2C_FIELD(arg0, s8 *, 2) = 0x59;
    } else if ((s8) temp_r0 < -0x59) {
        M2C_FIELD(arg0, s8 *, 2) = -0x59;
    }
    temp_r0_2 = M2C_FIELD(arg0, u8 *, 3);
    if ((s8) temp_r0_2 > 0x59) {
        M2C_FIELD(arg0, s8 *, 3) = 0x59;
        return;
    }
    if ((s8) temp_r0_2 < -0x59) {
        M2C_FIELD(arg0, s8 *, 3) = -0x59;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803F0E8C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TKeyBoardControl__sub_803F0E8C(void);

void TKeyBoardControl__sub_803F0E8C(void) {

}

}
#endif
#endif
