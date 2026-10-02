#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct ObjPad18_800c7ae4 { u8 pad[0x18]; };
struct Obj2A8_800c7ae4 : ObjPad18_800c7ae4 {
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual s32 v18(void *a, f32 f);
    virtual void v19();
    virtual s32 v20(void *a, f32 f);
    virtual void v21();
    virtual void v22();
    virtual s32 v23(void *a, f32 f);
};

struct Vec_800C7C30 { s32 x, y, z; };

extern "C" {
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32);
f32 TObjPlayer__sub_80017D68(void *, void *, int, int, f32);
M2C_UNK update_angle__10TObjPlayerFPviPv(void *, void *, void *);
M2C_UNK advance_animation_playback(void *);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
extern const f32 lbl_805DA070;
void TObjEnemyCustom__sub_800C7C30(u8 *arg0);
}

extern "C" {

void update_state_machine__15TObjEnemyCustomFPv(void *arg0);
void TObjEnemyCustom__sub_800C7AE0(void);
void update__15TObjEnemyCustomFPv(void *arg0);
int update_gigue__15TObjEnemyCustomFPv(void* p);
M2C_UNK advance_animation_playback(void *);
int update_if_active__15TObjEneMe1GiGueFPv(void*, int);
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32);
M2C_UNK enemy_turn_toward_dest(void *, s32);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
s32 objInBand__FP7GameObjf(void *, f32);

extern const f32 lbl_805DA070;

void update_state_machine__15TObjEnemyCustomFPv(void *arg0) {
    s16 temp_r4;
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFF9FFFFF);
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        advance_animation_playback(arg0);
        if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800000)) {
            apply_actor_gravity(arg0, 0, lbl_805DA070);
        }
        update_collisions__10TObjPlayerFPv(arg0);
        temp_r4 = M2C_FIELD(arg0, s16 *, 0x33C);
        M2C_FIELD(arg0, s16 *, 0x33C) = (s16) (temp_r4 - 1);
        if (temp_r4 < 0) {
            M2C_FIELD(arg0, s32 *, 0x37C) = -1;
        }
        break;
    case -1:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFEFF);
        M2C_FIELD(arg0, s16 *, 0x33C) = (s16) M2C_FIELD(arg0, s16 *, 0x33A);
        M2C_FIELD(arg0, s16 *, 0x33E) = (s16) M2C_FIELD(arg0, s16 *, 0x32C);
        M2C_FIELD(arg0, s32 *, 0x374) = 1;
        break;
    }
}

void TObjEnemyCustom__sub_800C7AE0(void) {  }

extern const f32 lbl_805DA068;
extern const f32 lbl_805DA074;
extern const f32 lbl_805DA090;

void update__15TObjEnemyCustomFPv(void *arg0) {
    s32 temp_r0;
    Obj2A8_800c7ae4 *temp_r3;
    Obj2A8_800c7ae4 *temp_r3_2;
    Obj2A8_800c7ae4 *temp_r3_3;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s16 *, 0xB8) = 2;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x200000);
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        enemy_turn_toward_dest(arg0, M2C_FIELD(M2C_FIELD(arg0, void **, 0x350), s32 *, 8));
        advance_animation_playback(arg0);
        if (objInBand__FP7GameObjf(arg0, lbl_805DA068) != 0) {
            temp_r3 = M2C_FIELD(arg0, Obj2A8_800c7ae4 **, 0x2A8);
            if (temp_r3->v18(arg0, lbl_805DA074) != 0) {
                temp_r3_2 = M2C_FIELD(arg0, Obj2A8_800c7ae4 **, 0x2A8);
                temp_r3_2->v20(arg0, lbl_805DA074);
                temp_r3_3 = M2C_FIELD(arg0, Obj2A8_800c7ae4 **, 0x2A8);
                temp_r3_3->v23(arg0, lbl_805DA090);
            }
        }
        update_collisions__10TObjPlayerFPv(arg0);
        if ((u32) M2C_FIELD(arg0, u32 *, 0xB4) != 4U) {
            M2C_FIELD(arg0, s32 *, 0x37C) = -1;
        }
        return;
    case -1:
        M2C_FIELD(arg0, s32 *, 0x374) = 1;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFFFF);
        break;
    }
}

int update_gigue__15TObjEnemyCustomFPv(void* p) { return update_if_active__15TObjEneMe1GiGueFPv(p, 2); }
void TObjEnemyCustom__sub_800C7C30(u8 *arg0) {
    f32 temp_f1;
    s32 temp_r0;
    u8 *temp_r3;
    u8 *temp_r6;
    u8 *temp_r7;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case -1:
        break;
    case 0:
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        advance_animation_playback((void *) (arg0));
        temp_r7 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x2A8));
        if (temp_r7 != NULL) {
            Vec_800C7C30 v = *(Vec_800C7C30 *)(temp_r7 + 0x2FC);
            temp_r6 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x350));
            temp_f1 = TObjPlayer__sub_80017D68((void *) (arg0), (void *) (&v), (int) (1), (int) (temp_r6), (f32) (M2C_FIELD(temp_r6, f32 *, 4)));
            temp_r3 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x350));
            if ((M2C_FIELD(temp_r3, f32 *, 0) < temp_f1) || (temp_f1 < M2C_FIELD(temp_r3, f32 *, 4))) {
                M2C_FIELD(arg0, void **, 0x2A8) = NULL;
            }
            update_angle__10TObjPlayerFPviPv((void *) (arg0), (void *) (M2C_FIELD(M2C_FIELD(arg0, void **, 0x350), s32 *, 8)), (void *) (arg0 + 0x308));
        }
        apply_actor_gravity((void *)((void *) (arg0)), (M2C_UNK)((int) (0)), (f32) (lbl_805DA070));
        update_collisions__10TObjPlayerFPv((void *) (arg0));
        return;
    }
}

}
