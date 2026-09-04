#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TObjPlayer__sub_800A3478(void *arg0, s16 arg1);
void clear_counter__10TObjPlayerFPv(void* p);
int is_flag_set_388_bit26__10TObjPlayerFPv(void* p);
void set_cancel_flag__10TObjPlayerFPv(void* p);
void set_fields_24_34_from_global__10TObjPlayerFPvPv(void* a0, void* a1);
void update_projectile_lifetime__10TObjPlayerFPv(u8 *arg0);
M2C_UNK TBoss4Zako__sub_803D8910(void *, void *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
int TObjFish__sub_8001EDB0(void*, void*);
int TObjFish__sub_8001EDC4(void*);
s32 TObjPlayer__sub_800A3290(void *, int);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK copy_pos__11TNowLoadingFPvPv(void *, void *);
M2C_UNK destroy_particle_controller__10TObjPlayerFPvs(void *, M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(void *);

int is_flag_set_388_bit26__10TObjPlayerFPv(void* p) { return (*(u32*)((char*)p + 0x388) >> 26) & 0x1; }

    extern int lbl_805D500C;
void set_fields_24_34_from_global__10TObjPlayerFPvPv(void* a0, void* a1) { *(int*)((char*)a0 + 0x34) = TObjFish__sub_8001EDC4((void*)(lbl_805D500C)); *(int*)((char*)a0 + 0x24) = TObjFish__sub_8001EDB0((void*)(lbl_805D500C), a1); }

void clear_counter__10TObjPlayerFPv(void* p) { *(s32*)((char*)p + 0x340) = 0; }
void set_cancel_flag__10TObjPlayerFPv(void* p) { *(s32*)((char*)p + 0x340) = 1; }

void update_projectile_lifetime__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r0;

    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x44), (void *) (arg0 + 0x38));
    TBoss4Zako__sub_803D8910((void *) (arg0 + 0x38), (void *) (arg0 + 0xAC));
    {
        void *p = (void *) M2C_FIELD(arg0, void **, 0xD0);
        if (p != NULL) {
            copy_pos__11TNowLoadingFPvPv(p, (void *) (arg0 + 0x38));
        }
    }
    if (TObjPlayer__sub_800A3290((void *) (arg0), (int) (M2C_FIELD(arg0, u16 *, 0xC8))) != 0) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC4) - 1;
    M2C_FIELD(arg0, s32 *, 0xC4) = temp_r0;
    if (temp_r0 <= 0) {
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}

extern M2C_UNK lbl_804909C4[];

void *TObjPlayer__sub_800A3478(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804909C4;
        TObjEneGibbles__sub_80156720(arg0);
        if ((u32) M2C_FIELD(arg0, u32 *, 0xD0) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xD0));
        }
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
