#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_state__15TWindowMakeTeamFPvi(void *arg0, s32 arg1);
void send_state__15TWindowMakeTeamFPv(void *arg0);
void update_ok_button__15TWindowMakeTeamFPv(void *arg0);
M2C_UNK TWindowSubComCard__sub_8026853C(s32, M2C_UNK);
M2C_UNK TWindowSubComCard__sub_802685C4(s32, M2C_UNK);

void set_state__15TWindowMakeTeamFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 0:
        M2C_FIELD(arg0, s8 *, 0x1C) = 3;
        return;
    case 1:
        M2C_FIELD(arg0, s8 *, 0x1C) = 5;
        return;
    case 2:
        M2C_FIELD(arg0, s8 *, 0x1C) = 7;
        return;
    case 3:
        M2C_FIELD(arg0, s8 *, 0x1C) = 9;
        return;
    case 4:
        M2C_FIELD(arg0, u8 *, 0x1D) = (u8) (M2C_FIELD(arg0, u8 *, 0x1D) | 1);
        M2C_FIELD(arg0, s8 *, 0x1C) = 0xB;
        return;
    }
}

void send_state__15TWindowMakeTeamFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, u8 *, 0x1E) != 1) {
        TWindowSubComCard__sub_8026853C(M2C_FIELD(arg0, s32 *, 0x2C), 3);
        return;
    }
    TWindowSubComCard__sub_802685C4(M2C_FIELD(arg0, s32 *, 0x2C), 3);
}

void update_ok_button__15TWindowMakeTeamFPv(void *arg0) {
    u8 *temp_r4;

    temp_r4 = M2C_FIELD(arg0, u8 **, 0x24);
    if ((temp_r4 != NULL) && ((s8) *temp_r4 != 0)) {
        TWindowSubComCard__sub_8026853C(M2C_FIELD(arg0, s32 *, 0x2C), 4);
        return;
    }
    TWindowSubComCard__sub_802685C4(M2C_FIELD(arg0, s32 *, 0x2C), 4);
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80131A5C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int set_keyboard_flag62_bit2__15TWindowMakeTeamFPv(void* p);
int set_field_1c__6TLobbyFPvf(void*);
s32 TWindowSubTradeMain__sub_80244A4C(void *);
s32 clear_flag60_bit200__16TKeyBoardControlFPv(void * a0 = 0);
int get_lobby_field_20__15TWindowMakeTeamFPv(void* p);
s32 set_flag60_bit200__16TKeyBoardControlFPv(void *);
int set_flag62_bit2__16TKeyBoardControlFPv(void*);
s32 window_request_show(void * a0 = 0);

int set_keyboard_flag62_bit2__15TWindowMakeTeamFPv(void* p) { return set_flag62_bit2__16TKeyBoardControlFPv(*(void**)((char*)p + 0x20)); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80131A80
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 window_request_show(void * a0 = 0);
s32 clear_flag60_bit200__16TKeyBoardControlFPv(void * a0 = 0);
s32 set_flag60_bit200__16TKeyBoardControlFPv(void *);
s32 TWindowSubTradeMain__sub_80244A4C(void *);
int set_keyboard_flag62_bit2__15TWindowMakeTeamFPv(void* p);
int get_lobby_field_20__15TWindowMakeTeamFPv(void* p);
int set_flag62_bit2__16TKeyBoardControlFPv(void*);
int set_field_1c__6TLobbyFPvf(void*);

int get_lobby_field_20__15TWindowMakeTeamFPv(void* p) { return set_field_1c__6TLobbyFPvf(*(void**)((char*)p + 0x20)); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80131B54
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_sub_position__15TWindowMakeTeamFPvPv(u8 *arg0, u8 *arg1);
M2C_UNK save_position__17TWindowSubComCardFPv(void *, int, int, f32);

extern const f32 lbl_805DB078;
extern const f32 lbl_805DB07C;

void set_sub_position__15TWindowMakeTeamFPvPv(u8 *arg0, u8 *arg1) {
    f32 temp_f1;
    u8 *temp_r4;
    u8 *temp_r5;

    temp_r5 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x20));
    M2C_FIELD(temp_r5, f32 *, 0x30) = (f32) (M2C_FIELD(arg1, f32 *, 0) - lbl_805DB078);
    temp_f1 = M2C_FIELD(arg1, f32 *, 4);
    temp_r4 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x20));
    M2C_FIELD(temp_r4, f32 *, 0x34) = (f32) (temp_f1 - lbl_805DB07C);
    save_position__17TWindowSubComCardFPv((void *) (M2C_FIELD(arg0, void **, 0x20)), (int) (temp_r4), (int) (temp_r5), (f32) (temp_f1));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80131BA0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 alloc_buffer__11TOBoss4RockFPv();
s32 TWindowKeyBoardSoft__sub_8025C974(s32, s32);
s32 TWindowKeyBoardSoft__sub_8025CA70(s32);
int get_keyboard_field_6c__15TWindowMakeTeamFPv(void* p);
int is_keyboard_active__17TWindowSubComCardFPv(void* p);
int update_keyboard__17TWindowSubComCardFPv(void* p);
int is_active__16TKeyBoardControlFPv(void*);
int is_key_active__16TKeyBoardControlFPv(void*);
int get_field_6c__19TWindowKeyBoardSoftFPv(void*);

int get_keyboard_field_6c__15TWindowMakeTeamFPv(void* p) { return get_field_6c__19TWindowKeyBoardSoftFPv(*(void**)((char*)p + 0x20)); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80264A90
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_message_10__20TWindowSubStatusDispFPv(s32);
s8 get_mode__6TLobbyFPv();
void TWindowMainMenu__sub_80264A64(void);
void TWindowMainMenu__vt7(void);
int test_keyboard_card_flag4(void* p);
int test_card_flag__19TWindowKeyBoardHardFii(void*, int);

void init_status_disp__15TWindowMakeTeamFc(s8 arg0) {
    get_message_10__20TWindowSubStatusDispFPv(arg0 + 0x113);
}
void draw_entry_0x110__15TWindowMakeTeamFc(s8 arg0) {
    get_message_10__20TWindowSubStatusDispFPv(arg0 + 0x110);
}
u8 is_enabled__15TWindowMakeTeamFPv(void *arg0) {
    if (get_mode__6TLobbyFPv() == 1) {
        return 0U;
    }
    return M2C_FIELD(arg0, u8 *, 0x1F);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80264DF4
#include "types.h"

extern "C" {

s32 create_menu__15TWindowMakeTeamFv(void);
void render__15TWindowMakeTeamFv(void);
s32 get_message_10__20TWindowSubStatusDispFPv(s32);
s32 update_next_entry__17TWindowSubComCardFPviii(s32, s32, s32, s32);
s32 add_text_entry__20TWindowSubStatusDispFPvii(s32, s32, s32);
s32 fn_80268BE4(s32);

s32 create_menu__15TWindowMakeTeamFv(void) {
    s32 temp_r31;

    temp_r31 = fn_80268BE4(5);
    update_next_entry__17TWindowSubComCardFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x4D), 0, 0);
    update_next_entry__17TWindowSubComCardFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x4E), 0, 1);
    update_next_entry__17TWindowSubComCardFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x4F), 0, 2);
    update_next_entry__17TWindowSubComCardFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x50), 0, 3);
    add_text_entry__20TWindowSubStatusDispFPvii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x51), 4);
    return temp_r31;
}
void render__15TWindowMakeTeamFv(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80265298
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__15TWindowMakeTeamFv(void *arg0, s16 arg1);
void free__11TOBoss4RockFUi(void *);
void TWindow__close(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK __vt__15TWindowMakeTeam[];

void *__dt__15TWindowMakeTeamFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TWindowMakeTeam;
        free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0x28));
        free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0x24));
        if (M2C_FIELD(arg0, void **, 0x34) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x34)); M2C_FIELD(arg0, M2C_UNK *, 0x34) = 0; }
        if (M2C_FIELD(arg0, void **, 0x30) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x30)); M2C_FIELD(arg0, M2C_UNK *, 0x30) = 0; }
        if (M2C_FIELD(arg0, void **, 0x2C) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x2C)); M2C_FIELD(arg0, M2C_UNK *, 0x2C) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8026534C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TWindowMakeTeam__ct(void *arg0, void *arg1, s32 arg2);
s32 init_status_disp__15TWindowMakeTeamFc(u8);
s32 draw_entry_0x110__15TWindowMakeTeamFc(u8);
s32 create_menu__15TWindowMakeTeamFv(struct TWMT *);
M2C_UNK TWindowMakeTeam__sub_80268650(s32, s32, M2C_UNK);
M2C_UNK __ct__7TObjectFP7TObject();

struct TWMT;
extern void* __vt__15TWindowMakeTeam[];
extern s32 lbl_805D3958;

void *TWindowMakeTeam__ct(void *arg0, void *arg1, s32 arg2) {
    s32 temp_r0;
    s32 v;
    register struct TWMT *self;

    __ct__7TObjectFP7TObject();
    self = (struct TWMT *) arg0;
    M2C_FIELD(self, void **, 0x18) = (void *) __vt__15TWindowMakeTeam;
    v = lbl_805D3958;
    M2C_FIELD(self, s32 *, 0) = v;
    M2C_FIELD(self, s8 *, 0x1C) = 0;
    M2C_FIELD(self, s8 *, 0x1D) = 0;
    M2C_FIELD(self, s32 *, 0x20) = arg2;
    M2C_FIELD(self, s32 *, 0x2C) = create_menu__15TWindowMakeTeamFv(self);
    M2C_FIELD(self, s32 *, 0x30) = 0;
    M2C_FIELD(self, s32 *, 0x34) = 0;
    M2C_FIELD(self, s32 *, 0x24) = 0;
    M2C_FIELD(self, s32 *, 0x28) = 0;
    M2C_FIELD(self, u8 *, 0x1E) = 0U;
    M2C_FIELD(self, u8 *, 0x1F) = 0U;
    temp_r0 = M2C_FIELD(self, s32 *, 0x20);
    if ((temp_r0 == 1) || (temp_r0 == 2)) {
        TWindowMakeTeam__sub_80268650(M2C_FIELD(self, s32 *, 0x2C), draw_entry_0x110__15TWindowMakeTeamFc(M2C_FIELD(self, u8 *, 0x1E)), 2);
    }
    TWindowMakeTeam__sub_80268650(M2C_FIELD(self, s32 *, 0x2C), init_status_disp__15TWindowMakeTeamFc(M2C_FIELD(self, u8 *, 0x1F)), 3);
    return arg0;
}

}
#endif
#endif
