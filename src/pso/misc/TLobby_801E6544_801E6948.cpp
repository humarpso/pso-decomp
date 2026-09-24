#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
int sprintf(char *, const char *, ...);
void append_string(s32 arg0);
extern s32 *TLobby__data_805D5E78;
extern char lbl_805DC4B4[4];
void TLobby__sub_801E6AA0(s32 arg0);
int sprintf(char *, const char *, ...);
void append_string(s32 arg0);
extern char lbl_80449C90[];
void TLobby__sub_801E6AE0(void);
int sprintf(char *, const char *, ...);
void append_string(s32 arg0);
extern s32 *TLobby__data_805D5E78;
extern char lbl_805DC4B0[4];
void TLobby__sub_801E6A60(s32 arg0);
}

extern "C" {

u8 TLobby__sub_801E6BB8(void);
void append_string(s32 arg0);
s32 parse_r_index(s32 arg0);
u8 read_byte_advance__6TLobbyFv(void);
M2C_UNK TAdEnterSerialAccessGC__sub_8039C8A0(M2C_UNK, M2C_UNK *, s32 *, ...);
M2C_UNK strcpy(s32, s32);
s32 strlen();

extern M2C_UNK lbl_805DC4A8;

s32 parse_r_index(s32 arg0) {
    s32 sp8;

    sp8 = -1;
    TAdEnterSerialAccessGC__sub_8039C8A0(arg0, &lbl_805DC4A8, &sp8);
    if ((sp8 < 0x100) && (sp8 >= 0)) {
        return sp8;
    }
    return -1;
}

extern u8 *TLobby__data_805D5ED0;

void TLobby__sub_801E6A60(s32 arg0) {
    char buf[64];
    sprintf(buf, lbl_805DC4B0, ((f32 *)TLobby__data_805D5E78)[arg0]);
    append_string((s32)buf);
}

void TLobby__sub_801E6AA0(s32 arg0) {
    char buf[64];
    sprintf(buf, lbl_805DC4B4, TLobby__data_805D5E78[arg0]);
    append_string((s32)buf);
}

void TLobby__sub_801E6AE0(void) {
    char buf[64];
    sprintf(buf, lbl_80449C90, 1, 12);
    append_string((s32)buf);
}

u8 TLobby__sub_801E6BB8(void) {
    return (u8) ((s8) *TLobby__data_805D5ED0 == 0);
}

extern u8 *TLobby__data_805D5ED0;

u8 read_byte_advance__6TLobbyFv(void) {
    u8 *temp_r3;

    temp_r3 = TLobby__data_805D5ED0;
    TLobby__data_805D5ED0 = temp_r3 + 1;
    return *temp_r3;
}

extern s32 lbl_805D5ED4;

void append_string(s32 arg0) {
    s32 temp_r31;

    temp_r31 = strlen();
    strcpy(lbl_805D5ED4, arg0);
    lbl_805D5ED4 += temp_r31;
}

}
