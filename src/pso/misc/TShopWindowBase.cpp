#include "pso/TShopWindowBase.h"

#include "types.h"
#include "pso/misc/TRaderMapCore.h"

struct RecoveredGlobal_802239EC_lbl_8050E208 {
    s32 value;
    u8 remaining[0x1AC];
};

struct RecoveredGlobal_80223A48_lbl_8050E208 {
    s32 value;
    u8 remaining[0x1AC];
};

extern "C" {
s32 obj_getField1c(void *);
s32 TShopGenerator__sub_80222DAC(int);
u16 TShopWindowBase__sub_8022397C(u8 *arg0);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFv(void *, int);
s32 get_map_id__13TRaderMapCoreFPv(int);
extern RecoveredGlobal_802239EC_lbl_8050E208 controller_input_state;
bool TShopWindowBase__sub_802239EC(u8 *arg0);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFv(void *, int);
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

void vfunc_11__15TShopWindowBaseFv(void);
void *__ct__15TShopWindowBaseFv(void *arg0);
void run_task__15TShopWindowBaseFv(void *arg0);
void __ct__7TObjectFP7TObject(void *);
s32 get_instance__11TCameraCtrlFv();
s32 obj_getField1c(void *);

void TShopWindowBase::vfunc_11() {  }

extern f32 lbl_805DC728;
extern f32 lbl_805DC72C;

f32 TShopWindowBase::get_scale() {
    if ((TRaderMapCore::is_not_split_screen() == 1) && (get_instance__11TCameraCtrlFv() > 2)) {
        return lbl_805DC728;
    }
    return lbl_805DC72C;
}

u16 TShopWindowBase__sub_8022397C(u8 *arg0) {
    u32 temp_r3;
    temp_r3 = *(u32 *)((s8 *)arg0 + 0x24);
    if (temp_r3 != 0U) {
        return TShopGenerator__sub_80222DAC((int) (obj_getField1c((void *)((int) (temp_r3)))));
    }
    return 0U;
}

s32 TShopWindowBase::get_child_field1c() {
    void *temp_r3 = *(void **)((s8 *)this + 0x24);
    if (temp_r3 != NULL) {
        return obj_getField1c(temp_r3);
    }
    return 0;
}

extern s32 lbl_805D55C0;

typedef char RecoveredGlobal_802239EC_lbl_8050E208_size[sizeof(RecoveredGlobal_802239EC_lbl_8050E208) == 0x1B0 ? 1 : -1];
bool TShopWindowBase__sub_802239EC(u8 *arg0) {
    if (*(s32 *)((s8 *)((u8 *)&controller_input_state.value + (get_map_id__13TRaderMapCoreFPv((int) (*(s32 *)((s8 *)arg0 + 0x24))) * 0x50)) + 0x28) & 2) {
        return 1;
    }
    return test_flag_4c__23TAdSinglePlyChrSelectGCFv((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (2)) != 0;
}

typedef char RecoveredGlobal_80223A48_lbl_8050E208_size[sizeof(RecoveredGlobal_80223A48_lbl_8050E208) == 0x1B0 ? 1 : -1];
bool TShopWindowBase__sub_80223A48(u8 *arg0) {
    if (*(s32 *)((s8 *)((u8 *)&(*(RecoveredGlobal_80223A48_lbl_8050E208 *)&controller_input_state).value + (get_map_id__13TRaderMapCoreFPv((int) (*(s32 *)((s8 *)arg0 + 0x24))) * 0x50)) + 0x28) & 4) {
        return 1;
    }
    return test_flag_4c__23TAdSinglePlyChrSelectGCFv((void *) ((u8 *)&(*(RecoveredGlobal_80223A48_lbl_8050E208 *)&controller_input_state).value + 0x160), (int) (4)) != 0;
}

void TShopWindowBase::run_task() {
    if ((s32) lbl_805D55C0 == 0) {
        ((VObj_80223AA4_80223938 *)this)->m9();
    }
}

extern s32 __vt__15TShopWindowBase[];
extern void *TShopWindowBase__class_name;

void *__dt__7TObjectFv(void *, s16);
void __dl__7TObjectFPv(void *);
void *__dt__15TShopWindowBaseFv(void *self, s16 m) {
    if (self != NULL) {
        *(s32 **)((s8 *)self + 0x18) = __vt__15TShopWindowBase;
        __dt__7TObjectFv(self, 0);
        if (m > 0) {
            __dl__7TObjectFPv(self);
        }
    }
    return self;
}

void *__ct__15TShopWindowBaseFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__15TShopWindowBase;
    *(void **)((s8 *)arg0 + 0x0) = TShopWindowBase__class_name;
    *(u32 *)((s8 *)arg0 + 0x1C) = 0;
    *(u32 *)((s8 *)arg0 + 0x20) = 0;
    *(u32 *)((s8 *)arg0 + 0x24) = 0;
    return arg0;
}

void render__7TObjectFv();
void render_shadows__7TObjectFv();
void TShopWindowBase__sub_802115F0();
void vfunc_7__15TShopWindowBaseFv();
void vfunc_8__15TShopWindowBaseFv();
void vfunc_9__15TShopWindowBaseFv();
void vfunc_10__15TShopWindowBaseFv();
s32 __vt__15TShopWindowBase[12] = {
    0,
    0,
    (s32)__dt__15TShopWindowBaseFv,
    (s32)run_task__15TShopWindowBaseFv,
    (s32)render__7TObjectFv,
    (s32)render_shadows__7TObjectFv,
    (s32)TShopWindowBase__sub_802115F0,
    (s32)vfunc_7__15TShopWindowBaseFv,
    (s32)vfunc_8__15TShopWindowBaseFv,
    (s32)vfunc_9__15TShopWindowBaseFv,
    (s32)vfunc_10__15TShopWindowBaseFv,
    (s32)vfunc_11__15TShopWindowBaseFv,
};
}
