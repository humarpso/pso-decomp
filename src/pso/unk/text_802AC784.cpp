#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802ACBE4_lbl_804DE200 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_802ACBE4_lbl_804DE200_size[sizeof(RecoveredGlobal_802ACBE4_lbl_804DE200) == 0x10 ? 1 : -1];

extern "C" {
s32 query_teammate_state__9TObjEneDDFPv();
M2C_UNK TBoss6PlotFalz__sub_802AB14C(void *);
M2C_UNK TBoss6PlotFalz__sub_802AB1C8(void *);
M2C_UNK set_visible_flag__14TBoss6PlotFalzFPv(void *);
void run_task__14TBoss6PlotFalzFv(u8 *arg0);
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
M2C_UNK TBoss6Tube__sub_802B1760();
M2C_UNK fn_802E52AC();
M2C_UNK TBoss6Rock__sub_80354B18();
M2C_UNK TItemEffOrgaFlowShot__sub_80357210();
M2C_UNK TLobby__sub_8036DDE8();
extern RecoveredGlobal_802ACBE4_lbl_804DE200 lbl_804DE200;
extern int lbl_805D66E8;
void TBoss6PlotFalz__sub_802ACBE4(void);
}

extern "C" {

void TBoss6PlotFalz__vt61(void);
s32 create__14TBoss6PlotFalzFi(s32 arg0);
void free_all__14TBoss6PlotFalzFv(void);
int get_fish_count__8TObjFishFv(void);
s32 get_phase__8TObjFishFPv(void* p);
void render__14TBoss6PlotFalzFv(void);
s32 TBoss6PlotFalz__ct(s32, s32, s32);
int TItemEffOrgaFlowShot__sub_80357204(void);
int TLobby__sub_8001FE7C(void*, void*);
s32 TObjControl__ct(s32, s32);
s32 __nw__7TObjectFUl(M2C_UNK);
int free_data__10TBoss6RockFv(void);
int free_global_instance__14TBoss4DarkFalzFv(void);
int free_resources__10TBoss6TubeFv(void);

void render__14TBoss6PlotFalzFv(void) {  }

void run_task__14TBoss6PlotFalzFv(u8 *arg0) {
    if (query_teammate_state__9TObjEneDDFPv() == 0) {
        set_visible_flag__14TBoss6PlotFalzFPv((void *) (arg0));
        if ((s32) M2C_FIELD(arg0, s32 *, 0x374) == 0) {
            TBoss6PlotFalz__sub_802AB1C8((void *) (arg0));
        }
        TBoss6PlotFalz__sub_802AB14C((void *) (arg0));
    }
}

void TBoss6PlotFalz__vt61(void) {  }

    extern int lbl_805D66E8;
void free_all__14TBoss6PlotFalzFv(void) { free_global_instance__14TBoss4DarkFalzFv(); free_resources__10TBoss6TubeFv(); free_data__10TBoss6RockFv(); TItemEffOrgaFlowShot__sub_80357204(); TLobby__sub_8001FE7C((void*)(lbl_805D66E8), (void*)1); lbl_805D66E8 = 0; }

extern s32 tl_04;

void TBoss6PlotFalz__sub_802ACBE4(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 5, &lbl_804DE200.value, 0, 0, 0));
    }
    (*(u8 * *)&lbl_805D66E8) = (unsigned char *) ((void *) var_r0);
    if ((u32) var_r0 != 0U) {
        TLobby__sub_8036DDE8();
        TItemEffOrgaFlowShot__sub_80357210();
        TBoss6Rock__sub_80354B18();
        TBoss6Tube__sub_802B1760();
        fn_802E52AC();
    }
}

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
