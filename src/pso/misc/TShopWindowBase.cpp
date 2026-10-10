#include "pso/TShopWindowBase.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802239EC_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

struct RecoveredGlobal_80223A48_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

extern "C" {
s32 obj_getField1c(void *);
s32 TShopGenerator__sub_80222DAC(int);
u16 TShopWindowBase__sub_8022397C(u8 *arg0);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 get_map_id__13TRaderMapCoreFPv(int);
extern RecoveredGlobal_802239EC_lbl_8050E208 controller_input_state;
bool TShopWindowBase__sub_802239EC(u8 *arg0);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 get_map_id__13TRaderMapCoreFPv(int);
extern RecoveredGlobal_802239EC_lbl_8050E208 controller_input_state;
bool TShopWindowBase__sub_80223A48(u8 *arg0);
}

extern "C" {

struct Base_80223AA4_80223938 { char pad[0x18]; };
struct VObj_80223AA4_80223938 : Base_80223AA4_80223938 {
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
};

void TShopWindowBase__vt9(void);
void *__ct__15TShopWindowBaseFv(void *arg0);
void draw_if_ready__15TShopWindowBaseFPv(void *arg0);
s32 get_child_field1c__15TShopWindowBaseFPv(void *arg0);
f32 get_scale__15TShopWindowBaseFv(void);
void __ct__7TObjectFP7TObject(void *);
s32 get_instance__11TCameraCtrlFv();
s32 is_not_split_screen__13TRaderMapCoreFv();
s32 obj_getField1c(void *);

void TShopWindowBase__vt9(void) {  }

extern f32 lbl_805DC728;
extern f32 lbl_805DC72C;

f32 get_scale__15TShopWindowBaseFv(void) {
    if ((is_not_split_screen__13TRaderMapCoreFv() == 1) && (get_instance__11TCameraCtrlFv() > 2)) {
        return lbl_805DC728;
    }
    return lbl_805DC72C;
}

u16 TShopWindowBase__sub_8022397C(u8 *arg0) {
    u32 temp_r3;
    temp_r3 = M2C_FIELD(arg0, u32 *, 0x24);
    if (temp_r3 != 0U) {
        return TShopGenerator__sub_80222DAC((int) (obj_getField1c((void *)((int) (temp_r3)))));
    }
    return 0U;
}

s32 get_child_field1c__15TShopWindowBaseFPv(void *arg0) {
    void *temp_r3 = M2C_FIELD(arg0, void **, 0x24);
    if (temp_r3 != NULL) {
        return obj_getField1c(temp_r3);
    }
    return 0;
}

extern s32 lbl_805D55C0;

typedef char RecoveredGlobal_802239EC_lbl_8050E208_size[sizeof(RecoveredGlobal_802239EC_lbl_8050E208) == 0x1B0 ? 1 : -1];
bool TShopWindowBase__sub_802239EC(u8 *arg0) {
    if (M2C_FIELD(((u8 *)&controller_input_state.value + (get_map_id__13TRaderMapCoreFPv((int) (M2C_FIELD(arg0, s32 *, 0x24))) * 0x50)), s32 *, 0x28) & 2) {
        return 1;
    }
    return test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (2)) != 0;
}

typedef char RecoveredGlobal_80223A48_lbl_8050E208_size[sizeof(RecoveredGlobal_80223A48_lbl_8050E208) == 0x1B0 ? 1 : -1];
bool TShopWindowBase__sub_80223A48(u8 *arg0) {
    if (M2C_FIELD(((u8 *)&(*(RecoveredGlobal_80223A48_lbl_8050E208 *)&controller_input_state).value + (get_map_id__13TRaderMapCoreFPv((int) (M2C_FIELD(arg0, s32 *, 0x24))) * 0x50)), s32 *, 0x28) & 4) {
        return 1;
    }
    return test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&(*(RecoveredGlobal_80223A48_lbl_8050E208 *)&controller_input_state).value + 0x160), (int) (4)) != 0;
}

void draw_if_ready__15TShopWindowBaseFPv(void *arg0) {
    if ((s32) lbl_805D55C0 == 0) {
        ((VObj_80223AA4_80223938 *)arg0)->m9();
    }
}

extern M2C_UNK __vt__15TShopWindowBase[];
extern void *lbl_805D3700;

void *__dt__7TObjectFv(void *, s16);
void __dl__7TObjectFPv(void *);
void *__dt__15TShopWindowBaseFv(void *self, s16 m) {
    if (self != NULL) {
        M2C_FIELD(self, M2C_UNK **, 0x18) = __vt__15TShopWindowBase;
        __dt__7TObjectFv(self, 0);
        if (m > 0) {
            __dl__7TObjectFPv(self);
        }
    }
    return self;
}

void *__ct__15TShopWindowBaseFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TShopWindowBase;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3700;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    M2C_FIELD(arg0, u32 *, 0x20) = 0;
    M2C_FIELD(arg0, u32 *, 0x24) = 0;
    return arg0;
}

void render__7TObjectFv();
void render_shadows__7TObjectFv();
void TShopWindowBase__sub_802115F0();
void TShopWindowBase__sub_80217454();
void TShopWindowBase__sub_80216080();
void TShopWindowBase__sub_80217458();
void TShopWindowBase__is_ready();
M2C_UNK __vt__15TShopWindowBase[12] = {
    0,
    0,
    (M2C_UNK)__dt__15TShopWindowBaseFv,
    (M2C_UNK)draw_if_ready__15TShopWindowBaseFPv,
    (M2C_UNK)render__7TObjectFv,
    (M2C_UNK)render_shadows__7TObjectFv,
    (M2C_UNK)TShopWindowBase__sub_802115F0,
    (M2C_UNK)TShopWindowBase__sub_80217454,
    (M2C_UNK)TShopWindowBase__sub_80216080,
    (M2C_UNK)TShopWindowBase__sub_80217458,
    (M2C_UNK)TShopWindowBase__is_ready,
    (M2C_UNK)TShopWindowBase__vt9,
};
}
