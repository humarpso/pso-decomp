#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8024259C_TLobby__data_8050AAAC {
    M2C_UNK value;
    u8 remaining[0x24];
};

typedef struct Tag_802421C4 { s32 a; s32 b; } Tag_802421C4;

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Pair_80242380 {
    u8 c[8];
};

struct Ext_80242380 {
    u8 bytes[0x64];
};

typedef struct Entry_80242380 {
    s32 id;
    s32 f4;
    char name[0x11];
    char s19[0x11];
    char s2A[0x11];
    char s3B[0x11];
    Pair_80242380 f4C;
    s32 f54;
    Ext_80242380 ext;
} Entry_80242380;

extern "C" {
M2C_UNK seq_jump__9TProtocolFPUcR21TPlyMeetUserExtension(int, void *, void *);
M2C_UNK strncpy(void *, void *, int);
M2C_UNK memset(void *, int, int);
extern RecoveredGlobal_8024259C_TLobby__data_8050AAAC TLobby__data_8050AAAC;
extern u32 TLobby__data_805D5580;
void TLobby__sub_8024259C(s32 arg0);
char *TLobby__sub_802424A4(char *s, s32 a, s32 b);
char *get_shared_text_buffer();
void TWindowSubStatusDisp__sub_80228D4C();
void text_builder_append(char *);
void text_builder_reset();
char *TLobby__sub_802424A4(char *s, s32 a, s32 b);
char *build_text_from_comma_list__6TLobbyFPv(char *list);
s32 send_find_user__9TProtocolFR16TPlyGuildCardTagUl(void *, Tag_802421C4 *, s32);
extern u32 TLobby__data_805D5580;
void send_find_user_self_tag__6TLobbyFi(s32 arg0);
void* get_com_card_entry__6TLobbyFi(int a0);
u32 TLobby__sub_802428F8(void);
s32 get_com_card_data__6TLobbyFv(void);
extern u8 lbl_80517EE0[];
void find_and_load_com_card__6TLobbyFUi(u32 arg0);
void __copy(void *, void *, int);
Entry_80242380 *copy_com_card_entry__6TLobbyFPvPv(Entry_80242380 *dst, Entry_80242380 *src);
char *TLobby__sub_80242458(char *src, char *dst);
}

extern "C" {

void *TLobby__sub_80242148(void *arg0, s16 arg1);
void TLobby__sub_8024218C(void* p);
void TLobby__sub_802422EC(void *arg0, void *arg1);
int forward_8024273C__6TLobbyFPv(void* p);
void* get_com_card_entry__6TLobbyFi(int a0);
s32 get_field_308__6TLobbyFPv(void* p);
int TLobby__sub_8024273C(void*);
s32 __dl__FPv(void *);

void *TLobby__sub_80242148(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 4) = 0;
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}
void TLobby__sub_8024218C(void* p) { *(s32*)((char*)p + 0x0) = 0; *(s32*)((char*)p + 0x4) = 0; }
s32 get_field_308__6TLobbyFPv(void* p) { return *(s32*)((char*)p + 0x308); }
int forward_8024273C__6TLobbyFPv(void* p) { return TLobby__sub_8024273C(p); }

void send_find_user_self_tag__6TLobbyFi(s32 arg0) {
    if ((u32) TLobby__data_805D5580 != 0U) {
        Tag_802421C4 tag = *(Tag_802421C4 *)((u8 *)TLobby__data_805D5580 + 0x1900);
        send_find_user__9TProtocolFR16TPlyGuildCardTagUl((void *)TLobby__data_805D5580, &tag, arg0);
    }
}

void TLobby__sub_802422EC(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s16 *, 8) = (s16) M2C_FIELD(arg1, s16 *, 8);
}

    extern unsigned char lbl_80517F9C[];

void find_and_load_com_card__6TLobbyFUi(u32 arg0) {
    s32 n;
    s32 i;
    n = get_com_card_data__6TLobbyFv();
    for (i = 0; i < n; i++) {
        get_com_card_entry__6TLobbyFi(i);
        if (arg0 == TLobby__sub_802428F8()) break;
    }
    if (i < n) {
        copy_com_card_entry__6TLobbyFPvPv((Entry_80242380 *)(lbl_80517EE0), (Entry_80242380 *)(get_com_card_entry__6TLobbyFi(i)));
    }
}

Entry_80242380 *copy_com_card_entry__6TLobbyFPvPv(Entry_80242380 *dst, Entry_80242380 *src) {
    dst->id = src->id;
    dst->f4 = src->f4;
    __copy(dst->name, src->name, 0x11);
    __copy(dst->s19, src->s19, 0x11);
    __copy(dst->s2A, src->s2A, 0x11);
    __copy(dst->s3B, src->s3B, 0x11);
    *(Pair_80242380 *)&dst->f4C = *(const Pair_80242380 *)&src->f4C;
    dst->f54 = src->f54;
    *(Ext_80242380 *)&dst->ext = *(const Ext_80242380 *)&src->ext;
    return dst;
}

void* get_com_card_entry__6TLobbyFi(int a0) {  return (char*)lbl_80517F9C + a0 * 188; }
typedef char RecoveredGlobal_8024259C_TLobby__data_8050AAAC_size[sizeof(RecoveredGlobal_8024259C_TLobby__data_8050AAAC) == 0x28 ? 1 : -1];

char *TLobby__sub_80242458(char *src, char *dst) {
    s32 i;
    for (i = 0x10; i != 0; i--) {
        char c = *src;
        if (c == 0) break;
        src++;
        if (c == ',') break;
        *dst = c;
        dst++;
    }
    if (*src == ',') {
        src++;
    }
    *dst = 0;
    return src;
}

char *TLobby__sub_802424A4(char *s, s32 a, s32 b) {
    s32 i;
    for (i = a + 1; i < b;) {
        if (*s == '\0') return s;
        if (*s++ == ',') i++;
    }
    return s;
}

char *build_text_from_comma_list__6TLobbyFPv(char *list) {
    char buf[0x11];
    char *s;
    char *d;
    s32 i;
    s32 count;
    text_builder_reset();
    s = list;
    count = 1;
    while (*s != '\0') {
        if (*s++ == ',') {
            count++;
        }
    }
    for (i = 0; i < count; i++) {
        TWindowSubStatusDisp__sub_80228D4C();
        s = TLobby__sub_802424A4(list, i, count);
        d = buf;
        while (*s != '\0' && *s != ',') {
            *d++ = *s++;
        }
        *d = '\0';
        text_builder_append(buf);
    }
    return get_shared_text_buffer();
}

void TLobby__sub_8024259C(s32 arg0) {
    if ((u32) TLobby__data_805D5580 != 0U) {
        memset((void *) (&TLobby__data_8050AAAC.value), (int) (0), (int) (0x11));
        strncpy((void *) (&TLobby__data_8050AAAC.value), (void *) (arg0 + 0x19), (int) (0x10));
        M2C_FIELD(&TLobby__data_8050AAAC.value, s8 *, 0x10) = 0;
        seq_jump__9TProtocolFPUcR21TPlyMeetUserExtension((int) (TLobby__data_805D5580), (void *) (arg0 + 0x4C), (void *) (arg0 + 0x58));
    }
}

}
