#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK activate__15TPlyPhotonChairFPv();
extern const f32 lbl_805DB168;
void TPlyPhotonChair__sub_801427D0(u8 *arg0);
M2C_UNK activate__15TPlyPhotonChairFPv();
extern const f32 lbl_805DB16C;
void TPlyPhotonChair__sub_80142874(u8 *arg0);
}

extern "C" {

void TLobby__sub_80142920(void);
int TLobby__sub_80142944(void* p);
void TPlyPhotonChair__sub_80142770(void);
void TPlyPhotonChair__sub_80142774(void);
int TPlyPhotonChair__sub_80142778(void);
void save_state__15TPlyPhotonChairFv(void);
int TObjFish__sub_803E46BC(void);
int get_id__15TPlyPhotonChairFPv(void);

    extern int lbl_805D566C;
    extern int some_id_805c6f74;
void save_state__15TPlyPhotonChairFv(void) { lbl_805D566C = some_id_805c6f74; }

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
