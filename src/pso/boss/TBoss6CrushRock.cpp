#include "pso/TBoss6CrushRock.h"

TBoss6CrushRock::~TBoss6CrushRock() {}

#include "types.h"

struct RecoveredGlobal_8035A1A4___vt__15TBoss6CrushRock {
    s32 value;
    u8 remaining[0x14];
};

struct Vec_8035A460 { f32 x, y, z; };

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 get_bml_model(int, void *);
s32 __ct__7TObjectFP7TObject(void *, void *);
s32 TBoss6Rock__sub_80353A04();
s32 TBoss6Rock__sub_80353A0C();
s32 rand();
extern RecoveredGlobal_8035A1A4___vt__15TBoss6CrushRock __vt__15TBoss6CrushRock;
extern s32 TBoss6CrushRock__name;
extern const f32 lbl_805E00C8;
extern const f32 lbl_805E00CC;
extern const f32 lbl_805E00D0;
extern const f32 lbl_805E00D4;
u8 *__ct__15TBoss6CrushRockFv(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void *__nw__7TObjectFUl(int);
void *create__15TBoss6CrushPtclFPv(void *arg0);
s32 is_falz_alive__15TBoss6CrushRockFv(void);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
extern s32 tl_02;
extern const f32 lbl_805E00D8;
extern const f32 lbl_805E00DC;
extern const f32 lbl_805E00E0;
}

extern "C" {

s32 get_hp__14TBoss6PlotFalzFv(void);

extern s32 TBoss6PlotFalz__instance;

#pragma push
#pragma opt_common_subs off
#pragma fp_contract on
typedef char RecoveredGlobal_8035A1A4___vt__15TBoss6CrushRock_size[sizeof(RecoveredGlobal_8035A1A4___vt__15TBoss6CrushRock) == 0x18 ? 1 : -1];
u8 *__ct__15TBoss6CrushRockFv(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg1));
    *(s32 **)((s8 *)arg0 + 0x18) = &__vt__15TBoss6CrushRock.value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TBoss6CrushRock__name;
    *(s32 *)((s8 *)arg0 + 0x1C) = get_bml_model((int) (TBoss6Rock__sub_80353A0C()), (void *) (arg3));
    *(s32 *)((s8 *)arg0 + 0x20) = TBoss6Rock__sub_80353A04();
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x24), (void *) (arg2));
    *(f32 *)((s8 *)arg0 + 0x30) = (f32) (lbl_805E00C8 * ((lbl_805E00CC * (f32) rand()) - lbl_805E00C8));
    *(f32 *)((s8 *)arg0 + 0x34) = (f32) (lbl_805E00C8 * ((lbl_805E00CC * (f32) rand()) - lbl_805E00C8));
    *(f32 *)((s8 *)arg0 + 0x38) = (f32) (lbl_805E00C8 * ((lbl_805E00CC * (f32) rand()) - lbl_805E00C8));
    *(s32 *)((s8 *)arg0 + 0x3C) = (s32) (lbl_805E00D0 * (lbl_805E00CC * (f32) rand()));
    *(s32 *)((s8 *)arg0 + 0x40) = (s32) (lbl_805E00D0 * (lbl_805E00CC * (f32) rand()));
    *(s32 *)((s8 *)arg0 + 0x44) = (s32) (lbl_805E00D0 * (lbl_805E00CC * (f32) rand()));
    *(s32 *)((s8 *)arg0 + 0x48) = (s32) (lbl_805E00D4 * ((lbl_805E00CC * (f32) rand()) - lbl_805E00C8));
    *(s32 *)((s8 *)arg0 + 0x4C) = (s32) (lbl_805E00D4 * ((lbl_805E00CC * (f32) rand()) - lbl_805E00C8));
    *(s32 *)((s8 *)arg0 + 0x50) = (s32) (lbl_805E00D4 * ((lbl_805E00CC * (f32) rand()) - lbl_805E00C8));
    return arg0;
}
#pragma pop

#pragma push
#pragma fp_contract on
void spawn_crush_rocks__10TBoss6RockFPvi(Vec_8035A460 *self, s32 kind) {
    f32 radius;
    s32 base;
    s32 n;
    s32 i;
    s32 j;

    if (is_falz_alive__15TBoss6CrushRockFv() == 0) {
        return;
    }
    create__15TBoss6CrushPtclFPv(self);
    radius = lbl_805E00D8;
    base = 5;
    n = 2;
    if ((u32)get_hp__14TBoss6PlotFalzFv() == 0) {
        return;
    }
    switch (kind) {
    case 0:
        break;
    case 1:
        radius = lbl_805E00DC;
        base = 1;
        n = 3;
        break;
    }
    for (i = 0; i < 0x12 / n; i++) {
        for (j = 0; j < n; j++) {
            Vec_8035A460 p = *self;
            s32 angle = (s32)(lbl_805E00D0 * (lbl_805E00CC * (f32)rand()));
            p.x += radius * sin_table_lookup(angle);
            p.y += lbl_805E00E0 * (lbl_805E00CC * (f32)rand());
            p.z += radius * cos_table_lookup(angle);
            u8 *o = (u8 *)__nw__7TObjectFUl(0x54);
            if (o != NULL) {
                ((u8 *(*)(u8 *, s32, Vec_8035A460 *, s32))__ct__15TBoss6CrushRockFv)(o, tl_02, &p, base + j);
            }
        }
    }
}
#pragma pop

s32 get_hp__14TBoss6PlotFalzFv(void) {
    return TBoss6PlotFalz__instance;
}

}

extern "C" {
extern char lbl_804796A0[];
s32 TBoss6CrushRock__name = (s32)lbl_804796A0;
}
