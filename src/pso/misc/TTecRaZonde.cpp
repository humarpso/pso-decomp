#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void create__11TTecRaZondeFPvPvPv(void *arg0, void *arg1, void *arg2);
int fn_802393D0(void);
void render__11TTecRaZondeFv(void);
void *TTecRaZonde__ct(void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);
int fn_80236EE8(void*);
int init_cast__9TTecRestaFPv(void* p);

void create__11TTecRaZondeFPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x150);
    if (o != NULL) {
        TTecRaZonde__ct(o, arg0, arg1, arg2);
    }
}

void render__11TTecRaZondeFv(void) {  }

int fn_802393D0(void) { return 0; }

}
