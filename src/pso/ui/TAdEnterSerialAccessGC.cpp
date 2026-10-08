#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Elt80364258_80364258 { s32 f0; };

struct RecoveredGlobal_8032B904_lbl_80477278 { M2C_UNK value; u8 remaining[0xC]; };

struct RecoveredGlobal_8032BA8C_TAdEnterPasswordGC__data_804EDA20 {
    M2C_UNK value;
    u8 remaining[0x80];
};

struct RecoveredGlobal_8032BB34___vt__18TAdEnterPasswordGC {
    M2C_UNK value;
    u8 remaining[0x18];
};

#include <stddef.h>
struct Stack_803216C0 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_803216C0_lbl_8047653C {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_803216C0_lbl_805430D0 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct Stack_803217B8 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_803217B8_lbl_80476524 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_803217B8_TAdEnterSerialAccessGC__data_804EC9C4 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_803217B8_lbl_805430A4 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct Stack_80321874 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_80321874_lbl_80476518 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_80321874_TAdEnterSerialAccessGC__data_804EC9B8 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_80321874_lbl_80543090 {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_80322418_lbl_804ED9F8 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_8032195C_TAdEnterSerialAccessGC__data_804EC9B8 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_80321B28_TAdEnterSerialAccessGC__data_804764E8
{
  M2C_UNK value;
  u8 remaining[0xC];
};

struct RecoveredGlobal_80321B28_TAdEnterSerialAccessGC__data_804EC9B8
{
  M2C_UNK value;
  u8 remaining[0x8];
};

struct RecoveredGlobal_80321B28_TAdEnterSerialAccessGC__data_804EC9C4
{
  M2C_UNK value;
  u8 remaining[0xC];
};

struct RecoveredGlobal_80321B28_lbl_8050E208
{
  M2C_UNK value;
  u8 remaining[0x1AC];
};

struct RecoveredGlobal_80321B28_lbl_8050E3B8
{
  M2C_UNK value;
  u8 remaining[0x1AC];
};

struct T_80321738 { s32 a; s32 b; s32 c; };

struct RecoveredGlobal_80321B28_TAdEnterSerialAccessGC__data_804764E8;

typedef struct Plate_803214C4 { u8 pad[0x3B4]; } Plate_803214C4;

typedef struct Vec2_803214C4 { f32 x; f32 y; } Vec2_803214C4;

typedef struct Rect_803214C4 { f32 x; f32 y; f32 w; f32 h; } Rect_803214C4;

typedef struct Col_803214C4 { u32 v; } Col_803214C4;

struct Pos_80321358 { f32 x, y; };

typedef s32 M2C_UNK;
struct V_803212F8 { f32 a; f32 b; };

extern "C" {
void strncpy(s32, s32, s32);
M2C_UNK memset(void *, int, int);
extern RecoveredGlobal_8032BA8C_TAdEnterPasswordGC__data_804EDA20 TAdEnterSerialAccessGC__data_804EC9C4;
void TAdEnterSerialAccessGC__sub_8032190C(s32 arg0);
M2C_UNK memset(void *, int, int);
s32 get_instance__23TAdSinglePlyChrSelectGCFv();
extern RecoveredGlobal_803216C0_lbl_8047653C lbl_8047653C;
extern RecoveredGlobal_803216C0_lbl_805430D0 lbl_805430D0;
M2C_UNK *get_formatted_serial__22TAdEnterSerialAccessGCFv(void);
M2C_UNK memset(void *, int, int);
extern RecoveredGlobal_803217B8_lbl_80476524 lbl_80476524;
extern RecoveredGlobal_8032BA8C_TAdEnterPasswordGC__data_804EDA20 TAdEnterSerialAccessGC__data_804EC9C4;
extern RecoveredGlobal_803217B8_lbl_805430A4 lbl_805430A4;
M2C_UNK *TAdEnterSerialAccessGC__sub_803217B8(void);
M2C_UNK memset(void *, int, int);
extern RecoveredGlobal_80321874_lbl_80476518 lbl_80476518;
extern RecoveredGlobal_80321874_TAdEnterSerialAccessGC__data_804EC9B8 TAdEnterSerialAccessGC__data_804EC9B8;
extern RecoveredGlobal_80321874_lbl_80543090 lbl_80543090;
M2C_UNK *TAdEnterSerialAccessGC__sub_80321874(void);
extern RecoveredGlobal_80322418_lbl_804ED9F8 lbl_804ED9F8;
void TAdEnterSerialAccessGC__sub_80322418(s32 arg0, s32 arg1);
void strncpy(s32, s32, s32);
M2C_UNK memset(void *, int, int);
extern RecoveredGlobal_80321874_TAdEnterSerialAccessGC__data_804EC9B8 TAdEnterSerialAccessGC__data_804EC9B8;
void TAdEnterSerialAccessGC__sub_8032195C(s32 arg0);
void TAdEnterSerialAccessGC__sub_8032195C(s32 arg0);
int serial_to_hex_string__22TAdEnterSerialAccessGCFi(void);
void init__22TAdEnterSerialAccessGCFv(void);
M2C_UNK memset(void *, int, int);
void queue_destruction__7TObjectFv(void *);
s32 realloc_buffer__17TWindowSubComCardFPv(int);
s32 update_keyboard__17TWindowSubComCardFPv(int);
s32 get_selected_slot__23TAdSinglePlyChrSelectGCFPv(int);
s32 free__11TOBoss4RockFUi(int);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
s32 free_menu_object(int);
s32 get_field_118__22TAdEnterSerialAccessGCFv();
s32 play_sound_effect(int, int, int, int);
s32 TWindow__close(int);
s32 reset_input_state__22TAdEnterSerialAccessGCFPv(int);
s32 add_item_rect__12TLevelSelectFPvPv(int, void *);
s32 set_active__22TAdEnterSerialAccessGCFPv(int);
void TAdEnterSerialAccessGC__sub_80322418(s32 arg0, s32 arg1);
void set_state_3__22TAdEnterSerialAccessGCFPv(void* p);
s32 forward_input__22TAdEnterSerialAccessGCFPv(void *, void *, int);
void strncpy(s32, s32, s32);
s32 strlen(int);
extern RecoveredGlobal_80321B28_TAdEnterSerialAccessGC__data_804764E8 TAdEnterSerialAccessGC__data_804764E8;
extern RecoveredGlobal_80321874_TAdEnterSerialAccessGC__data_804EC9B8 TAdEnterSerialAccessGC__data_804EC9B8;
extern RecoveredGlobal_8032BA8C_TAdEnterPasswordGC__data_804EDA20 TAdEnterSerialAccessGC__data_804EC9C4;
extern RecoveredGlobal_80321B28_lbl_8050E208 lbl_8050E208;
extern RecoveredGlobal_80321B28_lbl_8050E3B8 lbl_8050E3B8;
extern u32 TAdEnterSerialAccessGC__data_805D6C20;
extern s32 TAdEnterSerialAccessGC__data_805D6C24;
void TAdEnterSerialAccessGC__sub_80321B28(u8 *arg0, int arg1);
s32 get_state_flag__9TMainTaskFv();
void render__22TAdEnterSerialAccessGCFv(void *self);
void create_callback__22TAdEnterSerialAccessGCFPvPvPv(void *, void *, void *);
extern char lbl_804764D8[];
extern char lbl_804764E0[];
void TAdEnterSerialAccessGC__sub_80321A90(void);
void format_dashed_serial__22TAdEnterSerialAccessGCFPvPvUiPv(u8 *dst, u8 *src, u32 count, u32 *lens);
s32 get_instance__23TAdSinglePlyChrSelectGCFv();
void format_dashed_serial__22TAdEnterSerialAccessGCFPvPvUiPv(u8 *dst, u8 *src, u32 count, u32 *lens);
M2C_UNK memset(void *, int, int);
extern T_80321738 lbl_80476530;
extern u8 lbl_805430BC[];
u8 *TAdEnterSerialAccessGC__sub_80321738(void);
int sprintf(char *, const char *, ...);
void sscanf(int, const char *, ...);
M2C_UNK memset(void *, int, int);
extern char lbl_804765E0[];
extern char lbl_804765E8[];
extern char lbl_80543010[];
extern u32 lbl_805DF508;
char *hex_to_decimal_string__22TAdEnterSerialAccessGCFi(int arg0);
extern char lbl_80543050[];
char *convert_serial_hex_to_decimal__22TAdEnterSerialAccessGCFi(int arg0);
s32 get_localized_text_entry(int, void *);
void send_and_handle__6TLobbyFPvii(s32, s32, int);
s32 update_window_mode_from_progress__6TLobbyFiPv(void *, void *);
extern u8 lbl_804764C8[];
extern u8 lbl_804764D0[];
s32 open_message_window__22TAdEnterSerialAccessGCFPvPv(void *arg0, void *arg1);
void queue_destruction__7TObjectFv(void *);
s32 load_and_verify_character_save__23TAdSinglePlyChrSelectGCFPvPv(void *, void *);
s32 get_field_118__22TAdEnterSerialAccessGCFv();
s32 get_instance__23TAdSinglePlyChrSelectGCFv();
void *__nw__7TObjectFUl(int);
void init_state__22TAdEnterSerialAccessGCFv(void);
void __ct__9TAdBackGCFv(void *, void *);
void __ct__12TAdBackTxtGCFv(void *, void *);
void *__ct__14TAdSelectCurGCFv(void *, s32, void *, void *);
void init__22TAdEnterSerialAccessGCFv(void);
void TAdEnterSerialAccessGC__sub_8032190C(s32 arg0);
void TAdEnterSerialAccessGC__sub_80322418(s32 arg0, s32 arg1);
void TAdEnterBaseGC__ct(void *);
extern RecoveredGlobal_80321B28_TAdEnterSerialAccessGC__data_804764E8 TAdEnterSerialAccessGC__data_804764E8;
extern u8 lbl_804764F8[];
extern M2C_UNK __vt__22TAdEnterSerialAccessGC[];
extern s32 lbl_805D4158;
extern s32 tl_clipout;
extern u32 TAdEnterSerialAccessGC__data_805D6C20;
extern s32 TAdEnterSerialAccessGC__data_805D6C24;
u8 *TAdEnterSerialAccessGC__ct(u8 *arg0);
void TAdEnterSerialAccessGC__sub_802C4B64(void *, void *, Col_803214C4, int);
void __dt__19TAdPlyChrSelPlateGCFv(void *, int);
void *__ct__19TAdPlyChrSelPlateGCFv(void *, s32, void *);
void draw_serial_separators__22TAdEnterSerialAccessGCFv(void);
extern Vec2_803214C4 lbl_80476548[];
extern Vec2_803214C4 lbl_80476550[];
extern s32 tl_clipout;
extern s32 TAdEnterSerialAccessGC__data_805D6C24;
extern Col_803214C4 lbl_805DF4D8;
extern const f32 lbl_805DF4F4;
extern const f32 lbl_805DF4F8;
extern const f32 lbl_805DF4FC;
extern const f32 lbl_805DF500;
extern const f32 lbl_805DF504;
void draw_serial_plates__22TAdEnterSerialAccessGCFv(void);
s32 realloc_buffer__17TWindowSubComCardFPv(int);
M2C_UNK render_status_line__15TAdSubPlyItemGCFPvi(void *, int, f32, f32, f32);
s32 free__11TOBoss4RockFUi(int);
void fn_8025DE10(s32, Pos_80321358 *);
s32 get_field20_state__22TAdEnterSerialAccessGCFPv(void *arg0);
int sprintf(char *, const char *, ...);
void strncpy(s32, s32, s32);
M2C_UNK memset(void *, int, int);
extern f32 lbl_80476568[][13];
extern u32 TAdEnterSerialAccessGC__data_805D6C20;
extern s32 TAdEnterSerialAccessGC__data_805D6C24;
extern const f32 TAdEnterSerialAccessGC__data_805DF4DC;
extern char lbl_805DF4E0[4];
extern const f32 lbl_805DF4E4;
void draw_serial_chars__22TAdEnterSerialAccessGCFi(s32 arg0);
void draw_window_frame();
s32 get_localized_text_entry(int, void *);
M2C_UNK render_status_line__15TAdSubPlyItemGCFPvi(void *, int, f32, f32, f32);
void draw_serial_chars__22TAdEnterSerialAccessGCFi(s32 arg0);
void draw_serial_plates__22TAdEnterSerialAccessGCFv(void);
extern V_803212F8 lbl_804EC9B0[];
extern const f32 TAdEnterSerialAccessGC__data_805DF4DC;
void TAdEnterSerialAccessGC__sub_803212F8(void *arg0, void *arg1);
s32 get_instance__23TAdSinglePlyChrSelectGCFv();
void sscanf(int, const char *, ...);
extern char lbl_804765D8[];
s32 TAdEnterSerialAccessGC__sub_8032182C(void);
}

extern "C" {

void TAdEnterSerialAccessGC__sub_80321F18(void* p);
void TAdEnterSerialAccessGC__sub_80321F3C(void* p);
void *__dt__22TAdEnterSerialAccessGCFv(void *arg0, s16 arg1);
void draw_serial_separators__22TAdEnterSerialAccessGCFv(void);
s32 get_field20_state__22TAdEnterSerialAccessGCFPv(void *arg0);
void set_state_3__22TAdEnterSerialAccessGCFPv(void* p);
int serial_to_hex_string__22TAdEnterSerialAccessGCFi(void);
void __dl__7TObjectFPv(void *);
void __dt__14TAdEnterBaseGCFv(void *, int);
s32 get_state__19TWindowKeyBoardSoftFPv(u32);
void queue_destruction__7TObjectFv(void *);
M2C_UNK render_status_line__15TAdSubPlyItemGCFPvi(void *, int, f32, f32, f32);

extern const f32 TAdEnterSerialAccessGC__data_805DF4DC;
extern const f32 lbl_805DF4E4;
extern const f32 lbl_805DF4E8;
extern M2C_UNK lbl_805DF4EC;
extern const f32 lbl_805DF4F0;

void render__22TAdEnterSerialAccessGCFv(void *self) {
    if (get_state_flag__9TMainTaskFv() == 1) { return;
    }
}

void TAdEnterSerialAccessGC__sub_803212F8(void *arg0, void *arg1) {
    draw_window_frame();
    render_status_line__15TAdSubPlyItemGCFPvi((void *)get_localized_text_entry(0x17, (void *)4), -1, lbl_804EC9B0[0].a, lbl_804EC9B0[0].b, TAdEnterSerialAccessGC__data_805DF4DC);
    draw_serial_plates__22TAdEnterSerialAccessGCFv();
    draw_serial_chars__22TAdEnterSerialAccessGCFi((s32)arg1);
}

void draw_serial_chars__22TAdEnterSerialAccessGCFi(s32 arg0) {
    char text[0xFF];
    char buf[8];
    Pos_80321358 pos;
    char *p;
    u32 n;
    f32 *row;
    s32 str;
    u32 i;
    s32 r;
    if (TAdEnterSerialAccessGC__data_805D6C20 != 0) {
        str = realloc_buffer__17TWindowSubComCardFPv(TAdEnterSerialAccessGC__data_805D6C20);
        memset(text, 0, 0xFF);
        strncpy((s32) text, str, 0xFF);
        free__11TOBoss4RockFUi(str);
        p = text;
        r = TAdEnterSerialAccessGC__data_805D6C24 == 2 ? 0 : 1;
        row = lbl_80476568[r];
        n = r * 2 + 10;
        for (i = 0; i < n; i++, p++) {
            memset(buf, 0, 8);
            sprintf(buf, lbl_805DF4E0, *p);
            render_status_line__15TAdSubPlyItemGCFPvi(buf, -1, row[i], lbl_805DF4E4, TAdEnterSerialAccessGC__data_805DF4DC);
        }
        pos.x = row[get_field20_state__22TAdEnterSerialAccessGCFPv((void *) TAdEnterSerialAccessGC__data_805D6C20)];
        pos.y = lbl_805DF4E4;
        fn_8025DE10(arg0, &pos);
    }
}

void draw_serial_separators__22TAdEnterSerialAccessGCFv(void) {
    render_status_line__15TAdSubPlyItemGCFPvi((void *) (&lbl_805DF4EC), (int) (-1), (f32) (lbl_805DF4E8), (f32) (lbl_805DF4E4), (f32) (TAdEnterSerialAccessGC__data_805DF4DC));
    render_status_line__15TAdSubPlyItemGCFPvi((void *) (&lbl_805DF4EC), (int) (-1), (f32) (lbl_805DF4F0), (f32) (lbl_805DF4E4), (f32) (TAdEnterSerialAccessGC__data_805DF4DC));
}

typedef char RecoveredGlobal_803216C0_lbl_8047653C_size[sizeof(RecoveredGlobal_803216C0_lbl_8047653C) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_803216C0_lbl_805430D0_size[sizeof(RecoveredGlobal_803216C0_lbl_805430D0) == 0x18 ? 1 : -1];

#pragma push
#pragma fp_contract on
void draw_serial_plates__22TAdEnterSerialAccessGCFv(void) {
    Plate_803214C4 a;
    Plate_803214C4 b;
    Rect_803214C4 pa;
    Rect_803214C4 pb;
    u32 i;
    pa.x = lbl_805DF4F4;
    pa.y = lbl_805DF4F8;
    __ct__19TAdPlyChrSelPlateGCFv(&a, tl_clipout, &pa);
    pb.x = lbl_805DF4FC;
    pb.y = lbl_805DF4F8;
    __ct__19TAdPlyChrSelPlateGCFv(&b, tl_clipout, &pb);
    {
        Vec2_803214C4 pos = lbl_80476548[0];
        Col_803214C4 c = lbl_805DF4D8;
        switch (TAdEnterSerialAccessGC__data_805D6C24) {
        case 3:
            break;
        case 2:
            TAdEnterSerialAccessGC__sub_802C4B64(&b, &lbl_80476550[0], c, 0);
            for (i = 0; i < 2; i++) {
                TAdEnterSerialAccessGC__sub_802C4B64(&a, &lbl_80476550[i + 1], c, 0);
            }
            draw_serial_separators__22TAdEnterSerialAccessGCFv();
            break;
        case 4:
            for (i = 0; i < 3; i++) {
                pos.x = lbl_805DF504 * (f32)i + lbl_805DF500;
                TAdEnterSerialAccessGC__sub_802C4B64(&a, &pos, c, 0);
            }
            draw_serial_separators__22TAdEnterSerialAccessGCFv();
            break;
        }
    }
    __dt__19TAdPlyChrSelPlateGCFv(&b, -1);
    __dt__19TAdPlyChrSelPlateGCFv(&a, -1);
}
#pragma pop

void format_dashed_serial__22TAdEnterSerialAccessGCFPvPvUiPv(u8 *dst, u8 *src, u32 count, u32 *lens) {
    u32 i;
    u32 j;
    for (i = 0; i < count; i++) {
        for (j = 0; j < lens[i]; j++) {
            *dst++ = *src++;
        }
        *dst++ = '-';
    }
    dst[-1] = 0;
}

M2C_UNK *get_formatted_serial__22TAdEnterSerialAccessGCFv(void) {
    typedef char sp8_offset[(offsetof(Stack_803216C0, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_803216C0, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_803216C0, sp10) == 0x8) ? 1 : -1];
    Stack_803216C0 stack;
    memset((void *) (&lbl_805430D0.value), (int) (0), (int) (0x18));
    stack.sp8 = M2C_FIELD(&lbl_8047653C.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_8047653C.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_8047653C.value, s32 *, 8);
    format_dashed_serial__22TAdEnterSerialAccessGCFPvPvUiPv((u8 *)((void *) (&lbl_805430D0.value)), (u8 *)((void *) (get_instance__23TAdSinglePlyChrSelectGCFv() + 0x1153C)), (u32)((int) (3)), (u32 *)((void *) (&stack.sp8)));
    return &lbl_805430D0.value;
}

typedef char RecoveredGlobal_803217B8_lbl_80476524_size[sizeof(RecoveredGlobal_803217B8_lbl_80476524) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_803217B8_TAdEnterSerialAccessGC__data_804EC9C4_size[sizeof(RecoveredGlobal_803217B8_TAdEnterSerialAccessGC__data_804EC9C4) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_803217B8_lbl_805430A4_size[sizeof(RecoveredGlobal_803217B8_lbl_805430A4) == 0x18 ? 1 : -1];

u8 *TAdEnterSerialAccessGC__sub_80321738(void) {
    memset(lbl_805430BC, 0, 0x14);
    T_80321738 t = lbl_80476530;
    format_dashed_serial__22TAdEnterSerialAccessGCFPvPvUiPv((u8 *)(lbl_805430BC), (u8 *)((void *)((u32)convert_serial_hex_to_decimal__22TAdEnterSerialAccessGCFi((int)(get_instance__23TAdSinglePlyChrSelectGCFv() + 0x1152C)))), (u32)(3), (u32 *)(&t));
    return lbl_805430BC;
}

M2C_UNK *TAdEnterSerialAccessGC__sub_803217B8(void) {
    typedef char sp8_offset[(offsetof(Stack_803217B8, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_803217B8, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_803217B8, sp10) == 0x8) ? 1 : -1];
    Stack_803217B8 stack;
    memset((void *) (&lbl_805430A4.value), (int) (0), (int) (0x18));
    stack.sp8 = M2C_FIELD(&lbl_80476524.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_80476524.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_80476524.value, s32 *, 8);
    format_dashed_serial__22TAdEnterSerialAccessGCFPvPvUiPv((u8 *)((void *) (&lbl_805430A4.value)), (u8 *)((void *) (&(*(RecoveredGlobal_803217B8_TAdEnterSerialAccessGC__data_804EC9C4 *)&TAdEnterSerialAccessGC__data_804EC9C4).value)), (u32)((int) (3)), (u32 *)((void *) (&stack.sp8)));
    return &lbl_805430A4.value;
}

typedef char RecoveredGlobal_80321874_lbl_80476518_size[sizeof(RecoveredGlobal_80321874_lbl_80476518) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_80321874_TAdEnterSerialAccessGC__data_804EC9B8_size[sizeof(RecoveredGlobal_80321874_TAdEnterSerialAccessGC__data_804EC9B8) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_80321874_lbl_80543090_size[sizeof(RecoveredGlobal_80321874_lbl_80543090) == 0x14 ? 1 : -1];

s32 TAdEnterSerialAccessGC__sub_8032182C(void) {
    s32 sp8;
    sp8 = 0;
    sscanf(get_instance__23TAdSinglePlyChrSelectGCFv() + 0x1152C, lbl_804765D8, &sp8);
    return sp8;
}

M2C_UNK *TAdEnterSerialAccessGC__sub_80321874(void) {
    typedef char sp8_offset[(offsetof(Stack_80321874, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80321874, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80321874, sp10) == 0x8) ? 1 : -1];
    Stack_80321874 stack;
    memset((void *) (&lbl_80543090.value), (int) (0), (int) (0x14));
    stack.sp8 = M2C_FIELD(&lbl_80476518.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_80476518.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_80476518.value, s32 *, 8);
    format_dashed_serial__22TAdEnterSerialAccessGCFPvPvUiPv((u8 *)((void *) (&lbl_80543090.value)), (u8 *)((void *) (&TAdEnterSerialAccessGC__data_804EC9B8.value)), (u32)((int) (3)), (u32 *)((void *) (&stack.sp8)));
    return &lbl_80543090.value;
}

typedef char RecoveredGlobal_8032B904_lbl_80477278_size[sizeof(RecoveredGlobal_8032B904_lbl_80477278) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_8032BA8C_TAdEnterPasswordGC__data_804EDA20_size[sizeof(RecoveredGlobal_8032BA8C_TAdEnterPasswordGC__data_804EDA20) == 0x84 ? 1 : -1];

void init__22TAdEnterSerialAccessGCFv(void) {
    TAdEnterSerialAccessGC__sub_8032195C(((s32)serial_to_hex_string__22TAdEnterSerialAccessGCFi()));
}

void TAdEnterSerialAccessGC__sub_8032190C(s32 arg0) {
    memset((void *) (&TAdEnterSerialAccessGC__data_804EC9C4.value), (int) (0), (int) (0xd));
    strncpy((s32) &TAdEnterSerialAccessGC__data_804EC9C4.value, arg0, 0xd);
}
typedef char RecoveredGlobal_8032BB34___vt__18TAdEnterPasswordGC_size[sizeof(RecoveredGlobal_8032BB34___vt__18TAdEnterPasswordGC) == 0x1C ? 1 : -1];

#pragma push
#pragma opt_common_subs off
typedef char RecoveredGlobal_8032195C_TAdEnterSerialAccessGC__data_804EC9B8_size[sizeof(RecoveredGlobal_8032195C_TAdEnterSerialAccessGC__data_804EC9B8) == 0xC ? 1 : -1];
void TAdEnterSerialAccessGC__sub_8032195C(s32 arg0) {
    memset((void *) (&(*(RecoveredGlobal_8032195C_TAdEnterSerialAccessGC__data_804EC9B8 *)&TAdEnterSerialAccessGC__data_804EC9B8).value), (int) (0), (int) (0xB));
    strncpy((s32)((void *) (&(*(RecoveredGlobal_8032195C_TAdEnterSerialAccessGC__data_804EC9B8 *)&TAdEnterSerialAccessGC__data_804EC9B8).value)), (s32)((void *) (arg0)), (s32)((int) (0xB)));
}
#pragma pop

typedef struct RecoveredGlobal_80321B28_TAdEnterSerialAccessGC__data_804764E8 RecoveredGlobal_80321B28_TAdEnterSerialAccessGC__data_804764E8;
typedef struct RecoveredGlobal_80321B28_TAdEnterSerialAccessGC__data_804EC9B8 RecoveredGlobal_80321B28_TAdEnterSerialAccessGC__data_804EC9B8;
typedef struct RecoveredGlobal_80321B28_TAdEnterSerialAccessGC__data_804EC9C4 RecoveredGlobal_80321B28_TAdEnterSerialAccessGC__data_804EC9C4;
typedef struct RecoveredGlobal_80321B28_lbl_8050E208 RecoveredGlobal_80321B28_lbl_8050E208;
typedef struct RecoveredGlobal_80321B28_lbl_8050E3B8 RecoveredGlobal_80321B28_lbl_8050E3B8;
typedef char RecoveredGlobal_80321B28_TAdEnterSerialAccessGC__data_804764E8_size[((sizeof(RecoveredGlobal_80321B28_TAdEnterSerialAccessGC__data_804764E8)) == 0x10) ? (1) : (-1)];
typedef char RecoveredGlobal_80321B28_TAdEnterSerialAccessGC__data_804EC9B8_size[((sizeof(RecoveredGlobal_80321B28_TAdEnterSerialAccessGC__data_804EC9B8)) == 0xC) ? (1) : (-1)];
typedef char RecoveredGlobal_80321B28_TAdEnterSerialAccessGC__data_804EC9C4_size[((sizeof(RecoveredGlobal_80321B28_TAdEnterSerialAccessGC__data_804EC9C4)) == 0x10) ? (1) : (-1)];
typedef char RecoveredGlobal_80321B28_lbl_8050E208_size[((sizeof(RecoveredGlobal_80321B28_lbl_8050E208)) == 0x1B0) ? (1) : (-1)];
typedef char RecoveredGlobal_80321B28_lbl_8050E3B8_size[((sizeof(RecoveredGlobal_80321B28_lbl_8050E3B8)) == 0x1B0) ? (1) : (-1)];

char *convert_serial_hex_to_decimal__22TAdEnterSerialAccessGCFi(int arg0) {
    u32 v = 0;
    sscanf(arg0, lbl_804765E0, &v);
    memset(lbl_80543050, 0, 0x40);
    if (v != 0) {
        sprintf(lbl_80543050, lbl_804765E8, v);
    }
    return lbl_80543050;
}

char *hex_to_decimal_string__22TAdEnterSerialAccessGCFi(int arg0) {
    s32 v = 0;
    sscanf(arg0, (const char *)&lbl_805DF508, &v);
    memset(lbl_80543010, 0, 0x40);
    sprintf(lbl_80543010, lbl_804765E0, v);
    return lbl_80543010;
}

void TAdEnterSerialAccessGC__sub_80321A90(void) {
    create_callback__22TAdEnterSerialAccessGCFPvPvPv(lbl_804764D8, lbl_804764E0, (void *)TAdEnterSerialAccessGC__sub_803212F8);
}

s32 open_message_window__22TAdEnterSerialAccessGCFPvPv(void *arg0, void *arg1) {
    s32 r = update_window_mode_from_progress__6TLobbyFiPv(lbl_804764C8, lbl_804764D0);
    send_and_handle__6TLobbyFPvii(r, get_localized_text_entry(0x17, arg1), 1);
    return r;
}

void TAdEnterSerialAccessGC__sub_80321B28(u8 *arg0, int arg1) {
  int temp_r30;
  int temp_r3_8;
  unsigned int temp_r3;
  unsigned int temp_r3_10;
  unsigned int temp_r3_11;
  unsigned int temp_r3_12;
  unsigned int temp_r3_13;
  unsigned int temp_r3_2;
  unsigned int temp_r3_3;
  unsigned int temp_r3_4;
  unsigned int temp_r3_5;
  unsigned int temp_r3_6;
  unsigned int temp_r3_7;
  unsigned int temp_r3_9;
  temp_r30 = realloc_buffer__17TWindowSubComCardFPv((int) TAdEnterSerialAccessGC__data_805D6C20);
  if (((((int) (*((int *) (((s8 *) arg0) + 0x4C)))) == 0) && (TWindowShortListCtrl__check_controller_button((void *) (((u8 *) (&lbl_8050E3B8.value)) + 0x20), (int) 2) != 0)) || ((((int) (*((int *) (((s8 *) arg0) + 0x4C)))) == 0) && (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) (((u8 *) (&lbl_8050E208.value)) + 0x160), (int) 2) != 0)))
  {
    switch ((int) TAdEnterSerialAccessGC__data_805D6C24)
    {
      case 3:
        break;
      case 2:
        temp_r3 = *((unsigned int *) (((s8 *) arg0) + 0x58));
        if (temp_r3 != 0U)
      {
        TWindow__close((int) temp_r3);
        *((unsigned int *) (((s8 *) arg0) + 0x58)) = 0U;
      }
        temp_r3_2 = *((unsigned int *) (((s8 *) arg0) + 0x5C));
        if (temp_r3_2 != 0U)
      {
        TWindow__close((int) temp_r3_2);
        *((unsigned int *) (((s8 *) arg0) + 0x5C)) = 0U;
      }
        if (((unsigned int) TAdEnterSerialAccessGC__data_805D6C20) != 0U)
      {
        queue_destruction__7TObjectFv((void *)((int) TAdEnterSerialAccessGC__data_805D6C20));
        TAdEnterSerialAccessGC__data_805D6C20 = 0U;
      }
        memset((void *) (&(*(RecoveredGlobal_80321B28_TAdEnterSerialAccessGC__data_804EC9B8 *)&TAdEnterSerialAccessGC__data_804EC9B8).value), (int) 0, (int) 0xB);
        *((int *) (((s8 *) arg0) + 0x44)) = 6;
        TAdEnterSerialAccessGC__data_805D6C24 = 5;
        break;
      case 4:
        temp_r3_3 = *((unsigned int *) (((s8 *) arg0) + 0x50));
        if (temp_r3_3 != 0U)
      {
        queue_destruction__7TObjectFv((void *)((int) temp_r3_3));
        *((unsigned int *) (((s8 *) arg0) + 0x50)) = 0U;
      }
        temp_r3_4 = *((unsigned int *) (((s8 *) arg0) + 0x58));
        if (temp_r3_4 != 0U)
      {
        TWindow__close((int) temp_r3_4);
        *((unsigned int *) (((s8 *) arg0) + 0x58)) = 0U;
      }
        temp_r3_5 = *((unsigned int *) (((s8 *) arg0) + 0x5C));
        if (temp_r3_5 != 0U)
      {
        TWindow__close((int) temp_r3_5);
        *((unsigned int *) (((s8 *) arg0) + 0x5C)) = 0U;
      }
        if (((unsigned int) TAdEnterSerialAccessGC__data_805D6C20) != 0U)
      {
        queue_destruction__7TObjectFv((void *)((int) TAdEnterSerialAccessGC__data_805D6C20));
        TAdEnterSerialAccessGC__data_805D6C20 = 0U;
      }
        reset_input_state__22TAdEnterSerialAccessGCFPv((int) (*((unsigned int *) (((s8 *) arg0) + 0x54))));
        memset((void *) (&(*(RecoveredGlobal_80321B28_TAdEnterSerialAccessGC__data_804EC9C4 *)&TAdEnterSerialAccessGC__data_804EC9C4).value), (int) 0, (int) 0xD);
        *((int *) (((s8 *) arg0) + 0x44)) = 1;
        TAdEnterSerialAccessGC__data_805D6C24 = 5;
        break;
    }
    free__11TOBoss4RockFUi((int) temp_r30);
    return;
  }
  *((int *) (((s8 *) arg0) + 0x64)) = (int) (*((int *) (((s8 *) arg0) + 0x60)));
  if (((unsigned int) TAdEnterSerialAccessGC__data_805D6C20) != 0U)
  {
    if (forward_input__22TAdEnterSerialAccessGCFPv((void *) arg0, (void *) arg1, (int) temp_r30) != 0)
    {
      *((int *) (((s8 *) arg0) + 0x60)) = 1;
      temp_r3_6 = *((unsigned int *) (((s8 *) arg0) + 0x54));
      if (temp_r3_6 != 0U)
      {
        set_state_3__22TAdEnterSerialAccessGCFPv((void*)((int) temp_r3_6));
      }
    }
    else
    {
      *((int *) (((s8 *) arg0) + 0x60)) = 0;
      temp_r3_7 = *((unsigned int *) (((s8 *) arg0) + 0x54));
      if (temp_r3_7 != 0U)
      {
        set_active__22TAdEnterSerialAccessGCFPv((int) temp_r3_7);
      }
    }
    if ((update_keyboard__17TWindowSubComCardFPv((int) TAdEnterSerialAccessGC__data_805D6C20) != 0) && (forward_input__22TAdEnterSerialAccessGCFPv((void *) arg0, (void *) arg1, (int) temp_r30) == 0))
    {
      free_menu_object((int) TAdEnterSerialAccessGC__data_805D6C20);
      play_sound_effect((int) 0x53F06, (int) 0, (int) 0, (int) 0);
    }
  }
  temp_r3_8 = *((int *) (((s8 *) arg0) + 0x60));
  if (((int) (*((int *) (((s8 *) arg0) + 0x64)))) != (*((int *) (((s8 *) arg0) + 0x60))))
  {
    if ((*((int *) (((s8 *) arg0) + 0x60))) != 0)
    {
      temp_r3_9 = *((unsigned int *) (((s8 *) arg0) + 0x54));
      if (temp_r3_9 != 0U)
      {
        reset_input_state__22TAdEnterSerialAccessGCFPv((int) temp_r3_9);
        add_item_rect__12TLevelSelectFPvPv((int) (*((unsigned int *) (((s8 *) arg0) + 0x54))), (void *) (((u8 *) (&TAdEnterSerialAccessGC__data_804764E8.value)) + 8));
      }
    }
    else
    {
      temp_r3_10 = *((unsigned int *) (((s8 *) arg0) + 0x54));
      if (temp_r3_10 != 0U)
      {
        reset_input_state__22TAdEnterSerialAccessGCFPv((int) temp_r3_10);
        add_item_rect__12TLevelSelectFPvPv((int) (*((unsigned int *) (((s8 *) arg0) + 0x54))), (void *) (&TAdEnterSerialAccessGC__data_804764E8.value));
      }
    }
  }
  if ((get_selected_slot__23TAdSinglePlyChrSelectGCFPv((int) (*((unsigned int *) (((s8 *) arg0) + 0x54)))) == 1) && (forward_input__22TAdEnterSerialAccessGCFPv((void *) arg0, (void *) arg1, (int) temp_r30) != 0))
  {
    temp_r3_11 = *((unsigned int *) (((s8 *) arg0) + 0x58));
    if (temp_r3_11 != 0U)
    {
      TWindow__close((int) temp_r3_11);
      *((unsigned int *) (((s8 *) arg0) + 0x58)) = 0U;
    }
    temp_r3_12 = *((unsigned int *) (((s8 *) arg0) + 0x5C));
    if (temp_r3_12 != 0U)
    {
      TWindow__close((int) temp_r3_12);
      *((unsigned int *) (((s8 *) arg0) + 0x5C)) = 0U;
    }
    switch (arg1)
    {
      case 0:
        temp_r3_13 = *((unsigned int *) (((s8 *) arg0) + 0x50));
        if (temp_r3_13 != 0U)
      {
        queue_destruction__7TObjectFv((void *)((int) temp_r3_13));
        *((unsigned int *) (((s8 *) arg0) + 0x50)) = 0U;
      }
        if (((unsigned int) TAdEnterSerialAccessGC__data_805D6C20) != 0U)
      {
        queue_destruction__7TObjectFv((void *)((int) TAdEnterSerialAccessGC__data_805D6C20));
        TAdEnterSerialAccessGC__data_805D6C20 = 0U;
      }
        strncpy((s32)((void *) (&(*(RecoveredGlobal_80321B28_TAdEnterSerialAccessGC__data_804EC9B8 *)&TAdEnterSerialAccessGC__data_804EC9B8).value)), (s32)((int) temp_r30), (s32)((int) 0xB));
        TAdEnterSerialAccessGC__sub_80322418((s32)((int) get_field_118__22TAdEnterSerialAccessGCFv()), (s32)((int) 0));
        *((int *) (((s8 *) arg0) + 0x44)) = 3;
        TAdEnterSerialAccessGC__data_805D6C24 = 5;
        break;
      case 1:
        if (((unsigned int) TAdEnterSerialAccessGC__data_805D6C20) != 0U)
      {
        queue_destruction__7TObjectFv((void *)((int) TAdEnterSerialAccessGC__data_805D6C20));
        TAdEnterSerialAccessGC__data_805D6C20 = 0U;
      }
        strncpy((s32)((void *) (&(*(RecoveredGlobal_80321B28_TAdEnterSerialAccessGC__data_804EC9C4 *)&TAdEnterSerialAccessGC__data_804EC9C4).value)), (s32)((int) temp_r30), (s32)((int) 0xD));
        TAdEnterSerialAccessGC__sub_80322418((s32)((int) get_field_118__22TAdEnterSerialAccessGCFv()), (s32)((int) 1));
        *((int *) (((s8 *) arg0) + 0x44)) = 7;
        TAdEnterSerialAccessGC__data_805D6C24 = 5;
        break;
    }
  }
  *((int *) (((s8 *) arg0) + 0x4C)) = strlen((int) temp_r30);
  free__11TOBoss4RockFUi((int) temp_r30);
}

void TAdEnterSerialAccessGC__sub_80321F18(void* p) { TAdEnterSerialAccessGC__sub_80321B28((u8 *)(p), (int)(1)); }
void TAdEnterSerialAccessGC__sub_80321F3C(void* p) { TAdEnterSerialAccessGC__sub_80321B28((u8 *)(p), (int)(0)); }

extern M2C_UNK __vt__22TAdEnterSerialAccessGC[];

void *__dt__22TAdEnterSerialAccessGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TAdEnterSerialAccessGC;
        if (M2C_FIELD(arg0, void **, 0x58) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x58)); M2C_FIELD(arg0, M2C_UNK *, 0x58) = 0; }
        if (M2C_FIELD(arg0, void **, 0x5C) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x5C)); M2C_FIELD(arg0, M2C_UNK *, 0x5C) = 0; }
        if (M2C_FIELD(arg0, void **, 0x54) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x54)); M2C_FIELD(arg0, M2C_UNK *, 0x54) = 0; }
        __dt__14TAdEnterBaseGCFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TAdEnterSerialAccessGC__ct(u8 *arg0) {
    s8 flag[0x10];
    u8 sp8[0x10];
    void *p;
    TAdEnterBaseGC__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TAdEnterSerialAccessGC;
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D4158;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    TAdEnterSerialAccessGC__data_805D6C24 = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    TAdEnterSerialAccessGC__data_805D6C20 = 0;
    if (*(s8 *) (get_instance__23TAdSinglePlyChrSelectGCFv() + 0x1152C) != 0) {
        ((void (*)(s32)) init__22TAdEnterSerialAccessGCFv)(get_instance__23TAdSinglePlyChrSelectGCFv() + 0x1152C);
        TAdEnterSerialAccessGC__sub_8032190C(get_instance__23TAdSinglePlyChrSelectGCFv() + 0x1153C);
        init_state__22TAdEnterSerialAccessGCFv();
        queue_destruction__7TObjectFv(arg0);
        return arg0;
    }
    flag[0] = 0;
    if (load_and_verify_character_save__23TAdSinglePlyChrSelectGCFPvPv(flag, sp8) != 0 && flag[0] != 0) {
        ((void (*)(s8 *)) init__22TAdEnterSerialAccessGCFv)(flag);
        TAdEnterSerialAccessGC__sub_8032190C((s32) sp8);
        TAdEnterSerialAccessGC__sub_80322418(get_field_118__22TAdEnterSerialAccessGCFv(), 1);
        TAdEnterSerialAccessGC__sub_80322418(get_field_118__22TAdEnterSerialAccessGCFv(), 0);
    }
    if ((p = __nw__7TObjectFUl(0x24)) != 0) {
        __ct__9TAdBackGCFv(p, arg0);
    }
    if ((p = __nw__7TObjectFUl(0x28)) != 0) {
        __ct__12TAdBackTxtGCFv(p, arg0);
    }
    p = __nw__7TObjectFUl(0x708);
    if (p != 0) {
        p = __ct__14TAdSelectCurGCFv(p, tl_clipout, &TAdEnterSerialAccessGC__data_804764E8, lbl_804764F8);
    }
    M2C_FIELD(arg0, void **, 0x54) = p;
    return arg0;
}

s32 get_field20_state__22TAdEnterSerialAccessGCFPv(void *arg0) {
    u32 temp_r3 = M2C_FIELD(arg0, u32 *, 0x20);
    if (temp_r3 == 0U) {
        return 0;
    }
    return get_state__19TWindowKeyBoardSoftFPv(temp_r3);
}

typedef char RecoveredGlobal_80322418_lbl_804ED9F8_size[sizeof(RecoveredGlobal_80322418_lbl_804ED9F8) == 0x10 ? 1 : -1];
void TAdEnterSerialAccessGC__sub_80322418(s32 arg0, s32 arg1) {
    M2C_FIELD(((u8 *)(&lbl_804ED9F8.value) + (arg1 * 4)), s32 *, 0) = arg0;
}

void set_state_3__22TAdEnterSerialAccessGCFPv(void* p) { *(s32*)((char*)p + 0x700) = 3; }

}
