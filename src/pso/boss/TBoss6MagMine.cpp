#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6MagMine__sub_8036897C(void *arg0);
int TBoss6MagMine__sub_80369598(void);
void TBoss6MagMine__vt3(s32 arg0);
void TBoss6MagMine__vt4(void* p);
int TBoss6PlotFalz__sub_8036964C(void);
void *__dt__13TBoss6MagMineFPvs(void *arg0, s16 arg1);
void copy_pos__13TBoss6MagMineFi(s32 arg0);
s32 create__13TBoss6MagMineFi(s32 arg0);
s32 get_field_0x42c__13TBoss6MagMineFPv(void* p);
void init__13TBoss6MagMineFPv(void* p);
void update_linked_state__13TBoss6MagMineFPv(void *arg0);
s32 TBoss6MagMine__ct(s32, s32, s32);
M2C_UNK TBoss6MagMine__sub_80368C14();
M2C_UNK TBoss6PlotFalz__sub_802ABE3C(s32, M2C_UNK, M2C_UNK, f32);
M2C_UNK TBoss6PlotFalz__sub_802AC008(f32, f32);
int TOHangerMachine01__sub_803D9C00(void*);
int TOSwitchAttack__sub_80087278(void*, void*, void*);
s32 TObjControl__ct(s32, s32);
void TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjEneSlimeOne__sub_803E4AF4(s32, s32, f32);
s32 TObjFish__sub_8001ED9C(s32, M2C_UNK);
s32 TObjFish__sub_8001EDB0(s32, M2C_UNK);
s32 TObjFish__sub_8001EDC4(s32, M2C_UNK);
int TObjPlayer__sub_803D9214(void*, void*);
int TObjPlayer__sub_803D9B2C(void*);
int TObjPlayer__sub_803D9B78(void);
M2C_UNK VecCopy__FP3VecPC3Vec(s32, s32);
void __dl__7TObjectFPv(void *);
void __dt__9TObjEnemyFv(void *, int);
s32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK clear_global_state__10TObjPlayerFv();
int queue_destruction__7TObjectFv(void*);
void request_destroy__11TBoss4Type2FUi(void *);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK update_camera_target__14TBoss6PlotFalzFv();

void TBoss6MagMine__sub_8036897C(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x390) != 4) {
        M2C_FIELD(arg0, s32 *, 0x390) = 4;
    }
}

void copy_pos__13TBoss6MagMineFi(s32 arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
}

extern f32 TBoss6MagMine__data_805E0314;

void update_linked_state__13TBoss6MagMineFPv(void *arg0) {
    s32 temp_r31;
    s32 temp_r31_2;
    s32 temp_r30;

    set_global_flag__10TObjPlayerFv();
    temp_r31 = TObjFish__sub_8001EDB0(M2C_FIELD(arg0, s32 *, 0x374), 2);
    temp_r30 = TObjFish__sub_8001EDC4(M2C_FIELD(arg0, s32 *, 0x374), 2);
    temp_r31_2 = TObjFish__sub_8001ED9C(M2C_FIELD(arg0, s32 *, 0x374), 0);
    set_global_param__8TObjFishFi(temp_r31);
    TBoss6PlotFalz__sub_802AC008(M2C_FIELD(arg0, f32 *, 0x3A8), TBoss6MagMine__data_805E0314);
    TObjEneSlimeOne__sub_803E4AF4(temp_r30, temp_r31_2, M2C_FIELD(arg0, f32 *, 0x398));
    update_camera_target__14TBoss6PlotFalzFv();
    clear_global_state__10TObjPlayerFv();
}

void init__13TBoss6MagMineFPv(void* p) { TObjPlayer__sub_803D9B2C(p); TOHangerMachine01__sub_803D9C00((char*)p + 0x38); TObjPlayer__sub_803D9214((void*)0, *(void**)((char*)p + 0x3ac)); update_linked_state__13TBoss6MagMineFPv((void *)(p)); TObjPlayer__sub_803D9B78(); }

void TBoss6MagMine__vt4(void* p) { TOSwitchAttack__sub_80087278((void*)((char*)p + 0x38), (void*)((void*)252), (void*)((void*)64)); queue_destruction__7TObjectFv((void*)(p)); }

extern f32 lbl_805E0320;

void TBoss6MagMine__vt3(s32 arg0) {
    TBoss6MagMine__sub_80368C14();
    TOSwitchAttack__sub_80087278((void*)(arg0 + 0x38), (void*)(0xFB), (void*)(0x40));
    TOSwitchAttack__sub_80087278((void*)(arg0 + 0x38), (void*)(0xFC), (void*)(0x40));
    TBoss6PlotFalz__sub_802ABE3C(arg0 + 0x38, 0xC0, 0xF, lbl_805E0320);
    queue_destruction__7TObjectFv((void*)(arg0));
}

extern M2C_UNK lbl_804F322C[];

void *__dt__13TBoss6MagMineFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F322C;
        if (M2C_FIELD(arg0, void **, 0x3B0) != NULL) { request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x3B0)); M2C_FIELD(arg0, M2C_UNK *, 0x3B0) = 0; }
        TObjEneGibbles__sub_80156720(arg0);
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 tl_04;

s32 create__13TBoss6MagMineFi(s32 arg0) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x3B4);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TBoss6MagMine__ct(var_r31, var_r4, arg0);
    }
    return var_r31;
}

int TBoss6MagMine__sub_80369598(void) { return 0; }

s32 get_field_0x42c__13TBoss6MagMineFPv(void* p) { return *(s32*)((char*)p + 0x42c); }

    extern int TBoss6PlotFalz__data_805D66F4;
int TBoss6PlotFalz__sub_8036964C(void) {  return TBoss6PlotFalz__data_805D66F4; }

}
