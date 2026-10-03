#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18 { char pad[0x18]; };
struct VObj_18 : VBase_18 {
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
    virtual M2C_UNK m20(s32, void *, f32);
};

typedef struct EffTail_8002C06C {
    s32 unk0;
    u8 pad4[0x14];
    s32 *vtbl;
    u8 pad1C[0xA4 - 0x1C];
    struct { u8 b[0x2C]; } *spheres;
    u8 padA8[8];
    s32 unkB0;
    s32 unkB4;
    void *unkB8;
    s32 unkBC;
    f32 unkC0;
    f32 unkC4;
    f32 unkC8;
} EffTail_8002C06C;

extern "C" {
extern const f32 lbl_805DEF18;
void TBoss8DragonEffTail__vt20(u8 *arg0, u8 *arg1);
void fn_8002B630(void *, void *);
void *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
void init_instance__16TObjEneDellBiterFPvPvPvPvPv(void *, void *, s32, void *, s32);
void *TBoss8Dragon__sub_800BC5EC(void *, s32);
extern u8 lbl_804E5EA8[];
extern M2C_UNK __vt__19TBoss8DragonEffTail[];
extern s32 lbl_805D4020;
extern const f32 lbl_805DEF14;
EffTail_8002C06C *TBoss8DragonEffTail__ct(EffTail_8002C06C *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void TBoss8DragonEffTail__vt18(s32 arg0, s32 arg1);
void *__dt__19TBoss8DragonEffTailFv(void *arg0, s16 arg1);
void disable__19TBoss8DragonEffTailFPv(void* p);
void enable__19TBoss8DragonEffTailFPv(void* p);
void fn_802FE48C(void);
void free_statics__19TBoss8DragonEffTailFv(void);
int get_state__19TBoss8DragonEffTailFPv(void* p);
void render__19TBoss8DragonEffTailFv(void);
M2C_UNK vec3_add_to(s32, s32, s32);
void TBoss8Dragon__sub_800BC5A0(void *, int);
M2C_UNK TLobby__sub_8001FE7C(s32, M2C_UNK);
M2C_UNK TLobby__sub_803DA16C(void*);
void __dl__7TObjectFPv(void *);
void destroy_enemy_object__10TObjPlayerFPvs(void *, int);
int fn_8002B094(void*);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

void fn_802FE48C(void) {  }
void render__19TBoss8DragonEffTailFv(void) {  }

void TBoss8DragonEffTail__vt18(s32 arg0, s32 arg1) {
    vec3_add_to(arg1 + 0x308, arg0 + 0xC0, arg0);
}

void TBoss8DragonEffTail__vt20(u8 *arg0, u8 *arg1) {
    ((VObj_18 *)(arg1))->m20(M2C_FIELD(arg0, s32 *, 0xAC), arg0, lbl_805DEF18);
}

void enable__19TBoss8DragonEffTailFPv(void* p) { *(int*)((char*)p + 0xbc) = 1; get_state__19TBoss8DragonEffTailFPv((void*)(p)); }
void disable__19TBoss8DragonEffTailFPv(void* p) { *(int*)((char*)p + 0xbc) = 0; get_state__19TBoss8DragonEffTailFPv((void*)(p)); }
int get_state__19TBoss8DragonEffTailFPv(void* p) { return fn_8002B094(*(void**)((char*)p + 0xb8)); }

extern M2C_UNK __vt__19TBoss8DragonEffTail[];

void *__dt__19TBoss8DragonEffTailFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TBoss8DragonEffTail;
        TBoss8Dragon__sub_800BC5A0(M2C_FIELD(arg0, void **, 0xB8), 1);
        M2C_FIELD(arg0, M2C_UNK *, 0xB8) = 0;
        destroy_enemy_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_805D69C8;
extern u32 lbl_805D69CC;

EffTail_8002C06C *TBoss8DragonEffTail__ct(EffTail_8002C06C *arg0, s32 arg1, s32 arg2) {
    void *data;
    s32 i;
    void *p;
    init_instance__16TObjEneDellBiterFPvPvPvPvPv(arg0, 0, arg1, lbl_804E5EA8, 0x11);
    arg0->vtbl = ((s32 *)&__vt__19TBoss8DragonEffTail);
    data = lbl_804E5EA8;
    arg0->unk0 = lbl_805D4020;
    for (i = 1; i < 0x11; i++) {
        fn_8002B630(&arg0->spheres[i], data);
    }
    arg0->unkB0 = arg1;
    arg0->unkB4 = arg2;
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0x10);
    if (p != 0) {
        p = TBoss8Dragon__sub_800BC5EC(p, 4);
    }
    arg0->unkB8 = p;
    arg0->unkBC = 0;
    arg0->unkC0 = lbl_805DEF14;
    arg0->unkC4 = lbl_805DEF14;
    arg0->unkC8 = lbl_805DEF14;
    return arg0;
}

void free_statics__19TBoss8DragonEffTailFv(void) {
    if ((u32) lbl_805D69CC != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D69CC);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D69CC);
        lbl_805D69CC = 0U;
    }
    TLobby__sub_8001FE7C(lbl_805D69C8, 1);
    lbl_805D69C8 = 0;
}

}
