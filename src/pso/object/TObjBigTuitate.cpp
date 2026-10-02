#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
struct FadeBase_8019AA18 { char pad[0x14]; };

struct Fade_8019AA18 : FadeBase_8019AA18 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void begin();
    virtual void end();
};

struct ObjBase_8019AA18 { char pad[0x18]; };

struct Obj_8019AA18 : ObjBase_8019AA18 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 is_visible(f32, f32);
};

struct Vec_8019AA18 { f32 x, y, z; };

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct M2CCopy_38 { u8 bytes[0x38]; };

struct M2CCopy_3C { u8 bytes[0x3c]; };

extern "C" {
M2C_UNK TObjFish__sub_8001EDB0(s32, M2C_UNK);
s32 TObjFish__sub_8001EDC4(s32, M2C_UNK);
s32 isFading__15RenderFadeStateCFv(void *);
void restore__15RenderFadeStateFv(void *);
void fadeOut__15RenderFadeStateFv(void *);
void set_cull_none__8TObjFishFv(void);
void set_cull_back__8TObjFishFv(void);
s32 is_not_split_screen__13TRaderMapCoreFv(void);
s32 TCameraCtrl__sub_803D8934(int, void *, void *);
void rotate_matrix_y(int, int);
void TObjPlayer__sub_803D9B2C(void);
void pop_matrix(void);
void TOHangerMachine01__sub_803D9C00(void *);
void set_global_param__8TObjFishFi(void);
void TObjBoss2Tunnel__sub_803DB470(void);
extern u32 lbl_805D5C74;
extern const f32 lbl_805DBFA8;
extern const f32 lbl_805DBFAC;
extern const f32 lbl_805DBFB0;
void render__14TObjBigTuitateFv(Obj_8019AA18 *self);
M2C_UNK activate_and_dispatch__10TObjPlayerFPv(void *);
M2C_UNK init_and_activate__10TObjPlayerFPv(void *);
M2C_UNK reset_photon_effect__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_80154E3C(void *);
M2C_UNK TObjEneGibbles__sub_80156780(void *, void *, int);
M2C_UNK TObjPlayer__sub_801569F4();
s32 create__10TObjMapCsnFi(void *);
extern M2C_UNK lbl_804B9034[];
extern M2C_UNK __vt__14TObjBigTuitate[];
extern s32 lbl_805D3454;
extern const f32 lbl_805DBFB4;
extern const f32 lbl_805DBFB8;
extern const f32 lbl_805DBFBC;
void *TObjBigTuitate__ct(void *arg0, void *arg1, void *arg2);
}

extern "C" {

void *TObjBigTuitate__create(void *arg0);
void *__dt__14TObjBigTuitateFv(void *arg0, s16 arg1);
void free_instance__14TObjBigTuitateFv(void);
int run_task__14TObjBigTuitateFv(void* p);
void TLobby__sub_8001FE7C(void*, int);
void TObjEneGibbles__sub_80156720(void *);
int TObjPlayer__sub_800D7BB0(void*);
void TObjPlayer__sub_800D7C58(void *, int);
void TObjPlayer__sub_80154A00(void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);
void queue_destruction__7TObjectFv(void *);

void render__14TObjBigTuitateFv(Obj_8019AA18 *self) {
    u8 *arg0 = (u8 *)self;
    Vec_8019AA18 v;
    s32 fading;
    if (self->is_visible(lbl_805DBFA8, lbl_805DBFAC) == 0) {
        return;
    }
    TCameraCtrl__sub_803D8934(0, arg0 + 0x38, &v);
    if (-v.z < lbl_805DBFB0) {
        fadeOut__15RenderFadeStateFv(arg0 + 0xAC);
    } else {
        restore__15RenderFadeStateFv(arg0 + 0xAC);
    }
    set_cull_back__8TObjFishFv();
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        fading = 0;
    } else {
        fading = isFading__15RenderFadeStateCFv(arg0 + 0xAC);
    }
    if (fading != 0) {
        ((Fade_8019AA18 *)(arg0 + 0xAC))->begin();
    }
    TObjFish__sub_8001EDB0((*(s32 *)&lbl_805D5C74), 0);
    set_global_param__8TObjFishFi();
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
    rotate_matrix_y(0, *(s32 *)(arg0 + 0x60));
    TObjFish__sub_8001EDC4((*(s32 *)&lbl_805D5C74), 0);
    TObjBoss2Tunnel__sub_803DB470();
    pop_matrix();
    if (fading != 0) {
        ((Fade_8019AA18 *)(arg0 + 0xAC))->end();
    }
    set_cull_none__8TObjFishFv();
}

int run_task__14TObjBigTuitateFv(void* p) { return TObjPlayer__sub_800D7BB0((char*)p + 0xac); }

extern M2C_UNK __vt__14TObjBigTuitate[];

void *__dt__14TObjBigTuitateFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TObjBigTuitate;
        if (M2C_FIELD(arg0, void **, 0xC8) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xC8)); M2C_FIELD(arg0, M2C_UNK *, 0xC8) = 0; }
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        TObjPlayer__sub_800D7C58((s8 *)arg0 + 0xAC, -1);
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_05;

#pragma push
#pragma opt_common_subs off
void *TObjBigTuitate__ct(void *arg0, void *arg1, void *arg2) {
    struct CopyStack_8019ABE8 { u8 bytes[0x3C]; };
    CopyStack_8019ABE8 copy_storage_8019ABE8;
    s32 temp_r4;
    TObjPlayer__sub_801569F4();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TObjBigTuitate;
    init_and_activate__10TObjPlayerFPv((void *) ((u8 *)arg0 + 0xAC));
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3454;
    ((VObj_18_1a504b *)(arg0))->m5((s32)arg2);
    TObjEneGibbles__sub_80156780((void *) (arg0), (void *) (lbl_804B9034), (int) (1));
    TObjPlayer__sub_80154E3C((void *) (arg0));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    temp_r4 = (s32)arg2 - 4;
    *(M2CCopy_3C *)(copy_storage_8019ABE8.bytes) = *(const M2CCopy_3C *)(temp_r4 + 4);
    (*(f32 *)(copy_storage_8019ABE8.bytes + 0x24)) = lbl_805DBFB4;
    (*(f32 *)(copy_storage_8019ABE8.bytes + 0x28)) = lbl_805DBFB8;
    (*(f32 *)(copy_storage_8019ABE8.bytes + 0x2C)) = lbl_805DBFBC;
    M2C_FIELD(arg0, s32 *, 0xC8) = create__10TObjMapCsnFi((void *) ((copy_storage_8019ABE8.bytes)));
    activate_and_dispatch__10TObjPlayerFPv((void *) ((u8 *)arg0 + 0xAC));
    return arg0;
}
#pragma pop

void *TObjBigTuitate__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xCC);
    if (o != NULL) {
        o = TObjBigTuitate__ct((void *)(o), (void *)(tl_05), (void *)(arg0));
    }
    return o;
}

extern u32 lbl_805D5C74;

void free_instance__14TObjBigTuitateFv(void) {
    if ((u32) lbl_805D5C74 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5C74, 1);
        lbl_805D5C74 = 0U;
    }
}

}
