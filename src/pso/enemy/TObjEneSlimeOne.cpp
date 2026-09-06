#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
int TObjEneSlimeOne__sub_800EAE78(void*, void*);
M2C_UNK TObjEneSlimeOne__sub_800EB654(int, void *);
s16 check_player_field_7cc__15TObjEneSlimeOneFPv();
u32 TPlayerBattleCtrl4P__sub_801BA74C();
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
extern s32 lbl_805D586C;
void TObjEneSlimeOne__vt60(u8 *arg0);
}

extern "C" {

int TObjEneSlimeOne__vt59(void);
void TObjEneSlimeOne__vt61(void* p);
void *__dt__15TObjEneSlimeOneFv(void *arg0, s16 arg1);
void clear_child_flag__15TObjEneSlimeOneFPv(void *arg0);
s32 create__15TObjEneSlimeOneFii(s32 arg0, s32 arg1);
s32 create__15TObjEneSlimeOneFiii(s32 arg0, s32 arg1, s32 arg2);
void init_state__15TObjEneSlimeOneFPv(void* a0);
void reset_display__15TObjEneSlimeOneFPv(void* a0);
void set_display_mode__15TObjEneSlimeOneFPvi(void *arg0, s32 arg1);
void set_random_timer_15__15TObjEneSlimeOneFPv(void* p);
void set_random_timer__15TObjEneSlimeOneFPvii(void *arg0, s32 arg1, s32 arg2);
void set_target_flag_bit0__15TObjEneSlimeOneFPv(void *arg0);
void update_wait_search__15TObjEneSlimeOneFPv(void *arg0);
s32 TObjControl__ct(s32, s32);
void TObjEneGibbles__sub_80156720(void *);
s32 TObjEneSlimeOne__ct(s32, s32, s32, s32, s32);
int TObjEneSlimeOne__sub_800EAD84(void);
int TObjEneSlimeOne__sub_800EAE78(void*, void*);
s32 TObjEneSlimeOne__sub_800EB4A0(s32, s32, s32, s32);
int TObjEneSlimeOne__sub_800EC7F4(void*, void*);
u16 TObjPlayer__sub_800115C4(void *, M2C_UNK, f32);
void __dl__7TObjectFPv(void *);
void __dt__15TObjEneSlimeOneFis(void *, int);
void __dt__9TObjEnemyFv(void *, int);
s32 __nw__7TObjectFUl(M2C_UNK);
f32 calc_boss4_scale__10TObjPlayerFi();
void request_destroy__11TBoss4Type2FUi(void *);

    extern const float lbl_805DA6B4;
    extern const float lbl_805DA708;
void reset_display__15TObjEneSlimeOneFPv(void* a0) { set_display_mode__15TObjEneSlimeOneFPvi((void *)((void*)(a0)), (s32)((void*)(0))); *(int*)((char*)a0 + 0x30) = (*(int*)((char*)a0 + 0x30) & 0xfffbffff); *(float*)((char*)a0 + 0x398) = lbl_805DA6B4; *(float*)((char*)a0 + 0x3a4) = lbl_805DA708; }

extern f32 lbl_805DA6DC;

void update_wait_search__15TObjEneSlimeOneFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x390) - 1;
    M2C_FIELD(arg0, s32 *, 0x390) = temp_r0;
    if (temp_r0 <= 0) {
        if (TObjPlayer__sub_800115C4(arg0, 0, lbl_805DA6DC) == 0xFFFF) {
            temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x3C8) + 1;
            M2C_FIELD(arg0, s32 *, 0x3C8) = temp_r0_2;
            if (temp_r0_2 >= 5) {
                M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(arg0, f32 *, 0x50);
                M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(arg0, f32 *, 0x58);
                M2C_FIELD(arg0, s32 *, 0x3C8) = 5;
            }
            set_random_timer_15__15TObjEneSlimeOneFPv((void*)((void*)(arg0)));
            return;
        }
        TObjEneSlimeOne__sub_800EAE78((void*)(arg0), (void*)(1));
    }
}

    extern const float lbl_805DA6B4;
    extern const float lbl_805DA708;
void init_state__15TObjEneSlimeOneFPv(void* a0) { TObjEneSlimeOne__sub_800EAD84(); *(float*)((char*)a0 + 0x3a4) = lbl_805DA708; *(float*)((char*)a0 + 0x3b0) = lbl_805DA6B4; *(float*)((char*)a0 + 0x3ac) = lbl_805DA6B4; *(float*)((char*)a0 + 0x3a8) = lbl_805DA6B4; *(float*)((char*)a0 + 0x3a0) = lbl_805DA6B4; *(int*)((char*)a0 + 0x3c8) = 0; TObjEneSlimeOne__sub_800EC7F4((void*)(*(int*)((char*)a0 + 0x388)), (void*)7); set_display_mode__15TObjEneSlimeOneFPvi((void *)((void*)(a0)), (s32)((void*)((void*)0))); *(int*)((char*)a0 + 0x30) = (*(int*)((char*)a0 + 0x30) | 0x40000); set_random_timer_15__15TObjEneSlimeOneFPv((void*)((void*)(a0))); }

void set_random_timer_15__15TObjEneSlimeOneFPv(void* p) { set_random_timer__15TObjEneSlimeOneFPvii((void *)(p), (s32)(15), (s32)(15)); }

int TObjEneSlimeOne__vt59(void) { return 0; }

void TObjEneSlimeOne__vt60(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x384) != 0xC) {
        if (((s32) M2C_FIELD(arg0, u16 *, 0x2D4) < (s32) lbl_805D586C) && (TPlayerBattleCtrl4P__sub_801BA74C() != 0U) && (check_player_field_7cc__15TObjEneSlimeOneFPv() == 2) && ((u32) M2C_FIELD(arg0, u32 *, 0x3F0) != 0U) && (all_parents_unqueued_for_destruction__7TObjectFv((void *) M2C_FIELD(arg0, u32 *, 0x3F0)) != 0)) {
            TObjEneSlimeOne__sub_800EB654((int) (M2C_FIELD(arg0, u32 *, 0x3F0)), (void *) (arg0 + 0x38));
        }
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFDFF);
        TObjEneSlimeOne__sub_800EAE78((void*)((void *) (arg0)), (void*)((int) (0xC)));
    }
}

void TObjEneSlimeOne__vt61(void* p) { if (*(int*)((char*)p + 0x384) != 13) { TObjEneSlimeOne__sub_800EAE78((void*)(p), (void*)((void*)13)); } }

void clear_child_flag__15TObjEneSlimeOneFPv(void *arg0) {
    void *temp_r3;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x3EC) == 0) {
        temp_r3 = M2C_FIELD(arg0, void **, 0x38C);
        M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) & 0xFFFFFFFE);
    }
}

void set_target_flag_bit0__15TObjEneSlimeOneFPv(void *arg0) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0x38C);
    M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) | 1);
}

void set_display_mode__15TObjEneSlimeOneFPvi(void *arg0, s32 arg1) {
    void *temp_r5;
    void *temp_r5_2;
    void *temp_r6;

    temp_r6 = M2C_FIELD(arg0, void **, 0x38C);
    M2C_FIELD(temp_r6, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r6, s32 *, 0x18) & 0xF5FFF297);
    switch (arg1) {
    case 0:
        temp_r5 = M2C_FIELD(arg0, void **, 0x38C);
        M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) | 0x0A000000 | 0x528);
        M2C_FIELD(arg0, s32 *, 0x3EC) = 0;
        return;
    case 1:
        temp_r5_2 = M2C_FIELD(arg0, void **, 0x38C);
        M2C_FIELD(temp_r5_2, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5_2, s32 *, 0x18) | 0x0A000000 | 0x28);
        M2C_FIELD(arg0, s32 *, 0x3EC) = 0;
        return;
    case 2:
        M2C_FIELD(arg0, s32 *, 0x3EC) = 1;
        return;
    }
}

extern M2C_UNK lbl_8043D288;

void set_random_timer__15TObjEneSlimeOneFPvii(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x390) = (s32) (arg1 + (s32) ((f32) arg2 * calc_boss4_scale__10TObjPlayerFi()));
}

extern M2C_UNK __vt__15TObjEneSlimeOne[];

void *__dt__15TObjEneSlimeOneFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TObjEneSlimeOne;
        TObjEneGibbles__sub_80156720(arg0);
        M2C_FIELD(arg0, M2C_UNK *, 0x38C) = 0;
        if (M2C_FIELD(arg0, void **, 0x3E8) != NULL) { request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x3E8)); M2C_FIELD(arg0, M2C_UNK *, 0x3E8) = 0; }
        __dt__15TObjEneSlimeOneFis(M2C_FIELD(arg0, void **, 0x388), 1);
        M2C_FIELD(arg0, M2C_UNK *, 0x388) = 0;
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 tl_04;

s32 create__15TObjEneSlimeOneFiii(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x3F8);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TObjEneSlimeOne__ct(var_r31, var_r4, arg0, arg1, arg2);
    }
    return var_r31;
}

extern s32 tl_04;

s32 create__15TObjEneSlimeOneFii(s32 arg0, s32 arg1) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x3F8);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TObjEneSlimeOne__sub_800EB4A0(var_r31, var_r4, arg0, arg1);
    }
    return var_r31;
}

}
