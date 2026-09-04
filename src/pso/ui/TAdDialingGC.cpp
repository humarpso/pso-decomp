#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__12TAdDialingGCFv(void *arg0);
void render__12TAdDialingGCFv(void* p);

int update__12TAdDialingGCFPv(void*);
int TAdDialingGC__sub_80328B20(void*);
int TAdDialingGC__sub_80328C10(void*);
int TAdDialingGC__sub_80328C4C(void*);

void render__12TAdDialingGCFv(void* p) { TAdDialingGC__sub_80328B20(p); TAdDialingGC__sub_80328C4C(p); TAdDialingGC__sub_80328C10(p); update__12TAdDialingGCFPv(p); }

M2C_UNK update_dial_state__12TAdDialingGCFPv();
M2C_UNK update_state__12TAdDialingGCFPv();
M2C_UNK update_dial_state__12TAdDialingGCFPvi();
M2C_UNK update_selection__12TAdDialingGCFPv(void *);

void run_task__12TAdDialingGCFv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
    switch (temp_r0) {
    case 0:
        update_dial_state__12TAdDialingGCFPvi();
        break;
    case 1:
        update_state__12TAdDialingGCFPv();
        break;
    case 2:
        update_dial_state__12TAdDialingGCFPv();
        break;
    }
    update_selection__12TAdDialingGCFPv(arg0);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) + 1);
}

}
#else
#if PSO_CLASS_PACKAGE == 0x801A4C90
#include "types.h"

extern "C" {

void TAdDialingGC__sub_801A4C90(void);

    extern int lbl_805D6688;
void TAdDialingGC__sub_801A4C90(void) { lbl_805D6688 = 1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A4C9C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdDialingGC__sub_801A4C9C(void);

extern s32 TAdDialingGC__data_805D6C78;

s32 TAdDialingGC__sub_801A4C9C(void) {
    return TAdDialingGC__data_805D6C78;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A4CA4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdDialingGC__sub_801A4CA4(void *arg0);
void TAdDialingGC__sub_801A4D2C(void);
s32 TAdDialingGC__sub_8007F898(s32, s32);

void TAdDialingGC__sub_801A4CA4(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x20);
    switch (temp_r0) {
    case 0:
        TAdDialingGC__sub_8007F898(1, 0);
        return;
    case 1:
        TAdDialingGC__sub_8007F898(0, 0);
        return;
    case 2:
        TAdDialingGC__sub_8007F898(1, 1);
        return;
    case 3:
        TAdDialingGC__sub_8007F898(0, 1);
    case 4:
        return;
    }
}
void TAdDialingGC__sub_801A4D2C(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80328210
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_dial_state__12TAdDialingGCFPv(void *arg0);
void update_state__12TAdDialingGCFPv(void *arg0);
void update_dial_state__12TAdDialingGCFPvi(void *arg0, s32 arg1);
void spawn_title_screen__12TAdDialingGCFPvi(void *arg0, s32);
s32 TAdDialingGC__sub_803284F8(void *);
M2C_UNK TAdDialingGC__sub_803286AC(void *);
M2C_UNK TAdMcSelectGC__sub_80019DA8(void *, M2C_UNK, f32);
M2C_UNK __ct__10TAdTitleGCFv(u32, void *, M2C_UNK);
u32 __nw__7TObjectFUl(M2C_UNK);
s8 func_801A5E54__Fv();
M2C_UNK queue_destruction__7TObjectFv();

void update_dial_state__12TAdDialingGCFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x20);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x20) = 1;
        return;
    case 2:
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x9C);
        if (temp_r0_2 < 0x10) {
            if (temp_r0_2 == 0) {
                goto block_11;
            }
            goto block_12;
        }
        if (temp_r0_2 < 0x12) {
block_11:
            M2C_FIELD(arg0, s32 *, 0x20) = 3;
            return;
        }
block_12:
        if (TAdDialingGC__sub_803284F8(arg0) != 0) {
            M2C_FIELD(arg0, s32 *, 0x20) = 3;
        }
        break;
    case 3:
        queue_destruction__7TObjectFv();
        break;
    }
}

void update_state__12TAdDialingGCFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x20);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x20) = 1;
        return;
    case 2:
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x9C);
        if (temp_r0_2 < 0x10) {
            if (temp_r0_2 == 0) {
                goto block_11;
            }
            goto block_12;
        }
        if (temp_r0_2 < 0x12) {
block_11:
            M2C_FIELD(arg0, s32 *, 0x20) = 3;
            return;
        }
block_12:
        if (TAdDialingGC__sub_803284F8(arg0) != 0) {
            M2C_FIELD(arg0, s32 *, 0x20) = 3;
        }
        break;
    case 3:
        queue_destruction__7TObjectFv();
        break;
    }
}

void update_dial_state__12TAdDialingGCFPvi(void *arg0, s32 arg1) {
    s32 temp_r4;
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x20);
    switch (temp_r0) {
    case 0:
        temp_r4 = M2C_FIELD(arg0, s32 *, 0xA0);
        M2C_FIELD(arg0, s32 *, 0xA0) = temp_r4 + 1;
        if ((s32) M2C_FIELD(arg0, s32 *, 0xA0) > 0x5A) {
            spawn_title_screen__12TAdDialingGCFPvi((void *)(arg0), (s32)(temp_r4));
            TAdDialingGC__sub_803286AC(arg0);
            M2C_FIELD(arg0, s32 *, 0xA0) = 0;
            M2C_FIELD(arg0, s32 *, 0x20) = 1;
        }
        return;
    case 2:
        if (func_801A5E54__Fv() != 0) {
            M2C_FIELD(arg0, s32 *, 0x20) = 3;
            return;
        }
        M2C_FIELD(arg0, s32 *, 0xA0) = (s32) (M2C_FIELD(arg0, s32 *, 0xA0) + 1);
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x9C);
        switch (temp_r0_2) {
        case 16:
        case 0:
            if ((s32) M2C_FIELD(arg0, s32 *, 0xA0) > 0x5A) {
                M2C_FIELD(arg0, s32 *, 0x20) = 3;
                return;
            }
            break;
        case 17:
            M2C_FIELD(arg0, s32 *, 0x20) = 3;
            return;
        default:
            TAdDialingGC__sub_803286AC(arg0);
            if (TAdDialingGC__sub_803284F8(arg0) != 0) {
                M2C_FIELD(arg0, s32 *, 0x20) = 3;
                return;
            }
            break;
        }
        break;
    case 3:
        queue_destruction__7TObjectFv();
        break;
    }
}

extern f32 lbl_805DF6E0;

void spawn_title_screen__12TAdDialingGCFPvi(void *arg0, s32) {
    if (!(M2C_FIELD(arg0, s32 *, 0xA4) & 1)) {
        u32 temp_nw;
        if (((s32) M2C_FIELD(arg0, s32 *, 0x1C) == 0) && ((temp_nw = __nw__7TObjectFUl(0x138)) != 0U)) {
            __ct__10TAdTitleGCFv(temp_nw, arg0, 5);
        }
        TAdMcSelectGC__sub_80019DA8(arg0, 0x11, lbl_805DF6E0);
        M2C_FIELD(arg0, s32 *, 0xA4) = (s32) (M2C_FIELD(arg0, s32 *, 0xA4) | 1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80328558
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_selection__12TAdDialingGCFPv(u8 *arg0);
M2C_UNK TLobby__sub_803FB184(void *);

extern s32 lbl_805D5704;

void update_selection__12TAdDialingGCFPv(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 0x68) = (s16) M2C_FIELD(arg0, s16 *, 0x30);
    if ((s32) lbl_805D5704 != 0) {
        M2C_FIELD(arg0, s16 *, 0x30) = 0;
        return;
    }
    TLobby__sub_803FB184(arg0 + 0x2C);
    if ((s16) M2C_FIELD(arg0, s16 *, 0x68) != (s16) M2C_FIELD(arg0, s16 *, 0x30)) {
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803287CC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update__12TAdDialingGCFPv(void *arg0);
M2C_UNK TAdDialingGC__sub_80328874();
M2C_UNK handle_state__12TAdDialingGCFPv();
M2C_UNK TAdDialingGC__sub_803285C0();

void update__12TAdDialingGCFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
    switch (temp_r0) {
    case 0:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x20) != 0) {
            TAdDialingGC__sub_803285C0();
        }
        break;
    case 1:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x20) == 2) {
            TAdDialingGC__sub_80328874();
            return;
        }
        break;
    case 2:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x20) == 2) {
            handle_state__12TAdDialingGCFPv();
        }
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80328848
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_dialing_display__12TAdDialingGCFv(void);
M2C_UNK TAdDialingGC__sub_8013ADBC();
M2C_UNK render_status_disp__23TAdSinglePlyChrSelectGCFPvff(f32, f32);

extern const f32 TAdDialingGC__data_805DF6EC;
extern const f32 lbl_805DF6F0;

void update_dialing_display__12TAdDialingGCFv(void) {
    TAdDialingGC__sub_8013ADBC();
    render_status_disp__23TAdSinglePlyChrSelectGCFPvff(TAdDialingGC__data_805DF6EC, lbl_805DF6F0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80328904
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_state__12TAdDialingGCFPv(void *arg0);
M2C_UNK update_dialing_display__12TAdDialingGCFv(M2C_UNK);
M2C_UNK refresh_display__12TAdDialingGCFv();

void handle_state__12TAdDialingGCFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x9C);
    switch (temp_r0) {
    case 11:
        update_dialing_display__12TAdDialingGCFv(0x11);
        return;
    case 12:
        update_dialing_display__12TAdDialingGCFv(0x12);
        return;
    case 13:
        update_dialing_display__12TAdDialingGCFv(0x13);
        return;
    case 14:
        refresh_display__12TAdDialingGCFv();
        return;
    case 15:
        update_dialing_display__12TAdDialingGCFv(0x16);
        return;
    default:
        update_dialing_display__12TAdDialingGCFv(0x10);
        return;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80328A4C
#include "types.h"

extern "C" {

int refresh_display__12TAdDialingGCFv(void);
int update_dialing_display__12TAdDialingGCFv(void*);

int refresh_display__12TAdDialingGCFv(void) { return update_dialing_display__12TAdDialingGCFv((void*)(8)); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80328A70
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_dialog__12TAdDialingGCFv(void);
M2C_UNK TAdDialingGC__sub_8013ADBC(M2C_UNK);
M2C_UNK render_status_disp__23TAdSinglePlyChrSelectGCFPvff(f32, f32);

extern const f32 TAdDialingGC__data_805DF6EC;
extern const f32 lbl_805DF6F0;

void init_dialog__12TAdDialingGCFv(void) {
    TAdDialingGC__sub_8013ADBC(0);
    render_status_disp__23TAdSinglePlyChrSelectGCFPvff(TAdDialingGC__data_805DF6EC, lbl_805DF6F0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80328B20
#include "types.h"

extern "C" {

void TAdDialingGC__sub_80328B20(void);

void TAdDialingGC__sub_80328B20(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80328DB0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TAdDialingGC__ct(void *arg0);
M2C_UNK __ct__7TObjectFP7TObject();
s32 is_state_active__6TLobbyFv();
s32 TLobby__sub_8014618C();

extern M2C_UNK __vt__12TAdDialingGC[];
extern s32 lbl_805D41B0;
extern void *TAdDialingGC__data_805D6C78;

void *TAdDialingGC__ct(void *arg0) {
    __ct__7TObjectFP7TObject();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TAdDialingGC;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D41B0;
    TAdDialingGC__data_805D6C78 = arg0;
    if (is_state_active__6TLobbyFv() != 0) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
    } else if (TLobby__sub_8014618C() == 1) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 2;
    } else {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s16 *, 0x30) = 0;
    M2C_FIELD(arg0, s16 *, 0x68) = 0;
    M2C_FIELD(arg0, s32 *, 0xA0) = 0;
    M2C_FIELD(arg0, s32 *, 0xA4) = 0;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80328E50
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create__12TAdDialingGCFv(void);
M2C_UNK TAdDialingGC__ct(void *, s32);
u32 __nw__7TObjectFUl(M2C_UNK);

extern s32 tl_window;
extern u32 TAdDialingGC__data_805D6C78;

void create__12TAdDialingGCFv(void) {
    void *temp_r3;

    if ((u32) TAdDialingGC__data_805D6C78 == 0U) {
        temp_r3 = (void *) __nw__7TObjectFUl(0xA8);
        if (temp_r3 != NULL) {
            TAdDialingGC__ct(temp_r3, tl_window);
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80328E90
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close__12TAdDialingGCFv(void);
M2C_UNK free_dialog_global__6TLobbyFv();
M2C_UNK free_dialing_gc__6TLobbyFv();

extern s32 TAdDialingGC__data_805D6C78;

void close__12TAdDialingGCFv(void) {
    free_dialing_gc__6TLobbyFv();
    free_dialog_global__6TLobbyFv();
    TAdDialingGC__data_805D6C78 = 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80328EBC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void open__12TAdDialingGCFv(void);
M2C_UNK TLobby__sub_802A0F70();
M2C_UNK TLobby__sub_802A5154();

extern s32 TAdDialingGC__data_805D6C78;

void open__12TAdDialingGCFv(void) {
    TAdDialingGC__data_805D6C78 = 0;
    TLobby__sub_802A0F70();
    TLobby__sub_802A5154();
}

}
#endif
#endif
