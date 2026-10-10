



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





struct Vec_803E1B1C { f32 x, y, z; };

typedef s32 M2C_UNK;
typedef struct TexObj_803E1D90 { u32 dummy[8]; } TexObj_803E1D90;

typedef struct TexHdr_803E1D90 {
    u32 f0;
    s32 format;
    u32 f8;
    u32 fC;
    u32 width;
    u32 height;
    u32 f18;
    u32 flags;
    void *image;
} TexHdr_803E1D90;

typedef struct TexInfo_803E1D90 { u32 f0; u32 f4; u32 tlut; TexHdr_803E1D90 *hdr; } TexInfo_803E1D90;

typedef struct TexEnt_803E1D90 { u32 f0; u32 f4; TexInfo_803E1D90 *info; } TexEnt_803E1D90;

typedef struct TexList_803E1D90 { TexEnt_803E1D90 *ents; } TexList_803E1D90;

typedef struct Ctx_803E1D90 { u8 pad[0x20]; TexList_803E1D90 *list; } Ctx_803E1D90;


struct V_803E18C0 { f32 x, y, z; };

struct Line_803E18C0 { V_803E18C0 o; V_803E18C0 d; };


struct Faces_803E0ED4 { s32 v[6][4]; };

extern "C" {
M2C_UNK GXLoadPosMtxImm(void *, int);
extern RecoveredGlobal_803E1D1C_lbl_804FC780 gx_pos_mtx_index_table;
extern s32 current_matrix;
void load_current_pos_matrix(s32 arg0);
extern const f32 lbl_805E1038;
extern const f32 lbl_805E103C;
f32 xyz_distance(Vec_803E1A58 *a, Vec_803E1A58 *b);
extern s32 current_matrix;
extern s32 tex_matrix_id_table[];
void GXLoadTexMtxImm(void *mtx, u32 id, s32 type);
void load_current_tex_matrix(s32 i);
s32 spheres_overlap(u8 *arg0, u8 *arg1);
void OSPanic(const char *, int, const char *, ...);
void TObjPlayer__sub_803DAE1C(void *, int, void *);
extern char lbl_804FC7F8[];
extern char lbl_805D46F0[4];
void reload_texture__10TObjPlayerFPviUiPv(void *arg0, s32 arg1, u32 arg2, void *arg3);
void calc_bounds_min_max__10TObjPlayerFPvPvPv(struct Vec_803E1B1C *pts, struct Vec_803E1B1C *mn, struct Vec_803E1B1C *mx);
void Dolphin_GXInitTexObj(TexObj_803E1D90 *, void *, u16, u16, s32, s32, s32, u8);
void GXInitTexObjCI(TexObj_803E1D90 *, void *, u16, u16, s32, s32, s32, u8, u32);
void GXLoadTexObj(TexObj_803E1D90 *, s32);
extern s32 list_texture_map_table[];
extern TexObj_803E1D90 list_texture_tex_obj;
extern Ctx_803E1D90 *lbl_805D774C;
void load_list_texture(s32 idx, s32 wrapS, s32 wrapT, s32 map);
extern const f32 lbl_805E1020;
extern const f32 lbl_805E1024;
extern const f64 lbl_805E1028;
extern const f64 lbl_805E1030;
f32 project_point_onto_line(V_803E18C0 *p, Line_803E18C0 *l, V_803E18C0 *out);
s32 test_aabb_overlap__10TObjPlayerFPvPvPvPv(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3);
void calc_bounds_min_max__10TObjPlayerFPvPvPv(struct Vec_803E1B1C *pts, struct Vec_803E1B1C *mn, struct Vec_803E1B1C *mx);
s32 TObjPlayer__sub_803DFB1C(Vec_803E1B1C *a, Vec_803E1B1C *b);
s32 __SITransfer(Vec_803E1B1C *a, Vec_803E1B1C *b);
extern const Faces_803E0ED4 box_face_corner_index_table;
s32 test_box_overlap__10TObjPlayerFPvPv(Vec_803E1B1C *boxA, Vec_803E1B1C *boxB);
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
extern const s32 box_face_vertex_index_table[6][4],box_edge_adjacent_face_table[6][4];
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


#pragma use_lmw_stmw off
s32 test_box_overlap__10TObjPlayerFPvPv(Vec_803E1B1C *boxA, Vec_803E1B1C *boxB) {
    Vec_803E1B1C qa[4];
    Vec_803E1B1C qb[4];
    Vec_803E1B1C mnA;
    Vec_803E1B1C mxA;
    Vec_803E1B1C mnB;
    Vec_803E1B1C mxB;
    s32 i;
    s32 j;
    s32 mask;
    s32 *fa;
    s32 *fb;
    int k;
    mask = 0;
    calc_bounds_min_max__10TObjPlayerFPvPvPv((struct Vec_803E1B1C *)(boxA), (struct Vec_803E1B1C *)(&mnA), (struct Vec_803E1B1C *)(&mxA));
    calc_bounds_min_max__10TObjPlayerFPvPvPv((struct Vec_803E1B1C *)(boxB), (struct Vec_803E1B1C *)(&mnB), (struct Vec_803E1B1C *)(&mxB));
    if (test_aabb_overlap__10TObjPlayerFPvPvPvPv((u8 *)&mnA, (u8 *)&mxA, (u8 *)&mnB, (u8 *)&mxB) != 0) {
    Faces_803E0ED4 faces = box_face_corner_index_table;
    for (i = 0; i < 6; i++) {
        fa = faces.v[i];
        qa[0].x = boxA[fa[0]].x; qa[0].y = boxA[fa[0]].y; qa[0].z = boxA[fa[0]].z;
        qa[1].x = boxA[fa[1]].x; qa[1].y = boxA[fa[1]].y; qa[1].z = boxA[fa[1]].z;
        qa[2].x = boxA[fa[2]].x; qa[2].y = boxA[fa[2]].y; qa[2].z = boxA[fa[2]].z;
        qa[3].x = boxA[fa[3]].x; qa[3].y = boxA[fa[3]].y; qa[3].z = boxA[fa[3]].z;
        for (j = 0; j < 6; j++) {
            fb = faces.v[j];
            qb[0].x = boxB[fb[0]].x; qb[0].y = boxB[fb[0]].y; qb[0].z = boxB[fb[0]].z;
            qb[1].x = boxB[fb[1]].x; qb[1].y = boxB[fb[1]].y; qb[1].z = boxB[fb[1]].z;
            qb[2].x = boxB[fb[2]].x; qb[2].y = boxB[fb[2]].y; qb[2].z = boxB[fb[2]].z;
            qb[3].x = boxB[fb[3]].x; qb[3].y = boxB[fb[3]].y; qb[3].z = boxB[fb[3]].z;
            if (TObjPlayer__sub_803DFB1C(qa, qb) != 0) {
                return 1;
            }
            mask |= __SITransfer(qa, qb);
            if (mask == 7) {
                return 1;
            }
        }
    }
    return 0;
    }
    return 0;
}

s32 test_box_sphere_contact(CollisionPoint* box,CollisionSphere* sphere) {
    CollisionPoint lo=box[0],hi=box[0];
    for(int i=1;i<8;++i) {
        if(box[i].x<lo.x)lo.x=box[i].x;if(box[i].y<lo.y)lo.y=box[i].y;if(box[i].z<lo.z)lo.z=box[i].z;
        if(box[i].x>hi.x)hi.x=box[i].x;if(box[i].y>hi.y)hi.y=box[i].y;if(box[i].z>hi.z)hi.z=box[i].z;
    }
    CollisionPoint c=sphere->center;f32 radius=sphere->radius;
    if(hi.x<c.x-radius||lo.x>c.x+radius||hi.y<c.y-radius||lo.y>c.y+radius||hi.z<c.z-radius||lo.z>c.z+radius)return 0;
    CollisionPoint normals[6];
    for(int i=0;i<6;++i) {
        const s32* f=box_face_vertex_index_table[i];
        CollisionPoint a=collisionSubtract(box[f[1]],box[f[0]]),b=collisionSubtract(box[f[2]],box[f[0]]);
        CollisionPoint n={-(a.y*b.z-a.z*b.y),-(a.z*b.x-a.x*b.z),-(a.x*b.y-a.y*b.x)};
        normals[i]=collisionNormalize(n);
    }
    int inside=1;
    for(int i=0;i<6;++i) {
        const s32* f=box_face_vertex_index_table[i];CollisionPoint n=normals[i];
        f32 t=-(-collisionDot(n,box[f[0]])+collisionDot(c,n))/collisionDot(n,n);
        CollisionPoint projected=collisionProject(c,n,t),delta=collisionSubtract(projected,c);
        f32 distance=collisionRoot(collisionDot(delta,delta));
        int faceHit=1;
        for(int j=0;j<4;++j) {
            CollisionPoint a=box[f[j]],edge=collisionSubtract(a,box[f[(j+1)%4]]);
            f32 fraction=collisionDot(edge,collisionSubtract(projected,a))/collisionDot(edge,edge);
            CollisionPoint foot=collisionProject(a,edge,fraction),edgeDelta=collisionSubtract(foot,projected);
            if(collisionNormalEquals(normals[box_edge_adjacent_face_table[i][j]],collisionNormalize(edgeDelta))&&radius>=distance) {}
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


s32 spheres_overlap(u8 *arg0, u8 *arg1) {
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
f32 project_point_onto_line(V_803E18C0 *p, Line_803E18C0 *l, V_803E18C0 *out) {
    f32 t;
    f32 x;
    f32 r;
    t = (l->d.z * (p->z - l->o.z) + (l->d.x * (p->x - l->o.x) + l->d.y * (p->y - l->o.y))) /
        (l->d.z * l->d.z + (l->d.x * l->d.x + l->d.y * l->d.y));
    if (out != NULL) {
        out->x = l->o.x + l->d.x * t;
        out->y = l->o.y + l->d.y * t;
        out->z = l->o.z + l->d.z * t;
        x = (p->z - out->z) * (p->z - out->z) + ((p->x - out->x) * (p->x - out->x) + (p->y - out->y) * (p->y - out->y));
    } else {
        x = (p->z - (l->o.z + l->d.z * t)) * (p->z - (l->o.z + l->d.z * t)) +
            ((p->x - (l->o.x + l->d.x * t)) * (p->x - (l->o.x + l->d.x * t)) +
             (p->y - (l->o.y + l->d.y * t)) * (p->y - (l->o.y + l->d.y * t)));
    }
    if (x < lbl_805E1020) {
        return lbl_805E1024;
    }
    if (x > lbl_805E1024) {
        volatile f32 y;
        f64 g = __frsqrte(x);
        g = lbl_805E1028 * g * (lbl_805E1030 - g * g * x);
        g = lbl_805E1028 * g * (lbl_805E1030 - g * g * x);
        g = lbl_805E1028 * g * (lbl_805E1030 - g * g * x);
        y = (f32)(x * g);
        r = y;
    } else {
        r = x;
    }
    return r;
}
#pragma pop

#pragma push
#pragma scheduling off
f32 xyz_distance(Vec_803E1A58 *a, Vec_803E1A58 *b) {
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



void calc_bounds_min_max__10TObjPlayerFPvPvPv(struct Vec_803E1B1C *pts, struct Vec_803E1B1C *mn, struct Vec_803E1B1C *mx) {
    s32 i;
    mn->x = pts->x;
    mn->y = pts->y;
    mn->z = pts->z;
    mx->x = pts->x;
    mx->y = pts->y;
    mx->z = pts->z;
    pts++;
    for (i = 1; i < 8; i++, pts++) {
        if (pts->x < mn->x) mn->x = pts->x;
        if (pts->y < mn->y) mn->y = pts->y;
        if (pts->z < mn->z) mn->z = pts->z;
        if (pts->x > mx->x) mx->x = pts->x;
        if (pts->y > mx->y) mx->y = pts->y;
        if (pts->z > mx->z) mx->z = pts->z;
    }
}

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
void load_current_pos_matrix(s32 arg0) {
    GXLoadPosMtxImm((void *) (current_matrix), (int) (M2C_FIELD(((u8 *)(&gx_pos_mtx_index_table.value) + (arg0 * 4)), s32 *, 0)));
}
#pragma pop



#pragma push
#pragma scheduling off
void load_current_tex_matrix(s32 i) {
    GXLoadTexMtxImm((void *)current_matrix, tex_matrix_id_table[i], 0);
}
#pragma pop





void load_list_texture(s32 idx, s32 wrapS, s32 wrapT, s32 map) {
    TexInfo_803E1D90 *info = lbl_805D774C->list->ents[idx].info;
    TexHdr_803E1D90 *hdr = info->hdr;
    u32 flags = hdr->flags;
    u8 mip;
    if (flags & 0x80000000) {
        mip = 1;
    } else {
        mip = 0;
    }
    if (flags & 0x8000) {
        GXInitTexObjCI(&list_texture_tex_obj, hdr->image, hdr->width, hdr->height, hdr->format, wrapS, wrapT, mip, info->tlut);
    } else {
        Dolphin_GXInitTexObj(&list_texture_tex_obj, hdr->image, hdr->width, hdr->height, hdr->format, wrapS, wrapT, mip);
    }
    GXLoadTexObj(&list_texture_tex_obj, list_texture_map_table[map]);
}

void reload_texture__10TObjPlayerFPviUiPv(void *arg0, s32 arg1, u32 arg2, void *arg3) {
    s32 size;
    if ((arg2 & 0x40000000) != 0) {
        size = arg1;
    } else {
        OSPanic(lbl_804FC7F8, 0x30, lbl_805D46F0);
    }
    TObjPlayer__sub_803DAE1C(arg0, size, arg3);
}

void set_effect_active__10TObjPlayerFv(void) {
    lbl_805D77C8 = 1;
}




extern s8 lbl_805D77C8;

void reset_particle_counter__10TObjPlayerFv(void) {
    lbl_805D77C8 = 0;
}

}
