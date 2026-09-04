#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TWindowKeyBoardSoft__sub_8025B85C(void);
void TWindowKeyBoardSoft__sub_8025B928(void);
int TWindowKeyBoardSoft__sub_8025B92C(void);
int TWindowKeyBoardSoft__sub_8025BA28(void);
int TWindowKeyBoardSoft__sub_8025BA44(void);
int TWindowKeyBoardSoft__sub_8025C24C(void);
int TWindowKeyBoardSoft__sub_8025CA70(void);
int TWindowKeyBoardSoft__vt0(void);
int TWindowKeyBoardSoft__vt1(void);
int TWindowKeyBoardSoft__vt10(void);
int TWindowKeyBoardSoft__vt11(void);
int TWindowKeyBoardSoft__vt12(void);
int TWindowKeyBoardSoft__vt13(void);
int TWindowKeyBoardSoft__vt14(void);
int TWindowKeyBoardSoft__vt15(void);
int TWindowKeyBoardSoft__vt16(void);
int TWindowKeyBoardSoft__vt17(void);
int TWindowKeyBoardSoft__vt18(void);
int TWindowKeyBoardSoft__vt19(void);
int TWindowKeyBoardSoft__vt2(void);
int TWindowKeyBoardSoft__vt20(void);
int TWindowKeyBoardSoft__vt21(void);
int TWindowKeyBoardSoft__vt3(void);
int TWindowKeyBoardSoft__vt4(void);
int TWindowKeyBoardSoft__vt5(void);
int TWindowKeyBoardSoft__vt6(void);
int TWindowKeyBoardSoft__vt7(void);
int TWindowKeyBoardSoft__vt8(void);
int TWindowKeyBoardSoft__vt9(void);
int get_field_6c__19TWindowKeyBoardSoftFPv(void* p);
s32 get_state__19TWindowKeyBoardSoftFPv(void* p);
void init__19TWindowKeyBoardSoftFPv(u8 *arg0);
int is_key_state_2__19TWindowKeyBoardSoftFPv(void* p);
void update_input_state2__19TWindowKeyBoardSoftFPv(void *arg0);
void update_input_state__19TWindowKeyBoardSoftFPv(void *arg0);
int TWindowChat__sub_8025CB70(void* a0 = 0);
int TWindowKeyBoardSoft__sub_8008081C(void*);
s32 convert_input_text__19TWindowKeyBoardSoftFPv();
void flush_if_flagged__11TWindowChatFPv(void* p);
int get_flag__11TWindowChatFPv(void* a0 = 0);
int is_flag_4_set__17TWindowSubComCardFPv(void* p);
M2C_UNK reset_state__19TWindowKeyBoardSoftFPv(void *);
s32 select_next__19TWindowKeyBoardSoftFPv();
s32 update__19TWindowKeyBoardSoftFPv();

int TWindowKeyBoardSoft__sub_8025B85C(void) { return 0; }

s32 get_state__19TWindowKeyBoardSoftFPv(void* p) { return *(s32*)((char*)p + 0x70); }

int TWindowKeyBoardSoft__vt2(void) { return 0; }

void TWindowKeyBoardSoft__sub_8025B928(void) {  }

int TWindowKeyBoardSoft__sub_8025B92C(void) { return 0; }

void update_input_state__19TWindowKeyBoardSoftFPv(void *arg0) {
    u16 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u16 *, 0x60);
    if (temp_r4 & 4) {
        if (M2C_FIELD(arg0, s32 *, 0xB4) & 0x20) {
            update__19TWindowKeyBoardSoftFPv();
            return;
        }
        select_next__19TWindowKeyBoardSoftFPv();
        return;
    }
    if (temp_r4 & 2) {
        convert_input_text__19TWindowKeyBoardSoftFPv();
    }
}

int TWindowKeyBoardSoft__sub_8025BA28(void) { return 0; }
int TWindowKeyBoardSoft__sub_8025BA44(void) { return 0; }
int TWindowKeyBoardSoft__vt14(void) { return 0; }
int TWindowKeyBoardSoft__vt13(void) { return 0; }
int TWindowKeyBoardSoft__vt12(void) { return 0; }
int TWindowKeyBoardSoft__vt11(void) { return 0; }
int TWindowKeyBoardSoft__vt10(void) { return 0; }
int TWindowKeyBoardSoft__vt9(void) { return 0; }
int TWindowKeyBoardSoft__vt8(void) { return 0; }
int TWindowKeyBoardSoft__vt7(void) { return 0; }
int TWindowKeyBoardSoft__vt6(void) { return 0; }
int TWindowKeyBoardSoft__vt5(void) { return 0; }
int TWindowKeyBoardSoft__vt4(void) { return 0; }
int TWindowKeyBoardSoft__vt3(void) { return 0; }
int TWindowKeyBoardSoft__vt17(void) { return 0; }
int TWindowKeyBoardSoft__vt18(void) { return 0; }
int TWindowKeyBoardSoft__vt16(void) { return 0; }
int TWindowKeyBoardSoft__vt15(void) { return 0; }
int TWindowKeyBoardSoft__vt20(void) { return 0; }
int TWindowKeyBoardSoft__sub_8025C24C(void) { return 0; }
int TWindowKeyBoardSoft__vt1(void) { return 0; }
int TWindowKeyBoardSoft__vt21(void) { return 0; }

void update_input_state2__19TWindowKeyBoardSoftFPv(void *arg0) {
    u16 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u16 *, 0x60);
    if (temp_r4 & 4) {
        if (M2C_FIELD(arg0, s32 *, 0xB4) & 0x20) {
            update__19TWindowKeyBoardSoftFPv();
            return;
        }
        select_next__19TWindowKeyBoardSoftFPv();
        return;
    }
    if (temp_r4 & 2) {
        convert_input_text__19TWindowKeyBoardSoftFPv();
    }
}

int TWindowKeyBoardSoft__vt19(void) { return 0; }
int TWindowKeyBoardSoft__vt0(void) { return 0; }

int get_field_6c__19TWindowKeyBoardSoftFPv(void* p) { return TWindowKeyBoardSoft__sub_8008081C((char*)p + 0x6c); }

void init__19TWindowKeyBoardSoftFPv(u8 *arg0) {
    reset_state__19TWindowKeyBoardSoftFPv(arg0 + 0x84);
    M2C_FIELD(arg0, s32 *, 0x68) = (s32) (arg0 + 0x6C);
    M2C_FIELD(arg0, u16 *, 0x60) = (u16) (M2C_FIELD(arg0, u16 *, 0x60) & ~0x86);
}

int TWindowKeyBoardSoft__sub_8025CA70(void) { return 0; }

int is_key_state_2__19TWindowKeyBoardSoftFPv(void* p) { return (*(u16*)((char*)p + 0x60) >> 2) & 0x1; }

}
