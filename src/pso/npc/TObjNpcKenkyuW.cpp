#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802A3C30_lbl_804DCE48 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_802A3C30_lbl_804DCE48_size[sizeof(RecoveredGlobal_802A3C30_lbl_804DCE48) == 0x10 ? 1 : -1];

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
    virtual M2C_UNK m79(s32);
};

struct RecoveredGlobal_802A3CD8___vt__14TObjNpcKenkyuW {
    M2C_UNK value;
    u8 remaining[0x174];
};

extern "C" {
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_802A3C30_lbl_804DCE48 lbl_804DCE48;
extern u32 TObjNpcKenkyuW__data_805D6658;
void TObjNpcKenkyuW__sub_802A3C30(void);
s32 TObjFish__sub_8001EDB0(int, int);
s32 TObjFish__sub_8001EDC4(int, int);
s32 init_position_vectors__10TObjPlayerFi(void *);
s32 fn_80148274(void *);
s32 fn_8014B8A4(void *);
extern M2C_UNK __vt__14TObjNpcKenkyuW[];
extern s32 lbl_805D3DD4;
extern u32 TObjNpcKenkyuW__data_805D6658;
u8 *TObjNpcKenkyuW__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
}

extern "C" {

void *__dt__14TObjNpcKenkyuWFv(void *arg0, s16 arg1);
void destroy_instance__14TObjNpcKenkyuWFv(void);
void TLobby__sub_8001FE7C(void*, int);
void __dl__7TObjectFPv(void *);
void destroy_npc_lappy_base__12TObjNpcLappyFPvs(void *, int);

extern u32 TObjNpcKenkyuW__data_805D6658;

void destroy_instance__14TObjNpcKenkyuWFv(void) {
    if ((u32) TObjNpcKenkyuW__data_805D6658 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjNpcKenkyuW__data_805D6658, 1);
        TObjNpcKenkyuW__data_805D6658 = 0U;
    }
}

extern M2C_UNK __vt__14TObjNpcKenkyuW[];

void TObjNpcKenkyuW__sub_802A3C30(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 1, &lbl_804DCE48.value, 0, 0, 0));
    }
    (*(s32 *)&TObjNpcKenkyuW__data_805D6658) = var_r0;
}

void *__dt__14TObjNpcKenkyuWFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TObjNpcKenkyuW;
        destroy_npc_lappy_base__12TObjNpcLappyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_802A3CD8___vt__14TObjNpcKenkyuW_size[sizeof(RecoveredGlobal_802A3CD8___vt__14TObjNpcKenkyuW) == 0x178 ? 1 : -1];
u8 *TObjNpcKenkyuW__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    fn_8014B8A4((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_802A3CD8___vt__14TObjNpcKenkyuW *)&__vt__14TObjNpcKenkyuW).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3DD4;
    ((VObj_18_aa4667 *)(arg0))->m79(arg2);
    init_position_vectors__10TObjPlayerFi((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0x34) = TObjFish__sub_8001EDC4((int) ((*(s32 *)&TObjNpcKenkyuW__data_805D6658)), (int) (0));
    M2C_FIELD(arg0, s32 *, 0x24) = TObjFish__sub_8001EDB0((int) ((*(s32 *)&TObjNpcKenkyuW__data_805D6658)), (int) (0));
    fn_80148274((void *) (arg0));
    return arg0;
}

}
