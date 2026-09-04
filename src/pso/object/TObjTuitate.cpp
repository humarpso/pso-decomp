#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TObjTuitate__create(void *arg0);
void *__dt__11TObjTuitateFv(void *arg0, s16 arg1);
void fn_8019B09C(void);
int run_task__11TObjTuitateFv(void* p);
void TLobby__sub_8001FE7C(void*, int);
void TObjEneGibbles__sub_80156720(void *);
int TObjPlayer__sub_800D7BB0(void*);
void TObjPlayer__sub_800D7C58(void *, int);
void TObjPlayer__sub_80154A00(void *);
void *TObjTuitate__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);
void queue_destruction__7TObjectFv(void *);

int run_task__11TObjTuitateFv(void* p) { return TObjPlayer__sub_800D7BB0((char*)p + 0xac); }

extern M2C_UNK __vt__11TObjTuitate[];

void *__dt__11TObjTuitateFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TObjTuitate;
        if (M2C_FIELD(arg0, void **, 0xC8) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xC8)); M2C_FIELD(arg0, M2C_UNK *, 0xC8) = 0; }
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        TObjPlayer__sub_800D7C58((s8 *)arg0 + 0xAC, -1);
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_05;

void *TObjTuitate__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xCC);
    if (o != NULL) {
        o = TObjTuitate__ct(o, tl_05, arg0);
    }
    return o;
}

extern u32 lbl_805D5C70;

void fn_8019B09C(void) {
    if ((u32) lbl_805D5C70 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5C70, 1);
        lbl_805D5C70 = 0U;
    }
}

}
