#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TObjLazerFenceNorm__create(void *arg0);
void *__dt__18TObjLazerFenceNormFv(void *arg0, s16 arg1);
void free_resources__18TObjLazerFenceNormFv(void);
void run_task__18TObjLazerFenceNormFv(void *arg0);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TLobby__sub_803DA16C(void*);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
void *TObjLazerFenceNorm__ct(void *, void *, void *);
M2C_UNK TObjLazerFenceNorm__sub_80192CCC();
M2C_UNK TObjPlayer__sub_80154A00(void *);
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK destroy_particle_controller__10TObjPlayerFPvs(void *, M2C_UNK);
M2C_UNK reset_by_door__18TObjLazerFenceNormFPv();
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

void run_task__18TObjLazerFenceNormFv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xB4);
    switch (temp_r0) {
    case 0:
        TObjLazerFenceNorm__sub_80192CCC();
        return;
    case 1:
        reset_by_door__18TObjLazerFenceNormFPv();
        return;
    }
}

extern M2C_UNK __vt__18TObjLazerFenceNorm[];

void *__dt__18TObjLazerFenceNormFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjLazerFenceNorm;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_05;

void *TObjLazerFenceNorm__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD8);
    if (o != NULL) {
        o = TObjLazerFenceNorm__ct(o, tl_05, arg0);
    }
    return o;
}

extern u32 lbl_805D5C28;
extern u32 lbl_805D5C2C;

void free_resources__18TObjLazerFenceNormFv(void) {
    if ((u32) lbl_805D5C2C != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5C2C, 1);
        lbl_805D5C2C = 0U;
    }
    if ((u32) lbl_805D5C28 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D5C28);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D5C28);
        lbl_805D5C28 = 0U;
    }
}

}
