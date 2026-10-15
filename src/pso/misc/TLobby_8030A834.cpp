#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
extern "C" {
void *fn_8030A83C(void *arg0);
void *__ct__14TBoss4ZakoDrawFv(void *, void *);
void *__nw__7TObjectFUl(int);
void *fn_8030A83C(void *arg0);
}

extern "C" {

int get_online_ready_flag__6TLobbyFv(void);
int TCameraCtrl__sub_8030ABF4(void);
int end_effect_render__13TParticleCtrlFv(void);
void render__14TBoss4ZakoDrawFv(void);
int toggle_particle_effect__10TObjPlayerFv(void);

    extern int lobby_online_ready_flag;
int get_online_ready_flag__6TLobbyFv(void) {  return lobby_online_ready_flag; }

void *fn_8030A83C(void *arg0) {
    void *o = __nw__7TObjectFUl(0x1C);
    if (o != NULL) {
        o = __ct__14TBoss4ZakoDrawFv(o, arg0);
    }
    return o;
}

}
