#include "pso/TObject.h"
class TObjChip : public TObject {
public:
    virtual void render_shadows();
    virtual ~TObjChip();
};

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_801809C4_801809B4 { char pad[0x18]; };
struct VObj_801809C4_801809B4 : Base_801809C4_801809B4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
};

struct VBase_18 { char pad[0x18]; };
struct VObj_18 : VBase_18 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual M2C_UNK m10();
    virtual M2C_UNK m11();
};
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_C { u8 bytes[0xc]; };

struct VBase_18_6eb662 { char pad[0x18]; };

struct VObj_18_6eb662 : VBase_18_6eb662 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(void *, f32);
};

struct RecoveredGlobal_80180AA4___vt__8TObjChip {
    M2C_UNK value;
    u8 remaining[0x34];
};

struct VBase_18_2a3247 { char pad[0x18]; };

struct VObj_18_2a3247 : VBase_18_2a3247 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual s32 m4(f32);
};

struct RecoveredGlobal_80180BD4___vt__8TObjChip {
    M2C_UNK value;
    u8 remaining[0x34];
};

struct VBase_18_26a62c { char pad[0x18]; };

struct VObj_18_26a62c : VBase_18_26a62c {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

struct Rec16_80180D18 { s32 f0; s32 f4; s32 f8; s32 fc; };

struct Vec_8018085C { f32 x, y, z; };

struct Out_8018085C { f32 x, y; };

typedef s32 M2C_UNK;
struct Vec_801803C0 { f32 x, y, z; };

struct IVec_801803C0 { s32 x, y, z; };

struct Chip_801803C0 {
    Vec_801803C0 pos;
    Vec_801803C0 vel;
    IVec_801803C0 rot;
    IVec_801803C0 angvel;
    f32 alpha;
    s32 life;
};

struct Task_801803C0 {
    u8 pad0[0x30];
    Vec_801803C0 origin;
    Vec_801803C0 vel;
    IVec_801803C0 angvel;
    s32 count;
    s32 life;
    u8 pad5c[0x70 - 0x5C];
    Chip_801803C0 chips[8];
};

struct Vec_80180614 { f32 x, y, z; };

struct IVec_80180614 { s32 x, y, z; };

struct Chip_80180614 {
    Vec_80180614 pos;
    Vec_80180614 vel;
    IVec_80180614 rot;
    IVec_80180614 angvel;
    f32 alpha;
    s32 life;
};

struct Task_80180614 {
    u8 pad0[0x30];
    Vec_80180614 origin;
    Vec_80180614 vel;
    IVec_80180614 angvel;
    s32 count;
    s32 life;
    u8 pad5c[0x70 - 0x5C];
    Chip_80180614 chips[8];
};

struct Vec_8018019C { f32 x, y, z; };

struct IVec_8018019C { s32 x, y, z; };

struct Chip_8018019C {
    Vec_8018019C pos;
    Vec_8018019C vel;
    IVec_8018019C rot;
    IVec_8018019C angvel;
    f32 alpha;
    s32 life;
};

struct Task_8018019C {
    u8 pad0[0x24];
    f32 bounce;
    f32 drag;
    f32 gravity;
    u8 pad30[0x54 - 0x30];
    s32 count;
    u8 pad58[0x5C - 0x58];
    f32 floor;
    u8 pad60[0x6C - 0x60];
    u32 flags;
    Chip_8018019C chips[8];
    s32 active;
};

struct Color_8017FE58 { f32 a; s32 b; s32 c; s32 d; };

struct Chip_8017FE58 {
    f32 pos[3];
    u8 padC[0x18 - 0xC];
    s32 rx, ry, rz;
    u8 pad24[0x30 - 0x24];
    f32 alpha;
    u8 pad34[0x38 - 0x34];
};

struct Obj_8017FE58 {
    u8 pad0[0x54];
    s32 count;
    u8 pad58[0x60 - 0x58];
    f32 scale;
    s32 model;
    u8 pad68[0x6C - 0x68];
    s32 flags;
    Chip_8017FE58 chips[1];
};

extern "C" {
M2C_UNK set_global_param__8TObjFishFi(int);
void render__8TObjChipFPv(u8 *arg0);
void copy_debris_params__8TObjChipFPvPv(u8 *arg0, u8 *arg1);
void copy_debris_params__8TObjChipFPvPv(u8 *arg0, u8 *arg1);
void __ct__7TObjectFP7TObject(void *, void *);
extern void *__vt__8TObjChip[];
u8 *__ct__8TObjChipFv(u8 *arg0, u8 *arg1, u8 *arg2);
void copy_debris_params__8TObjChipFPvPv(u8 *arg0, u8 *arg1);
void __ct__7TObjectFP7TObject(void *, void *);
extern void *__vt__8TObjChip[];
u8 *construct_debris__8TObjChipFPvPvPv(u8 *arg0, u8 *arg1, u8 *arg2);
M2C_UNK scroll_strip_uvs(int, s16, int);
M2C_UNK get_city_common_model(int);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK rotate_matrix_z(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK draw_ginja_object();
M2C_UNK draw_chunk_object(int, void *);
extern M2C_UNK lbl_80443B2C[];
extern M2C_UNK lbl_80443B40[];
extern M2C_UNK lbl_80443B54[];
extern M2C_UNK air_car_buffer_pair_table[];
extern u8 *lbl_805D5B20;
extern void **lbl_805D5B24;
extern void **lbl_805D5B2C;
void render__18TObjCityAirCar_CarFPv(u8 *arg0);
void matrix_mult_vec(int, Vec_8018085C *, Vec_8018085C *);
void project_world_to_screen(int, Vec_8018085C *, Out_8018085C *, Vec_8018085C *);
extern Vec_8018085C lbl_804FF610;
s32 TObjChip__vt8(s32 arg0, Vec_8018085C *arg1, f32 farg0, f32 farg1);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
int rand(void);
s32 spawn_chips__8TObjChipFPvPv(u8 *arg0, u8 *arg1);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
int rand(void);
s32 init_chips__8TObjChipFPv(u8 *arg0);
void tick_chips__8TObjChipFPv(u8 *arg0);
M2C_UNK rotate_matrix_yxz(int, int, int, int);
M2C_UNK scale_matrix(int, f32, f32, f32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_chunk_material_override_pair(int, int);
M2C_UNK set_chunk_material_color(void *);
M2C_UNK draw_chunk_object(int, void *);
extern u8 chunk_material_color_half_alpha_f32[];
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern s32 some_id_805c6f74;
void draw_chips__8TObjChipFPv(Obj_8017FE58 *o);
}

extern "C" {

struct Base_801809F0_801809B4 { char pad[0x18]; };
struct VObj_801809F0_801809B4 : Base_801809F0_801809B4 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual int m6(); virtual void m7();
};

int TObjChip__vt6(void* p);
u8 *copy_transform__8TObjChipFPvPv(u8 *arg0, u8 *arg1);
void dispatch_vt9__8TObjChipFPv(void *arg0);
void update__8TObjChipFPv(void *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK copy_xyz__10TObjPlayerFPvPv(void *, void *);
M2C_UNK queue_destruction__7TObjectFv(void *);

#pragma readonly_strings on
const char *lbl_805D3240 = "TObjChip";

void draw_chips__8TObjChipFPv(Obj_8017FE58 *o) {
    Chip_8017FE58 *c = o->chips;
    if (o->flags & 8) {
        if (o->flags & 4) {
            lbl_805D5660 = some_id_805c6f74;
            lbl_805D5664 = lbl_805D7784;
            lbl_805D5668 = lbl_805D7780;
            some_id_805c6f74 = some_id_805c6f74 | 0x810;
            set_chunk_material_override_pair(-1, 0x800);
            for (s32 i = 0; i < o->count; i++, c++) {
                Color_8017FE58 col = { 0.0f, 0x3F800000, 0x3F800000, 0x3F800000 };
                col.a = c->alpha;
                set_chunk_material_color(&col);
                push_matrix();
                post_translate_matrix(c);
                rotate_matrix_yxz(0, c->rx, c->ry, c->rz);
                scale_matrix(0, o->scale, o->scale, o->scale);
                ((M2C_UNK (*)(int))draw_chunk_object)(o->model);
                pop_matrix();
                set_chunk_material_color(chunk_material_color_half_alpha_f32);
            }
            some_id_805c6f74 = lbl_805D5660;
            lbl_805D7784 = lbl_805D5664;
            lbl_805D7780 = lbl_805D5668;
        } else {
            for (s32 i = 0; i < o->count; i++, c++) {
                push_matrix();
                post_translate_matrix(c);
                rotate_matrix_yxz(0, c->rx, c->ry, c->rz);
                scale_matrix(0, o->scale, o->scale, o->scale);
                ((M2C_UNK (*)(int))draw_chunk_object)(o->model);
                pop_matrix();
            }
        }
    } else if (o->flags & 4) {
        lbl_805D5660 = some_id_805c6f74;
        lbl_805D5664 = lbl_805D7784;
        lbl_805D5668 = lbl_805D7780;
        some_id_805c6f74 = some_id_805c6f74 | 0x810;
        set_chunk_material_override_pair(-1, 0x800);
        for (s32 i = 0; i < o->count; i++, c++) {
            Color_8017FE58 col = { 0.0f, 0x3F800000, 0x3F800000, 0x3F800000 };
            col.a = c->alpha;
            set_chunk_material_color(&col);
            push_matrix();
            post_translate_matrix(c);
            rotate_matrix_yxz(0, c->rx, c->ry, c->rz);
            scale_matrix(0, o->scale, o->scale, o->scale);
            ((M2C_UNK (*)(int))draw_chunk_object)(o->model);
            pop_matrix();
            set_chunk_material_color(chunk_material_color_half_alpha_f32);
        }
        some_id_805c6f74 = lbl_805D5660;
        lbl_805D7784 = lbl_805D5664;
        lbl_805D7780 = lbl_805D5668;
    } else {
        for (s32 i = 0; i < o->count; i++, c++) {
            push_matrix();
            post_translate_matrix(c);
            rotate_matrix_yxz(0, c->rx, c->ry, c->rz);
            scale_matrix(0, o->scale, o->scale, o->scale);
            ((M2C_UNK (*)(int))draw_chunk_object)(o->model);
            pop_matrix();
        }
    }
}

extern const u32 lbl_80443AFC[4] = { 0, 0x3F800000, 0x3F800000, 0x3F800000 };

void render__8TObjChipFPv(u8 *arg0) {
    set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x68)));
    if (M2C_FIELD(arg0, s32 *, 0x6C) & 0x10) {
        ((VObj_18 *)(arg0))->m10();
        return;
    }
    ((VObj_18 *)(arg0))->m11();
}

#pragma push
#pragma fp_contract on
void tick_chips__8TObjChipFPv(u8 *arg0) {
    Task_8018019C *t = (Task_8018019C *)arg0;
    s32 active;
    Chip_8018019C *c;
    s32 i;
    c = t->chips;
    active = 0;
    for (i = 0; i < t->count; i++, c++) {
        if (c->life == 0) {
            if (!(t->flags & 4)) {
                continue;
            }
            c->alpha -= (0.1f);
            if (c->alpha > (0.0f)) {
                active++;
            }
        } else {
            c->life--;
            active++;
        }
        c->vel.x = -c->vel.x * t->drag + c->vel.x;
        c->vel.y = c->vel.y + ((0.1f) * -c->vel.y - t->gravity);
        c->vel.z = -c->vel.z * t->drag + c->vel.z;
        c->pos.x += c->vel.x;
        c->pos.y += c->vel.y;
        c->pos.z += c->vel.z;
        c->rot.x += c->angvel.x;
        c->rot.y += c->angvel.y;
        c->rot.z += c->angvel.z;
        if ((t->flags & 2) && c->pos.y < t->floor && c->vel.y < (0.0f)) {
            c->pos.y = t->floor;
            c->vel.x *= (0.9f);
            c->vel.y *= -t->bounce;
            c->vel.z *= (0.9f);
            c->angvel.x = (s32)((0.5f) * (f32)c->angvel.x);
            c->angvel.y = (s32)((0.5f) * (f32)c->angvel.y);
            c->angvel.z = (s32)((0.5f) * (f32)c->angvel.z);
        }
    }
    if (active == 0) {
        t->active = 0;
    }
}
#pragma pop

#pragma push
#pragma fp_contract on
s32 spawn_chips__8TObjChipFPvPv(u8 *arg0, u8 *arg1) {
    IVec_801803C0 *r = (IVec_801803C0 *)arg1;
    Task_801803C0 *t = (Task_801803C0 *)arg0;
    Chip_801803C0 *c;
    s32 i;
    f32 v;
    if (t->count > 8) {
        return 0;
    }
    c = t->chips;
    for (i = 0; i < t->count; i++, c++) {
        VecCopy__FP3VecPC3Vec(&c->pos, &t->origin);
        v = t->vel.x;
        c->vel.x = v * ((3.0517578e-05f) * (f32)rand()) - (0.5f) * v;
        c->vel.y = t->vel.y * ((3.0517578e-05f) * (f32)rand());
        v = t->vel.z;
        c->vel.z = v * ((3.0517578e-05f) * (f32)rand()) - (0.5f) * v;
        c->rot.x = r->x;
        c->rot.y = r->y;
        c->rot.z = r->z;
        c->angvel.x = (s32)((f32)t->angvel.x * ((3.0517578e-05f) * (f32)rand()));
        c->angvel.y = (s32)((f32)t->angvel.y * ((3.0517578e-05f) * (f32)rand()));
        c->angvel.z = (s32)((f32)t->angvel.z * ((3.0517578e-05f) * (f32)rand()));
        c->alpha = (1.0f);
        c->life = t->life;
    }
    return 1;
}
#pragma pop

#pragma push
#pragma fp_contract on
s32 init_chips__8TObjChipFPv(u8 *arg0) {
    Task_80180614 *t = (Task_80180614 *)arg0;
    Chip_80180614 *c;
    s32 i;
    f32 v;
    if (t->count > 8) {
        return 0;
    }
    c = t->chips;
    for (i = 0; i < t->count; i++, c++) {
        VecCopy__FP3VecPC3Vec(&c->pos, &t->origin);
        v = t->vel.x;
        c->vel.x = v * ((3.0517578e-05f) * (f32)rand()) - (0.5f) * v;
        c->vel.y = t->vel.y * ((3.0517578e-05f) * (f32)rand());
        v = t->vel.z;
        c->vel.z = v * ((3.0517578e-05f) * (f32)rand()) - (0.5f) * v;
        c->rot.z = c->rot.y = c->rot.x = 0;
        c->angvel.x = (s32)((f32)t->angvel.x * ((3.0517578e-05f) * (f32)rand()));
        c->angvel.y = (s32)((f32)t->angvel.y * ((3.0517578e-05f) * (f32)rand()));
        c->angvel.z = (s32)((f32)t->angvel.z * ((3.0517578e-05f) * (f32)rand()));
        c->alpha = (1.0f);
        c->life = t->life;
    }
    return 1;
}
#pragma pop

#pragma push
#pragma fp_contract on
s32 TObjChip__vt8(s32 arg0, Vec_8018085C *arg1, f32 farg0, f32 farg1) {
    Vec_8018085C v;
    Out_8018085C o1;
    Out_8018085C o2;
    matrix_mult_vec(0, arg1, &v);
    if (v.z > 0.0f) {
        return 0;
    }
    if (v.z < -farg0) {
        return 0;
    }
    if (v.x < 0.0f) {
        v.x = arg1->x - lbl_804FF610.x * farg1;
        v.y = arg1->y + lbl_804FF610.y * farg1;
        v.z = arg1->z + lbl_804FF610.z * farg1;
        project_world_to_screen(0, &v, &o1, &lbl_804FF610);
        if (o1.x < 0.0f) {
            return 0;
        }
    } else {
        v.x = arg1->x + lbl_804FF610.x * farg1;
        v.y = arg1->y - lbl_804FF610.y * farg1;
        v.z = arg1->z - lbl_804FF610.z * farg1;
        project_world_to_screen(0, &v, &o2, &lbl_804FF610);
        if (o2.x > 640.0f) {
            return 0;
        }
    }
    return 1;
}
#pragma pop

int TObjChip__vt6(void* p) { return *(u32*)((char*)p + 0x230) == 0; }

void dispatch_vt9__8TObjChipFPv(void *arg0) {
    struct VObj_801809C4_801809B4 *o = (struct VObj_801809C4_801809B4 *)arg0;
    o->m9();
}

void update__8TObjChipFPv(void *arg0) {
    struct VObj_801809F0_801809B4 *o = (struct VObj_801809F0_801809B4 *)arg0;
    o->m7();
    if (o->m6() == 1) {
        queue_destruction__7TObjectFv(arg0);
    }
}

}

TObjChip::~TObjChip() {}

extern "C" {

typedef char RecoveredGlobal_80180AA4___vt__8TObjChip_size[sizeof(RecoveredGlobal_80180AA4___vt__8TObjChip) == 0x38 ? 1 : -1];
u8 *__ct__8TObjChipFv(u8 *arg0, u8 *arg1, u8 *arg2) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = (M2C_UNK *)__vt__8TObjChip;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3240;
    copy_debris_params__8TObjChipFPvPv((u8 *)(arg0 + 0x24), (u8 *)(arg2));
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (2e+02f);
    M2C_FIELD(arg0, f32 *, 0x20) = 40.0f;
    M2C_FIELD(arg0, s32 *, 0x230) = 1;
    if (((VObj_18_6eb662 *)(arg0))->m5(arg2 + 0x4C, (2e+02f)) == 0) {
        M2C_FIELD(arg0, s32 *, 0x230) = 0;
    }
    return arg0;
}

void copy_debris_params__8TObjChipFPvPv(u8 *arg0, u8 *arg1) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    *(M2CCopy_C *)((s32) arg0 + 0xC) = *(const M2CCopy_C *)((s32) arg1 + 0xC);
    *(M2CCopy_C *)((s32) arg0 + 0x18) = *(const M2CCopy_C *)((s32) arg1 + 0x18);
    *(M2CCopy_C *)((s32) arg0 + 0x24) = *(const M2CCopy_C *)((s32) arg1 + 0x24);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg1, s32 *, 0x30);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(arg1, s32 *, 0x34);
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(arg1, f32 *, 0x38);
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) M2C_FIELD(arg1, f32 *, 0x3C);
    M2C_FIELD(arg0, s32 *, 0x40) = (s32) M2C_FIELD(arg1, s32 *, 0x40);
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) M2C_FIELD(arg1, s32 *, 0x44);
    M2C_FIELD(arg0, s32 *, 0x48) = (s32) M2C_FIELD(arg1, s32 *, 0x48);
}

typedef char RecoveredGlobal_80180BD4___vt__8TObjChip_size[sizeof(RecoveredGlobal_80180BD4___vt__8TObjChip) == 0x38 ? 1 : -1];
u8 *construct_debris__8TObjChipFPvPvPv(u8 *arg0, u8 *arg1, u8 *arg2) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = (M2C_UNK *)__vt__8TObjChip;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3240;
    copy_debris_params__8TObjChipFPvPv((u8 *)(arg0 + 0x24), (u8 *)(arg2));
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (2e+02f);
    M2C_FIELD(arg0, f32 *, 0x20) = 40.0f;
    M2C_FIELD(arg0, s32 *, 0x230) = 1;
    if (((VObj_18_2a3247 *)(arg0))->m4((2e+02f)) == 0) {
        M2C_FIELD(arg0, s32 *, 0x230) = 0;
    }
    return arg0;
}

u8 *copy_transform__8TObjChipFPvPv(u8 *arg0, u8 *arg1) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    VecCopy__FP3VecPC3Vec(arg0 + 0xC, arg1 + 0xC);
    VecCopy__FP3VecPC3Vec(arg0 + 0x18, arg1 + 0x18);
    copy_xyz__10TObjPlayerFPvPv(arg0 + 0x24, arg1 + 0x24);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg1, s32 *, 0x30);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(arg1, s32 *, 0x34);
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(arg1, f32 *, 0x38);
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) M2C_FIELD(arg1, f32 *, 0x3C);
    M2C_FIELD(arg0, s32 *, 0x40) = (s32) M2C_FIELD(arg1, s32 *, 0x40);
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) M2C_FIELD(arg1, s32 *, 0x44);
    M2C_FIELD(arg0, s32 *, 0x48) = (s32) M2C_FIELD(arg1, s32 *, 0x48);
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    return arg0;
}

}

extern "C" {
void __dt__8TObjChipFv();
void render_shadows__7TObjectFv();
void TObjChip__vt10(u8 *arg0);
void *__vt__8TObjChip[] = {
    0, 0,
    (void *)__dt__8TObjChipFv,
    (void *)update__8TObjChipFPv,
    (void *)dispatch_vt9__8TObjChipFPv,
    (void *)render_shadows__7TObjectFv,
    (void *)init_chips__8TObjChipFPv,
    (void *)spawn_chips__8TObjChipFPvPv,
    (void *)TObjChip__vt6,
    (void *)tick_chips__8TObjChipFPv,
    (void *)TObjChip__vt8,
    (void *)render__8TObjChipFPv,
    (void *)TObjChip__vt10,
    (void *)draw_chips__8TObjChipFPv,
};
}
