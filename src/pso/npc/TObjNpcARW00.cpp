#include "types.h"
#include "pso/npc/TUnk_804A8640.h"
#include "pso/npc/TObjNpcARW00.h"
#include "pso/npc/TObjNpcEnemy.h"
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

struct RecoveredGlobal_80148038___vt__12TObjNpcARW00 {
    s32 value;
    u8 remaining[0x174];
};

struct Npc_801480FC {
    u8 pad0[0x60];
    s32 f60;
    u8 pad64[0x358 - 0x64];
    f32 f358;
    f32 f35C;
    f32 f360;
    f32 f364;
    u8 pad368[0x384 - 0x368];
    s32 f384;
    u8 pad388[0x38C - 0x388];
    s32 f38C;
    u8 pad390[0x3A0 - 0x390];
    s32 f3A0;
    s32 f3A4;
    s32 f3A8;
    s32 f3AC;
};

extern "C" {
s32 play_sound_effect(int, void *, int, int);
extern s32 __vt__12TObjNpcARW00[];
extern s32 TObjNpcARW00__name;
extern u32 TObjNpcARW00__static_model;
extern u32 TObjNpcARW00__gvm_texture_handle;
u8 *TObjNpcARW00__ct(u8 *arg0, s32 arg1, s32 arg2);
s32 create_named_object(s32 arg0);
u8 *load_gvm_texture_file(s32 arg0);
extern char lbl_8043F4A8[];
extern char lbl_8043F4BC[];
void debug_printf_at(s32, const char *, ...);
extern char lbl_8043F4DC[];
extern char lbl_8043F4F8[];
extern char lbl_8043F514[];
extern char lbl_8043F52C[];
extern const f32 lbl_805DB1B8;
void *__dt__12TObjNpcARW00Fv(void *arg0, s16 arg1);
void TLobby__sub_803DA16C(void*);
void __dl__7TObjectFPv(void *);

void TObjNpcARW00::free_resources() {
    if ((u32) TObjNpcARW00__gvm_texture_handle != 0U) {
        TLobby__sub_803DA16C((void*)TObjNpcARW00__gvm_texture_handle);
        TAdSinglePlyChrSelectGC::safe_free(TObjNpcARW00__gvm_texture_handle);
        TObjNpcARW00__gvm_texture_handle = 0U;
    }
    if ((u32) TObjNpcARW00__static_model != 0U) {
        TLobby::free_nodes_with_id((u32)((void*)TObjNpcARW00__static_model));
        TObjNpcARW00__static_model = 0U;
    }
}

void TObjNpcARW00::load_resources() {
    TObjNpcARW00__static_model = (u32)create_named_object((s32)lbl_8043F4A8);
    TObjNpcARW00__gvm_texture_handle = (u32)load_gvm_texture_file((s32)lbl_8043F4BC);
}

void *__dt__12TObjNpcARW00Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__12TObjNpcARW00;
        ((TUnk_804A8640 *)arg0)->destroy_npc_female_base(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_80148038___vt__12TObjNpcARW00_size[sizeof(RecoveredGlobal_80148038___vt__12TObjNpcARW00) == 0x178 ? 1 : -1];
u8 *TObjNpcARW00__ct(u8 *arg0, s32 arg1, s32 arg2) {
    ((TUnk_804A8640 *)arg0)->construct_female_base();
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80148038___vt__12TObjNpcARW00 *)&__vt__12TObjNpcARW00).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjNpcARW00__name;
    ((VObj_18_aa4667 *)(arg0))->m79(arg2);
    ((TObjPlayer *)arg0)->init_position_vectors();
    *(s32 *)((s8 *)arg0 + 0x34) = (s32) *(*(s32 * *)&TObjNpcARW00__static_model);
    ((TObjNpcARW00 *)arg0)->texture_id = (s32) (*(s32 *)&TObjNpcARW00__gvm_texture_handle);
    ((TObjNpcBase *)arg0)->setup_common();
    return arg0;
}

void TObjNpcARW00::play_voice() {
    s32 arg0 = (s32)this;
    play_sound_effect((int) (0x40004C15), (void *) (arg0 + 0x38), (int) (0), (int) (0));
}

void TObjNpcBase::vfunc_92() {  }
void TObjNpcBase::vfunc_91() {  }
void TObjNpcBase::draw_debug_info() {
    Npc_801480FC *o = (Npc_801480FC *)this;
    o->f384 = o->f60;
    o->f38C = 0;
    if (lbl_805DB1B8 <= o->f358) {
        o->f38C = 1;
        o->f3A0 = o->f358 - lbl_805DB1B8;
    } else {
        o->f3A0 = o->f358;
    }
    if (lbl_805DB1B8 <= o->f35C) {
        o->f38C = 1;
        o->f3A4 = o->f35C - lbl_805DB1B8;
    } else {
        o->f3A4 = o->f35C;
    }
    o->f3A8 = o->f364;
    o->f3AC = o->f360;
    TObjNpcEnemy::set_global_count(0xFF00FF);
    debug_printf_at(0x1A001D, lbl_8043F4DC, o->f358);
    debug_printf_at(0x1A001E, lbl_8043F4F8, o->f35C);
    debug_printf_at(0x1A001F, lbl_8043F514, o->f3AC);
    debug_printf_at(0x1A0020, lbl_8043F52C, o->f3A8);
    TObjNpcEnemy::set_global_count(0xF0F0F0FF);
}

}
