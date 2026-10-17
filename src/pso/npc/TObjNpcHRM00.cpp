#include "types.h"
#include "pso/npc/TUnk_804A9F50.h"
#include "pso/npc/TObjNpcHRM00.h"
#include "pso/misc/TLobby.h"
#include "pso/npc/TObjNpcBase.h"
#include "pso/npc/TObjNpcLappy.h"
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

struct RecoveredGlobal_8014B3C8___vt__12TObjNpcHRM00 {
    s32 value;
    u8 remaining[0x174];
};

extern "C" {
u8 *construct_male_npc_base(u8 *arg0);
extern s32 __vt__12TObjNpcHRM00[];
extern s32 TObjNpcHRM00__name;
extern u32 TObjNpcHRM00__named_object_resource;
extern u32 TObjNpcHRM00__body_texture_gvm;
u8 *TObjNpcHRM00__ct(u8 *arg0, s32 arg1, s32 arg2);
s32 create_named_object(s32 arg0);
u8 *load_gvm_texture_file(s32 arg0);
extern char TObjNpcHRM00__data_filename[];
extern char TObjNpcHRM00__body_texture_filename[];
void * TObjNpcHRM01__create(void *arg0);
void *__dt__12TObjNpcHRM00Fv(void *arg0, s16 arg1);
void TLobby__sub_803DA16C(void*);
void *TObjControl__ct(void *, void *);
u8 *TObjNpcHRM01__ct(u8 *arg0, s32 arg1, s32 arg2);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);

void TObjNpcHRM00::destroy_resources() {
    if ((u32) TObjNpcHRM00__body_texture_gvm != 0U) {
        TLobby__sub_803DA16C((void*)TObjNpcHRM00__body_texture_gvm);
        TAdSinglePlyChrSelectGC::safe_free(TObjNpcHRM00__body_texture_gvm);
        TObjNpcHRM00__body_texture_gvm = 0U;
    }
    if ((u32) TObjNpcHRM00__named_object_resource != 0U) {
        TLobby::free_nodes_with_id((u32)((void*)TObjNpcHRM00__named_object_resource));
        TObjNpcHRM00__named_object_resource = 0U;
    }
}

void TObjNpcHRM00::load_resources() {
    TObjNpcHRM00__named_object_resource = (u32)create_named_object((s32)TObjNpcHRM00__data_filename);
    TObjNpcHRM00__body_texture_gvm = (u32)load_gvm_texture_file((s32)TObjNpcHRM00__body_texture_filename);
}

void *__dt__12TObjNpcHRM00Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__12TObjNpcHRM00;
        ((TUnk_804A9F50 *)arg0)->destroy_npc_lappy_base(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_04;

typedef char RecoveredGlobal_8014B3C8___vt__12TObjNpcHRM00_size[sizeof(RecoveredGlobal_8014B3C8___vt__12TObjNpcHRM00) == 0x178 ? 1 : -1];
u8 *TObjNpcHRM00__ct(u8 *arg0, s32 arg1, s32 arg2) {
    construct_male_npc_base((arg0));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8014B3C8___vt__12TObjNpcHRM00 *)&__vt__12TObjNpcHRM00).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjNpcHRM00__name;
    ((VObj_18_aa4667 *)(arg0))->m79(arg2);
    ((TObjPlayer *)arg0)->init_position_vectors();
    *(s32 *)((s8 *)arg0 + 0x34) = (s32) *(*(s32 * *)&TObjNpcHRM00__named_object_resource);
    ((TObjNpcHRM00 *)arg0)->texture_id = (s32) (*(s32 *)&TObjNpcHRM00__body_texture_gvm);
    ((TObjNpcBase *)arg0)->setup_common();
    return arg0;
}

void * TObjNpcHRM01__create(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3B8);
    if (o2 != NULL) {
        o2 = TObjNpcHRM01__ct((u8 *)o2, (s32)o, (s32)arg0);
    }
    return o2;
}

}
