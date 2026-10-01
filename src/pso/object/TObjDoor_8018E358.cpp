#include "types.h"
#include "pso/object/TObjDoor.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Node_8018E358 { s32 pad0; void *f4; };
struct Glob_8018E358 { s32 f0; s32 pad4; s32 pad8; Node_8018E358 *a; Node_8018E358 *b; };
struct Door_8018E358 { u8 pad0[0x38]; u8 f38[0x28]; s32 f60; u8 pad64[0x50]; f32 fB4; };

typedef s32 M2C_UNK;
struct DoorMotionHeader;
struct Color_8018E40C { f32 a; f32 r; f32 g; f32 b; };

struct Node_8018E40C { s32 pad0; void *f4; };

struct Glob_8018E40C { s32 f0; s32 pad4; Node_8018E40C *c; Node_8018E40C *a; Node_8018E40C *b; };

struct Door_8018E40C { u8 pad0[0x38]; u8 f38[0x28]; s32 f60; u8 pad64[0x50]; f32 fB4; u8 padB8[0xC]; f32 fC4; u8 padC8[8]; s32 fD0; };

struct Color_8018E5F4 { f32 a; f32 r; f32 g; f32 b; };

struct Node_8018E5F4 { s32 pad0; void *f4; };

struct Glob_8018E5F4 { s32 f0; s32 pad4; Node_8018E5F4 *c; Node_8018E5F4 *a; Node_8018E5F4 *b; };

struct Door_8018E5F4 { u8 pad0[0x38]; u8 f38[0x28]; s32 f60; u8 pad64[0x50]; f32 fB4; u8 padB8[0xC]; f32 fC4; u8 padC8[8]; s32 fD0; };

struct Color_8018E74C { f32 a; f32 r; f32 g; f32 b; };

struct Node_8018E74C { s32 pad0; void *f4; };

struct Glob_8018E74C { s32 f0; s32 f4; Node_8018E74C *c; Node_8018E74C *a; Node_8018E74C *b; };

struct Door_8018E74C { u8 pad0[0x38]; u8 f38[0x28]; s32 f60; u8 pad64[0x50]; f32 fB4; f32 fB8; u8 padBC[0x8]; f32 fC4; u8 padC8[8]; s32 fD0; };

extern "C" {
void begin_effect_render__13TParticleCtrlFv();
void end_effect_render__13TParticleCtrlFv();
void free_children__12TObjDoorJungFPvPv(void *, int);
void rotate_matrix_y(int, int);
void TObjPlayer__sub_803D9B2C();
void TObjPlayer__sub_803D9B78();
void TOHangerMachine01__sub_803D9C00(void *);
void set_global_param__8TObjFishFi(int);
void TObjBoss2Tunnel__sub_803DB470(void *);
void TObjDoor__sub_803DC894(int, int, void *, f32);
extern Glob_8018E358 TObjDoor__data_8050DC80[];
void TObjDoor__sub_8018E8BC(void);
f32 TBoss8Dragon__sub_803D64C0(s32);
extern const f32 lbl_805DBDD0;
extern const f32 lbl_805DBDD4;
void update_anim__8TObjDoorFPv(void *arg0);
f32 fn_801315A0(void *, void *);
M2C_UNK TParticleCtrl__sub_803D8D1C(int, void *, void *);
extern s32 lbl_805D4DF0;
extern const f32 lbl_805DBDDC;
s32 TObjDoor__sub_8018EA2C(s32 arg0, f32 farg0, f32 farg1);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK destroy_particle_controller__10TObjPlayerFPvs(void *, M2C_UNK);
extern M2C_UNK __vt__8TObjDoor[];
void *__dt__8TObjDoorFv(void *arg0, s16 arg1);
void *TObjDoor__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);
extern void *tl_05;
void *TObjDoor__create(void *arg0);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);
extern s32 TObjDoor__data_805D5BC0;
extern u32 lbl_805D5BC4;
void free_resources__8TObjDoorFv(void);
void *TObjDoorJung__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);
extern void *tl_05;
void *TObjDoorJung__create(void *arg0);
extern const f32 lbl_805DBDC0;
extern const f32 TObjDoor__data_805DBDC4;
void TObjDoor__sub_8018E894(u8 *arg0);
void begin_effect_render__13TParticleCtrlFv();
void end_effect_render__13TParticleCtrlFv();
void free_children__12TObjDoorJungFPvPv(void *, int);
void rotate_matrix_y(int, int);
void TObjPlayer__sub_803D9B2C();
void TObjPlayer__sub_803D9B78();
void TOHangerMachine01__sub_803D9C00(void *);
void set_global_param__8TObjFishFi(int);
void TObjBoss2Tunnel__sub_803DB470(void *);
void TObjDoor__sub_803DC894(int, int, void *, f32);
void set_chunk_material_color(Color_8018E40C *);
extern Color_8018E40C TObjDoor__data_804B7678[];
extern DoorMotionHeader* TObjDoor__data_8050DC78[];
extern Glob_8018E358 TObjDoor__data_8050DC80[];
extern s32 lbl_805D5660;
extern s32 TObjDoor__data_805D5BC0;
extern s32 some_id_805c6f74;
void TObjDoor__sub_8018E40C(Door_8018E40C *arg0);
void begin_effect_render__13TParticleCtrlFv();
void end_effect_render__13TParticleCtrlFv();
void free_children__12TObjDoorJungFPvPv(void *, int);
void rotate_matrix_y(int, int);
void TObjPlayer__sub_803D9B2C();
void TObjPlayer__sub_803D9B78();
void TOHangerMachine01__sub_803D9C00(void *);
void set_global_param__8TObjFishFi(int);
void TObjBoss2Tunnel__sub_803DB470(void *);
void set_chunk_material_color(Color_8018E40C *);
extern Color_8018E40C TObjDoor__data_804B7678[];
extern Glob_8018E358 TObjDoor__data_8050DC80[];
extern s32 lbl_805D5660;
extern s32 TObjDoor__data_805D5BC0;
extern s32 some_id_805c6f74;
M2C_UNK TObjDoor__sub_8018E5F4(Door_8018E5F4 *arg0);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
u8 *TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
s32 TLanguage__sub_801E4874(void *);
s32 TObjFish__sub_8001EDC4(s32, s32);
s32 TObjFish__sub_8001ED9C(s32, s32);
extern u8 lbl_804B763C[];
extern u8 lbl_80445588[];
extern u32 lbl_805D5BC4;
extern s32 TObjDoor__data_805D5BC0;
extern Glob_8018E358 TObjDoor__data_8050DC80[];
extern DoorMotionHeader* TObjDoor__data_8050DC78[];
void TObjDoor__sub_8018F30C(void);
void begin_effect_render__13TParticleCtrlFv();
void end_effect_render__13TParticleCtrlFv();
void free_children__12TObjDoorJungFPvPv(void *, int);
void rotate_matrix_y(int, int);
void TObjPlayer__sub_803D9B2C();
void TObjPlayer__sub_803D9B78();
void TOHangerMachine01__sub_803D9C00(void *);
void set_global_param__8TObjFishFi(int);
void TObjBoss2Tunnel__sub_803DB470(void *);
void TObjDoor__sub_803DC894(int, int, void *, f32);
void set_chunk_material_color(Color_8018E40C *);
extern Color_8018E40C TObjDoor__data_804B7678[];
extern Glob_8018E358 TObjDoor__data_8050DC80[];
extern DoorMotionHeader* TObjDoor__data_8050DC78[];
extern s32 lbl_805D5660;
extern s32 TObjDoor__data_805D5BC0;
extern s32 some_id_805c6f74;
M2C_UNK TObjDoor__sub_8018E74C(Door_8018E74C *arg0);
}

extern "C" {

struct DoorMotionHeader { void* rows; u32 frameCount; };
extern const f32 lbl_805DBDC8,lbl_805DBDCC;

void VecCopy__FP3VecPC3Vec(f32*,const f32*);
void TCameraCtrl__sub_80069C94(f32*,f32*);
void TCameraCtrl__sub_80069DA8();
s32 TCameraCtrl__sub_80069E7C(s32);
void clear_player_status_flag__10TObjPlayerFPviUi(TObjDoor*,s32,u32);
void set_indexed_flags(TObjDoor*,s32,u32);
s32 fn_8018E258(TObjDoor*,s32,f32);
void TOTrapAncient01__sub_80226578(s32,TObjDoor*,f32*,s32,s32);
u8 TODoorAncient08__sub_80229220(u16);
extern DoorMotionHeader* TObjDoor__data_8050DC78[];
extern s32 TObjDoor__data_805D5BC8;
extern const f32 TObjDoor__data_805DBDC4,lbl_805DBDD8,lbl_805DBDE8,lbl_805DBDEC,lbl_805DBDF0;

void TObjDoor__sub_8018E890(void);
void update_timer__8TObjDoorFPv(void *arg0);

void TObjDoor__sub_8018E358(Door_8018E358 *arg0) {
    set_global_param__8TObjFishFi(TObjDoor__data_805D5BC0);
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00(arg0->f38);
    rotate_matrix_y(0, arg0->f60);
    TObjDoor__sub_803DC894(TObjDoor__data_8050DC80->f0, (int)TObjDoor__data_8050DC78[0], TObjDoor__data_8050DC80, arg0->fB4);
    begin_effect_render__13TParticleCtrlFv();
    Glob_8018E358 *g1 = TObjDoor__data_8050DC80;
    free_children__12TObjDoorJungFPvPv(g1->a->f4, 0xA);
    Glob_8018E358 *g2 = TObjDoor__data_8050DC80;
    free_children__12TObjDoorJungFPvPv(g2->b->f4, 0xA);
    TObjBoss2Tunnel__sub_803DB470(g1->a);
    TObjBoss2Tunnel__sub_803DB470(g2->b);
    end_effect_render__13TParticleCtrlFv();
    TObjPlayer__sub_803D9B78();
}

void TObjDoor__sub_8018E40C(Door_8018E40C *arg0) {
    set_global_param__8TObjFishFi(TObjDoor__data_805D5BC0);
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00(arg0->f38);
    rotate_matrix_y(0, arg0->f60);
    TObjDoor__sub_803DC894(((Glob_8018E40C *)&TObjDoor__data_8050DC80)->f0, (int)((DoorMotionHeader * *)&TObjDoor__data_8050DC78)[0], ((Glob_8018E40C *)&TObjDoor__data_8050DC80), arg0->fB4);
    begin_effect_render__13TParticleCtrlFv();
    lbl_805D5660 = some_id_805c6f74;
    some_id_805c6f74 |= 0x10;
    Color_8018E40C color = TObjDoor__data_804B7678[arg0->fD0];
    color.a = arg0->fC4;
    set_chunk_material_color(&color);
    Glob_8018E40C *g0 = ((Glob_8018E40C *)&TObjDoor__data_8050DC80);
    free_children__12TObjDoorJungFPvPv(g0->c->f4, (u16)arg0->fD0);
    TObjBoss2Tunnel__sub_803DB470(g0->c);
    some_id_805c6f74 = lbl_805D5660;
    Glob_8018E40C *g1 = ((Glob_8018E40C *)&TObjDoor__data_8050DC80);
    free_children__12TObjDoorJungFPvPv(g1->a->f4, 0xA);
    Glob_8018E40C *g2 = ((Glob_8018E40C *)&TObjDoor__data_8050DC80);
    free_children__12TObjDoorJungFPvPv(g2->b->f4, 0xA);
    TObjBoss2Tunnel__sub_803DB470(g1->a);
    TObjBoss2Tunnel__sub_803DB470(g2->b);
    end_effect_render__13TParticleCtrlFv();
    TObjPlayer__sub_803D9B78();
}

void TObjDoor__sub_8018E540(Door_8018E358 *arg0) {
    set_global_param__8TObjFishFi(TObjDoor__data_805D5BC0);
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00(arg0->f38);
    rotate_matrix_y(0, arg0->f60);
    TObjDoor__sub_803DC894(TObjDoor__data_8050DC80->f0, (int)TObjDoor__data_8050DC78[0], TObjDoor__data_8050DC80, arg0->fB4);
    begin_effect_render__13TParticleCtrlFv();
    Glob_8018E358 *g1 = TObjDoor__data_8050DC80;
    free_children__12TObjDoorJungFPvPv(g1->a->f4, 0xA);
    Glob_8018E358 *g2 = TObjDoor__data_8050DC80;
    free_children__12TObjDoorJungFPvPv(g2->b->f4, 0xA);
    TObjBoss2Tunnel__sub_803DB470(g1->a);
    TObjBoss2Tunnel__sub_803DB470(g2->b);
    end_effect_render__13TParticleCtrlFv();
    TObjPlayer__sub_803D9B78();
}

M2C_UNK TObjDoor__sub_8018E5F4(Door_8018E5F4 *arg0) {
    set_global_param__8TObjFishFi(TObjDoor__data_805D5BC0);
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00(arg0->f38);
    rotate_matrix_y(0, arg0->f60);
    TObjBoss2Tunnel__sub_803DB470((void *)((Glob_8018E5F4 *)&TObjDoor__data_8050DC80)->f0);
    begin_effect_render__13TParticleCtrlFv();
    lbl_805D5660 = some_id_805c6f74;
    some_id_805c6f74 |= 0x10;
    Color_8018E5F4 color = ((Color_8018E5F4 *)&TObjDoor__data_804B7678)[arg0->fD0];
    color.a = arg0->fC4;
    set_chunk_material_color((Color_8018E40C *)(&color));
    Glob_8018E5F4 *g0 = ((Glob_8018E5F4 *)&TObjDoor__data_8050DC80);
    free_children__12TObjDoorJungFPvPv(g0->c->f4, (u16)arg0->fD0);
    TObjBoss2Tunnel__sub_803DB470(g0->c);
    some_id_805c6f74 = lbl_805D5660;
    Glob_8018E5F4 *g1 = ((Glob_8018E5F4 *)&TObjDoor__data_8050DC80);
    free_children__12TObjDoorJungFPvPv(g1->a->f4, 0xA);
    Glob_8018E5F4 *g2 = ((Glob_8018E5F4 *)&TObjDoor__data_8050DC80);
    free_children__12TObjDoorJungFPvPv(g2->b->f4, 0xA);
    TObjBoss2Tunnel__sub_803DB470(g1->a);
    TObjBoss2Tunnel__sub_803DB470(g2->b);
    end_effect_render__13TParticleCtrlFv();
    TObjPlayer__sub_803D9B78();
}

void update_timer__8TObjDoorFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC0) < 0x3C) {
        TObjDoor__sub_8018E5F4((Door_8018E5F4 *)(arg0));
        return;
    }
    TObjDoor__sub_8018E74C((Door_8018E74C *)(arg0));
}

M2C_UNK TObjDoor__sub_8018E74C(Door_8018E74C *arg0) {
    set_global_param__8TObjFishFi(TObjDoor__data_805D5BC0);
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00(arg0->f38);
    rotate_matrix_y(0, arg0->f60);
    TObjBoss2Tunnel__sub_803DB470((void *)((Glob_8018E74C *)&TObjDoor__data_8050DC80)->f0);
    begin_effect_render__13TParticleCtrlFv();
    TObjDoor__sub_803DC894(((Glob_8018E74C *)&TObjDoor__data_8050DC80)->f4, (int) ((DoorMotionHeader * *)&TObjDoor__data_8050DC78)[1], TObjDoor__data_8050DC80, arg0->fB8);
    lbl_805D5660 = some_id_805c6f74;
    some_id_805c6f74 |= 0x10;
    Color_8018E74C color = ((Color_8018E74C *)&TObjDoor__data_804B7678)[arg0->fD0];
    color.a = arg0->fC4;
    set_chunk_material_color((Color_8018E40C *)(&color));
    Glob_8018E74C *g0 = ((Glob_8018E74C *)&TObjDoor__data_8050DC80);
    free_children__12TObjDoorJungFPvPv(g0->c->f4, (u16)arg0->fD0);
    TObjBoss2Tunnel__sub_803DB470(g0->c);
    some_id_805c6f74 = lbl_805D5660;
    Glob_8018E74C *g1 = ((Glob_8018E74C *)&TObjDoor__data_8050DC80);
    free_children__12TObjDoorJungFPvPv(g1->a->f4, 0xB);
    Glob_8018E74C *g2 = ((Glob_8018E74C *)&TObjDoor__data_8050DC80);
    free_children__12TObjDoorJungFPvPv(g2->b->f4, 0xB);
    TObjBoss2Tunnel__sub_803DB470(g1->a);
    TObjBoss2Tunnel__sub_803DB470(g2->b);
    end_effect_render__13TParticleCtrlFv();
    TObjPlayer__sub_803D9B78();
}

void TObjDoor__sub_8018E890(void) {  }

#pragma push
#pragma opt_common_subs off
void TObjDoor__sub_8018E894(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) (M2C_FIELD(arg0, f32 *, 0xC4) - lbl_805DBDC0);
    if (M2C_FIELD(arg0, f32 *, 0xC4) < TObjDoor__data_805DBDC4) {
        M2C_FIELD(arg0, f32 *, 0xC4) = (f32) TObjDoor__data_805DBDC4;
    }
}
#pragma pop

void TObjDoor__sub_8018E8BC(void) {  }
void TObjDoor__sub_8018E8C0(TObjDoor* door) {
    door->frame+=lbl_805DBDC8;
    if(door->frame>(f32)(TObjDoor__data_8050DC78[0]->frameCount-1))door->frame=TObjDoor__data_805DBDC4;
    door->glow+=lbl_805DBDC0;
    if(door->glow>lbl_805DBDCC)door->glow=lbl_805DBDCC;
}

#pragma push
#pragma fp_contract on
void update_anim__8TObjDoorFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC8) = (s32) (M2C_FIELD(arg0, s32 *, 0xC8) + 0x300);
    M2C_FIELD(arg0, f32 *, 0xC4) = lbl_805DBDD4 * TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0xC8)) + lbl_805DBDD0;
}
void TObjDoor__sub_8018E98C(TObjDoor* door) {
    door->accentFrame+=lbl_805DBDD8;
    if(door->accentFrame>(f32)(TObjDoor__data_8050DC78[1]->frameCount-1))door->accentFrame=TObjDoor__data_805DBDC4;
    door->phase+=0x300;
    door->glow=lbl_805DBDD4*TBoss8Dragon__sub_803D64C0(door->phase)+lbl_805DBDD0;
}

#pragma push
#pragma fp_contract on
s32 TObjDoor__sub_8018EA2C(s32 arg0, f32 farg0, f32 farg1) {
    f32 sp8;
    f32 temp_f1;
    temp_f1 = fn_801315A0((void *) (arg0 + 0x38), (void *) (lbl_805D4DF0 + 0x178));
    if (temp_f1 > (farg0 * farg0)) {
        return 0;
    }
    if (temp_f1 < (farg1 * farg1)) {
        return 1;
    }
    TParticleCtrl__sub_803D8D1C((int) (0), (void *) (arg0 + 0x38), (void *) (&sp8));
    if ((-farg1 <= sp8) && (sp8 <= (lbl_805DBDDC + farg1))) {
        return 1;
    }
    return 0;
}
#pragma pop

void TObjDoor__sub_8018EC84(TObjDoor* door) {
    f32 target[3],position[3];
    switch(door->state) {
    case 0:
        if(TODoorAncient08__sub_80229220((u16)door->switchId)==1) {
            if(TObjDoor__data_805D5BC8==0)door->accentFrame=TObjDoor__data_805DBDC4;
            if(door->cameraMode==0)door->state=2;
            else door->state=1;
        }
        set_indexed_flags(door,0,1);return;
    case 1:
        if(door->cameraMode==1 && TCameraCtrl__sub_80069E7C(9)!=0) {
            VecCopy__FP3VecPC3Vec(target,door->position);
            VecCopy__FP3VecPC3Vec(position,door->cameraPosition);
            TCameraCtrl__sub_80069C94(position,target);door->cameraMode=2;
        }
        if(door->cameraMode==2) {
            s32 ticks=door->cameraTicks-1;door->cameraTicks=ticks;
            if(ticks==0) {TCameraCtrl__sub_80069DA8();door->state=2;return;}
        }
        if(door->cameraTicks>60) {
            door->accentFrame+=lbl_805DBDD8;
            if(door->accentFrame>(f32)(TObjDoor__data_8050DC78[1]->frameCount-1))door->accentFrame=TObjDoor__data_805DBDC4;
        }
        return;
    case 2:
        set_indexed_flags(door,0,1);
        if(fn_8018E258(door,0,lbl_805DBDE8)!=0) {
            door->frame=TObjDoor__data_805DBDC4;door->state=4;clear_player_status_flag__10TObjPlayerFPviUi(door,0,1);
        }
        break;
    case 4:
        TOTrapAncient01__sub_80226578(0x49e08,door,door->position,0,0);
        door->frame+=lbl_805DBDEC;
        if(door->frame>(f32)(TObjDoor__data_8050DC78[0]->frameCount-1)) {
            door->frame=(f32)(TObjDoor__data_8050DC78[0]->frameCount-1);door->state=5;
        }
        break;
    case 3:
        TOTrapAncient01__sub_80226578(0x49e08,door,door->position,0,0);
        door->frame-=lbl_805DBDEC;
        if(door->frame<TObjDoor__data_805DBDC4) {door->frame=TObjDoor__data_805DBDC4;door->state=2;}
        break;
    case 5:
        clear_player_status_flag__10TObjPlayerFPviUi(door,0,1);
        if(fn_8018E258(door,1,lbl_805DBDF0)!=0) {door->state=3;set_indexed_flags(door,0,1);}
        break;
    }
}

void *__dt__8TObjDoorFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__8TObjDoor;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
void *TObjDoor__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD4);
    if (o != NULL) {
        o = TObjDoor__ct(o, tl_05, arg0);
    }
    return o;
}
void free_resources__8TObjDoorFv(void) {
    free_if_valid__10TObjPlayerFi(TObjDoor__data_805D5BC0);
    TObjDoor__data_805D5BC0 = 0;
    if ((u32) lbl_805D5BC4 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5BC4, 1);
        lbl_805D5BC4 = 0U;
    }
}

void TObjDoor__sub_8018F30C(void) {
    s32 p = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    if (p != 0) {
        p = (s32)TLobby__sub_80020004((void *)p, 5, lbl_804B763C, 0, 0, 0);
    }
    lbl_805D5BC4 = p;
    TObjDoor__data_805D5BC0 = TLanguage__sub_801E4874(lbl_80445588);
    ((s32 *)&TObjDoor__data_8050DC80)[0] = TObjFish__sub_8001EDC4(lbl_805D5BC4, 4);
    ((s32 *)&TObjDoor__data_8050DC80)[1] = TObjFish__sub_8001EDC4(lbl_805D5BC4, 3);
    ((s32 *)&TObjDoor__data_8050DC80)[2] = TObjFish__sub_8001EDC4(lbl_805D5BC4, 0);
    ((s32 *)&TObjDoor__data_8050DC80)[3] = TObjFish__sub_8001EDC4(lbl_805D5BC4, 1);
    ((s32 *)&TObjDoor__data_8050DC80)[4] = TObjFish__sub_8001EDC4(lbl_805D5BC4, 2);
    ((s32 *)&TObjDoor__data_8050DC78)[0] = TObjFish__sub_8001ED9C(lbl_805D5BC4, 0);
    ((s32 *)&TObjDoor__data_8050DC78)[1] = TObjFish__sub_8001ED9C(lbl_805D5BC4, 1);
}

void *TObjDoorJung__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD8);
    if (o != NULL) {
        o = TObjDoorJung__ct(o, tl_05, arg0);
    }
    return o;
}

#pragma pop

}
