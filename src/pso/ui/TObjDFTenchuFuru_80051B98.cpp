#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK TObjDFTenchuFuru__sub_80051A7C();
M2C_UNK register_callback__16TObjDFTenchuFuruFv();
M2C_UNK sync_player_globals__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_80052390(f32);
u8 *get_player_by_client_id(s32);
M2C_UNK TCharaMaking__draw_colored_hair(int, void *, int, f32);
M2C_UNK clear_flag_bit0__12TCharaMakingFv();
M2C_UNK enable_making__12TCharaMakingFv();
M2C_UNK push_matrix_from(void *);
int pop_matrix(void);
M2C_UNK set_global_param__8TObjFishFi(void *);
M2C_UNK draw_chunk_object(int);
M2C_UNK draw_model_motion(int, void *, f32);
extern M2C_UNK lbl_804FF240[];
extern const f32 lbl_805D8A30;
extern const f32 lbl_805D8A34;
void draw_player_model_by_client__10TObjPlayerFUsiff(u16 arg0, s32 arg1, f32 farg0, f32 farg1);
}

extern "C" {

void render__16TObjDFTenchuFuruFPv(void* a0);
int transform_node_tree__16TObjDFTenchuFuruFPv(void*);
int set_matrix_identity__10TObjPlayerFPv(void*);
int push_matrix(void);
int pop_matrix(void);

    extern int lbl_805D4D78;
void render__16TObjDFTenchuFuruFPv(void* a0) { lbl_805D4D78 = 0; push_matrix(); set_matrix_identity__10TObjPlayerFPv((void*)0); transform_node_tree__16TObjDFTenchuFuruFPv(a0); pop_matrix(); }
void draw_player_model_by_client__10TObjPlayerFUsiff(u16 arg0, s32 arg1, f32 farg0, f32 farg1) {
    u8 *p;
    u32 a;
    u32 b;
    u8 *c;
    u32 d;
    u8 *e;
    s32 f;
    u8 *g;
    if (lbl_805D8A30 == farg1) {
        return;
    }
    if (arg0 == 0xFFFF) {
        return;
    }
    p = get_player_by_client_id(arg0);
    if (p == NULL || M2C_FIELD(p, s32 *, 0xCFC) != 0) {
        return;
    }
    c = p + 0xA1C;
    a = M2C_FIELD(p, u32 *, 0x8B0);
    e = p + 0xB88;
    b = M2C_FIELD(p, u32 *, 0x8AC);
    d = M2C_FIELD(p, u32 *, 0x8B4);
    g = p + 0xCF4;
    f = M2C_FIELD(p, s32 *, 0x34);
    if (farg1 < lbl_805D8A34) {
        TObjPlayer__sub_80052390(farg1);
    }
    set_global_param__8TObjFishFi(g);
    register_callback__16TObjDFTenchuFuruFv();
    draw_model_motion(f, (void *)arg1, farg0);
    TObjDFTenchuFuru__sub_80051A7C();
    if (d != 0) {
        push_matrix_from((u8 *)lbl_804FF240 + 0x30);
        set_global_param__8TObjFishFi(e);
        draw_chunk_object(d);
        pop_matrix();
    }
    if (a != 0) {
        enable_making__12TCharaMakingFv();
        push_matrix_from(lbl_804FF240);
        set_global_param__8TObjFishFi(c);
        draw_chunk_object(a);
        pop_matrix();
        clear_flag_bit0__12TCharaMakingFv();
    }
    if (farg1 < lbl_805D8A34) {
        sync_player_globals__10TObjPlayerFv();
    }
    if (b != 0) {
        enable_making__12TCharaMakingFv();
        push_matrix_from(lbl_804FF240);
        set_global_param__8TObjFishFi(c);
        TCharaMaking__draw_colored_hair(b, p + 0x85C, 0, farg1);
        pop_matrix();
        clear_flag_bit0__12TCharaMakingFv();
    }
}

}
