#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TBoss6Type1__sub_802B4B04(u8 *arg0);
u8 TBoss6Type1__sub_802B5D9C(u8 *arg0);
f32 TBoss8Dragon__sub_803D64C0(s32);
extern const f32 lbl_805DE314;
extern const f32 TBoss6Type1__data_805DE318;
extern const f32 lbl_805DE31C;
void TBoss6Type1__sub_802B5598(void *arg0, void *arg1);
extern const f32 lbl_805DE354;
s32 TBoss6Type1__sub_802B5FDC(u8 *arg0);
extern const f32 lbl_805DE358;
s32 TBoss6Type1__sub_802B5FF4(u8 *arg0);
extern const f32 TBoss6Type1__data_805DE318;
s32 TBoss6Type1__sub_802B6060(u8 *arg0);
s32 rand__11TOBoss4RockFv();
extern const f32 lbl_805DE300;
extern f32 TBoss6Type1__data_805DE304;
s32 TBoss6Type1__sub_802B52E0(M2C_UNK arg0, s32 arg1, s32 arg2);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
void TBoss6Type1__sub_802B570C(u8 *arg0, u8 *arg1);
s32 calc_field4b0_delta__11TBoss6Type1FPv(void *arg0);
extern const f32 lbl_805DE34C;
s32 TBoss6Type1__sub_802B5ED8(u8 *arg0);
}

extern "C" {

int TBoss6Type1__sub_802B4A70(void* p);
void TBoss6Type1__sub_802B4A90(void* p);
int TBoss6Type1__sub_802B4B14(void* p);
void TBoss6Type1__sub_802B4CF4(void* p);
void TBoss6Type1__sub_802B59A8(void);
void TBoss6Type1__sub_802B5AB0(void);
int TBoss6Type1__sub_802B5DD4(void);
int TBoss6Type1__sub_802B5E48(void);
void handle_6xa4_action__11TBoss6Type1FPv(void* p, u8 * _w1);
void init_parts__11TBoss6Type1FPv(void* p);
s32 is_field3F8_over_0x20__11TBoss6Type1FPv(void *arg0);
s32 is_ready__11TBoss6Type1FPv(void *arg0);
int is_time_up__11TBoss6Type1FPv(void *arg0);
void reset_fields_4e0__11TBoss6Type1FPv(void* p);
void set_flag_on_threshold__11TBoss6Type1FPv(void *arg0);
void set_part_default_value__11TBoss6Type1FiPv(int a0, void* a1);
s32 TBoss6PlotFalz__sub_802AAC74(s32);
int TBoss6Type1__sub_802B4A9C(void*);
int TBoss6Type1__sub_802B4B64(void*, void*);
M2C_UNK TBoss6Type1__sub_802B5AD4(f32);
int TBoss6Type1__sub_802B60E8(void*);
s32 calc_field4b0_delta__11TBoss6Type1FPv(void *arg0);
int release_object__11TBoss6Type1FPv(void*);

int TBoss6Type1__sub_802B4A70(void* p) { return release_object__11TBoss6Type1FPv(p); }
void TBoss6Type1__sub_802B4A90(void* p) { *(s32*)((char*)p + 0x680) = 0; }

void TBoss6Type1__sub_802B4B04(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x508) = (s32) (M2C_FIELD(arg0, s32 *, 0x508) + 1);
}

int TBoss6Type1__sub_802B4B14(void* p) { return TBoss6Type1__sub_802B4A9C(p); }

void TBoss6Type1__sub_802B4CF4(void* p) { { int i; for (i = 0; i < 4; i++) { TBoss6Type1__sub_802B4B64(p, (void*)i); } } }

s32 TBoss6Type1__sub_802B52E0(M2C_UNK arg0, s32 arg1, s32 arg2) {
    s32 var_r0;
    var_r0 = (s32) (((f32) arg2 - lbl_805DE300) * ((*(const f32 *)&TBoss6Type1__data_805DE304) * (f32) rand__11TOBoss4RockFv()));
    if (var_r0 >= arg2) {
        var_r0 = 0;
    }
    return M2C_FIELD(arg1, M2C_UNK *, (var_r0 * 4));
}

#pragma push
#pragma fp_contract on
void TBoss6Type1__sub_802B5598(void *arg0, void *arg1) {
    f32 temp_f1;
    f32 var_f31;
    s32 temp_r31;
    s32 var_r4;
    u32 temp_r5;
    u32 var_r5;
    {
        s32 k = M2C_FIELD(arg0, s32 *, 0x374) * 0x12D687;
        s8 c = M2C_FIELD(arg0, s8 *, 0x41C);
        temp_r5 = c * k;
    }
    var_r4 = ((temp_r5 & 3) * 0x1800) + 0x2000;
    var_r5 = (temp_r5 >> 3U) & 1;
    if ((temp_r5 >> 2U) & 1) {
        var_r4 = -var_r4;
    }
    var_f31 = lbl_805DE314;
    temp_r31 = M2C_FIELD(arg0, s32 *, 0x60) + var_r4;
    if ((s32) var_r5 != 0) {
        var_f31 = lbl_805DE31C;
    }
    temp_f1 = var_f31 * TBoss8Dragon__sub_803D64C0(temp_r31);
    M2C_FIELD(arg1, f32 *, 0) = temp_f1;
    M2C_FIELD(arg1, f32 *, 4) = (f32) TBoss6Type1__data_805DE318;
    M2C_FIELD(arg1, f32 *, 8) = (f32) (var_f31 * TBoss8Dragon__sub_803D64DC(temp_r31));
}
#pragma pop

void handle_6xa4_action__11TBoss6Type1FPv(void* p, u8 * _w1) { TBoss6Type1__sub_802B570C((u8 *)((char*)p + 0x1), (u8 *)(_w1)); }

extern const f32 TBoss6Type1__data_805DE2D0;

void TBoss6Type1__sub_802B570C(u8 *arg0, u8 *arg1) {
  f32 temp_f31;
  f32 temp_f30;
  s32 temp_r31;
  temp_r31 = ((s8) (*((u8 *) (((s8 *) arg0) + 0)))) << 8;
  temp_f31 = (f32) (((s8) (*((u8 *) (((s8 *) arg0) + 1)))) * 0xA);
  temp_f30 = (f32) (((s8) (*((u8 *) (((s8 *) arg0) + 2)))) * 0xA);
  *((f32 *) (((s8 *) arg1) + 0)) = (f32) (temp_f31 * TBoss8Dragon__sub_803D64C0(temp_r31));
  *((f32 *) (((s8 *) arg1) + 8)) = (f32) (temp_f31 * TBoss8Dragon__sub_803D64DC((s32)(temp_r31)));
  *((f32 *) (((s8 *) arg1) + 4)) = temp_f30;
}

void TBoss6Type1__sub_802B59A8(void) {
    TBoss6Type1__sub_802B5AD4(TBoss6Type1__data_805DE2D0);
}

extern const f32 TBoss6Type1__data_805DE32C;

void TBoss6Type1__sub_802B5AB0(void) {
    TBoss6Type1__sub_802B5AD4(TBoss6Type1__data_805DE32C);
}

u8 TBoss6Type1__sub_802B5D9C(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r5;
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x4E0);
    if ((temp_r5 <= 0) || (temp_r0 = M2C_FIELD(arg0, s32 *, 0x4E4), ((temp_r0 < 0) != 0))) {
        return 1U;
    }
    return (u8) (temp_r5 <= temp_r0);
}

int TBoss6Type1__sub_802B5DD4(void) { return 0; }

void reset_fields_4e0__11TBoss6Type1FPv(void* p) { *(s32*)((char*)p + 0x4e0) = 0; *(s32*)((char*)p + 0x4e4) = 0; }
s32 is_field3F8_over_0x20__11TBoss6Type1FPv(void *arg0) {
    return TBoss6PlotFalz__sub_802AAC74(M2C_FIELD(arg0, s32 *, 0x3F8)) > 0x20;
}

int TBoss6Type1__sub_802B5E48(void) { return 0; }

s32 is_ready__11TBoss6Type1FPv(void *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0x414) == 0) && (calc_field4b0_delta__11TBoss6Type1FPv(arg0) >= (s32) M2C_FIELD(arg0, s32 *, 0x48C))) {
        return 1;
    }
    return 0;
}

s32 TBoss6Type1__sub_802B5ED8(u8 *arg0) {
    s32 temp_r31;
    temp_r31 = (s32) (M2C_FIELD(arg0, f32 *, 0x4B4) * (f32) M2C_FIELD(arg0, s32 *, 0x494));
    if (calc_field4b0_delta__11TBoss6Type1FPv(arg0) >= temp_r31) {
        M2C_FIELD(arg0, f32 *, 0x4B4) = (f32) (M2C_FIELD(arg0, f32 *, 0x4B4) * lbl_805DE34C);
        return 1;
    }
    return 0;
}

int is_time_up__11TBoss6Type1FPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x414) == 0) {
        return 0;
    }
    return calc_field4b0_delta__11TBoss6Type1FPv(arg0) >= (s32) M2C_FIELD(arg0, s32 *, 0x490) ? 1 : 0;
}

extern f32 lbl_805DE350;

void set_flag_on_threshold__11TBoss6Type1FPv(void *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0x4AC) == 0) && (M2C_FIELD(arg0, f32 *, 0x4D8) < lbl_805DE350)) {
        M2C_FIELD(arg0, s32 *, 0x4AC) = 1;
    }
}

    extern const float TBoss6Type1__data_805DE344;

s32 TBoss6Type1__sub_802B5FDC(u8 *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x3C) < lbl_805DE354;
}

s32 TBoss6Type1__sub_802B5FF4(u8 *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x3C) > lbl_805DE358;
}

s32 TBoss6Type1__sub_802B6060(u8 *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x3C) > TBoss6Type1__data_805DE318;
}

void set_part_default_value__11TBoss6Type1FiPv(int a0, void* a1) { *(float*)((char*)a1 + 0x4) = TBoss6Type1__data_805DE344; }

void init_parts__11TBoss6Type1FPv(void* p) { set_part_default_value__11TBoss6Type1FiPv((int)(p), (void*)((char*)p + 0x5d8)); set_part_default_value__11TBoss6Type1FiPv((int)(p), (void*)((char*)p + 0x5e4)); set_part_default_value__11TBoss6Type1FiPv((int)(p), (void*)((char*)p + 0x5f0)); TBoss6Type1__sub_802B60E8(p); }

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_C_boss6_1 { u8 bytes[0xc]; };

struct Stack_802B7D74_boss6_1
{
  f32 sp8;
  f32 spC;
  f32 sp10;
};

#include <stddef.h>
struct Stack_802B9204_boss6_1 {
    M2C_UNK sp8;
    s8 spC;
    u8 trailing_storage[0xF];
};

extern "C" {
u8 * TBoss6Type1__sub_802B96C0(s32 arg0, s32 arg1);
M2C_UNK TObjPlayer__sub_800F5E08();
extern const f32 lbl_805DE3D0;
void render_shadows__11TBoss6Type1Fv(u8 *arg0);
f32 get_ad_end_text_start__10TObjPlayerFv(f64, f64);
s32 TObjPlayer__sub_80141F84(int, int);
s32 TObjPlayer__sub_801423A4(int, int, int);
f32 TBoss6Kakusan__sub_803D8BD8(void *, f32);
extern const f64 TBoss6Type1__data_80471038;
extern const f32 TBoss6Type1__data_805DE2D0;
extern const f32 TBoss6Type1__data_805DE310;
void TBoss6Type1__sub_802B7D74(u8 *arg0);
void set_sync_data__11TBoss6Type1FPvPv(void *arg0, void *arg1);
int is_idle__11TBoss6Type1FPv(void* p);
void step_and_send_60__11TBoss6Type1FPv(void* p);
void build_6xA4_olga_flow_boss_actions(void* p);
void TBoss6Type1__sub_802B9204(u8 *arg0, s8 arg1);
}

extern "C" {

int TBoss6Type1__sub_802B8624(void);
void TBoss6Type1__vt42(void);
void TBoss6Type1__vt43(void);
void TBoss6Type1__vt44(void);
void TBoss6Type1__vt45(void);
void TBoss6Type1__vt46(void);
void TBoss6Type1__vt47(void);
void TBoss6Type1__vt48(void);
void TBoss6Type1__vt60(u8 *arg0);
void TBoss6Type1__vt61(void* p);
void build_6xA4_olga_flow_boss_actions(void* p);
s32 calc_field4b0_delta__11TBoss6Type1FPv(void *arg0);
void copy_transform__11TBoss6Type1FPvPv(void* p, void* q);
s32 create__11TBoss6Type1Fi(s32 arg0);
void do_attack__11TBoss6Type1FPv(void *arg0);
void enable_parts__11TBoss6Type1FPv(void *arg0);
void* get_mag_mine_ptr__11TBoss6Type1FPv(void* p);
int is_idle__11TBoss6Type1FPv(void* p);
void latch_phase_counter__11TBoss6Type1FPv(void *arg0);
void load_params__11TBoss6Type1FPvPv(void *arg0, void *arg1);
int read_be16_field2__11TBoss6Type1FPv(void* p);
void reset_param__11TBoss6Type1FPv(void *arg0);
void set_child_flags__11TBoss6Type1FPv(void *arg0);
void set_sync_data__11TBoss6Type1FPvPv(void *arg0, void *arg1);
void step_and_send_60__11TBoss6Type1FPv(void* p);
void update_parts_flags__11TBoss6Type1FPv(void *arg0);
void update_position__11TBoss6Type1FPv(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int, void *);
s32 TBoss6Type1__ct(s32, s32, s32);
M2C_UNK TBoss6Type1__sub_802B7944();
int TBoss6Type1__sub_802B865C(void*, void*);
M2C_UNK TBoss6Type1__sub_802B8EE0(void *, M2C_UNK *);
M2C_UNK TBoss6Type1__sub_802B909C(void *, M2C_UNK *);
M2C_UNK TBoss6Type1__sub_802B9178(void *, M2C_UNK, M2C_UNK *);
int TLobby__send_and_handle_60(void*);
s32 TObjControl__ct(s32, s32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 __nw__7TObjectFUl(M2C_UNK);
s32 rand__11TOBoss4RockFv();
int read_be16_field2__10TObjPlayerFPv(void*);

extern const f32 TBoss6Type1__data_805DE2D0;

void reset_param__11TBoss6Type1FPv(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x4DC) = (f32) TBoss6Type1__data_805DE2D0;
}

void enable_parts__11TBoss6Type1FPv(void *arg0) {
    void *temp_r3;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;

    temp_r4 = M2C_FIELD(arg0, void **, 0xA4);
    if (temp_r4 != NULL) {
        M2C_FIELD(temp_r4, s32 *, 0x70) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x70) | 1);
        temp_r4_2 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r4_2, s32 *, 0x9C) = (s32) (M2C_FIELD(temp_r4_2, s32 *, 0x9C) | 1);
        temp_r4_3 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r4_3, s32 *, 0xC8) = (s32) (M2C_FIELD(temp_r4_3, s32 *, 0xC8) | 1);
        temp_r4_4 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r4_4, s32 *, 0xF4) = (s32) (M2C_FIELD(temp_r4_4, s32 *, 0xF4) | 1);
        temp_r3 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r3, s32 *, 0x120) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x120) | 1);
    }
}

void set_child_flags__11TBoss6Type1FPv(void *arg0) {
    void *temp_r3;
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0xA4);
    if (temp_r4 != NULL) {
        M2C_FIELD(temp_r4, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x18) | 1);
        temp_r3 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r3, s32 *, 0x44) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x44) | 1);
    }
}

void update_parts_flags__11TBoss6Type1FPv(void *arg0) {
    TBoss6Type1__sub_802B7944();
    if (M2C_FIELD(arg0, s32 *, 0x418) & 1) {
        set_child_flags__11TBoss6Type1FPv((void *)(arg0));
    }
    if (M2C_FIELD(arg0, s32 *, 0x418) & 2) {
        enable_parts__11TBoss6Type1FPv((void *)(arg0));
    }
}

extern const f32 lbl_805DE3A0;
extern const f32 lbl_805DE3A4;

void update_position__11TBoss6Type1FPv(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x438) != 0) {
        M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) - lbl_805DE3A4);
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) - lbl_805DE3A0);
}

typedef struct Stack_802B7D74_boss6_1 Stack_802B7D74_boss6_1;
void TBoss6Type1__sub_802B7D74(u8 *arg0) {
  Stack_802B7D74_boss6_1 stack;
  M2C_UNK var_r5;
  int new_var;
  f32 temp_f1;
  s32 var_r31;
  s32 var_r4;
  var_r31 = 0;
  if (((s32) (*((s32 *) (((s8 *) arg0) + 0x438)))) != 0)
  {
    var_r31 = 0x8000;
  }
  if (TObjPlayer__sub_80141F84((int) (*((s32 *) (((s8 *) arg0) + 0x5C))), (int) var_r31) < 0x666)
  {
    *((s32 *) (((s8 *) arg0) + 0x5C)) = var_r31;
  }
  else
  {
    *((s32 *) (((s8 *) arg0) + 0x5C)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x5C))) + 0x666);
  }
  stack.sp8 = -(*((f32 *) (((s8 *) arg0) + 0x38)));
  temp_f1 = -(*((f32 *) (((s8 *) arg0) + 0x40)));
  stack.spC = (*(const f32 *)&TBoss6Type1__data_805DE2D0);
  stack.sp10 = temp_f1;
  if (!(TBoss6Kakusan__sub_803D8BD8((void *) (&stack.sp8), (f32) temp_f1) <= TBoss6Type1__data_805DE310))
  {
    var_r4 = (s32) (TBoss6Type1__data_80471038 * get_ad_end_text_start__10TObjPlayerFv((f64) stack.sp8, (f64) stack.sp10));
    if (((s32) (*((s32 *) (((s8 *) arg0) + 0x438)))) != 0)
    {
      var_r4 += 0x8000;
    }
    var_r5 = 0x1555;
    new_var = (int) (*((s32 *) (((s8 *) arg0) + 0x60)));
    if (((s32) (*((s32 *) (((s8 *) arg0) + 0x414)))) == 0)
    {
      var_r5 = 0x1B4;
    }
    *((s32 *) (((s8 *) arg0) + 0x60)) = TObjPlayer__sub_801423A4(new_var, (int) var_r4, (int) var_r5);
  }
}

s32 calc_field4b0_delta__11TBoss6Type1FPv(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4B0) - M2C_FIELD(arg0, s16 *, 0x32C);
}

void latch_phase_counter__11TBoss6Type1FPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x4B0) = (s32) M2C_FIELD(arg0, s16 *, 0x32C);
}

void copy_transform__11TBoss6Type1FPvPv(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x8); *(f32*)((char*)p + 0xc) = *(f32*)((char*)q + 0xc); *(f32*)((char*)p + 0x10) = *(f32*)((char*)q + 0x10); *(u32*)((char*)p + 0x14) = *(u32*)((char*)q + 0x14); *(f32*)((char*)p + 0x18) = *(f32*)((char*)q + 0x18); }

int TBoss6Type1__sub_802B8624(void) { return 0; }

void render_shadows__11TBoss6Type1Fv(u8 *arg0) {
    if (M2C_FIELD(arg0, f32 *, 0x3C) >= lbl_805DE3D0) {
        TObjPlayer__sub_800F5E08();
    }
}

void TBoss6Type1__vt61(void* p) { if (*(int*)((char*)p + 0x374) != 40) { TBoss6Type1__sub_802B865C(p, (void*)40); } }

extern const f32 TBoss6Type1__data_805DE2E4;

void TBoss6Type1__vt60(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFDFF);
    M2C_FIELD(arg0, f32 *, 0x4D4) = (f32) TBoss6Type1__data_805DE2E4;
    TBoss3Volopt__sub_8022675C(0x39E01, arg0 + 0x584, 0, 1, arg0);
}

void do_attack__11TBoss6Type1FPv(void *arg0) {
    M2C_UNK sp8;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x414) == 0) {
        TBoss6Type1__sub_802B909C(arg0, &sp8);
    } else {
        TBoss6Type1__sub_802B8EE0(arg0, &sp8);
    }
    M2C_FIELD(arg0, s32 *, 0x438) = 1;
    TBoss6Type1__sub_802B9178(arg0, 2, &sp8);
}

void TBoss6Type1__sub_802B9204(u8 *arg0, s8 arg1) {
    typedef char sp8_offset[(offsetof(Stack_802B9204_boss6_1, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_802B9204_boss6_1, spC) == 0x4) ? 1 : -1];
    Stack_802B9204_boss6_1 stack;
    if (((s32)is_idle__11TBoss6Type1FPv((void*)((int) (M2C_FIELD(arg0, s32 *, 0x3F8))))) != 0) {
        build_6xA4_olga_flow_boss_actions((void*)((void *) (&stack.sp8)));
        set_sync_data__11TBoss6Type1FPvPv((void *) (arg0), (void *) (&stack.sp8));
        stack.spC = arg1;
        step_and_send_60__11TBoss6Type1FPv((void*)((void *) (&stack.sp8)));
    }
}

void load_params__11TBoss6Type1FPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x438) = (s32) (s8) M2C_FIELD(arg1, u8 *, 8);
    M2C_FIELD(arg0, s32 *, 0x414) = (s32) (s8) M2C_FIELD(arg1, u8 *, 9);
    M2C_FIELD(arg0, u8 *, 0x41C) = (u8) M2C_FIELD(arg1, u8 *, 0xA);
}

extern M2C_UNK TBoss6Type1__data_80471040;
extern f32 TBoss6Type1__data_805DE304;
extern f32 lbl_805DE3EC;

void set_sync_data__11TBoss6Type1FPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg1, u16 *, 2) = (u16) M2C_FIELD(arg0, u16 *, 0x1C);
    M2C_FIELD(arg1, s8 *, 8) = (s8) M2C_FIELD(arg0, s32 *, 0x438);
    M2C_FIELD(arg1, s8 *, 9) = (s8) M2C_FIELD(arg0, s32 *, 0x414);
    M2C_FIELD(arg1, s8 *, 0xA) = (s8) (lbl_805DE3EC * (TBoss6Type1__data_805DE304 * (f32) rand__11TOBoss4RockFv()));
}

extern s32 tl_04;

u8 * TBoss6Type1__sub_802B96C0(s32 arg0, s32 arg1) {
    *(M2CCopy_C_boss6_1 *)(arg0) = *(const M2CCopy_C_boss6_1 *)(arg1);
    return (u8 *)arg0;
}

s32 create__11TBoss6Type1Fi(s32 arg0) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x684);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TBoss6Type1__ct(var_r31, var_r4, arg0);
    }
    return var_r31;
}

void TBoss6Type1__vt42(void) {  }
void TBoss6Type1__vt43(void) {  }
void TBoss6Type1__vt44(void) {  }
void TBoss6Type1__vt45(void) {  }
void TBoss6Type1__vt46(void) {  }
void TBoss6Type1__vt47(void) {  }
void TBoss6Type1__vt48(void) {  }
void* get_mag_mine_ptr__11TBoss6Type1FPv(void* p) { return (char*)p + 0x388; }
int is_idle__11TBoss6Type1FPv(void* p) { return *(u32*)((char*)p + 0x374) == 0; }
int read_be16_field2__11TBoss6Type1FPv(void* p) { return read_be16_field2__10TObjPlayerFPv(p); }
void step_and_send_60__11TBoss6Type1FPv(void* p) { read_be16_field2__11TBoss6Type1FPv((void*)(p)); TLobby__send_and_handle_60(p); }
void build_6xA4_olga_flow_boss_actions(void* p) { *(u8*)((char*)p + 0x0) = 164; *(u8*)((char*)p + 0x1) = 5; }

}
