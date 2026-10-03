#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Rec_8020C458 { u8 p0[2]; s16 flags; u8 p1[0x44]; };

struct Sub_8020C458 { u8 p0[2]; s16 flags; u8 p1[4]; };

struct Grp_8020C458 { s32 a; s32 count; u8 pad[0xC]; Sub_8020C458 *recs; };

struct Rec_8020C500 { u8 p0[2]; s16 flags; u8 p1[0x40]; };

struct Sub_8020C500 { u8 p0[2]; s16 flags; u8 p1[4]; };

struct Grp_8020C500 { s32 count; u8 pad[0xC]; Sub_8020C500 *recs; u8 pad2[4]; };

extern "C" {
extern Grp_8020C458 TLobby__data_80513AD0[];
extern Rec_8020C458 *TLobby__data_805D6114;
extern s32 TLobby__data_805D6118;
s32 TLobby__sub_8020C458(void);
extern Grp_8020C458 TLobby__data_80513AD0[];
extern Rec_8020C500 *TLobby__data_805D610C;
extern s32 TLobby__data_805D6110;
s32 TLobby__sub_8020C500(void);
}

extern "C" {

s32 mask_sub_flags__9TObjEnemyFPvi(void *arg0, s32 arg1) {
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 0x80);
    if (temp_r5 != NULL) {
        M2C_FIELD(temp_r5, s16 *, 2) = (s16) (M2C_FIELD(temp_r5, s16 *, 2) & arg1);
        return 1;
    }
    return 0;
}

s32 fn_8020C408(void *arg0, s32 arg1) {
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 0x80);
    if (temp_r5 != NULL) {
        M2C_FIELD(temp_r5, s16 *, 2) = (s16) (M2C_FIELD(temp_r5, s16 *, 2) | arg1);
        return 1;
    }
    return 0;
}

s32 mask_object_set_row_flags(void *arg0, s32 arg1) {
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 0x80);
    if (temp_r5 != NULL) {
        M2C_FIELD(temp_r5, s16 *, 2) = (s16) (M2C_FIELD(temp_r5, s16 *, 2) & arg1);
        return 1;
    }
    return 0;
}
s32 TLobby__sub_8020C458(void) {
    s32 i;
    s32 j;
    s32 k;
    if (TLobby__data_805D6114 != NULL) {
        for (i = 0; i < TLobby__data_805D6118; i++) {
            TLobby__data_805D6114[i].flags = 0;
        }
    }
    for (k = 0; k < 0x12; k++) {
        if (TLobby__data_80513AD0[k].recs != NULL) {
            for (j = 0; j < TLobby__data_80513AD0[k].count; j++) {
                TLobby__data_80513AD0[k].recs[j].flags = 0;
            }
        }
    }
    return 1;
}
s32 TLobby__sub_8020C500(void) {
    s32 i;
    s32 j;
    s32 k;
    if (TLobby__data_805D610C != NULL) {
        for (i = 0; i < TLobby__data_805D6110; i++) {
            TLobby__data_805D610C[i].flags = 0;
        }
    }
    for (k = 0; k < 0x12; k++) {
        if (((Grp_8020C500 *)&TLobby__data_80513AD0)[k].recs != NULL) {
            for (j = 0; j < ((Grp_8020C500 *)&TLobby__data_80513AD0)[k].count; j++) {
                ((Grp_8020C500 *)&TLobby__data_80513AD0)[k].recs[j].flags = 0;
            }
        }
    }
    return 1;
}

}
