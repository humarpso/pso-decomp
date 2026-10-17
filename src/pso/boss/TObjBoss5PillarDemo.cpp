#include "types.h"
#include "pso/boss/TObjBoss5Pillar.h"
#include "pso/system/ModelDrawContext.h"
#include "pso/boss/TObjBoss5PillarDemo.h"
#include "pso/misc/TNowLoading.h"

struct RecoveredGlobal_8028AC00___vt__19TObjBoss5PillarDemo {
    s32 value;
    u8 remaining[0x14];
};

struct Pd_8028ACE8 { u8 pad[0x1C]; s32 count; void **a; void **b; };

extern "C" {
s32 __nw__7TObjectFUl(int);
extern void *lbl_805D4DD8;
extern s32 tl_02;
extern s32 __vt__19TObjBoss5PillarDemo[];
extern s32 lbl_805D3B28;
extern const f32 lbl_805DD908;
void transform_to_view__11TCameraCtrlFii(s32 arg0, s32 arg1);
extern u8 lbl_80450CDC[];
extern s32 boss5_pillar_demo_index;
void TObjBoss5PillarDemo__sub_8028ACE8(Pd_8028ACE8 *arg0, void* _w1);
void __dl__7TObjectFPv(void *);
s32 clear_child_target_refs(s32, s32);
s32 clear_chain_flags(s32, s32);

void TObjBoss5PillarDemo__sub_8028AB38(void) {
    void *temp_r4;

    if ((void *) lbl_805D4DD8 != NULL) {
        temp_r4 = *(void **)((s8 *)lbl_805D4DD8 + 0x42C);
        clear_child_target_refs(*(s32 *)((s8 *)temp_r4 + 0x78), *(s32 *)((s8 *)temp_r4 + 0x68));
    }
}

void TObjBoss5PillarDemo::update_active_pillar() {
    void *temp_r4;

    if ((void *) lbl_805D4DD8 != NULL) {
        temp_r4 = *(void **)((s8 *)lbl_805D4DD8 + 0x42C);
        clear_chain_flags(*(s32 *)((s8 *)temp_r4 + 0x78), *(s32 *)((s8 *)temp_r4 + 0x68));
    }
}

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
    TObjBoss5Pillar__ct((arg0), (u8 *)arg1, (u8 *)arg2);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8028AC00___vt__19TObjBoss5PillarDemo *)&__vt__19TObjBoss5PillarDemo).value;
    *(s32 *)((s8 *)arg0 + 0) = lbl_805D3B28;
    ((TObjBoss5PillarDemo *)arg0)->m_24 = lbl_805DD908;
    *(s32 *)&((TObjBoss5PillarDemo *)arg0)->m_38 = *(s32 *)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&lbl_805D4DD8) + 0x42C)) + 0x38);
    *(s32 *)&((TObjBoss5PillarDemo *)arg0)->m_3c = *(s32 *)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&lbl_805D4DD8) + 0x42C)) + 0x48);
    *(s32 *)&((TObjBoss5PillarDemo *)arg0)->m_40 = *(s32 *)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&lbl_805D4DD8) + 0x430)) + 4);
    *(s32 *)&((TObjBoss5PillarDemo *)arg0)->m_44 = *(s32 *)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&lbl_805D4DD8) + 0x430)) + 0xC);
    return arg0;
}

s32 TObjBoss5PillarDemo::create() {
    s32 temp_r31;
    s32 temp_r3;
    s32 var_r0;
    temp_r31 = *(s32 *)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&lbl_805D4DD8) + 0x42C)) + 0x38);
    temp_r3 = __nw__7TObjectFUl(0x4C);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = ((s32)TObjBoss5PillarDemo__ct((u8 *)(temp_r3), (s32)(tl_02), (s32)((void *) (temp_r31 + 8))));
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
        transform_to_view__11TCameraCtrlFii((s32)lbl_80450CDC, (s32)sp);
        if (arg0->a != NULL && arg0->a[idx] != NULL) {
            ((TNowLoading *)(arg0->a[idx]))->copy_pos(sp);
        }
        if (arg0->b != NULL && arg0->b[idx] != NULL) {
            ((TNowLoading *)(arg0->b[idx]))->copy_pos(sp);
        }
    }
}

void TObjBoss5PillarDemo__sub_8028AD88(void* a0) { TObjBoss5PillarDemo__sub_8028ACE8((Pd_8028ACE8 *)(boss5_pillar_demo_ptr), a0); }

void TObjBoss5PillarDemo__sub_8028ADB0(u32 arg0) {
    if (arg0 != 0U) {
        set_model_node_callback(0);
    }
}

}
