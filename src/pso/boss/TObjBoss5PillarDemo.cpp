#include "types.h"
#include "pso/boss/TObjBoss5PillarDemo.h"

struct RecoveredGlobal_8028AC00___vt__19TObjBoss5PillarDemo {
    s32 value;
    u8 remaining[0x14];
};

struct Pd_8028ACE8 { u8 pad[0x1C]; s32 count; void **a; void **b; };

extern "C" {
s32 __nw__7TObjectFUl(int);
extern void *lbl_805D4DD8;
extern s32 tl_02;
s32 TObjBoss5Pillar__ct(void *, void *, void *);
extern s32 __vt__19TObjBoss5PillarDemo[];
extern s32 lbl_805D3B28;
extern void *lbl_805D4DD8;
extern const f32 lbl_805DD908;
u8 *TObjBoss5PillarDemo__ct(u8 *arg0, s32 arg1, s32 arg2);
void transform_to_view__11TCameraCtrlFii(void *, void *);
void copy_pos__11TNowLoadingFPv(void *, void *);
extern u8 lbl_80450CDC[];
extern s32 boss5_pillar_demo_index;
void TObjBoss5PillarDemo__sub_8028ACE8(Pd_8028ACE8 *arg0, void* _w1);
}

extern "C" {

void TObjBoss5PillarDemo__sub_8028AB38(void);
void TObjBoss5PillarDemo__sub_8028ACE0(void);
void TObjBoss5PillarDemo__sub_8028ACE4(void);
void TObjBoss5PillarDemo__sub_8028AD88(void* a0);
void TObjBoss5PillarDemo__sub_8028ADB0(u32 arg0);
void *__dt__19TObjBoss5PillarDemoFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__15TObjBoss5PillarFv(void *, int);
s32 clear_child_target_refs(s32, s32);
s32 clear_chain_flags(s32, s32);
s32 set_model_node_callback(s32);

extern void *lbl_805D4DD8;

void TObjBoss5PillarDemo__sub_8028AB38(void) {
    void *temp_r4;

    if ((void *) lbl_805D4DD8 != NULL) {
        temp_r4 = *(void **)((s8 *)lbl_805D4DD8 + 0x42C);
        clear_child_target_refs(*(s32 *)((s8 *)temp_r4 + 0x78), *(s32 *)((s8 *)temp_r4 + 0x68));
    }
}

extern void *lbl_805D4DD8;

void TObjBoss5PillarDemo::update_active_pillar() {
    void *temp_r4;

    if ((void *) lbl_805D4DD8 != NULL) {
        temp_r4 = *(void **)((s8 *)lbl_805D4DD8 + 0x42C);
        clear_chain_flags(*(s32 *)((s8 *)temp_r4 + 0x78), *(s32 *)((s8 *)temp_r4 + 0x68));
    }
}

extern s32 __vt__19TObjBoss5PillarDemo[];

void *__dt__19TObjBoss5PillarDemoFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__19TObjBoss5PillarDemo;
        __dt__15TObjBoss5PillarFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_8028AC00___vt__19TObjBoss5PillarDemo_size[sizeof(RecoveredGlobal_8028AC00___vt__19TObjBoss5PillarDemo) == 0x18 ? 1 : -1];
u8 *TObjBoss5PillarDemo__ct(u8 *arg0, s32 arg1, s32 arg2) {
    TObjBoss5Pillar__ct((void *) (arg0), (void *) (arg1), (void *) (arg2));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8028AC00___vt__19TObjBoss5PillarDemo *)&__vt__19TObjBoss5PillarDemo).value;
    *(s32 *)((s8 *)arg0 + 0) = lbl_805D3B28;
    *(f32 *)((s8 *)arg0 + 0x24) = lbl_805DD908;
    *(s32 *)((s8 *)arg0 + 0x38) = *(s32 *)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&lbl_805D4DD8) + 0x42C)) + 0x38);
    *(s32 *)((s8 *)arg0 + 0x3C) = *(s32 *)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&lbl_805D4DD8) + 0x42C)) + 0x48);
    *(s32 *)((s8 *)arg0 + 0x40) = *(s32 *)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&lbl_805D4DD8) + 0x430)) + 4);
    *(s32 *)((s8 *)arg0 + 0x44) = *(s32 *)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&lbl_805D4DD8) + 0x430)) + 0xC);
    return arg0;
}

s32 TObjBoss5PillarDemo::create() {
    s32 temp_r31;
    s32 temp_r3;
    s32 var_r0;
    temp_r31 = *(s32 *)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&lbl_805D4DD8) + 0x42C)) + 0x38);
    temp_r3 = __nw__7TObjectFUl((int) (0x4C));
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = ((s32)TObjBoss5PillarDemo__ct((u8 *)((int) (temp_r3)), (s32)((int) (tl_02)), (s32)((void *) (temp_r31 + 8))));
    }
    return var_r0;
}

void TObjBoss5PillarDemo__sub_8028ACE0(void) {  }
void TObjBoss5PillarDemo__sub_8028ACE4(void) {  }

    extern int boss5_pillar_demo_ptr;

void TObjBoss5PillarDemo__sub_8028ACE8(Pd_8028ACE8 *arg0, void* _w1) {
    f32 sp[3];
    s32 idx;
    idx = boss5_pillar_demo_index - 1;
    boss5_pillar_demo_index += 1;
    if (idx >= 0 && idx < arg0->count) {
        transform_to_view__11TCameraCtrlFii(lbl_80450CDC, sp);
        if (arg0->a != NULL && arg0->a[idx] != NULL) {
            copy_pos__11TNowLoadingFPv(arg0->a[idx], sp);
        }
        if (arg0->b != NULL && arg0->b[idx] != NULL) {
            copy_pos__11TNowLoadingFPv(arg0->b[idx], sp);
        }
    }
}

void TObjBoss5PillarDemo__sub_8028AD88(void* a0) { TObjBoss5PillarDemo__sub_8028ACE8((Pd_8028ACE8 *)((void*)(boss5_pillar_demo_ptr)), (void*)(a0)); }

void TObjBoss5PillarDemo__sub_8028ADB0(u32 arg0) {
    if (arg0 != 0U) {
        set_model_node_callback(0);
    }
}

}
