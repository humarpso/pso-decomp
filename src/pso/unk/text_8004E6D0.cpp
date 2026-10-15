#include "types.h"
#include "pso/boss/TBoss4DarkFalz.h"

typedef struct Rec_8004E918 {
    s32 a;
    s32 b;
    s32 c;
} Rec_8004E918;

typedef struct Obj_8004E918 {
    u8 pad0[0x90];
    Rec_8004E918 recs[2];
    s32 fa8;
    f32 fac[3];
    s32 fb8;
    s32 fbc;
    f32 fc0;
} Obj_8004E918;

extern "C" {
void sync_player_globals__10TObjPlayerFv();
void TObjPlayer__sub_80052390(f32);
void rotate_matrix_y(s32, s32);
void push_matrix();
void pop_matrix();
void post_translate_matrix(void *);
void set_global_param__8TObjFishFl(s32);
void draw_model_motion(s32, s32, f32);
void set_global_flag__10TObjPlayerFv();
void clear_global_state__10TObjPlayerFv();
extern const f32 lbl_805D89B8;
extern const f32 lbl_805D89BC;
extern const f32 lbl_805D89C0;
}

extern "C" {

void *TObjDFDemo1__ct(void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

void *TBoss4DarkFalz::create_demo1(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x130);
    if (o != NULL) {
        o = TObjDFDemo1__ct(o, arg0, arg1, arg2);
    }
    return o;
}

}
