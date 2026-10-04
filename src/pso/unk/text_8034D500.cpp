#include "types.h"
typedef struct Vec4_8034D500 {
    f32 x, y, z, w;
} Vec4_8034D500;

typedef struct Vec3_8034D500 {
    f32 x, y, z;
} Vec3_8034D500;

extern "C" {
f32 TBoss8Dragon__sub_8008072C(f32, f32);
s32 TBoss8Dragon__sub_803D6214(int, int);
extern const f32 lbl_805DFDE8;
extern const f32 lbl_805DFDEC;
s32 TBoss8Dragon__sub_8034D500(Vec4_8034D500 *pts, s32 count, s32 closed, Vec3_8034D500 *out, f32 t);
}

extern "C" {

#pragma push
#pragma fp_contract on
s32 TBoss8Dragon__sub_8034D500(Vec4_8034D500 *pts, s32 count, s32 closed, Vec3_8034D500 *out, f32 t) {
    s32 n;
    s32 i;
    s32 m;
    f32 u;
    f32 w;
    f32 a;
    f32 b;
    s32 k;
    if (count <= 2) {
        return 0;
    }
    n = count - 1;
    u = lbl_805DFDEC - t;
    out->z = out->y = out->x = lbl_805DFDE8;
    if (closed == 0) {
        for (i = 0; i <= n; i++) {
            k = TBoss8Dragon__sub_803D6214(n, i);
            a = TBoss8Dragon__sub_8008072C(t, (f32)i);
            b = TBoss8Dragon__sub_8008072C(u, (f32)(n - i));
            w = ((f32)k * a) * b;
            out->x += w * pts[i].x;
            out->y += w * pts[i].y;
            out->z += w * pts[i].z;
        }
    } else {
        m = n + 1;
        for (i = 0; i <= n; i++) {
            k = TBoss8Dragon__sub_803D6214(m, i);
            a = TBoss8Dragon__sub_8008072C(t, (f32)i);
            b = TBoss8Dragon__sub_8008072C(u, (f32)(m - i));
            w = ((f32)k * a) * b;
            if (i == n) {
                out->x += w * pts[0].x;
                out->y += w * pts[0].y;
                out->z += w * pts[0].z;
            } else {
                out->x += w * pts[i].x;
                out->y += w * pts[i].y;
                out->z += w * pts[i].z;
            }
        }
    }
    if (lbl_805DFDEC == t) {
        return 1;
    }
    return 0;
}
#pragma pop

}
