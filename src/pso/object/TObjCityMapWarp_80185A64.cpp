#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjCityAreaWarp__vt17(void);
void *TObjCityMapWarp__ct(void *arg0);
M2C_UNK play_sound_effect(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void clamp_destination_index__15TObjCityMapWarpFPv(void *);
void TObjMapWarp__ct(void *);

extern M2C_UNK __vt__15TObjCityMapWarp[];
extern void *lbl_805D32B0;
extern const f32 lbl_805DBC8C;
extern const f32 lbl_805DBC90;

void *TObjCityMapWarp__ct(void *arg0) {
    TObjMapWarp__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TObjCityMapWarp;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D32B0;
    clamp_destination_index__15TObjCityMapWarpFPv(arg0);
    M2C_FIELD(arg0, f32 *, 0xAC) = lbl_805DBC8C;
    M2C_FIELD(arg0, f32 *, 0xFC) = lbl_805DBC90;
    return arg0;
}

extern s16 TLobby__data_805D5CE8;

void TObjCityAreaWarp__vt17(void) {
    play_sound_effect(0x40003205, 0, 0, 0);
    TLobby__data_805D5CE8 = 1;
}

}
