#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Obj_8004D8C8 { u8 pad[0x2D4]; u16 f2d4; u16 f2d6; };

struct Obj_8004D92C { u8 pad[0x2D4]; u16 f2d4; u16 f2d6; };

struct V_8004D1E4 { f32 x, y, z; };

extern "C" {
s32 TBoss4DarkFalz__sub_8004D990(u8 *arg0);
u16 obj_getArrU16_FC(void *obj, s32 i);
void TBoss4DarkFalz__sub_8004D8C8(Obj_8004D8C8 *self, u16 *a, u16 *b, u16 *out);
u16 obj_getArrU16_FC(void *obj, s32 i);
void TBoss4DarkFalz__sub_8004D92C(Obj_8004D92C *self, u16 *a, u16 *b, u16 *out);
void *get_player_data__10TObjPlayerFi(s32);
s32 TBoss4DarkFalz__sub_8004B07C(void *);
void TBoss4DarkFalz__sub_8004B1BC(void *, s32);
f32 TObjPlayer__sub_80141CF8(void *, void *);
extern s32 lbl_805D586C;
extern const f32 lbl_805D895C;
extern const f32 lbl_805D8960;
extern const f32 lbl_805D8964;
void TBoss4DarkFalz__sub_8004D1E4(void *self);
}

extern "C" {

void TBoss4DarkFalz__sub_8004D29C(void* p);
void TBoss4DarkFalz__sub_8004D9A0(void* p, s32 v);
void init_timer__14TBoss4DarkFalzFPv(void* a0);
void start_demo__14TBoss4DarkFalzFPv(void* p);
int TBoss4DarkFalz__sub_8004AB90(void*, void*);
int TBoss4DarkFalz__sub_8004B20C(void*, void*);
int TBoss4DarkFalz__sub_8004B77C(void*);
int TBoss4DarkFalz__sub_8004B8F8(void*);
int TBoss4DarkFalz__sub_8004BA70(void*);
int TLobby__sub_80227220(void*);
int check_demo_mode__10TObjPlayerFv(void*);
int create__11TObjDFDemoFFPv(void*);
int create__14TObjDFUsoTowerFPv(void);
int fn_8036A514(void*);

    extern int lbl_805D4D68;
void init_timer__14TBoss4DarkFalzFPv(void* a0) { *(int*)((char*)a0 + 0x380) = 30; lbl_805D4D68 = 1; *(int*)((char*)a0 + 0x394) = create__14TObjDFUsoTowerFPv(); TBoss4DarkFalz__sub_8004B77C(a0); }

void start_demo__14TBoss4DarkFalzFPv(void* p) { TBoss4DarkFalz__sub_8004B8F8(p); TBoss4DarkFalz__sub_8004AB90(p, (void*)1); TBoss4DarkFalz__sub_8004BA70(p); create__11TObjDFDemoFFPv(p); TLobby__sub_80227220((void*)1); fn_8036A514((void*)23); *(int*)((char*)p + 0x380) = 120; }

void TBoss4DarkFalz__sub_8004D1E4(void *self) {
    V_8004D1E4 v;
    void *p;
    s32 i;
    f32 lim;
    v.x = lbl_805D895C;
    v.z = lbl_805D8960;
    lim = lbl_805D8964;
    for (i = 0; i < lbl_805D586C; i++) {
        p = get_player_data__10TObjPlayerFi(i);
        if (p != 0 && TObjPlayer__sub_80141CF8(&v, (u8 *)p + 0x2FC) <= lim) {
            TBoss4DarkFalz__sub_8004B1BC(self, 2);
            return;
        }
    }
    if (TBoss4DarkFalz__sub_8004B07C(self) != 0) {
        TBoss4DarkFalz__sub_8004B1BC(self, 2);
    }
}

void TBoss4DarkFalz__sub_8004D29C(void* p) { if (check_demo_mode__10TObjPlayerFv(p) == 0) { TBoss4DarkFalz__sub_8004B20C(p, (void*)1); } }

void TBoss4DarkFalz__sub_8004D8C8(Obj_8004D8C8 *self, u16 *a, u16 *b, u16 *out) {
    s32 i;
    *a = self->f2d6;
    *b = self->f2d4;
    for (i = 0; i < 4; i++) {
        out[i] = obj_getArrU16_FC(self, i);
    }
}

void TBoss4DarkFalz__sub_8004D92C(Obj_8004D92C *self, u16 *a, u16 *b, u16 *out) {
    s32 i;
    *a = self->f2d6;
    *b = self->f2d4;
    for (i = 0; i < 4; i++) {
        out[i] = obj_getArrU16_FC(self, i);
    }
}

s32 TBoss4DarkFalz__sub_8004D990(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x388) - M2C_FIELD(arg0, s32 *, 0x38C);
}

void TBoss4DarkFalz__sub_8004D9A0(void* p, s32 v) { *(s32*)((char*)p + 0x90) = v; }

}
