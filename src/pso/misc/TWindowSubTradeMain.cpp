#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Stack_80332594 {
    M2C_UNK sp8;
    f32 spC;
};

struct VBase_803323D8 { char pad[0x18]; };

struct VObj_803323D8 : VBase_803323D8 {
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

struct V3_803323D8 { f32 x, y, z; };

struct Anim_803323D8 { s32 a; u32 count; };

struct Bone_803323D8 { s32 a; Anim_803323D8 *anim; };

struct Mot_803323D8 { s32 a; s32 bone; s32 c; s32 d; };

struct O_803323D8 {
    u8 pad0[0x24]; s32 f24;
    u8 pad28[0x34 - 0x28]; s32 f34;
    u8 pad38[0x60 - 0x38]; s32 f60;
    u8 pad64[0xD8 - 0x64]; Mot_803323D8 *mots; Bone_803323D8 *bones;
    u8 padE0[0x326 - 0xE0]; s16 f326;
    u8 pad328[0x354 - 0x328]; f32 f354; f32 frame;
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
u8 * csnVectorUnder(s32, void *, s32);
void set_active__12TObjEneReconFv(void);
extern s32 lbl_805D53A4;
extern const f32 TObjEneMorfos__data_805DF870;
void TObjEneMorfos__sub_80332594(u8 *arg0);
int get_target_info__9TObjEneDDFPv(void*);
void update_player_state__9TObjEneDDFPv(void *, V3_803323D8 *, int);
void toggle_particle_effect__10TObjPlayerFv(void);
void end_effect_render__13TParticleCtrlFv(void);
s32 rotate_matrix_y(int, int);
void TObjPlayer__sub_803D9B2C(void);
void pop_matrix(void);
int TOHangerMachine01__sub_803D9C00(void *);
void set_global_param__8TObjFishFi(int);
s32 TObjEneSlimeOne__sub_803E4AF4(int, Anim_803323D8 *, f32);
s32 set_global_flag__10TObjPlayerFv(void);
void clear_global_state__10TObjPlayerFv(void);
extern const V3_803323D8 lbl_804775F0;
extern const f32 TObjEneMorfos__data_805DF86C;
extern const f32 TObjEneMorfos__data_805DF870;
extern const f32 TObjEneMorfos__data_805DF874;
void TObjEneMorfos__vt104(O_803323D8 *arg0);
u8 TObjEneMorfos__sub_8033263C(void *arg0, u16 arg1, u16 arg2, u16 arg3);
}

extern "C" {

void* TObjEneMorfosArm__sub_803326B4(void* p);
s32 TObjEneMorfosArm__sub_803326BC(void* p);
void TObjEneMorfos__vt103(void* p);
void TWindowSubTradeMain__sub_803323A8(void* p);
void TWindowSubTradeMain__sub_803323B8(void* p);
void TWindowSubTradeMain__sub_803323C8(void* p);
int TObjEneMorfos__sub_8033471C(void*);
int get_target_info__9TObjEneDDFPv(void*);

void TWindowSubTradeMain__sub_803323A8(void* p) { *(u16*)((char*)p + 0x60) |= 0x40; }
void TWindowSubTradeMain__sub_803323B8(void* p) { *(u16*)((char*)p + 0x60) &= 0xffffffbf; }
void TWindowSubTradeMain__sub_803323C8(void* p) { *(u16*)((char*)p + 0x70) &= 0xfffffffb; }

void TObjEneMorfos__vt104(O_803323D8 *arg0) {
    s32 idx;
    f32 frame;
    Anim_803323D8 *anim;
    get_target_info__9TObjEneDDFPv((void*)(arg0));
    if (((VObj_803323D8 *)arg0)->m8(TObjEneMorfos__data_805DF86C, TObjEneMorfos__data_805DF870) != 0) {
        if (arg0->f326 != 0xB) {
            V3_803323D8 v = lbl_804775F0;
            update_player_state__9TObjEneDDFPv(arg0, &v, 0);
        }
        toggle_particle_effect__10TObjPlayerFv();
        set_global_param__8TObjFishFi(arg0->f24);
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((u8 *)arg0 + 0x38);
        rotate_matrix_y(0, arg0->f60);
        idx = (s32)arg0->f354;
        if (idx < 0) {
            idx = 0;
        } else if (idx >= 5) {
            idx = 4;
        }
        anim = arg0->bones[arg0->mots[idx].bone].anim;
        frame = arg0->frame;
        if (frame < TObjEneMorfos__data_805DF874) {
            frame = TObjEneMorfos__data_805DF874;
        } else if (frame > (f32)(anim->count - 1)) {
            frame = (f32)anim->count;
        }
        set_global_flag__10TObjPlayerFv();
        TObjEneSlimeOne__sub_803E4AF4(arg0->f34, anim, frame);
        clear_global_state__10TObjPlayerFv();
        pop_matrix();
        end_effect_render__13TParticleCtrlFv();
    }
}

void TObjEneMorfos__vt103(void* p) { if (get_target_info__9TObjEneDDFPv(p) != 0) { TObjEneMorfos__sub_8033471C(p); } }

void TObjEneMorfos__sub_80332594(u8 *arg0) {
    Stack_80332594 stack;
    u8 *temp_r3;
    if ((lbl_805D53A4 % 5) == 0) {
        VecCopy__FP3VecPC3Vec(&stack.sp8, arg0 + 0x38);
        stack.spC += TObjEneMorfos__data_805DF870;
        temp_r3 = (u8 *)(csnVectorUnder((s32) &stack.sp8, arg0 + 0x120, 0x4000));
        if (temp_r3 != NULL) {
            M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) M2C_FIELD(temp_r3, s32 *, 0);
            VecCopy__FP3VecPC3Vec(arg0 + 0x3C8, M2C_FIELD(temp_r3, u8 **, 4));
        } else {
            VecCopy__FP3VecPC3Vec(arg0 + 0x3C8, arg0 + 0x38);
        }
    }
    if (M2C_FIELD(arg0, s32 *, 0x3C4) & 0x4000) {
        set_active__12TObjEneReconFv();
    }
}

u8 TObjEneMorfos__sub_8033263C(void *arg0, u16 arg1, u16 arg2, u16 arg3) {
    s32 r;
    s32 d;
    s32 c;
    s32 b;
    s32 a;
    a = arg1;
    b = arg2;
    if (a > b) {
        c = arg3;
        r = 0;
        d = a - c;
        if ((d >= 0 && b - c >= 0) || (d <= 0 && b - c <= 0)) {
            r = 1;
        }
        return r;
    } else {
        s32 r2;
        s32 d2;
        s32 c2;
        c2 = arg3;
        r2 = 0;
        d2 = a - c2;
        if ((d2 <= 0 && b - c2 >= 0) || (d2 >= 0 && b - c2 <= 0)) {
            r2 = 1;
        }
        return r2;
    }
}

void* TObjEneMorfosArm__sub_803326B4(void* p) { return (char*)p + 0x4a4; }
s32 TObjEneMorfosArm__sub_803326BC(void* p) { return *(s32*)((char*)p + 0x60); }

}
