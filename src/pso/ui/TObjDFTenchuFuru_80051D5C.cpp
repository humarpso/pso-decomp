#include "types.h"
#include "pso/misc/CharacterAppearance.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK render__16TObjDFTenchuFuruFPv(u32);
M2C_UNK sync_player_globals__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_80052390(f32);
u8 *get_player_by_client_id(s32);
M2C_UNK clear_flag_bit0__12TCharaMakingFv();
M2C_UNK enable_making__12TCharaMakingFv();
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(M2C_UNK *);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK draw_chunk_object(u32);
extern M2C_UNK lbl_804FF228[];
extern M2C_UNK lbl_804FF234[];
extern const f32 lbl_805D8A30;
extern const f32 lbl_805D8A34;

void boss6type2_draw_models(s32 arg0, s32 arg1, s32 arg2, u32 arg3, u32 arg4, u32 arg5, u32 arg6, s32 arg7, f32 farg0) {
    if (lbl_805D8A30 != farg0) {
        render__16TObjDFTenchuFuruFPv(arg3);
        if (farg0 < lbl_805D8A34) {
            TObjPlayer__sub_80052390(farg0);
        }
        set_global_param__8TObjFishFi(arg0);
        draw_chunk_object(arg3);
        if (arg6 != 0U) {
            push_matrix();
            post_translate_matrix(lbl_804FF234);
            set_global_param__8TObjFishFi(arg2);
            draw_chunk_object(arg6);
            pop_matrix();
        }
        if (arg4 != 0U) {
            enable_making__12TCharaMakingFv();
            push_matrix();
            post_translate_matrix(lbl_804FF228);
            set_global_param__8TObjFishFi(arg1);
            draw_chunk_object(arg4);
            pop_matrix();
            clear_flag_bit0__12TCharaMakingFv();
        }
        if (farg0 < lbl_805D8A34) {
            sync_player_globals__10TObjPlayerFv();
        }
        if (arg5 != 0U) {
            enable_making__12TCharaMakingFv();
            push_matrix();
            post_translate_matrix(lbl_804FF228);
            set_global_param__8TObjFishFi(arg1);
            TCharaMaking__draw_colored_hair(farg0, (s32)arg5, (CharacterAppearanceFields *)arg7, 0);
            pop_matrix();
            clear_flag_bit0__12TCharaMakingFv();
        }
    }
}

void TObjPlayer__sub_80051E9C(s32 arg0, f32 farg0) {
    u8 *p;
    u32 m8b0;
    u32 m8ac;
    s32 a1c;
    u32 m8b4;
    s32 b88;
    u32 m34;
    s32 cf4;

    if (lbl_805D8A30 == farg0) {
        return;
    }
    if ((u16)arg0 == 0xFFFF) {
        return;
    }
    p = get_player_by_client_id((u16)arg0);
    if (p == NULL || M2C_FIELD(p, s32 *, 0xCFC) != 0) {
        return;
    }
    m34 = M2C_FIELD(p, u32 *, 0x34);
    a1c = (s32)(p + 0xA1C);
    m8b0 = M2C_FIELD(p, u32 *, 0x8B0);
    b88 = (s32)(p + 0xB88);
    m8ac = M2C_FIELD(p, u32 *, 0x8AC);
    m8b4 = M2C_FIELD(p, u32 *, 0x8B4);
    cf4 = (s32)(p + 0xCF4);
    render__16TObjDFTenchuFuruFPv(m34);
    if (farg0 < lbl_805D8A34) {
        TObjPlayer__sub_80052390(farg0);
    }
    set_global_param__8TObjFishFi(cf4);
    draw_chunk_object(m34);
    if (m8b4 != 0U) {
        push_matrix();
        post_translate_matrix(lbl_804FF234);
        set_global_param__8TObjFishFi(b88);
        draw_chunk_object(m8b4);
        pop_matrix();
    }
    if (m8b0 != 0U) {
        enable_making__12TCharaMakingFv();
        push_matrix();
        post_translate_matrix(lbl_804FF228);
        set_global_param__8TObjFishFi(a1c);
        draw_chunk_object(m8b0);
        pop_matrix();
        clear_flag_bit0__12TCharaMakingFv();
    }
    if (farg0 < lbl_805D8A34) {
        sync_player_globals__10TObjPlayerFv();
    }
    if (m8ac != 0U) {
        enable_making__12TCharaMakingFv();
        push_matrix();
        post_translate_matrix(lbl_804FF228);
        set_global_param__8TObjFishFi(a1c);
        TCharaMaking__draw_colored_hair(farg0, (s32)m8ac, (CharacterAppearanceFields *)(p + 0x85C), 0);
        pop_matrix();
        clear_flag_bit0__12TCharaMakingFv();
    }
}

}
