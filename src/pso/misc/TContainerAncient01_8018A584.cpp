#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8018AC68_8018A584 { char pad[0x18]; };
struct VObj_8018AC68_8018A584 : Base_8018AC68_8018A584 {
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
    virtual void m20(s32, f32);
};
struct VBase8018AD04_8018A584 { char pad[0x18]; };
struct VObj8018AD04_8018A584 : VBase8018AD04_8018A584 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {
void queue_destruction__7TObjectFv(void *);
s32 check_demo_mode__10TObjPlayerFv();
u32 TObjFish__sub_8001ED9C(int, int);
s32 TObjFish__sub_8001EDC4(int, int);
M2C_UNK TContainerAncient01__sub_8018A688(void *);
M2C_UNK TContainerAncient01__sub_8018A914(void *);
M2C_UNK TObjPlayer__sub_801B4A18(void *, int, f32);
M2C_UNK run_task__7TObjectFv(void *);
extern s32 TContainerAncient01R__data_805D5B94;
extern f32 TContainerAncient01__data_805DBD10;
extern const float TContainerAncient01__data_805DBD1C;
extern const f32 lbl_805DBD50;
extern const f32 lbl_805DBD54;
extern const f32 lbl_805DBD58;
void TContainerAncient01__sub_8018ADAC(u8 *arg0);
f32 fn_801315A0(void *, void *, void *);
extern const f32 TContainerAncient01__data_805DBD44;
s32 TContainerAncient01__sub_8018ACC8(s32 arg0, s32 arg1);
void TBoss1Dragon__sub_80143504(void *);
void trigger_spawn__19TContainerAncient01FPvPvPv(void *, void *, void *);
unsigned int __cvt_fp2unsigned(f32);
extern const float TContainerAncient01__data_805DBD1C;
extern const f32 TContainerAncient01__data_805DBD34;
void TContainerAncient01__sub_8018A890(u8 *arg0);
}

extern "C" {

int TContainerAncient01__sub_8018ACC0(void);
f32 check_item_type_range__19TContainerAncient01FPviPv(void *arg0, s32 arg1, s32 *arg2);
void draw__19TContainerAncient01FPv(u8 *arg0);
void reset_hp__19TContainerAncient01FPv(void* a0);
void set_target_value__19TContainerAncient01FPvPvi(void *arg0, s16 *arg1, s32 arg2);
M2C_UNK TBoss7Tentacle__sub_803D9BA0(void *);
M2C_UNK TContainerAncient01__sub_8018AB44(void *);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(s32);
M2C_UNK TObjDoor__sub_803DC894(s32, s32, f32);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK set_global_param__8TObjFishFi(s32);

    extern const float TContainerAncient01__data_805DBD1C;
void reset_hp__19TContainerAncient01FPv(void* a0) { *(short*)((char*)a0 + 0x326) = 0; *(short*)((char*)a0 + 0xb8) = *(short*)((char*)a0 + 0x326); *(float*)((char*)a0 + 0x2b4) = TContainerAncient01__data_805DBD1C; }

void TContainerAncient01__sub_8018A890(u8 *arg0) {
  TBoss1Dragon__sub_80143504(arg0);
  if ((__cvt_fp2unsigned(*((f32 *) (((s8 *) arg0) + 0x2B4))) % 15) == 0)
  {
    trigger_spawn__19TContainerAncient01FPvPvPv(arg0, arg0 + 0x348, (void *) 0x7D);
  }
  if (TContainerAncient01__data_805DBD34 <= (*((f32 *) (((s8 *) arg0) + 0x2B4))))
  {
    *((s16 *) (((s8 *) arg0) + 0x326)) = 2;
    *((s16 *) (((s8 *) arg0) + 0xB8)) = (s16) (*((s16 *) (((s8 *) arg0) + 0x326)));
    *((f32 *) (((s8 *) arg0) + 0x2B4)) = (f32) (*(const f32 *)&TContainerAncient01__data_805DBD1C);
  }
}

void set_target_value__19TContainerAncient01FPvPvi(void *arg0, s16 *arg1, s32 arg2) {
    s16 temp_r4;
    M2C_FIELD(arg0, s16 *, 0x338) = (s16) *arg1;
    if (arg2 != 0) {
        temp_r4 = M2C_FIELD(arg0, s16 *, 0x338);
        if ((M2C_FIELD(arg0, s16 *, 0x32C) - temp_r4) <= 0) {
            reset_hp__19TContainerAncient01FPv((void*)(arg0));
            TContainerAncient01__sub_8018AB44(arg0);
            M2C_FIELD(arg0, s32 *, 0x360) = 1;
        }
    } else if ((M2C_FIELD(arg0, s16 *, 0x32C) - M2C_FIELD(arg0, s16 *, 0x338)) <= 0) {
        M2C_FIELD(arg0, s32 *, 0x360) = 1;
    }
}

extern f32 TContainerAncient01__data_805DBD10;
extern f32 TContainerAncient01__data_805DBD14;

f32 check_item_type_range__19TContainerAncient01FPviPv(void *arg0, s32 arg1, s32 *arg2) {
    s32 temp_r4;
    struct VObj_8018AC68_8018A584 *o = (struct VObj_8018AC68_8018A584 *)arg0;

    temp_r4 = *arg2;
    if ((temp_r4 == 0) || ((u32) (temp_r4 - 1) <= 3U) || (temp_r4 == 0x13)) {
        o->m20(0, TContainerAncient01__data_805DBD10);
    }
    return TContainerAncient01__data_805DBD14;
}

int TContainerAncient01__sub_8018ACC0(void) { return 1; }

extern const f32 TContainerAncient01__data_805DBD3C;
extern const f32 lbl_805DBD4C;

s32 TContainerAncient01__sub_8018ACC8(s32 arg0, s32 arg1) {
    return fn_801315A0((void *) (arg1 + 0x38), (void *) (arg0 + 0x38), (void *) (arg0)) < TContainerAncient01__data_805DBD44;
}

void draw__19TContainerAncient01FPv(u8 *arg0) {
    if (((VObj8018AD04_8018A584 *) arg0)->m8(TContainerAncient01__data_805DBD3C, lbl_805DBD4C) != 0) {
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        if ((s32) M2C_FIELD(arg0, s32 *, 0x360) != 0) {
            TBoss7Tentacle__sub_803D9BA0(arg0 + 0x364);
        }
        if (check_demo_mode__10TObjPlayerFv() == 1) {
            TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(arg0, s32 *, 0x34));
        } else {
            TObjDoor__sub_803DC894(M2C_FIELD(arg0, s32 *, 0x34), M2C_FIELD(arg0, s32 *, 0xF8), M2C_FIELD(arg0, f32 *, 0xC0));
        }
        TObjPlayer__sub_803D9B78();
    }
}
void TContainerAncient01__sub_8018ADAC(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    s16 temp_r0;
    if (check_demo_mode__10TObjPlayerFv() == 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x360) == 0) {
            temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
            switch (temp_r0) {
            case 0:
                TContainerAncient01__sub_8018A914((void *) (arg0));
                break;
            case 1:
                TContainerAncient01__sub_8018A890((u8 *)((void *) (arg0)));
                break;
            case 2:
                TContainerAncient01__sub_8018A688((void *) (arg0));
                break;
            default:
                M2C_FIELD(arg0, s16 *, 0x326) = 0;
                M2C_FIELD(arg0, s16 *, 0xB8) = (s16) M2C_FIELD(arg0, s16 *, 0x326);
                M2C_FIELD(arg0, f32 *, 0x2B4) = (f32) (*(const f32 *)&TContainerAncient01__data_805DBD1C);
                TContainerAncient01__sub_8018A914((void *) (arg0));
                break;
            }
            temp_f1 = M2C_FIELD(arg0, f32 *, 0x2B4);
            M2C_FIELD(arg0, f32 *, 0x2B4) = (f32) (temp_f1 + (*(const f32 *)&TContainerAncient01__data_805DBD10));
            TObjPlayer__sub_801B4A18((void *) (arg0), (int) (-1), (f32) (temp_f1));
        } else {
            temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x368);
            if (temp_f1_2 <= lbl_805DBD50) {
                M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) - lbl_805DBD54);
                if (M2C_FIELD(arg0, f32 *, 0x3C) <= (lbl_805DBD58 * M2C_FIELD(arg0, f32 *, 0x368))) {
                    queue_destruction__7TObjectFv(arg0);
                }
            } else {
                M2C_FIELD(arg0, f32 *, 0x368) = (f32) (temp_f1_2 - lbl_805DBD54);
            }
        }
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0xF8) == TObjFish__sub_8001ED9C((int) (TContainerAncient01R__data_805D5B94), (int) (0))) {
        M2C_FIELD(arg0, s32 *, 0x34) = TObjFish__sub_8001EDC4((int) (TContainerAncient01R__data_805D5B94), (int) (0));
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0xF8) == TObjFish__sub_8001ED9C((int) (TContainerAncient01R__data_805D5B94), (int) (1))) {
        M2C_FIELD(arg0, s32 *, 0x34) = TObjFish__sub_8001EDC4((int) (TContainerAncient01R__data_805D5B94), (int) (1));
    }
    run_task__7TObjectFv((void *) (arg0));
}

}
