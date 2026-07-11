#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TORockJungleL01__create(void *arg0);
void *destroy__15TORockJungleL01FPvs(void *arg0, s16 arg1);
void *TORockJungleL01__ct(void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__10TORockCaveFv(void *, int);
void *__nw__7TObjectFUl(int);
void fn_800D7C58(void *, int);
void TObjPlayer__sub_80154A00(void *);
void fn_80156720(void *);
void queue_destruction__7TObjectFv(void *);

void *TORockJungleL01__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD8);
    if (o != NULL) {
        o = TORockJungleL01__ct(o, arg0);
    }
    return o;
}

extern M2C_UNK lbl_804DC448[];

void *destroy__15TORockJungleL01FPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804DC448;
        if (M2C_FIELD(arg0, void **, 0xD4) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xD4)); M2C_FIELD(arg0, M2C_UNK *, 0xD4) = 0; }
        TObjPlayer__sub_80154A00(arg0);
        fn_80156720(arg0);
        fn_800D7C58((s8 *)arg0 + 0xB4, -1);
        __dt__10TORockCaveFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
