#include "types.h"
#include "pso/misc/TQuadSpriteSclColRot.h"

extern "C" {

void quad_sprite_base_ct(void *);

extern s32 __vt__20TQuadSpriteSclColRot[];

}
TQuadSpriteSclColRot::~TQuadSpriteSclColRot() {

}
extern "C" {

extern void *TQuadSpriteSclColRot__class_name;

void *TQuadSpriteSclColRot__ct(void *quad_sprite_scl_col_rot) {
    quad_sprite_base_ct(quad_sprite_scl_col_rot);
    *(s32 **)((s8 *)quad_sprite_scl_col_rot + 0x18) = __vt__20TQuadSpriteSclColRot;
    *(void * *)&((TQuadSpriteSclColRot *)quad_sprite_scl_col_rot)->m_name = TQuadSpriteSclColRot__class_name;
    return quad_sprite_scl_col_rot;
}

}
