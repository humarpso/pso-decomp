#include "types.h"
#include "pso/TObjControl.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct EnemyControlDispatchBase { char pad[0x18]; };
struct EnemyControlDispatch : EnemyControlDispatchBase {
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
    virtual M2C_UNK m26();
    virtual s32 m27();
    virtual s32 m28();
    virtual s32 m29();
    virtual s32 m30();
    virtual s32 m31();
    virtual s32 m32();
    virtual void m33();
    virtual s32 m34();
    virtual void m35();
    virtual M2C_UNK m36();
    virtual s32 m37();
    virtual s32 m38();
    virtual M2C_UNK m39();
    virtual M2C_UNK m40();
    virtual s32 m41();
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
    virtual M2C_UNK m56();
    virtual M2C_UNK m57();
    virtual M2C_UNK m58();
    virtual M2C_UNK m59();
    virtual M2C_UNK m60();
    virtual M2C_UNK m61();
};

extern "C" {

M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK set_flag_3__7TObjectFv(int);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK clear_flag_3__7TObjectFv(int);
M2C_UNK TObjPlayer__sub_801B4A18(int, int);
M2C_UNK minimap_render_dot(void *, int, int, int);
extern const f32 lbl_805DA8C0;

}

void TObjControl::run_task() {
    s16 mode;
    u8 *enemy;
    u8 *control_record;

    enemy = (u8 *)m_down;
    if (enemy == NULL) {
        queue_destruction__7TObjectFv(this);
        return;
    }
    if (check_demo_mode__10TObjPlayerFv() == 0) {
        if (((EnemyControlDispatch *)(enemy))->m31() != 0) {
            clear_flag_3__7TObjectFv((int) (enemy));
            ((EnemyControlDispatch *)(enemy))->m61();
            return;
        }
        ((EnemyControlDispatch *)(enemy))->m39();
        ((EnemyControlDispatch *)(enemy))->m40();
        if (((EnemyControlDispatch *)(enemy))->m41() == 0) {
            ((EnemyControlDispatch *)(enemy))->m36();
            if ((((EnemyControlDispatch *)(enemy))->m34() != 0) || (((EnemyControlDispatch *)(enemy))->m38() != 0) || (((EnemyControlDispatch *)(enemy))->m37() != 0)) {
                TObjPlayer__sub_801B4A18((int) (enemy), (int) (-1));
                minimap_render_dot((void *) (enemy + 0x38), (int) (-0x5DB4), (int) (1), (int) (0));
                ((EnemyControlDispatch *)(enemy))->m26();
                set_flag_3__7TObjectFv((int) (enemy));
                return;
            }
            clear_flag_3__7TObjectFv((int) (enemy));
        }
        if (((EnemyControlDispatch *)(enemy))->m30() != 0) {
            ((EnemyControlDispatch *)(enemy))->m60();
            return;
        }
        if (((EnemyControlDispatch *)(enemy))->m29() != 0) {
            ((EnemyControlDispatch *)(enemy))->m59();
            return;
        }
        if (!(M2C_FIELD(enemy, s32 *, 0x30) & 0x600000)) {
            if ((void *) M2C_FIELD(enemy, u8 **, 0x314) != NULL) {
                m_decision_mode = 0;
            } else {
                m_decision_mode = 2;
            }
            mode = m_decision_mode;
            switch (mode) {
            case 0:
                control_record = (u8 *)(M2C_FIELD(enemy, u8 **, 0x314));
                if (M2C_FIELD(control_record, s32 *, 8) & 4) {
                    ((EnemyControlDispatch *)(enemy))->m58();
                    return;
                }
                if (M2C_FIELD(control_record, f32 *, 0x24) > lbl_805DA8C0) {
                    ((EnemyControlDispatch *)(enemy))->m57();
                    return;
                }
                ((EnemyControlDispatch *)(enemy))->m56();
                break;
            case 1:
            case 2:
                ((EnemyControlDispatch *)(enemy))->m26();
                if (((EnemyControlDispatch *)(enemy))->m27() != 0) {
                    ((EnemyControlDispatch *)(enemy))->m56();
                    return;
                }
                if (((EnemyControlDispatch *)(enemy))->m32() != 0) {
                    ((EnemyControlDispatch *)(enemy))->m57();
                    return;
                }
                if (((EnemyControlDispatch *)(enemy))->m28() != 0) {
                    ((EnemyControlDispatch *)(enemy))->m58();
                    return;
                }
                ((EnemyControlDispatch *)(enemy))->m57();
                break;

            }
        }
    }
}

TObjControl::~TObjControl() {}

extern "C" {

void *TObjControl__ct(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__11TObjControl[];
extern void *lbl_805D2B04;

void *TObjControl__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TObjControl;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2B04;
    M2C_FIELD(arg0, u16 *, 0x1C) = 2;
    M2C_FIELD(arg0, u16 *, 0x1E) = 0;
    return arg0;
}

}
