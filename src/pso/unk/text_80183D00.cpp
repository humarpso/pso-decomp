#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_26a62c { char pad[0x18]; };

struct VObj_18_26a62c : VBase_18_26a62c {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

struct RecoveredGlobal_80183D4C_lbl_8050DC50 { M2C_UNK value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_80183D4C_lbl_8050DC50_size[sizeof(RecoveredGlobal_80183D4C_lbl_8050DC50) == 0x18 ? 1 : -1];

struct RecoveredGlobal_80183D00_lbl_804B5CC4 {
    M2C_UNK value;
    u8 remaining[0x38];
};

extern "C" {
s32 advance_anim_time__25TObjCity_Season_EasterEggFPvif(void *, s32, f32);
extern const f32 lbl_805DBC5C;
void fn_80183E08(u8 *arg0);
M2C_UNK scroll_strip_uvs(void *, int, int);
u8 *get_anim_frame__25TObjCity_Season_EasterEggFPv();
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK draw_chunk_object(void *);
M2C_UNK draw_model_motion(void *, void *, f32);
extern RecoveredGlobal_80183D4C_lbl_8050DC50 lbl_8050DC50;
extern s32 lbl_805D5B34;
extern const f32 lbl_805DBC44;
extern const f32 lbl_805DBC60;
void fn_80183D4C(u8 *arg0);
s32 init_city_season_object(void *, void *, void *, int, f32);
extern RecoveredGlobal_80183D00_lbl_804B5CC4 lbl_804B5CC4;
extern s32 lbl_805D3280;
extern const f32 lbl_805DBC38;
u8 *TObjCity_Season_SonicAdv2__ct(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

typedef char RecoveredGlobal_80183D00_lbl_804B5CC4_size[sizeof(RecoveredGlobal_80183D00_lbl_804B5CC4) == 0x3C ? 1 : -1];
u8 *TObjCity_Season_SonicAdv2__ct(u8 *arg0, s32 arg1, s32 arg2) {
    init_city_season_object((void *) (arg0), (void *) (arg1), (void *) (arg2), (int) (5), (f32) (lbl_805DBC38));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804B5CC4.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3280;
    return arg0;
}

void fn_80183D4C(u8 *arg0) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(get_anim_frame__25TObjCity_Season_EasterEggFPv());
    if (temp_r3 != NULL) {
        if (((VObj_18_26a62c *)(arg0))->m8(lbl_805DBC44, lbl_805DBC60) != 0) {
            set_global_param__8TObjFishFi((int) (M2C_FIELD(&lbl_8050DC50.value, s32 *, 0x10)));
            scroll_strip_uvs((void *) (lbl_805D5B34), (int) (0), (int) ((s16) M2C_FIELD(arg0, s32 *, 0xB4)));
            push_matrix();
            post_translate_matrix((void *) (arg0 + 0x38));
            rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
            draw_chunk_object((void *) (M2C_FIELD(M2C_FIELD(temp_r3, u8 **, 0x42C), s32 *, 0x18)));
            draw_model_motion((void *) (M2C_FIELD(M2C_FIELD(temp_r3, u8 **, 0x42C), s32 *, 8)), (void *) (M2C_FIELD(M2C_FIELD(temp_r3, u8 **, 0x430), s32 *, 4)), (f32) (M2C_FIELD(arg0, f32 *, 0xB0)));
            pop_matrix();
        }
    }
}

void fn_80183E08(u8 *arg0) {
    s32 temp_r3;
    if (advance_anim_time__25TObjCity_Season_EasterEggFPvif(arg0, 0, lbl_805DBC5C) != 0) {
        M2C_FIELD(arg0, s32 *, 0xB4) = (s32) (M2C_FIELD(arg0, s32 *, 0xB4) + 2);
        temp_r3 = M2C_FIELD(arg0, s32 *, 0xB4);
        if (temp_r3 >= 0xFF) {
            M2C_FIELD(arg0, s32 *, 0xB4) = (s32) (temp_r3 - 0xFF);
        }
    }
}

}
