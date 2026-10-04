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

struct PartBase_800954E8 { u8 pad[0x18]; };

struct Part_800954E8 : PartBase_800954E8 {
    virtual ~Part_800954E8();
};

struct Berura_800954E8 {
    u8 pad0[0x18];
    void *vtbl;
    u8 pad1C[0x3D8 - 0x1C];
    u8 motionA[0x3F8 - 0x3D8];
    void *effect;
    u8 motionB[0x440 - 0x3FC];
    Part_800954E8 *parts[2];
    u8 arr[4][0x1C];
};

typedef s32 M2C_UNK;
struct Ent_800959F8 { s32 f0; u8 *f4; };

struct Res_800959F8 { u8 pad[0x42C]; u8 *f42C; Ent_800959F8 *f430; };

struct T16_800959F8 { s32 f0; s32 f4; s32 f8; s32 fC; };

struct Atk_800959F8 { s32 w[4]; };

struct V3_800959F8 { f32 x, y, z; };

struct Elem_800959F8 {
    u8 *buf;
    s32 f4;
    s32 f8;
    s32 fC;
    f32 f10;
    f32 f14;
    s32 *f18;
    s32 f1C;
    s32 f20;
    s32 f24;
    f32 f28, f2C, f30;
    s32 f34, f38, f3C;
    f32 f40, f44, f48;
    s32 f4C;
    s32 f50;
    u8 pad54[0x10];
};

extern "C" {
void fn_80095DD0(u8 *arg0);
void fn_80095DF4(u8 *arg0);
M2C_UNK clear_attack_receipts();
int transition_enemy_state(void*, void*);
void TObjEneRe7Berura__vt60(u8 *arg0);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK update_collision_center__16TObjEneRe7BeruraFPv(void *);
M2C_UNK set_player_state_default__12TBoss8DragonFPv(void *);
void run_task__16TObjEneRe7BeruraFv(u8 *arg0);
void queue_destruction__7TObjectFv(void *);
void TObjEneRe7Berura__sub_80094D3C(void *);
void TObjPlayer__sub_800A05B8(void *, int);
void __dt__9TObjEneDDFv(void *, int);
void free_collision_body_parts(void *);
void __dl__7TObjectFPv(void *);
extern M2C_UNK TObjPlayer__sub_800D7C58[];
void __destroy_arr(void *, void *, u32, u32);
extern M2C_UNK __vt__16TObjEneRe7Berura[];
Berura_800954E8 *__dt__16TObjEneRe7BeruraFv(Berura_800954E8 *self, s16 flag);
s32 check_v2_mode__9TObjEneDDFv(void);
Res_800959F8 *load_enemy_bml_resource_named(void *, void *);
Res_800959F8 *load_enemy_bml_resource(void *);
u8 *alloc_buffer__11TOBoss4RockFPv(s32);
void set_global_flag__10TObjPlayerFv(void);
void bind_motion_context(void *, f32);
void apply_attack_params__16TObjEneRe7BeruraFiPv(u32, void *);
void clear_global_state__10TObjPlayerFv(void);
s32 *collect_and_count__12TBoss3VoloptFUii(u32 arg0, s32 arg1);
void *alloc__23TAdSinglePlyChrSelectGCFPv(int);
void *alloc_tables__6TLobbyFPvii(void *, s32, s32);
void *TBoss4Type3__sub_800D9ABC(void *arg0, s32 segs, f32 start, f32 end, f32 step);
void TBoss4Type3__sub_800D9994(void *, s32, u8 *, s32 *, V3_800959F8 *);
s32 register_boss__6TLobbyFPv(s32);
s32 dispatch_shared_handler_b__6TLobbyFPv(s32);
s32 register_object__6TLobbyFPv(s32);
s32 dispatch_shared_handler_a__6TLobbyFPv(s32);
void spawn_npc_enemy__6TLobbyFsiiiff(s16, s32, s32, s32, f32, f32);
extern u8 lbl_8048F6C4[];
extern T16_800959F8 lbl_8048F6D4[];
extern u8 lbl_80439EF8[];
extern s32 lbl_80439DA0[];
extern Atk_800959F8 lbl_80439EB4;
extern const s32 lbl_805D9718[1];
extern const s32 lbl_805D971C[1];
extern const s32 lbl_805D9720[1];
extern s32 TObjEneRe7Berura__data_805D4F58[1];
extern s32 TObjEneRe7Berura__data_805D4F5C[1];
extern s32 lbl_805D4F60[1];
extern u32 TObjEneRe7Berura__data_805D4F64;
extern s32 lbl_805D4F68;
extern s32 lbl_805D4F6C;
extern s32 lbl_805D4F70;
extern s32 lbl_805D4F74;
extern s32 lbl_805D4F78;
extern s32 lbl_805D4F7C;
extern u32 lbl_805D4F80;
extern s32 lbl_805D4F84;
extern s32 lbl_805D4F88;
extern u32 lbl_805D4F8C;
extern u32 lbl_805D4FA0;
extern const f32 TObjEneRe7Berura__data_805D972C;
extern const f32 TObjEneRe7Berura__data_805D9730;
extern const f32 TObjEneRe7Berura__data_805D9738;
extern const f32 TObjEneRe7Berura__data_805D9740;
extern const f32 lbl_805D974C;
extern const f32 TObjEneRe7Berura__data_805D9764;
extern const f32 lbl_805D9778;
extern const f32 lbl_805D977C;
extern const f32 lbl_805D9780;
extern const f32 lbl_805D9784;
extern const f32 lbl_805D9788;
void TObjEneRe7Berura__sub_800959F8(void);
}

extern "C" {

void *TObjEneRe7Berura__ct(void *arg0, void *arg1, void *arg2);
void TObjEneRe7Berura__vt26(void);
void TObjEneRe7Berura__vt61(void* p);
void *create__16TObjEneRe7BeruraFPv(void *arg0);
void destroy_children__16TObjEneRe7BeruraFv(void);
void TLobby__sub_8001FE7C(void*, int);
int transition_enemy_state(void*, void*);
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
        clear_attack_receipts();
        return;
    }
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 0xA) {
        transition_enemy_state((void*)((void *)(arg0)), (void*)((int) (0xA)));
    }
}

void TObjEneRe7Berura__vt61(void* p) { if (*(short*)((char*)p + 0x326) != 11) { transition_enemy_state(p, (void*)11); } }
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

Berura_800954E8 *__dt__16TObjEneRe7BeruraFv(Berura_800954E8 *self, s16 flag) {
    s32 i;
    if (self != 0) {
        self->vtbl = ((s32 *)&__vt__16TObjEneRe7Berura);
        TObjEneRe7Berura__sub_80094D3C(self);
        for (i = 0; i < 2; i++) {
            if (self->parts[i] != 0) {
                delete self->parts[i];
                self->parts[i] = 0;
            }
        }
        if (self->effect != 0) {
            queue_destruction__7TObjectFv(self->effect);
            self->effect = 0;
        }
        free_collision_body_parts(self);
        __destroy_arr(self->arr, (void *)((s32 *)&TObjPlayer__sub_800D7C58), 0x1C, 4);
        TObjPlayer__sub_800A05B8(self->motionB, -1);
        TObjPlayer__sub_800A05B8(self->motionA, -1);
        __dt__9TObjEneDDFv(self, 0);
        if (flag > 0) {
            __dl__7TObjectFPv(self);
        }
    }
    return self;
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

f32 lbl_805007C8[3];
__declspec(section ".data") s32 TObjEneRe7Berura__data_805007D4[2];
Elem_800959F8 TObjEneRe7Berura__data_805007DC[2];
#define RES ((Res_800959F8 *)TObjEneRe7Berura__data_805D4F64)
void TObjEneRe7Berura__sub_800959F8(void) {
    s32 pair[4];
    V3_800959F8 vecs[4];
    Res_800959F8 *r;
    u32 m;
    u8 *buf;
    s32 i;
    void *p;
    if (check_v2_mode__9TObjEneDDFv() != 0) {
        r = load_enemy_bml_resource_named(lbl_8048F6C4, lbl_80439EF8);
    } else {
        r = load_enemy_bml_resource(lbl_8048F6C4);
    }
    TObjEneRe7Berura__data_805D4F64 = (u32)r;
    lbl_805007C8[0] = TObjEneRe7Berura__data_805D972C;
    lbl_805007C8[1] = TObjEneRe7Berura__data_805D972C;
    lbl_805007C8[2] = TObjEneRe7Berura__data_805D972C;
    lbl_805D4F68 = 0;
    lbl_805D4F6C = 0;
    lbl_805D4F70 = 0;
    lbl_805D4F74 = 0;
    lbl_805D4F78 = 0;
    lbl_805D4F7C = 0;
    m = *(u32 *)(r->f42C + 8);
    buf = alloc_buffer__11TOBoss4RockFPv(0x660);
    lbl_805D4F80 = (u32)buf;
    TObjEneRe7Berura__data_805007DC[0].buf = buf;
    TObjEneRe7Berura__data_805007DC[1].buf = buf + 0x330;
    TObjEneRe7Berura__data_805007DC[0].f4 = 0x21;
    TObjEneRe7Berura__data_805007DC[0].f8 = 0x31;
    TObjEneRe7Berura__data_805007DC[1].f4 = 0x38;
    TObjEneRe7Berura__data_805007DC[1].f8 = 0x48;
    TObjEneRe7Berura__data_805007DC[0].fC = 3;
    TObjEneRe7Berura__data_805007DC[0].f10 = TObjEneRe7Berura__data_805D9764;
    TObjEneRe7Berura__data_805007DC[0].f14 = TObjEneRe7Berura__data_805D9740;
    TObjEneRe7Berura__data_805007DC[1].fC = 4;
    TObjEneRe7Berura__data_805007DC[1].f10 = lbl_805D9778;
    TObjEneRe7Berura__data_805007DC[1].f14 = lbl_805D977C;
    for (i = 0; i < 2; i++) {
        Elem_800959F8 *e = &TObjEneRe7Berura__data_805007DC[i];
        u8 *ent = RES->f430[lbl_8048F6D4[e->fC].f4].f4;
        set_global_flag__10TObjPlayerFv();
        bind_motion_context(ent, e->f14);
        apply_attack_params__16TObjEneRe7BeruraFiPv(m, e);
        clear_global_state__10TObjPlayerFv();
        e->f18 = collect_and_count__12TBoss3VoloptFUii(m, e->f4);
        e->f1C = (s32)collect_and_count__12TBoss3VoloptFUii(m, e->f8);
        e->f20 = 7;
        e->f24 = e->f18[1];
        e->f28 = TObjEneRe7Berura__data_805D972C;
        e->f2C = TObjEneRe7Berura__data_805D972C;
        e->f30 = TObjEneRe7Berura__data_805D972C;
        e->f34 = 0;
        e->f38 = 0;
        e->f3C = 0;
        e->f40 = lbl_805D974C;
        e->f44 = lbl_805D974C;
        e->f48 = lbl_805D974C;
        e->f4C = e->f18[0x2C / 4];
        e->f50 = 0;
    }
    lbl_805D4F84 = ((s32 *)collect_and_count__12TBoss3VoloptFUii(m, 2)[1])[1] + 8;
    lbl_805D4F88 = ((s32 *)collect_and_count__12TBoss3VoloptFUii(m, 1)[1])[1] + 8;
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0x14);
    if (p != NULL) {
        p = alloc_tables__6TLobbyFPvii(p, *(s32 *)(RES->f42C + 8), 2);
    }
    lbl_805D4F8C = (u32)p;
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0x18);
    if (p != NULL) {
        p = TBoss4Type3__sub_800D9ABC(p, 4, lbl_805D9780, lbl_805D9784, TObjEneRe7Berura__data_805D9738);
    }
    lbl_805D4FA0 = (u32)p;
    pair[0] = 0x2E;
    pair[1] = 0x2E;
    pair[2] = 0x45;
    pair[3] = 0x45;
    for (i = 0; i < 4; i++) {
        vecs[i].x = TObjEneRe7Berura__data_805D972C;
        vecs[i].y = TObjEneRe7Berura__data_805D972C;
        vecs[i].z = TObjEneRe7Berura__data_805D972C;
    }
    vecs[0].x = TObjEneRe7Berura__data_805D9730;
    vecs[2].x = TObjEneRe7Berura__data_805D9730;
    TBoss4Type3__sub_800D9994(p, *(s32 *)(RES->f42C + 8), (RES->f430 + lbl_8048F6D4[2].f4)->f4, pair, vecs);
    for (i = 0; i < 1; i++) {
        TObjEneRe7Berura__data_805D4F58[i] = register_boss__6TLobbyFPv(lbl_805D9718[i]);
    }
    for (s32 j = 0; j < 2; j++) {
        TObjEneRe7Berura__data_805007D4[j] = dispatch_shared_handler_b__6TLobbyFPv(lbl_80439DA0[j]);
    }
    for (i = 0; i < 1; i++) {
        TObjEneRe7Berura__data_805D4F5C[i] = register_object__6TLobbyFPv(lbl_805D971C[i]);
    }
    for (i = 0; i < 1; i++) {
        lbl_805D4F60[i] = dispatch_shared_handler_a__6TLobbyFPv(lbl_805D9720[i]);
    }
    {
        Atk_800959F8 atk = lbl_80439EB4;
        atk.w[0] = (s32)RES->f430;
        spawn_npc_enemy__6TLobbyFsiiiff(0x15, *(s32 *)(RES->f42C + 8), *(s32 *)(RES->f42C + 0xC), (s32)&atk, lbl_805D9788, TObjEneRe7Berura__data_805D972C);
    }
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
