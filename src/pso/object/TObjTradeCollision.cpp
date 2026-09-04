#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 fn_802C7ECC(void *, int);
M2C_UNK TWindowSubTradeMain__sub_802D3940(int);
M2C_UNK TWindowSubTradeMain__sub_802D3958(int);
}

extern "C" {

void TOTrapChainSawEdge__vt23(void *arg0);
void *TObjTradeCollision__create(void *arg0);
void *__dt__18TObjTradeCollisionFv(void *arg0, s16 arg1);
void render__18TObjTradeCollisionFv(void);
void TOHangerMachine01__sub_803D9C00(void *);
void TObjDoor__sub_803DC894(void *, void *, f32);
void TObjPlayer__sub_803D9214(int, void *);
void TObjPlayer__sub_803D9B2C(void);
void TObjPlayer__sub_803D9B78(void);
void *TObjTradeCollision__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);
void set_global_param__8TObjFishFi(void *);

void render__18TObjTradeCollisionFv(void) {  }

extern M2C_UNK __vt__18TObjTradeCollision[];

void run_task__18TObjTradeCollisionFv(s32 arg0) {
    s32 var_r31;
    var_r31 = 0;
    do {
        if (fn_802C7ECC((void *) (arg0), (int) (var_r31)) != 0) {
            TWindowSubTradeMain__sub_802D3958((int) (var_r31));
        } else {
            TWindowSubTradeMain__sub_802D3940((int) (var_r31));
        }
        var_r31 += 1;
    } while (var_r31 < 4);
}

void *__dt__18TObjTradeCollisionFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjTradeCollision;
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_05;

void *TObjTradeCollision__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xB0);
    if (o != NULL) {
        o = TObjTradeCollision__ct(o, tl_05, arg0);
    }
    return o;
}

void TOTrapChainSawEdge__vt23(void *arg0) {
    set_global_param__8TObjFishFi(M2C_FIELD(arg0, void **, 0x24));
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *)((char *)arg0 + 56));
    TObjPlayer__sub_803D9B2C();
    TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, void **, 0x60));
    TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, void **, 0xD4));
    TObjDoor__sub_803DC894(M2C_FIELD(arg0, void **, 0xC8), M2C_FIELD(arg0, void **, 0xBC), M2C_FIELD(arg0, f32 *, 0xB4));
    TObjPlayer__sub_803D9B78();
    TObjPlayer__sub_803D9B78();
}

}
