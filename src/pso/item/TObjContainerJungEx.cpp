#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
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
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual M2C_UNK m77();
};

struct RecoveredGlobal_8018D314_lbl_804B7168 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_8018D314___vt__19TObjContainerJungEx {
    M2C_UNK value;
    u8 remaining[0x148];
};

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK spawn_item__17TObjContainerItemFPvi(void *, void *);
M2C_UNK set_flag8__6TLobbyFPv(void *);
void TObjContainerJungEx__vt4(u8 *arg0, s16 *arg1, s32 arg2);
void VecCopy__FP3VecPC3Vec(void *, void *);
void reset_photon_effect__10TObjPlayerFPv(s32);
u32 init_collision_body_parts(void *, s32, s32);
u8 * fn_8018A150(void *, s32);
extern RecoveredGlobal_8018D314_lbl_804B7168 lbl_804B7168;
extern M2C_UNK __vt__19TObjContainerJungEx[];
extern s32 lbl_805D331C;
u8 *TObjContainerJungEx__ct(u8 *arg0, s32 arg1, s32 _w2);
}

extern "C" {

void TObjContainerJungEx__vt78(void *arg0);
void TObjContainerJungEx__vt79(u8 *arg0);
void *__dt__19TObjContainerJungExFv(void *arg0, s16 arg1);
void *create__19TObjContainerJungExFPv(void *arg0);
M2C_UNK post_translate_matrix(void *);
M2C_UNK scale_matrix(M2C_UNK, f32, f32, f32);
M2C_UNK draw_ginja_object();
M2C_UNK TObjContainerJungEx__sub_8018D900(M2C_UNK);
M2C_UNK TObjContainerJungEx__sub_8018D93C(M2C_UNK);
M2C_UNK free_collision_body_parts(void *);
M2C_UNK unregister_object_by_id(void *);
M2C_UNK submit_cursor_candidate(void *, M2C_UNK);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK destroy_container_object__10TObjPlayerFPvs(void *, M2C_UNK);
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK set_global_param__8TObjFishFi();

extern void *tl_05;

void *create__19TObjContainerJungExFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x368);
    if (o != NULL) {
        o = TObjContainerJungEx__ct((u8 *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}

extern const f32 lbl_805DBD9C;

void TObjContainerJungEx__vt4(u8 *arg0, s16 *arg1, s32 arg2) {
    if (arg2 != 0) {
        if ((s16) *arg1 == 1) {
            ((VObj_18 *)(arg0))->m77();
            spawn_item__17TObjContainerItemFPvi((void *) (arg0), (void *) (arg0));
            set_flag8__6TLobbyFPv((void *) (arg0));
            queue_destruction__7TObjectFv((void *) (arg0));
            M2C_FIELD(arg0, s16 *, 0x326) = 1;
        }
    } else if ((s16) *arg1 == 1) {
        set_flag8__6TLobbyFPv((void *) (arg0));
        queue_destruction__7TObjectFv((void *) (arg0));
        M2C_FIELD(arg0, s16 *, 0x326) = 1;
    }
}

void TObjContainerJungEx__vt79(u8 *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 0:
        TObjContainerJungEx__sub_8018D900(0);
        set_global_param__8TObjFishFi();
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        scale_matrix(0, lbl_805DBD9C, lbl_805DBD9C, lbl_805DBD9C);
        TObjContainerJungEx__sub_8018D93C(0);
        draw_ginja_object();
        begin_effect_render__13TParticleCtrlFv();
        TObjContainerJungEx__sub_8018D93C(3);
        draw_ginja_object();
        end_effect_render__13TParticleCtrlFv();
        pop_matrix();
    case 1:
        return;
    }
}

void TObjContainerJungEx__vt78(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 0:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x364) != 0) {
            submit_cursor_candidate(arg0, -1);
        }
    case 1:
        return;
    }
}

extern M2C_UNK __vt__19TObjContainerJungEx[];

void *__dt__19TObjContainerJungExFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TObjContainerJungEx;
        unregister_object_by_id(arg0);
        free_collision_body_parts(arg0);
        destroy_container_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8018D314_lbl_804B7168_size[sizeof(RecoveredGlobal_8018D314_lbl_804B7168) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_8018D314___vt__19TObjContainerJungEx_size[sizeof(RecoveredGlobal_8018D314___vt__19TObjContainerJungEx) == 0x14C ? 1 : -1];
u8 *TObjContainerJungEx__ct(u8 *arg0, s32 arg1, s32 _w2) {
    fn_8018A150(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8018D314___vt__19TObjContainerJungEx *)&__vt__19TObjContainerJungEx).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D331C;
    M2C_FIELD(arg0, s16 *, 0x326) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x60000000);
    init_collision_body_parts(arg0, (s32) &lbl_804B7168.value, 1);
    reset_photon_effect__10TObjPlayerFPv((s32) arg0);
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x38);
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0x78) = (f32) (M2C_FIELD(arg0, f32 *, 0x78) + M2C_FIELD(&lbl_804B7168.value, f32 *, 4));
    return arg0;
}

}
