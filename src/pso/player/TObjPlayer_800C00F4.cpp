#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_800C00F4 { char pad[0x18]; };
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
#define VA virtual void CAT(f,__LINE__)();
struct VObj_800C00F4 : Base_800C00F4 {
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
    virtual void m48();
};

extern "C" {

void set_boss4_state__10TObjPlayerFPv(void *arg0);
void apply_move_friction__10TObjPlayerFPv(void *arg0);
void handle_death__10TObjPlayerFPv(u8 *arg0);
M2C_UNK TBoss1Dragon__sub_80143504(void *);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
M2C_UNK TObjPlayer__sub_80011734(void *, M2C_UNK, f32);
M2C_UNK TObjPlayer__sub_80017E6C(void *);
M2C_UNK TObjPlayer__sub_800F06B4(M2C_UNK, M2C_UNK);
M2C_UNK query_lobby_state__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_800F6B68(void *);
M2C_UNK TObjPlayer__sub_80154E3C(void *);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
M2C_UNK set_flag_and_notify__10TObjPlayerFPv(void *);
M2C_UNK fn_800C20B0();

extern const f32 lbl_805D9F44;
extern const f32 lbl_805D9F48;

void set_boss4_state__10TObjPlayerFPv(void *arg0) {
    s16 temp_r4;
    s16 temp_r4_2;

    temp_r4 = M2C_FIELD(arg0, s16 *, 0x374);
    if (!(temp_r4 & 2)) {
        temp_r4_2 = temp_r4 | 2;
        M2C_FIELD(arg0, s16 *, 0x374) = temp_r4_2;
        M2C_FIELD(arg0, s16 *, 0x394) = 0;
        M2C_FIELD(arg0, s32 *, 0x390) = (s32) (lbl_805D9F44 * (lbl_805D9F48 * calc_boss4_scale__10TObjPlayerFi(arg0)));
    }
    M2C_FIELD(arg0, s16 *, 0x326) = 1;
    M2C_FIELD(arg0, s16 *, 0x37A) = 3;
    ((struct VObj_800C00F4 *)arg0)->m48();
    M2C_FIELD(arg0, s16 *, 0x32C) = 1;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & ~0xA00);
}

extern const f32 lbl_805D9F24;
extern const f32 lbl_805D9F2C;
extern const f32 lbl_805D9F4C;

void apply_move_friction__10TObjPlayerFPv(void *arg0) {
    fn_800C20B0();
    TBoss1Dragon__sub_80143504(arg0);
    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800000)) {
        TObjPlayer__sub_80011734(arg0, 0, lbl_805D9F4C);
    }
    TObjPlayer__sub_80154E3C(arg0);
    if (M2C_FIELD(arg0, f32 *, 0xC0) < (lbl_805D9F24 * (lbl_805D9F2C * M2C_FIELD(arg0, f32 *, 0xC8)))) {
        TObjPlayer__sub_80017E6C(arg0);
        M2C_FIELD(arg0, f32 *, 0x308) = (f32) (M2C_FIELD(arg0, f32 *, 0x308) * lbl_805D9F24);
        M2C_FIELD(arg0, f32 *, 0x310) = (f32) (M2C_FIELD(arg0, f32 *, 0x310) * lbl_805D9F24);
    }
}

void handle_death__10TObjPlayerFPv(u8 *arg0) {
    s16 temp_r3;

    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFFC0);
    temp_r3 = M2C_FIELD(arg0, s16 *, 0x374);
    if (temp_r3 & 2) {
        if (!(temp_r3 & 4)) {
            M2C_FIELD(arg0, s16 *, 0x374) = (s16) (temp_r3 | 4);
            TBoss3Volopt__sub_8022675C(TObjPlayer__sub_800F06B4(0x3AD13, 5), arg0 + 0x38, 0, 0);
            query_lobby_state__10TObjPlayerFPv(arg0);
            M2C_FIELD(arg0, s16 *, 0xB8) = 8;
        }
    } else if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 5) {
        M2C_FIELD(arg0, s16 *, 0x326) = 5;
        M2C_FIELD(arg0, s16 *, 0xB8) = 7;
        if (!(M2C_FIELD(arg0, s16 *, 0x374) & 0x10)) {
            TBoss3Volopt__sub_8022675C(TObjPlayer__sub_800F06B4(0x3AE10, 5), arg0 + 0x38, 0, 0);
            TObjPlayer__sub_800F6B68(arg0);
            set_flag_and_notify__10TObjPlayerFPv(arg0);
        }
        M2C_FIELD(arg0, s16 *, 0x380) = 0;
    }
}

}
