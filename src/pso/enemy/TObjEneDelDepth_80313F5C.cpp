#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80314D1C_lbl_80475D6C {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_80314D1C_lbl_80475D78 {
    M2C_UNK value;
    u8 remaining[0x8];
};

extern "C" {
int TObjEneDelDepth__sub_80316488(void*, void*);
int set_draw_mode__15TObjEneDelDepthFPvi(void*, void*);
extern f32 lbl_805DA678;
    extern const float TObjEneDelDepth__data_805DF260;
    extern const float TObjEneDelDepth__data_805DF258;
void TObjEneDelDepth__sub_80314E78(void* a0);
int set_draw_mode__15TObjEneDelDepthFPvi(void*, void*);
extern const float TObjEneDelDepth__data_805DF258;
extern const f32 TObjEneDelDepth__data_805DF278;
void TObjEneDelDepth__sub_80315064(u8 *arg0);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
int set_draw_mode__15TObjEneDelDepthFPvi(void*, void*);
int TObjEneDelDepth__sub_80316488(void*, void*);
extern u8 *TObjEneDelDepth__data_805D6AC0;
extern const f32 TObjEneDelDepth__data_805DF298;
extern const f32 lbl_805DF2A0;
void TObjEneDelDepth__sub_80314500(u8 *arg0);
M2C_UNK TObjEneDelDepth__sub_803154A8(void *, int);
f32 TBoss8Dragon__sub_803D64C0(s32);
extern const RecoveredGlobal_80314D1C_lbl_80475D6C lbl_80475D6C;
extern const RecoveredGlobal_80314D1C_lbl_80475D78 lbl_80475D78;
extern const float TObjEneDelDepth__data_805DF258;
extern const float TObjEneDelDepth__data_805DF260;
extern const f32 TObjEneDelDepth__data_805DF278;
extern const f32 TObjEneDelDepth__data_805DF298;
extern const f32 lbl_805DF2BC;
extern const f32 lbl_805DF2C0;
extern const f32 lbl_805DF2C4;
extern const f32 lbl_805DF2C8;
extern const f32 lbl_805DF2CC;
void TObjEneDelDepth__sub_80314D1C(u8 *arg0);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
u16 find_nearest_visible_player(void *, int, f32);
int set_draw_mode__15TObjEneDelDepthFPvi(void*, void*);
M2C_UNK TObjEneDelDepth__sub_803154A8(void *, int);
int TObjEneDelDepth__sub_80316488(void*, void*);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
M2C_UNK TNpcPlayer__sub_803D97B4(void *);
extern const float TObjEneDelDepth__data_805DF258;
extern const float TObjEneDelDepth__data_805DF260;
extern const f32 TObjEneDelDepth__data_805DF26C;
extern const f32 TObjEneDelDepth__data_805DF270;
extern const f32 lbl_805DF288;
extern const f32 lbl_805DF2B0;
extern const f32 lbl_805DF2B4;
extern const f32 lbl_805DF2B8;
void TObjEneDelDepth__sub_80314C10(u8 *arg0);
u16 find_nearest_visible_player(void *, int, f32);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
M2C_UNK TObjEneDelDepth__sub_803154A8(void *, int);
f32 TBoss8Dragon__sub_803D64C0(s32);
extern const RecoveredGlobal_80314D1C_lbl_80475D6C lbl_80475D6C;
extern const RecoveredGlobal_80314D1C_lbl_80475D78 lbl_80475D78;
extern const f32 lbl_805DF250;
extern const float TObjEneDelDepth__data_805DF260;
extern const f32 TObjEneDelDepth__data_805DF26C;
extern const f32 TObjEneDelDepth__data_805DF278;
extern const f32 TObjEneDelDepth__data_805DF298;
extern const f32 lbl_805DF2BC;
extern const f32 lbl_805DF2C0;
extern const f32 lbl_805DF2C8;
extern const f32 lbl_805DF2D0;
void TObjEneDelDepth__sub_80314EC4(u8 *arg0);
}

extern "C" {

void enter_appear_state__15TObjEneDelDepthFPv(u8 *arg0);
void enter_state8__15TObjEneDelDepthFPv(u8 *arg0);
void init_depth__15TObjEneDelDepthFPv(void *arg0);
void init_draw_state__15TObjEneDelDepthFPv(void* p);
void setup_depth_draw__15TObjEneDelDepthFPv(void* p);
void try_enter_appear__15TObjEneDelDepthFPv(u8 *arg0);
void try_relocate_on_timer__15TObjEneDelDepthFPv(u8 *arg0);
void update_state__15TObjEneDelDepthFPv(void *arg0);
M2C_UNK TBoss3Volopt__sub_800D8C48(void *);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
M2C_UNK TObjEneDelDepth__sub_803154A8(void *, int);
int TObjEneDelDepth__sub_80316488(void*, void*);
u16 find_nearest_visible_player(void *, int, f32);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
s32 get_flag_bit4__15TObjEneDelDepthFPv(void *);
s32 is_state_complete__15TObjEneDelDepthFPv(int);
M2C_UNK set_default_depth_offset__15TObjEneDelDepthFPv(void *);
int set_depth_offset__15TObjEneDelDepthFPvii(void*, void*, void*);
int set_draw_mode__15TObjEneDelDepthFPvi(void*, void*);

void init_draw_state__15TObjEneDelDepthFPv(void* p) { *(int*)((char*)p + 0x384) = 30; *(int*)((char*)p + 0x388) = 8; TObjEneDelDepth__sub_80316488((void*)(*(void**)((char*)p + 0x37c)), (void*)((void*)2)); set_draw_mode__15TObjEneDelDepthFPvi((void*)(p), (void*)((void*)2)); }

void setup_depth_draw__15TObjEneDelDepthFPv(void* p) { set_depth_offset__15TObjEneDelDepthFPvii((void*)(p), (void*)((void*)30), (void*)((void*)30)); TObjEneDelDepth__sub_80316488((void*)(*(void**)((char*)p + 0x37c)), (void*)((void*)0)); set_draw_mode__15TObjEneDelDepthFPvi((void*)(p), (void*)((void*)2)); }

extern const f32 TObjEneDelDepth__data_805DF298;

void init_depth__15TObjEneDelDepthFPv(void *arg0) {
    set_depth_offset__15TObjEneDelDepthFPvii((void*)(arg0), (void*)(0x1E), (void*)(0x1E));
    M2C_FIELD(arg0, s32 *, 0x3BC) = 0x888;
    if (calc_boss4_scale__10TObjPlayerFi(arg0) > TObjEneDelDepth__data_805DF298) {
        M2C_FIELD(arg0, s32 *, 0x3BC) = M2C_FIELD(arg0, s32 *, 0x3BC) * 0xFFFFFFFF;
    }
    TObjEneDelDepth__sub_80316488((void*)(M2C_FIELD(arg0, s32 *, 0x37C)), (void*)(0));
    set_draw_mode__15TObjEneDelDepthFPvi((void*)(arg0), (void*)(2));
}

void TObjEneDelDepth__sub_80314500(u8 *arg0) {
  *((s32 *) (((s8 *) arg0) + 0x3C4)) = 0xFFFF;
  *((s32 *) (((s8 *) arg0) + 0x394)) = (s32) ((((s32) (lbl_805DF2A0 * calc_boss4_scale__10TObjPlayerFi((void *)((s32) arg0)))) + 4) << 0x10);
  *((s32 *) (((s8 *) arg0) + 0x384)) = 0x7FFFFFFF;
  *((s32 *) (((s8 *) arg0) + 0x3BC)) = (s32) (*((s32 *) (((s8 *) TObjEneDelDepth__data_805D6AC0) + 0x1C)));
  if (calc_boss4_scale__10TObjPlayerFi((void *)((s32) arg0)) > TObjEneDelDepth__data_805DF298)
  {
    *((s32 *) (((s8 *) arg0) + 0x3BC)) = (s32) (((*((s32 *) (((s8 *) arg0) + 0x3BC))) & 0xFFFFFFFF) * (-1));
  }
  TObjEneDelDepth__sub_80316488((void*)((int) (*((s32 *) (((s8 *) arg0) + 0x37C)))), (void*)((int) 0));
  set_draw_mode__15TObjEneDelDepthFPvi((void*)(arg0), (void*)(2));
}

void try_enter_appear__15TObjEneDelDepthFPv(u8 *arg0) {
    if (is_state_complete__15TObjEneDelDepthFPv((int)((int) (M2C_FIELD(arg0, s32 *, 0x37C)))) == 1) {
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x04000000);
        TObjEneDelDepth__sub_803154A8((void *)((void *) (arg0)), (int)((int) (3)));
        TBoss3Volopt__sub_8022675C((int) (0x4003A822), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    }
}

void enter_appear_state__15TObjEneDelDepthFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x04000000);
    M2C_FIELD(arg0, s32 *, 0x388) = 0x14;
    TBoss3Volopt__sub_8022675C((int) (0x4003A820), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    TObjEneDelDepth__sub_80316488((void*)((int) (M2C_FIELD(arg0, s32 *, 0x37C))), (void*)((int) (0xB)));
    set_draw_mode__15TObjEneDelDepthFPvi((void*)((void *) (arg0)), (void*)((int) (1)));
}

void update_state__15TObjEneDelDepthFPv(void *arg0) {
    if (is_state_complete__15TObjEneDelDepthFPv((int)(M2C_FIELD(arg0, s32 *, 0x37C))) == 1) {
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFBFFFFFF);
        if (get_flag_bit4__15TObjEneDelDepthFPv(arg0) != 0) {
            TObjEneDelDepth__sub_803154A8((void *)(arg0), (int)(7));
            return;
        }
        TObjEneDelDepth__sub_803154A8((void *)(arg0), (int)(6));
    }
}

void enter_state8__15TObjEneDelDepthFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x04000000);
    M2C_FIELD(arg0, s32 *, 0x388) = 8;
    TObjEneDelDepth__sub_80316488((void*)((int) (M2C_FIELD(arg0, s32 *, 0x37C))), (void*)((int) (0xA)));
    TBoss3Volopt__sub_8022675C((int) (0x4003A820), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    set_draw_mode__15TObjEneDelDepthFPvi((void*)((void *) (arg0)), (void*)((int) (1)));
}

extern const f32 TObjEneDelDepth__data_805DF26C;

#pragma push
#pragma fp_contract on
typedef char RecoveredGlobal_80314D1C_lbl_80475D6C_size[sizeof(RecoveredGlobal_80314D1C_lbl_80475D6C) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_80314D1C_lbl_80475D78_size[sizeof(RecoveredGlobal_80314D1C_lbl_80475D78) == 0xC ? 1 : -1];

#pragma push
#pragma fp_contract on
void TObjEneDelDepth__sub_80314C10(u8 *arg0) {
    f32 temp_f1;
    s32 temp_r31;
    M2C_FIELD(arg0, f32 *, 0x3AC) = (*(const f32 *)&TObjEneDelDepth__data_805DF258);
    if (find_nearest_visible_player(arg0, (int)(arg0 + 0x3B0), TObjEneDelDepth__data_805DF26C) == 0xFFFF) {
        TObjEneDelDepth__sub_803154A8(arg0, 2);
        return;
    }
    temp_r31 = (s32) (lbl_805DF2B0 * calc_boss4_scale__10TObjPlayerFi(arg0));
    M2C_FIELD(arg0, f32 *, 0x3B0) += TObjEneDelDepth__data_805DF270 * TBoss8Dragon__sub_803D64C0(temp_r31);
    M2C_FIELD(arg0, f32 *, 0x3B8) += TObjEneDelDepth__data_805DF270 * TBoss8Dragon__sub_803D64DC(temp_r31);
    if (TBoss6Kakusan__sub_803D8BD8(arg0 + 0x3B0) <= lbl_805DF288) {
        TObjEneDelDepth__sub_803154A8(arg0, 2);
        return;
    }
    TNpcPlayer__sub_803D97B4(arg0 + 0x3B0);
    temp_f1 = (lbl_805DF2B8 * calc_boss4_scale__10TObjPlayerFi(arg0)) + lbl_805DF2B4;
    M2C_FIELD(arg0, f32 *, 0x38C) = temp_f1;
    M2C_FIELD(arg0, f32 *, 0x398) = (*(const f32 *)&TObjEneDelDepth__data_805DF260);
    ((int (*)(s32, int, f32))TObjEneDelDepth__sub_80316488)(M2C_FIELD(arg0, s32 *, 0x37C), 7, temp_f1);
    set_draw_mode__15TObjEneDelDepthFPvi(arg0, (void *)3);
}
#pragma pop

void TObjEneDelDepth__sub_80314D1C(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 var_f31;
    var_f31 = (*(const f32 *)&TObjEneDelDepth__data_805DF260);
    M2C_FIELD(arg0, f32 *, 0x39C) = (f32) (TObjEneDelDepth__data_805DF278 * ((*(const f32 *)&TObjEneDelDepth__data_805DF260) - M2C_FIELD(arg0, f32 *, 0x38C)));
    M2C_FIELD(arg0, f32 *, 0x3A0) = (f32) ((M2C_FIELD(arg0, f32 *, 0x38C) * (M2C_FIELD(&lbl_80475D78.value, f32 *, 0) - M2C_FIELD(&lbl_80475D6C.value, f32 *, 0))) + M2C_FIELD(&lbl_80475D6C.value, f32 *, 0));
    M2C_FIELD(arg0, f32 *, 0x3A4) = (f32) ((M2C_FIELD(arg0, f32 *, 0x38C) * (M2C_FIELD(&lbl_80475D78.value, f32 *, 4) - M2C_FIELD(&lbl_80475D6C.value, f32 *, 4))) + M2C_FIELD(&lbl_80475D6C.value, f32 *, 4));
    M2C_FIELD(arg0, f32 *, 0x3A8) = (f32) ((M2C_FIELD(arg0, f32 *, 0x38C) * (M2C_FIELD(&lbl_80475D78.value, f32 *, 8) - M2C_FIELD(&lbl_80475D6C.value, f32 *, 8))) + M2C_FIELD(&lbl_80475D6C.value, f32 *, 8));
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x38C);
    if (temp_f1 > lbl_805DF2C0) {
        var_f31 = ((*(const f32 *)&TObjEneDelDepth__data_805DF260) - temp_f1) / lbl_805DF2BC;
    }
    temp_f1_2 = var_f31 * (lbl_805DF2C4 * TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0x384) << 0xA));
    M2C_FIELD(arg0, f32 *, 0x3A0) = (f32) (M2C_FIELD(arg0, f32 *, 0x3A0) * ((*(const f32 *)&TObjEneDelDepth__data_805DF260) + temp_f1_2));
    M2C_FIELD(arg0, f32 *, 0x3A8) = (f32) (M2C_FIELD(arg0, f32 *, 0x3A8) * ((*(const f32 *)&TObjEneDelDepth__data_805DF260) - temp_f1_2));
    M2C_FIELD(arg0, s32 *, 0x384) = (s32) (M2C_FIELD(arg0, s32 *, 0x384) + 1);
    temp_f1_3 = M2C_FIELD(arg0, f32 *, 0x38C);
    if (temp_f1_3 >= (*(const f32 *)&TObjEneDelDepth__data_805DF298)) {
        M2C_FIELD(arg0, f32 *, 0x398) = (f32) (*(const f32 *)&TObjEneDelDepth__data_805DF260);
    } else {
        M2C_FIELD(arg0, f32 *, 0x398) = (f32) (lbl_805DF2C8 * temp_f1_3);
    }
    temp_f1_4 = M2C_FIELD(arg0, f32 *, 0x38C) + lbl_805DF2CC;
    M2C_FIELD(arg0, f32 *, 0x38C) = temp_f1_4;
    if (temp_f1_4 < (*(const f32 *)&TObjEneDelDepth__data_805DF258)) {
        TObjEneDelDepth__sub_803154A8((void *)(arg0), (int)(0));
    }
}
#pragma pop

void TObjEneDelDepth__sub_80314E78(void* a0) { *(float*)((char*)a0 + 0x38c) = TObjEneDelDepth__data_805DF260; *(float*)((char*)a0 + 0x39c) = TObjEneDelDepth__data_805DF258; set_draw_mode__15TObjEneDelDepthFPvi((void*)((void*)(a0)), (void*)((int)(0))); TObjEneDelDepth__sub_80316488((void*)((void*)(*(int*)((char*)a0 + 0x37c))), (void*)((void*)0x6)); }

#pragma push
#pragma fp_contract on
void TObjEneDelDepth__sub_80314EC4(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 var_f31;
    var_f31 = (*(const f32 *)&TObjEneDelDepth__data_805DF260);
    M2C_FIELD(arg0, f32 *, 0x39C) = (f32) (TObjEneDelDepth__data_805DF278 * ((*(const f32 *)&TObjEneDelDepth__data_805DF260) - M2C_FIELD(arg0, f32 *, 0x38C)));
    M2C_FIELD(arg0, f32 *, 0x3A0) = (f32) ((M2C_FIELD(arg0, f32 *, 0x38C) * (M2C_FIELD(&(*(const struct RecoveredGlobal_80314D1C_lbl_80475D78 *)&lbl_80475D78).value, f32 *, 0) - M2C_FIELD(&(*(const struct RecoveredGlobal_80314D1C_lbl_80475D6C *)&lbl_80475D6C).value, f32 *, 0))) + M2C_FIELD(&(*(const struct RecoveredGlobal_80314D1C_lbl_80475D6C *)&lbl_80475D6C).value, f32 *, 0));
    M2C_FIELD(arg0, f32 *, 0x3A4) = (f32) ((M2C_FIELD(arg0, f32 *, 0x38C) * (M2C_FIELD(&(*(const struct RecoveredGlobal_80314D1C_lbl_80475D78 *)&lbl_80475D78).value, f32 *, 4) - M2C_FIELD(&(*(const struct RecoveredGlobal_80314D1C_lbl_80475D6C *)&lbl_80475D6C).value, f32 *, 4))) + M2C_FIELD(&(*(const struct RecoveredGlobal_80314D1C_lbl_80475D6C *)&lbl_80475D6C).value, f32 *, 4));
    M2C_FIELD(arg0, f32 *, 0x3A8) = (f32) ((M2C_FIELD(arg0, f32 *, 0x38C) * (M2C_FIELD(&(*(const struct RecoveredGlobal_80314D1C_lbl_80475D78 *)&lbl_80475D78).value, f32 *, 8) - M2C_FIELD(&(*(const struct RecoveredGlobal_80314D1C_lbl_80475D6C *)&lbl_80475D6C).value, f32 *, 8))) + M2C_FIELD(&(*(const struct RecoveredGlobal_80314D1C_lbl_80475D6C *)&lbl_80475D6C).value, f32 *, 8));
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x38C);
    if (temp_f1 > lbl_805DF2C0) {
        var_f31 = ((*(const f32 *)&TObjEneDelDepth__data_805DF260) - temp_f1) / lbl_805DF2BC;
    }
    temp_f1_2 = var_f31 * (lbl_805DF250 * TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0x384) << 0xC));
    M2C_FIELD(arg0, f32 *, 0x3A0) = (f32) (M2C_FIELD(arg0, f32 *, 0x3A0) * ((*(const f32 *)&TObjEneDelDepth__data_805DF260) + temp_f1_2));
    M2C_FIELD(arg0, f32 *, 0x3A8) = (f32) (M2C_FIELD(arg0, f32 *, 0x3A8) * ((*(const f32 *)&TObjEneDelDepth__data_805DF260) - temp_f1_2));
    M2C_FIELD(arg0, s32 *, 0x384) = (s32) (M2C_FIELD(arg0, s32 *, 0x384) + 1);
    temp_f1_3 = M2C_FIELD(arg0, f32 *, 0x38C);
    if (temp_f1_3 >= TObjEneDelDepth__data_805DF298) {
        M2C_FIELD(arg0, f32 *, 0x398) = (f32) (*(const f32 *)&TObjEneDelDepth__data_805DF260);
    } else {
        M2C_FIELD(arg0, f32 *, 0x398) = (f32) (lbl_805DF2C8 * temp_f1_3);
    }
    temp_f1_4 = M2C_FIELD(arg0, f32 *, 0x38C) + lbl_805DF2D0;
    M2C_FIELD(arg0, f32 *, 0x38C) = temp_f1_4;
    if (temp_f1_4 > (*(const f32 *)&TObjEneDelDepth__data_805DF260)) {
        if (find_nearest_visible_player((void *) (arg0), (int) (0), (f32) (TObjEneDelDepth__data_805DF26C)) != 0xFFFF) {
            TObjEneDelDepth__sub_803154A8((void *) (arg0), (int) (3));
            TBoss3Volopt__sub_8022675C((int) (0x4003A822), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        } else {
            TObjEneDelDepth__sub_803154A8((void *) (arg0), (int) (2));
        }
    }
}
#pragma pop

void TObjEneDelDepth__sub_80315064(u8 *arg0) {
    set_draw_mode__15TObjEneDelDepthFPvi((void*)(arg0), (void*)(0));
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFBFBFFFF);
    M2C_FIELD(arg0, f32 *, 0x38C) = (f32) (*(const f32 *)&TObjEneDelDepth__data_805DF258);
    M2C_FIELD(arg0, f32 *, 0x39C) = (f32) TObjEneDelDepth__data_805DF278;
}

void try_relocate_on_timer__15TObjEneDelDepthFPv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x384) - 1;
    M2C_FIELD(arg0, s32 *, 0x384) = temp_r0;
    if (temp_r0 <= 0) {
        if (find_nearest_visible_player((void *) (arg0), (int) (0), (f32) (TObjEneDelDepth__data_805DF26C)) == 0xFFFF) {
            temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x3C0) + 1;
            M2C_FIELD(arg0, s32 *, 0x3C0) = temp_r0_2;
            if (temp_r0_2 >= 5) {
                M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(arg0, f32 *, 0x50);
                M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(arg0, f32 *, 0x58);
                M2C_FIELD(arg0, s32 *, 0x3C0) = 5;
            }
            set_default_depth_offset__15TObjEneDelDepthFPv((void *) (arg0));
            return;
        }
        TBoss3Volopt__sub_800D8C48((void *) (arg0 + 0x38));
        TObjEneDelDepth__sub_803154A8((void *)((void *) (arg0)), (int)((int) (1)));
    }
}

}
