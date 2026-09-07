#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801426DC_lbl_8050BFF0 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_801426DC_lbl_8058D4C0 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_80142734_lbl_8050BFF0 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_80142734_lbl_8058D4C0 {
    M2C_UNK value;
    u8 remaining[0xC];
};

extern "C" {
extern s32 some_id_805c6f74;
void TPlyPhotonChair__sub_801426C0(s32 arg0, s32 arg1);
    extern int lbl_805D566C;
extern s32 some_id_805c6f74;
void restore_state__15TPlyPhotonChairFv(s32 _w0);
    extern int lbl_805D5670;
    extern int lbl_805D5674;
    extern int lbl_805D7780;
    extern int lbl_805D7784;
int TPlyPhotonChair__sub_8014270C(s32 _w0);
extern int lbl_805D5670;
extern int lbl_805D5674;
extern int lbl_805D7780;
extern int lbl_805D7784;
int TPlyPhotonChair__sub_80142720(s32 _w0);
extern int lbl_805D566C;
extern s32 some_id_805c6f74;
void save_state__15TPlyPhotonChairFv(s32 _w0);
void TPlyPhotonChair__sub_80142770(void);
void TPlyPhotonChair__sub_80142774(void);
int TPlyPhotonChair__sub_80142778(void);
M2C_UNK activate__15TPlyPhotonChairFPv();
extern const f32 lbl_805DB168;
M2C_UNK activate__15TPlyPhotonChairFPv();
void TPlyPhotonChair__sub_801427D0(u8 *arg0);
M2C_UNK activate__15TPlyPhotonChairFPv();
extern const f32 lbl_805DB16C;
void TPlyPhotonChair__sub_80142874(u8 *arg0);
int TObjFish__sub_803E46BC(void);
int get_id__15TPlyPhotonChairFPv(void);
void TLobby__sub_80142920(void);
int TLobby__sub_80142944(void* p);
s32 copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
extern RecoveredGlobal_801426DC_lbl_8050BFF0 lbl_8050BFF0;
extern RecoveredGlobal_801426DC_lbl_8058D4C0 lbl_8058D4C0;
void TPlyPhotonChair__sub_801426DC(s32 _w0);
s32 copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
extern RecoveredGlobal_801426DC_lbl_8050BFF0 lbl_8050BFF0;
extern RecoveredGlobal_801426DC_lbl_8058D4C0 lbl_8058D4C0;
void TPlyPhotonChair__sub_80142734(s32 _w0);
}

extern "C" {

void play_sound__15TPlyPhotonChairFPv(void* p);
void play_sound_with_arg__15TPlyPhotonChairFPvPv(void* p, void* a1);
void update_parts2__15TPlyPhotonChairFPv(void* p);
void update_parts__15TPlyPhotonChairFPv(void* p);
int TObjPlayer__sub_803DED84(void*);
int set_global_pair__10TObjPlayerFii(void*, void*);

void play_sound_with_arg__15TPlyPhotonChairFPvPv(void* p, void* a1) { TPlyPhotonChair__sub_801426C0((s32)(p), (s32)((void*)2064)); set_global_pair__10TObjPlayerFii((void*)-1, (void*)2048); TObjPlayer__sub_803DED84(a1); }

void play_sound__15TPlyPhotonChairFPv(void* p) { TPlyPhotonChair__sub_801426C0((s32)(p), (s32)((void*)2064)); set_global_pair__10TObjPlayerFii((void*)-1, (void*)2048); TObjPlayer__sub_803DED84(p); }

void update_parts__15TPlyPhotonChairFPv(void* p) { TPlyPhotonChair__sub_8014270C((s32)(p)); TPlyPhotonChair__sub_801426DC((s32)(p)); restore_state__15TPlyPhotonChairFv((s32)(p)); }

void update_parts2__15TPlyPhotonChairFPv(void* p) { save_state__15TPlyPhotonChairFv((s32)(p)); TPlyPhotonChair__sub_80142734((s32)(p)); TPlyPhotonChair__sub_80142720((s32)(p)); }
#pragma push
#pragma scheduling off
void TPlyPhotonChair__sub_801426C0(s32 arg0, s32 arg1) {
    some_id_805c6f74 |= arg1;
}
#pragma pop

void restore_state__15TPlyPhotonChairFv(s32 _w0) { (*(int *)&some_id_805c6f74) = lbl_805D566C; }

typedef char RecoveredGlobal_801426DC_lbl_8050BFF0_size[sizeof(RecoveredGlobal_801426DC_lbl_8050BFF0) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_801426DC_lbl_8058D4C0_size[sizeof(RecoveredGlobal_801426DC_lbl_8058D4C0) == 0x10 ? 1 : -1];
void TPlyPhotonChair__sub_801426DC(s32 _w0) {
    copy_vec4__13TRaderMapCoreFPvPv((void *) (&lbl_8058D4C0.value), (void *) (&lbl_8050BFF0.value));
}

int TPlyPhotonChair__sub_8014270C(s32 _w0) { lbl_805D7784 = lbl_805D5670; lbl_805D7780 = lbl_805D5674; return lbl_805D5670; }
int TPlyPhotonChair__sub_80142720(s32 _w0) { lbl_805D5670 = lbl_805D7784; lbl_805D5674 = lbl_805D7780; return lbl_805D7784; }

typedef char RecoveredGlobal_80142734_lbl_8050BFF0_size[sizeof(RecoveredGlobal_80142734_lbl_8050BFF0) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_80142734_lbl_8058D4C0_size[sizeof(RecoveredGlobal_80142734_lbl_8058D4C0) == 0x10 ? 1 : -1];
void TPlyPhotonChair__sub_80142734(s32 _w0) {
    copy_vec4__13TRaderMapCoreFPvPv((void *) (&(*(RecoveredGlobal_80142734_lbl_8050BFF0 *)&lbl_8050BFF0).value), (void *) (&(*(RecoveredGlobal_80142734_lbl_8058D4C0 *)&lbl_8058D4C0).value));
}

void save_state__15TPlyPhotonChairFv(s32 _w0) { lbl_805D566C = (*(int *)&some_id_805c6f74); }
void TPlyPhotonChair__sub_80142770(void) {  }
void TPlyPhotonChair__sub_80142774(void) {  }
int TPlyPhotonChair__sub_80142778(void) { return 0; }
void TPlyPhotonChair__sub_801427D0(u8 *arg0) {
    f32 var_f31;
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x18);
    var_f31 = M2C_FIELD(arg0, f32 *, 0xC) - M2C_FIELD(arg0, f32 *, 0x14);
    switch (temp_r0) {
    case 0:
        if (var_f31 < lbl_805DB168) {
            var_f31 += M2C_FIELD(arg0, f32 *, 0x10);
        }
        M2C_FIELD(arg0, f32 *, 0xC) = var_f31;
        return;
    case 2:
        if (var_f31 <= lbl_805DB168) {
            var_f31 = lbl_805DB168;
            activate__15TPlyPhotonChairFPv();
        }
        M2C_FIELD(arg0, f32 *, 0xC) = var_f31;
    case 1:
        return;
    }
}
void TPlyPhotonChair__sub_80142874(u8 *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 var_f31;
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x18);
    var_f31 = M2C_FIELD(arg0, f32 *, 0xC) + M2C_FIELD(arg0, f32 *, 0x14);
    switch (temp_r0) {
    case 0:
        temp_f0 = M2C_FIELD(arg0, f32 *, 0x10);
        if (var_f31 >= temp_f0) {
            var_f31 -= temp_f0;
        }
        M2C_FIELD(arg0, f32 *, 0xC) = var_f31;
        return;
    case 2:
        temp_f0_2 = M2C_FIELD(arg0, f32 *, 0x10) - lbl_805DB16C;
        if (var_f31 >= temp_f0_2) {
            var_f31 = temp_f0_2;
            activate__15TPlyPhotonChairFPv();
        }
        M2C_FIELD(arg0, f32 *, 0xC) = var_f31;
    case 1:
        return;
    }
}
void TLobby__sub_80142920(void) { get_id__15TPlyPhotonChairFPv(); TObjFish__sub_803E46BC(); }
int TLobby__sub_80142944(void* p) { return (*(u32*)((char*)p + 0xb0) >> 4) & 0x1; }

}
