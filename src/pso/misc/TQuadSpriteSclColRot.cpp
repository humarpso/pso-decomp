#include "types.h"
#include "pso/misc/TQuadSpriteSclColRot.h"

extern "C" {

void *TQuadSpriteSclColRot__ct(void *arg0);
void quad_sprite_base_ct(void *);

extern s32 __vt__20TQuadSpriteSclColRot[];

}
TQuadSpriteSclColRot::~TQuadSpriteSclColRot() {

}
extern "C" {

extern void *TQuadSpriteSclColRot__class_name;

void *TQuadSpriteSclColRot__ct(void *arg0) {
    quad_sprite_base_ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__20TQuadSpriteSclColRot;
    *(void **)((s8 *)arg0 + 0x0) = TQuadSpriteSclColRot__class_name;
    return arg0;
}

}
