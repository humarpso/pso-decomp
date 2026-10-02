#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_80168C6C_lbl_804B2174 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_80168C6C_lbl_804B2578 {
    M2C_UNK value;
    u8 remaining[0x144];
};

extern "C" {
s32 TObjPlayer__sub_80019038(void *);
s32 TObjFish__sub_8001ED9C(void *, void *);
s32 get_bml_model(void *, void *);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_80154E3C(void *);
s32 TObjEneGibbles__sub_80156780(void *, void *, int);
s32 reset_state(void *);
extern RecoveredGlobal_80168C6C_lbl_804B2174 lbl_804B2174;
extern M2C_UNK lbl_804B2578[];
extern s32 lbl_805D59D0;
extern s32 lbl_805D59E0;
extern s32 lbl_805D59E4;
u8 *TOHangceilingCave01KeyQuick__sub_80168C6C(u8 *arg0, M2C_UNK arg1, s32 arg2);
}

extern "C" {

int TOHangceilingCave01KeyQuick__sub_80168D20(void);
f32 TOHangceilingCave01KeyQuick__sub_80168D28(void);
void TOHangceilingCave01KeyQuick__sub_80168D30(void);
void *destroy_hanging_object__27TOHangceilingCave01KeyQuickFPvs(void *arg0, s16 arg1);
void set_scale__27TOHangceilingCave01KeyQuickFPvf(void* p, f32 v);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK destroy_motion_object__10TObjPlayerFPvs(void *, M2C_UNK);

extern M2C_UNK lbl_804B2578[];

void *destroy_hanging_object__27TOHangceilingCave01KeyQuickFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B2578;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_motion_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_80168C6C_lbl_804B2174_size[sizeof(RecoveredGlobal_80168C6C_lbl_804B2174) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_80168C6C_lbl_804B2578_size[sizeof(RecoveredGlobal_80168C6C_lbl_804B2578) == 0x148 ? 1 : -1];
u8 *TOHangceilingCave01KeyQuick__sub_80168C6C(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    u8 *temp_r4;
    TObjPlayer__sub_80019038((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80168C6C_lbl_804B2578 *)&lbl_804B2578).value;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, s32 *, 0x34) = get_bml_model((void *) (lbl_805D59D0), (void *) (lbl_805D59E0));
    M2C_FIELD(arg0, s32 *, 0xF8) = TObjFish__sub_8001ED9C((void *) (lbl_805D59D0), (void *) (lbl_805D59E4));
    TObjEneGibbles__sub_80156780((void *) (arg0), (void *) (&lbl_804B2174.value), (int) (1));
    TObjPlayer__sub_80154E3C((void *) (arg0));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    reset_state((void *) (arg0));
    temp_r4 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xA4));
    M2C_FIELD(temp_r4, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x18) | 0x1080);
    return arg0;
}

int TOHangceilingCave01KeyQuick__sub_80168D20(void) { return 1; }

extern f32 lbl_805DB650;

f32 TOHangceilingCave01KeyQuick__sub_80168D28(void) {
    return lbl_805DB650;
}

void TOHangceilingCave01KeyQuick__sub_80168D30(void) {  }

void set_scale__27TOHangceilingCave01KeyQuickFPvf(void* p, f32 v) { *(f32*)((char*)p + 0x338) = v; }

}
