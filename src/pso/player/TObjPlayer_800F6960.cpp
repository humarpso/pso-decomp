#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Base_800F6960 { char pad[0x18]; };
struct VObj_800F6960 : Base_800F6960 {
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
};

#define M2C_BITWISE(type, expr) ((type)(expr))

#include "pso/enemy/TObjEnemy.h"

typedef struct TObjPlayer_800F6B68 {
    u8 pad[0x2D6];
    u16 attacker_id;
} TObjPlayer_800F6B68;

struct Vec_800F698C { f32 x, y, z; };

struct A_800F698C {
    u8 pad0[0x1C]; u16 f1C; u8 pad1E[0x28 - 0x1E]; s16 f28; s16 f2A; s16 f2C;
    u8 pad2E[0x38 - 0x2E]; Vec_800F698C v38; u8 pad44[0x50 - 0x44]; Vec_800F698C v50; Vec_800F698C v5C;
    u8 pad68[0x160 - 0x68]; u8 f160[0x354 - 0x160]; f32 f354[5]; s32 f368; s32 f36C;
};

struct B_800F698C {
    s16 f0; u8 pad2[4]; u16 f6; s16 f8; s16 fA; u8 padC[4]; Vec_800F698C v10; Vec_800F698C v1C; f32 f28[5]; s16 f3C; s16 f3E;
};

struct Node_800F6E2C {
    u8 pad0[0x340];
    Node_800F6E2C *f340;
    Node_800F6E2C *f344;
    Node_800F6E2C *f348;
    Node_800F6E2C *f34C;
};

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
extern const f32 lbl_805DA8DC;
void update_prev_position__10TObjPlayerFPv(u8 *arg0);
s32 is_action_available__10TObjPlayerFv(TObjEnemy* _w0);

u16 obj_getArrU16_FC(void *, int);
s32 is_split_screen();
void TObjPlayer__sub_800F6BF0(void *, u16);
s32 TLobby__sub_800F7A64(void *);
void distribute_experience(TObjPlayer_800F6B68 *self);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
void copy_xyz__10TObjPlayerFPvPv(void *, void *);
void TAdSinglePlyChrSelectGC__sub_8007C48C(void *, s32);
extern s32 lbl_805D5328;
void apply_set_data__9TObjEnemyFPvPv(A_800F698C *arg0, B_800F698C *arg1);
void TObjPlayer__sub_800F6E2C(void *arg0, Node_800F6E2C *arg1, Node_800F6E2C *arg2);
}

extern "C" {

void call_vt78__10TObjPlayerFPv(void *arg0);
int query_lobby_state__10TObjPlayerFPv(void* p);
void refresh_lobby_state__10TObjPlayerFPv(void* p);
int send_6x60_standard_drop_item_request(void*);

void call_vt78__10TObjPlayerFPv(void *arg0) {
    struct VObj_800F6960 *o = (struct VObj_800F6960 *)arg0;
    o->m78();
}

void apply_set_data__9TObjEnemyFPvPv(A_800F698C *arg0, B_800F698C *arg1) {
    s32 i;
    arg0->f1C = arg1->f6;
    VecCopy__FP3VecPC3Vec(&arg0->v50, &arg1->v10);
    VecCopy__FP3VecPC3Vec(&arg0->v38, &arg0->v50);
    copy_xyz__10TObjPlayerFPvPv(&arg0->v5C, &arg1->v1C);
    for (i = 0; i < 5; i++) {
        arg0->f354[i] = arg1->f28[i];
    }
    arg0->f368 = arg1->f3C;
    arg0->f36C = arg1->f3E;
    arg0->f28 = arg1->f8;
    arg0->f2A = arg1->fA;
    arg0->f2C = arg1->f0;
    TAdSinglePlyChrSelectGC__sub_8007C48C(arg0->f160, arg0->f1C + lbl_805D5328);
}

void refresh_lobby_state__10TObjPlayerFPv(void* p) { distribute_experience((TObjPlayer_800F6B68 *)((void*)(p))); query_lobby_state__10TObjPlayerFPv((void*)(p)); }
int query_lobby_state__10TObjPlayerFPv(void* p) { return send_6x60_standard_drop_item_request(p); }

void distribute_experience(TObjPlayer_800F6B68 *self) {
    s32 count;
    s32 i;
    u16 id;
    if (is_split_screen() == 0) {
        TObjPlayer__sub_800F6BF0(self, self->attacker_id);
    } else {
        count = TLobby__sub_800F7A64(self);
        for (i = 0; i < count; i++) {
            id = obj_getArrU16_FC(self, i);
            if (id == 0xFFFF) {
                break;
            }
            TObjPlayer__sub_800F6BF0(self, id);
        }
    }
}

#pragma push
#pragma fp_contract on
void update_prev_position__10TObjPlayerFPv(u8 *arg0) {
    u8 *temp_r3;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x2FC), (void *) (arg0 + 0x38));
    temp_r3 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x2B0));
    if (temp_r3 != NULL) {
        M2C_FIELD(arg0, f32 *, 0x300) = (f32) ((lbl_805DA8DC * M2C_FIELD(temp_r3, f32 *, 0x10)) + M2C_FIELD(arg0, f32 *, 0x300));
    }
}
#pragma pop

}
s32 TObjEnemy::countChildren() {
    TObjEnemy* child=children;
    s32 count=0;
    if(child) {
        while(child->next) {child=child->next;++count;}
        ++count;
    }
    return count;
}
extern "C" {

void TObjPlayer__sub_800F6E2C(void *arg0, Node_800F6E2C *arg1, Node_800F6E2C *arg2) {
    Node_800F6E2C *p = arg1->f34C;
    Node_800F6E2C *q = arg2->f34C;
    if (p != NULL) {
        while (p->f348 != NULL) {
            p = p->f348;
        }
        if (q == NULL) {
            if (p->f344 != NULL) {
                p->f344->f348 = NULL;
                p->f344 = NULL;
            }
            p->f340 = arg2;
            arg2->f34C = p;
            return;
        }
        while (q->f348 != NULL) {
            q = q->f348;
        }
        if (p->f344 != NULL) {
            p->f344->f348 = NULL;
        }
        p->f344 = q;
        q->f348 = p;
    }
}

s32 is_action_available__10TObjPlayerFv(TObjEnemy* _w0) {
    return ((s32)_w0->groupRoot()) ? 1 : 0;
}
}
TObjEnemy* TObjEnemy::groupRoot() {
    TObjEnemy* current=this;
    while(current->previous) current=current->previous;
    TObjEnemy* group=current->group;
    if(group) return group;
    return 0;
}
extern "C" {

}
