#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Field_8025C974 { u16 *buffer; s32 cursor; u32 width; u32 linePixels; s32 scroll; u32 capacity; };

struct Base_8025C974 { u8 pad[0x6c]; Field_8025C974 field; u8 pad2[0x30]; s32 fb4; };

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
void TWindowKeyBoardSoft__vt17(u8 *arg0);
M2C_UNK TWindowKeyBoardSoft__sub_8025D664();
s32 select_next__19TWindowKeyBoardSoftFPv();
void TWindowKeyBoardSoft__vt18(u8 *arg0);
M2C_UNK delete_char__19TWindowKeyBoardSoftFPv(void *);
void init__19TWindowKeyBoardSoftFPv(u8 *arg0);
void TWindowKeyBoardSoft__vt20(u8 *arg0);
M2C_UNK TWindowKeyBoardSoft__sub_800808FC(int, int);
s32 select_next__19TWindowKeyBoardSoftFPv();
void TWindowKeyBoardSoft__vt19(u8 *arg0);
s32 TWindowKeyBoardSoft__sub_800809C0(void *);
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
s32 TWindowKeyBoardSoft__sub_80076E00(int);
void TWindowKeyBoardSoft__vt5(u8 *arg0);
s32 TWindowKeyBoardSoft__sub_80076E00(int);
void TWindowKeyBoardSoft__vt4(u8 *arg0);
s32 TWindowKeyBoardSoft__sub_80076E00(int);
void TWindowKeyBoardSoft__vt3(u8 *arg0);
M2C_UNK delete_char__19TWindowKeyBoardSoftFPv(void *);
void init__19TWindowKeyBoardSoftFPv(u8 *arg0);
s32 update__19TWindowKeyBoardSoftFPv(void *);
void TWindowKeyBoardSoft__vt1(u8 *arg0);
M2C_UNK TWindowKeyBoardSoft__sub_8025CFA8(void *, void *);
M2C_UNK TWindowKeyBoardSoft__sub_8025D47C(void *, void *, void *);
M2C_UNK set_kanji_mode__19TWindowKeyBoardSoftFPv(void *);
M2C_UNK set_kana_mode__19TWindowKeyBoardSoftFPv(void *);
s32 convert_input_text__19TWindowKeyBoardSoftFPv(void *);
s32 TWindowKeyBoardSoft__sub_803E67D4(void *, void *);
void TWindowKeyBoardSoft__sub_8025B92C(u8 *arg0);
s32 TWindowKeyBoardSoft__sub_80076E00(int);
M2C_UNK TWindowKeyBoardSoft__sub_8025CFA8(void *, void *);
M2C_UNK TWindowKeyBoardSoft__sub_8025D47C(void *, void *, void *);
M2C_UNK set_kana_mode__19TWindowKeyBoardSoftFPv(void *);
s32 convert_input_text__19TWindowKeyBoardSoftFPv(void *);
s32 TWindowKeyBoardSoft__sub_803E67D4(void *, void *);
void TWindowKeyBoardSoft__vt9(u8 *arg0);
s32 TWindowKeyBoardSoft__sub_80076E00(int);
M2C_UNK TWindowKeyBoardSoft__sub_8025CFA8(void *, void *);
M2C_UNK TWindowKeyBoardSoft__sub_8025D47C(void *, void *, void *);
M2C_UNK set_kanji_mode__19TWindowKeyBoardSoftFPv(void *);
s32 convert_input_text__19TWindowKeyBoardSoftFPv(void *);
s32 TWindowKeyBoardSoft__sub_803E67D4(void *, void *);
void TWindowKeyBoardSoft__vt8(u8 *arg0);
s32 TLobby__sub_8001DC24();
M2C_UNK TWindowKeyBoardSoft__sub_80080798(void *, s32);
M2C_UNK TWindowSubStatusDisp__sub_80229080(M2C_UNK *);
M2C_UNK TWindowSubStatusDisp__sub_802290E0();
M2C_UNK *TWindowCtrl__sub_8024B7D4(s32);
M2C_UNK TWindowKeyBoardSoft__sub_8025C804(void *);
M2C_UNK TWindowKeyBoardSoft__sub_8025DBDC(void *, M2C_UNK);
extern M2C_UNK lbl_805DD030;
extern M2C_UNK lbl_805DD034;
void TWindowKeyBoardSoft__sub_8025C51C(u8 *arg0, s32 arg1);
M2C_UNK process_input__19TWindowKeyBoardSoftFPv(void *);
M2C_UNK TWindowKeyBoardSoft__sub_8025D7FC();
void TWindowKeyBoardSoft__vt16(u8 *arg0);
M2C_UNK delete_char__19TWindowKeyBoardSoftFPv(void *);
void init__19TWindowKeyBoardSoftFPv(u8 *arg0);
s32 update__19TWindowKeyBoardSoftFPv(void *);
void TWindowKeyBoardSoft__sub_8025C24C(u8 *arg0);
bool TWindowKeyBoardSoft__sub_8025B85C(u16 arg0);
extern s32 lbl_805D5544;
u16 TWindowSubStatusDisp__sub_80145054(u16);
u8 TWindowSubStatusDisp__sub_80144FCC(u16);
s32 TWindowKeyBoardSoft__sub_80080D1C(Field_8025C974 *, u16, u32 *, u32 *, u32 *);
void TWindowKeyBoardSoft__sub_8025C974(Base_8025C974 *base, char *out);
}

extern "C" {

void TWindowKeyBoardSoft__sub_8025B928(void);
int TWindowKeyBoardSoft__sub_8025CA70(void);
int get_field_6c__19TWindowKeyBoardSoftFPv(void* p);
s32 get_state__19TWindowKeyBoardSoftFPv(void* p);
void init__19TWindowKeyBoardSoftFPv(u8 *arg0);
int is_key_state_2__19TWindowKeyBoardSoftFPv(void* p);
void update_input_state2__19TWindowKeyBoardSoftFPv(void *arg0);
void update_input_state__19TWindowKeyBoardSoftFPv(void *arg0);
int TWindowChat__sub_8025CB70(void* a0 = 0);
int TWindowKeyBoardSoft__sub_8008081C(void*);
void flush_if_flagged__11TWindowChatFPv(void* p);
int get_flag__11TWindowChatFPv(void* a0 = 0);
int is_flag_4_set__17TWindowSubComCardFPv(void* p);
M2C_UNK reset_state__19TWindowKeyBoardSoftFPv(void *);
s32 select_next__19TWindowKeyBoardSoftFPv();

bool TWindowKeyBoardSoft__sub_8025B85C(u16 arg0) {
    if ((s32) arg0 < 0x30) {
        return 0;
    }
    if ((s32) arg0 <= 0x39) {
        return 1;
    }
    if ((s32) arg0 < 0x41) {
        return 0;
    }
    if ((s32) arg0 <= 0x5A) {
        return 1;
    }
    if ((s32) arg0 < 0x61) {
        return 0;
    }
    return (s32) arg0 <= 0x7A;
}

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

void TWindowKeyBoardSoft__sub_8025B92C(u8 *arg0) {
    s8 sp108[0x100];
    s8 sp8[0x100];
    s32 var_r3;
    u16 temp_r4;
    temp_r4 = M2C_FIELD(arg0, u16 *, 0x60);
    if (temp_r4 & 2) {
        if (!(temp_r4 & 4)) {
            convert_input_text__19TWindowKeyBoardSoftFPv((void *)((void *) (arg0)));
            var_r3 = M2C_FIELD(arg0, s32 *, 0xAC);
            if (!(M2C_FIELD(arg0, u16 *, 0x60) & 0x10)) {
                do {
                    M2C_FIELD(arg0, s32 *, 0xAC) = var_r3;
                    var_r3 = TWindowKeyBoardSoft__sub_803E67D4((void *) (sp8), (void *) (sp108));
                } while (var_r3 != 0);
                TWindowKeyBoardSoft__sub_8025CFA8((void *) (arg0), (void *) (sp8));
                sp8[0] = 0;
                TWindowKeyBoardSoft__sub_8025D47C((void *) (arg0), (void *) (sp8), (void *) (sp8));
                goto block_5;
            }
        } else {
block_5:
            if ((s32) M2C_FIELD(arg0, s32 *, 0xA8) != 0xF1) {
                set_kana_mode__19TWindowKeyBoardSoftFPv((void *) (arg0));
                return;
            }
            set_kanji_mode__19TWindowKeyBoardSoftFPv((void *) (arg0));
        }
    }
}

void update_input_state__19TWindowKeyBoardSoftFPv(void *arg0) {
    u16 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u16 *, 0x60);
    if (temp_r4 & 4) {
        if (M2C_FIELD(arg0, s32 *, 0xB4) & 0x20) {
            update__19TWindowKeyBoardSoftFPv(arg0);
            return;
        }
        select_next__19TWindowKeyBoardSoftFPv();
        return;
    }
    if (temp_r4 & 2) {
        convert_input_text__19TWindowKeyBoardSoftFPv(arg0);
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

void TWindowKeyBoardSoft__vt9(u8 *arg0) {
    s8 sp108[0x100];
    s8 sp8[0x100];
    s32 var_r3;
    u16 temp_r4;
    if (!(M2C_FIELD(arg0, s32 *, 0xB4) & 0x20)) {
        temp_r4 = M2C_FIELD(arg0, u16 *, 0x60);
        if (temp_r4 & 2) {
            if (!(temp_r4 & 4)) {
                convert_input_text__19TWindowKeyBoardSoftFPv((void *) (arg0));
                var_r3 = M2C_FIELD(arg0, s32 *, 0xAC);
                if (!(M2C_FIELD(arg0, u16 *, 0x60) & 0x10)) {
                    do {
                        M2C_FIELD(arg0, s32 *, 0xAC) = var_r3;
                        var_r3 = TWindowKeyBoardSoft__sub_803E67D4((void *) (sp8), (void *) (sp108));
                    } while (var_r3 != 0);
                    TWindowKeyBoardSoft__sub_8025CFA8((void *) (arg0), (void *) (sp8));
                    sp8[0] = 0;
                    TWindowKeyBoardSoft__sub_8025D47C((void *) (arg0), (void *) (sp8), (void *) (sp8));
                    goto block_6;
                }
            } else {
block_6:
                set_kana_mode__19TWindowKeyBoardSoftFPv((void *) (arg0));
            }
        } else if (!(M2C_FIELD(arg0, u16 *, 0x62) & 8) && (TWindowKeyBoardSoft__sub_80076E00((int) (0xE)) != 0)) {
            M2C_FIELD(arg0, s8 *, 0x65) = 0xE;
            M2C_FIELD(arg0, u16 *, 0x60) = (u16) (M2C_FIELD(arg0, u16 *, 0x60) | 0x41);
        }
    }
}

void TWindowKeyBoardSoft__vt8(u8 *arg0) {
    s8 sp108[0x100];
    s8 sp8[0x100];
    s32 var_r3;
    u16 temp_r4;
    if (!(M2C_FIELD(arg0, s32 *, 0xB4) & 0x20)) {
        temp_r4 = M2C_FIELD(arg0, u16 *, 0x60);
        if (temp_r4 & 2) {
            if (!(temp_r4 & 4)) {
                convert_input_text__19TWindowKeyBoardSoftFPv((void *) (arg0));
                var_r3 = M2C_FIELD(arg0, s32 *, 0xAC);
                if (!(M2C_FIELD(arg0, u16 *, 0x60) & 0x10)) {
                    do {
                        M2C_FIELD(arg0, s32 *, 0xAC) = var_r3;
                        var_r3 = TWindowKeyBoardSoft__sub_803E67D4((void *) (sp8), (void *) (sp108));
                    } while (var_r3 != 0);
                    TWindowKeyBoardSoft__sub_8025CFA8((void *) (arg0), (void *) (sp8));
                    sp8[0] = 0;
                    TWindowKeyBoardSoft__sub_8025D47C((void *) (arg0), (void *) (sp8), (void *) (sp8));
                    goto block_6;
                }
            } else {
block_6:
                set_kanji_mode__19TWindowKeyBoardSoftFPv((void *) (arg0));
            }
        } else if (!(M2C_FIELD(arg0, u16 *, 0x62) & 8) && (TWindowKeyBoardSoft__sub_80076E00((int) (0xD)) != 0)) {
            M2C_FIELD(arg0, s8 *, 0x65) = 0xD;
            M2C_FIELD(arg0, u16 *, 0x60) = (u16) (M2C_FIELD(arg0, u16 *, 0x60) | 0x41);
        }
    }
}

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

void TWindowKeyBoardSoft__vt5(u8 *arg0) {
    if (!(M2C_FIELD(arg0, u16 *, 0x62) & 8)) {
        if (M2C_FIELD(arg0, s32 *, 0xB4) & 0x20) {
            TWindowKeyBoardSoft__sub_8025C51C((u8 *)((void *)(arg0)), (s32)((int) (2)));
            return;
        }
        if (!(M2C_FIELD(arg0, u16 *, 0x60) & 2) && (TWindowKeyBoardSoft__sub_80076E00((int) (0xA)) != 0)) {
            M2C_FIELD(arg0, s8 *, 0x65) = 0xA;
            M2C_FIELD(arg0, u16 *, 0x60) = (u16) (M2C_FIELD(arg0, u16 *, 0x60) | 0x41);
        }
    }
}

void TWindowKeyBoardSoft__vt4(u8 *arg0) {
    if (!(M2C_FIELD(arg0, u16 *, 0x62) & 8)) {
        if (M2C_FIELD(arg0, s32 *, 0xB4) & 0x20) {
            TWindowKeyBoardSoft__sub_8025C51C((u8 *)((void *)(arg0)), (s32)((int) (1)));
            return;
        }
        if (!(M2C_FIELD(arg0, u16 *, 0x60) & 2) && (TWindowKeyBoardSoft__sub_80076E00((int) (9)) != 0)) {
            M2C_FIELD(arg0, s8 *, 0x65) = 9;
            M2C_FIELD(arg0, u16 *, 0x60) = (u16) (M2C_FIELD(arg0, u16 *, 0x60) | 0x41);
        }
    }
}

void TWindowKeyBoardSoft__vt3(u8 *arg0) {
    if (!(M2C_FIELD(arg0, u16 *, 0x62) & 8)) {
        if (M2C_FIELD(arg0, s32 *, 0xB4) & 0x20) {
            TWindowKeyBoardSoft__sub_8025C51C((u8 *)((void *)(arg0)), (s32)((int) (0)));
            return;
        }
        if (!(M2C_FIELD(arg0, u16 *, 0x60) & 2) && (TWindowKeyBoardSoft__sub_80076E00((int) (8)) != 0)) {
            M2C_FIELD(arg0, s8 *, 0x65) = 8;
            M2C_FIELD(arg0, u16 *, 0x60) = (u16) (M2C_FIELD(arg0, u16 *, 0x60) | 0x41);
        }
    }
}

void TWindowKeyBoardSoft__vt17(u8 *arg0) {
    if (M2C_FIELD(arg0, u16 *, 0x60) & 4) {
        if (M2C_FIELD(arg0, u16 *, 0x62) & 1) {
            update__19TWindowKeyBoardSoftFPv(arg0);
            return;
        }
        process_input__19TWindowKeyBoardSoftFPv((void *)(arg0));
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

void TWindowKeyBoardSoft__vt16(u8 *arg0) {
  s8 *new_var;
  u32 temp_r3;
  u8 *temp_r4;
  if ((*((u16 *) (((s8 *) arg0) + 0x60))) & 4)
  {
    if (((*((u16 *) (((s8 *) arg0) + 0x62))) & 1) && (!((*((s32 *) (((s8 *) arg0) + 0xB4))) & 0x20)))
    {
      process_input__19TWindowKeyBoardSoftFPv((void *)(arg0));
      return;
    }
    TWindowKeyBoardSoft__sub_8025D7FC();
    return;
  }
  temp_r4 = (u8 *) (*((u8 **) (((s8 *) arg0) + 0x68)));
  temp_r3 = *((u32 *) (((s8 *) temp_r4) + 4));
  new_var = (s8 *) temp_r4;
  if (temp_r3 != 0U)
  {
    *((u32 *) (new_var + 4)) = (u32) (temp_r3 - 1);
  }
}

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

void TWindowKeyBoardSoft__sub_8025C24C(u8 *arg0) {
  s8 *new_var;
  u16 temp_r5;
  u32 temp_r3;
  u8 *temp_r4;
  temp_r5 = *((u16 *) (((s8 *) arg0) + 0x60));
  if (temp_r5 & 4)
  {
    if ((*((u16 *) (((s8 *) arg0) + 0x62))) & 1)
    {
      update__19TWindowKeyBoardSoftFPv(arg0);
      return;
    }
    *((u16 *) (((s8 *) arg0) + 0x60)) = (u16) (temp_r5 & 0xFFFFFFFB);
    return;
  }
  temp_r4 = *((u8 **) (((s8 *) arg0) + 0x68));
  ;
  new_var = ((s8 *) temp_r4) + 4;
  if ((*((u32 *) new_var)) == 0U)
  {
    *((u16 *) (((s8 *) arg0) + 0x60)) = (u16) (temp_r5 | 0x20);
    return;
  }
  *((u32 *) new_var) = (u32) ((*((u32 *) new_var)) - 1);
  delete_char__19TWindowKeyBoardSoftFPv((void *) (*((u8 **) (((s8 *) arg0) + 0x68))));
  if (((*((u16 *) (((s8 *) arg0) + 0x60))) & 2) && (((u32) (*((u32 *) (((s8 *) (*((u8 **) (((s8 *) arg0) + 0x68)))) + 0x10)))) == 0U))
  {
    init__19TWindowKeyBoardSoftFPv((u8 *)((void *) arg0));
  }
}

void TWindowKeyBoardSoft__vt1(u8 *arg0) {
    u16 temp_r4;
    u32 temp_r3;
    u8 *temp_r4_2;
    temp_r4 = M2C_FIELD(arg0, u16 *, 0x60);
    if (temp_r4 & 4) {
        if (M2C_FIELD(arg0, u16 *, 0x62) & 1) {
            update__19TWindowKeyBoardSoftFPv((void *)((void *)(arg0)));
            return;
        }
        M2C_FIELD(arg0, u16 *, 0x60) = (u16) (temp_r4 & 0xFFFFFFFB);
        return;
    }
    temp_r4_2 = M2C_FIELD(arg0, u8 **, 0x68);
    temp_r3 = M2C_FIELD(temp_r4_2, u32 *, 4);
    if (temp_r3 != 0U) {
        M2C_FIELD(temp_r4_2, u32 *, 4) = (u32) (temp_r3 - 1);
        delete_char__19TWindowKeyBoardSoftFPv((void *) (M2C_FIELD(arg0, u8 **, 0x68)));
        if ((M2C_FIELD(arg0, u16 *, 0x60) & 2) && ((u32) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x68), u32 *, 0x10) == 0U)) {
            init__19TWindowKeyBoardSoftFPv((u8 *)((void *) (arg0)));
        }
    }
}

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
            update__19TWindowKeyBoardSoftFPv(arg0);
            return;
        }
        select_next__19TWindowKeyBoardSoftFPv();
        return;
    }
    if (temp_r4 & 2) {
        convert_input_text__19TWindowKeyBoardSoftFPv(arg0);
    }
}

void TWindowKeyBoardSoft__vt19(u8 *arg0) {
    s32 temp_r4_2;
    u16 temp_r4;
    temp_r4 = M2C_FIELD(arg0, u16 *, 0x60);
    if (temp_r4 & 4) {
        if (M2C_FIELD(arg0, s32 *, 0xB4) & 0x20) {
            update__19TWindowKeyBoardSoftFPv(arg0);
            return;
        }
        select_next__19TWindowKeyBoardSoftFPv();
        return;
    }
    if (temp_r4 & 2) {
        convert_input_text__19TWindowKeyBoardSoftFPv(arg0);
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
        TWindowKeyBoardSoft__sub_8025C804((void *)(arg0));
    }
}

void TWindowKeyBoardSoft__sub_8025C51C(u8 *arg0, s32 arg1) {
    M2C_UNK *temp_r3;
    u16 temp_r4;
    u32 temp_r3_2;
    temp_r4 = M2C_FIELD(arg0, u16 *, 0x60);
    if (temp_r4 & 2) {
        if (temp_r4 & 4) {
            TWindowKeyBoardSoft__sub_8025DBDC(arg0, 1);
        }
        TWindowKeyBoardSoft__sub_8025C804((void *)(arg0));
    }
    temp_r3 = TWindowCtrl__sub_8024B7D4(arg1);
    if (temp_r3 != NULL) {
        TWindowSubStatusDisp__sub_802290E0();
        temp_r3_2 = M2C_FIELD(arg0, u32 *, 0x70);
        if (temp_r3_2 != 0U) {
            if (temp_r3_2 == (u32) M2C_FIELD(arg0, u32 *, 0x7C)) {
                TWindowSubStatusDisp__sub_80229080(&lbl_805DD030);
                TWindowSubStatusDisp__sub_80229080(temp_r3);
            } else {
                TWindowSubStatusDisp__sub_80229080(&lbl_805DD034);
                TWindowSubStatusDisp__sub_80229080(temp_r3);
                TWindowSubStatusDisp__sub_80229080(&lbl_805DD034);
            }
        } else {
            TWindowSubStatusDisp__sub_80229080(temp_r3);
            if ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 0U) {
                TWindowSubStatusDisp__sub_80229080(&lbl_805DD034);
            }
        }
        TWindowKeyBoardSoft__sub_80080798(arg0 + 0x6C, TLobby__sub_8001DC24());
    }
}

int get_field_6c__19TWindowKeyBoardSoftFPv(void* p) { return TWindowKeyBoardSoft__sub_8008081C((char*)p + 0x6c); }

void init__19TWindowKeyBoardSoftFPv(u8 *arg0) {
    reset_state__19TWindowKeyBoardSoftFPv(arg0 + 0x84);
    M2C_FIELD(arg0, s32 *, 0x68) = (s32) (arg0 + 0x6C);
    M2C_FIELD(arg0, u16 *, 0x60) = (u16) (M2C_FIELD(arg0, u16 *, 0x60) & ~0x86);
}

void TWindowKeyBoardSoft__sub_8025C974(Base_8025C974 *base, char *out) {
    u32 a = 0;
    u32 b = 0;
    u32 c = 0;
    u16 code;
    u16 *in = base->field.buffer;
    if (!(base->fb4 & 0x10) && (s32)*in != 0) {
        out[0] = 9;
        if (lbl_805D5544 == 0) {
            out[1] = 'J';
            out += 2;
        } else {
            out[1] = 'E';
            out += 2;
        }
    }
    while ((s32)*in != 0) {
        code = *in++;
        TWindowSubStatusDisp__sub_80144FCC(TWindowSubStatusDisp__sub_80145054(code));
        if (TWindowKeyBoardSoft__sub_80080D1C(&base->field, code, &a, &b, &c)) {
            *out = 0;
            return;
        }
        if (code & 0xFF00) {
            *out++ = (code >> 8) & 0xFF;
        }
        *out++ = code;
    }
    *out = 0;
}

int TWindowKeyBoardSoft__sub_8025CA70(void) { return 0; }

int is_key_state_2__19TWindowKeyBoardSoftFPv(void* p) { return (*(u16*)((char*)p + 0x60) >> 2) & 0x1; }

}
