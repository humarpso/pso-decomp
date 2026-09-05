#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
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
    virtual s32 m81();
    virtual void m82();
    virtual M2C_UNK m83();
    virtual void m84();
    virtual void m85();
    virtual void m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual void m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual M2C_UNK m98();
    virtual void m99();
    virtual void m100();
    virtual void m101();
    virtual void m102();
    virtual M2C_UNK m103();
};
extern "C" {
void fn_80095DD0(u8 *arg0);
void fn_80095DF4(u8 *arg0);
M2C_UNK TBoss8Dragon__sub_800BB780();
int TObjEneDD__sub_800BBA18(void*, void*);
void TObjEneRe7Berura__vt60(u8 *arg0);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK update_collision_center__16TObjEneRe7BeruraFPv(void *);
M2C_UNK set_player_state_default__12TBoss8DragonFPv(void *);
void run_task__16TObjEneRe7BeruraFv(u8 *arg0);
}

extern "C" {

void *TObjEneRe7Berura__ct(void *arg0, void *arg1, void *arg2);
void TObjEneRe7Berura__vt26(void);
void TObjEneRe7Berura__vt61(void* p);
void *create__16TObjEneRe7BeruraFPv(void *arg0);
void destroy_children__16TObjEneRe7BeruraFv(void);
void TLobby__sub_8001FE7C(void*, int);
int TObjEneDD__sub_800BBA18(void*, void*);
void TObjEneRe7Berura__sub_80095328(void *);
void TObjEneRe7Berura__sub_800955E0(void *);
void TObjEneRe7Berura__vt59(void);
void __construct_array(void *, void *, void *, int, int);
void __dt__11TBoss4Type3FPvs(void*, int);
void *__nw__7TObjectFUl(int);
void destroy_buffer_pair(void*, int);
void free__11TOBoss4RockFUi(void*);
void init_object__9TObjEneDDFPv(void *);
void init_vtable_and_field18__10TObjPlayerFPv(void *);
void invoke_initialization_hook__9TObjEneDDFPv(void *, void *);
int is_patrol_active__21TObjEneRe7BeruraPunchFPv(void* p);

void TObjEneRe7Berura__vt60(u8 *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0x3C0) & 4) || ((s32) (M2C_FIELD(arg0, s16 *, 0x33E) - M2C_FIELD(arg0, s16 *, 0x32C)) < (s32) ((s16) M2C_FIELD(arg0, s16 *, 0x2B8) / 5))) {
        TBoss8Dragon__sub_800BB780();
        return;
    }
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 0xA) {
        TObjEneDD__sub_800BBA18((void*)((void *)(arg0)), (void*)((int) (0xA)));
    }
}

void TObjEneRe7Berura__vt61(void* p) { if (*(short*)((char*)p + 0x326) != 11) { TObjEneDD__sub_800BBA18(p, (void*)11); } }
void TObjEneRe7Berura__vt26(void) {  }

extern M2C_UNK __vt__16TObjEneRe7Berura[];
extern M2C_UNK init_and_activate__10TObjPlayerFPv[];
extern M2C_UNK TObjPlayer__sub_800D7C58[];
extern void *lbl_805D2988;

void run_task__16TObjEneRe7BeruraFv(u8 *arg0) {
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        ((VObj_18 *)(arg0))->m103();
        return;
    }
    if (((VObj_18 *)(arg0))->m81() != 4) {
        ((VObj_18 *)(arg0))->m83();
        M2C_FIELD(arg0, s32 *, 0x3D0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3D0) + M2C_FIELD(arg0, s32 *, 0x3CC));
        M2C_FIELD(arg0, s32 *, 0x3D0) = (s32) (u8) M2C_FIELD(arg0, s32 *, 0x3D0);
    }
    update_collision_center__16TObjEneRe7BeruraFPv((void *) (arg0));
    set_player_state_default__12TBoss8DragonFPv((void *) (arg0));
    ((VObj_18 *)(arg0))->m98();
}

void *TObjEneRe7Berura__ct(void *arg0, void *arg1, void *arg2) {
    init_object__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjEneRe7Berura;
    init_vtable_and_field18__10TObjPlayerFPv((void *)((char *)arg0 + 984));
    init_vtable_and_field18__10TObjPlayerFPv((void *)((char *)arg0 + 1020));
    __construct_array((void *)((char *)arg0 + 1096), init_and_activate__10TObjPlayerFPv, TObjPlayer__sub_800D7C58, 28, 4);
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2988;
    invoke_initialization_hook__9TObjEneDDFPv(arg0, arg2);
    TObjEneRe7Berura__sub_80095328(arg0);
    TObjEneRe7Berura__sub_800955E0(arg0);
    return arg0;
}

extern u32 TObjEneRe7Berura__data_805D4F64;
extern u32 lbl_805D4F80;
extern u32 lbl_805D4F8C;
extern u32 lbl_805D4FA0;

void destroy_children__16TObjEneRe7BeruraFv(void) {
    if ((u32) lbl_805D4FA0 != 0U) {
        __dt__11TBoss4Type3FPvs((void*)lbl_805D4FA0, 1);
        lbl_805D4FA0 = 0U;
    }
    if ((u32) lbl_805D4F8C != 0U) {
        destroy_buffer_pair((void*)lbl_805D4F8C, 1);
        lbl_805D4F8C = 0U;
    }
    if ((u32) lbl_805D4F80 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D4F80);
        lbl_805D4F80 = 0U;
    }
    if ((u32) TObjEneRe7Berura__data_805D4F64 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjEneRe7Berura__data_805D4F64, 1);
        TObjEneRe7Berura__data_805D4F64 = 0U;
    }
}

extern void *tl_04;

void *create__16TObjEneRe7BeruraFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x4E4);
    if (o != NULL) {
        o = TObjEneRe7Berura__ct((void *)(o), (void *)(tl_04), (void *)(arg0));
    }
    return o;
}

void fn_80095DD0(u8 *arg0) {
    s32 *temp_r3;
    s32 *temp_r4;
    temp_r4 = M2C_FIELD(arg0, s32 **, 0x18);
    *temp_r4 &= 0xFFFFFFF7;
    temp_r3 = M2C_FIELD(arg0, s32 **, 0x1C);
    *temp_r3 &= 0xFFFFFFF7;
}

void fn_80095DF4(u8 *arg0) {
    s32 *temp_r3;
    s32 *temp_r4;
    temp_r4 = M2C_FIELD(arg0, s32 **, 0x18);
    *temp_r4 |= 8;
    temp_r3 = M2C_FIELD(arg0, s32 **, 0x1C);
    *temp_r3 |= 8;
}

}
