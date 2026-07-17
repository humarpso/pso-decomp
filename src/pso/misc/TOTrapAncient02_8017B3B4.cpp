#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define PADV virtual void CAT(pv, __LINE__)();
struct Base_B { char pad[0x18]; };
struct V_B : Base_B {
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    virtual s32 m8(f32, f32);
};

extern "C" {

void draw_model__15TOTrapAncient02FPv(void *arg0);
void *create__15TOTrapAncient02FPv(void *arg0);
void *TOTrapAncient02__ct(void *, void *, void *);
M2C_UNK render_particle_chain__15TOTrapAncient02FPv(void *);
M2C_UNK draw_effect_chain__15TOTrapAncient02FPv(void *);
void *__nw__7TObjectFUl(int);
s32 is_split_screen();
s32 get_state_flag__9TMainTaskFv();
s32 dispatch_input_to_instance__18TAdEnterPasswordGCFi(void *);
M2C_UNK func_80141618__Fv();
M2C_UNK set_depth_buffer_settings_id__FUl(M2C_UNK);

extern const f32 lbl_805DBA94;
extern const f32 lbl_805DBAA4;

void draw_model__15TOTrapAncient02FPv(void *arg0) {
    if (get_state_flag__9TMainTaskFv() != 1) {
        M2C_FIELD(arg0, s32 *, 0x340) = ((V_B *) arg0)->m8(lbl_805DBAA4, lbl_805DBA94);
        if (((s32) M2C_FIELD(arg0, s32 *, 0x340) == 1) && (((s32) M2C_FIELD(arg0, s32 *, 0x358) == 0) || (is_split_screen() != 0) || (dispatch_input_to_instance__18TAdEnterPasswordGCFi(arg0) == 0))) {
            set_depth_buffer_settings_id__FUl(3);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x358) != 0) {
                render_particle_chain__15TOTrapAncient02FPv(arg0);
            } else {
                draw_effect_chain__15TOTrapAncient02FPv(arg0);
            }
            func_80141618__Fv();
        }
    }
}

extern void *tl_05;

void *create__15TOTrapAncient02FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x35C);
    if (o != NULL) {
        o = TOTrapAncient02__ct(o, tl_05, arg0);
    }
    return o;
}

}
