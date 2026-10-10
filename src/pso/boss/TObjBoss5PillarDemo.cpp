#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8028AC00___vt__19TObjBoss5PillarDemo {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct Pd_8028ACE8 { u8 pad[0x1C]; s32 count; void **a; void **b; };

extern "C" {
s32 __nw__7TObjectFUl(int);
extern void *lbl_805D4DD8;
extern s32 tl_02;
s32 create__19TObjBoss5PillarDemoFv(void);
s32 TObjBoss5Pillar__ct(void *, void *, void *);
extern M2C_UNK __vt__19TObjBoss5PillarDemo[];
extern s32 lbl_805D3B28;
extern void *lbl_805D4DD8;
extern const f32 lbl_805DD908;
u8 *TObjBoss5PillarDemo__ct(u8 *arg0, s32 arg1, s32 arg2);
void transform_to_view__11TCameraCtrlFii(void *, void *);
void copy_pos__11TNowLoadingFPvPv(void *, void *);
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
void update_active_pillar__19TObjBoss5PillarDemoFv(void);
void __dl__7TObjectFPv(void *);
void __dt__15TObjBoss5PillarFv(void *, int);
M2C_UNK clear_child_target_refs(s32, s32);
M2C_UNK clear_chain_flags(s32, s32);
M2C_UNK set_model_node_callback(M2C_UNK);

extern void *lbl_805D4DD8;

void TObjBoss5PillarDemo__sub_8028AB38(void) {
    void *temp_r4;

    if ((void *) lbl_805D4DD8 != NULL) {
        temp_r4 = M2C_FIELD(lbl_805D4DD8, void **, 0x42C);
        clear_child_target_refs(M2C_FIELD(temp_r4, s32 *, 0x78), M2C_FIELD(temp_r4, s32 *, 0x68));
    }
}

extern void *lbl_805D4DD8;

void update_active_pillar__19TObjBoss5PillarDemoFv(void) {
    void *temp_r4;

    if ((void *) lbl_805D4DD8 != NULL) {
        temp_r4 = M2C_FIELD(lbl_805D4DD8, void **, 0x42C);
        clear_chain_flags(M2C_FIELD(temp_r4, s32 *, 0x78), M2C_FIELD(temp_r4, s32 *, 0x68));
    }
}

extern M2C_UNK __vt__19TObjBoss5PillarDemo[];

void *__dt__19TObjBoss5PillarDemoFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TObjBoss5PillarDemo;
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
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8028AC00___vt__19TObjBoss5PillarDemo *)&__vt__19TObjBoss5PillarDemo).value;
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D3B28;
    M2C_FIELD(arg0, f32 *, 0x24) = lbl_805DD908;
    M2C_FIELD(arg0, s32 *, 0x38) = M2C_FIELD(M2C_FIELD((*(u8 * *)&lbl_805D4DD8), u8 **, 0x42C), s32 *, 0x38);
    M2C_FIELD(arg0, s32 *, 0x3C) = M2C_FIELD(M2C_FIELD((*(u8 * *)&lbl_805D4DD8), u8 **, 0x42C), s32 *, 0x48);
    M2C_FIELD(arg0, s32 *, 0x40) = M2C_FIELD(M2C_FIELD((*(u8 * *)&lbl_805D4DD8), u8 **, 0x430), s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x44) = M2C_FIELD(M2C_FIELD((*(u8 * *)&lbl_805D4DD8), u8 **, 0x430), s32 *, 0xC);
    return arg0;
}

s32 create__19TObjBoss5PillarDemoFv(void) {
    s32 temp_r31;
    s32 temp_r3;
    s32 var_r0;
    temp_r31 = M2C_FIELD(M2C_FIELD((*(u8 * *)&lbl_805D4DD8), u8 **, 0x42C), s32 *, 0x38);
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
            copy_pos__11TNowLoadingFPvPv(arg0->a[idx], sp);
        }
        if (arg0->b != NULL && arg0->b[idx] != NULL) {
            copy_pos__11TNowLoadingFPvPv(arg0->b[idx], sp);
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
