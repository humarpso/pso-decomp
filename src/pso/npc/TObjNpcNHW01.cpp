#include "types.h"
#include "pso/misc/TLanguage_801E4874.h"
#include "pso/unk/text_800F9B84.h"
#include "pso/npc/TUnk_804A8640.h"
#include "pso/npc/TObjNpcNHW01.h"
#include "pso/misc/TLobby.h"
#include "pso/npc/TObjNpcBase.h"
#include "pso/npc/TObjNpcFemaleBase.h"
#include "pso/player/TObjPlayer.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

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

struct RecoveredGlobal_8014D2F8___vt__12TObjNpcNHW01 {
    s32 value;
    u8 remaining[0x174];
};

extern "C" {
extern s32 __vt__12TObjNpcNHW01[];
extern s32 TObjNpcNHW01__name;
extern u32 TObjNpcNHW01__model_object;
extern u32 TObjNpcNHW01__texture_handle;
extern char lbl_8043FE38[];
extern char lbl_8043FE4C[];
void TLobby__sub_803DA16C(void*);
void *TObjControl__ct(void *, void *);
void *TObjNpcNurseBase__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);

void TObjNpcNHW01::free_resources() {
    if ((u32) TObjNpcNHW01__texture_handle != 0U) {
        TLobby__sub_803DA16C((void*)TObjNpcNHW01__texture_handle);
        TAdSinglePlyChrSelectGC::safe_free(TObjNpcNHW01__texture_handle);
        TObjNpcNHW01__texture_handle = 0U;
    }
    if ((u32) TObjNpcNHW01__model_object != 0U) {
        TLobby::free_nodes_with_id((u32)((void*)TObjNpcNHW01__model_object));
        TObjNpcNHW01__model_object = 0U;
    }
}

void TObjNpcNHW01::load_resources() {
    TObjNpcNHW01__model_object = (u32)create_named_object((s32)lbl_8043FE38);
    TObjNpcNHW01__texture_handle = (u32)load_gvm_texture_file((s32)lbl_8043FE4C);
}

void *__dt__12TObjNpcNHW01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__12TObjNpcNHW01;
        ((TUnk_804A8640 *)arg0)->destroy_npc_female_base(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_04;

typedef char RecoveredGlobal_8014D2F8___vt__12TObjNpcNHW01_size[sizeof(RecoveredGlobal_8014D2F8___vt__12TObjNpcNHW01) == 0x178 ? 1 : -1];
u8 *TObjNpcNHW01__ct(u8 *arg0, s32 arg1, s32 arg2) {
    ((TUnk_804A8640 *)arg0)->construct_female_base();
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8014D2F8___vt__12TObjNpcNHW01 *)&__vt__12TObjNpcNHW01).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjNpcNHW01__name;
    ((VObj_18_aa4667 *)(arg0))->m79(arg2);
    ((TObjPlayer *)arg0)->init_position_vectors();
    *(s32 *)((s8 *)arg0 + 0x34) = (s32) *(*(s32 * *)&TObjNpcNHW01__model_object);
    ((TObjNpcNHW01 *)arg0)->texture_id = (s32) (*(s32 *)&TObjNpcNHW01__texture_handle);
    ((TObjNpcBase *)arg0)->setup_common();
    return arg0;
}

void * TObjNpcNurseBase__create(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3B8);
    if (o2 != NULL) {
        o2 = TObjNpcNurseBase__ct(o2, o, arg0);
    }
    return o2;
}

}
