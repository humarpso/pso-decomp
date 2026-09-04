#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TObjCityDoor_Med__create(void *arg0);
void *dt__16TObjCityDoor_MedFPvs(void *arg0, s16 arg1);
s32 is_rader_map_active(void);
s32 TLobby__sub_80182E60();
s32 TLobby__sub_8030A7B0();
void *TObjCityDoor_Med__ct(void *, void *, void *);
void TObjPlayer__sub_80182D24(void *, int);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
s32 is_not_split_screen__13TRaderMapCoreFv();

extern void *tl_05;

void *TObjCityDoor_Med__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xBC);
    if (o != NULL) {
        o = TObjCityDoor_Med__ct(o, tl_05, arg0);
    }
    return o;
}

extern M2C_UNK lbl_804B5A38[];

void *dt__16TObjCityDoor_MedFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B5A38;
        TObjPlayer__sub_80182D24(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

s32 is_rader_map_active(void) {
    s32 temp_r3;

    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        if (TLobby__sub_8030A7B0() == 1) {
            return 0;
        }
        goto block_6;
    }
    temp_r3 = TLobby__sub_80182E60();
    if ((temp_r3 != -1) && (temp_r3 == 1)) {
        return 0;
    }
block_6:
    return 1;
}

}
