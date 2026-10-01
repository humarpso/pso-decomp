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
typedef M2C_UNK (*RecoveredCallback_803D0014)(s32, M2C_UNK *, M2C_UNK);
struct S_803D0014 { u8 pad[2]; s8 f; };

struct G_803D0014 { M2C_UNK value; u8 remaining[0x14]; };

struct File_803D0654 {
    u8 pad[0x18];
    s32 size;
    s32 pos;
};

struct DVDFileInfo_803D0AE8 {
    u8 pad[0x34];
    u32 length;
    u8 pad38[4];
};

extern "C" {
extern RecoveredGlobal_803CFEA0_lbl_8047DAE4 lbl_8047DAE4;
extern s32 lbl_805D7608;
extern RecoveredCallback_4873a87e26d6 lbl_805D760C;
s32 TLobby__sub_803CFEA0(u8 *arg0);
extern RecoveredGlobal_803CFEA0_lbl_8047DAE4 lbl_8047DB30;
extern s32 lbl_805D7608;
extern RecoveredCallback_4873a87e26d6 lbl_805D760C;
s32 TLobby__sub_803CFFC0(u8 *arg0);
extern RecoveredGlobal_803CFEA0_lbl_8047DAE4 lbl_8047DAE4;
extern s32 lbl_805D7608;
extern RecoveredCallback_4873a87e26d6 lbl_805D760C;
s32 TLobby__sub_803D0600(u8 *arg0);
extern RecoveredGlobal_803CFEA0_lbl_8047DAE4 lbl_8047DAE4;
extern s32 lbl_805D7608;
extern RecoveredCallback_4873a87e26d6 lbl_805D760C;
s32 TLobby__sub_803D0014(S_803D0014 *arg0);
extern RecoveredGlobal_803CFEA0_lbl_8047DAE4 lbl_8047DAE4;
extern s32 lbl_805D7608;
extern RecoveredCallback_4873a87e26d6 lbl_805D760C;
s32 TLobby__sub_803D0654(struct File_803D0654 *arg0, s32 arg1, s32 arg2);
s32 DVDOpen(const char *, DVDFileInfo_803D0AE8 *);
s32 DVDClose(DVDFileInfo_803D0AE8 *);
char *strcat(char *, const char *);
char *strcpy(char *, const char *);
u32 strlen(const char *);
extern char lbl_8047DAB8[];
extern char lbl_80582E58[];
extern s32 lbl_805D7608;
extern RecoveredCallback_4873a87e26d6 lbl_805D760C;
s32 TLobby__sub_803D0AE8(const char *name);
}

extern "C" {

typedef char RecoveredGlobal_803CFEA0_lbl_8047DAE4_size[sizeof(RecoveredGlobal_803CFEA0_lbl_8047DAE4) == 0x18 ? 1 : -1];
s32 TLobby__sub_803CFEA0(u8 *arg0) {
    if (arg0 == NULL) {
        if (((M2C_UNK (*)(s32, M2C_UNK *, M2C_UNK)) lbl_805D760C) != NULL) {
            lbl_805D760C(lbl_805D7608, &lbl_8047DAE4.value, 0);
        }
        return 0;
    }
    return M2C_FIELD(arg0, s32 *, 0x20);
}
s32 TLobby__sub_803CFFC0(u8 *arg0) {
    if (arg0 == NULL) {
        if (((M2C_UNK (*)(s32, M2C_UNK *, M2C_UNK)) lbl_805D760C) != NULL) {
            lbl_805D760C(lbl_805D7608, &lbl_8047DB30.value, 0);
        }
        return 0;
    }
    return M2C_FIELD(arg0, s32 *, 0x10);
}

s32 TLobby__sub_803D0014(S_803D0014 *arg0) {
    if (arg0 == 0) {
        if ((*(RecoveredCallback_803D0014 *)&lbl_805D760C) != 0) {
            (*(RecoveredCallback_803D0014 *)&lbl_805D760C)(lbl_805D7608, &(*(G_803D0014 *)&lbl_8047DAE4).value, 0);
        }
        return 0;
    }
    return arg0->f;
}

s32 TLobby__sub_803D0600(u8 *arg0) {
    if (arg0 == NULL) {
        if (((M2C_UNK (*)(s32, M2C_UNK *, M2C_UNK)) lbl_805D760C) != NULL) {
            lbl_805D760C(lbl_805D7608, &lbl_8047DAE4.value, 0);
        }
        return 0;
    }
    return M2C_FIELD(arg0, s32 *, 0x1c);
}
s32 TLobby__sub_803D0654(struct File_803D0654 *arg0, s32 arg1, s32 arg2) {
    if (arg0 == NULL) {
        if (lbl_805D760C != NULL) {
            lbl_805D760C(lbl_805D7608, ((M2C_UNK *)&lbl_8047DAE4), 0);
        }
        return 0;
    }
    if (arg2 == 0) {
        arg0->pos = arg1;
    } else if (arg2 == 2) {
        arg0->pos = arg0->size + arg1;
    } else if (arg2 == 1) {
        arg0->pos = arg0->pos + arg1;
    }
    arg0->pos = (arg0->pos < arg0->size) ? arg0->pos : arg0->size;
    arg0->pos = (arg0->pos > 0) ? arg0->pos : 0;
    return arg0->pos;
}
typedef s32 (*RecoveredCallback_4873a87e26d6)(s32, s32 *, s32);
s32 TLobby__sub_803D0AE8(const char *name) {
    char *msg = lbl_8047DAB8;
    s32 size;
    u32 len;
    u32 i;
    DVDFileInfo_803D0AE8 info;
    char path[0x100];
    if (name == NULL) {
        if (lbl_805D760C != NULL) {
            lbl_805D760C(lbl_805D7608, (s32 *)(msg + 0x1AC), 0);
        }
        return 0;
    }
    strcpy(path, lbl_80582E58);
    strcat(path, name);
    len = strlen(path);
    for (i = 0; i < len; i++) {
        if (path[i] == '\\') {
            path[i] = '/';
        }
    }
    if (DVDOpen(path, &info) == 0) {
        if (lbl_805D760C != NULL) {
            lbl_805D760C(lbl_805D7608, (s32 *)(msg + 0x1D8), 0);
        }
        return 0;
    }
    size = info.length;
    if (size & 0x80000000) {
        size = 0x7FFFFFFF;
    }
    if (DVDClose(&info) == 0) {
        if (lbl_805D760C != NULL) {
            lbl_805D760C(lbl_805D7608, (s32 *)(msg + 0x208), 0);
        }
        return 0;
    }
    return size;
}

}
