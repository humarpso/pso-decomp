#include "types.h"
#include "pso/object/TObjHashiBase.h"
#include <stddef.h>

struct Base_80191BEC_80191B94 { char pad[0x18]; };
struct VObj_80191BEC_80191B94 : Base_80191BEC_80191B94 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(s32);
};

struct VBase { char pad[0x18]; };

struct VDisp : VBase {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

#include <stddef.h>
struct Stack_80191874 {
    f32 sp8;
    u8 pad_C[0x4];
    f32 sp10;
    f32 sp14;
    f32 sp18;
};

struct RecoveredGlobal_80191874_lbl_804FF610 {
    s32 value;
    u8 remaining[0x8];
};

extern "C" {
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
s32 set_global_param__8TObjFishFi(s32);
s32 draw_ginja_object(s32);
s32 draw_model_motion(s32, void *, f32);
void render__13TObjHashiBaseFPv(u8 *arg0);
s32 get_state_flag__9TMainTaskFv();
f32 xz_distance_squared(void *, void *);
s32 matrix_mult_vec(int, void *, void *);
s32 project_world_to_screen(int, void *, void *);
extern RecoveredGlobal_80191874_lbl_804FF610 lbl_804FF610;
extern s32 camera_ctrl_instance;
extern const f32 lbl_805DBE2C;
extern const f32 lbl_805DBE30;
s16 update_visibility__13TObjHashiBaseFPvff(u8 *arg0, f32 farg0, f32 farg1);
}

extern "C" {

void *TObjHashiBase__ct(void *arg0, s32 arg1, s32 arg2);
void *__dt__13TObjHashiBaseFv(void *arg0, s16 arg1);
void handle_6x78(void *arg0);
u8 is_current_floor_switch_set(u16, f32);
void __dl__7TObjectFPv(void *);
s32 bswap_6x78__11TObjInfoColFPv();
void destroy_key_base__5TOKeyFPvs(void *, int);
s32 fn_80191D14(u16, s32);
s32 get_handle_6x78_entry(u16);
s32 fn_80191D5C(u16);
s32 init_map_object_base();

extern s32 __vt__13TObjHashiBase[];

#pragma push
#pragma opt_common_subs off
#pragma fp_contract on
typedef char RecoveredGlobal_80191874_lbl_804FF610_size[sizeof(RecoveredGlobal_80191874_lbl_804FF610) == 0xC ? 1 : -1];
s16 update_visibility__13TObjHashiBaseFPvff(u8 *arg0, f32 farg0, f32 farg1) {
    typedef char sp8_offset[(offsetof(Stack_80191874, sp8) == 0x0) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80191874, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_80191874, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_80191874, sp18) == 0x10) ? 1 : -1];
    Stack_80191874 stack;
    if (get_state_flag__9TMainTaskFv() == 1) {
        return *(s16 *)((s8 *)arg0 + 0x1E);
    }
    if (xz_distance_squared((void *) (camera_ctrl_instance + 0x178), (void *) (arg0 + 0x38)) < (farg1 * farg1)) {
        *(s16 *)((s8 *)arg0 + 0x1E) = 1;
        return 1;
    }
    matrix_mult_vec((int) (0), (void *) (arg0 + 0x38), (void *) (&stack.sp10));
    if (stack.sp18 > lbl_805DBE2C) {
        *(s16 *)((s8 *)arg0 + 0x1E) = 0;
        return 0;
    }
    if (stack.sp18 < -farg0) {
        *(s16 *)((s8 *)arg0 + 0x1E) = 0;
        return 0;
    }
    if (stack.sp10 < lbl_805DBE2C) {
        stack.sp10 = (*(f32 *)((s8 *)(&lbl_804FF610.value) + 0) * farg1) + *(f32 *)((s8 *)arg0 + 0x38);
        stack.sp14 = (*(f32 *)((s8 *)(&lbl_804FF610.value) + 4) * farg1) + *(f32 *)((s8 *)arg0 + 0x3C);
        stack.sp18 = (*(f32 *)((s8 *)(&lbl_804FF610.value) + 8) * farg1) + *(f32 *)((s8 *)arg0 + 0x40);
        project_world_to_screen((int) (0), (void *) (&stack.sp10), (void *) (&stack.sp8));
        if (stack.sp8 < lbl_805DBE2C) {
            *(s16 *)((s8 *)arg0 + 0x1E) = 0;
            return 0;
        }
        goto block_13;
    }
    stack.sp10 = -((*(f32 *)((s8 *)(&lbl_804FF610.value) + 0) * farg1) - *(f32 *)((s8 *)arg0 + 0x38));
    stack.sp14 = -((*(f32 *)((s8 *)(&lbl_804FF610.value) + 4) * farg1) - *(f32 *)((s8 *)arg0 + 0x3C));
    stack.sp18 = -((*(f32 *)((s8 *)(&lbl_804FF610.value) + 8) * farg1) - *(f32 *)((s8 *)arg0 + 0x40));
    project_world_to_screen((int) (0), (void *) (&stack.sp10), (void *) (&stack.sp8));
    if (stack.sp8 > lbl_805DBE30) {
        *(s16 *)((s8 *)arg0 + 0x1E) = 0;
        return 0;
    }
block_13:
    *(s16 *)((s8 *)arg0 + 0x1E) = 1;
    return 1;
}
#pragma pop

void render__13TObjHashiBaseFPv(u8 *arg0) {
    void *p;
    if (((VDisp *)arg0)->m8(*(f32 *)((s8 *)arg0 + 0xC0), *(f32 *)((s8 *)arg0 + 0xC4)) != 0) {
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
        set_global_param__8TObjFishFi(*(s32 *)((s8 *)arg0 + 0x24));
        p = *(void **)((s8 *)arg0 + 0xBC);
        if (p != NULL) {
            draw_model_motion(*(s32 *)((s8 *)arg0 + 0x34), p, *(f32 *)((s8 *)arg0 + 0xB0));
        } else {
            draw_ginja_object(*(s32 *)((s8 *)arg0 + 0x34));
        }
        pop_matrix();
    }
}

extern "C" void set_indexed_flags(void*,s32,u32);
}
typedef char BridgeSize[sizeof(TObjHashiBase)==0xD4?1:-1];
typedef char BridgePhase[offsetof(TObjHashiBase,phase)==0xAC?1:-1];
typedef char BridgeRaisedY[offsetof(TObjHashiBase,raisedHeight)==0xCC?1:-1];
void TObjHashiBase::update() {
    f32 height;
    s32 index;
    switch (phase) {
    case 0:
        if (((u8 (*)(u16))is_current_floor_switch_set)((u16)switchId) != 0) {
            phase=1;
            return;
        }
        break;
    case 1:
        position[1]=position[1]+riseSpeed;
        if(position[1]>(height=raisedHeight)) {
            position[1]=height;
            phase=2;
            return;
        }
        break;
    case 2:
        index=0;
        while(index<colliderCount) {
            set_indexed_flags(this,index,8);
            ++index;
        }
        phase=3;
        break;
    case 3:break;
    }
}

extern "C" {
void *__dt__13TObjHashiBaseFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__13TObjHashiBase;
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 __vt__13TObjHashiBase[];
extern s32 lbl_805D3374;
extern const f32 lbl_805DBE24;
extern const f32 lbl_805DBE28;
extern const f32 lbl_805DBE34;
extern const f32 lbl_805DBE38;

void *TObjHashiBase__ct(void *arg0, s32 arg1, s32 arg2) {
    init_map_object_base();
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__13TObjHashiBase;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D3374;
    ((VObj_80191BEC_80191B94 *)arg0)->m5(arg2);
    *(s32 *)((s8 *)arg0 + 0xC8) = (s32) *(s32 *)((s8 *)arg0 + 0x84);
    *(f32 *)((s8 *)arg0 + 0xC0) = (f32) lbl_805DBE24;
    *(f32 *)((s8 *)arg0 + 0xC4) = (f32) lbl_805DBE28;
    if (is_current_floor_switch_set((u16) *(s32 *)((s8 *)arg0 + 0xC8), lbl_805DBE24) == 1) {
        *(s32 *)((s8 *)arg0 + 0xAC) = 2;
        *(f32 *)((s8 *)arg0 + 0xCC) = (f32) *(f32 *)((s8 *)arg0 + 0x3C);
        *(f32 *)((s8 *)arg0 + 0xD0) = (f32) lbl_805DBE34;
    } else {
        *(s32 *)((s8 *)arg0 + 0xAC) = 0;
        *(f32 *)((s8 *)arg0 + 0xCC) = (f32) *(f32 *)((s8 *)arg0 + 0x3C);
        *(f32 *)((s8 *)arg0 + 0x3C) = (f32) (*(f32 *)((s8 *)arg0 + 0x3C) - lbl_805DBE38);
        *(f32 *)((s8 *)arg0 + 0xD0) = (f32) lbl_805DBE34;
    }
    return arg0;
}

void handle_6x78(void *arg0) {
    bswap_6x78__11TObjInfoColFPv();
    if (get_handle_6x78_entry(*(u16 *)((s8 *)arg0 + 4)) != 0) {
        fn_80191D14(*(u16 *)((s8 *)arg0 + 4), 0);
        return;
    }
    fn_80191D5C(*(u16 *)((s8 *)arg0 + 4));
}

}
