#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK;
struct O_8033E5A8 {
    u8 pad0[0x18];
    void *vt;
    u8 pad1c[0x70 - 0x1C];
    void *f70;
    u8 pad74[0x80 - 0x74];
    void *f80;
    u8 pad84[0x9C - 0x84];
    void *f9c;
    void *fa0[4];
};

extern "C" {
void *__nw__7TObjectFUl(int);
void *TObjFish__sub_8033E688(void *, void *, void *);
void * fn_8033E8C0(void *arg0, void *arg1);
M2C_UNK __dt__7TObjectFv(void *, int);
M2C_UNK TCameraCtrl__sub_80069DA8();
void request_destroy__11TBoss4Type2FUi(void *);
void init_state_1__8TObjFishFPv(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK TBoss6PlotFalz__sub_802AC4D8();
extern u8 lbl_804EFA38[];
O_8033E5A8 *TObjFish__sub_8033E5A8(O_8033E5A8 *arg0, s16 arg1);
}

extern "C" {

void update__8TObjFishFPv(void* p);
int TObjFish__sub_8033DD4C(void*);
int TObjFish__sub_8033DE60(void*);
int TObjFish__sub_8033DFB4(void*);
int TObjPlayer__sub_803078B0(void);
int TObjPlayer__sub_803E1D90(int, int, int, int);
void init_particle_effect__10TObjPlayerFv(void);
int render_effect__8TObjFishFPv(void*);
int set_global_param__8TObjFishFi(void);

void update__8TObjFishFPv(void* p) { TObjFish__sub_8033DFB4(p); TObjFish__sub_8033DE60(p); TObjFish__sub_8033DD4C(p); render_effect__8TObjFishFPv(p); }

O_8033E5A8 *TObjFish__sub_8033E5A8(O_8033E5A8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        s32 i;
        arg0->vt = lbl_804EFA38;
        for (i = 0; i < 4; i++) {
            if (arg0->fa0[i] != NULL) {
                request_destroy__11TBoss4Type2FUi(arg0->fa0[i]);
                arg0->fa0[i] = NULL;
            }
        }
        TCameraCtrl__sub_80069DA8();
        TBoss6PlotFalz__sub_802AC4D8();
        if (arg0->f70 != NULL) {
            init_state_1__8TObjFishFPv(arg0->f70);
            arg0->f70 = NULL;
        }
        if (arg0->f80 != NULL) {
            init_state_1__8TObjFishFPv(arg0->f80);
            arg0->f80 = NULL;
        }
        if (arg0->f9c != NULL) {
            init_state_1__8TObjFishFPv(arg0->f9c);
            arg0->f9c = NULL;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void * fn_8033E8C0(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0xB4);
    if (o != NULL) {
        o = TObjFish__sub_8033E688(o, arg0, arg1);
    }
    return o;
}

}
