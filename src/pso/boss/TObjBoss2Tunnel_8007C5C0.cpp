#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_8007CBC4 {
    M2C_UNK sp8;
    u8 pad_C[0x54];
    M2C_UNK sp60;
};

struct Stack_8007CAE8 {
    f32 sp8;
    f32 spC;
    f32 sp10;
    f32 sp14;
};

struct Load_8007CB50 { u8 pad[0x58]; s32 *data; u32 size; };

typedef s32 M2C_UNK;
struct Card_8007CCD0 {
    char file[0x12];
    char title[0x22];
    u8 icon[0x10];
    u8 pad44[8];
    s16 f4c;
    s16 f4e;
    s32 f50;
    s16 f54;
    u8 pad56[2];
    s32 *data;
    s32 size;
};

extern "C" {
M2C_UNK DCFlushRange(int, int);
s32 TObjPlayer__sub_800845F8();
s32 TAdPlayerLoadGC__sub_801E1538(void *, int);
s32 TAdPlayerLoadGC__sub_801E1B50(int);
M2C_UNK memcpy(int, void *, int);
extern s32 lbl_805D49B4;
extern s16 TObjBoss2Tunnel__data_805D4E8A;
extern s32 TObjBoss2Tunnel__data_805D4E90;
s32 TObjBoss2Tunnel__sub_8007CBC4(void);
M2C_UNK copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);
M2C_UNK TObjPlayer__sub_800842A4(int, void *, void *, int, f32);
extern const f32 lbl_805D9224;
extern const f32 lbl_805D9228;
extern const f32 lbl_805D922C;
extern const f32 lbl_805D9230;
void TObjBoss2Tunnel__sub_8007CAE8(u32 arg0);
extern M2C_UNK TObjBoss2Tunnel__data_80438A08[];
void poll_load_status__15TAdPlayerLoadGCFi(s32 a, void *b);
void TObjBoss2Tunnel__sub_8007C880(void);
s32 TAdPlayerLoadGC__sub_801E1538(void *, int);
s32 TAdSinglePlyChrSelectGC__sub_80201204(s32 *, s32);
extern s32 TObjBoss2Tunnel__data_805D4E90;
bool TObjBoss2Tunnel__sub_8007CB50(void);
s32 memcard_check_snapshot(M2C_UNK, M2C_UNK);
void TAdPlayerLoadGC__sub_801E14E4(void *);
void TAdPlayerLoadGC__sub_801E14E8(void *, s32);
void TAdPlayerLoadGC__sub_801E17F4(s32, void *, void *);
s32 TAdSinglePlyChrSelectGC__sub_80201204(s32 *, s32);
s32 load_player__23TAdSinglePlyChrSelectGCFiiii(s32, void *, s32, s32);
char *strcpy(char *, const char *);
M2C_UNK memcpy(int, void *, int);
void *memset(void *, int, u32);
extern M2C_UNK TObjBoss2Tunnel__data_80438A08[];
extern char lbl_80438A28[];
extern u8 lbl_80438A4C[];
extern char lbl_804C8974[];
extern s32 lbl_805D49B4;
extern s16 TObjBoss2Tunnel__data_805D4E8A;
extern s32 *lbl_805D4E8C;
extern s32 TObjBoss2Tunnel__data_805D4E90;
s32 TObjBoss2Tunnel__sub_8007CCD0(void);
}

extern "C" {

s32 memcard_check_snapshot(M2C_UNK, M2C_UNK);
s32 load_player_slot__23TAdSinglePlyChrSelectGCFPvii(M2C_UNK, M2C_UNK *, s32);
extern M2C_UNK TObjBoss2Tunnel__data_80438A08[];
extern s16 TObjBoss2Tunnel__data_805D4E8A;
extern s32 TObjBoss2Tunnel__data_805D4E90;

void TObjBoss2Tunnel__sub_8007C880(void) {
    poll_load_status__15TAdPlayerLoadGCFi(1, ((u8 *)&TObjBoss2Tunnel__data_80438A08));
}

void TObjBoss2Tunnel__sub_8007CAE8(u32 arg0) {
    Stack_8007CAE8 stack;
    if (arg0 == 0U) {
        stack.sp10 = lbl_805D9224;
        stack.sp14 = lbl_805D9228;
    } else {
        copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *) (&stack.sp10), (void *) (arg0));
    }
    stack.sp8 = lbl_805D922C;
    stack.spC = lbl_805D9230;
    TObjPlayer__sub_800842A4((int) (-1), (void *) (&stack.sp10), (void *) (&stack.sp8), (int) (1), (f32) (lbl_805D922C));
}

bool TObjBoss2Tunnel__sub_8007CB50(void) {
    Load_8007CB50 ld;
    s32 *p;
    s32 saved;
    s32 sum;
    if ((u32)TAdPlayerLoadGC__sub_801E1538(&ld, TObjBoss2Tunnel__data_805D4E90) == 0xFFFFFF20) {
        return false;
    }
    p = ld.data;
    saved = *p;
    *p = 0;
    sum = TAdSinglePlyChrSelectGC__sub_80201204(ld.data, 0x1818C);
    *p = saved;
    return sum == saved;
}

s32 TObjBoss2Tunnel__sub_8007CBC4(void) {
    Stack_8007CBC4 stack;
    s32 temp_r31;
    if (TAdPlayerLoadGC__sub_801E1B50((int) (1)) == 0) {
        if (((s32) (*(u16 *)&TObjBoss2Tunnel__data_805D4E8A) != 0) && ((s32) (*(u16 *)&TObjBoss2Tunnel__data_805D4E8A) >= 0) && ((s32) (*(u16 *)&TObjBoss2Tunnel__data_805D4E8A) < 3)) {
            temp_r31 = TObjPlayer__sub_800845F8();
            if (TAdPlayerLoadGC__sub_801E1538((void *) (&stack.sp8), (int) (TObjBoss2Tunnel__data_805D4E90)) == 0) {
                memcpy((int) (temp_r31), (void *) (stack.sp60 + 8), (int) (0x1818C));
                DCFlushRange((int) (temp_r31), (int) (0x1818C));
            }
            lbl_805D49B4 = 0;
        }
        return 1;
    }
    return 0;
}

s32 save_screen_snapshot(void) {
    if (memcard_check_snapshot(1, 0) == 0) {
        return 0;
    }
    if (load_player_slot__23TAdSinglePlyChrSelectGCFPvii(1, TObjBoss2Tunnel__data_80438A08, TObjBoss2Tunnel__data_805D4E90) != 0) {
        return 0;
    }
    TObjBoss2Tunnel__data_805D4E8A = 2;
    return 1;
}
s32 TObjBoss2Tunnel__sub_8007CCD0(void) {
    Card_8007CCD0 c;
    s32 *p;
    if (memcard_check_snapshot(1, 0) == 0) {
        return 0;
    }
    if ((u32)TObjBoss2Tunnel__data_805D4E90 == 0) {
        return 0;
    }
    memset((void *)TObjBoss2Tunnel__data_805D4E90, 0, 4);
    memset(&c, 0, 0x60);
    strcpy(c.file, lbl_804C8974);
    strcpy(c.title, lbl_80438A28);
    memcpy((int)c.icon, lbl_80438A4C, 0x10);
    TAdPlayerLoadGC__sub_801E14E8(&c, 4);
    c.f4c = 1;
    p = lbl_805D4E8C;
    c.f4e = 1;
    c.f50 = 0;
    c.f54 = 0;
    *p = 0;
    *p = TAdSinglePlyChrSelectGC__sub_80201204(lbl_805D4E8C, 0x1818C);
    c.size = 0x1818C;
    c.data = lbl_805D4E8C;
    TAdPlayerLoadGC__sub_801E17F4(TObjBoss2Tunnel__data_805D4E90, &c, lbl_805D4E8C);
    TAdPlayerLoadGC__sub_801E14E4(&c);
    if (load_player__23TAdSinglePlyChrSelectGCFiiii(1, TObjBoss2Tunnel__data_80438A08, TObjBoss2Tunnel__data_805D4E90, 0xF) != 0) {
        return 0;
    }
    lbl_805D49B4 = 1;
    TObjBoss2Tunnel__data_805D4E8A = 1;
    return 1;
}

}
