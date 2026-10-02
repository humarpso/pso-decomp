#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

int TObjFish__sub_8033CDD8(void* p);
void * create__14TBoss6PlotFalzFPvPv(void *arg0, void *arg1);
void *destroy__8TObjFishFPvs(void *arg0, s16 arg1);
void restore_player_cameras();
int TObjFish__sub_8033CCC8(void*);
void *TObjFish__sub_8033D1AC(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void *__nw__7TObjectFUl(int);
void init_state_1__8TObjFishFPv(void *);
void request_destroy__11TBoss4Type2FUi(void *);

int TObjFish__sub_8033CDD8(void* p) { return TObjFish__sub_8033CCC8(p); }

extern M2C_UNK lbl_804EF9EC[];

void *destroy__8TObjFishFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EF9EC;
        restore_player_cameras();
        if (M2C_FIELD(arg0, void **, 0x88) != NULL) { init_state_1__8TObjFishFPv(M2C_FIELD(arg0, void **, 0x88)); M2C_FIELD(arg0, M2C_UNK *, 0x88) = 0; }
        if (M2C_FIELD(arg0, void **, 0x8C) != NULL) { request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x8C)); M2C_FIELD(arg0, M2C_UNK *, 0x8C) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void * create__14TBoss6PlotFalzFPvPv(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x90);
    if (o != NULL) {
        o = TObjFish__sub_8033D1AC(o, arg0, arg1);
    }
    return o;
}

}
