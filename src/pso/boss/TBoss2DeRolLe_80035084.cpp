#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_8003508C_80035084 {
    char pad[0x18];
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
    virtual void m85(s16, int);
};

extern "C" {
void TBoss2DeRolLe__sub_800361E8(u8 *arg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
extern const f32 lbl_805D8458;
void TBoss2Fin__sub_80036620(u8 *arg0);
}

extern "C" {

void TBoss2DeRolLe__sub_80035084(void);
void TBoss2DeRolLe__sub_80035088(void);
void TBoss2DeRolLe__sub_8003508C(void *arg0);
void TBoss2DeRolLe__sub_80036288(void);
void TBoss2DeRolLe__sub_8003628C(void);
void TBoss2DeRolLe__sub_80036290(void);
void TBoss2DeRolLe__sub_80036294(void);
void TBoss2DeRolLe__sub_80036298(void);
void TBoss2DeRolLe__sub_8003629C(void);
void TBoss2DeRolLe__sub_800362A0(void);
void TBoss2DeRolLe__sub_80036358(void* p);
void TBoss2DeRolLe__sub_800363A0(void* p);
void *create__13TBoss2DeRolLeFPv(void *arg0);
s32 free_if_positive__13TBoss2DeRolLeFis(s32 arg0, s16 arg1);
s32 get_instance__13TBoss2DeRolLeFv(void);
void init_params__13TBoss2DeRolLeFPvfff(u8 *arg0, f32 farg0, f32 farg1, f32 farg2);
s32 init_resources__13TBoss2DeRolLeFi(s32 arg0);
void reset_parts__13TBoss2DeRolLeFv(void);
void send_6x13__13TBoss2DeRolLeFPv(void* p);
void set_move_params__13TBoss2DeRolLeFPvffff(u8 *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
void swap_6x13_fields__13TBoss2DeRolLeFPv(void* p);
void swap_endian__13TBoss2DeRolLeFPv(void* p);
void update_and_send__13TBoss2DeRolLeFPv(void* p);
void *TBoss2DeRolLe__ct(void *, void *, void *);
M2C_UNK TBoss2DeRolLe__sub_80034034(void *);
M2C_UNK TBoss2DeRolLe__sub_800360A8();
M2C_UNK TBoss2Fin__sub_800367C0();
M2C_UNK TBoss2Mine__sub_80038D84();
M2C_UNK TBoss2Tentacle__sub_8003A0A8();
int TLobby__send_and_handle_60(void*);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TObjPlayer__sub_8002EB88();
int __dl__FPv();
void *__nw__7TObjectFUl(int);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
M2C_UNK clear_target_ref__10TObjPlayerFv();
s32 is_ready__13TBoss2DeRolLeFPv();
int read_be16_field2__10TObjPlayerFPv(void*);

void TBoss2DeRolLe__sub_80035084(void) {  }
void TBoss2DeRolLe__sub_80035088(void) {  }

void TBoss2DeRolLe__sub_8003508C(void *arg0) {
    struct VBase_8003508C_80035084 *o = (struct VBase_8003508C_80035084 *)arg0;
    if (is_ready__13TBoss2DeRolLeFPv() != 0) {
        TBoss2DeRolLe__sub_80034034(arg0);
        return;
    }
    o->m85(M2C_FIELD(arg0, s16 *, 0x326), 9);
}

extern u32 lbl_805D4BA4;

void reset_parts__13TBoss2DeRolLeFv(void) {
    clear_target_ref__10TObjPlayerFv();
    TObjPlayer__sub_8002EB88();
    TBoss2Fin__sub_800367C0();
    TBoss2Mine__sub_80038D84();
    TBoss2Tentacle__sub_8003A0A8();
    if ((u32) lbl_805D4BA4 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D4BA4, 1);
        lbl_805D4BA4 = 0U;
    }
}

extern void *tl_04;

void *create__13TBoss2DeRolLeFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x75C);
    if (o != NULL) {
        o = TBoss2DeRolLe__ct(o, tl_04, arg0);
    }
    return o;
}

extern const f32 TBoss2DeRolLe__data_805D827C;

void set_move_params__13TBoss2DeRolLeFPvffff(u8 *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, f32 *, 4) = farg2;
    M2C_FIELD(arg0, f32 *, 8) = farg3;
    M2C_FIELD(arg0, f32 *, 0xC) = farg0;
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) TBoss2DeRolLe__data_805D827C;
    M2C_FIELD(arg0, f32 *, 0x14) = farg1;
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) TBoss2DeRolLe__data_805D827C;
    TBoss2DeRolLe__sub_800360A8();
}

extern const f32 TBoss2DeRolLe__data_805D827C;

void init_params__13TBoss2DeRolLeFPvfff(u8 *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, f32 *, 4) = farg2;
    M2C_FIELD(arg0, f32 *, 8) = farg2;
    M2C_FIELD(arg0, f32 *, 0xC) = farg0;
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) TBoss2DeRolLe__data_805D827C;
    M2C_FIELD(arg0, f32 *, 0x14) = farg1;
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) TBoss2DeRolLe__data_805D827C;
    TBoss2DeRolLe__sub_800360A8();
}

void TBoss2DeRolLe__sub_800361E8(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, f32 *, 4) = (f32) TBoss2DeRolLe__data_805D827C;
    M2C_FIELD(arg0, f32 *, 8) = (f32) TBoss2DeRolLe__data_805D827C;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) TBoss2DeRolLe__data_805D827C;
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) TBoss2DeRolLe__data_805D827C;
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) TBoss2DeRolLe__data_805D827C;
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) TBoss2DeRolLe__data_805D827C;
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) TBoss2DeRolLe__data_805D827C;
}

s32 free_if_positive__13TBoss2DeRolLeFis(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}

s32 init_resources__13TBoss2DeRolLeFi(s32 arg0) {
    TBoss2DeRolLe__sub_800361E8((u8 *)(arg0));
    return arg0;
}

extern s32 TBoss2DeRolLe__data_805D4BC4;

s32 get_instance__13TBoss2DeRolLeFv(void) {
    return TBoss2DeRolLe__data_805D4BC4;
}

void TBoss2DeRolLe__sub_80036288(void) {  }
void TBoss2DeRolLe__sub_8003628C(void) {  }
void TBoss2DeRolLe__sub_80036290(void) {  }
void TBoss2DeRolLe__sub_80036294(void) {  }
void TBoss2DeRolLe__sub_80036298(void) {  }
void TBoss2DeRolLe__sub_8003629C(void) {  }
void TBoss2DeRolLe__sub_800362A0(void) {  }
void swap_endian__13TBoss2DeRolLeFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_32__FPUl((char*)p + 0x8); }
void swap_6x13_fields__13TBoss2DeRolLeFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }
void send_6x13__13TBoss2DeRolLeFPv(void* p) { swap_6x13_fields__13TBoss2DeRolLeFPv((void*)(p)); TLobby__send_and_handle_60(p); }
void TBoss2DeRolLe__sub_80036358(void* p) { *(u8*)((char*)p + 0x0) = 19; *(u8*)((char*)p + 0x1) = 2; }
void update_and_send__13TBoss2DeRolLeFPv(void* p) { swap_endian__13TBoss2DeRolLeFPv((void*)(p)); TLobby__send_and_handle_60(p); }
void TBoss2DeRolLe__sub_800363A0(void* p) { *(u8*)((char*)p + 0x0) = 20; *(u8*)((char*)p + 0x1) = 3; }
void TBoss2Fin__sub_80036620(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    VecCopy__FP3VecPC3Vec(arg0 + 0x34, M2C_FIELD(arg0, u8 **, 0x80));
    VecCopy__FP3VecPC3Vec(arg0 + 0x54, M2C_FIELD(arg0, u8 **, 0x80));
    M2C_FIELD(arg0, f32 *, 0x58) = (f32) (M2C_FIELD(arg0, f32 *, 0x58) - lbl_805D8458);
    M2C_FIELD(arg0, f32 *, 0x5C) = (f32) (M2C_FIELD(arg0, f32 *, 0x5C) + lbl_805D8458);
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    VecCopy__FP3VecPC3Vec(arg0 + 0x44, M2C_FIELD(arg0, u8 **, 0x84));
    VecCopy__FP3VecPC3Vec(arg0 + 0x64, M2C_FIELD(arg0, u8 **, 0x84));
    M2C_FIELD(arg0, f32 *, 0x68) = (f32) (M2C_FIELD(arg0, f32 *, 0x68) - lbl_805D8458);
    M2C_FIELD(arg0, f32 *, 0x6C) = (f32) (M2C_FIELD(arg0, f32 *, 0x6C) + lbl_805D8458);
}

}
