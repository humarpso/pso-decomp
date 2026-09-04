#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6PlotFalz__vt61(void);
s32 create__14TBoss6PlotFalzFi(s32 arg0);
void free_all__14TBoss6PlotFalzFv(void);
int get_fish_count__8TObjFishFv(void);
s32 get_phase__8TObjFishFPv(void* p);
void render__14TBoss6PlotFalzFv(void);
int run_task__14TBoss6PlotFalzFv(void);
s32 TBoss6PlotFalz__ct(s32, s32, s32);
int TItemEffOrgaFlowShot__sub_80357204(void);
int TLobby__sub_8001FE7C(void*, void*);
s32 TObjControl__ct(s32, s32);
s32 __nw__7TObjectFUl(M2C_UNK);
int free_data__10TBoss6RockFv(void);
int free_global_instance__14TBoss4DarkFalzFv(void);
int free_resources__10TBoss6TubeFv(void);

void render__14TBoss6PlotFalzFv(void) {  }

int run_task__14TBoss6PlotFalzFv(void) { return 0; }

void TBoss6PlotFalz__vt61(void) {  }

    extern int lbl_805D66E8;
void free_all__14TBoss6PlotFalzFv(void) { free_global_instance__14TBoss4DarkFalzFv(); free_resources__10TBoss6TubeFv(); free_data__10TBoss6RockFv(); TItemEffOrgaFlowShot__sub_80357204(); TLobby__sub_8001FE7C((void*)(lbl_805D66E8), (void*)1); lbl_805D66E8 = 0; }

extern s32 tl_04;

s32 create__14TBoss6PlotFalzFi(s32 arg0) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x3E0);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TBoss6PlotFalz__ct(var_r31, var_r4, arg0);
    }
    return var_r31;
}

s32 get_phase__8TObjFishFPv(void* p) { return *(s32*)((char*)p + 0x378); }

    extern int lbl_805D66E8;
int get_fish_count__8TObjFishFv(void) {  return lbl_805D66E8; }

}
