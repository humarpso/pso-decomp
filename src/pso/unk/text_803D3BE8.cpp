#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
typedef M2C_UNK (*RecoveredCallback_4873a87e26d6)(s32, M2C_UNK *, M2C_UNK);
struct RecoveredGlobal_803CFEA0_lbl_8047DAE4 {
    M2C_UNK value;
    u8 remaining[0x14];
};

typedef s32 M2C_UNK;
struct File_803D3FCC { u8 used; u8 open; u8 pad[0x36]; };

struct File_803D3EE4 { u8 pad[0xC]; s32 len; s32 pos; };

extern "C" {
extern RecoveredGlobal_803CFEA0_lbl_8047DAE4 lbl_8047E170;
extern s32 lbl_805D767C;
extern RecoveredCallback_4873a87e26d6 lbl_805D7678;
s32 TLobby__sub_803D3E90(u8 *arg0);
void TLobby__sub_803D3988(void);
void TLobby__sub_803D39C0(void);
M2C_UNK memset(void *, int, int);
extern M2C_UNK lbl_8047E0C8[];
extern RecoveredCallback_4873a87e26d6 lbl_805D7678;
extern s32 lbl_805D767C;
void TLobby__sub_803D3FCC(File_803D3FCC *arg0);
void TLobby__sub_803D3988(void);
void TLobby__sub_803D39C0(void);
extern M2C_UNK lbl_8047E18C[];
extern RecoveredCallback_4873a87e26d6 lbl_805D7678;
extern s32 lbl_805D767C;
s32 TLobby__sub_803D3EE4(File_803D3EE4 *arg0, s32 arg1, s32 arg2);
unsigned long strlen(const char *);
int sprintf(char *, const char *, ...);
unsigned long strtoul(const char *, char **, int);
extern char lbl_8058B6F0[];
extern char lbl_8047E04C[];
extern char lbl_8047E08C[];
extern RecoveredCallback_4873a87e26d6 lbl_805D7678;
extern s32 lbl_805D767C;
u32 TLobby__sub_803D4290(char *s);
}

extern "C" {

typedef char RecoveredGlobal_803CFEA0_lbl_8047DAE4_size[sizeof(RecoveredGlobal_803CFEA0_lbl_8047DAE4) == 0x18 ? 1 : -1];
s32 TLobby__sub_803D3E90(u8 *arg0) {
    if (arg0 == NULL) {
        if (((M2C_UNK (*)(s32, M2C_UNK *, M2C_UNK)) lbl_805D7678) != NULL) {
            lbl_805D7678(lbl_805D767C, &lbl_8047E170.value, 0);
        }
        return 0;
    }
    return M2C_FIELD(arg0, s32 *, 0x10);
}

s32 TLobby__sub_803D3EE4(File_803D3EE4 *arg0, s32 arg1, s32 arg2) {
    if (arg0 == 0) {
        if (lbl_805D7678 != 0) {
            lbl_805D7678(lbl_805D767C, lbl_8047E18C, 0);
        }
        return 0;
    }
    TLobby__sub_803D39C0();
    if (arg2 == 0) {
        arg0->pos = arg1;
    } else if (arg2 == 2) {
        arg0->pos = arg0->len + arg1;
    } else if (arg2 == 1) {
        arg0->pos += arg1;
    }
    arg0->pos = arg0->pos < arg0->len ? arg0->pos : arg0->len;
    arg0->pos = arg0->pos > 0 ? arg0->pos : 0;
    TLobby__sub_803D3988();
    return arg0->pos;
}

void TLobby__sub_803D3FCC(File_803D3FCC *arg0) {
    if (arg0 != 0) {
        if (arg0 == 0) {
            if (lbl_805D7678 != 0) {
                lbl_805D7678(lbl_805D767C, lbl_8047E0C8, 0);
            }
        } else {
            TLobby__sub_803D39C0();
            arg0->open = 0;
            TLobby__sub_803D3988();
        }
        if ((s32)arg0->used == 1) {
            arg0->used = 0;
            memset(arg0, 0, sizeof(File_803D3FCC));
        }
    }
}
#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
inline void parse_803D4290(char *s, u32 *hi, u32 *lo) {
    char *end;
    u32 v;
    end = s;
    v = strtoul(s, &end, 16);
    if (hi != 0) {
        *hi = v;
    }
    if (*end != 0) {
        end++;
    }
    if (lo != 0) {
        *lo = strtoul(end, &end, 16);
    }
}
u32 TLobby__sub_803D4290(char *s) {
    u32 lo;
    if (strlen(s) != 17) {
        sprintf(lbl_8058B6F0, lbl_8047E04C, s);
        if (lbl_805D7678 != 0) {
            lbl_805D7678(lbl_805D767C, (M2C_UNK *)lbl_8058B6F0, 0);
        }
    }
    if (s[8] != '.') {
        sprintf(lbl_8058B6F0, lbl_8047E08C, s);
        if (lbl_805D7678 != 0) {
            lbl_805D7678(lbl_805D767C, (M2C_UNK *)lbl_8058B6F0, 0);
        }
    }
    parse_803D4290(s, 0, &lo);
    return lo;
}
#pragma pop

}
