#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_14_aa9368 { char pad[0x14]; };

struct VObj_14_aa9368 : VBase_14_aa9368 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual M2C_UNK m6();
    virtual M2C_UNK m7();
    s32 f18;
};

struct Obj_800E20D0 { u8 pad[0x3EC]; VObj_14_aa9368 fades[2]; };

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

extern "C" {
s32 is_split_screen();
s32 get_camera_mode__11TCameraCtrlFv();
s32 updateFromCamera__15RenderFadeStateFPCf(int, void *);
M2C_UNK TObjPlayer__sub_800D7BB0(int, int);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK update_linked_effect__14TObjEnePanarmsFPv(void *);
void draw__14TObjEnePanarmsFPv(void* p);
M2C_UNK end_effect_render__13TParticleCtrlFv();
s32 toggle_flag_9__10TObjPlayerFPv(void *);
extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;
extern const f32 TObjEnePanarms__data_805DA524;
extern const f32 TObjEnePanarms__data_805DA560;
extern const f32 lbl_805DA594;
void TObjEnePanarms__sub_800E20D0(u8 *arg0);
}

extern "C" {

void draw__14TObjEnePanarmsFPv(void* p);
int TOHangerMachine01__sub_803D9C00(void*);
int draw__16TObjEneRe7BeruraFPv(void*);
int clear_render_callback__8TObjFishFv(void*);
int TObjFish__sub_800E3074(void*);
int TObjPlayer__sub_803D9214(void*, void*);
int TObjPlayer__sub_803D9B2C(void*);
int TObjPlayer__sub_803D9B78(void);
int set_global_param__8TObjFishFi(void*);

void draw__14TObjEnePanarmsFPv(void* p) { TObjPlayer__sub_803D9B2C(p); TOHangerMachine01__sub_803D9C00((char*)p + 0x38); TObjPlayer__sub_803D9214((void*)0, *(void**)((char*)p + 0x60)); set_global_param__8TObjFishFi(*(void**)((char*)p + 0x24)); TObjFish__sub_800E3074(*(void**)((char*)p + 0x3dc)); draw__16TObjEneRe7BeruraFPv(p); clear_render_callback__8TObjFishFv(*(void**)((char*)p + 0x3dc)); TObjPlayer__sub_803D9B78(); }
void TObjEnePanarms__sub_800E20D0(u8 *arg0) {
    s32 temp_r4;
    s32 var_r31;
    VObj_14_aa9368 *temp_r31;
    s32 var_r30;
    if ((((VObj_18_26a62c *)(arg0))->m8(TObjEnePanarms__data_805DA560, lbl_805DA594) == 0) || ((s32) M2C_FIELD(arg0, s32 *, 0x384) == 0)) {
        M2C_FIELD(arg0, f32 *, 0x3AC) = (f32) TObjEnePanarms__data_805DA524;
        M2C_FIELD(arg0, f32 *, 0x3A8) = (f32) TObjEnePanarms__data_805DA524;
        M2C_FIELD(arg0, f32 *, 0x3A4) = (f32) TObjEnePanarms__data_805DA524;
        return;
    }
    var_r31 = 0;
    if (is_split_screen() != 0) {
        var_r31 = get_camera_mode__11TCameraCtrlFv();
    }
    toggle_particle_effect__10TObjPlayerFv();
    temp_r4 = some_id_805c6f74;
    lbl_805D5660 = temp_r4;
    some_id_805c6f74 = temp_r4 | 0x01000000 | 1;
    temp_r31 = &((Obj_800E20D0 *) arg0)->fades[var_r31];
    TObjPlayer__sub_800D7BB0((int) (temp_r31), (int) (temp_r4));
    if (updateFromCamera__15RenderFadeStateFPCf((int) (temp_r31), (void *) (arg0 + 0x2FC)) != 0) {
        temp_r31->m6();
        var_r30 = 1;
        if (toggle_flag_9__10TObjPlayerFPv((void *) (arg0)) != 0) {
            var_r30 = 0;
        }
        if (var_r30 != 0) {
            draw__14TObjEnePanarmsFPv((void*)((void *) (arg0)));
        }
        temp_r31->m7();
    } else {
        draw__14TObjEnePanarmsFPv((void*)((void *) (arg0)));
    }
    some_id_805c6f74 = lbl_805D5660;
    end_effect_render__13TParticleCtrlFv();
    update_linked_effect__14TObjEnePanarmsFPv((void *) (arg0));
}

}
