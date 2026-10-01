#include "pso/TObjDFJisin.h"

extern "C" {
typedef struct Vec_80050EB4 {
    f32 x, y, z;
} Vec_80050EB4;

typedef struct Obj_80050EB4 {
    u8 pad0[0x1C];
    f32 cx;
    f32 f20;
    f32 cz;
    f32 radius;
} Obj_80050EB4;

void queue_destruction__7TObjectFv(void *);
void fn_80050D74(void *, Vec_80050EB4 *);
void fn_80050E64(void *, Vec_80050EB4 *);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
f32 TBoss6Kakusan__sub_803D8BD8(Vec_80050EB4 *);
extern const f32 lbl_805D8A30;
extern const f32 lbl_805D8A94;
extern const f32 lbl_805D8A98;
extern const f32 lbl_805D8A9C;
extern const f32 lbl_805D8AA0;
extern const f32 lbl_805D8AA4;

}

#pragma push
#pragma fp_contract on
#define arg0 ((Obj_80050EB4 *)this)
void TObjDFJisin::run_task() {
    Vec_80050EB4 v;
    s32 ang;
    s32 step;
    s32 count;
    f32 max;

    step = (s32)(lbl_805D8A94 / (lbl_805D8A98 * arg0->radius));
    count = 0;
    v.y = lbl_805D8A30;
    max = lbl_805D8A9C;
    for (ang = 0; ang < 0x10000; ang += step) {
        v.x = arg0->radius * TBoss8Dragon__sub_803D64C0(ang) + arg0->cx;
        v.z = arg0->radius * TBoss8Dragon__sub_803D64DC(ang) + arg0->cz;
        if (!(TBoss6Kakusan__sub_803D8BD8(&v) > max)) {
            fn_80050E64(arg0, &v);
            fn_80050D74(arg0, &v);
            count++;
        }
    }
    if (arg0->radius > lbl_805D8AA0 && count == 0) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    arg0->radius += lbl_805D8AA4;
}
#undef arg0
#pragma pop

TObjDFJisin::~TObjDFJisin() {}
