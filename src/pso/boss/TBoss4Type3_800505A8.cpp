#include "types.h"

extern "C" {

void check_attack_trigger__11TBoss4Type3FPv(void *arg0);
void * create_yutai__11TBoss4Type3FPvPvPv(void *arg0, void *arg1, void *arg2);
void *__ct__11TObjDFYutaiFv(void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

void * create_yutai__11TBoss4Type3FPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x2C);
    if (o != NULL) {
        o = __ct__11TObjDFYutaiFv(o, arg0, arg1, arg2);
    }
    return o;
}

extern s32 game_difficulty_selection;
extern f32 lbl_805D8A44;

void check_attack_trigger__11TBoss4Type3FPv(void *arg0) {
    if (((s32) game_difficulty_selection == 3) && ((s32) *(s32 *)((s8 *)arg0 + 0x338) >= 0x78) && (*(f32 *)((s8 *)arg0 + 0x37C) > (lbl_805D8A44 * *(f32 *)((s8 *)arg0 + 0x378)))) {
        *(s32 *)((s8 *)arg0 + 0x368) = 1;
    }
}

}
