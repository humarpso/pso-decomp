#include "types.h"

extern "C" {

void *TQuadSpriteSclColRot__ct(void *arg0);
void *__dt__20TQuadSpriteSclColRotFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_quad_sprite_base(void *, int);
void quad_sprite_base_ct(void *);

extern s32 __vt__20TQuadSpriteSclColRot[];

void *__dt__20TQuadSpriteSclColRotFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__20TQuadSpriteSclColRot;
        destroy_quad_sprite_base(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 __vt__20TQuadSpriteSclColRot[];
extern void *TQuadSpriteSclColRot__class_name;

void *TQuadSpriteSclColRot__ct(void *arg0) {
    quad_sprite_base_ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__20TQuadSpriteSclColRot;
    *(void **)((s8 *)arg0 + 0x0) = TQuadSpriteSclColRot__class_name;
    return arg0;
}

}
