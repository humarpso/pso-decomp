#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct PlB_80130974 { char pad[0x18]; };

struct Pl_80130974 : PlB_80130974 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual s32 m49(void *, s32, s32, s32);
};

struct Pl2_80130974 : Pl_80130974 { u8 pad[0x1F8-0x1C]; s32 f1f8; u8 pad2[0xC]; u8 f208[12]; u8 f214[12]; };

extern "C" {
M2C_UNK TObjPlayer__sub_8012E1E8(int, void *, void *, void *, void *, int);
f32 TBoss8Dragon__sub_803D64C0(int);
f32 TBoss8Dragon__sub_803D64DC(int);
extern s32 tl_05;
extern const f32 lbl_805DB014;
void TObjPlayer__sub_80130A30(u8 *arg0, s32 arg1, s32 arg2);
void TObjPlayer__sub_80130A30(u8 *arg0, s32 arg1, s32 arg2);
extern const f32 lbl_805DB008;
extern const f32 lbl_805DB00C;
extern const f32 lbl_805DB010;
void TObjPlayer__sub_80130898(u8 *arg0);
void spawn_particle_effect(void *, s32);
void TObjPlayer__sub_80130974(Pl2_80130974 *arg0);
}

extern "C" {

#pragma push
#pragma opt_common_subs off
void TObjPlayer__sub_80130898(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1F8);
    switch (temp_r0) {
    case 1:
        M2C_FIELD(arg0, f32 *, 0x200) = (f32) (M2C_FIELD(arg0, f32 *, 0x200) - lbl_805DB008);
        if (M2C_FIELD(arg0, f32 *, 0x200) <= lbl_805DB00C) {
            M2C_FIELD(arg0, f32 *, 0x200) = (f32) lbl_805DB00C;
            M2C_FIELD(arg0, s32 *, 0x1F8) = 0;
            break;
        }
        break;
    case 2:
        M2C_FIELD(arg0, f32 *, 0x200) = (f32) (M2C_FIELD(arg0, f32 *, 0x200) + lbl_805DB008);
        if (lbl_805DB010 <= M2C_FIELD(arg0, f32 *, 0x200)) {
            M2C_FIELD(arg0, f32 *, 0x200) = (f32) lbl_805DB010;
            M2C_FIELD(arg0, s32 *, 0x1F8) = 3;
            break;
        }
        break;
    case 3:
        M2C_FIELD(arg0, s32 *, 0x1F8) = 1;
        TObjPlayer__sub_80130A30((u8 *)(arg0), (s32)((s32) ((u8 *)(arg0) + 0x220)), (s32)(0x4000));
        TObjPlayer__sub_80130A30((u8 *)(arg0), (s32)((s32) ((u8 *)(arg0) + 0x22C)), (s32)(-0x4000));
        break;
    }
}
#pragma pop

void TObjPlayer__sub_80130974(Pl2_80130974 *arg0) {
    arg0->f1f8 = 2;
    if (arg0->m49(arg0->f208, 0, 0, 1) != 0) {
        arg0->m49(arg0->f214, 0, 0, 0);
    } else {
        arg0->m49(arg0->f214, 0, 0, 1);
    }
    spawn_particle_effect(arg0->f208, 9);
    spawn_particle_effect(arg0->f214, 9);
}

void TObjPlayer__sub_80130A30(u8 *arg0, s32 arg1, s32 arg2) {
    f32 buffer_14[3];
    s32 buffer_8[3];
    s32 temp_r31;
    s32 temp_r8;
    u8 *temp_r3;
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xF0));
    if (temp_r3 != NULL) {
        temp_r31 = M2C_FIELD(temp_r3, s32 *, 0x60) - arg2;
        buffer_14[0] = TBoss8Dragon__sub_803D64C0((int) (temp_r31));
        buffer_14[1] = lbl_805DB014;
        buffer_14[2] = TBoss8Dragon__sub_803D64DC((int) (temp_r31));
        buffer_8[0] = 0x4000;
        temp_r8 = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xF0), s32 *, 0x60);
        buffer_8[1] = temp_r8;
        buffer_8[2] = 0;
        TObjPlayer__sub_8012E1E8((int) (tl_05), (void *) (arg0), (void *) (arg1), (void *) (&buffer_14[0]), (void *) (&buffer_8[0]), (int) (temp_r8));
    }
}

}
