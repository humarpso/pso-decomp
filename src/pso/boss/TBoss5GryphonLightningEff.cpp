#include "pso/TBoss5GryphonLightningEff.h"

TBoss5GryphonLightningEff::~TBoss5GryphonLightningEff() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Ent_80325248 { u8 b[0xC]; };

struct Obj_80325248 { u8 pad[0x38]; s32 n; u8 pad2[0xD8 - 0x3C]; Ent_80325248 ents[1]; };

extern "C" {
void TOSwitchAttack__sub_80087278(void *, s32, s32);
void run_task__12TTecZondeEffFv(void *);
s32 rand__11TOBoss4RockFv(void);
extern const f32 lbl_805DF5F4;
extern const f32 lbl_805DF5F8;
void run_task__25TBoss5GryphonLightningEffFv(Obj_80325248 *arg0);
}

extern "C" {

void TBoss5GryphonLightningEff__sub_80325064(void* p);
void render__25TBoss5GryphonLightningEffFv(void *arg0);
s32 TBoss5GryphonLightningEff__sub_80325070(void *, void *);
M2C_UNK set_chunk_material_color(void *);
M2C_UNK TTecZondeEff__sub_8023CED4(void *, void *, void *, void *, void *);
M2C_UNK TTecZondeEff__sub_8023D128(void *, void *, void *, void *);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK draw_transformed_primitive__9TWindowDDFPvPvPvPv(void *, s32, s32, M2C_UNK);
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK fn_80141A30();
M2C_UNK init_xyz_limits__10TObjPlayerFv();
M2C_UNK reset_transform_state__10TObjPlayerFv();
M2C_UNK set_depth_buffer_settings_1__Fv();

void TBoss5GryphonLightningEff__sub_80325064(void* p) { *(u8*)((char*)p + 0x260) = 1; }

extern u8 lbl_804A7418[];
extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;

void render__25TBoss5GryphonLightningEffFv(void *arg0) {
    char sp10C[0x270];
    char sp70[0x9C];
    char sp3C[0x34];
    char sp8[0x34];
    s32 temp_r4;

    temp_r4 = some_id_805c6f74;
    lbl_805D5660 = temp_r4;
    some_id_805c6f74 = temp_r4 | 0x10;
    begin_effect_render__13TParticleCtrlFv();
    set_depth_buffer_settings_1__Fv();
    init_xyz_limits__10TObjPlayerFv();
    TTecZondeEff__sub_8023D128(arg0, sp70, sp3C, sp8);
    TTecZondeEff__sub_8023CED4(arg0, sp10C, sp70, sp3C, sp8);
    draw_transformed_primitive__9TWindowDDFPvPvPvPv(sp10C, M2C_FIELD(arg0, s32 *, 0x38) * 2, TBoss5GryphonLightningEff__sub_80325070(arg0, sp10C), 1);
    if ((u8) M2C_FIELD(arg0, u8 *, 0x260) == 1) {
        TTecZondeEff__sub_8023CED4(arg0, sp10C, sp70, sp8, sp3C);
        draw_transformed_primitive__9TWindowDDFPvPvPvPv(sp10C, M2C_FIELD(arg0, s32 *, 0x38) * 2, TBoss5GryphonLightningEff__sub_80325070(arg0, sp10C), 1);
    }
    reset_transform_state__10TObjPlayerFv();
    end_effect_render__13TParticleCtrlFv();
    set_chunk_material_color(lbl_804A7418);
    some_id_805c6f74 = lbl_805D5660;
    fn_80141A30();
}
void run_task__25TBoss5GryphonLightningEffFv(Obj_80325248 *arg0) {
    run_task__12TTecZondeEffFv(arg0);
    if (lbl_805DF5F4 * (f32)rand__11TOBoss4RockFv() > lbl_805DF5F8) {
        s32 i = (f32)arg0->n * (lbl_805DF5F4 * (f32)rand__11TOBoss4RockFv());
        TOSwitchAttack__sub_80087278(&arg0->ents[i], 0x215, 0x40);
    }
    (*(s16 *)((u8 *)arg0 + 0x25C))++;
}

}
