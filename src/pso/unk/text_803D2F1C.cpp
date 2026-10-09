#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_8 { u8 bytes[0x8]; };

typedef struct Buf_803D2F1C { u8 *data; s32 size; } Buf_803D2F1C;

extern "C" {
void TLobby__sub_803D3130(s32 arg0, s32 arg1, u8 *arg2, u8 *arg3);
int strncmp(const char *, const char *, u32);
extern u32 lbl_804F9E60[];
u8 *find_archive_entry__6TLobbyFPvPvPvPv(Buf_803D2F1C *arc, const char *name, const char *stop, Buf_803D2F1C *out);
}

extern "C" {

#define HEX_803D2F1C(p, i) lbl_804F9E60[(s8)(p)[i]]
#define SIZE_803D2F1C(p) ((((((((((((HEX_803D2F1C(p, 8) << 4) + HEX_803D2F1C(p, 9)) << 4) + HEX_803D2F1C(p, 10)) << 4) + HEX_803D2F1C(p, 11)) << 4) + HEX_803D2F1C(p, 12)) << 4) + HEX_803D2F1C(p, 13)) << 4) + HEX_803D2F1C(p, 14))
#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
inline s32 size_803D2F1C(u8 *p) {
    s32 v = HEX_803D2F1C(p, 8);
    v = (v << 4) + HEX_803D2F1C(p, 9);
    v = (v << 4) + HEX_803D2F1C(p, 10);
    v = (v << 4) + HEX_803D2F1C(p, 11);
    v = (v << 4) + HEX_803D2F1C(p, 12);
    v = (v << 4) + HEX_803D2F1C(p, 13);
    v = (v << 4) + HEX_803D2F1C(p, 14);
    return v;
}
u8 *find_archive_entry__6TLobbyFPvPvPvPv(Buf_803D2F1C *arc, const char *name, const char *stop, Buf_803D2F1C *out) {
    u8 *p;
    u8 *end;
    out->data = NULL;
    out->size = 0;
    p = arc->data;
    end = arc->data + arc->size;
    while (p < end) {
        if (strncmp((char *)p, name, 7) == 0) {
            out->data = p + 0x10;
            out->size = size_803D2F1C(p);
            break;
        }
        if (stop != NULL && strncmp((char *)p, stop, 7) == 0) {
            return NULL;
        }
        p += size_803D2F1C(p) + 0x10;
    }
    if (p < end) {
        return p;
    }
    return NULL;
}
#pragma pop

#pragma push
#pragma scheduling off
void TLobby__sub_803D3130(s32 arg0, s32 arg1, u8 *arg2, u8 *arg3) {
    *(M2CCopy_8 *)(arg2) = *(const M2CCopy_8 *)(arg0);
    M2C_FIELD(arg3, s32 *, 4) = (s32) M2C_FIELD(arg2, s32 *, 4);
    if ((s32) M2C_FIELD(arg2, s32 *, 4) > arg1) {
        M2C_FIELD(arg2, s32 *, 4) = arg1;
    }
    M2C_FIELD(arg3, s32 *, 4) = (s32) (M2C_FIELD(arg3, s32 *, 4) - M2C_FIELD(arg2, s32 *, 4));
    if ((s32) M2C_FIELD(arg3, s32 *, 4) == 0) {
        M2C_FIELD(arg3, s32 *, 0) = 0;
        return;
    }
    M2C_FIELD(arg3, s32 *, 0) = (s32) (M2C_FIELD(arg2, s32 *, 0) + M2C_FIELD(arg2, s32 *, 4));
}
#pragma pop

}
