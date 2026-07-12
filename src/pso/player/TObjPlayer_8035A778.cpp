#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_8035A778(void *arg0, s32 arg1, f32 farg0);
M2C_UNK TBoss8Dragon__sub_801E3CFC(s32, s32, f32);
M2C_UNK TObjEneRe7Berura__sub_803E4CE0(M2C_UNK *);

extern M2C_UNK process_callback_list__10TObjPlayerFi[];
extern s32 lbl_805D6F30;
extern s32 lbl_805D6F34;
extern s32 lbl_805D6F38;
extern s32 lbl_805D6F3C;

void TObjPlayer__sub_8035A778(void *arg0, s32 arg1, f32 farg0) {
    M2C_FIELD(arg0, s32 *, 0x20) = arg1;
    M2C_FIELD(arg0, f32 *, 0x24) = farg0;
    lbl_805D6F30 = 0;
    lbl_805D6F34 = M2C_FIELD(arg0, s32 *, 0x2C);
    lbl_805D6F38 = M2C_FIELD(arg0, s32 *, 0x28);
    lbl_805D6F3C = M2C_FIELD(arg0, s32 *, 0x38);
    TObjEneRe7Berura__sub_803E4CE0(process_callback_list__10TObjPlayerFi);
    TBoss8Dragon__sub_801E3CFC(M2C_FIELD(arg0, s32 *, 0x1C), arg1, farg0);
    TObjEneRe7Berura__sub_803E4CE0(NULL);
}

}
