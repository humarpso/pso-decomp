#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__15TORockJungleS01FPv(void *arg0);
void *__dt__15TORockJungleS01Fv(void *arg0, s16 arg1);
void *TORockJungleS01__ct(void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__18TORockCaveBrakableFv(void *, int);
void *__nw__7TObjectFUl(int);
void TObjPlayer__sub_80154A00(void *);
void fn_80156720(void *);
void queue_destruction__7TObjectFv(void *);

void *create__15TORockJungleS01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC0);
    if (o != NULL) {
        o = TORockJungleS01__ct(o, arg0);
    }
    return o;
}

extern M2C_UNK __vt__15TORockJungleS01[];

void *__dt__15TORockJungleS01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TORockJungleS01;
        if (M2C_FIELD(arg0, void **, 0xBC) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xBC)); M2C_FIELD(arg0, M2C_UNK *, 0xBC) = 0; }
        TObjPlayer__sub_80154A00(arg0);
        fn_80156720(arg0);
        __dt__18TORockCaveBrakableFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
