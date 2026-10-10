#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TQuadSpriteSclColRot__ct(void *arg0);
void *__dt__20TQuadSpriteSclColRotFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_quad_sprite_base(void *, int);
void quad_sprite_base_ct(void *);

extern M2C_UNK __vt__20TQuadSpriteSclColRot[];

void *__dt__20TQuadSpriteSclColRotFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TQuadSpriteSclColRot;
        destroy_quad_sprite_base(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__20TQuadSpriteSclColRot[];
extern void *TQuadSpriteSclColRot__class_name;

void *TQuadSpriteSclColRot__ct(void *arg0) {
    quad_sprite_base_ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TQuadSpriteSclColRot;
    M2C_FIELD(arg0, void **, 0x0) = TQuadSpriteSclColRot__class_name;
    return arg0;
}

}
