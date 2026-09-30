#include "types.h"
struct Owner_8012E5A0 { u8 pad[0x60]; s32 f60; };

struct Self_8012E5A0 {
    u8 pad0[0xF0];
    Owner_8012E5A0 *owner;
    u8 padF4[0x1F8 - 0xF4];
    f32 f1FC;
    s32 state;
};

struct Vec_8012E5A0 { f32 x, y, z; };

struct Ang_8012E5A0 { s32 x, y, z; };

extern "C" {
void approach_value__20TItemEffOrgaFlowShotFPvff(void *, f32, f32);
void TObjPlayer__sub_8012E284(s32, void *, s32, void *, void *);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
extern s32 tl_05;
extern const f32 lbl_805DAF7C;
extern const f32 lbl_805DAF84;
extern const f32 lbl_805DAF88;
extern const f32 lbl_805DAF8C;
void TObjPlayer__sub_8012E5A0(Self_8012E5A0 *self);
}

extern "C" {

void TObjPlayer__sub_8012E5A0(Self_8012E5A0 *self) {
    s32 ang;
    Vec_8012E5A0 v;
    Ang_8012E5A0 a;
    if (self->state == 1) {
        approach_value__20TItemEffOrgaFlowShotFPvff(&self->f1FC, lbl_805DAF84, lbl_805DAF88);
        if (lbl_805DAF88 == self->f1FC) {
            self->state = 2;
            ang = self->owner->f60 + 0x4000;
            v.x = TBoss8Dragon__sub_803D64C0(ang);
            v.y = lbl_805DAF7C;
            v.z = TBoss8Dragon__sub_803D64DC(ang);
            a.x = 0x4000;
            a.y = self->owner->f60;
            a.z = 0;
            TObjPlayer__sub_8012E284(tl_05, self, 3, &v, &a);
        }
    } else if (self->state == 2) {
        approach_value__20TItemEffOrgaFlowShotFPvff(&self->f1FC, lbl_805DAF8C, lbl_805DAF7C);
        if (lbl_805DAF7C == self->f1FC) {
            self->state = 0;
        }
    }
}

}
