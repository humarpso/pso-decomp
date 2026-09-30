#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802895D8_lbl_804D3320 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_802895D8_lbl_804D3320_size[sizeof(RecoveredGlobal_802895D8_lbl_804D3320) == 0x10 ? 1 : -1];

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

struct RecoveredGlobal_80289680___vt__16TObjNpcSoutokufu {
    M2C_UNK value;
    u8 remaining[0x174];
};

struct Nd_80289710 { u32 flags; u8 pad4[4]; f32 f8; f32 fc; f32 f10; u8 pad14[0x1C]; Nd_80289710 *next; };

struct Ls_80289710 { u8 pad[0x2C]; Nd_80289710 *head; };

struct Ow_80289710 { u8 pad[0x58]; Ls_80289710 *list; };

struct Gl_80289710 { u8 pad[0x42C]; Ow_80289710 *owner; };

extern "C" {
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_802895D8_lbl_804D3320 lbl_804D3320;
extern u32 TObjNpcSoutokufu__data_805D64C0;
void TObjNpcSoutokufu__sub_802895D8(void);
s32 TObjFish__sub_8001EDB0(int, int);
s32 TObjFish__sub_8001EDC4(int, int);
s32 init_position_vectors__10TObjPlayerFi(void *);
s32 fn_80148274(void *);
s32 fn_8014B8A4(void *);
extern M2C_UNK __vt__16TObjNpcSoutokufu[];
extern s32 lbl_805D3B0C;
extern u32 TObjNpcSoutokufu__data_805D64C0;
u8 *TObjNpcSoutokufu__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
void spawn_switch_attack__12TBoss8DragonFPv(void *);
void spawn_attack_effect__12TBoss8DragonFPv(void *);
s32 TBoss8Dragon__sub_80067034(void *, void *, f32);
f32 calc_sq_offset__12TBoss8DragonFPvf(void *, void *, f32);
extern void *lbl_805D4DD8;
extern const f32 lbl_805DD8E8;
void TBoss8Dragon__sub_80289710(void *arg0, void *arg1, void *arg2);
}

extern "C" {

void *__dt__16TObjNpcSoutokufuFv(void *arg0, s16 arg1);
void close_dialog_window__16TObjNpcSoutokufuFv(void);
void render__19TObjBoss5FloorStoneFv(void);
void run_task__19TObjBoss5FloorStoneFv(void);
void TLobby__sub_8001FE7C(void*, int);
void __dl__7TObjectFPv(void *);
void destroy_npc_lappy_base__12TObjNpcLappyFPvs(void *, int);
s32 is_any_teammate_in_state__10TObjPlayerFv();
M2C_UNK render_impl__19TObjBoss5FloorStoneFPvPv(s32, s32);

extern u32 TObjNpcSoutokufu__data_805D64C0;

void close_dialog_window__16TObjNpcSoutokufuFv(void) {
    if ((u32) TObjNpcSoutokufu__data_805D64C0 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjNpcSoutokufu__data_805D64C0, 1);
        TObjNpcSoutokufu__data_805D64C0 = 0U;
    }
}

extern M2C_UNK __vt__16TObjNpcSoutokufu[];

void TObjNpcSoutokufu__sub_802895D8(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 1, &lbl_804D3320.value, 0, 0, 0));
    }
    (*(s32 *)&TObjNpcSoutokufu__data_805D64C0) = var_r0;
}

void *__dt__16TObjNpcSoutokufuFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjNpcSoutokufu;
        destroy_npc_lappy_base__12TObjNpcLappyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *lbl_805D4DD8;
extern s32 lbl_805D4DDC;

typedef char RecoveredGlobal_80289680___vt__16TObjNpcSoutokufu_size[sizeof(RecoveredGlobal_80289680___vt__16TObjNpcSoutokufu) == 0x178 ? 1 : -1];
u8 *TObjNpcSoutokufu__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    fn_8014B8A4((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80289680___vt__16TObjNpcSoutokufu *)&__vt__16TObjNpcSoutokufu).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3B0C;
    ((VObj_18_aa4667 *)(arg0))->m79(arg2);
    init_position_vectors__10TObjPlayerFi((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0x34) = TObjFish__sub_8001EDC4((int) ((*(s32 *)&TObjNpcSoutokufu__data_805D64C0)), (int) (0));
    M2C_FIELD(arg0, s32 *, 0x24) = TObjFish__sub_8001EDB0((int) ((*(s32 *)&TObjNpcSoutokufu__data_805D64C0)), (int) (0));
    fn_80148274((void *) (arg0));
    return arg0;
}

void TBoss8Dragon__sub_80289710(void *arg0, void *arg1, void *arg2) {
    f32 sp[3];
    f32 off;
    Ls_80289710 *list;
    Nd_80289710 *n;
    Ow_80289710 *ow;
    ow = (*(Gl_80289710 * *)&lbl_805D4DD8)->owner;
    list = ow->list;
    off = calc_sq_offset__12TBoss8DragonFPvf(arg2, ow, lbl_805DD8E8);
    for (n = list->head; n != NULL; n = n->next) {
        if (!(n->flags & 8) && TBoss8Dragon__sub_80067034(arg1, n, off) != 0) {
            sp[0] = n->f8;
            sp[1] = n->fc;
            sp[2] = n->f10;
            spawn_attack_effect__12TBoss8DragonFPv(sp);
            spawn_switch_attack__12TBoss8DragonFPv(sp);
            n->flags |= 8;
        }
    }
}

void render__19TObjBoss5FloorStoneFv(void) {
    if (is_any_teammate_in_state__10TObjPlayerFv() == 0) {
        render_impl__19TObjBoss5FloorStoneFPvPv(lbl_805D4DDC, M2C_FIELD(M2C_FIELD(lbl_805D4DD8, void **, 0x42C), s32 *, 0x58));
    }
}

void run_task__19TObjBoss5FloorStoneFv(void) {  }

}
