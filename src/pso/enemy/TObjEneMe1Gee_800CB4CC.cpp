#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneMe1Gee__sub_800CB4DC(u8 *arg0);
void TObjEneMe1Gee__sub_800CB560(u8 *arg0);
s32 TObjEneMe1Gee__sub_800CB584(u8 *arg0);
u8 TObjEneMe1Gee__sub_800CB5A0(u8 *arg0, s32 arg1);
void TObjEneMe1Gee__sub_800CB5B8(u8 *arg0);
void TObjEneMe1Gee__sub_800CB5D4(u8 *arg0);
void TObjEneMe1Gee__sub_800CB5F0(u8 *arg0);
void TObjEneMe1Gee__sub_800CB60C(u8 *arg0);
int TObjEneMe1Gee__sub_800CB628(void* p);
int TObjEneMe1Gee__vt107(void);
void TObjEneMe1Gee__vt111(void *arg0);
int TObjEneMe1Gee__vt114(void);
void TObjEneMe1Gee__vt115(void);
void set_flag3c8_bit2__13TObjEneMe1GeeFPv(void* p);
void set_flag3c8_bit40__13TObjEneMe1GeeFPv(void* p);
void set_flag3c8_bit4__13TObjEneMe1GeeFPv(void* p);
void set_flag3c8_bit8__13TObjEneMe1GeeFPv(void* p);
void set_state_flag__13TObjEneMe1GeeFPvii(void *arg0, s32 arg1, s32 arg2);
void update_photon_target__13TObjEneMe1GeeFPv(void *arg0);
s32 TBoss2DeRolLe__sub_800B98D8();
s32 TPhotonMylla__sub_80154CB4(u16);

void set_flag3c8_bit40__13TObjEneMe1GeeFPv(void* p) { *(u32*)((char*)p + 0x3c8) |= 0x40; }

void TObjEneMe1Gee__sub_800CB4DC(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) | 0x100000 | 4);
}

void set_flag3c8_bit8__13TObjEneMe1GeeFPv(void* p) { *(u32*)((char*)p + 0x3c8) |= 0x8; }
void set_flag3c8_bit4__13TObjEneMe1GeeFPv(void* p) { *(u32*)((char*)p + 0x3c8) |= 0x4; }
void set_flag3c8_bit2__13TObjEneMe1GeeFPv(void* p) { *(u32*)((char*)p + 0x3c8) |= 0x2; }
void set_state_flag__13TObjEneMe1GeeFPvii(void *arg0, s32 arg1, s32 arg2) {
    TBoss2DeRolLe__sub_800B98D8();
    M2C_FIELD(arg0, s32 *, 0x404) = arg2;
    M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) | 1);
}

void TObjEneMe1Gee__sub_800CB560(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x404) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) | 1);
}

int TObjEneMe1Gee__vt114(void) { return 1; }
void TObjEneMe1Gee__vt115(void) {  }

s32 TObjEneMe1Gee__sub_800CB584(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x3C8) & 0x40000) {
        return M2C_FIELD(arg0, s32 *, 0x390);
    }
    return 0;
}

u8 TObjEneMe1Gee__sub_800CB5A0(u8 *arg0, s32 arg1) {
    return (u8) ((M2C_FIELD(arg0, s32 *, 0x3C8) & arg1) != 0);
}

void TObjEneMe1Gee__sub_800CB5B8(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) | 0x200);
    M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) & 0xFFFFFEFF);
}

void TObjEneMe1Gee__sub_800CB5D4(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) | 0x100);
    M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) & 0xFFFFFDFF);
}

void TObjEneMe1Gee__sub_800CB5F0(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) | 0x04000000);
    M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) & 0xFDFFFFFF);
}

void TObjEneMe1Gee__sub_800CB60C(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) | 0x02000000);
    M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) & 0xFBFFFFFF);
}

int TObjEneMe1Gee__sub_800CB628(void* p) { return (*(u32*)((char*)p + 0x3c8) >> 15) & 0x1; }
void update_photon_target__13TObjEneMe1GeeFPv(void *arg0) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) == 3) {
        M2C_FIELD(arg0, s32 *, 0x3C0) = TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0x48C));
        TObjEneMe1Gee__sub_800CB560((u8 *)((void*)(M2C_FIELD(arg0, s32 *, 0x3C0))));
    }
}
int TObjEneMe1Gee__vt107(void) { return 1; }

extern s32 *lbl_805D51C8;

void TObjEneMe1Gee__vt111(void *arg0) {
    if ((s32 *) lbl_805D51C8 != NULL) {
        *lbl_805D51C8 = M2C_FIELD(arg0, s32 *, 0x478);
    }
}

}
