#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Ent_8002C730 { u8 pad0[0x38]; f32 f38; u8 pad3c[4]; f32 f40; };

struct Obj_8002C730 { f32 x; u8 pad[4]; f32 z; };

extern "C" {
void attack_target_list_remove(u8 *arg0, s32 arg1);
extern s32 TObjBoss1Crater__data_805D4B58;
extern s32 TObjBoss1Crater__data_804FE1E8[];
void TObjBoss1Crater__sub_8002C7B8(void);
f32 newton_sqrtf(f32);
extern s32 TObjBoss1Crater__data_804FE1E8[];
extern s32 TObjBoss1Crater__data_805D4B58;
extern const f32 lbl_805D8168;
extern const f32 lbl_805D816C;
f32 TObjBoss1Crater__sub_8002C730(Obj_8002C730 *self);
}

extern "C" {

void TObjBoss1Crater__sub_8002C7B4(void);
s32 TObjBoss1Crater__sub_8002C7E4(void* p);
void * create__15TObjBoss1CraterFPvPv(void *arg0, void *arg1);
int TBoss8Dragon__sub_8002D5F8(void);
void *TObjBoss1Crater__ct(void *, void *, void *, void *);
int TObjBoss1Floor__sub_8002CB40(void);
int TObjBoss1Floor__sub_8002CB78(void);
int TObjBoss1Rock__sub_8002E3CC(void);
int TObjBoss1Rock__sub_8002E3D0(void);
void *__nw__7TObjectFUl(int);
int create_instance__14TObjBoss1FloorFv(void*);
int load_dragon_ground_assets(void);
int forward_floor_2CB44__6TLobbyFPv(void* p);
int free_char_select__6TLobbyFv(void);
int free_resources__12TBoss8DragonFv(void);
void *get_instance__12TBoss1DragonFv(void);
void init_bosses__6TLobbyFv(void);
int is_count_below_limit__15TObjBoss1CraterFv(void *, void *);
void update_boss1_objects__6TLobbyFv(void);

void * create__15TObjBoss1CraterFPvPv(void *arg0, void *arg1) {
    void *x1;
    void *o;
    if (is_count_below_limit__15TObjBoss1CraterFv(arg0, arg1) == 0) {
        return NULL;
    }
    x1 = get_instance__12TBoss1DragonFv();
    if (x1 == NULL) {
        return NULL;
    }
    o = __nw__7TObjectFUl(0xCC);
    if (o != NULL) {
        o = TObjBoss1Crater__ct(o, arg0, x1, arg1);
    }
    return o;
}

#pragma push
#pragma fp_contract on
f32 TObjBoss1Crater__sub_8002C730(Obj_8002C730 *self) {
    f32 best;
    s32 i;
    f32 x;
    f32 z;
    f32 d;
    f32 dx;
    f32 dz;
    best = lbl_805D8168;
    if (TObjBoss1Crater__data_805D4B58 == 0) {
        return lbl_805D816C;
    }
    x = self->x;
    z = self->z;
    for (i = 0; i < TObjBoss1Crater__data_805D4B58; i++) {
        Ent_8002C730 *e = (Ent_8002C730 *)TObjBoss1Crater__data_804FE1E8[i];
        dx = e->f38 - x;
        dz = e->f40 - z;
        d = dx * dx + dz * dz;
        if (d < best) {
            best = d;
        }
    }
    return newton_sqrtf(best);
}
#pragma pop

void TObjBoss1Crater__sub_8002C7B4(void) {  }

void TObjBoss1Crater__sub_8002C7B8(void) {
    s32 i;
    TObjBoss1Crater__data_805D4B58 = 0;
    for (i = 0; i < 20; i++) {
        TObjBoss1Crater__data_804FE1E8[i] = 0;
    }
}

s32 TObjBoss1Crater__sub_8002C7E4(void* p) { return *(s32*)((char*)p + 0x8); }
void attack_target_list_remove(u8 *arg0, s32 arg1) {
    s32 temp_r5;
    s32 temp_r5_2;
    if (arg1 >= 0) {
        temp_r5 = M2C_FIELD(arg0, s32 *, 8);
        if (arg1 < temp_r5) {
            M2C_FIELD(arg0, s32 *, 8) = (s32) (temp_r5 - 1);
            temp_r5_2 = M2C_FIELD(arg0, s32 *, 0);
            M2C_FIELD(temp_r5_2, M2C_UNK *, (arg1 * 4)) = M2C_FIELD(temp_r5_2, M2C_UNK *, (M2C_FIELD(arg0, s32 *, 8) * 4));
            M2C_FIELD(M2C_FIELD(arg0, s32 *, 0), M2C_UNK *, (M2C_FIELD(arg0, s32 *, 8) * 4)) = M2C_FIELD(arg0, s32 *, 4);
        }
    }
}

}
