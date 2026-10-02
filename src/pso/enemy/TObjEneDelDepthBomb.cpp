#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_803135B4___vt__19TObjEneDelDepthBomb {
    M2C_UNK value;
    u8 remaining[0x138];
};

struct Vec_803133BC { f32 x; f32 y; f32 z; };

struct Bomb_803133BC {
    u8 pad0[0x38];
    Vec_803133BC pos;
    u8 pad1[0x248 - 0x44];
    u8 col[0x334 - 0x248];
    u8 f334[4];
    f32 f338;
    u8 pad2[4];
    f32 f340;
    f32 f344;
    s32 f348;
    s32 cnt;
    s32 f350;
    f32 f354;
};

extern "C" {
int TObjEneDelDepthBomb__sub_80313268(void);
s32 TObjPlayer__sub_80019038(void *);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
f32 get_depth_radius__19TObjEneDelDepthBombFPv(void *);
f32 TBoss8Dragon__sub_803D64C0(int);
f32 TBoss8Dragon__sub_803D64DC(int);
extern M2C_UNK __vt__19TObjEneDelDepthBomb[];
extern s32 lbl_805D411C;
u8 *TObjEneDelDepthBomb__ct(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3, s32 arg4);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
f32 TBoss4Zako__sub_803D8910(void *, void *);
s32 project_actor_to_ground(void *, void *, void *);
int TObjEneDelDepthBomb__sub_80313268(void);
s32 create__11TTecRaBartaFPvPvPvPv(s32, void *, void *, s32);
void queue_destruction__7TObjectFv(void *);
extern const f32 lbl_805DF264;
extern const f32 TObjEneDelDepth__data_805DF268;
extern const f32 TObjEneDelDepth__data_805DF26C;
void run_task__19TObjEneDelDepthBombFv(Bomb_803133BC *o);
}

extern "C" {

void *__dt__19TObjEneDelDepthBombFv(void *arg0, s16 arg1);
void * create__19TObjEneDelDepthBombFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
int TObjPlayer__sub_8001BEF8(void*, int);
int TObjPlayer__sub_801AA64C(void* a0 = 0);
int TObjPlayer__sub_80313138(void* a0 = 0);
int TObjPlayer__sub_803131AC(void);
int TObjPlayer__sub_80313218(void* p);
void TObjPlayer__sub_80313250(void *arg0, s32 arg1);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
int check_flag_at_4__10TObjPlayerFPv(void* p);
void destroy_motion_object__10TObjPlayerFPvs(void *, int);
int get_max_children__10TObjPlayerFPv(void* a0 = 0);
int query_field40__10TObjPlayerFPv(void* p);
void set_field_0__10TObjPlayerFPvs(void* p, s16 v);
int set_flags__10TObjPlayerFPvUi(void*, int);
void update_children__10TObjPlayerFPv(void* p);

int TObjEneDelDepthBomb__sub_80313268(void) { return 0; }

void run_task__19TObjEneDelDepthBombFv(Bomb_803133BC *o) {
    s32 done = 0;
    f32 t;
    o->f338 += lbl_805DF264;
    TBoss4Zako__sub_803D8910(&o->pos, o->f334);
    if (++o->cnt > 0x14F) {
        done = 1;
    }
    Vec_803133BC v = o->pos;
    v.y += TObjEneDelDepth__data_805DF268;
    if (project_actor_to_ground(o, &v, o->col) != 0) {
        o->f340 = v.y;
        if (o->pos.y <= o->f340) {
            done = 1;
        }
    } else {
        done = 1;
    }
    if (((int (*)(void *))TObjEneDelDepthBomb__sub_80313268)(o) != 0) {
        done = 1;
    }
    t = o->f344 + o->f354;
    o->f344 = t;
    if (t >= TObjEneDelDepth__data_805DF26C) {
        done = 1;
    }
    if (done != 0) {
        Vec_803133BC w;
        VecCopy__FP3VecPC3Vec(&w, &o->pos);
        w.y += TObjEneDelDepth__data_805DF268;
        create__11TTecRaBartaFPvPvPvPv(o->f348, &o->pos, &w, o->f350);
        queue_destruction__7TObjectFv(o);
    }
}

void * create__19TObjEneDelDepthBombFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x358);
    if (o != NULL) {
        o = TObjEneDelDepthBomb__ct((u8 *)(o), (M2C_UNK)(arg0), (s32)(arg1), (s32)(arg2), (s32)(arg3));
    }
    return o;
}

extern M2C_UNK __vt__19TObjEneDelDepthBomb[];

void *__dt__19TObjEneDelDepthBombFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TObjEneDelDepthBomb;
        destroy_motion_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_803135B4___vt__19TObjEneDelDepthBomb_size[sizeof(RecoveredGlobal_803135B4___vt__19TObjEneDelDepthBomb) == 0x13C ? 1 : -1];
u8 *TObjEneDelDepthBomb__ct(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3, s32 arg4) {
    f32 temp_f30;
    f32 temp_f31;
    TObjPlayer__sub_80019038((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_803135B4___vt__19TObjEneDelDepthBomb *)&__vt__19TObjEneDelDepthBomb).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D411C;
    M2C_FIELD(arg0, s32 *, 0x348) = arg2;
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x10), s32 *, 0x60);
    VecCopy__FP3VecPC3Vec((void *) ((u8 *)(arg0) + 0x38), (void *) (arg3));
    temp_f30 = TBoss8Dragon__sub_803D64C0((int) (M2C_FIELD(arg0, s32 *, 0x60)));
    temp_f31 = TBoss8Dragon__sub_803D64DC((int) (M2C_FIELD(arg0, s32 *, 0x60)));
    M2C_FIELD(arg0, f32 *, 0x354) = get_depth_radius__19TObjEneDelDepthBombFPv((void *) (M2C_FIELD(arg0, u8 **, 0x10)));
    M2C_FIELD(arg0, f32 *, 0x334) = (f32) (M2C_FIELD(arg0, f32 *, 0x354) * temp_f30);
    M2C_FIELD(arg0, f32 *, 0x338) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x33C) = (f32) (M2C_FIELD(arg0, f32 *, 0x354) * temp_f31);
    M2C_FIELD(arg0, s32 *, 0x350) = arg4;
    M2C_FIELD(arg0, f32 *, 0x344) = 0.0f;
    M2C_FIELD(arg0, s32 *, 0x34C) = 0;
    return arg0;
}

}

struct Stack_80313694 {
    M2C_UNK sp8;
    f32 spC;
};

struct VBase_18_65b835 { char pad[0x18]; };

struct VObj_18_65b835 : VBase_18_65b835 {
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
    virtual M2C_UNK m77(s32 *);
};

extern "C" {
u8 * csnVectorUnder(s32, void *, s32);
void set_active__12TObjEneReconFv(void);
extern s32 lbl_805D53A4;
extern const f32 TObjEneDelDepth__data_805DF270;
void TObjEneDelDepth__sub_80313694(u8 *arg0);
M2C_UNK TLobby__sub_8002AFD4(void *, void *, int);
M2C_UNK apply_effect_variant_a__10TObjPlayerFii(void *, int);
M2C_UNK TLobby__sub_800F6510(void *, void *);
M2C_UNK send_entity_set_flags__6TLobbyFPv(void *);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
extern const f32 lbl_805DF27C;
void TObjEneDelDepth__sub_80313954(u8 *arg0);
}

extern "C" {

void TObjEneDelDepth__sub_803138F8(void* a0);
void init_move__15TObjEneDelDepthFPv(void *arg0);
void start_attack_motion__15TObjEneDelDepthFPv(u8 *arg0);
void update_ai_state__15TObjEneDelDepthFPv(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
M2C_UNK TObjEneDelDepth__sub_803154A8(void *, int);
int TObjEneDelDepth__sub_80316488(void*, void*);
u16 find_nearest_visible_player(void *, void *, f32);
s32 get_type__15TObjEneDelDepthFPv(int);
M2C_UNK refresh_lobby_state__10TObjPlayerFPv();
int set_draw_mode__15TObjEneDelDepthFPvi(void*, void*);

    extern const float TObjEneDelDepth__data_805DF258;
    extern const float TObjEneDelDepth__data_805DF278;

void TObjEneDelDepth__sub_80313694(u8 *arg0) {
    Stack_80313694 stack;
    u8 *temp_r3;
    if ((lbl_805D53A4 % 5) == 0) {
        ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)(&stack.sp8, arg0 + 0x38);
        stack.spC += TObjEneDelDepth__data_805DF270;
        temp_r3 = (u8 *)(csnVectorUnder((s32) &stack.sp8, arg0 + 0x120, 0x4000));
        if (temp_r3 != NULL) {
            M2C_FIELD(arg0, s32 *, 0x3E0) = (s32) M2C_FIELD(M2C_FIELD(temp_r3, u8 **, 4), s32 *, 0x18);
            ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)(arg0 + 0x3E4, M2C_FIELD(temp_r3, u8 **, 4));
        } else {
            ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)(arg0 + 0x3E4, arg0 + 0x38);
        }
    }
    if (M2C_FIELD(arg0, s32 *, 0x3E0) & 0x4000) {
        set_active__12TObjEneReconFv();
    }
}

struct Vec_80313740 { f32 x, y, z; };
struct Ene_80313740 {
    u8 pad0[0x38];
    Vec_80313740 pos;
    u8 pad44[0x3D4 - 0x44];
    f32 f3D4;
    f32 f3D8;
    f32 f3DC;
};

f32 get_random_float__8TObjFishFv(f32);
M2C_UNK TObjEneDelDepth__sub_80315380(void *);
extern const f32 TObjEneDelDepth__data_805DF258;
extern const f32 lbl_805DF274;
#pragma push
#pragma fp_contract on
void TObjEneDelDepth__sub_80313740(Ene_80313740 *o) {
    s32 done;
    s32 tries;
    Vec_80313740 a;
    Vec_80313740 b;
    Vec_80313740 c;
    f32 s;
    f32 co;
    f32 k;

    done = 0;
    k = TObjEneDelDepth__data_805DF268;
    tries = 4;
    o->f3D8 += lbl_805DF274;
    do {
        VecCopy__FP3VecPC3Vec(&a, &o->pos);
        TBoss4Zako__sub_803D8910(&a, &o->f3D4);
        VecCopy__FP3VecPC3Vec(&b, &a);
        b.y += k + get_random_float__8TObjFishFv(o->f3D8);
        if (project_actor_to_ground(o, &b, 0) != 0) {
            VecCopy__FP3VecPC3Vec(&o->pos, &a);
            if (!(o->pos.y > b.y)) {
                o->pos.y = b.y;
                done = 1;
            }
            break;
        }
        s = TBoss8Dragon__sub_803D64C0(0x4000);
        co = TBoss8Dragon__sub_803D64DC(0x4000);
        tries--;
        o->f3D4 = co * o->f3D4 + s * o->f3DC;
        o->f3DC = -s * o->f3D4 + co * o->f3DC;
    } while (tries > 0);
    if (tries == 0) {
        o->f3D4 = o->f3DC = TObjEneDelDepth__data_805DF258;
        VecCopy__FP3VecPC3Vec(&c, &o->pos);
        c.y += TObjEneDelDepth__data_805DF268 + get_random_float__8TObjFishFv(o->f3D8);
        if (project_actor_to_ground(o, &c, 0) != 0) {
            if (!(o->pos.y > c.y)) {
                o->pos.y = c.y;
                done = 1;
            }
        } else {
            done = 1;
        }
    }
    if (done != 0) {
        TObjEneDelDepth__sub_80315380(o);
        TObjEneDelDepth__sub_803154A8(o, 1);
    }
}
#pragma pop

void TObjEneDelDepth__sub_803138F8(void* a0) { *(float*)((char*)a0 + 0x39c) = TObjEneDelDepth__data_805DF278; *(float*)((char*)a0 + 0x3a8) = TObjEneDelDepth__data_805DF258; *(float*)((char*)a0 + 0x3a4) = TObjEneDelDepth__data_805DF258; *(float*)((char*)a0 + 0x3a0) = TObjEneDelDepth__data_805DF258; *(float*)((char*)a0 + 0x398) = TObjEneDelDepth__data_805DF258; TObjEneDelDepth__sub_80316488((void*)((void*)(*(int*)((char*)a0 + 0x37c))), (void*)((void*)6)); set_draw_mode__15TObjEneDelDepthFPvi((void*)(a0), (void*)((void*)0)); }

extern const f32 TObjEneDelDepth__data_805DF260;

void TObjEneDelDepth__sub_80313954(u8 *arg0) {
    s32 sp8;
    f32 temp_f1;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x378);
    switch (temp_r0) {
    case 0:
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x384) - 1;
        M2C_FIELD(arg0, s32 *, 0x384) = temp_r0_2;
        if (temp_r0_2 <= 0) {
            M2C_FIELD(arg0, s32 *, 0x378) = 1;
            TBoss3Volopt__sub_8022675C((int) (0x4003A321), (void *) (arg0 + 0x38), (int) (0), (int) (0));
            M2C_FIELD(arg0, s32 *, 0x384) = 5;
        }
        break;
    case 1:
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x398) + lbl_805DF27C;
        M2C_FIELD(arg0, f32 *, 0x398) = temp_f1;
        if (temp_f1 < 0.0f) {
            M2C_FIELD(arg0, f32 *, 0x398) = 0.0f;
        }
        temp_r0_3 = M2C_FIELD(arg0, s32 *, 0x384) - 1;
        M2C_FIELD(arg0, s32 *, 0x384) = temp_r0_3;
        if (temp_r0_3 <= 0) {
            M2C_FIELD(arg0, s32 *, 0x378) = 2;
        }
        break;
    case 2:
    default:
        sp8 = 0x800;
        TLobby__sub_800F6510((void *) (arg0), (void *) (&sp8));
        TLobby__sub_8002AFD4((void *) (arg0), (void *) (&sp8), (int) (0));
        ((VObj_18_65b835 *)(arg0))->m77(&sp8);
        send_entity_set_flags__6TLobbyFPv((void *) (arg0));
        apply_effect_variant_a__10TObjPlayerFii((void *) (arg0 + 0x38), (int) (0));
        ((M2C_UNK (*)(void *))queue_destruction__7TObjectFv)((void *) (arg0));
        break;
    }
}

void init_move__15TObjEneDelDepthFPv(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3A8) = (f32) TObjEneDelDepth__data_805DF260;
    M2C_FIELD(arg0, f32 *, 0x3A4) = (f32) TObjEneDelDepth__data_805DF260;
    M2C_FIELD(arg0, f32 *, 0x3A0) = (f32) TObjEneDelDepth__data_805DF260;
    refresh_lobby_state__10TObjPlayerFPv();
    M2C_FIELD(arg0, s32 *, 0x378) = 0;
    if (get_type__15TObjEneDelDepthFPv((int)(M2C_FIELD(arg0, s32 *, 0x37C))) < 6) {
        M2C_FIELD(arg0, s32 *, 0x384) = 0x22;
        TObjEneDelDepth__sub_80316488((void*)(M2C_FIELD(arg0, s32 *, 0x37C)), (void*)(5));
    } else {
        M2C_FIELD(arg0, s32 *, 0x384) = 0x20;
        TObjEneDelDepth__sub_80316488((void*)(M2C_FIELD(arg0, s32 *, 0x37C)), (void*)(9));
    }
    set_draw_mode__15TObjEneDelDepthFPvi((void*)(arg0), (void*)(0));
}

extern const f32 TObjEneDelDepth__data_805DF270;
extern const f32 TObjEneDelDepth__data_805DF280;

void update_ai_state__15TObjEneDelDepthFPv(u8 *arg0) {
    M2C_UNK sp8;
    s32 temp_r0;
    u16 temp_r3;

    if (get_type__15TObjEneDelDepthFPv((int)((int) (M2C_FIELD(arg0, s32 *, 0x37C)))) < 6) {
        if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
            TObjEneDelDepth__sub_803154A8((void *) (arg0), (int) (5));
        }
    } else {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x384) - 1;
        M2C_FIELD(arg0, s32 *, 0x384) = temp_r0;
        if (temp_r0 <= 0) {
            temp_r3 = find_nearest_visible_player((void *) (arg0), (void *) (&sp8), (f32) (TObjEneDelDepth__data_805DF280));
            if ((temp_r3 != 0xFFFF) && (TBoss6Kakusan__sub_803D8BD8((void *) (&sp8)) > TObjEneDelDepth__data_805DF270)) {
                TObjEneDelDepth__sub_803154A8((void *) (arg0), (int) (4));
                return;
            }
            TObjEneDelDepth__sub_803154A8((void *) (arg0), (int) (3));
            TBoss3Volopt__sub_8022675C((int) (0x4003A822), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        }
    }
}

extern const f32 TObjEneDelDepth__data_805DF260;

void start_attack_motion__15TObjEneDelDepthFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFBFBFFFF);
    M2C_FIELD(arg0, f32 *, 0x3A8) = (f32) TObjEneDelDepth__data_805DF260;
    M2C_FIELD(arg0, f32 *, 0x3A4) = (f32) TObjEneDelDepth__data_805DF260;
    M2C_FIELD(arg0, f32 *, 0x3A0) = (f32) TObjEneDelDepth__data_805DF260;
    TBoss3Volopt__sub_8022675C((int) (0x4003A321), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    if (get_type__15TObjEneDelDepthFPv((int)((int) (M2C_FIELD(arg0, s32 *, 0x37C)))) < 6) {
        TObjEneDelDepth__sub_80316488((void*)((int) (M2C_FIELD(arg0, s32 *, 0x37C))), (void*)((int) (4)));
    } else {
        M2C_FIELD(arg0, s32 *, 0x384) = 0x10;
        TObjEneDelDepth__sub_80316488((void*)((int) (M2C_FIELD(arg0, s32 *, 0x37C))), (void*)((int) (8)));
    }
    set_draw_mode__15TObjEneDelDepthFPvi((void*)((void *) (arg0)), (void*)((int) (0)));
}

}
