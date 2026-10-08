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

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_C { u8 bytes[0xc]; };

struct O_801C0708 { u8 a; u8 b; u8 pad[2]; s32 c; u16 d; u16 e; };

struct O_801C0350 { u8 a; u8 b; u8 pad[2]; u16 c; u16 d; };

extern "C" {
s16 TObjPlayer__sub_801D2F0C(void *arg0);
s16 TObjPlayer__sub_801D2F0C(void *arg0);
int TFontSmallLobby__sub_801C013C(void* p);
int clear_flags__11TAdRicoRingFPvUi(void*, int);
int clear_flags__11TAdRicoRingFPvUi(void*, int);
s16 TObjPlayer__sub_801D2F0C(void *arg0);
extern const f32 lbl_805DC3BC;
extern const f32 lbl_805DC3C0;
extern const f32 lbl_805DC3C4;
int TFontSmallLobby__sub_801C013C(void* p);
void init_forward__10TObjPlayerFPv(void *);
extern M2C_UNK fn_80152EF8[];
void __construct_array(void *, void *, int, int, int);
void reset_tech_state__10TObjPlayerFPv(void *);
void *TFontSmallLobby__sub_801C0164(void *arg0);
int TFontSmallLobby__sub_801C01BC(void* p);
int read_be16_field2__10TObjPlayerFPv(void*);
extern M2C_UNK lbl_80515F70[];
extern s32 lbl_805D62B0;
    extern int lbl_805D49A0;
    extern int lbl_805D49A4;
    extern int lbl_805D49A8;
    extern int lbl_805D49B0;
    extern int lbl_805D5678;
    extern int lbl_805D5680;
extern s32 lbl_805D49C0;
extern s32 lbl_805D49B8;
int TFontSmallLobby__sub_801C01BC(void* p);
void __copy(void *, void *, int);
void *TFontSmallLobby__sub_801C01DC(void *arg0, void *arg1);
    extern int TObjPlayer__data_8050D460[];
int TFontSmallLobby__sub_801C01BC(void* p);
void TFontSmallLobby__sub_801C029C(void* p);
int TLobby__send_and_handle_60(void*);
int TFontSmallLobby__sub_801C01BC(void* p);
extern M2C_UNK lbl_80434088;
extern const f32 lbl_805D7D3C;
extern s32 lbl_805D5FC0;
extern s32 lbl_805D5D6C;
void TFontSmallLobby__sub_801C029C(void* p);
void TFontSmallLobby__sub_801C02D0(void* p);
int bswap_16__FPUs(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
extern u32 lbl_805D4BA4;
extern void *tl_04;
extern const f32 TBoss2DeRolLe__data_805D827C;
extern const f32 TBoss2DeRolLe__data_805D827C;
extern s32 TBoss2DeRolLe__data_805D4BC4;
void TFontSmallLobby__sub_801C02D0(void* p);
void* TFontSmallLobby__sub_801C030C(void* p, void* a1);
void* TFontSmallLobby__sub_801C030C(void* p, void* a1);
void TFontSmallLobby__sub_801C02D0(void* p);
void TFontSmallLobby__sub_801C0378(void* p);
int send_60_sized__6TLobbyFPv(void*);
void TFontSmallLobby__sub_801C02D0(void* p);
extern M2C_UNK lbl_80434088;
extern const f32 lbl_805D7D3C;
extern s32 lbl_805D5FC0;
extern s32 lbl_805D5D6C;
void TFontSmallLobby__sub_801C0378(void* p);
void TFontSmallLobby__sub_801C03AC(void* p);
int read_be16_field2__10TObjPlayerFPv(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
extern M2C_UNK lbl_80434088;
extern const f32 lbl_805D7D3C;
extern s32 lbl_805D5FC0;
extern s32 lbl_805D5D6C;
void TFontSmallLobby__sub_801C03AC(void* p);
void TFontSmallLobby__sub_801C0438(void* p);
void TFontSmallLobby__sub_801C0438(void* p);
int TFontSmallLobby__sub_801C01BC(void* p);
void TFontSmallLobby__sub_801C044C(void* p);
int TLobby__send_and_handle_60(void*);
int TFontSmallLobby__sub_801C01BC(void* p);
extern M2C_UNK lbl_80434088;
extern const f32 lbl_805D7D3C;
extern s32 lbl_805D5FC0;
extern s32 lbl_805D5D6C;
void TFontSmallLobby__sub_801C044C(void* p);
void TFontSmallLobby__sub_801C0480(void* p);
void TFontSmallLobby__sub_801C0480(void* p);
int TFontSmallLobby__sub_801C01BC(void* p);
void TFontSmallLobby__sub_801C0494(void* p);
int TLobby__send_and_handle_60(void*);
int TFontSmallLobby__sub_801C01BC(void* p);
extern M2C_UNK lbl_80434088;
extern const f32 lbl_805D7D3C;
extern s32 lbl_805D5FC0;
extern s32 lbl_805D5D6C;
void TFontSmallLobby__sub_801C0494(void* p);
void TFontSmallLobby__sub_801C04C8(void* p);
void TFontSmallLobby__sub_801C04C8(void* p);
int TFontSmallLobby__sub_801C01BC(void* p);
void TLobby__sub_801C0524(void* p);
int TLobby__send_and_handle_60(void*);
int TFontSmallLobby__sub_801C01BC(void* p);
extern M2C_UNK lbl_80434088;
extern const f32 lbl_805D7D3C;
extern s32 lbl_805D5FC0;
extern s32 lbl_805D5D6C;
void TLobby__sub_801C0524(void* p);
void *TObjPlayer__sub_801C06BC(void *arg0, void *arg1);
void TObjPlayer__sub_801C0734(void* p);
int TLobby__send_and_handle_60(void*);
extern M2C_UNK lbl_80434088;
extern const f32 lbl_805D7D3C;
extern s32 lbl_805D5FC0;
extern s32 lbl_805D5D6C;
void TObjPlayer__sub_801C0734(void* p);
void TObjPlayer__sub_801C0768(void *arg0);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
void TObjPlayer__sub_801C0768(void *arg0);
void *TFontSmallLobby__sub_801C03E0(void *arg0, void *arg1);
int read_be16_field2__10TObjPlayerFPv(void*);
int bswap_32__FPUl(void*);
int bswap_16__FPUs(void*);
void bswap_change_hp_packet__10TObjPlayerFPv(void *arg0);
int TFontSmallLobby__sub_801C01BC(void* p);
void fn_801C04DC(void* p);
int TLobby__send_and_handle_60(void*);
int TFontSmallLobby__sub_801C01BC(void* p);
extern M2C_UNK lbl_80434088;
extern const f32 lbl_805D7D3C;
extern s32 lbl_805D5FC0;
extern s32 lbl_805D5D6C;
void fn_801C04DC(void* p);
void fn_801C0510(void* p);
void fn_801C0510(void* p);
void fn_801C0558(void* p);
void fn_801C0558(void* p);
int TFontSmallLobby__sub_801C01BC(void* p);
void fn_801C056C(void* p);
int TLobby__send_and_handle_60(void*);
int TFontSmallLobby__sub_801C01BC(void* p);
extern M2C_UNK lbl_80434088;
extern const f32 lbl_805D7D3C;
extern s32 lbl_805D5FC0;
extern s32 lbl_805D5D6C;
void fn_801C056C(void* p);
void fn_801C05A0(void* p);
void fn_801C05A0(void* p);
int TFontSmallLobby__sub_801C01BC(void* p);
void fn_801C05B4(void* p);
int TLobby__send_and_handle_60(void*);
int TFontSmallLobby__sub_801C01BC(void* p);
extern M2C_UNK lbl_80434088;
extern const f32 lbl_805D7D3C;
extern s32 lbl_805D5FC0;
extern s32 lbl_805D5D6C;
void fn_801C05B4(void* p);
void fn_801C05E8(void* p);
void fn_801C05E8(void* p);
int TFontSmallLobby__sub_801C01BC(void* p);
void fn_801C05FC(void* p);
int TLobby__send_and_handle_60(void*);
int TFontSmallLobby__sub_801C01BC(void* p);
extern M2C_UNK lbl_80434088;
extern const f32 lbl_805D7D3C;
extern s32 lbl_805D5FC0;
extern s32 lbl_805D5D6C;
void fn_801C05FC(void* p);
void fn_801C0630(void* p);
void fn_801C0630(void* p);
int TFontSmallLobby__sub_801C01BC(void* p);
void fn_801C0644(void* p);
int TLobby__send_and_handle_60(void*);
int TFontSmallLobby__sub_801C01BC(void* p);
extern M2C_UNK lbl_80434088;
extern const f32 lbl_805D7D3C;
extern s32 lbl_805D5FC0;
extern s32 lbl_805D5D6C;
void fn_801C0644(void* p);
void TFontSmallLobby__sub_801C0274(u8 *arg0);
void TFontSmallLobby__sub_801C041C(u8 *arg0);
void* TFontSmallLobby__sub_801C0228(void* p, void* _w1);
u8 *TObjPlayer__sub_801C07B4(u8 *arg0, u8 *arg1);
void TFontSmallLobby__sub_801C0258(void* p, void* q);
void TObjPlayer__sub_801C0708(O_801C0708 *p);
void TFontSmallLobby__sub_801C0350(O_801C0350 *p);
}

extern "C" {

int TObjPlayer__sub_801C00FC(void);
int TObjPlayer__sub_801C0104(void);
void set_technique_id__10TObjPlayerFPvs(void* p, s16 v);
int get_item_count_max__10TObjPlayerFv(void);

}
extern "C" {
int TFontSmallLobby__sub_801C013C(void* p) { return clear_flags__11TAdRicoRingFPvUi((void*)((char*)p + 0x10), (int)(2)); }

void *TFontSmallLobby__sub_801C0164(void *arg0) {
    init_forward__10TObjPlayerFPv((void *)((char *)arg0 + 16));
    __construct_array((void *)((char *)arg0 + 32), fn_80152EF8, 0, 4, 10);
    reset_tech_state__10TObjPlayerFPv(arg0);
    return arg0;
}

int TFontSmallLobby__sub_801C01BC(void* p) { return read_be16_field2__10TObjPlayerFPv(p); }

void *TFontSmallLobby__sub_801C01DC(void *arg0, void *arg1) {
    TFontSmallLobby__sub_801C0228(arg0, arg1);
    M2C_FIELD(arg0, u8 *, 0x4) = M2C_FIELD(arg1, u8 *, 0x4);
    __copy((void *)((char *)arg0 + 5), (void *)((char *)arg1 + 5), 3);
    return arg0;
}

void* TFontSmallLobby__sub_801C0228(void* p, void* _w1) { TFontSmallLobby__sub_801C0258((void*)(p), (void*)(_w1)); return p; }

void TFontSmallLobby__sub_801C0258(void* p, void* q) { *(u8*)((char*)p + 0x0) = *(u8*)((char*)q + 0x0); *(u8*)((char*)p + 0x1) = *(u8*)((char*)q + 0x1); *(u16*)((char*)p + 0x2) = *(u16*)((char*)q + 0x2); }

void TFontSmallLobby__sub_801C0274(u8 *arg0) {
    M2C_FIELD(arg0, s8 *, 4) = 0;
    M2C_FIELD(arg0, s8 *, 5) = 0;
    M2C_FIELD(arg0, s8 *, 6) = 0;
    M2C_FIELD(arg0, s8 *, 7) = 0;
    M2C_FIELD(arg0, u8 *, 0) = 0x9B;
    M2C_FIELD(arg0, s8 *, 1) = 2;
}

void TFontSmallLobby__sub_801C029C(void* p) { TFontSmallLobby__sub_801C01BC((void*)(p)); TLobby__send_and_handle_60(p); }

void TFontSmallLobby__sub_801C02D0(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }

void* TFontSmallLobby__sub_801C030C(void* p, void* a1) { TFontSmallLobby__sub_801C0228(p, a1); *(short*)((char*)p + 0x4) = *(unsigned short*)((char*)a1 + 0x4); *(short*)((char*)p + 0x6) = *(short*)((char*)a1 + 0x6); return p; }

void TFontSmallLobby__sub_801C0350(O_801C0350 *p) {
    p->c = 0xFFFF;
    p->d = 0;
    p->a = 0x8f;
    p->b = 2;
}

void TFontSmallLobby__sub_801C0378(void* p) { TFontSmallLobby__sub_801C02D0((void*)(p)); send_60_sized__6TLobbyFPv(p); }

void TFontSmallLobby__sub_801C03AC(void* p) { read_be16_field2__10TObjPlayerFPv((void*)(p)); bswap_32__FPUl((char*)p + 0x4); }

void *TFontSmallLobby__sub_801C03E0(void *arg0, void *arg1) {
    TFontSmallLobby__sub_801C0228(arg0, arg1);
    M2C_FIELD(arg0, void **, 0x4) = M2C_FIELD(arg1, void **, 0x4);
    return arg0;
}

void TFontSmallLobby__sub_801C041C(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, u8 *, 0) = 0x90;
    M2C_FIELD(arg0, s8 *, 1) = 2;
}

void TFontSmallLobby__sub_801C0438(void* p) { *(u8*)((char*)p + 0x0) = 130; *(u8*)((char*)p + 0x1) = 1; }

void TFontSmallLobby__sub_801C044C(void* p) { TFontSmallLobby__sub_801C01BC((void*)(p)); TLobby__send_and_handle_60(p); }

void TFontSmallLobby__sub_801C0480(void* p) { *(u8*)((char*)p + 0x0) = 129; *(u8*)((char*)p + 0x1) = 1; }

void TFontSmallLobby__sub_801C0494(void* p) { TFontSmallLobby__sub_801C01BC((void*)(p)); TLobby__send_and_handle_60(p); }

void TFontSmallLobby__sub_801C04C8(void* p) { *(u8*)((char*)p + 0x0) = 123; *(u8*)((char*)p + 0x1) = 1; }

void fn_801C04DC(void* p) { TFontSmallLobby__sub_801C01BC((void*)(p)); TLobby__send_and_handle_60(p); }

void fn_801C0510(void* p) { *(u8*)((char*)p + 0x0) = 122; *(u8*)((char*)p + 0x1) = 1; }

void TLobby__sub_801C0524(void* p) { TFontSmallLobby__sub_801C01BC((void*)(p)); TLobby__send_and_handle_60(p); }

void fn_801C0558(void* p) { *(u8*)((char*)p + 0x0) = 28; *(u8*)((char*)p + 0x1) = 1; }

void fn_801C056C(void* p) { TFontSmallLobby__sub_801C01BC((void*)(p)); TLobby__send_and_handle_60(p); }

void fn_801C05A0(void* p) { *(u8*)((char*)p + 0x0) = 27; *(u8*)((char*)p + 0x1) = 1; }

void fn_801C05B4(void* p) { TFontSmallLobby__sub_801C01BC((void*)(p)); TLobby__send_and_handle_60(p); }

void fn_801C05E8(void* p) { *(u8*)((char*)p + 0x0) = 35; *(u8*)((char*)p + 0x1) = 1; }

void fn_801C05FC(void* p) { TFontSmallLobby__sub_801C01BC((void*)(p)); TLobby__send_and_handle_60(p); }

void fn_801C0630(void* p) { *(u8*)((char*)p + 0x0) = 34; *(u8*)((char*)p + 0x1) = 1; }

void fn_801C0644(void* p) { TFontSmallLobby__sub_801C01BC((void*)(p)); TLobby__send_and_handle_60(p); }

void bswap_change_hp_packet__10TObjPlayerFPv(void *arg0) {
    read_be16_field2__10TObjPlayerFPv((void*)(arg0));
    bswap_32__FPUl((void*)((void *)((char *)arg0 + 4)));
    bswap_16__FPUs((void*)((void *)((char *)arg0 + 8)));
    bswap_16__FPUs((void*)((void *)((char *)arg0 + 10)));
}

void *TObjPlayer__sub_801C06BC(void *arg0, void *arg1) {
    TFontSmallLobby__sub_801C0228(arg0, arg1);
    M2C_FIELD(arg0, void **, 0x4) = M2C_FIELD(arg1, void **, 0x4);
    M2C_FIELD(arg0, u16 *, 0x8) = M2C_FIELD(arg1, s16 *, 0x8);
    M2C_FIELD(arg0, u16 *, 0xA) = M2C_FIELD(arg1, u16 *, 0xA);
    return arg0;
}

void TObjPlayer__sub_801C0708(O_801C0708 *p) {
    p->c = 0;
    p->d = 0;
    p->e = 0xFFFF;
    p->a = 0x2f;
    p->b = 3;
}

void TObjPlayer__sub_801C0734(void* p) { bswap_change_hp_packet__10TObjPlayerFPv((void *)((void*)(p))); TLobby__send_and_handle_60(p); }

void TObjPlayer__sub_801C0768(void *arg0) {
    read_be16_field2__10TObjPlayerFPv((void*)(arg0));
    bswap_32__FPUl((void*)((void *)((char *)arg0 + 4)));
    bswap_32__FPUl((void*)((void *)((char *)arg0 + 8)));
    bswap_32__FPUl((void*)((void *)((char *)arg0 + 12)));
    bswap_32__FPUl((void*)((void *)((char *)arg0 + 16)));
}
u8 *TObjPlayer__sub_801C07B4(u8 *arg0, u8 *arg1) {
    TFontSmallLobby__sub_801C0228(arg0, arg1);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    *(M2CCopy_C *)((s32) arg0 + 8) = *(const M2CCopy_C *)((s32) arg1 + 8);
    return arg0;
}

}
