#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18_72b3e0 { char pad[0x18]; };

struct VObj_18_72b3e0 : VBase_18_72b3e0 {
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
    virtual void m79();
    virtual void m80();
    virtual void m81();
    virtual void m82();
    virtual void m83();
    virtual void m84();
    virtual M2C_UNK m85(s16, M2C_UNK);
    virtual void m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual M2C_UNK m93();
};

typedef struct Rec_80038BA0 { u8 d[0x1C]; } Rec_80038BA0;

typedef struct Tbl_80038BA0 {
    s32 a[2];
    s32 b[2];
    s32 c[2];
    Rec_80038BA0 d[2];
    u8 model[0x10];
} Tbl_80038BA0;

extern "C" {
s32 register_object__6TLobbyFPv(int);
s32 dispatch_shared_handler_b__6TLobbyFPv(int);
s32 register_boss__6TLobbyFPv(int);
M2C_UNK reset_hp__9TObjEneDDFPv(void *, int, int, int);
M2C_UNK check_state_flag_2__9TObjEneDDFPv(void *);
M2C_UNK init_model__9TObjEneDDFPv(void *, void *, int, int);
M2C_UNK init_position_vectors__9TObjEneDDFPv(void *);
extern u8 *lbl_805D4BA4;
extern const f32 TBoss2Mine__data_805D84D4;
extern const f32 TBoss2Mine__data_805D84D8;
void TBoss2Mine__sub_80038BA0(u8 *arg0, s32 arg1);
}

extern "C" {

void *__dt__10TBoss2MineFv(void *arg0, s16 arg1);
void TObjEneDD__vt0(void *, int);
void __dl__7TObjectFPv(void *);
void free_collision_body_parts(void *);

extern M2C_UNK __vt__10TBoss2Mine[];

void *__dt__10TBoss2MineFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TBoss2Mine;
        free_collision_body_parts(arg0);
        TObjEneDD__vt0(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
__declspec(section ".data") void *lbl_80482C88[2] = {
    (void *)0x11, (void *)0x11,
};
__declspec(section ".data") void *lbl_80482C90[2] = {
    (void *)0xf, (void *)0xf,
};
__declspec(section ".data") void *lbl_80482C98[2] = {
    (void *)0x11, (void *)0x11,
};
void *lbl_80482CA0[14] = {
    (void *)0x43610000, (void *)0x0, (void *)0x600, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x43610000,
    (void *)0x0, (void *)0x600, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0,
};
void *lbl_80482CD8[11] = {
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x40a00000,
    (void *)0x0, (void *)0x0, (void *)0x8003, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void TBoss2Mine__sub_80038BA0(u8 *arg0, s32 arg1) {
    s32 temp_r29;
    s32 temp_r30;
    u8 *temp_r6;
    init_position_vectors__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, s32 *, 0x34) = M2C_FIELD(M2C_FIELD(lbl_805D4BA4, u8 **, 0x42C), s32 *, 0x38);
    temp_r6 = M2C_FIELD(lbl_805D4BA4, u8 **, 0x42C);
    M2C_FIELD(arg0, s32 *, 0x24) = M2C_FIELD(temp_r6, s32 *, 0x2C);
    init_model__9TObjEneDDFPv(arg0, (u8 *)lbl_80482CD8, 1, (int)temp_r6);
    reset_hp__9TObjEneDDFPv(arg0, register_boss__6TLobbyFPv(((s32 *)lbl_80482C88)[arg1]),
                            dispatch_shared_handler_b__6TLobbyFPv(((s32 *)lbl_80482C90)[arg1]),
                            register_object__6TLobbyFPv(((s32 *)lbl_80482C98)[arg1]));
    check_state_flag_2__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, Rec_80038BA0 **, 0x350) = &((Rec_80038BA0 *)lbl_80482CA0)[arg1];
    M2C_FIELD(arg0, f32 *, 0x37C) = TBoss2Mine__data_805D84D8;
    ((VObj_18_72b3e0 *)(arg0))->m93();
    M2C_FIELD(arg0, s32 *, 0x38C) = 0;
    M2C_FIELD(arg0, f32 *, 0x390) = TBoss2Mine__data_805D84D4;
    M2C_FIELD(arg0, f32 *, 0x394) = TBoss2Mine__data_805D84D4;
    M2C_FIELD(arg0, f32 *, 0x398) = TBoss2Mine__data_805D84D4;
    M2C_FIELD(arg0, f32 *, 0x39C) = TBoss2Mine__data_805D84D4;
    M2C_FIELD(arg0, f32 *, 0x3A0) = TBoss2Mine__data_805D84D4;
    M2C_FIELD(arg0, f32 *, 0x3A4) = TBoss2Mine__data_805D84D4;
    M2C_FIELD(arg0, s32 *, 0x3A8) = 0;
    M2C_FIELD(arg0, f32 *, 0x3AC) = TBoss2Mine__data_805D84D4;
    M2C_FIELD(arg0, s32 *, 0x3B0) = 0;
    M2C_FIELD(arg0, f32 *, 0x3B4) = TBoss2Mine__data_805D84D4;
    M2C_FIELD(arg0, f32 *, 0x3B8) = TBoss2Mine__data_805D84D4;
    M2C_FIELD(arg0, s32 *, 0x3BC) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C0) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C4) = 2;
    M2C_FIELD(arg0, s32 *, 0x3C8) = 0;
    M2C_FIELD(arg0, s32 *, 0x3CC) = 0;
    M2C_FIELD(arg0, s32 *, 0x3D0) = 0;
    M2C_FIELD(arg0, s32 *, 0x3D8) = 0;
    M2C_FIELD(arg0, f32 *, 0x3DC) = TBoss2Mine__data_805D84D4;
    M2C_FIELD(arg0, f32 *, 0x3E0) = TBoss2Mine__data_805D84D4;
    M2C_FIELD(arg0, f32 *, 0x3E4) = TBoss2Mine__data_805D84D4;
    M2C_FIELD(arg0, f32 *, 0x3E8) = TBoss2Mine__data_805D84D4;
    M2C_FIELD(arg0, f32 *, 0x3EC) = TBoss2Mine__data_805D84D4;
    M2C_FIELD(arg0, s16 *, 0x326) = 0;
    ((VObj_18_72b3e0 *)(arg0))->m85(M2C_FIELD(arg0, s16 *, 0x326), 4);
}

}
