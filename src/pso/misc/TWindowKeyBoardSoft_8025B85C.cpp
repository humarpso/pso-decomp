#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TWindowKeyBoardSoft__sub_8025BA44(u8 *arg0);
s32 TWindowKeyBoardSoft__sub_80076E00(int);
void TWindowKeyBoardSoft__vt14(u8 *arg0);
s32 TWindowKeyBoardSoft__sub_80076E00(int);
void TWindowKeyBoardSoft__vt13(u8 *arg0);
s32 TWindowKeyBoardSoft__sub_80076E00(int);
void TWindowKeyBoardSoft__vt12(u8 *arg0);
s32 TWindowKeyBoardSoft__sub_80076E00(int);
void TWindowKeyBoardSoft__vt11(u8 *arg0);
s32 TWindowKeyBoardSoft__sub_80076E00(int);
void TWindowKeyBoardSoft__vt10(u8 *arg0);
s32 TWindowKeyBoardSoft__sub_80076E00(int);
void TWindowKeyBoardSoft__vt7(u8 *arg0);
s32 TWindowKeyBoardSoft__sub_80076E00(int);
void TWindowKeyBoardSoft__vt6(u8 *arg0);
M2C_UNK process_input__19TWindowKeyBoardSoftFPv();
s32 update__19TWindowKeyBoardSoftFPv();
void TWindowKeyBoardSoft__vt17(u8 *arg0);
M2C_UNK TWindowKeyBoardSoft__sub_8025D664();
s32 select_next__19TWindowKeyBoardSoftFPv();
void TWindowKeyBoardSoft__vt18(u8 *arg0);
M2C_UNK delete_char__19TWindowKeyBoardSoftFPv(void *);
void init__19TWindowKeyBoardSoftFPv(u8 *arg0);
void TWindowKeyBoardSoft__vt20(u8 *arg0);
M2C_UNK TWindowKeyBoardSoft__sub_800808FC(int, int);
s32 select_next__19TWindowKeyBoardSoftFPv();
s32 update__19TWindowKeyBoardSoftFPv();
s32 convert_input_text__19TWindowKeyBoardSoftFPv();
void TWindowKeyBoardSoft__vt19(u8 *arg0);
s32 TWindowKeyBoardSoft__sub_800809C0(void *);
M2C_UNK TWindowKeyBoardSoft__sub_8025C804();
void TWindowKeyBoardSoft__vt0(u8 *arg0);
M2C_UNK reset_state__19TWindowKeyBoardSoftFPv(void *);
void init__19TWindowKeyBoardSoftFPv(u8 *arg0);
void TWindowKeyBoardSoft__vt21(u8 *arg0);
M2C_UNK reset_state__19TWindowKeyBoardSoftFPv(void *);
void init__19TWindowKeyBoardSoftFPv(u8 *arg0);
void TWindowKeyBoardSoft__vt2(u8 *arg0);
void TWindowKeyBoardSoft__sub_8025BA28(u8 *arg0);
M2C_UNK TWindowKeyBoardSoft__sub_8025D664();
M2C_UNK TWindowKeyBoardSoft__sub_8025D8C8();
void TWindowKeyBoardSoft__vt15(u8 *arg0);
}

extern "C" {

int TWindowKeyBoardSoft__sub_8025B85C(void);
void TWindowKeyBoardSoft__sub_8025B928(void);
int TWindowKeyBoardSoft__sub_8025B92C(void);
int TWindowKeyBoardSoft__sub_8025C24C(void);
int TWindowKeyBoardSoft__sub_8025CA70(void);
int TWindowKeyBoardSoft__vt1(void);
int TWindowKeyBoardSoft__vt16(void);
int TWindowKeyBoardSoft__vt3(void);
int TWindowKeyBoardSoft__vt4(void);
int TWindowKeyBoardSoft__vt5(void);
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

void TWindowKeyBoardSoft__vt2(u8 *arg0) {
    if (M2C_FIELD(arg0, u16 *, 0x60) & 2) {
        init__19TWindowKeyBoardSoftFPv((u8 *)arg0);
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 0U) {
        reset_state__19TWindowKeyBoardSoftFPv((void *) (arg0 + 0x6C));
    }
    M2C_FIELD(arg0, u16 *, 0x60) = (u16) (M2C_FIELD(arg0, u16 *, 0x60) | 0x20);
}

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

void TWindowKeyBoardSoft__sub_8025BA28(u8 *arg0) {
    u8 *temp_r3;
    if (!(M2C_FIELD(arg0, u16 *, 0x60) & 4)) {
        temp_r3 = M2C_FIELD(arg0, u8 **, 0x68);
        M2C_FIELD(temp_r3, s32 *, 4) = (s32) M2C_FIELD(temp_r3, s32 *, 0x10);
    }
}

void TWindowKeyBoardSoft__sub_8025BA44(u8 *arg0) {
    if (!(M2C_FIELD(arg0, u16 *, 0x60) & 4)) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x68), s32 *, 4) = 0;
    }
}

void TWindowKeyBoardSoft__vt14(u8 *arg0) {
    if (!(M2C_FIELD(arg0, u16 *, 0x62) & 8) && !(M2C_FIELD(arg0, s32 *, 0xB4) & 0x20) && !(M2C_FIELD(arg0, u16 *, 0x60) & 2) && (TWindowKeyBoardSoft__sub_80076E00((int) (0x13)) != 0)) {
        M2C_FIELD(arg0, s8 *, 0x65) = 0x13;
        M2C_FIELD(arg0, u16 *, 0x60) = (u16) (M2C_FIELD(arg0, u16 *, 0x60) | 0x41);
    }
}

void TWindowKeyBoardSoft__vt13(u8 *arg0) {
    if (!(M2C_FIELD(arg0, u16 *, 0x62) & 8) && !(M2C_FIELD(arg0, s32 *, 0xB4) & 0x20) && !(M2C_FIELD(arg0, u16 *, 0x60) & 2) && (TWindowKeyBoardSoft__sub_80076E00((int) (0x12)) != 0)) {
        M2C_FIELD(arg0, s8 *, 0x65) = 0x12;
        M2C_FIELD(arg0, u16 *, 0x60) = (u16) (M2C_FIELD(arg0, u16 *, 0x60) | 0x41);
    }
}

void TWindowKeyBoardSoft__vt12(u8 *arg0) {
    if (!(M2C_FIELD(arg0, u16 *, 0x62) & 8) && !(M2C_FIELD(arg0, s32 *, 0xB4) & 0x20) && !(M2C_FIELD(arg0, u16 *, 0x60) & 2) && (TWindowKeyBoardSoft__sub_80076E00((int) (0x11)) != 0)) {
        M2C_FIELD(arg0, s8 *, 0x65) = 0x11;
        M2C_FIELD(arg0, u16 *, 0x60) = (u16) (M2C_FIELD(arg0, u16 *, 0x60) | 0x41);
    }
}

void TWindowKeyBoardSoft__vt11(u8 *arg0) {
    if (!(M2C_FIELD(arg0, u16 *, 0x62) & 8) && !(M2C_FIELD(arg0, s32 *, 0xB4) & 0x20) && !(M2C_FIELD(arg0, u16 *, 0x60) & 2) && (TWindowKeyBoardSoft__sub_80076E00((int) (0x10)) != 0)) {
        M2C_FIELD(arg0, s8 *, 0x65) = 0x10;
        M2C_FIELD(arg0, u16 *, 0x60) = (u16) (M2C_FIELD(arg0, u16 *, 0x60) | 0x41);
    }
}

void TWindowKeyBoardSoft__vt10(u8 *arg0) {
    if (!(M2C_FIELD(arg0, u16 *, 0x62) & 8) && !(M2C_FIELD(arg0, s32 *, 0xB4) & 0x20) && !(M2C_FIELD(arg0, u16 *, 0x60) & 2) && (TWindowKeyBoardSoft__sub_80076E00((int) (0xF)) != 0)) {
        M2C_FIELD(arg0, s8 *, 0x65) = 0xF;
        M2C_FIELD(arg0, u16 *, 0x60) = (u16) (M2C_FIELD(arg0, u16 *, 0x60) | 0x41);
    }
}

int TWindowKeyBoardSoft__vt9(void) { return 0; }
int TWindowKeyBoardSoft__vt8(void) { return 0; }

void TWindowKeyBoardSoft__vt7(u8 *arg0) {
    if (!(M2C_FIELD(arg0, u16 *, 0x62) & 8) && !(M2C_FIELD(arg0, s32 *, 0xB4) & 0x20) && !(M2C_FIELD(arg0, u16 *, 0x60) & 2) && (TWindowKeyBoardSoft__sub_80076E00((int) (0xC)) != 0)) {
        M2C_FIELD(arg0, s8 *, 0x65) = 0xC;
        M2C_FIELD(arg0, u16 *, 0x60) = (u16) (M2C_FIELD(arg0, u16 *, 0x60) | 0x41);
    }
}

void TWindowKeyBoardSoft__vt6(u8 *arg0) {
    if (!(M2C_FIELD(arg0, u16 *, 0x62) & 8) && !(M2C_FIELD(arg0, s32 *, 0xB4) & 0x20) && !(M2C_FIELD(arg0, u16 *, 0x60) & 2) && (TWindowKeyBoardSoft__sub_80076E00((int) (0xB)) != 0)) {
        M2C_FIELD(arg0, s8 *, 0x65) = 0xB;
        M2C_FIELD(arg0, u16 *, 0x60) = (u16) (M2C_FIELD(arg0, u16 *, 0x60) | 0x41);
    }
}

int TWindowKeyBoardSoft__vt5(void) { return 0; }
int TWindowKeyBoardSoft__vt4(void) { return 0; }
int TWindowKeyBoardSoft__vt3(void) { return 0; }

void TWindowKeyBoardSoft__vt17(u8 *arg0) {
    if (M2C_FIELD(arg0, u16 *, 0x60) & 4) {
        if (M2C_FIELD(arg0, u16 *, 0x62) & 1) {
            update__19TWindowKeyBoardSoftFPv();
            return;
        }
        process_input__19TWindowKeyBoardSoftFPv();
    }
}

void TWindowKeyBoardSoft__vt18(u8 *arg0) {
    if (M2C_FIELD(arg0, u16 *, 0x60) & 4) {
        if (M2C_FIELD(arg0, u16 *, 0x62) & 1) {
            select_next__19TWindowKeyBoardSoftFPv();
            return;
        }
        TWindowKeyBoardSoft__sub_8025D664();
    }
}

int TWindowKeyBoardSoft__vt16(void) { return 0; }

void TWindowKeyBoardSoft__vt15(u8 *arg0) {
    u32 temp_r3;
    u8 *temp_r4;
    if (M2C_FIELD(arg0, u16 *, 0x60) & 4) {
        if ((M2C_FIELD(arg0, u16 *, 0x62) & 1) && !(M2C_FIELD(arg0, s32 *, 0xB4) & 0x20)) {
            TWindowKeyBoardSoft__sub_8025D664();
            return;
        }
        TWindowKeyBoardSoft__sub_8025D8C8();
        return;
    }
    temp_r4 = M2C_FIELD(arg0, u8 **, 0x68);
    temp_r3 = M2C_FIELD(temp_r4, u32 *, 4);
    if (temp_r3 < (u32) M2C_FIELD(temp_r4, u32 *, 0x10)) {
        M2C_FIELD(temp_r4, u32 *, 4) = (u32) (temp_r3 + 1);
    }
}

void TWindowKeyBoardSoft__vt20(u8 *arg0) {
    u16 temp_r3;
    temp_r3 = M2C_FIELD(arg0, u16 *, 0x60);
    if (temp_r3 & 4) {
        M2C_FIELD(arg0, u16 *, 0x60) = (u16) (temp_r3 & 0xFFFFFFFB);
        return;
    }
    delete_char__19TWindowKeyBoardSoftFPv((void *) (M2C_FIELD(arg0, void **, 0x68)));
    if ((M2C_FIELD(arg0, u16 *, 0x60) & 2) && ((u32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x68), u32 *, 0x10) == 0U)) {
        init__19TWindowKeyBoardSoftFPv((u8 *)((void *) (arg0)));
    }
}

int TWindowKeyBoardSoft__sub_8025C24C(void) { return 0; }
int TWindowKeyBoardSoft__vt1(void) { return 0; }

void TWindowKeyBoardSoft__vt21(u8 *arg0) {
    u16 temp_r4;
    temp_r4 = M2C_FIELD(arg0, u16 *, 0x60);
    if (temp_r4 & 4) {
        M2C_FIELD(arg0, u16 *, 0x60) = (u16) (temp_r4 & 0xFFFFFFFB);
        return;
    }
    if (temp_r4 & 2) {
        init__19TWindowKeyBoardSoftFPv((u8 *)arg0);
        return;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 0U) {
        reset_state__19TWindowKeyBoardSoftFPv((void *) (arg0 + 0x6C));
        return;
    }
    M2C_FIELD(arg0, u16 *, 0x60) = (u16) (temp_r4 | 0x20);
}

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

void TWindowKeyBoardSoft__vt19(u8 *arg0) {
    s32 temp_r4_2;
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
        return;
    }
    temp_r4_2 = M2C_FIELD(arg0, s32 *, 0xB4);
    if (!(temp_r4_2 & 0x80) && !(temp_r4_2 & 0x100) && !(temp_r4_2 & 0x200)) {
        TWindowKeyBoardSoft__sub_800808FC((int) (M2C_FIELD(arg0, s32 *, 0x68)), (int) (0x20));
    }
}

void TWindowKeyBoardSoft__vt0(u8 *arg0) {
    if (!(M2C_FIELD(arg0, u16 *, 0x60) & 2)) {
        if (!(M2C_FIELD(arg0, u16 *, 0x62) & 4) || (TWindowKeyBoardSoft__sub_800809C0((void *) (arg0 + 0x6C)) == 0)) {
            M2C_FIELD(arg0, u16 *, 0x60) = (u16) (M2C_FIELD(arg0, u16 *, 0x60) | 1);
        }
    } else {
        TWindowKeyBoardSoft__sub_8025C804();
    }
}

int get_field_6c__19TWindowKeyBoardSoftFPv(void* p) { return TWindowKeyBoardSoft__sub_8008081C((char*)p + 0x6c); }

void init__19TWindowKeyBoardSoftFPv(u8 *arg0) {
    reset_state__19TWindowKeyBoardSoftFPv(arg0 + 0x84);
    M2C_FIELD(arg0, s32 *, 0x68) = (s32) (arg0 + 0x6C);
    M2C_FIELD(arg0, u16 *, 0x60) = (u16) (M2C_FIELD(arg0, u16 *, 0x60) & ~0x86);
}

int TWindowKeyBoardSoft__sub_8025CA70(void) { return 0; }

int is_key_state_2__19TWindowKeyBoardSoftFPv(void* p) { return (*(u16*)((char*)p + 0x60) >> 2) & 0x1; }

}
