#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct G_801E2DE4 { u8 pad[0xC]; void (*draw)(); };

extern "C" {
void render_matrix_chain__10TObjPlayerFPv(void *arg0);
void bind_motion_context(s32);
void prepare_ginja_model(G_801E2DE4 *);
void end_ginja_model_draw();
void draw_ginja_model_lists();
extern void *model_draw_context;
void draw_ginja_model__10TObjPlayerFPvi(void *arg0, s32 arg1);
}

extern "C" {

void render_matrix_chain__10TObjPlayerFPv(void *arg0);
void render_model_tree__10TObjPlayerFPv(void *arg0);
M2C_UNK GXLoadNrmMtxImm(M2C_UNK *, M2C_UNK);
M2C_UNK GXLoadPosMtxImm(s32, M2C_UNK);
extern M2C_UNK (*model_node_callback)(void *);
M2C_UNK PSMTXInverse(s32, M2C_UNK *);
M2C_UNK PSMTXTranspose(M2C_UNK *, M2C_UNK *);
M2C_UNK apply_motion_node_transform__10TObjPlayerFPv(void *);
M2C_UNK compose_motion_node_matrix(void *);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();

extern void *model_draw_context;
extern s32 current_matrix;

void render_model_tree__10TObjPlayerFPv(void *arg0) {
    M2C_UNK sp38[12];
    M2C_UNK sp8[12];
    void *var_r31;

    var_r31 = arg0;
    do {
        push_matrix();
        apply_motion_node_transform__10TObjPlayerFPv(var_r31);
        if (((M2C_UNK (*)(void *)) model_node_callback) != NULL) {
            model_node_callback(var_r31);
        }
        if (((u32) M2C_FIELD(var_r31, u32 *, 4) != 0U) && !(M2C_FIELD(var_r31, s32 *, 0) & 8)) {
            GXLoadPosMtxImm(current_matrix, 0);
            PSMTXInverse(current_matrix, sp8);
            PSMTXTranspose(sp8, sp38);
            GXLoadNrmMtxImm(sp38, 0);
            M2C_FIELD(model_draw_context, M2C_UNK (**)(u32, void *), 0xC)(M2C_FIELD(var_r31, u32 *, 4), model_draw_context);
        }
        if ((u32) M2C_FIELD(var_r31, u32 *, 0x2C) != 0U) {
            render_model_tree__10TObjPlayerFPv((void *)(M2C_FIELD(var_r31, void **, 0x2C)));
        }
        pop_matrix();
        var_r31 = M2C_FIELD(var_r31, void **, 0x30);
    } while (var_r31 != NULL);
}

extern void *model_draw_context;
extern s32 current_matrix;

void draw_ginja_model__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    G_801E2DE4 *g;
    bind_motion_context(arg1);
    g = (G_801E2DE4 *)model_draw_context;
    g->draw = draw_ginja_model_lists;
    prepare_ginja_model(g);
    render_matrix_chain__10TObjPlayerFPv(arg0);
    end_ginja_model_draw();
}

void render_matrix_chain__10TObjPlayerFPv(void *arg0) {
    M2C_UNK sp38[12];
    M2C_UNK sp8[12];
    void *var_r31;

    var_r31 = arg0;
    do {
        push_matrix();
        compose_motion_node_matrix(var_r31);
        if (((M2C_UNK (*)(void *)) model_node_callback) != NULL) {
            model_node_callback(var_r31);
        }
        if (((u32) M2C_FIELD(var_r31, u32 *, 4) != 0U) && !(M2C_FIELD(var_r31, s32 *, 0) & 8)) {
            GXLoadPosMtxImm(current_matrix, 0);
            PSMTXInverse(current_matrix, sp8);
            PSMTXTranspose(sp8, sp38);
            GXLoadNrmMtxImm(sp38, 0);
            M2C_FIELD(model_draw_context, M2C_UNK (**)(u32, void *), 0xC)(M2C_FIELD(var_r31, u32 *, 4), model_draw_context);
        }
        if ((u32) M2C_FIELD(var_r31, u32 *, 0x2C) != 0U) {
            render_matrix_chain__10TObjPlayerFPv((void *)(M2C_FIELD(var_r31, void **, 0x2C)));
        }
        pop_matrix();
        var_r31 = M2C_FIELD(var_r31, void **, 0x30);
    } while (var_r31 != NULL);
}

}
