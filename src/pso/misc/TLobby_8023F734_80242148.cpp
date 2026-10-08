#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8024259C_TLobby__data_8050AAAC {
    M2C_UNK value;
    u8 remaining[0x24];
};

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

void TLobby__sub_802422EC(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s16 *, 8) = (s16) M2C_FIELD(arg1, s16 *, 8);
}

    extern unsigned char lbl_80517F9C[];
void* get_com_card_entry__6TLobbyFi(int a0) {  return (char*)lbl_80517F9C + a0 * 188; }
typedef char RecoveredGlobal_8024259C_TLobby__data_8050AAAC_size[sizeof(RecoveredGlobal_8024259C_TLobby__data_8050AAAC) == 0x28 ? 1 : -1];

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
