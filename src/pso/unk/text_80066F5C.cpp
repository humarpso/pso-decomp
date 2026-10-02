#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK apply_single_screen_state__6TSceneFv();
M2C_UNK TObjPlayer__sub_80083914(void *, void *);
M2C_UNK TObjPlayer__sub_803D99F8(void *, int);
int TObjPlayer__sub_803D9B2C(void);
int pop_matrix(void);
M2C_UNK TBoss7Tentacle__sub_803D9BA0(void *);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TOSignCave03__sub_803DB510(int);
void TObjPlayer__sub_80066F5C(u8 *arg0);
}

extern "C" {

void render_impl__19TObjBoss5FloorStoneFPvPv(void* p, void* a1);
int draw_if_all_ready__10TObjPlayerFv(void*);
int TObjPlayer__sub_803D9B2C(void);
int pop_matrix(void);
int set_global_param__8TObjFishFi(void*);

void TObjPlayer__sub_80066F5C(u8 *arg0) {
    if (arg0 != NULL) {
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 8));
        TObjPlayer__sub_803D99F8((void *) (arg0 + 0x14), (int) (1));
        TBoss7Tentacle__sub_803D9BA0((void *) (arg0 + 0x20));
        if (!(M2C_FIELD(arg0, s32 *, 0) & 8) && ((u32) M2C_FIELD(arg0, u32 *, 4) != 0U)) {
            TObjPlayer__sub_80083914((void *) (arg0 + 8), (void *) (arg0 + 0x14));
            TOSignCave03__sub_803DB510((int) (M2C_FIELD(arg0, u32 *, 4)));
            apply_single_screen_state__6TSceneFv();
        }
        TObjPlayer__sub_80066F5C(M2C_FIELD(arg0, u8 **, 0x2C));
        pop_matrix();
        TObjPlayer__sub_80066F5C(M2C_FIELD(arg0, u8 **, 0x30));
    }
}

void render_impl__19TObjBoss5FloorStoneFPvPv(void* p, void* a1) { draw_if_all_ready__10TObjPlayerFv(p); set_global_param__8TObjFishFi(p); TObjPlayer__sub_803D9B2C(); TObjPlayer__sub_80066F5C((u8 *)(a1)); pop_matrix(); }

}
