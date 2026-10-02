#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Fn801838D4Base_801838d4 { char pad[0x18]; };
struct Fn801838D4VObj_801838d4 : Fn801838D4Base_801838d4 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {

void TObjCity_Season_Board__sub_80183970(void *arg0);
void draw_model__6TLobbyFPv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK draw_chunk_object(s32);
M2C_UNK scroll_strip_uvs(s32, s16, M2C_UNK);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK set_global_param__8TObjFishFi(s32);

extern u32 lbl_805D5B38;
extern s32 lbl_805D5B3C;
extern s32 lbl_805D5B40;
extern s32 lbl_805D5B44;
extern s32 lbl_805D5B48;
extern const f32 lbl_805DBC44;
extern const f32 lbl_805DBC48;

void draw_model__6TLobbyFPv(u8 *arg0) {
    if (((u32) lbl_805D5B38 != 0U) && (((Fn801838D4VObj_801838d4*)arg0)->m8(lbl_805DBC44, lbl_805DBC48) != 0)) {
        set_global_param__8TObjFishFi(lbl_805D5B44);
        scroll_strip_uvs(lbl_805D5B48, (s16) M2C_FIELD(arg0, s32 *, 0x90), 0);
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        draw_chunk_object(lbl_805D5B3C);
        draw_chunk_object(lbl_805D5B40);
        pop_matrix();
    }
}

void TObjCity_Season_Board__sub_80183970(void *arg0) {
    s32 temp_r4;

    M2C_FIELD(arg0, s32 *, 0x90) = (s32) (M2C_FIELD(arg0, s32 *, 0x90) + 2);
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x90);
    if (temp_r4 >= 0x100) {
        M2C_FIELD(arg0, s32 *, 0x90) = (s32) (temp_r4 - 0x100);
    }
}

}
