#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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

void init_break_model__14TObjVoloptCageFv(void);
void render__14TObjVoloptCageFv(u8 *arg0);
s32 TBreakUpMdl__sub_8009705C(s32, s32);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjFish__sub_803E46BC(s32);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
s32 alloc__23TAdSinglePlyChrSelectGCFPv(M2C_UNK, void *);
s32 dispatch_shared_handler_a__6TLobbyFPv(M2C_UNK);
s32 register_boss__6TLobbyFPv(M2C_UNK);
M2C_UNK set_global_param__8TObjFishFi(s32);

extern void *lbl_805D4C10;
extern s32 lbl_805D4D18;
extern s32 lbl_805D4D1C;
extern s32 lbl_805D4D20;
extern s32 lbl_805D4D24;

void init_break_model__14TObjVoloptCageFv(void) {
    s32 var_r0;
    void *temp_r4;

    temp_r4 = M2C_FIELD(lbl_805D4C10, void **, 0x42C);
    lbl_805D4D24 = M2C_FIELD(temp_r4, s32 *, 0x128);
    var_r0 = alloc__23TAdSinglePlyChrSelectGCFPv(0x10, temp_r4);
    if (var_r0 != 0) {
        var_r0 = TBreakUpMdl__sub_8009705C(var_r0, lbl_805D4D24);
    }
    lbl_805D4D20 = var_r0;
    lbl_805D4D18 = register_boss__6TLobbyFPv(0x26);
    lbl_805D4D1C = dispatch_shared_handler_a__6TLobbyFPv(0x26);
}

extern s32 lbl_805D4D24;
extern s32 TObjVoloptCage__data_805D4D28;
extern s32 some_id_805c6f74;
extern const f32 lbl_805D887C;
extern const f32 lbl_805D8880;

void render__14TObjVoloptCageFv(u8 *arg0) {
    if (((TObjVoloptCageVObj_8004912C *)arg0)->m8(lbl_805D887C, lbl_805D8880) != 0) {
        set_global_param__8TObjFishFi(TObjVoloptCage__data_805D4D28);
        TObjPlayer__sub_803D9B2C();
        some_id_805c6f74 &= 0xFFFFFBFF;
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        TObjFish__sub_803E46BC(lbl_805D4D24);
        pop_matrix();
    }
}

}
