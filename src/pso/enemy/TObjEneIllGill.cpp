#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct IllGillBase_80367984_8036690C { char pad[0x14]; };
struct IllGillVObj_80367984_8036690C : IllGillBase_80367984_8036690C {
    virtual M2C_UNK m0();
    virtual M2C_UNK m1();
    virtual M2C_UNK m2();
    virtual M2C_UNK m3();
    virtual M2C_UNK m4();
    virtual M2C_UNK m5();
};

extern "C" {

int TObjEneIllGill__vt59(void* p);
void TObjEneIllGill__vt60(void *arg0);
void *__dt__14TObjEneIllGillFv(void *arg0, s16 arg1);
void * create__14TObjEneIllGillFPv(void *arg0);
void free_effect__14TObjEneIllGillFv(void);
void free_resources__14TObjEneIllGillFPv(void *arg0);
void run_attack_phase__14TObjEneIllGillFPv(u8 *arg0);
M2C_UNK TBoss1Dragon__sub_80143504();
M2C_UNK TBoss3Volopt__sub_800D8C48(void *);
int TLobby__sub_8001FE7C(void*, void*);
void *TObjControl__ct(void *, void *);
void TObjEneGibbles__sub_80156720(void *);
void *TObjEneIllGill__ct(void *, void *, void *);
M2C_UNK TObjEneIllGill__sub_80367B00(void *);
M2C_UNK TObjEneMe3SinowZoa__sub_800D758C(void *);
M2C_UNK TObjPlayer__sub_80011734(void *, int, f32);
M2C_UNK TObjPlayer__sub_80017BA8(void *, int, f32, f32, f32);
f32 TObjPlayer__sub_80141CF8(void *, void *);
M2C_UNK TObjPlayer__sub_80154E3C(void *);
void __dl__7TObjectFPv(void *);
void __dt__18TObjEneMe3SinowZoaFPvs(void *, int);
void __dt__9TObjEnemyFv(void *, int);
void *__nw__7TObjectFUl(int);
M2C_UNK minimap_render_dot(void *, int, int, int);
int obj_clearFlags30(void*, int);
M2C_UNK obj_setFlags30(void *, int);
s32 request_destroy__11TBoss4Type2FUi(void *);

void TObjEneIllGill__vt60(void *arg0) {
    s16 temp_r0;
    void *temp_r3;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0xB8);
    if ((temp_r0 == 2) || (temp_r0 == 3)) {
        M2C_FIELD(arg0, s16 *, 0x33E) = (s16) M2C_FIELD(arg0, s16 *, 0x32C);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFDFF);
        M2C_FIELD(arg0, s32 *, 0x2DC) = 0;
        temp_r3 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) & 0xFBFFFFFF);
        return;
    }
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 7) {
        M2C_FIELD(arg0, s16 *, 0x326) = 7;
        M2C_FIELD(arg0, s16 *, 0xB8) = 5;
        free_resources__14TObjEneIllGillFPv((void *)((M2C_UNK) arg0));
    }
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFBFFFF);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFFFF);
}

int TObjEneIllGill__vt59(void* p) { return obj_clearFlags30((void*)(p), (int)(256)); }
void free_resources__14TObjEneIllGillFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x414) != 0U) {
        request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x414));
        M2C_FIELD(arg0, u32 *, 0x414) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x418) != 0U) {
        request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x418));
        M2C_FIELD(arg0, u32 *, 0x418) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x41C) != 0U) {
        request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x41C));
        M2C_FIELD(arg0, u32 *, 0x41C) = 0U;
    }
}

extern const f32 TObjEneIllGill__data_805E02BC;
extern const f32 lbl_805E02C4;
extern const f32 lbl_805E02C8;
extern const f32 TObjEneIllGill__data_805E02DC;
extern const f32 lbl_805E02E8;
extern const f32 lbl_805E02FC;

void run_attack_phase__14TObjEneIllGillFPv(u8 *arg0) {
    s16 temp_r0;
    u8 *temp_r4;

    TBoss1Dragon__sub_80143504();
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x328);
    switch (temp_r0) {
    case 0:
        obj_setFlags30((void *) (arg0), (int) (0x04040000));
        TObjEneMe3SinowZoa__sub_800D758C((void *) (arg0 + 0x374));
        TBoss3Volopt__sub_800D8C48((void *) (arg0 + 0x38));
        M2C_FIELD(arg0, s16 *, 0x328) = 1;
        break;
    case 1:
        obj_setFlags30((void *) (arg0), (int) (0x04040000));
        if (((IllGillVObj_80367984_8036690C *) (arg0 + 0x374))->m5() == 1) {
            M2C_FIELD(arg0, s16 *, 0x328) = 2;
            M2C_FIELD(arg0, s16 *, 0xB8) = 1;
            M2C_FIELD(arg0, s32 *, 0x390) = 0;
        }
        break;
    case 2:
        obj_clearFlags30((void*)((void *) (arg0)), (int)((int) (0x04040000)));
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        if (TObjPlayer__sub_80141CF8((void *) (arg0 + 0x38), (void *) (arg0 + 0x50)) > lbl_805E02C8) {
            TObjEneIllGill__sub_80367B00((void *) (arg0));
        } else {
            M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) + TObjEneIllGill__data_805E02DC);
            temp_r4 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x350));
            TObjPlayer__sub_80017BA8((void *) (arg0), (int) (M2C_FIELD(temp_r4, s32 *, 8)), (f32) (lbl_805E02E8 * M2C_FIELD(temp_r4, f32 *, 4)), (f32) (lbl_805E02C4), (f32) (lbl_805E02FC));
        }
        TObjPlayer__sub_80154E3C((void *) (arg0));
        break;
    default:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800000)) {
            TObjPlayer__sub_80011734((void *) (arg0), (int) (0), (f32) (TObjEneIllGill__data_805E02BC));
        }
        break;
    }
    minimap_render_dot((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (0));
    obj_clearFlags30((void*)((void *) (arg0)), (int)((int) (0x200000)));
}

extern void *tl_04;

void * create__14TObjEneIllGillFPv(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x420);
    if (o2 != NULL) {
        o2 = TObjEneIllGill__ct(o2, o, arg0);
    }
    return o2;
}

extern M2C_UNK __vt__14TObjEneIllGill[];

void *__dt__14TObjEneIllGillFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TObjEneIllGill;
        free_resources__14TObjEneIllGillFPv((void *)(arg0));
        TObjEneGibbles__sub_80156720(arg0);
        __dt__18TObjEneMe3SinowZoaFPvs((s8 *)arg0 + 0x374, -1);
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

    extern int lbl_805D6FD0;
void free_effect__14TObjEneIllGillFv(void) { TLobby__sub_8001FE7C((void*)(lbl_805D6FD0), (void*)1); lbl_805D6FD0 = 0; }

}
