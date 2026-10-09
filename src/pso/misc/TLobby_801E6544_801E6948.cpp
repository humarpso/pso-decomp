#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Ctrl_801E6B20 { u8 pad[0x890]; s32 type; };

struct VBase_18_f23ffb { char pad[0x18]; };

struct VObj_18_f23ffb : VBase_18_f23ffb {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual M2C_UNK m10();
};

extern "C" {
int sprintf(char *, const char *, ...);
void append_string(s32 arg0);
extern s32 *TLobby__script_reg_array;
extern char lbl_805DC4B4[4];
void append_int_param__6TLobbyFi(s32 arg0);
int sprintf(char *, const char *, ...);
void append_string(s32 arg0);
extern char lbl_80449C90[];
void TLobby__sub_801E6AE0(void);
int sprintf(char *, const char *, ...);
void append_string(s32 arg0);
extern s32 *TLobby__script_reg_array;
extern char lbl_805DC4B0[4];
void append_float_value__6TLobbyFi(s32 arg0);
int sprintf(char *, const char *, ...);
void append_string(s32 arg0);
s32 TObjItemOKWindow__sub_801F3268();
s32 fn_801F4C98();
extern char lbl_80449C88[];
void TLobby__sub_801E6A04(void);
s32 select_download_type__6TLobbyFi(s32);
u32 get_player_by_client_id(s32);
void append_string(s32 arg0);
extern char lbl_80449C9C[];
extern s32 lbl_805D53A0;
void append_hero_class_name(void);
u32 get_player_by_client_id(s32);
void append_string(s32 arg0);
extern char lbl_80449CA8[];
extern s32 lbl_805D53A0;
void append_hero_name(void);
s32 is_split_screen();
char *TLobby__sub_800713C8();
void append_string(s32 arg0);
char *TLobby__sub_80291D4C();
int sprintf(char *, const char *, ...);
extern char lbl_805DC4AC[3];
void TLobby__sub_801E6998(void);
}

extern "C" {

u8 TLobby__sub_801E6BB8(void);
void append_string(s32 arg0);
s32 parse_r_index(s32 arg0);
u8 read_byte_advance__6TLobbyFv(void);
M2C_UNK sscanf(M2C_UNK, M2C_UNK *, s32 *, ...);
M2C_UNK strcpy(s32, s32);
s32 strlen();

extern M2C_UNK lbl_805DC4A8;

s32 parse_r_index(s32 arg0) {
    s32 sp8;

    sp8 = -1;
    sscanf(arg0, &lbl_805DC4A8, &sp8);
    if ((sp8 < 0x100) && (sp8 >= 0)) {
        return sp8;
    }
    return -1;
}

extern u8 *TLobby__data_805D5ED0;

void TLobby__sub_801E6998(void) {
    char buf[0x40];
    if (is_split_screen() == 1) {
        sprintf(buf, lbl_805DC4AC, TLobby__sub_80291D4C());
    } else {
        sprintf(buf, lbl_805DC4AC, TLobby__sub_800713C8());
    }
    buf[0x3F] = 0;
    append_string((s32)buf);
}

void TLobby__sub_801E6A04(void) {
    char buf[64];
    s32 t = fn_801F4C98();
    sprintf(buf, lbl_80449C88, TObjItemOKWindow__sub_801F3268(), t);
    buf[63] = 0;
    append_string((s32)buf);
}

void append_float_value__6TLobbyFi(s32 arg0) {
    char buf[64];
    sprintf(buf, lbl_805DC4B0, ((f32 *)TLobby__script_reg_array)[arg0]);
    append_string((s32)buf);
}

void append_int_param__6TLobbyFi(s32 arg0) {
    char buf[64];
    sprintf(buf, lbl_805DC4B4, TLobby__script_reg_array[arg0]);
    append_string((s32)buf);
}

void TLobby__sub_801E6AE0(void) {
    char buf[64];
    sprintf(buf, lbl_80449C90, 1, 12);
    append_string((s32)buf);
}

void append_hero_class_name(void) {
    Ctrl_801E6B20 *c = (Ctrl_801E6B20 *)get_player_by_client_id(lbl_805D53A0);
    if (c != NULL) {
        append_string(select_download_type__6TLobbyFi(c->type));
    } else {
        append_string((s32)lbl_80449C9C);
    }
}

void append_hero_name(void) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(get_player_by_client_id(lbl_805D53A0));
    if (temp_r3 != NULL) {
        append_string(((VObj_18_f23ffb *)(temp_r3))->m10());
    } else {
        append_string((s32)lbl_80449CA8);
    }
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
