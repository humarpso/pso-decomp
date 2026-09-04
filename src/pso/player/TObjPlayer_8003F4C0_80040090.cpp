#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Fn80040464Base_80040464_8003F4C0 { char pad[0x18]; };
struct Fn80040464VObj_80040464_8003F4C0 : Fn80040464Base_80040464_8003F4C0 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {

void TBoss3VoloptCore__sub_80040788(void);
void TObjPlayer__sub_80040558(void);
void cache_volopt_resource_ptrs(void);
void teardown_render_state__10TObjPlayerFPv(u8 *arg0);
void update_grabbed_state__10TObjPlayerFPv(void *arg0);
M2C_UNK TBoss1Dragon__sub_80143504(void *);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TCameraCtrl__sub_8006A044(M2C_UNK, f32);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TOMonitorMachine01__sub_803D8B5C(M2C_UNK, f32, f32, f32);
M2C_UNK TObjContainerIdo__sub_803D96A8(M2C_UNK, s32);
M2C_UNK TObjFish__sub_803E46BC(s32);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
s32 check_demo_mode__10TObjPlayerFv();
int dispatch_shared_handler_a__6TLobbyFPv(void*);
int dispatch_shared_handler_b__6TLobbyFPv(void*);
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK obj_clearFlags30(void *, M2C_UNK);
s32 obj_testFlags30(void *, M2C_UNK);
int register_boss__6TLobbyFPv(void*);
int register_object__6TLobbyFPv(void*);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK set_grabbed_state__10TObjPlayerFi(M2C_UNK);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, s32);

extern s32 lbl_805D53A0;
extern const f32 lbl_805D86D8;

void update_grabbed_state__10TObjPlayerFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        if (obj_testFlags30(arg0, 0x02000000) != 0) {
            M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 0x40000);
        }
        obj_clearFlags30(arg0, 0x02200200);
        M2C_FIELD(arg0, s16 *, 0x33E) = (s16) M2C_FIELD(arg0, s16 *, 0x32C);
        M2C_FIELD(arg0, s16 *, 0xB8) = 3;
        TBoss3Volopt__sub_8022675C(0x4003A81F, 0, 0, 0);
        TBoss3Volopt__sub_8022675C(0x4003BC20, 0, 0, 0);
        if ((s32) lbl_805D53A0 == (s32) M2C_FIELD(arg0, u16 *, 0x2D4)) {
            TCameraCtrl__sub_8006A044(0x1E, lbl_805D86D8);
        }
        M2C_FIELD(arg0, s32 *, 0x3C8) = 0x14;
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        TBoss1Dragon__sub_80143504(arg0);
        if ((u32) M2C_FIELD(arg0, u32 *, 0xB4) != 8U) {
            M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
            if (M2C_FIELD(arg0, s32 *, 0x388) & 0x40000) {
                set_grabbed_state__10TObjPlayerFi(0xF);
            } else {
                update_if_active__15TObjEneMe1GiGueFPv(arg0, M2C_FIELD(arg0, s32 *, 0x380));
            }
        }
        return;
    case -1:
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFBFFFF);
        break;
    }
}

extern s32 some_id_805c6f74;
extern const f32 lbl_805D86B0;
extern const f32 lbl_805D86E8;
extern const f32 lbl_805D86EC;
extern const f32 lbl_805D86F0;

void teardown_render_state__10TObjPlayerFPv(u8 *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x02000000) && (((Fn80040464VObj_80040464_8003F4C0*)arg0)->m8(lbl_805D86E8, lbl_805D86EC) != 0)) {
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
        TObjPlayer__sub_803D9B2C();
        some_id_805c6f74 &= 0xFFFFFBFF;
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjContainerIdo__sub_803D96A8(0, M2C_FIELD(arg0, s32 *, 0x5C));
        if (M2C_FIELD(arg0, s32 *, 0x388) & 0x10000) {
            TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x398));
            TOMonitorMachine01__sub_803D8B5C(0, lbl_805D86B0, lbl_805D86B0, lbl_805D86F0);
            TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60) - M2C_FIELD(arg0, s32 *, 0x398));
        } else {
            TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        }
        if (check_demo_mode__10TObjPlayerFv() == 1) {
            TObjFish__sub_803E46BC(M2C_FIELD(arg0, s32 *, 0x34));
        } else {
            draw__16TObjEneRe7BeruraFPv(arg0);
        }
        TObjPlayer__sub_803D9B78();
    }
}

void TObjPlayer__sub_80040558(void) {  }

void TBoss3VoloptCore__sub_80040788(void) {  }

    extern int lbl_805D4C10;
    extern int lbl_805D4C50;
    extern int lbl_805D4C54;
    extern int lbl_805D4C58;
    extern int lbl_805D4C5C;
    extern int lbl_805D4C60;
void cache_volopt_resource_ptrs(void) { lbl_805D4C60 = lbl_805D4C10; lbl_805D4C50 = register_boss__6TLobbyFPv((void*)33); lbl_805D4C54 = dispatch_shared_handler_b__6TLobbyFPv((void*)33); lbl_805D4C58 = register_object__6TLobbyFPv((void*)33); lbl_805D4C5C = dispatch_shared_handler_a__6TLobbyFPv((void*)33); }

}
