#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 TObjPlayer__sub_80126460(void *arg0, s32 arg1, s32 arg2, f32 farg0);
void TObjPlayer__sub_8012650C(void* p);
M2C_UNK TItemShootParticle__sub_8011B704(u32, M2C_UNK, M2C_UNK);
u32 spawn_shoot_particle__10TObjPlayerFUiiif(void *, s32, s32, f32);
u32 TObjPlayer__sub_8011BA54();
int TObjPlayer__sub_80121200(void*);
int TObjPlayer__sub_803D9214(void*, void*);
M2C_UNK set_parent__7TObjectFP7TObject(u32, u32);

u32 TObjPlayer__sub_80126460(void *arg0, s32 arg1, s32 arg2, f32 farg0) {
    u32 temp_r31;
    u32 temp_r30;
    void *temp_r4;

    temp_r31 = TObjPlayer__sub_8011BA54();
    temp_r30 = spawn_shoot_particle__10TObjPlayerFUiiif(arg0, arg1, arg2, farg0);
    if ((temp_r31 != 0U) && (temp_r30 != 0U)) {
        temp_r4 = M2C_FIELD(arg0, void **, 0x188);
        if (temp_r4 != NULL) {
            M2C_FIELD(temp_r4, s32 *, 0) = (s32) (M2C_FIELD(temp_r4, s32 *, 0) & 0xFFFFFFFD);
            M2C_FIELD(temp_r4, s32 *, 0x14) = 0x4000;
        }
        TItemShootParticle__sub_8011B704(temp_r30, 0x1BB, 0);
        set_parent__7TObjectFP7TObject(temp_r30, temp_r31);
    }
    return temp_r31;
}

void TObjPlayer__sub_8012650C(void* p) { if (TObjPlayer__sub_80121200(p) == 1) { TObjPlayer__sub_803D9214((void*)0, *(void**)((char*)p + 0x1f8)); } }

}
