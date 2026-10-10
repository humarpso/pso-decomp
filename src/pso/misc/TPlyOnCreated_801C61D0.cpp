#define TOBJECT_OUT_OF_LINE_HELPERS
#include "pso/player/TPlayerReadyCallback.h"
#include "pso/player/TObjPlayer.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void * create__13TPlyOnCreatedFPvPv(void *arg0, void *arg1);
void run_task__20TPlayerReadyCallbackFv(void *arg0);
void *get_player_by_client_id(u16);
void *__ct__13TPlyOnCreatedFv(void *, void *, void *);
void *__nw__7TObjectFUl(int);
M2C_UNK queue_destruction__7TObjectFv(void *);

void * create__13TPlyOnCreatedFPvPv(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x24);
    if (o != NULL) {
        o = __ct__13TPlyOnCreatedFv(o, arg0, arg1);
    }
    return o;
}

}
void TPlayerReadyCallback::run_task() {
    TObjPlayer* player = (TObjPlayer*)get_player_by_client_id(player_id);
    if (player != NULL && player->m_cfc == 0) {
        void (*fn)(TObjPlayer*) = callback;
        if (fn != NULL) {
            fn(player);
        }
        queue_destruction();
    }
}
extern "C" {

}
