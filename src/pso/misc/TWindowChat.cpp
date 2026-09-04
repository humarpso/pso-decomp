#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TWindowChat__ct(void *arg0, void *arg1, void *arg2);
void *TWindowKeyBoardBase__ct(void *);
void *TWindowKeyBoardHard__ct(void *, void *);
void __ct__7TObjectFP7TObject(void *);
void *__nw__7TObjectFUl(int);
void TWindowChat__sub_8024792C(void *);
void TWindowSubStatusDisp__sub_8025CD44(void *, int, int);

extern M2C_UNK __vt__11TWindowChat[];
extern void *lbl_805D38A0;

void *TWindowChat__ct(void *arg0, void *arg1, void *arg2) {
    void *o;
    void *o2;
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TWindowChat;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D38A0;
    M2C_FIELD(arg0, u8 *, 0x1C) = 0;
    M2C_FIELD(arg0, u16 *, 0x1E) = 2;
    o = __nw__7TObjectFUl(0xB8);
    if (o != NULL) {
        o = TWindowKeyBoardBase__ct(o);
    }
    M2C_FIELD(arg0, void **, 0x20) = o;
    TWindowSubStatusDisp__sub_8025CD44(M2C_FIELD(arg0, void **, 0x20), 200, 2);
    o2 = __nw__7TObjectFUl(0x74);
    if (o2 != NULL) {
        o2 = TWindowKeyBoardHard__ct(o2, M2C_FIELD(arg0, void **, 0x20));
    }
    M2C_FIELD(arg0, void **, 0x28) = o2;
    M2C_FIELD(arg0, u32 *, 0x24) = 0;
    M2C_FIELD(arg0, u32 *, 0x2C) = 0;
    M2C_FIELD(arg0, u32 *, 0x34) = 0;
    M2C_FIELD(arg0, u32 *, 0x30) = 0;
    M2C_FIELD(arg0, void **, 0x38) = arg2;
    TWindowChat__sub_8024792C(arg0);
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x800774C0
#include "types.h"

extern "C" {

void open_symbol_chat__11TWindowChatFPv(s32 *arg0);
int TWindowSubSymbolChat__sub_80077480(s32);

void open_symbol_chat__11TWindowChatFPv(s32 *arg0) {
    TWindowSubSymbolChat__sub_80077480(*arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802472A8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update__11TWindowChatFPv(void *arg0);
void open_input__11TWindowChatFPv(void *arg0);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK close_all_children__11TWindowChatFPv(void *);
M2C_UNK TWindowChat__sub_8024792C(void *);
s32 is_mode_bit6__11TWindowChatFPv(void *);
M2C_UNK TWindowChat__sub_80247DFC(void *);
M2C_UNK TWindowChat__sub_80247E50(void *);
s32 is_open__11TWindowChatFPv();
M2C_UNK TWindowChat__sub_8024AD30(s32);
M2C_UNK TWindowChat__sub_8025CB70(s32);
s32 TWindowCtrl__sub_8024AF74(s32);
M2C_UNK clear_flag60_bit200__16TKeyBoardControlFPv(s32);
M2C_UNK init_parts__10TObjPlayerFPv(s32);
M2C_UNK set_flag60_bit200__16TKeyBoardControlFPv(s32);

extern s32 lbl_805D53A0;

void update__11TWindowChatFPv(void *arg0) {
    s32 temp_r3;

    if (is_open__11TWindowChatFPv() == 0) {
        M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E) | 1);
        TWindowChat__sub_80247E50(arg0);
        TWindowChat__sub_80247DFC(arg0);
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
        if ((temp_r3 != 0) && !(M2C_FIELD(arg0, u16 *, 0x1E) & 2) && (is_mode_bit6__11TWindowChatFPv(arg0) != 0)) {
            if (TWindowCtrl__sub_8024AF74(lbl_805D53A0) == 0) {
                init_parts__10TObjPlayerFPv(temp_r3);
            }
            TWindowChat__sub_8024AD30(lbl_805D53A0);
        }
        TWindowChat__sub_8025CB70(M2C_FIELD(arg0, s32 *, 0x20));
        close_all_children__11TWindowChatFPv(arg0);
        set_flag60_bit200__16TKeyBoardControlFPv(M2C_FIELD(arg0, s32 *, 0x28));
    }
}

void open_input__11TWindowChatFPv(void *arg0) {
    if (is_open__11TWindowChatFPv() != 0) {
        TWindowChat__sub_80247E50(arg0);
        TWindowChat__sub_80247DFC(arg0);
        M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E) & 0xFFFE);
        M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E) | 2);
        clear_flag60_bit200__16TKeyBoardControlFPv(M2C_FIELD(arg0, s32 *, 0x28));
        TWindowChat__sub_8024792C(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80247534
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_all_children__11TWindowChatFPv(void *arg0);
void handle_input__11TWindowChatFPv(void *arg0);
M2C_UNK TKeyBoardControl__sub_8025EC04(s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 TWindowChat__sub_80247080(void *);
s32 TWindowChat__sub_80247128(void *);
s32 TWindowChat__sub_802471AC(void *);
s32 is_mode_bit6__11TWindowChatFPv(void *);
s32 TWindowChat__sub_80247EC0(void *);
M2C_UNK TWindowChat__sub_8024AD30(s32);
M2C_UNK TWindowShortListCtrl__sub_802473C8(void *);
M2C_UNK TWindow__close(void *);
M2C_UNK init_parts__10TObjPlayerFPv(s32);
M2C_UNK queue_destruction__7TObjectFv(void *);

void close_all_children__11TWindowChatFPv(void *arg0) {
    TKeyBoardControl__sub_8025EC04(M2C_FIELD(arg0, s32 *, 0x28));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x30));
        M2C_FIELD(arg0, u32 *, 0x30) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x34));
        M2C_FIELD(arg0, u32 *, 0x34) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x2C));
        M2C_FIELD(arg0, u32 *, 0x2C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x24));
        M2C_FIELD(arg0, u32 *, 0x24) = 0U;
    }
}

extern s32 lbl_805D53A0;

void handle_input__11TWindowChatFPv(void *arg0) {
    s32 temp_r3;
    u8 temp_r0;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if (temp_r3 != 0) {
        if (M2C_FIELD(arg0, u16 *, 0x1E) & 2) {
            TWindowShortListCtrl__sub_802473C8(arg0);
            if (TWindowChat__sub_802471AC(arg0) != 0) {
                close_all_children__11TWindowChatFPv((void *)(arg0));
            }
        } else {
            temp_r0 = M2C_FIELD(arg0, u8 *, 0x1C);
            switch ((s8) temp_r0) {
            case 0:
                if ((TWindowChat__sub_802471AC(arg0) != 0) && (TWindowChat__sub_80247EC0(arg0) != 0)) {
                    if (is_mode_bit6__11TWindowChatFPv(arg0) != 0) {
                        init_parts__10TObjPlayerFPv(temp_r3);
                        TWindowChat__sub_8024AD30(lbl_805D53A0);
                    }
                    close_all_children__11TWindowChatFPv((void *)(arg0));
                    M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E) | 2);
                    return;
                }
                break;
            case 1:
                if ((TWindowChat__sub_80247128(arg0) != 0) && (TWindowChat__sub_80247EC0(arg0) != 0)) {
                    if (is_mode_bit6__11TWindowChatFPv(arg0) != 0) {
                        init_parts__10TObjPlayerFPv(temp_r3);
                        TWindowChat__sub_8024AD30(lbl_805D53A0);
                    }
                    close_all_children__11TWindowChatFPv((void *)(arg0));
                    M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E) | 2);
                    return;
                }
                break;
            case 2:
                if ((TWindowChat__sub_80247080(arg0) != 0) && (TWindowChat__sub_80247EC0(arg0) != 0)) {
                    if (is_mode_bit6__11TWindowChatFPv(arg0) != 0) {
                        init_parts__10TObjPlayerFPv(temp_r3);
                        TWindowChat__sub_8024AD30(lbl_805D53A0);
                    }
                    close_all_children__11TWindowChatFPv((void *)(arg0));
                    M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E) | 2);
                }
                break;
            }
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80247AAC
#include "types.h"

extern "C" {

void render__11TWindowChatFv(void);

void render__11TWindowChatFv(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80247B40
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__11TWindowChatFv(void *arg0, s16 arg1);
M2C_UNK init_parts__10TObjPlayerFPv(s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK TWindow__close(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
s32 is_mode_bit6__11TWindowChatFPv(void *);
M2C_UNK TWindowChat__sub_8024AD30(s32);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern M2C_UNK __vt__11TWindowChat[];
extern s32 lbl_805D53A0;

void *__dt__11TWindowChatFv(void *arg0, s16 arg1) {
    s32 temp_r3;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TWindowChat;
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
        if (temp_r3 != 0) {
            if (!(M2C_FIELD(arg0, u16 *, 0x1E) & 2)) {
                if (is_mode_bit6__11TWindowChatFPv(arg0) != 0) {
                    init_parts__10TObjPlayerFPv(temp_r3);
                    TWindowChat__sub_8024AD30(lbl_805D53A0);
                }
            }
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x30));
            M2C_FIELD(arg0, u32 *, 0x30) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x34));
            M2C_FIELD(arg0, u32 *, 0x34) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x2C));
            M2C_FIELD(arg0, u32 *, 0x2C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x24));
            M2C_FIELD(arg0, u32 *, 0x24) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x28) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x28));
            M2C_FIELD(arg0, u32 *, 0x28) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x20) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x20));
            M2C_FIELD(arg0, u32 *, 0x20) = 0U;
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
#if PSO_CLASS_PACKAGE == 0x80247D2C
#include "types.h"

extern "C" {

void TWindowChat__sub_80247D2C(void* p);
u8 get_input_mode__11TWindowChatFPv(void* p);
int get_flag__11TWindowChatFPv(void* p);
int forward_card_at_1c__11TWindowChatFPv(void* p);
int get_subcard_field1c__11TWindowChatFPv(void* p);
int TWindowChat__sub_80247DAC(void* p);
void set_active_flag__11TWindowChatFPv(void* p);
void set_input_active__11TWindowChatFPv(void* p);
int is_mode_bit6__11TWindowChatFPv(void* p);
int is_visible__11TWindowChatFPv(void* p);
int is_mode_bit4__11TWindowChatFPv(void* p);
int is_open__11TWindowChatFPv(void* p);
void fn_80247ED8(void* p);
int is_visible__17TWindowSubComCardFPv(void*);
int get_status_flag__17TWindowSubComCardFPv(void*);
int TWindowSubComCard__sub_80265BF8(void*);

void TWindowChat__sub_80247D2C(void* p) { *(u16*)((char*)p + 0x62) |= 0x4; }
u8 get_input_mode__11TWindowChatFPv(void* p) { return *(u8*)((char*)p + 0x65); }
int get_flag__11TWindowChatFPv(void* p) { return (*(u16*)((char*)p + 0x60) >> 6) & 0x1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80247D64
#include "types.h"

extern "C" {

void TWindowChat__sub_80247D2C(void* p);
u8 get_input_mode__11TWindowChatFPv(void* p);
int get_flag__11TWindowChatFPv(void* p);
int forward_card_at_1c__11TWindowChatFPv(void* p);
int get_subcard_field1c__11TWindowChatFPv(void* p);
int TWindowChat__sub_80247DAC(void* p);
void set_active_flag__11TWindowChatFPv(void* p);
void set_input_active__11TWindowChatFPv(void* p);
int is_mode_bit6__11TWindowChatFPv(void* p);
int is_visible__11TWindowChatFPv(void* p);
int is_mode_bit4__11TWindowChatFPv(void* p);
int is_open__11TWindowChatFPv(void* p);
void fn_80247ED8(void* p);
int is_visible__17TWindowSubComCardFPv(void*);
int get_status_flag__17TWindowSubComCardFPv(void*);
int TWindowSubComCard__sub_80265BF8(void*);

int forward_card_at_1c__11TWindowChatFPv(void* p) { return TWindowSubComCard__sub_80265BF8(*(void**)((char*)p + 0x1c)); }
int get_subcard_field1c__11TWindowChatFPv(void* p) { return is_visible__17TWindowSubComCardFPv(*(void**)((char*)p + 0x1c)); }
int TWindowChat__sub_80247DAC(void* p) { return get_status_flag__17TWindowSubComCardFPv(*(void**)((char*)p + 0x1c)); }
void set_active_flag__11TWindowChatFPv(void* p) { *(u16*)((char*)p + 0x1e) |= 0x10; }
void set_input_active__11TWindowChatFPv(void* p) { *(u16*)((char*)p + 0x1e) |= 0x20; }
int is_mode_bit6__11TWindowChatFPv(void* p) { return (*(u16*)((char*)p + 0x1e) >> 6) & 0x1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80247E44
#include "types.h"

extern "C" {

void TWindowChat__sub_80247D2C(void* p);
u8 get_input_mode__11TWindowChatFPv(void* p);
int get_flag__11TWindowChatFPv(void* p);
int forward_card_at_1c__11TWindowChatFPv(void* p);
int get_subcard_field1c__11TWindowChatFPv(void* p);
int TWindowChat__sub_80247DAC(void* p);
void set_active_flag__11TWindowChatFPv(void* p);
void set_input_active__11TWindowChatFPv(void* p);
int is_mode_bit6__11TWindowChatFPv(void* p);
int is_visible__11TWindowChatFPv(void* p);
int is_mode_bit4__11TWindowChatFPv(void* p);
int is_open__11TWindowChatFPv(void* p);
void fn_80247ED8(void* p);
int is_visible__17TWindowSubComCardFPv(void*);
int get_status_flag__17TWindowSubComCardFPv(void*);
int TWindowSubComCard__sub_80265BF8(void*);

int is_visible__11TWindowChatFPv(void* p) { return (*(u16*)((char*)p + 0x1e) >> 5) & 0x1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80247EA8
#include "types.h"

extern "C" {

void TWindowChat__sub_80247D2C(void* p);
u8 get_input_mode__11TWindowChatFPv(void* p);
int get_flag__11TWindowChatFPv(void* p);
int forward_card_at_1c__11TWindowChatFPv(void* p);
int get_subcard_field1c__11TWindowChatFPv(void* p);
int TWindowChat__sub_80247DAC(void* p);
void set_active_flag__11TWindowChatFPv(void* p);
void set_input_active__11TWindowChatFPv(void* p);
int is_mode_bit6__11TWindowChatFPv(void* p);
int is_visible__11TWindowChatFPv(void* p);
int is_mode_bit4__11TWindowChatFPv(void* p);
int is_open__11TWindowChatFPv(void* p);
void fn_80247ED8(void* p);
int is_visible__17TWindowSubComCardFPv(void*);
int get_status_flag__17TWindowSubComCardFPv(void*);
int TWindowSubComCard__sub_80265BF8(void*);

int is_mode_bit4__11TWindowChatFPv(void* p) { return (*(u16*)((char*)p + 0x1e) >> 4) & 0x1; }
int is_open__11TWindowChatFPv(void* p) { return *(u16*)((char*)p + 0x1e) & 0x1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8025CB34
#include "types.h"

extern "C" {

int get_flag__11TWindowChatFPv(void* a0 = 0);
int TWindowChat__sub_8025CB70(void* a0 = 0);
void flush_if_flagged__11TWindowChatFPv(void* p);
int is_key_state_2__19TWindowKeyBoardSoftFPv(void* p);

void flush_if_flagged__11TWindowChatFPv(void* p) { if (get_flag__11TWindowChatFPv(p) != 0) { TWindowChat__sub_8025CB70(p); } }

}
#endif
#endif
