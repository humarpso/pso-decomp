#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Stack_80135458 {
    s8 sp8;
    s8 sp9;
    s16 spA;
};

struct Stack_80135598 {
    M2C_UNK sp8;
    u8 trailing_storage[0x488];
};

struct RecoveredGlobal_80135198_lbl_804A7008 { M2C_UNK value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_80135198_lbl_804A7008_size[sizeof(RecoveredGlobal_80135198_lbl_804A7008) == 0x18 ? 1 : -1];

#include <stddef.h>
struct Stack_80135974 {
    M2C_UNK sp8;
    M2C_UNK spC;
    u8 trailing_storage[0x1FC];
};

struct RecoveredGlobal_80135974_lbl_805127F8 { M2C_UNK value; u8 remaining[0x1FC]; };
typedef char RecoveredGlobal_80135974_lbl_805127F8_size[sizeof(RecoveredGlobal_80135974_lbl_805127F8) == 0x200 ? 1 : -1];

struct RecoveredGlobal_8013561C_lbl_805127F8 {
    M2C_UNK value;
    u8 remaining[0x1FC];
};

struct Base_80136000 { u8 pad[0x18]; };

struct Obj_80136000 : Base_80136000 { virtual ~Obj_80136000(); };

struct VBase_18_80135208 { char pad[0x18]; };

struct VObj_18_80135208 : VBase_18_80135208 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual s32 m4();
    u8 pad1c[0x4];
};

struct Pkt_80135208 : VObj_18_80135208 {};

struct Row_80135208 { u8 pad[8]; u32 ip; u8 pad2[20]; };

struct Fld_80135208 { u8 pad6[6]; s16 a; };

struct Pkt_8013574C { u8 pad[4]; s32 len; u8 data[1]; };

struct Pkt_801357F8 { u8 pad[4]; s32 len; u8 data[1]; };

struct Pkt_801358B4 { u8 pad[4]; s32 len; u8 data[1]; };

struct S12_801358B4 { u32 a[3]; };

extern "C" {
int bswap_packet_header__6TLobbyFPv(void *);
M2C_UNK TLobby__sub_801E44D8(void *, void *);
void TLobby__sub_80135458(s32 arg0);
s32 TLobby__sub_8013A4A8(int, void *);
s32 free__11TOBoss4RockFUi(int);
u8 *alloc_buffer__11TOBoss4RockFPv(M2C_UNK);
s32 TObjPlayer__sub_801B4CE4(void *, void *);
s32 TObjPlayer__sub_801B4FD8(void *);
s32 TPlayerBattleCtrl4P__sub_801BA74C(void *);
extern s32 lbl_805D53A0;
void TLobby__sub_80135598(s32 arg0);
s32 TLobby__sub_801A51C0(void *);
s32 DateToSeconds__FP9DateStampPi(void *, void *);
s32 getDateStamp__FP9DateStamp(void *);
s32 __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_80135198_lbl_804A7008 lbl_804A7008;
extern s32 lbl_805D53A0;
extern s32 TLobby__data_805D5608;
u8 *TLobby__sub_80135198(u8 *arg0, s32 arg1);
M2C_UNK bswap_and_handle_packet__6TLobbyFii(void *, void *);
M2C_UNK TLobby__sub_8013A578(void *);
M2C_UNK memcpy(void *, void *, int);
extern RecoveredGlobal_80135974_lbl_805127F8 lbl_805127F8;
void TLobby__sub_80135974(s32 arg0);
M2C_UNK memcpy(void *, void *, int);
extern RecoveredGlobal_80135974_lbl_805127F8 lbl_805127F8;
extern s32 TLobby__data_805D5594;
extern s16 TLobby__data_805D5CE8;
void handle_6x6F_set_quest_flags_v2(s32 arg0);
extern s32 TLobby__data_805D53AC;
extern char lbl_8043EF04[];
extern char TLobby__data_8050AAE8[][16];
extern const char TLobby__data_805DB0B0[4];
s32 TPlayerBattleCtrl4P__sub_801BA74C(void *);
void TLobby__sub_8013A170(const char *fmt, ...);
char *strncpy(char *, const char *, u32);
void TLobby__sub_80136000(s32 idx, s32 v);
void set_ip_address__7TSocketFUl(void*, u32);
void TLobby__sub_8013A170(const char *fmt, ...);
VObj_18_80135208 *TPacket__ct(void*, s32);
void *__nw__7TObjectFUl(u32);
extern char lbl_8043EE30[];
extern Row_80135208 lbl_8050ABB8[];
extern s32 lbl_805D53A0;
extern s32 lbl_805D5E48;
void TLobby__sub_80135208(s32 arg0);
void __dl__FPv(void *);
void *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
void TLobby__sub_80103890(void *);
void TLobby__sub_8013A170(const char *fmt, ...);
s32 TLobby__sub_8013F810(void *, void *, s32, void *);
s32 free__11TOBoss4RockFUi(int);
u8 *alloc_buffer__11TOBoss4RockFPv(M2C_UNK);
extern char lbl_8043EEA4[];
extern s32 TLobby__data_805D5594;
extern s16 TLobby__data_805D5CE8;
void handle_6x6D_sync_game_state(Pkt_8013574C *arg0);
void __dl__FPv(void *);
void *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
void TLobby__sub_8013A170(const char *fmt, ...);
s32 TLobby__sub_8013F810(void *, void *, s32, void *);
void TLobby__sub_8013A9F4(void *);
extern char lbl_8043EEC0[];
extern s32 TLobby__data_805D5594;
extern s16 TLobby__data_805D5CE8;
extern u32 *TLobby__data_805D6140;
extern u32 TLobby__data_805D6148;
void handle_6x6C_sync_game_state(Pkt_801357F8 *arg0);
void __dl__FPv(void *);
void *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
void TLobby__sub_8013A170(const char *fmt, ...);
s32 TLobby__sub_8013F810(void *, void *, s32, void *);
void bswap_6x6B__6TLobbyFPv(void *);
extern char lbl_8043EEDC[];
extern s32 TLobby__data_805D5594;
extern s16 TLobby__data_805D5CE8;
extern S12_801358B4 *TLobby__data_805D6144;
extern u32 TLobby__data_805D614C;
void handle_6x6B_sync_game_state(Pkt_801358B4 *arg0);
}

extern "C" {

void TLobby__sub_80135FFC(void);

u8 *TLobby__sub_80135198(u8 *arg0, s32 arg1) {
    M2C_UNK sp8;
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804A7008.value;
    getDateStamp__FP9DateStamp((void *) (&sp8));
    DateToSeconds__FP9DateStampPi((void *) (&sp8), (void *) (arg0 + 0x1C));
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x24) = TLobby__sub_801A51C0((void *) (lbl_805D53A0));
    M2C_FIELD(arg0, s8 *, 0x28) = 0;
    TLobby__data_805D5608 = 0;
    return arg0;
}

void TLobby__sub_80135208(s32 arg0) {
    VObj_18_80135208 *o = (VObj_18_80135208 *)__nw__7TObjectFUl(0xE70);
    if (o != NULL) {
        o = TPacket__ct(o, lbl_805D5E48);
    }
    if (o != NULL) {
        u8 *p = (u8 *)o;
        *(s16 *)(p + 6) = arg0;
        set_ip_address__7TSocketFUl(o, lbl_8050ABB8[arg0].ip);
        *(s16 *)(p + 0x20) = lbl_805D53A0 + 0xFA0;
        *(s16 *)(p + 0x22) = arg0 + 0xFA0;
        s32 v = o->m4();
        TLobby__sub_8013A170(lbl_8043EE30, v, p[0x1C], p[0x1D], p[0x1E], p[0x1F]);
    }
}

void TLobby__sub_80135458(s32 arg0) {
    Stack_80135458 stack;
    stack.sp8 = 0x71;
    stack.sp9 = 1;
    stack.spA = 0;
    bswap_packet_header__6TLobbyFPv(&stack.sp8);
    TLobby__sub_801E44D8((void *) (&stack.sp8), (void *) (arg0));
}

void TLobby__sub_80135598(s32 arg0) {
    Stack_80135598 stack;
    u8 *temp_r3;
    TObjPlayer__sub_801B4FD8((void *) (&stack.sp8));
    temp_r3 = (u8 *)(alloc_buffer__11TOBoss4RockFPv(0x494));
    if (temp_r3 != NULL) {
        TObjPlayer__sub_801B4CE4((void *) (TPlayerBattleCtrl4P__sub_801BA74C((void *) (lbl_805D53A0))), (void *) (temp_r3 + 8));
        M2C_FIELD(temp_r3, s8 *, 0) = 0x70;
        M2C_FIELD(temp_r3, s8 *, 1) = 0;
        M2C_FIELD(temp_r3, s16 *, 2) = (s16) lbl_805D53A0;
        M2C_FIELD(temp_r3, s32 *, 4) = 0x494;
        TLobby__sub_8013A4A8((int) (temp_r3), (void *) (arg0));
        free__11TOBoss4RockFUi((int) (temp_r3));
    }
}

#pragma push
#pragma peephole off
typedef char RecoveredGlobal_8013561C_lbl_805127F8_size[sizeof(RecoveredGlobal_8013561C_lbl_805127F8) == 0x200 ? 1 : -1];
void handle_6x6F_set_quest_flags_v2(s32 arg0) {
    if (((s16) TLobby__data_805D5CE8 == 0) && (((s32) TLobby__data_805D5594 == 0xE) || ((s32) TLobby__data_805D5594 == 0xF))) {
        memcpy((void *) (&(*(RecoveredGlobal_8013561C_lbl_805127F8 *)&lbl_805127F8).value), (void *) (arg0 + 4), (int) (0x200));
    }
}
#pragma pop

void handle_6x6D_sync_game_state(Pkt_8013574C *arg0) {
    s32 len;
    u8 *buf;
    void *tmp;
    if (TLobby__data_805D5CE8 == 0 && (TLobby__data_805D5594 == 0xE || TLobby__data_805D5594 == 0xF)) {
        len = arg0->len - 8;
        TLobby__sub_8013A170(lbl_8043EEA4, arg0->len);
        buf = alloc_buffer__11TOBoss4RockFPv((M2C_UNK)(0x8000));
        if (buf != NULL) {
            tmp = alloc__23TAdSinglePlyChrSelectGCFPv(0x7230);
            if (tmp != NULL) {
                TLobby__sub_8013F810(tmp, arg0->data + 0, len, buf);
                __dl__FPv(tmp);
            }
            TLobby__sub_80103890(buf);
            free__11TOBoss4RockFUi((int)buf);
        }
    }
}

void handle_6x6C_sync_game_state(Pkt_801357F8 *arg0) {
    u32 r;
    u32 *p;
    s32 n;
    s32 i;
    if (TLobby__data_805D5CE8 == 0 && (TLobby__data_805D5594 == 0xE || TLobby__data_805D5594 == 0xF)) {
        n = arg0->len - 8;
        TLobby__sub_8013A170(lbl_8043EEC0, arg0->len);
        p = (u32 *)alloc__23TAdSinglePlyChrSelectGCFPv(0x7230);
        if (p != NULL) {
            r = ((u32)TLobby__sub_8013F810(p, arg0->data, n, TLobby__data_805D6140));
            __dl__FPv(p);
            n = r >> 2;
            p = TLobby__data_805D6140;
            TLobby__data_805D6148 = n;
            for (i = 0; i < n; i++) {
                TLobby__sub_8013A9F4(&p[i]);
            }
        }
    }
}

void handle_6x6B_sync_game_state(Pkt_801358B4 *arg0) {
    u32 r;
    S12_801358B4 *p;
    s32 n;
    s32 i;
    if (TLobby__data_805D5CE8 == 0 && (TLobby__data_805D5594 == 0xE || TLobby__data_805D5594 == 0xF)) {
        n = arg0->len - 8;
        TLobby__sub_8013A170(lbl_8043EEDC, arg0->len);
        p = (S12_801358B4 *)alloc__23TAdSinglePlyChrSelectGCFPv(0x7230);
        if (p != NULL) {
            r = ((u32)TLobby__sub_8013F810(p, arg0->data, n, TLobby__data_805D6144));
            __dl__FPv(p);
            n = r / 12;
            p = TLobby__data_805D6144;
            TLobby__data_805D614C = n;
            for (i = 0; i < n; i++) {
                bswap_6x6B__6TLobbyFPv(&p[i]);
            }
        }
    }
}

void TLobby__sub_80135974(s32 arg0) {
    typedef char sp8_offset[(offsetof(Stack_80135974, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80135974, spC) == 0x4) ? 1 : -1];
    Stack_80135974 stack;
    TLobby__sub_8013A578((void *) (&stack.sp8));
    memcpy((void *) (&stack.spC), (void *) (&lbl_805127F8.value), (int) (0x200));
    bswap_and_handle_packet__6TLobbyFii((void *) (&stack.sp8), (void *) (arg0));
}

void TLobby__sub_80135FFC(void) {  }
void TLobby__sub_80136000(s32 idx, s32 v) {
    Obj_80136000 *p;
    TLobby__data_805D53AC = v;
    p = (Obj_80136000 *)TPlayerBattleCtrl4P__sub_801BA74C((void *)idx);
    if (p) {
        delete p;
        TLobby__sub_8013A170(lbl_8043EF04, idx);
    }
    strncpy(TLobby__data_8050AAE8[idx], TLobby__data_805DB0B0, 0x10);
}

}
