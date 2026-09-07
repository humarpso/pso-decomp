#pragma push

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VObjBase_801A0070 { char pad[0x18]; };

struct VObj_801A0070 : VObjBase_801A0070 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

struct RecoveredGlobal_8019FCFC_lbl_804B9658 {
    M2C_UNK value;
    u8 remaining[0x8];
};

extern "C" {
void TObjAreaWarp__sub_8019CAB0(void *);
extern void *lbl_805D5CAC;
extern const f32 lbl_805DC048;
extern const f32 lbl_805DC04C;
void run_task__16TObjWarpJungMainFv(u8 *arg0);
s32 is_visible__17TWindowSubComCardFPv(void *);
s32 TWindowSubComCard__sub_80265BF8(void *);
extern RecoveredGlobal_8019FCFC_lbl_804B9658 lbl_804B9658;
s32 TObjWarpJungMain__vt16(u8 *arg0);
}

extern "C" {

void TObjWarpJungMain__vt12(void* p);
int TObjWarpJungMain__vt17(void* p);
void *TObjWarpJung__create(void *arg0);
void *__dt__16TObjWarpJungMainFv(void *arg0, s16 arg1);
int TObjAreaWarp__sub_8019CA24(void*);
int TObjWarpBase__vt12(void*);
void *TObjWarpJung__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__12TObjAreaWarpFv(void *, int);
void *__nw__7TObjectFUl(int);
int clear_flag__11TWindowCtrlFv(void);

typedef char RecoveredGlobal_8019FCFC_lbl_804B9658_size[sizeof(RecoveredGlobal_8019FCFC_lbl_804B9658) == 0xC ? 1 : -1];
s32 TObjWarpJungMain__vt16(u8 *arg0) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xB0));
    if ((temp_r3 != NULL) && (is_visible__17TWindowSubComCardFPv(temp_r3) != 0)) {
        M2C_FIELD(arg0, s32 *, 0xBC) = (s32) M2C_FIELD(&lbl_804B9658.value, M2C_UNK *, (TWindowSubComCard__sub_80265BF8(M2C_FIELD(arg0, u8 **, 0xB0)) * 4));
        return 1;
    }
    return 0;
}

int TObjWarpJungMain__vt17(void* p) { return TObjAreaWarp__sub_8019CA24(p); }
void TObjWarpJungMain__vt12(void* p) { TObjWarpBase__vt12(p); clear_flag__11TWindowCtrlFv(); }

extern M2C_UNK __vt__16TObjWarpJungMain[];

void run_task__16TObjWarpJungMainFv(u8 *arg0) {
  *((f32 *) (((s8 *) arg0) + 0xC4)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0xC4))) + lbl_805DC048);
  if ((*((f32 *) (((s8 *) arg0) + 0xC4))) > ((f32) (((*((s32 *) (((s8 *) (*(u8 * *)&lbl_805D5CAC)) + 4))) - 1) & 0xFFFFFFFF)))
  {
    *((f32 *) (((s8 *) arg0) + 0xC4)) = (f32) lbl_805DC04C;
  }
  TObjAreaWarp__sub_8019CAB0(arg0);
}

void *__dt__16TObjWarpJungMainFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjWarpJungMain;
        __dt__12TObjAreaWarpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_05;

void *TObjWarpJung__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC8);
    if (o != NULL) {
        o = TObjWarpJung__ct(o, tl_05, arg0);
    }
    return o;
}

}

#pragma pop

#pragma push

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VObjBase_801A0070_more_8019fe60_1 { char pad[0x18]; };
struct VObj_801A0070_more_8019fe60_1 : VObjBase_801A0070_more_8019fe60_1 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {
void TObjAreaWarp__sub_8019CAB0(void *);
extern void *lbl_805D5CAC;
extern const f32 lbl_805DC048;
extern const f32 lbl_805DC04C;
void run_task__12TObjWarpJungFv(u8 *arg0);
}

extern "C" {

int TObjWarpJung__vt17(void* p);
void *__dt__12TObjWarpJungFv(void *arg0, s16 arg1);
f32 get_static_field4_as_float__12TObjWarpJungFv(void);
void render__12TObjWarpJungFv(u8 *arg0);
M2C_UNK PPCSync();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
int TObjAreaWarp__sub_8019CA24(void*);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TObjWarpJung__sub_801A0404(M2C_UNK);
void __dl__7TObjectFPv(void *);
void __dt__12TObjAreaWarpFv(void *, int);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK render_warp__12TObjWarpJungFPv(M2C_UNK);
M2C_UNK render_warp_effect__12TObjWarpJungFii(M2C_UNK, s32);
M2C_UNK set_global_render_param__12TObjWarpJungFv();
s32 update_warp_display__12TObjWarpJungFv();

extern const f32 lbl_805DC040;
extern const f32 lbl_805DC044;

void render__12TObjWarpJungFv(u8 *arg0) {
    s32 temp_r0;

    if (((VObj_801A0070_more_8019fe60_1*)arg0)->m8(lbl_805DC040, lbl_805DC044) != 0) {
        if (update_warp_display__12TObjWarpJungFv() != 0) {
            PPCSync();
        }
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x8C);
        switch (temp_r0) {
        case 0:
            TObjWarpJung__sub_801A0404(0);
            break;
        case 1:
            TObjWarpJung__sub_801A0404(1);
            break;
        }
        set_global_render_param__12TObjWarpJungFv();
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        render_warp__12TObjWarpJungFPv(0);
        begin_effect_render__13TParticleCtrlFv();
        render_warp_effect__12TObjWarpJungFii(1, (s32) M2C_FIELD(arg0, f32 *, 0xC4));
        end_effect_render__13TParticleCtrlFv();
        TObjPlayer__sub_803D9B78();
    }
}

int TObjWarpJung__vt17(void* p) { return TObjAreaWarp__sub_8019CA24(p); }

extern M2C_UNK __vt__12TObjWarpJung[];

void run_task__12TObjWarpJungFv(u8 *arg0) {
  *((f32 *) (((s8 *) arg0) + 0xC4)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0xC4))) + lbl_805DC048);
  if ((*((f32 *) (((s8 *) arg0) + 0xC4))) > ((f32) (((*((s32 *) (((s8 *) (*(u8 * *)&lbl_805D5CAC)) + 4))) - 1) & 0xFFFFFFFF)))
  {
    *((f32 *) (((s8 *) arg0) + 0xC4)) = (f32) lbl_805DC04C;
  }
  TObjAreaWarp__sub_8019CAB0(arg0);
}

void *__dt__12TObjWarpJungFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TObjWarpJung;
        __dt__12TObjAreaWarpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_80446708;
extern void *lbl_805D5CAC;

f32 get_static_field4_as_float__12TObjWarpJungFv(void) {
    return (f32) M2C_FIELD(lbl_805D5CAC, u32 *, 4);
}

}

#pragma pop
