#include "types.h"
#include "pso/object/TObjSeabedSuisoBrakable.h"
#include "pso/misc/TUnk_804DDBF0.h"
#include "pso/misc/TUnk_804DDD28.h"
#include "pso/misc/TLobby.h"
#include "pso/player/TObjPlayer.h"

struct Base_802A7328_802A7290 { char pad[0x8]; };
struct VObj_802A7328_802A7290 : Base_802A7328_802A7290 {
    virtual void m0();   virtual void m1();   virtual void m2();   virtual void m3();
    virtual void m4();   virtual void m5();   virtual void m6();   virtual void m7();
    virtual void m8();   virtual void m9();   virtual void m10();  virtual void m11();
    virtual void m12();  virtual void m13();  virtual void m14();  virtual void m15();
    virtual void m16();  virtual void m17();  virtual void m18();  virtual void m19();
    virtual void m20();  virtual void m21();  virtual void m22();  virtual void m23();
    virtual void m24();  virtual void m25();  virtual void m26();  virtual void m27();
    virtual void m28();  virtual void m29();  virtual void m30();  virtual void m31();
    virtual void m32();  virtual void m33();  virtual void m34();  virtual void m35();
    virtual void m36();  virtual void m37();  virtual void m38();  virtual void m39();
    virtual void m40();  virtual void m41();  virtual void m42();  virtual void m43();
    virtual void m44();  virtual void m45();  virtual void m46();  virtual void m47();
    virtual void m48();  virtual void m49();  virtual void m50();  virtual void m51();
    virtual void m52();  virtual void m53();  virtual void m54();  virtual void m55();
    virtual void m56();  virtual void m57();  virtual void m58();  virtual void m59();
    virtual void m60();  virtual void m61();  virtual void m62();  virtual void m63();
    virtual void m64();  virtual void m65();  virtual void m66();  virtual void m67();
    virtual void m68();  virtual void m69();  virtual void m70();  virtual void m71();
    virtual void m72();  virtual s32 m73();
};

struct RecoveredGlobal_802A7444_lbl_804DDBD8 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_802A74B8_lbl_804DD9F8 {
    s32 value;
    u8 remaining[0x14];
};

struct Node_802A7378 { u8 pad0[0xA]; u16 flags; };

struct Slot_802A7378 { Node_802A7378 *node; u32 x4; };

struct PBase_802A7378 { char pad[0x8]; };

struct VObj_802A7378 : PBase_802A7378 {
    virtual void m0();   virtual void m1();   virtual void m2();   virtual void m3();
    virtual void m4();   virtual void m5();   virtual void m6();   virtual void m7();
    virtual void m8();   virtual void m9();   virtual void m10();  virtual void m11();
    virtual void m12();  virtual void m13();  virtual void m14();
    virtual s32 m15();   virtual s32 m16();   virtual s32 m17();
    u32 xC;
    Slot_802A7378 slots[1];
};

extern "C" {
int is_valid_player_motion_variant(void* a0);
int TLobby__sub_802A7278(void* a0);
extern RecoveredGlobal_802A7444_lbl_804DDBD8 player_motion_clip_roots_b;
extern RecoveredGlobal_802A74B8_lbl_804DD9F8 player_motion_category_table;
void TLobby__sub_802A7848(void *p, s32 _w1);
s32 TLobby__sub_802A7868(void *, s32, s32);
s32 forward_801C210C__10TObjPlayerFv(void *, s32);
void mem_free(void*);
extern s32 player_action_motion_buffer;
void TLobby__sub_802A7640(void);
void *mem_alloc(u32 size);
void TLobby__sub_802A769C(void);
s32 vfunc_3__13TUnk_804DDD28Fs(s32, s32 *);
void free__10TObjPlayerFPv(void *a0);
extern s32 lbl_804DDBF0[];
void *__dt__6TLobbyFPvs(void *arg0, s16 arg1);
u8 *TLobby__sub_802A7B50(u8 *arg0);
void* TLobby__sub_802A7780(void* p);
void* TLobby__sub_802A7788(void* p);
int is_valid_player_motion_variant(void* a0 = 0);
int TLobby__sub_802A7278(void* a0 = 0);

s32 TLobby::get_valid_child() {
    if (is_valid_player_motion_variant((void*)(*(s32 *)&this->m_flags)) != 0) {
        return *(s32 *)&this->m_flags;
    }
    return 0;
}
s32 TLobby::validate_handle(s32 *arg0) {
    if (TLobby__sub_802A7278((void*)(*arg0)) != 0) {
        return *arg0;
    }
    return 0;
}
void TUnk_804DDD28::sub_802A7318() { *(s32*)((char*)this + 0x0) = 0; this->m_4 = 0; }

s32 TLobby::calc_cell_offset(s32 arg1, s32 arg2) {
    struct VObj_802A7328_802A7290 *o = (struct VObj_802A7328_802A7290 *)this;
    return player_action_motion_buffer + ((arg2 + (arg1 * o->m73())) << 0xE);
}
typedef char RecoveredGlobal_802A7444_lbl_804DDBD8_size[sizeof(RecoveredGlobal_802A7444_lbl_804DDBD8) == 0x18 ? 1 : -1];

void TUnk_804DDBF0::vfunc_14() {
    u8 *arg0 = (u8 *)this;
    VObj_802A7378 *o = (VObj_802A7378 *)arg0;
    o->slots[o->m15()].node->flags |= 0x80;
    o->slots[o->m16()].node->flags |= 0x80;
    o->slots[o->m17()].node->flags |= 0x80;
}

int TUnk_804DDBF0::vfunc_9(s32 a, s32 b, s32 c) {
    return ((s32 ** *)&player_motion_clip_roots_b)[a][b][c];
}

int TUnk_804DDBF0::vfunc_8(s32 arg1, s32 arg2) {
    if (((s32)TLobby__sub_802A7278((void*)arg1)) == 0) {
        return 0;
    }
    if (((s32)is_valid_player_motion_variant((void*)arg2)) != 0) {
        return *(s32 *)((s8 *)(*(s32 *)((s8 *)&player_motion_clip_roots_b.value + (arg1 * 4))) + (arg2 * 4));
    }
    return 0;
}
typedef char RecoveredGlobal_802A74B8_lbl_804DD9F8_size[sizeof(RecoveredGlobal_802A74B8_lbl_804DD9F8) == 0x18 ? 1 : -1];
int TUnk_804DDBF0::vfunc_7(s32 arg1, s32 arg2) {
    if (((s32)TLobby__sub_802A7278((void*)arg1)) == 0) {
        return 0;
    }
    if (((s32)is_valid_player_motion_variant((void*)arg2)) != 0) {
        return *(s32 *)((s8 *)(*(s32 *)((s8 *)&player_motion_category_table.value + (arg1 * 4))) + (arg2 * 4));
    }
    return 0;
}
int TUnk_804DDBF0::vfunc_6(s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r3;
    if (TLobby__sub_802A7868(this, arg2, arg3) != 0) {
        return 1;
    }
    forward_801C210C__10TObjPlayerFv(this, arg2);
    TLobby__sub_802A7848(this, arg3);
    temp_r3 = load_action_motion_pairs(arg1, arg2, arg3);
    if (temp_r3 != 0) {
        this->vfunc_14();
    }
    return temp_r3;
}

int TUnk_804DDBF0::vfunc_5(s32 arg1) {
    s32 a = ((TObjPlayer *)this)->is_handle_valid();
    s32 b = ((TObjPlayer *)this)->sub_802a7290_fwd();
    s32 r = load_action_motion_pairs(arg1, a, b);
    if (r != 0) {
        ((TUnk_804DDBF0 *)this)->vfunc_14();
    }
    return r;
}

void TLobby__sub_802A7640(void) {
    if ((u32) (*(u32 *)&player_action_motion_buffer) != 0U) {
        mem_free((void*)(*(u32 *)&player_action_motion_buffer));
        (*(u32 *)&player_action_motion_buffer) = 0U;
    }
}
void TLobby::alloc_boss4rock_buffer() {
    player_action_motion_buffer = (s32)mem_alloc(0x100000);
}
void TLobby__sub_802A769C(void) { TLobby__sub_802A7640(); TLobby::set_photon_chair_flag(0); }
void TLobby::enable_and_refresh() { TLobby::set_photon_chair_flag(1); TLobby::alloc_boss4rock_buffer(); }
void *__dt__6TLobbyFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 8) = lbl_804DDBF0;
        vfunc_3__13TUnk_804DDD28Fs((s32)arg0, 0);
        if (arg1 > 0) {
            free__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}
void *TUnk_804DDBF0::ct_variant() {
    TLobby__sub_802A7B50((u8 *)this);
    *(s32 **)((s8 *)this + 0x8) = lbl_804DDBF0;
    return this;
}
void* TLobby__sub_802A7780(void* p) { return (char*)p + 0xc; }
void* TLobby__sub_802A7788(void* p) { return (char*)p + 0xc; }
int TUnk_804DDBF0::vfunc_4() {  return (*(int *)&player_action_motion_buffer); }

}
