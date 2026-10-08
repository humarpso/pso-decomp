#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8033DCA8_lbl_80477F2C {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_8033DCA8_lbl_804EFA08 {
    M2C_UNK value;
    u8 remaining[0x8];
};

typedef s32 M2C_UNK;
extern "C" {
extern RecoveredGlobal_8033DCA8_lbl_80477F2C lbl_80477F2C;
extern RecoveredGlobal_8033DCA8_lbl_804EFA08 lbl_804EFA08;
extern const f32 lbl_805DFA90;
void TObjFish__sub_8033DCA8(void);
s32 get_bml_motion(int, int);
s32 TObjFish__sub_8001EDB0(int, int);
s32 get_bml_model(int, int);
void activate_camera_mode(int);
void set_scripted_camera_pose(void *, void *, void *);
void cache_target_and_forward__11TCameraCtrlFii(void *, int);
s32 TObjFish__sub_800E3124(void *, void *);
void __ct__7TObjectFP7TObject(void *);
s32 get_fish_count__8TObjFishFv(void);
extern u8 lbl_80477F38[];
extern u8 lbl_80478058[];
extern u8 lbl_80478064[];
extern u8 lbl_80478070[];
extern s32 lbl_804DF614[];
extern s32 lbl_804EFA14[];
extern M2C_UNK lbl_804EFA1C[];
extern s32 lbl_805D42A8;
extern const f32 lbl_805DFA70;
u8 *TObjFish__sub_8033DA94(u8 *arg0, s32 arg1);
}

extern "C" {

void *create_variant__8TObjFishFPv(void *arg0);
void render_effect__8TObjFishFPv(u8 *arg0);
M2C_UNK post_translate_matrix(void *);
M2C_UNK draw_model_motion(int, int, f32);
M2C_UNK set_draw_callback_list__8TObjFishFPv(int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
void *__nw__7TObjectFUl(int);
M2C_UNK clear_global_state__10TObjPlayerFv();
M2C_UNK clear_render_callback__8TObjFishFv(int);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK set_global_param__8TObjFishFi(int);

#pragma push
#pragma opt_lifetimes off
#pragma opt_loop_invariants off
#pragma opt_common_subs off
#pragma opt_propagation off
typedef struct { s32 a, b, c; } Trip_8033DA94;
typedef struct {
    u8 pad[0x80];
    s32 arr[9];
    Trip_8033DA94 t[5];
} Fish_8033DA94;
u8 *TObjFish__sub_8033DA94(u8 *arg0, s32 arg1) {
    Fish_8033DA94 *self = (Fish_8033DA94 *)arg0;
    s32 v;
    s32 count;
    s32 i;
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EFA1C;
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D42A8;
    M2C_FIELD(arg0, s32 *, 0xEC) = arg1;
    count = get_fish_count__8TObjFishFv();
    for (i = 0; i < 2; i++) {
        {
            s32 t = lbl_804DF614[i];
            v = t;
            self->t[i].a = get_bml_model(count, t);
        }
        self->t[i].b = TObjFish__sub_8001EDB0(count, v);
        self->t[i].c = get_bml_motion(count, lbl_804EFA14[i]);
    }
    M2C_FIELD(arg0, s32 *, 0xBC) = get_bml_model(count, 4);
    M2C_FIELD(arg0, s32 *, 0xC0) = TObjFish__sub_8001EDB0(count, 4);
    M2C_FIELD(arg0, s32 *, 0xC4) = get_bml_motion(count, 0x20);
    M2C_FIELD(arg0, s32 *, 0xC8) = get_bml_model(count, 1);
    M2C_FIELD(arg0, s32 *, 0xCC) = TObjFish__sub_8001EDB0(count, 1);
    M2C_FIELD(arg0, s32 *, 0xD0) = get_bml_motion(count, 0x36);
    M2C_FIELD(arg0, s32 *, 0xD4) = get_bml_model(count, 0xC);
    M2C_FIELD(arg0, s32 *, 0xD8) = TObjFish__sub_8001EDB0(count, 0xC);
    M2C_FIELD(arg0, s32 *, 0xDC) = get_bml_motion(count, 0x22);
    M2C_FIELD(arg0, s32 *, 0x7C) = TObjFish__sub_800E3124(lbl_80477F38, arg0 + 0x1C);
    for (i = 0; i < 9; i++) {
        self->arr[i] = 0;
    }
    activate_camera_mode(5);
    set_scripted_camera_pose(lbl_80478058, lbl_80478058, lbl_80478064);
    cache_target_and_forward__11TCameraCtrlFii(lbl_80478070, 0x416C);
    M2C_FIELD(arg0, f32 *, 0xE0) = lbl_805DFA70;
    M2C_FIELD(arg0, f32 *, 0xE4) = lbl_805DFA70;
    M2C_FIELD(arg0, s32 *, 0xE8) = 0;
    return arg0;
}
#pragma pop

void *create_variant__8TObjFishFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xF0);
    if (o != NULL) {
        o = TObjFish__sub_8033DA94((u8 *)(o), (s32)(arg0));
    }
    return o;
}

typedef char RecoveredGlobal_8033DCA8_lbl_80477F2C_size[sizeof(RecoveredGlobal_8033DCA8_lbl_80477F2C) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_8033DCA8_lbl_804EFA08_size[sizeof(RecoveredGlobal_8033DCA8_lbl_804EFA08) == 0xC ? 1 : -1];
void TObjFish__sub_8033DCA8(void) {
    M2C_FIELD(&lbl_804EFA08.value, f32 *, 0) = (f32) M2C_FIELD(&lbl_80477F2C.value, f32 *, 0);
    M2C_FIELD(&lbl_804EFA08.value, f32 *, 4) = (f32) (lbl_805DFA90 + M2C_FIELD(&lbl_80477F2C.value, f32 *, 4));
    M2C_FIELD(&lbl_804EFA08.value, f32 *, 8) = (f32) M2C_FIELD(&lbl_80477F2C.value, f32 *, 8);
}

void render_effect__8TObjFishFPv(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x50) >= 0x1AC) {
        push_matrix();
        set_global_flag__10TObjPlayerFv();
        post_translate_matrix((void *) (arg0 + 0x58));
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x44)));
        set_draw_callback_list__8TObjFishFPv((int) (M2C_FIELD(arg0, s32 *, 0x9C)));
        draw_model_motion((int) (M2C_FIELD(arg0, s32 *, 0x40)), (int) (M2C_FIELD(arg0, s32 *, 0x48)), (f32) (M2C_FIELD(arg0, f32 *, 0x4C)));
        clear_render_callback__8TObjFishFv((int) (M2C_FIELD(arg0, s32 *, 0x9C)));
        clear_global_state__10TObjPlayerFv();
        pop_matrix();
    }
}

}
