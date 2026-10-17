#include "types.h"
#include "pso/npc/TUnk_804A9F50.h"
#include "pso/npc/TObjNpcGovernorBase.h"
#include "pso/npc/TObjNpcHFW00.h"
#include "pso/misc/TLobby.h"
#include "pso/npc/TObjNpcBase.h"
#include "pso/npc/TObjNpcLappy.h"
#include "pso/player/TObjPlayer.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

struct RecoveredGlobal_8014ABC4_lbl_804A9428 { s32 value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8014ABC4_lbl_804A9428_size[sizeof(RecoveredGlobal_8014ABC4_lbl_804A9428) == 0x10 ? 1 : -1];

struct VBase_18_aa4667 { char pad[0x18]; };

struct VObj_18_aa4667 : VBase_18_aa4667 {
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
    virtual void m77();
    virtual void m78();
    virtual s32 m79(s32);
};

struct RecoveredGlobal_8014AC6C___vt__19TObjNpcGovernorBase {
    s32 value;
    u8 remaining[0x174];
};

extern "C" {
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
extern RecoveredGlobal_8014ABC4_lbl_804A9428 bm_n_soutoku_i_body_resource_descriptor;
extern u32 TObjNpcGovernorBase__shared_resource;
u8 *construct_male_npc_base(u8 *arg0);
extern s32 __vt__19TObjNpcGovernorBase[];
extern s32 TObjNpcGovernorBase__name;
u8 *TObjNpcGovernorBase__ct(u8 *arg0, s32 arg1, s32 arg2);
s32 create_named_object(s32 arg0);
u8 *load_gvm_texture_file(s32 arg0);
extern u32 TObjNpcHFW00__shared_resource_obj;
extern u32 TObjNpcHFW00__texture_handle;
extern char lbl_8043FA38[];
extern char lbl_8043FA4C[];
void * TObjNpcHFW00__create(void *arg0);
void *__dt__19TObjNpcGovernorBaseFv(void *arg0, s16 arg1);
void TLobby__sub_8001FE7C(void*, int);
void TLobby__sub_803DA16C(void*);
void *TObjControl__ct(void *, void *);
u8 *TObjNpcHFW00__ct(u8 *arg0, s32 arg1, s32 arg2);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);

void TObjNpcGovernorBase::free_shared_data() {
    if ((u32) TObjNpcGovernorBase__shared_resource != 0U) {
        TLobby__sub_8001FE7C((void*)TObjNpcGovernorBase__shared_resource, 1);
        TObjNpcGovernorBase__shared_resource = 0U;
    }
}

void TObjNpcGovernorBase::load_shared_resource() {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = ((TAdSinglePlyChrSelectGC *)((void *)0x440))->alloc();
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 1, &bm_n_soutoku_i_body_resource_descriptor.value, 0, 0, 0));
    }
    (*(s32 *)&TObjNpcGovernorBase__shared_resource) = var_r0;
}

void *__dt__19TObjNpcGovernorBaseFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__19TObjNpcGovernorBase;
        ((TUnk_804A9F50 *)arg0)->destroy_npc_lappy_base(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_04;

typedef char RecoveredGlobal_8014AC6C___vt__19TObjNpcGovernorBase_size[sizeof(RecoveredGlobal_8014AC6C___vt__19TObjNpcGovernorBase) == 0x178 ? 1 : -1];
u8 *TObjNpcGovernorBase__ct(u8 *arg0, s32 arg1, s32 arg2) {
    construct_male_npc_base((arg0));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8014AC6C___vt__19TObjNpcGovernorBase *)&__vt__19TObjNpcGovernorBase).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjNpcGovernorBase__name;
    ((VObj_18_aa4667 *)(arg0))->m79(arg2);
    ((TObjPlayer *)arg0)->init_position_vectors();
    *(s32 *)((s8 *)arg0 + 0x34) = (s32) *(s32 *)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&TObjNpcGovernorBase__shared_resource) + 0x42C)) + 8);
    ((TObjNpcGovernorBase *)arg0)->texture_id = (s32) *(s32 *)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&TObjNpcGovernorBase__shared_resource) + 0x42C)) + 0xC);
    ((TObjNpcBase *)arg0)->setup_common();
    return arg0;
}

void * TObjNpcHFW00__create(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3B8);
    if (o2 != NULL) {
        o2 = TObjNpcHFW00__ct((u8 *)o2, (s32)o, (s32)arg0);
    }
    return o2;
}

void TObjNpcHFW00::free_resources() {
    if ((u32) TObjNpcHFW00__texture_handle != 0U) {
        TLobby__sub_803DA16C((void*)TObjNpcHFW00__texture_handle);
        TAdSinglePlyChrSelectGC::safe_free(TObjNpcHFW00__texture_handle);
        TObjNpcHFW00__texture_handle = 0U;
    }
    if ((u32) TObjNpcHFW00__shared_resource_obj != 0U) {
        TLobby::free_nodes_with_id((u32)((void*)TObjNpcHFW00__shared_resource_obj));
        TObjNpcHFW00__shared_resource_obj = 0U;
    }
}
void TObjNpcHFW00::load_resources() {
    TObjNpcHFW00__shared_resource_obj = (u32)create_named_object((s32)lbl_8043FA38);
    TObjNpcHFW00__texture_handle = (u32)load_gvm_texture_file((s32)lbl_8043FA4C);
}

}
