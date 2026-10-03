#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
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
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_802A74B8_lbl_804DD9F8 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct Base_802A752C_802A7290 { char pad[0x8]; };

struct VObj_802A752C_802A7290 : Base_802A752C_802A7290 {
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

struct Base_802A75C8 { char pad[0x8]; };

struct VObj_802A75C8 : Base_802A75C8 {
    virtual void m0();   virtual void m1();   virtual void m2();   virtual void m3();
    virtual void m4();   virtual void m5();   virtual void m6();   virtual void m7();
    virtual void m8();   virtual void m9();   virtual void m10();  virtual void m11();
    virtual void m12();
};

extern "C" {
int is_valid_player_motion_variant(void* a0);
int TLobby__sub_802A7278(void* a0);
extern RecoveredGlobal_802A7444_lbl_804DDBD8 lbl_804DDBD8;
s32 player_motion_provider1_get_clip_indices(M2C_UNK arg0, s32 arg1, s32 arg2);
int is_valid_player_motion_variant(void* a0);
int TLobby__sub_802A7278(void* a0);
extern RecoveredGlobal_802A74B8_lbl_804DD9F8 lbl_804DD9F8;
s32 player_motion_provider1_get_actions(M2C_UNK arg0, s32 arg1, s32 arg2);
M2C_UNK TLobby__sub_802A7848(void *, s32);
s32 TLobby__sub_802A7868(void *, s32, s32);
s32 load_action_motion_pairs(void *, s32, s32, s32);
M2C_UNK forward_801C210C__10TObjPlayerFPv(void *, s32);
s32 handle_message__6TLobbyFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void free__11TOBoss4RockFUi(void*);
extern s32 lbl_805D6680;
void TLobby__sub_802A7640(void);
s32 alloc_buffer__11TOBoss4RockFPv(M2C_UNK);
extern s32 lbl_805D6680;
void alloc_boss4rock_buffer__6TLobbyFv(void);
void TLobby__sub_802A7640(void);
int set_photon_chair_flag__6TLobbyFi(int);
void TLobby__sub_802A769C(void);
void alloc_boss4rock_buffer__6TLobbyFv(void);
int set_photon_chair_flag__6TLobbyFi(int);
void enable_and_refresh__6TLobbyFv(void);
M2C_UNK TLobby__sub_802A7AF8(M2C_UNK, M2C_UNK *);
M2C_UNK free__10TObjPlayerFPv(void *);
extern M2C_UNK lbl_804DDBF0[];
void *__dt__6TLobbyFPvs(void *arg0, s16 arg1);
void TLobby__sub_802A7B50(void *);
extern M2C_UNK lbl_804DDBF0[];
void *ct_variant__6TLobbyFPv(void *arg0);
void* TLobby__sub_802A7780(void* p);
void* TLobby__sub_802A7788(void* p);
extern s32 lbl_805D6680;
int TLobby__sub_802A7790(void);
extern RecoveredGlobal_802A7444_lbl_804DDBD8 lbl_804DDBD8;
s32 TLobby__sub_802A7420(void *self, s32 a, s32 b, s32 c);
void player_motion_provider1_set_attack_interpolation(u8 *arg0);
s32 sub_802a7290_fwd__10TObjPlayerFPv(void *);
s32 is_handle_valid__10TObjPlayerFPv(void *);
s32 load_action_motion_pairs(void *, s32, s32, s32);
s32 TLobby__sub_802A75C8(void *arg0, s32 arg1);
}

extern "C" {

void TLobby__sub_802A7318(void* p);
s32 calc_cell_offset__6TLobbyFPvii(void *arg0, s32 arg1, s32 arg2);
s32 get_valid_child__6TLobbyFPv(void *arg0);
s32 validate_handle__6TLobbyFPv(s32 *arg0);
int is_valid_player_motion_variant(void* a0 = 0);
int TLobby__sub_802A7278(void* a0 = 0);
void TObjSeabedSuisoBrakable__vt17(void);

s32 get_valid_child__6TLobbyFPv(void *arg0) {
    if (is_valid_player_motion_variant((void*)(M2C_FIELD(arg0, s32 *, 4))) != 0) {
        return M2C_FIELD(arg0, s32 *, 4);
    }
    return 0;
}
s32 validate_handle__6TLobbyFPv(s32 *arg0) {
    if (TLobby__sub_802A7278((void*)(*arg0)) != 0) {
        return *arg0;
    }
    return 0;
}
void TLobby__sub_802A7318(void* p) { *(s32*)((char*)p + 0x0) = 0; *(s32*)((char*)p + 0x4) = 0; }

extern s32 lbl_805D6680;

s32 calc_cell_offset__6TLobbyFPvii(void *arg0, s32 arg1, s32 arg2) {
    struct VObj_802A7328_802A7290 *o = (struct VObj_802A7328_802A7290 *)arg0;
    return lbl_805D6680 + ((arg2 + (arg1 * o->m73())) << 0xE);
}
typedef char RecoveredGlobal_802A7444_lbl_804DDBD8_size[sizeof(RecoveredGlobal_802A7444_lbl_804DDBD8) == 0x18 ? 1 : -1];

void player_motion_provider1_set_attack_interpolation(u8 *arg0) {
    VObj_802A7378 *o = (VObj_802A7378 *)arg0;
    o->slots[o->m15()].node->flags |= 0x80;
    o->slots[o->m16()].node->flags |= 0x80;
    o->slots[o->m17()].node->flags |= 0x80;
}

s32 TLobby__sub_802A7420(void *self, s32 a, s32 b, s32 c) {
    return ((s32 ** *)&lbl_804DDBD8)[a][b][c];
}

s32 player_motion_provider1_get_clip_indices(M2C_UNK arg0, s32 arg1, s32 arg2) {
    if (((s32)TLobby__sub_802A7278((void*)((void *) (arg1)))) == 0) {
        return 0;
    }
    if (((s32)is_valid_player_motion_variant((void*)((void *) (arg2)))) != 0) {
        return M2C_FIELD(M2C_FIELD(&lbl_804DDBD8.value, M2C_UNK *, (arg1 * 4)), M2C_UNK *, (arg2 * 4));
    }
    return 0;
}
typedef char RecoveredGlobal_802A74B8_lbl_804DD9F8_size[sizeof(RecoveredGlobal_802A74B8_lbl_804DD9F8) == 0x18 ? 1 : -1];
s32 player_motion_provider1_get_actions(M2C_UNK arg0, s32 arg1, s32 arg2) {
    if (((s32)TLobby__sub_802A7278((void*)((void *) (arg1)))) == 0) {
        return 0;
    }
    if (((s32)is_valid_player_motion_variant((void*)((void *) (arg2)))) != 0) {
        return M2C_FIELD(M2C_FIELD(&lbl_804DD9F8.value, M2C_UNK *, (arg1 * 4)), M2C_UNK *, (arg2 * 4));
    }
    return 0;
}
s32 handle_message__6TLobbyFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r3;
    if (TLobby__sub_802A7868(arg0, arg2, arg3) != 0) {
        return 1;
    }
    forward_801C210C__10TObjPlayerFPv(arg0, arg2);
    TLobby__sub_802A7848(arg0, arg3);
    temp_r3 = load_action_motion_pairs(arg0, arg1, arg2, arg3);
    if (temp_r3 != 0) {
        ((VObj_802A752C_802A7290 *)arg0)->m12();
    }
    return temp_r3;
}

s32 TLobby__sub_802A75C8(void *arg0, s32 arg1) {
    s32 a = is_handle_valid__10TObjPlayerFPv(arg0);
    s32 b = sub_802a7290_fwd__10TObjPlayerFPv(arg0);
    s32 r = load_action_motion_pairs(arg0, arg1, a, b);
    if (r != 0) {
        ((VObj_802A75C8 *)arg0)->m12();
    }
    return r;
}

void TLobby__sub_802A7640(void) {
    if ((u32) (*(u32 *)&lbl_805D6680) != 0U) {
        free__11TOBoss4RockFUi((void*)(*(u32 *)&lbl_805D6680));
        (*(u32 *)&lbl_805D6680) = 0U;
    }
}
void alloc_boss4rock_buffer__6TLobbyFv(void) {
    lbl_805D6680 = alloc_buffer__11TOBoss4RockFPv(0x100000);
}
void TLobby__sub_802A769C(void) { TLobby__sub_802A7640(); set_photon_chair_flag__6TLobbyFi(0); }
void enable_and_refresh__6TLobbyFv(void) { set_photon_chair_flag__6TLobbyFi(1); alloc_boss4rock_buffer__6TLobbyFv(); }
void *__dt__6TLobbyFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 8) = lbl_804DDBF0;
        TLobby__sub_802A7AF8((M2C_UNK)arg0, 0);
        if (arg1 > 0) {
            free__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}
void *ct_variant__6TLobbyFPv(void *arg0) {
    TLobby__sub_802A7B50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x8) = lbl_804DDBF0;
    return arg0;
}
void* TLobby__sub_802A7780(void* p) { return (char*)p + 0xc; }
void* TLobby__sub_802A7788(void* p) { return (char*)p + 0xc; }
int TLobby__sub_802A7790(void) {  return (*(int *)&lbl_805D6680); }

}
