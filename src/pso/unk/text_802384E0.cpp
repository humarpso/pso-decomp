#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__10TTecRaFoieFv(void *arg0, s16 arg1);
void create__10TTecRaFoieFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void create_ex__10TTecRaFoieFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void render__10TTecRaFoieFv(void);
int run_task__10TTecRaFoieFv(void);
void *TTecRaFoie__ct(void *, void *, void *, void *, void *);
void *TTecRaFoie__sub_80238BA4(void *, void *, void *, void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_technique_base__9TTecLukerFPvs(void *, int);

void render__10TTecRaFoieFv(void) {  }

int run_task__10TTecRaFoieFv(void) { return 0; }

void create__10TTecRaFoieFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x14C);
    if (o != NULL) {
        TTecRaFoie__ct(o, arg0, arg1, arg2, arg3);
    }
}

void create_ex__10TTecRaFoieFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x14C);
    if (o != NULL) {
        TTecRaFoie__sub_80238BA4(o, arg0, arg1, arg2, arg3);
    }
}

extern M2C_UNK __vt__10TTecRaFoie[];

void *__dt__10TTecRaFoieFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TTecRaFoie;
        destroy_technique_base__9TTecLukerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
