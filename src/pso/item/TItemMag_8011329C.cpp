#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18 { char pad[0x18]; };
struct VObj_18 : VBase_18 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual s16 m14();
};

extern "C" {
M2C_UNK refresh_if_current_player__20TWindowSubStatusDispFPv(void *);
int TItemData__sub_8010EE40(void*);
int get_stat_percent__9TItemDataFPv(void*);
int get_level__9TItemDataFPv(void*);
int get_percent__9TItemDataFPv(void*);
s16 TItemMagSub__sub_8011455C(void *);
void TItemMag__vt12(s32 arg0);
s32 obj_isState2_324(void *);
s16 obj_getS16_32E(void *);
s16 obj_getS16_32C(void *);
s32 TObjPlayer__sub_8001BEF8(void *, int);
s32 get_flag_40__8TItemMagFPv(void *);
M2C_UNK TItemMag__sub_80110E7C(void *);
M2C_UNK TItemMag__sub_80112E20(void *, int);
s32 TItemMag__sub_80113EC8(void *);
s16 get_global_state__14TOKeyMachine01Fv();
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
void TItemMag__vt42(u8 *arg0);
s32 obj_isState2_324(void *);
s32 TItemMag__sub_801143E8(void *, s32);
s32 is_flag_20000_set__10TObjPlayerFv(void *);
M2C_UNK apply_feed_delta__8TItemMagFPv(void *);
M2C_UNK TItemMag__sub_80113EDC(void *, int, int, int);
M2C_UNK init_feed_timer__8TItemMagFPv(void *);
M2C_UNK TFontSmallLobby__sub_801D5FC0(void *);
M2C_UNK TItemMag__sub_801D7964(void *);
void TItemMag__vt43(u8 *arg0);
u8 * TItemMag__ct(void *, M2C_UNK, s32);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *TItemMag__sub_80113AD4(s32 arg0);
}

extern "C" {

int TItemMag__sub_80113CA8(void);
void TItemMag__sub_80113CB8(u8 *arg0, s32 arg1, u32 arg2);
int TItemMag__vt13(void* p);
void TItemMag__vt16(s32 arg0, s32 arg1);
void TItemMag__vt44(s32 arg0);
void *__dt__8TItemMagFv(void *arg0, s16 arg1);
void cleanup__8TItemMagFv(void);
int is_feed_empty__8TItemMagFPv(void* p);
void scale_field_c8__8TItemMagFPvf(void* p, f32 v);
void set_flags64__8TItemMagFPvUi(void* p, u32 v);
void set_target__8TItemMagFPviiPv(void *arg0, s32 arg1, s32 arg2, void *arg3);
void update__8TItemMagFPv(void *arg0);
M2C_UNK TItemData__sub_8010D510(s32, s32, s32);
int TItemData__sub_8010EE40(void*);
M2C_UNK TItemEquipBase__sub_8010B58C(s32, u8);
int TItemMag__sub_80110F04(void*);
M2C_UNK TItemMag__sub_80111758(void *, M2C_UNK);
void TItemMag__sub_80113E3C(void* p);
u8 TItemMag__sub_80113E74(void* p);
f32 TItemMag__sub_80113EEC(void* p);
s16 TObjPlayer__sub_80113D90(void* p);
void __dt__14TItemEquipBaseFv(void *, int);
int __dt__9TItemLoadFPvs(void*, void*);
M2C_UNK copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
int fn_800F953C(void*);
void free_obj_heap__10TObjPlayerFPv(void *);
u8 get_field_ed__10TObjPlayerFPv();
s16 get_item_type__8TItemMagFPv(void* p);
int get_level__9TItemDataFPv(void*);
s16 get_mag_data__10TObjPlayerFPv(void* p);
int get_mag_item_data(void* p);
int get_mag_item_percent(void* p);
int get_mag_item_stat_percent(void* p);
int get_mag_level(void* p);
int get_percent__9TItemDataFPv(void*);
int get_stat_percent__9TItemDataFPv(void*);
int get_status_flag__8TItemMagFPv(void* p);
s16 get_sync__8TItemMagFPv(void* p);
int is_active__8TItemMagFPv(void* p);
s32 obj_testFlags30(void *, M2C_UNK);
int test_feed_flags__11TItemMagSubFPvUi(void* p, u32 m);

extern const f32 TItemMag__data_805DABA4;
extern const f32 TItemMag__data_805DABA8;

void update__8TItemMagFPv(void *arg0) {
    f32 temp_f1;

    temp_f1 = M2C_FIELD(arg0, f32 *, 0x1C8);
    if (TItemMag__data_805DABA4 < temp_f1) {
        M2C_FIELD(arg0, f32 *, 0x1C8) = (f32) (temp_f1 - TItemMag__data_805DABA8);
    }
    if (obj_testFlags30(arg0, 0x08000000) == 0) {
        TItemMag__sub_80111758(arg0, 1);
        return;
    }
    TItemMag__sub_80111758(arg0, 0);
}

int TItemMag__vt13(void* p) { return TItemMag__sub_80110F04(p); }

void TItemMag__vt12(s32 arg0) {
    if ((TItemMagSub__sub_8011455C((void *) (arg0 + 0x198)) > 0xC8) || (((s16)get_stat_percent__9TItemDataFPv((void*)((void *) (arg0 + 0x198)))) < 0) || (((s16)get_percent__9TItemDataFPv((void*)((void *) (arg0 + 0x198)))) < 0) || (((s16)get_level__9TItemDataFPv((void*)((void *) (arg0 + 0x198)))) < 0) || (((s16)TItemData__sub_8010EE40((void*)((void *) (arg0 + 0x198)))) < 0)) {
        refresh_if_current_player__20TWindowSubStatusDispFPv((void *) (arg0));
    }
}

void TItemMag__vt16(s32 arg0, s32 arg1) {
    TItemData__sub_8010D510(arg1, arg0 + 0x198, arg0);
}

void TItemMag__vt43(u8 *arg0) {
  s32 temp_r3;
  s32 var_r31;
  u8 *temp_r6;
  u8 *new_var;
  if (((volatile int)obj_isState2_324(*((u8 **) (((s8 *) arg0) + 0xF0)))) == 0)
  {
    TItemMag__sub_801D7964((void *) ((*((u8 **) (((s8 *) arg0) + 0xF0))) + 0x500));
    var_r31 = 0;
    do
    {
      temp_r3 = TItemMag__sub_801143E8(arg0 + 0x198, var_r31);
      if (temp_r3 != (-1))
      {
        new_var = arg0;
        temp_r6 = (u8 *) (*((u8 **) (((s8 *) new_var) + 0xF0)));
        TItemMag__sub_80113EDC((void *) (temp_r6 + 0x4AC), (int) ((s16) temp_r3), (int) (-1), (int) temp_r6);
      }
      var_r31 += 1;
    }
    while (var_r31 != 3);
    if (is_flag_20000_set__10TObjPlayerFv((void *) (*((u8 **) (((s8 *) arg0) + 0xF0)))) == 0)
    {
      init_feed_timer__8TItemMagFPv((void *) ((*((u8 **) (((s8 *) arg0) + 0xF0))) + 0x4AC));
      TFontSmallLobby__sub_801D5FC0((void *) ((*((u8 **) (((s8 *) arg0) + 0xF0))) + 0x4AC));
    }
  }
  apply_feed_delta__8TItemMagFPv((void *) arg0);
}

void TItemMag__vt42(u8 *arg0) {
    u8 *temp_r3;
    M2C_FIELD(arg0, s32 *, 0x18C) = 0;
    if (obj_isState2_324((void *) (M2C_FIELD(arg0, u8 **, 0xF0))) == 0) {
        M2C_FIELD(arg0, s32 *, 0x18C) = 0x10;
        TItemMag__sub_80110E7C((void *) (arg0));
    }
    TItemMag__sub_80112E20((void *) (arg0), (int) (1));
    temp_r3 = M2C_FIELD(arg0, u8 **, 0xF0);
    M2C_FIELD(arg0, s16 *, 0x1D4) = ((VObj_18 *)(temp_r3))->m14();
    if ((s16) M2C_FIELD(arg0, s16 *, 0x1D6) == -1) {
        M2C_FIELD(arg0, s16 *, 0x1D6) = get_global_state__14TOKeyMachine01Fv();
    }
    M2C_FIELD(arg0, s16 *, 0x1DC) = obj_getS16_32C((void *) (M2C_FIELD(arg0, u8 **, 0xF0)));
    M2C_FIELD(arg0, s16 *, 0x1DE) = obj_getS16_32E((void *) (M2C_FIELD(arg0, u8 **, 0xF0)));
    if (TObjPlayer__sub_8001BEF8((void *) (arg0 + 0x178), (int) (1)) != 0) {
        M2C_FIELD(arg0, s32 *, 0x18C) = (s32) (M2C_FIELD(arg0, s32 *, 0x18C) & 0xFFFFFFDF);
    } else {
        M2C_FIELD(arg0, s32 *, 0x18C) = (s32) (M2C_FIELD(arg0, s32 *, 0x18C) | 0x20);
    }
    if ((get_flag_40__8TItemMagFPv((void *) (arg0)) == 0) && (TItemMag__sub_80113EC8((void *) (M2C_FIELD(arg0, u8 **, 0xF0))) == 0)) {
        TBoss3Volopt__sub_8022675C((int) (0x4000B20A), (void *) (M2C_FIELD(arg0, u8 **, 0xF0) + 0x38), (int) (0), (int) (0));
    }
}

void TItemMag__vt44(s32 arg0) {
    u8 temp_r3;
    u8 var_r4;

    temp_r3 = get_field_ed__10TObjPlayerFPv();
    var_r4 = temp_r3;
    if (temp_r3 >= 0x42U) {
        var_r4 = 0x42;
    }
    TItemEquipBase__sub_8010B58C(arg0, var_r4);
}

extern M2C_UNK __vt__8TItemMag[];

void *__dt__8TItemMagFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__8TItemMag;
        __dt__14TItemEquipBaseFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

    extern int TItemMag__data_805D54A8;
    extern int lbl_805D54AC;
    extern int lbl_805D54B0;

u8 *TItemMag__sub_80113AD4(s32 arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != 0) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1E0));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(TItemMag__ct(temp_r3, tl_05, arg0));
        }
        return var_r0;
    }
    return NULL;
}

void cleanup__8TItemMagFv(void) { __dt__9TItemLoadFPvs((void*)(TItemMag__data_805D54A8), (void*)1); fn_800F953C((void*)(lbl_805D54B0)); TItemMag__data_805D54A8 = 0; lbl_805D54AC = 0; lbl_805D54B0 = 0; }

void set_flags64__8TItemMagFPvUi(void* p, u32 v) { *(u32*)((char*)p + 0x64) |= v; }

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {

int TItemMag__sub_80113CA8(void) { return 0; }

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {

void TItemMag__sub_80113CB8(u8 *arg0, s32 arg1, u32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x70) = arg1;
    if (arg2 != 0U) {
        copy_vec4__13TRaderMapCoreFPvPv((void *) (arg0 + 0xB8), (void *) (arg2));
    }
}

}

extern M2C_UNK lbl_8043E560;
extern const f32 TItemMag__data_805DABA4;
extern const f32 TItemMag__data_805DABA8;

void set_target__8TItemMagFPviiPv(void *arg0, s32 arg1, s32 arg2, void *arg3) {
    M2C_FIELD(arg0, s32 *, 0x24) = arg1;
    M2C_FIELD(arg0, s32 *, 0x2C) = arg2;
    M2C_FIELD(arg0, void **, 0x28) = arg3;
    if ((void *) M2C_FIELD(arg0, void **, 0x28) != NULL) {
        M2C_FIELD(arg0, f32 *, 0x80) = (f32) TItemMag__data_805DABA4;
        M2C_FIELD(arg0, f32 *, 0x84) = (f32) ((f32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x28), u32 *, 4) - TItemMag__data_805DABA8);
    }
}

void scale_field_c8__8TItemMagFPvf(void* p, f32 v) { *(f32*)((char*)p + 0xc8) *= v; }
int is_feed_empty__8TItemMagFPv(void* p) { return (test_feed_flags__11TItemMagSubFPvUi(p, 64)) == 0; }

}
