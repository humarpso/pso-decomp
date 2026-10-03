#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK handle_input__11TWindowChatFPv(void *);
M2C_UNK TWindowChat__sub_8024775C(void *);
int is_visible__11TWindowChatFPv(void* p);
int is_mode_bit4__11TWindowChatFPv(void* p);
int is_open__11TWindowChatFPv(void* p);
s32 TWindowChat__sub_8025CB10(int);
void run_task__11TWindowChatFv(u8 *arg0);
}

extern "C" {

void *TWindowChat__ct(void *arg0, void *arg1, void *arg2);
void TWindowChat__sub_80247D2C(void* p);
void *__dt__11TWindowChatFv(void *arg0, s16 arg1);
int get_flag__11TWindowChatFPv(void* p);
u8 get_input_mode__11TWindowChatFPv(void* p);
s32 get_player_by_client_id(s32);
void TWindowChat__sub_8024792C(void *);
int TWindowChat__sub_80247DAC(void* p);
M2C_UNK TWindowChat__sub_8024AD30(s32);
void *TWindowKeyBoardBase__ct(void *);
void *TWindowKeyBoardHard__ct(void *, void *);
int get_selected_menu_value(void*);
void init_keyboard_text_field(void *, int, int);
M2C_UNK TWindow__close(void *);
void __ct__7TObjectFP7TObject(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
void *__nw__7TObjectFUl(int);
void fn_80247ED8(void* p);
int forward_card_at_1c__11TWindowChatFPv(void* p);
int get_status_flag__17TWindowSubComCardFPv(void*);
int get_subcard_field1c__11TWindowChatFPv(void* p);
M2C_UNK init_parts__10TObjPlayerFPv(s32);
int is_mode_bit4__11TWindowChatFPv(void* p);
s32 is_mode_bit6__11TWindowChatFPv(void *);
int is_open__11TWindowChatFPv(void* p);
int is_visible__11TWindowChatFPv(void* p);
int is_visible__17TWindowSubComCardFPv(void*);
M2C_UNK queue_destruction__7TObjectFv(void *);
void render__11TWindowChatFv(void);
void set_active_flag__11TWindowChatFPv(void* p);
void set_input_active__11TWindowChatFPv(void* p);

extern M2C_UNK __vt__11TWindowChat[];
extern s32 lbl_805D53A0;

void run_task__11TWindowChatFv(u8 *arg0) {
    if ((is_open__11TWindowChatFPv((void*)arg0) == 0) && (is_mode_bit4__11TWindowChatFPv((void*)((void *) (arg0))) == 0) && (is_visible__11TWindowChatFPv((void*)((void *) (arg0))) == 0)) {
        TWindowChat__sub_8024775C((void *) (arg0));
        handle_input__11TWindowChatFPv((void *) (arg0));
        if (TWindowChat__sub_8025CB10((int) (M2C_FIELD(arg0, s32 *, 0x20))) != 0) {
            M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E) | 4);
            return;
        }
        M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E) & 0xFFFFFFFB);
    }
}

void *__dt__11TWindowChatFv(void *arg0, s16 arg1) {
    s32 temp_r3;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TWindowChat;
        temp_r3 = get_player_by_client_id(lbl_805D53A0);
        if (temp_r3 != 0) {
            if (!(M2C_FIELD(arg0, u16 *, 0x1E) & 2)) {
                if (is_mode_bit6__11TWindowChatFPv((void *)(arg0)) != 0) {
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
    init_keyboard_text_field(M2C_FIELD(arg0, void **, 0x20), 200, 2);
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

void TWindowChat__sub_80247D2C(void* p) { *(u16*)((char*)p + 0x62) |= 0x4; }
u8 get_input_mode__11TWindowChatFPv(void* p) { return *(u8*)((char*)p + 0x65); }
int get_flag__11TWindowChatFPv(void* p) { return (*(u16*)((char*)p + 0x60) >> 6) & 0x1; }

}
