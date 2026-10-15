#include "types.h"
#include "pso/boss/TBoss4Type3.h"

extern "C" {

void *__ct__11TObjDFYutaiFv(void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

void *TBoss4Type3::create_yutai(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x2C);
    if (o != NULL) {
        o = __ct__11TObjDFYutaiFv(o, arg0, arg1, arg2);
    }
    return o;
}

extern s32 game_difficulty_selection;
extern f32 lbl_805D8A44;

void TBoss4Type3::check_attack_trigger() {
    if (((s32) game_difficulty_selection == 3) && ((s32) *(s32 *)((s8 *)this + 0x338) >= 0x78) && (*(f32 *)((s8 *)this + 0x37C) > (lbl_805D8A44 * *(f32 *)((s8 *)this + 0x378)))) {
        *(s32 *)((s8 *)this + 0x368) = 1;
    }
}

}
