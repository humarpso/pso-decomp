#include "types.h"
#include "pso/npc/TObjNpcHHM00.h"
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

struct RecoveredGlobal_8014B1F4___vt__12TObjNpcHHM00 {
    s32 value;
    u8 remaining[0x174];
};

extern "C" {
s32 construct_male_npc_base(void *);
extern s32 __vt__12TObjNpcHHM00[];
extern s32 TObjNpcHHM00__name;
extern u32 TObjNpcHHM00__model_object;
extern u32 TObjNpcHHM00__body_texture_gvm_handle;
u8 *TObjNpcHHM00__ct(u8 *arg0, s32 arg1, s32 arg2);
void *create_named_object(const char *name);
void *load_gvm_texture_file(const char *name);
extern u32 TObjNpcHHM00__model_object;
extern u32 TObjNpcHHM00__body_texture_gvm_handle;
extern char TObjNpcHHM00__data_rel_filename[];
extern char TObjNpcHHM00__body_texture_filename[];
}

extern "C" {

void * TObjNpcHRM00__create(void *arg0);
void *__dt__12TObjNpcHHM00Fv(void *arg0, s16 arg1);
void TLobby__sub_803DA16C(void*);
void *TObjControl__ct(void *, void *);
void *TObjNpcHRM00__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);

extern u32 TObjNpcHHM00__model_object;
extern u32 TObjNpcHHM00__body_texture_gvm_handle;

void TObjNpcHHM00::free_resources() {
    if ((u32) TObjNpcHHM00__body_texture_gvm_handle != 0U) {
        TLobby__sub_803DA16C((void*)TObjNpcHHM00__body_texture_gvm_handle);
        TAdSinglePlyChrSelectGC::safe_free(TObjNpcHHM00__body_texture_gvm_handle);
        TObjNpcHHM00__body_texture_gvm_handle = 0U;
    }
    if ((u32) TObjNpcHHM00__model_object != 0U) {
        TLobby::free_nodes_with_id((u32)((void*)TObjNpcHHM00__model_object));
        TObjNpcHHM00__model_object = 0U;
    }
}

extern s32 __vt__12TObjNpcHHM00[];

void TObjNpcHHM00::load_resources() {
    TObjNpcHHM00__model_object = (u32)create_named_object(TObjNpcHHM00__data_rel_filename);
    TObjNpcHHM00__body_texture_gvm_handle = (u32)load_gvm_texture_file(TObjNpcHHM00__body_texture_filename);
}

void *__dt__12TObjNpcHHM00Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__12TObjNpcHHM00;
        ((TObjNpcLappy *)arg0)->destroy_npc_lappy_base(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_04;

typedef char RecoveredGlobal_8014B1F4___vt__12TObjNpcHHM00_size[sizeof(RecoveredGlobal_8014B1F4___vt__12TObjNpcHHM00) == 0x178 ? 1 : -1];
u8 *TObjNpcHHM00__ct(u8 *arg0, s32 arg1, s32 arg2) {
    construct_male_npc_base((void *) (arg0));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8014B1F4___vt__12TObjNpcHHM00 *)&__vt__12TObjNpcHHM00).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjNpcHHM00__name;
    ((VObj_18_aa4667 *)(arg0))->m79(arg2);
    ((TObjPlayer *)arg0)->init_position_vectors();
    *(s32 *)((s8 *)arg0 + 0x34) = (s32) *(*(s32 * *)&TObjNpcHHM00__model_object);
    *(s32 *)((s8 *)arg0 + 0x24) = (s32) (*(s32 *)&TObjNpcHHM00__body_texture_gvm_handle);
    ((TObjNpcBase *)arg0)->setup_common();
    return arg0;
}

void * TObjNpcHRM00__create(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3B8);
    if (o2 != NULL) {
        o2 = TObjNpcHRM00__ct(o2, o, arg0);
    }
    return o2;
}

}
