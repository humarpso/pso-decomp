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

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
extern const f32 lbl_805DA8DC;
void update_prev_position__10TObjPlayerFPv(u8 *arg0);
s32 is_action_available__10TObjPlayerFv(TObjEnemy* _w0);

u16 obj_getArrU16_FC(void *, int);
s32 is_split_screen();
void TObjPlayer__sub_800F6BF0(void *, u16);
s32 TLobby__sub_800F7A64(void *);
void TObjPlayer__sub_800F6B68(TObjPlayer_800F6B68 *self);
}

extern "C" {

void call_vt78__10TObjPlayerFPv(void *arg0);
int query_lobby_state__10TObjPlayerFPv(void* p);
void refresh_lobby_state__10TObjPlayerFPv(void* p);
int TLobby__sub_80105538(void*);

void call_vt78__10TObjPlayerFPv(void *arg0) {
    struct VObj_800F6960 *o = (struct VObj_800F6960 *)arg0;
    o->m78();
}

void refresh_lobby_state__10TObjPlayerFPv(void* p) { TObjPlayer__sub_800F6B68((TObjPlayer_800F6B68 *)((void*)(p))); query_lobby_state__10TObjPlayerFPv((void*)(p)); }
int query_lobby_state__10TObjPlayerFPv(void* p) { return TLobby__sub_80105538(p); }

void TObjPlayer__sub_800F6B68(TObjPlayer_800F6B68 *self) {
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
