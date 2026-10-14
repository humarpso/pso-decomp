#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18_8622c5 { char pad[0x18]; };

struct VObj_18_8622c5 : VBase_18_8622c5 {
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
    virtual M2C_UNK m49(M2C_UNK *, M2C_UNK, s32, M2C_UNK);
};

struct RecoveredGlobal_80129878_lbl_804A4438 {
    M2C_UNK value;
    u8 remaining[0x10];
};

extern "C" {
M2C_UNK spawn_particle_effect(void *, int);
M2C_UNK draw_icon__10TObjPlayerFPvii(void *, int, void *);
M2C_UNK TObjPlayer__sub_80128A70();
extern RecoveredGlobal_80129878_lbl_804A4438 lbl_804A4438;
void s_rank_shot_marker(u8 *arg0);
}

extern "C" {

typedef char RecoveredGlobal_80129878_lbl_804A4438_size[sizeof(RecoveredGlobal_80129878_lbl_804A4438) == 0x14 ? 1 : -1];
void s_rank_shot_marker(u8 *arg0) {
    M2C_UNK sp8;
    TObjPlayer__sub_80128A70();
    draw_icon__10TObjPlayerFPvii((void *) (arg0), (int) (7), (void *) (&sp8));
    spawn_particle_effect((void *) (&sp8), (int) (9));
    ((VObj_18_8622c5 *)(arg0))->m49(&sp8, 0, M2C_FIELD(&lbl_804A4438.value, s32 *, 0), 1);
    draw_icon__10TObjPlayerFPvii((void *) (arg0), (int) (3), (void *) (&sp8));
    ((VObj_18_8622c5 *)(arg0))->m49(&sp8, 1, M2C_FIELD(&lbl_804A4438.value, s32 *, 4), 1);
    draw_icon__10TObjPlayerFPvii((void *) (arg0), (int) (5), (void *) (&sp8));
    ((VObj_18_8622c5 *)(arg0))->m49(&sp8, 2, M2C_FIELD(&lbl_804A4438.value, s32 *, 8), 1);
    draw_icon__10TObjPlayerFPvii((void *) (arg0), (int) (2), (void *) (&sp8));
    ((VObj_18_8622c5 *)(arg0))->m49(&sp8, 3, M2C_FIELD(&lbl_804A4438.value, s32 *, 0xC), 1);
    draw_icon__10TObjPlayerFPvii((void *) (arg0), (int) (6), (void *) (&sp8));
    ((VObj_18_8622c5 *)(arg0))->m49(&sp8, 4, M2C_FIELD(&lbl_804A4438.value, s32 *, 0x10), 1);
}

}
