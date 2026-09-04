#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TObjEneMe1CanadinLeader__sub_8009E258(u8 *arg0);
u8 TObjEneMe1CanadinLeader__sub_8009E31C(u8 *arg0, s32 arg1);
void TObjEneMe1CanadinLeader__sub_8009E334(u8 *arg0);
void TObjEneMe1CanadinLeader__sub_8009E350(u8 *arg0);
}

extern "C" {

void TObjEneMe1CanadinLeader__sub_8009E27C(void* p);
int TObjEneMe1CanadinLeader__sub_8009E36C(void* p);
int TObjEneMe1Canadin__vt107(void);
void TObjEneMe1Canadin__vt111(void *arg0);
int TObjEneMe1Canadin__vt114(void);
void TObjEneMe1Canadin__vt115(void);
int fn_8009E2DC(void* a0 = 0);
int fn_8009E300(void);
void fn_8009E378(void *arg0);
void set_attack_flag__23TObjEneMe1CanadinLeaderFPv(void* p);
void set_flag3c8_bit20__23TObjEneMe1CanadinLeaderFPv(void* p);
void set_flag3c8_bit40__23TObjEneMe1CanadinLeaderFPv(void* p);
void set_flag3c8_bit8__23TObjEneMe1CanadinLeaderFPv(void* p);
void set_leader_index__23TObjEneMe1CanadinLeaderFPvii(void *arg0, s32 arg1, s32 arg2);
s32 TBoss2DeRolLe__sub_800B98D8(void *);
s32 TPhotonMylla__sub_80154CB4(u16);

void set_flag3c8_bit40__23TObjEneMe1CanadinLeaderFPv(void* p) { *(u32*)((char*)p + 0x3c8) |= 0x40; }
void set_flag3c8_bit20__23TObjEneMe1CanadinLeaderFPv(void* p) { *(u32*)((char*)p + 0x3c8) |= 0x20; }

void TObjEneMe1CanadinLeader__sub_8009E258(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) | 0x100000 | 4);
}

void set_flag3c8_bit8__23TObjEneMe1CanadinLeaderFPv(void* p) { *(u32*)((char*)p + 0x3c8) |= 0x8; }

void TObjEneMe1CanadinLeader__sub_8009E27C(void* p) { *(u32*)((char*)p + 0x3c8) |= 0x4; }
void set_attack_flag__23TObjEneMe1CanadinLeaderFPv(void* p) { *(u32*)((char*)p + 0x3c8) |= 0x2; }

void set_leader_index__23TObjEneMe1CanadinLeaderFPvii(void *arg0, s32 arg1, s32 arg2) {
    TBoss2DeRolLe__sub_800B98D8(arg0);
    M2C_FIELD(arg0, s32 *, 0x400) = arg2;
    M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) | 1);
}

int fn_8009E2DC(void* a0) { return 0; }

int TObjEneMe1Canadin__vt114(void) { return 1; }
void TObjEneMe1Canadin__vt115(void) {  }

int fn_8009E300(void) { return 0; }

u8 TObjEneMe1CanadinLeader__sub_8009E31C(u8 *arg0, s32 arg1) {
    return (u8) ((M2C_FIELD(arg0, s32 *, 0x3C8) & arg1) != 0);
}

void TObjEneMe1CanadinLeader__sub_8009E334(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) | 0x200);
    M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) & 0xFFFFFEFF);
}

void TObjEneMe1CanadinLeader__sub_8009E350(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) | 0x100);
    M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) & 0xFFFFFDFF);
}

int TObjEneMe1CanadinLeader__sub_8009E36C(void* p) { return (*(u32*)((char*)p + 0x3c8) >> 15) & 0x1; }

void fn_8009E378(void *arg0) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) == 2) {
        M2C_FIELD(arg0, s32 *, 0x3C0) = TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0x4C8));
        fn_8009E2DC((void*)((void*)(M2C_FIELD(arg0, s32 *, 0x3C0))));
    }
}
int TObjEneMe1Canadin__vt107(void) { return 1; }

extern s32 *lbl_805D4FEC;
extern s32 *lbl_805D4FF0;

void TObjEneMe1Canadin__vt111(void *arg0) {
    *lbl_805D4FEC = M2C_FIELD(arg0, s32 *, 0x4B4);
    *lbl_805D4FF0 = M2C_FIELD(arg0, s32 *, 0x4B4);
}

}
