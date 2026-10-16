#include "types.h"
#include "pso/object/TObjVoloptCage.h"
#include "pso/object/TObjFish.h"

extern "C" {

struct TObjVoloptCageBase_8004912C { char pad[0x18]; };
struct TObjVoloptCageVObj_8004912C : TObjVoloptCageBase_8004912C {
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

s32 init_from_model__11TBreakUpMdlFPvi(s32, s32);
s32 post_translate_matrix(void *);
s32 draw_chunk_object(s32);
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
s32 pop_matrix();
s32 alloc__23TAdSinglePlyChrSelectGCFv(s32, void *);
s32 dispatch_shared_handler_a__6TLobbyFl(s32);
s32 register_boss__6TLobbyFl(s32);

extern void *boss3_volopt_resources;
extern s32 lbl_805D4D18;
extern s32 lbl_805D4D1C;
extern s32 volopt_cage_breakup_model;
extern s32 volopt_cage_break_model_handle;

void TObjVoloptCage::init_break_model() {
    s32 var_r0;
    void *temp_r4;

    temp_r4 = *(void **)((s8 *)boss3_volopt_resources + 0x42C);
    volopt_cage_break_model_handle = *(s32 *)((s8 *)temp_r4 + 0x128);
    var_r0 = alloc__23TAdSinglePlyChrSelectGCFv(0x10, temp_r4);
    if (var_r0 != 0) {
        var_r0 = init_from_model__11TBreakUpMdlFPvi(var_r0, volopt_cage_break_model_handle);
    }
    volopt_cage_breakup_model = var_r0;
    lbl_805D4D18 = register_boss__6TLobbyFl(0x26);
    lbl_805D4D1C = dispatch_shared_handler_a__6TLobbyFl(0x26);
}

extern s32 volopt_cage_break_model_handle;
extern s32 TObjVoloptCage__texture_list;
extern s32 model_render_flags;
extern const f32 lbl_805D887C;
extern const f32 lbl_805D8880;

void TObjVoloptCage::render() {
    u8 *arg0 = (u8 *)this;
    if (((TObjVoloptCageVObj_8004912C *)arg0)->m8(lbl_805D887C, lbl_805D8880) != 0) {
        TObjFish::set_global_param(TObjVoloptCage__texture_list);
        push_matrix();
        model_render_flags &= 0xFFFFFBFF;
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, this->rotation_y);
        draw_chunk_object(volopt_cage_break_model_handle);
        pop_matrix();
    }
}

}
