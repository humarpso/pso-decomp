#include "pso/TEndingPic.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_803530C4_80352BB8 { char pad[0x18]; };
struct VObj_803530C4_80352BB8 : Base_803530C4_80352BB8 {
    virtual void m0();  virtual void m1();  virtual void m2();  virtual void m3();
    virtual void m4();  virtual void m5();  virtual void m6();  virtual void m7();
    virtual void m8();  virtual void m9();  virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
};

struct RecoveredGlobal_80352F6C___vt__10TEndingPic { M2C_UNK value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_80352F6C___vt__10TEndingPic_size[sizeof(RecoveredGlobal_80352F6C___vt__10TEndingPic) == 0x18 ? 1 : -1];

struct VBase_18_c82b17 { char pad[0x18]; };

struct VObj_18_c82b17 : VBase_18_c82b17 {
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
    virtual M2C_UNK m21(void *, void *, s32, s32, s32);
};

struct Q_80353018 { s32 x; f32 y; };

struct P_80353018 { s32 x; s32 y; };

struct T_80353018 { u8 pad0[0xF0]; VObj_18_c82b17 *obj; };

extern "C" {
s32 TKeyBoardControl__sub_8000F828(void);
void __ct__7TObjectFP7TObject(void *, void *);
void init_positions__10TEndingPicFPv(void* a0);
int TEndingPic__sub_80353010(void);
extern RecoveredGlobal_80352F6C___vt__10TEndingPic __vt__10TEndingPic;
extern s32 lbl_805D4378;
extern s32 TEndingPic__data_805D6EE0;
extern s32 lbl_805D6EE4;
u8 *__ct__10TEndingPicFv(u8 *arg0, u8 *arg1);
extern const f32 lbl_805DFF30;
void TEndingPic__sub_80353018(T_80353018 *arg0, s32 arg1);
}

extern "C" {

int TEndingPic__sub_80353010(void);
void TEndingPic__sub_803530A0(void* p);
void TEndingPic__sub_80353110(void* p);
void TEndingPic__sub_80353134(void* p);
void TEndingPic__sub_80353194(void *arg0);
void TEndingPic__sub_803531D0(void* a0);
void TEndingPic__sub_803531F8(void);
void advance_animation_state__10TEndingPicFPv(void *arg0);
void draw_current_pic__10TEndingPicFPv(u8 *arg0);
void init_positions__10TEndingPicFPv(void* a0);
void render__10TEndingPicFv(s32 arg0);
void run_task__10TEndingPicFv(void* p);
void set_phase_18__10TEndingPicFPv(void* p);
void update_player_object__10TEndingPicFPv(void *arg0);
void update_shield__10TEndingPicFPv(void *arg0);
int TItemObject__sub_80116004(void*, f32);
s32 add_actor_hp(s32, s32);
s32 add_actor_tp(s32, s32);
s32 is_locally_controlled__10TObjPlayerFPv(void *);
M2C_UNK draw_textured_quad_at_depth(void *, f32);
M2C_UNK begin_screen_draw(int);
M2C_UNK TWindowSubStatusDisp__sub_803DF160(int, int);
s32 get_field_2b8__14TItemProShieldFPv(s32);
M2C_UNK get_player__20TWindowSubStatusDispFv();
s32 obj_getS16_2BA(s32);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK update_flag890_state__10TObjPlayerFi(s32);

extern s32 TEndingPic__data_805D6EE0;

void advance_animation_state__10TEndingPicFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r3_4;
    s32 temp_r4;
    s32 temp_r4_2;

    switch ((s32) TEndingPic__data_805D6EE0) {
    case 1:
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x1C) + 1;
        M2C_FIELD(arg0, s32 *, 0x1C) = temp_r3;
        temp_r4 = M2C_FIELD(arg0, s32 *, 0xEC);
        if (temp_r3 > (s32) ((temp_r4 * 3) - temp_r4)) {
            TEndingPic__data_805D6EE0 = 2;
            update_flag890_state__10TObjPlayerFi(M2C_FIELD(arg0, s32 *, 0x24));
            M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) + 1);
        }
        break;
    case 2:
        temp_r3_2 = M2C_FIELD(arg0, s32 *, 0x1C) + 1;
        M2C_FIELD(arg0, s32 *, 0x1C) = temp_r3_2;
        if (temp_r3_2 > (s32) (M2C_FIELD(arg0, s32 *, 0xEC) * 0xD)) {
            TEndingPic__data_805D6EE0 = 3;
            return;
        }
        break;
    case 3:
        temp_r3_3 = M2C_FIELD(arg0, s32 *, 0x1C) + 1;
        M2C_FIELD(arg0, s32 *, 0x1C) = temp_r3_3;
        temp_r4_2 = M2C_FIELD(arg0, s32 *, 0xEC);
        if (temp_r3_3 > (s32) ((temp_r4_2 * 0xE) - temp_r4_2)) {
            TEndingPic__data_805D6EE0 = 4;
            update_flag890_state__10TObjPlayerFi(M2C_FIELD(arg0, s32 *, 0x24));
            M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) + 1);
            return;
        }
        break;
    case 4:
        temp_r3_4 = M2C_FIELD(arg0, s32 *, 0x1C) + 1;
        M2C_FIELD(arg0, s32 *, 0x1C) = temp_r3_4;
        if (temp_r3_4 > (s32) (M2C_FIELD(arg0, s32 *, 0xEC) * 0x18)) {
            M2C_FIELD(arg0, s32 *, 0x1C) = 0;
            TEndingPic__data_805D6EE0 = 1;
            temp_r0 = M2C_FIELD(arg0, s32 *, 0x28) + 1;
            M2C_FIELD(arg0, s32 *, 0x28) = temp_r0;
            if (temp_r0 > 5) {
                M2C_FIELD(arg0, s32 *, 0x28) = 5;
                TEndingPic__data_805D6EE0 = 5;
                return;
            }
        }
        break;
    case 5:
        M2C_FIELD(arg0, s32 *, 0x28) = 5;
        break;
    }
}

extern s32 TEndingPic__data_805D6EE0;
extern const f32 lbl_805DFEF0;

void draw_current_pic__10TEndingPicFPv(u8 *arg0) {
    begin_screen_draw((int) (1));
    switch ((s32) TEndingPic__data_805D6EE0) {
    case 1:
    case 3:
        break;
    case 2:
        TWindowSubStatusDisp__sub_803DF160((int) ((M2C_FIELD(arg0, s32 *, 0x28) * 2) + 2), (int) (-1));
        draw_textured_quad_at_depth((void *) (arg0 + 0xAC), (f32) (lbl_805DFEF0));
        break;
    case 4:
    case 5:
        TWindowSubStatusDisp__sub_803DF160((int) ((M2C_FIELD(arg0, s32 *, 0x28) * 2) + 3), (int) (-1));
        draw_textured_quad_at_depth((void *) (arg0 + 0xCC), (f32) (lbl_805DFEF0));
        break;
    default:
        break;
    }
    get_player__20TWindowSubStatusDispFv();
}

    extern const float lbl_805DFEF4;
    extern const float lbl_805DFEF8;
    extern const float lbl_805DFEFC;
    extern const float lbl_805DFF00;
    extern const float lbl_805DFF04;
    extern const float lbl_805DFF08;
    extern const float lbl_805DFF0C;
    extern const float lbl_805DFF10;
    extern const float lbl_805DFF14;
    extern const float lbl_805DFF18;
    extern const float lbl_805DFF1C;
    extern const float lbl_805DFF20;
    extern const float lbl_805DFF24;
    extern const float lbl_805DFF28;
void init_positions__10TEndingPicFPv(void* a0) { *(float*)((char*)a0 + 0x2c) = lbl_805DFEF4; *(float*)((char*)a0 + 0x30) = lbl_805DFEF8; *(float*)((char*)a0 + 0x34) = lbl_805DFEFC; *(float*)((char*)a0 + 0x38) = lbl_805DFF00; *(float*)((char*)a0 + 0x3c) = lbl_805DFF04; *(float*)((char*)a0 + 0x40) = lbl_805DFEF8; *(float*)((char*)a0 + 0x44) = lbl_805DFF08; *(float*)((char*)a0 + 0x48) = lbl_805DFF0C; *(float*)((char*)a0 + 0x4c) = lbl_805DFEF8; *(float*)((char*)a0 + 0x50) = lbl_805DFEF8; *(float*)((char*)a0 + 0x54) = lbl_805DFF10; *(float*)((char*)a0 + 0x58) = lbl_805DFF00; *(float*)((char*)a0 + 0x5c) = lbl_805DFEF8; *(float*)((char*)a0 + 0x60) = lbl_805DFEF8; *(float*)((char*)a0 + 0x64) = lbl_805DFF04; *(float*)((char*)a0 + 0x68) = lbl_805DFF0C; *(float*)((char*)a0 + 0x6c) = lbl_805DFEF4; *(float*)((char*)a0 + 0x70) = lbl_805DFEF8; *(float*)((char*)a0 + 0x74) = lbl_805DFEFC; *(float*)((char*)a0 + 0x78) = lbl_805DFF00; *(float*)((char*)a0 + 0x7c) = lbl_805DFF04; *(float*)((char*)a0 + 0x80) = lbl_805DFEF8; *(float*)((char*)a0 + 0x84) = lbl_805DFF08; *(float*)((char*)a0 + 0x88) = lbl_805DFF0C; *(float*)((char*)a0 + 0x8c) = lbl_805DFEF8; *(float*)((char*)a0 + 0x90) = lbl_805DFEF8; *(float*)((char*)a0 + 0x94) = lbl_805DFF10; *(float*)((char*)a0 + 0x98) = lbl_805DFF00; *(float*)((char*)a0 + 0x9c) = lbl_805DFEF8; *(float*)((char*)a0 + 0xa0) = lbl_805DFEF8; *(float*)((char*)a0 + 0xa4) = lbl_805DFF04; *(float*)((char*)a0 + 0xa8) = lbl_805DFF0C; *(float*)((char*)a0 + 0xac) = lbl_805DFF14; *(float*)((char*)a0 + 0xb0) = lbl_805DFF18; *(float*)((char*)a0 + 0xb4) = lbl_805DFF1C; *(float*)((char*)a0 + 0xb8) = lbl_805DFF20; *(float*)((char*)a0 + 0xbc) = lbl_805DFEF8; *(float*)((char*)a0 + 0xc0) = lbl_805DFEF8; *(float*)((char*)a0 + 0xc4) = lbl_805DFF08; *(float*)((char*)a0 + 0xc8) = lbl_805DFF08; *(float*)((char*)a0 + 0xcc) = lbl_805DFF14; *(float*)((char*)a0 + 0xd0) = lbl_805DFF24; *(float*)((char*)a0 + 0xd4) = lbl_805DFF1C; *(float*)((char*)a0 + 0xd8) = lbl_805DFF28; *(float*)((char*)a0 + 0xdc) = lbl_805DFEF8; *(float*)((char*)a0 + 0xe0) = lbl_805DFEF8; *(float*)((char*)a0 + 0xe4) = lbl_805DFF08; *(float*)((char*)a0 + 0xe8) = lbl_805DFF08; }

extern s32 TEndingPic__data_805D6EE0;
extern s32 lbl_805D6EE4;

void render__10TEndingPicFv(s32 arg0) {
    if ((s32) TEndingPic__data_805D6EE0 != 0) {
        set_global_param__8TObjFishFi(lbl_805D6EE4);
        draw_current_pic__10TEndingPicFPv((u8 *)(arg0));
    }
}

void run_task__10TEndingPicFv(void* p) { advance_animation_state__10TEndingPicFPv((void *)(p)); }

    extern int lbl_805D4F14;

TEndingPic::~TEndingPic() {}
u8 *__ct__10TEndingPicFv(u8 *arg0, u8 *arg1) {
    s32 temp_r3;
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__10TEndingPic.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D4378;
    M2C_FIELD(arg0, s32 *, 0x1C) = -1;
    TEndingPic__data_805D6EE0 = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0xFF;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    lbl_805D6EE4 = ((s32)TEndingPic__sub_80353010());
    init_positions__10TEndingPicFPv((void*)(arg0));
    temp_r3 = TKeyBoardControl__sub_8000F828();
    switch (temp_r3) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0xEC) = 0x1E;
        break;
    case 1:
        M2C_FIELD(arg0, s32 *, 0xEC) = 0x19;
        break;
    }
    return arg0;
}

int TEndingPic__sub_80353010(void) {  return lbl_805D4F14; }

void TEndingPic__sub_80353018(T_80353018 *arg0, s32 arg1) {
    VObj_18_c82b17 *o = arg0->obj;
    if (o != NULL) {
        Q_80353018 q;
        P_80353018 p;
        p.x = arg1;
        q.y = lbl_805DFF30;
        q.x = arg1;
        p.y = *(s32 *)&q.y;
        o->m21(o, &p, 0, -1, -1);
    }
}

void set_phase_18__10TEndingPicFPv(void* p) { TEndingPic__sub_80353018((T_80353018 *)(p), (s32)(18)); }
void TEndingPic__sub_803530A0(void* p) { TEndingPic__sub_80353018((T_80353018 *)(p), (s32)(17)); }

void update_player_object__10TEndingPicFPv(void *arg0) {
    void *temp_r3 = M2C_FIELD(arg0, void **, 0xF0);
    if (is_locally_controlled__10TObjPlayerFPv(temp_r3) != 0) {
        struct VObj_803530C4_80352BB8 *o = (struct VObj_803530C4_80352BB8 *)M2C_FIELD(arg0, void **, 0xF0);
        o->m47();
    }
}

void TEndingPic__sub_80353110(void* p) { TEndingPic__sub_80353018((T_80353018 *)(p), (s32)(16)); }
void TEndingPic__sub_80353134(void* p) { TEndingPic__sub_80353018((T_80353018 *)(p), (s32)(15)); }
void update_shield__10TEndingPicFPv(void *arg0) {
    add_actor_hp(M2C_FIELD(arg0, s32 *, 0xF0), get_field_2b8__14TItemProShieldFPv(M2C_FIELD(arg0, s32 *, 0xF0)));
}
void TEndingPic__sub_80353194(void *arg0) {
    add_actor_tp(M2C_FIELD(arg0, s32 *, 0xF0), obj_getS16_2BA(M2C_FIELD(arg0, s32 *, 0xF0)));
}

    extern const f32 lbl_805DFF34;
void TEndingPic__sub_803531D0(void* a0) { TItemObject__sub_80116004((void*)(*(int*)((char*)a0 + 0xf0)), lbl_805DFF34); }

void TEndingPic__sub_803531F8(void) {  }

}
