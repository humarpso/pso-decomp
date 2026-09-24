#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80328F7C { char pad[0x8]; };
struct VObj_80328F7C : Base_80328F7C {
    virtual void m0();  virtual void m1();  virtual void m2();  virtual void m3();
    virtual void m4();  virtual void m5();  virtual void m6();  virtual void m7();
    virtual void m8();  virtual void m9();  virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51();
    virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55();
    virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63();
    virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67();
    virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71();
    virtual void m72(); virtual s32 m73();
};
struct Base_80329044 { char pad[0x8]; };
struct VObj_80329044 : Base_80329044 {
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
    virtual void m75(s32);
};

struct RecoveredGlobal_80329088_lbl_805430E8 {
    M2C_UNK value;
    u8 remaining[0x1BC];
};

struct RecoveredGlobal_80329088_lbl_805432A8 {
    M2C_UNK value;
    u8 remaining[0x1BC];
};

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

extern "C" {
s32 is_valid_state__6TLobbyFPvi(void *unused, s32 arg1);
extern RecoveredGlobal_80329088_lbl_805430E8 lbl_805430E8;
extern RecoveredGlobal_80329088_lbl_805432A8 lbl_805432A8;
M2C_UNK *TLobby__sub_80329088(s32 arg0, s32 _w1);
int TLobby__sub_802A7260(void* a0);
int TLobby__sub_802A7278(void* a0);
extern RecoveredGlobal_802A7444_lbl_804DDBD8 lbl_804ED7C8;
int TLobby__sub_802A7260(void* a0 = 0);
int TLobby__sub_802A7278(void* a0 = 0);
s32 TLobby__sub_80329100(M2C_UNK arg0, s32 arg1, s32 arg2);
extern RecoveredGlobal_802A7444_lbl_804DDBD8 lbl_804ED7C8;
s32 TLobby__sub_803290DC(void *self, s32 a, s32 b, s32 c);
}

extern "C" {

s32 get_cell_address__6TLobbyFPvii(void *arg0, s32 arg1, s32 arg2);
void check_valid_state__6TLobbyFi(s32 arg0);
void set_player_handle_valid__6TLobbyFPv(void *arg0);
s32 is_handle_valid__10TObjPlayerFPv();

extern s32 lbl_805D6C80;

s32 get_cell_address__6TLobbyFPvii(void *arg0, s32 arg1, s32 arg2) {
    struct VObj_80328F7C *o = (struct VObj_80328F7C *)arg0;
    return lbl_805D6C80 + ((arg2 + (arg1 * o->m73())) << 0xE);
}

s32 is_valid_state__6TLobbyFPvi(void *unused, s32 arg1) {
    switch (arg1) {
    case 0:
    case 3:
        return 0;
    case 1:
    case 2:
    case 4:
    case 5:
        return 1;
    default:
        return 0;
    }
}

void check_valid_state__6TLobbyFi(s32 arg0) {
    is_valid_state__6TLobbyFPvi((void *)((void *)(arg0)), (s32)((s32)(is_handle_valid__10TObjPlayerFPv())));
}

void set_player_handle_valid__6TLobbyFPv(void *arg0) {
    struct VObj_80329044 *o = (struct VObj_80329044 *)arg0;
    o->m75(is_handle_valid__10TObjPlayerFPv());
}
typedef char RecoveredGlobal_80329088_lbl_805430E8_size[sizeof(RecoveredGlobal_80329088_lbl_805430E8) == 0x1C0 ? 1 : -1];
typedef char RecoveredGlobal_80329088_lbl_805432A8_size[sizeof(RecoveredGlobal_80329088_lbl_805432A8) == 0x1C0 ? 1 : -1];
M2C_UNK *TLobby__sub_80329088(s32 arg0, s32 _w1) {
    M2C_UNK *var_r3;
    s32 temp_r3;
    temp_r3 = is_valid_state__6TLobbyFPvi((void *)(arg0), (s32)(_w1));
    switch (temp_r3) {
    case 0:
        var_r3 = (M2C_UNK *)(&lbl_805430E8.value);
        var_r3 = (M2C_UNK *)(&lbl_805430E8.value);
        return &lbl_805430E8.value;
    case 1:
        var_r3 = (M2C_UNK *)(&lbl_805432A8.value);
        var_r3 = (M2C_UNK *)(&lbl_805432A8.value);
        return &lbl_805432A8.value;
    default:
        var_r3 = (M2C_UNK *)((u8 *)(NULL));
        return NULL;
    }
}
typedef char RecoveredGlobal_802A7444_lbl_804DDBD8_size[sizeof(RecoveredGlobal_802A7444_lbl_804DDBD8) == 0x18 ? 1 : -1];

s32 TLobby__sub_803290DC(void *self, s32 a, s32 b, s32 c) {
    return ((s32 ** *)&lbl_804ED7C8)[a][b][c];
}

s32 TLobby__sub_80329100(M2C_UNK arg0, s32 arg1, s32 arg2) {
    if (((s32)TLobby__sub_802A7278((void*)((void *) (arg1)))) == 0) {
        return 0;
    }
    if (((s32)TLobby__sub_802A7260((void*)((void *) (arg2)))) != 0) {
        return M2C_FIELD(M2C_FIELD(&lbl_804ED7C8.value, M2C_UNK *, (arg1 * 4)), M2C_UNK *, (arg2 * 4));
    }
    return 0;
}
typedef char RecoveredGlobal_802A74B8_lbl_804DD9F8_size[sizeof(RecoveredGlobal_802A74B8_lbl_804DD9F8) == 0x18 ? 1 : -1];

}
