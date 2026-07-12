#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 obj_testFlags30(s32, s32);
s32 check_flag30_bit20__10TObjPlayerFi();
s32 TObjPlayer__sub_801BEAB0(s32);
s32 TObjPlayer__sub_801D0BC0(s32, s32, s32);
void send_object_id_packet__10TObjPlayerFi(s32 arg0);
s32 obj_isState2_324();
s16 obj_getField1c(s32);
M2C_UNK TObjPlayer__sub_801D1CC0(M2C_UNK *);
M2C_UNK TObjPlayer__sub_801D1CD4(M2C_UNK *);
int TFontSmallLobby__sub_801C0228(void*);
void TObjPlayer__sub_801CBB10(void);
void TObjPlayer__sub_801CBB80(void);

void* TObjPlayer__sub_801CBA8C(void* p) { TFontSmallLobby__sub_801C0228(p); return p; }
void send_object_id_packet__10TObjPlayerFi(s32 arg0) {
    s8 sp8[8];

    if ((arg0 == 0) || (obj_isState2_324() == 0)) {
        TObjPlayer__sub_801D1CC0((M2C_UNK *)&sp8);
        M2C_FIELD(&sp8, s16 *, 2) = obj_getField1c(arg0);
        TObjPlayer__sub_801D1CD4((M2C_UNK *)&sp8);
    }
}
void TObjPlayer__sub_801CBB10(void) {  }

}
