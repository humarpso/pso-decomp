#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_803E1D1C_lbl_804FC780 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct Vec_803E1A58 { f32 x, y, z; };

extern "C" {
M2C_UNK GXLoadPosMtxImm(void *, int);
extern RecoveredGlobal_803E1D1C_lbl_804FC780 lbl_804FC780;
extern s32 lbl_805D7774;
void TObjPlayer__sub_803E1D1C(s32 arg0);
extern const f32 lbl_805E1038;
extern const f32 lbl_805E103C;
f32 TObjPlayer__sub_803E1A58(Vec_803E1A58 *a, Vec_803E1A58 *b);
extern s32 lbl_805D7774;
extern s32 lbl_804FC7A8[];
void GXLoadTexMtxImm(void *mtx, u32 id, s32 type);
void TObjPlayer__sub_803E1D54(s32 i);
s32 TObjPlayer__sub_803E1864(u8 *arg0, u8 *arg1);
}

extern "C" {

void calc_bounds__10TObjPlayerFPvPvPv(u8 *arg0, u8 *arg1, u8 *arg2);
void reset_particle_counter__10TObjPlayerFv(void);
void set_effect_active__10TObjPlayerFv(void);
s32 test_aabb_overlap__10TObjPlayerFPvPvPvPv(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3);

s32 test_aabb_overlap__10TObjPlayerFPvPvPvPv(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3) {
    if (M2C_FIELD(arg1, f32 *, 0) < M2C_FIELD(arg2, f32 *, 0)) {
        return 0;
    }
    if (M2C_FIELD(arg0, f32 *, 0) > M2C_FIELD(arg3, f32 *, 0)) {
        return 0;
    }
    if (M2C_FIELD(arg1, f32 *, 4) < M2C_FIELD(arg2, f32 *, 4)) {
        return 0;
    }
    if (M2C_FIELD(arg0, f32 *, 4) > M2C_FIELD(arg3, f32 *, 4)) {
        return 0;
    }
    if (M2C_FIELD(arg1, f32 *, 8) < M2C_FIELD(arg2, f32 *, 8)) {
        return 0;
    }
    return (u32) __cntlzw(M2C_FIELD(arg0, f32 *, 8) > M2C_FIELD(arg3, f32 *, 8)) >> 5;
}

#pragma push
#pragma fp_contract off
struct CollisionPoint { f32 x,y,z; };
struct CollisionSphere { CollisionPoint center; f32 radius; };
extern const s32 lbl_8047E498[6][4],lbl_8047E4F8[6][4];
extern const f32 lbl_805E1000,lbl_805E1018,lbl_805E101C;
extern const f64 lbl_805E1008,lbl_805E1010;
static inline CollisionPoint collisionSubtract(CollisionPoint a,CollisionPoint b) {
    CollisionPoint r={a.x-b.x,a.y-b.y,a.z-b.z};return r;
}
static inline f32 collisionDot(CollisionPoint a,CollisionPoint b) {
    return a.z*b.z+(a.x*b.x+a.y*b.y);
}
static inline f32 collisionRoot(f32 squared) {
    if(squared>lbl_805E1000) {
        f64 inverse=__frsqrte(squared);
        inverse=(lbl_805E1008*inverse)*(lbl_805E1010-squared*(inverse*inverse));
        inverse=(lbl_805E1008*inverse)*(lbl_805E1010-squared*(inverse*inverse));
        inverse=(lbl_805E1008*inverse)*(lbl_805E1010-squared*(inverse*inverse));
        return (f32)(squared*inverse);
    }
    return squared;
}
static inline CollisionPoint collisionScale(CollisionPoint a,f32 scale) {
    CollisionPoint r={a.x*scale,a.y*scale,a.z*scale};return r;
}
static inline CollisionPoint collisionProject(CollisionPoint a,CollisionPoint v,f32 scale) {
    CollisionPoint r={a.x+v.x*scale,a.y+v.y*scale,a.z+v.z*scale};return r;
}
static inline int collisionNormalEquals(CollisionPoint a,CollisionPoint b) {
    return (f32)__fabs(a.x-b.x)<=lbl_805E101C && (f32)__fabs(a.y-b.y)<=lbl_805E101C && (f32)__fabs(a.z-b.z)<=lbl_805E101C;
}
static inline CollisionPoint collisionNormalize(CollisionPoint p) {
    return collisionScale(p,lbl_805E1018/collisionRoot(collisionDot(p,p)));
}
s32 TObjPlayer__sub_803E112C(CollisionPoint* box,CollisionSphere* sphere) {
    CollisionPoint lo=box[0],hi=box[0];
    for(int i=1;i<8;++i) {
        if(box[i].x<lo.x)lo.x=box[i].x;if(box[i].y<lo.y)lo.y=box[i].y;if(box[i].z<lo.z)lo.z=box[i].z;
        if(box[i].x>hi.x)hi.x=box[i].x;if(box[i].y>hi.y)hi.y=box[i].y;if(box[i].z>hi.z)hi.z=box[i].z;
    }
    CollisionPoint c=sphere->center;f32 radius=sphere->radius;
    if(hi.x<c.x-radius||lo.x>c.x+radius||hi.y<c.y-radius||lo.y>c.y+radius||hi.z<c.z-radius||lo.z>c.z+radius)return 0;
    CollisionPoint normals[6];
    for(int i=0;i<6;++i) {
        const s32* f=lbl_8047E498[i];
        CollisionPoint a=collisionSubtract(box[f[1]],box[f[0]]),b=collisionSubtract(box[f[2]],box[f[0]]);
        CollisionPoint n={-(a.y*b.z-a.z*b.y),-(a.z*b.x-a.x*b.z),-(a.x*b.y-a.y*b.x)};
        normals[i]=collisionNormalize(n);
    }
    int inside=1;
    for(int i=0;i<6;++i) {
        const s32* f=lbl_8047E498[i];CollisionPoint n=normals[i];
        f32 t=-(-collisionDot(n,box[f[0]])+collisionDot(c,n))/collisionDot(n,n);
        CollisionPoint projected=collisionProject(c,n,t),delta=collisionSubtract(projected,c);
        f32 distance=collisionRoot(collisionDot(delta,delta));
        int faceHit=1;
        for(int j=0;j<4;++j) {
            CollisionPoint a=box[f[j]],edge=collisionSubtract(a,box[f[(j+1)%4]]);
            f32 fraction=collisionDot(edge,collisionSubtract(projected,a))/collisionDot(edge,edge);
            CollisionPoint foot=collisionProject(a,edge,fraction),edgeDelta=collisionSubtract(foot,projected);
            if(collisionNormalEquals(normals[lbl_8047E4F8[i][j]],collisionNormalize(edgeDelta))&&radius>=distance) {}
            else if(distance<=radius&&collisionDot(edgeDelta,edgeDelta)<=radius*radius-distance*distance) {}
            else faceHit=0;
        }
        if(faceHit)return 1;
        if(!collisionNormalEquals(n,collisionNormalize(delta)))inside=0;
    }
    return inside;
}

#pragma pop

__declspec(section ".sdata2") extern const f64 lbl_805E1040;
__declspec(section ".sdata2") extern const f64 lbl_805E1048;

s32 TObjPlayer__sub_803E1864(u8 *arg0, u8 *arg1) {
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f5;
    temp_f3 = M2C_FIELD(arg1, f32 *, 0) - M2C_FIELD(arg0, f32 *, 0);
    temp_f4 = M2C_FIELD(arg1, f32 *, 4) - M2C_FIELD(arg0, f32 *, 4);
    temp_f2 = M2C_FIELD(arg1, f32 *, 8) - M2C_FIELD(arg0, f32 *, 8);
    temp_f5 = M2C_FIELD(arg0, f32 *, 0xC) + M2C_FIELD(arg1, f32 *, 0xC);
    return ((temp_f2 * temp_f2) + ((temp_f3 * temp_f3) + (temp_f4 * temp_f4))) <= (temp_f5 * temp_f5);
}

#pragma push
#pragma scheduling off
f32 TObjPlayer__sub_803E1A58(Vec_803E1A58 *a, Vec_803E1A58 *b) {
    f32 x = (a->z - b->z) * (a->z - b->z) + ((a->x - b->x) * (a->x - b->x) + (a->y - b->y) * (a->y - b->y));
    f32 r;
    if (x < lbl_805E1038) {
        return lbl_805E103C;
    }
    if (x > lbl_805E103C) {
        volatile f32 y;
        f64 g = __frsqrte(x);
        g = lbl_805E1040 * g * (lbl_805E1048 - g * g * x);
        g = lbl_805E1040 * g * (lbl_805E1048 - g * g * x);
        g = lbl_805E1040 * g * (lbl_805E1048 - g * g * x);
        y = (f32)(x * g);
        r = y;
    } else {
        r = x;
    }
    return r;
}
#pragma pop

void calc_bounds__10TObjPlayerFPvPvPv(u8 *arg0, u8 *arg1, u8 *arg2) {
    M2C_FIELD(arg1, f32 *, 0) = (f32) (M2C_FIELD(arg0, f32 *, 0) - M2C_FIELD(arg0, f32 *, 0xC));
    M2C_FIELD(arg1, f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 4) - M2C_FIELD(arg0, f32 *, 0xC));
    M2C_FIELD(arg1, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 8) - M2C_FIELD(arg0, f32 *, 0xC));
    M2C_FIELD(arg2, f32 *, 0) = (f32) (M2C_FIELD(arg0, f32 *, 0) + M2C_FIELD(arg0, f32 *, 0xC));
    M2C_FIELD(arg2, f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 4) + M2C_FIELD(arg0, f32 *, 0xC));
    M2C_FIELD(arg2, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 8) + M2C_FIELD(arg0, f32 *, 0xC));
}

extern s8 lbl_805D77C8;

#pragma push
#pragma scheduling off
typedef char RecoveredGlobal_803E1D1C_lbl_804FC780_size[sizeof(RecoveredGlobal_803E1D1C_lbl_804FC780) == 0x28 ? 1 : -1];
void TObjPlayer__sub_803E1D1C(s32 arg0) {
    GXLoadPosMtxImm((void *) (lbl_805D7774), (int) (M2C_FIELD(((u8 *)(&lbl_804FC780.value) + (arg0 * 4)), s32 *, 0)));
}
#pragma pop

#pragma push
#pragma scheduling off
void TObjPlayer__sub_803E1D54(s32 i) {
    GXLoadTexMtxImm((void *)lbl_805D7774, lbl_804FC7A8[i], 0);
}
#pragma pop

void set_effect_active__10TObjPlayerFv(void) {
    lbl_805D77C8 = 1;
}

extern s8 lbl_805D77C8;

void reset_particle_counter__10TObjPlayerFv(void) {
    lbl_805D77C8 = 0;
}

}
