#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK TPlyPhotonChair__sub_801427D0(void *);
M2C_UNK TPlyPhotonChair__sub_80142874(void *);
f32 get_float_c__15TPlyPhotonChairFPv(void *);
u32 TPlayerBattleCtrl4P__sub_801BA74C(int);
s32 is_mounted__15TPlyPhotonChairFPv();
u16 TPlyPhotonChair__sub_8035B530(void* p);
void TPlyPhotonChair__sub_8035B56C(void* p, f32 v);
void set_state_ready__15TPlyPhotonChairFPv(void* p);
extern const f32 lbl_805E0128;
extern const float lbl_805E012C;
void run_task__15TPlyPhotonChairFv(u8 *arg0);
}

extern "C" {

int TPlyPhotonChair__sub_8035B520(void* p);
void TPlyPhotonChair__sub_8035B56C(void* p, f32 v);
void TPlyPhotonChair__sub_8035B610(void* a0);
void TPlyPhotonChair__sub_8035B66C(void* p);
void *__dt__15TPlyPhotonChairFv(void *arg0, s16 arg1);
void free_instance__15TPlyPhotonChairFv(void);
void free_static_model__15TPlyPhotonChairFv(void);
void *init__15TPlyPhotonChairFPv(void *arg0);
void render__15TPlyPhotonChairFPvPv(void* p, void* a1);
void set_field90__15TPlyPhotonChairFPvs(void* p, s16 v);
void set_field_8__15TPlyPhotonChairFPvi(void* p, s32 v);
void set_state_ready__15TPlyPhotonChairFPv(void* p);
void set_type__15TPlyPhotonChairFPvi(void* p, s32 v);
void sync_field10_from_child__15TPlyPhotonChairFPv(void *arg0);
void TLobby__sub_8001FE7C(void*, int);
void TPlyPhotonChair__sub_8035B630(void *);
void __dl__7TObjectFPv(void *);
int copy_vec4__13TRaderMapCoreFPvPv(void*, void*);
void destroy__11TMainCursorFPvs(void *, int);
void destroy__15TPlyPhotonChairFPvs(void *, int);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

extern u32 TPlyPhotonChair__data_805D6F40;

void run_task__15TPlyPhotonChairFv(u8 *arg0) {
    u32 temp_r0;
    if (TPlayerBattleCtrl4P__sub_801BA74C((int) (TPlyPhotonChair__sub_8035B530((void*)(arg0)))) == 0U) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    if (((u32) M2C_FIELD(arg0, u32 *, 0x94) == 0U) && (is_mounted__15TPlyPhotonChairFPv() == 0)) {
        M2C_FIELD(arg0, u32 *, 0x94) = 1U;
        set_state_ready__15TPlyPhotonChairFPv((void*)((void *) (arg0 + 0x98)));
        TPlyPhotonChair__sub_8035B56C((void*)((void *) (arg0 + 0x98)), (f32) (lbl_805E0128));
        set_state_ready__15TPlyPhotonChairFPv((void*)((void *) (arg0 + 0xB4)));
        TPlyPhotonChair__sub_8035B56C((void*)((void *) (arg0 + 0xB4)), (f32) (lbl_805E0128));
    }
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x94);
    switch ((s32) temp_r0) {
    case 0:
        TPlyPhotonChair__sub_80142874((void *) (arg0 + 0x98));
        TPlyPhotonChair__sub_80142874((void *) (arg0 + 0xB4));
        return;
    case 1:
        TPlyPhotonChair__sub_801427D0((void *) (arg0 + 0x98));
        TPlyPhotonChair__sub_801427D0((void *) (arg0 + 0xB4));
        if (get_float_c__15TPlyPhotonChairFPv((void *) (arg0 + 0x98)) <= (*(const f32 *)&lbl_805E012C)) {
            queue_destruction__7TObjectFv((void *) (arg0));
        }
        return;
    }
}

void free_static_model__15TPlyPhotonChairFv(void) {
    if ((u32) TPlyPhotonChair__data_805D6F40 != 0U) {
        TLobby__sub_8001FE7C((void*)TPlyPhotonChair__data_805D6F40, 1);
        TPlyPhotonChair__data_805D6F40 = 0U;
    }
}

extern M2C_UNK __vt__15TPlyPhotonChair[];

void *__dt__15TPlyPhotonChairFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TPlyPhotonChair;
        destroy__11TMainCursorFPvs((s8 *)arg0 + 0xD0, -1);
        destroy__15TPlyPhotonChairFPvs((s8 *)arg0 + 0xB4, -1);
        destroy__15TPlyPhotonChairFPvs((s8 *)arg0 + 0x98, -1);
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

int TPlyPhotonChair__sub_8035B520(void* p) { return *(u32*)((char*)p + 0x94) == 0; }
u16 TPlyPhotonChair__sub_8035B530(void* p) { return *(u16*)((char*)p + 0x90); }
void set_field90__15TPlyPhotonChairFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x90) = v; }
void render__15TPlyPhotonChairFPvPv(void* p, void* a1) { copy_vec4__13TRaderMapCoreFPvPv(a1, p); }
void TPlyPhotonChair__sub_8035B56C(void* p, f32 v) { *(f32*)((char*)p + 0x14) = v; }
void set_state_ready__15TPlyPhotonChairFPv(void* p) { *(s32*)((char*)p + 0x18) = 2; }

extern const f64 lbl_80479800;

void sync_field10_from_child__15TPlyPhotonChairFPv(void *arg0) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 8);
    if (temp_r4 != NULL) {
        M2C_FIELD(arg0, f32 *, 0x10) = (f32) M2C_FIELD(temp_r4, u32 *, 4);
    }
}

void set_field_8__15TPlyPhotonChairFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x8) = v; }
void set_type__15TPlyPhotonChairFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }

extern M2C_UNK lbl_804A7478[];

void *init__15TPlyPhotonChairFPv(void *arg0) {
    TPlyPhotonChair__sub_8035B630(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x4) = lbl_804A7478;
    TPlyPhotonChair__sub_8035B610((void*)(arg0));
    return arg0;
}

    extern const float lbl_805E012C;
void TPlyPhotonChair__sub_8035B610(void* a0) { *(int*)((char*)a0 + 0x8) = 0; *(float*)((char*)a0 + 0xc) = lbl_805E012C; *(float*)((char*)a0 + 0x10) = lbl_805E012C; *(float*)((char*)a0 + 0x14) = lbl_805E012C; *(int*)((char*)a0 + 0x18) = 0; }

void TPlyPhotonChair__sub_8035B66C(void* p) { *(s32*)((char*)p + 0x0) = 0; }

extern u32 lbl_805D6F48;

void free_instance__15TPlyPhotonChairFv(void) {
    if ((u32) lbl_805D6F48 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D6F48, 1);
        lbl_805D6F48 = 0U;
    }
}

}
