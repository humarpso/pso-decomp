#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801FA964_lbl_804C8784 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct RecoveredGlobal_801F9720_TRaderMapCore__data_80513708 {
    M2C_UNK value;
    u8 remaining[0x74];
};

#include <stddef.h>
struct Stack_801FA9D8 {
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    M2C_UNK sp24;
    u8 pad_28[0x4];
    f32 sp2C;
    f32 sp30;
    u8 pad_34[0x8];
    f32 sp3C;
    u8 pad_40[0xC];
    f32 sp4C;
    f32 sp50;
};

struct RecoveredGlobal_801FA9D8_lbl_8044A770 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_801FA9D8_lbl_8044A77C {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_801FA9D8_lbl_804C8748 {
    M2C_UNK value;
    u8 remaining[0x38];
};

struct RecoveredGlobal_801FA9D8_lbl_804C8784 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct RecoveredGlobal_801FA9D8_TRaderMapCore__data_80513708 {
    M2C_UNK value;
    u8 remaining[0x74];
};

typedef struct RadarInitPiece_801F9474 {
    s16 id, flags;
    f32 translation[3]; u32 rotation[3];
    f32 fade, radius; void *object;
} RadarInitPiece_801F9474;

typedef struct RadarInitMap_801F9474 { RadarInitPiece_801F9474 *pieces; void *textures; s32 count; } RadarInitMap_801F9474;

struct Region_801F9C54 {
    s16 id; s16 flags; f32 x, y, z;
    u32 angles[3]; f32 fade, radius; void *model;
};

struct Map_801F9C54 { struct Region_801F9C54 *regions; void *textures; s32 count; };

struct Region_801F9CB8 {
    s16 id; s16 flags; f32 x, y, z;
    u32 angles[3]; f32 fade, radius; void *model;
};

struct Map_801F9CB8 { struct Region_801F9CB8 *regions; void *textures; s32 count; };

struct Piece_801F9418 {
    s16 a;
    s16 flags;
    u8 rest[0x24];
};

struct Map_801F9418 {
    Piece_801F9418* pieces;
    s32 b;
    s32 count;
};

struct Piece_801F9630 {
    s16 a;
    s16 flags;
    u8 rest[0x24];
};

struct Map_801F9630 {
    Piece_801F9630* pieces;
    s32 b;
    s32 count;
};

struct Rect_801F9228 {
    f32 x0;
    f32 y0;
    f32 x1;
    f32 y1;
};

struct Radar_801FADF0 {
    u8 pad0[0x90];
    s32 f90;
    u8 pad94[0x184 - 0x94];
    u32 f184;
};

struct RecoveredGlobal_801F9B8C_TRaderMapCore__data_80512D08 {
    M2C_UNK value;
    u8 remaining[0x9FC];
};

struct Vec_801F9B8C { f32 x, y, z; };

struct Dot_801F9B8C { f32 x, z, w; s16 c; s16 type; s32 color; };

struct Vec_801F9D84 { f32 x, y, z; };

struct Model_801F9D84 { u8 pad[8]; Vec_801F9D84 a; Vec_801F9D84 b; };

struct ModelRef_801F9D84 { void *p0; Model_801F9D84 *m; };

struct Region_801F9D84 {
    s16 id; s16 flags; f32 x, y, z;
    u32 angles[3]; f32 fade, radius; ModelRef_801F9D84 *model;
};

struct Map_801F9D84 { Region_801F9D84 *regions; void *textures; s32 count; };

extern "C" {
M2C_UNK TCameraCtrl__sub_80068EF0();
M2C_UNK TCameraCtrl__sub_80069024();
M2C_UNK TRaderMapCore__sub_801FA1E0(void *);
M2C_UNK TRaderMapCore__sub_801FA350(void *);
M2C_UNK TRaderMapCore__sub_801FA6CC(void *, void *);
M2C_UNK TRaderMapCore__sub_801FA880(void *, void *);
M2C_UNK TRaderMapCore__sub_801FAAEC(void *, void *);
extern u32 TRaderMapCore__data_805D5F28;
extern s32 lbl_805D5F2C;
extern s32 TRaderMapCore__data_805D5F30;
extern s32 TRaderMapCore__data_805D5F3C;
void render__13TRaderMapCoreFv(u8 *arg0);
void disallow_rendering__7TObjectFv(void *);
void reset_counter__13TRaderMapCoreFPv(void* p);
extern void *TRaderMapCore__data_805D5F40;
void TRaderMapCore__sub_801F9110(void);
void allow_rendering__7TObjectFv(void *);
void reset_counter__13TRaderMapCoreFPv(void* p);
extern void *TRaderMapCore__data_805D5F40;
void TRaderMapCore__sub_801F9144(void);
extern s32 TRaderMapCore__data_805D5F3C;
s32 TRaderMapCore__sub_801F9058(u8 *arg0);
M2C_UNK TCameraCtrl__sub_8006AF9C(void *, int);
M2C_UNK TObjLight__sub_80133F6C();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK TCameraCtrl__sub_801E32D8(f32, f32);
M2C_UNK GXSetScissorBoxOffset(int, int);
extern RecoveredGlobal_801FA964_lbl_804C8784 lbl_804C8784;
extern s32 lbl_805D4DF0;
extern const f32 TRaderMapCore__data_805DC538;
extern const f32 TRaderMapCore__data_805DC53C;
void TRaderMapCore__sub_801FA964(s32 arg0, s32 arg1);
extern RecoveredGlobal_801F9720_TRaderMapCore__data_80513708 TRaderMapCore__data_80513708;
extern const f32 lbl_805D35F4;
extern const f32 lbl_805D35F8;
extern s32 TRaderMapCore__data_805D5F3C;
void TRaderMapCore__sub_801F9720(f32 farg0);
M2C_UNK memset(void *, int, int);
M2C_UNK TCameraCtrl__sub_80069024();
s32 set_light__9TObjLightFPvPvf(void *, void *, f32);
s32 begin_effect_render__13TParticleCtrlFv();
s32 TRaderMapCore__sub_801F9178(void *, void *);
s32 TRaderMapCore__sub_801F9314(void *, void *);
extern RecoveredGlobal_801FA9D8_lbl_8044A770 lbl_8044A770;
extern RecoveredGlobal_801FA9D8_lbl_8044A77C lbl_8044A77C;
extern RecoveredGlobal_801FA9D8_lbl_804C8748 lbl_804C8748;
extern RecoveredGlobal_801FA964_lbl_804C8784 lbl_804C8784;
extern RecoveredGlobal_801F9720_TRaderMapCore__data_80513708 TRaderMapCore__data_80513708;
extern const f32 TRaderMapCore__data_805DC534;
void TRaderMapCore__sub_801FA9D8(s32 arg0, s32 arg1);
void *heap_zalloc__5THeapFUl(int, u32);
extern s16 *TRaderMapCore__data_80513780[];
extern int TRaderMapCore__data_805D5F50;
s32 TRaderMapCore__sub_801F9474(s32 floor, RadarInitMap_801F9474 *map);
extern u32 TRaderMapCore__data_805D5F28;
s32 TRaderMapCore__sub_801F9C54(s16 id);
extern u32 TRaderMapCore__data_805D5F28;
extern const f32 TRaderMapCore__data_805DC568;
s32 TRaderMapCore__sub_801F9CB8(s16 id);
extern s16 *TRaderMapCore__data_80513780[];
s32 TRaderMapCore__sub_801F9418(s32 arg0, Map_801F9418* arg1);
void heap_free__5THeapFPv(int, void*);
extern s16 *TRaderMapCore__data_80513780[];
extern int TRaderMapCore__data_805D5F50;
void TRaderMapCore__sub_801F9540(void);
void* __ct__5THeapFUli(void*, u32, s32);
void* __nw__5THeapFUl(u32);
extern s16 *TRaderMapCore__data_80513780[];
extern int TRaderMapCore__data_805D5F50;
void TRaderMapCore__sub_801F95CC(void);
extern u32 TRaderMapCore__data_805D5F28;
void TRaderMapCore__sub_801F9630(s32 arg0);
void GXSetScissor(u32, u32, u32, u32);
extern const f32 TRaderMapCore__data_805DC538;
extern const f32 TRaderMapCore__data_805DC53C;
s32 TRaderMapCore__sub_801F9228(void *self, int mode, void *arg2);
s32 TCameraCtrl__sub_80069304();
s32 test_flag_2000000__10TObjPlayerFPv(u32);
s32 check_flag_100__10TObjPlayerFPv(u32);
u32 get_player_by_client_id(s32);
s32 get_flag_bit0__11TWindowCtrlFv();
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
extern u8 TCameraCtrl__data_804FF628[];
extern s32 TRaderMapCore__data_805D5F3C;
extern s32 TRaderMapCore__data_805D5F44;
s32 TRaderMapCore__sub_801FADF0(void *arg0v, void *arg1);
f32 xz_distance_squared(void *, void *);
extern RecoveredGlobal_801F9B8C_TRaderMapCore__data_80512D08 TRaderMapCore__data_80512D08;
extern RecoveredGlobal_801F9720_TRaderMapCore__data_80513708 TRaderMapCore__data_80513708;
extern s32 TRaderMapCore__data_805D5F30;
extern const f32 TRaderMapCore__data_805DC534;
extern const f32 lbl_805DC564;
s32 minimap_render_dot(Vec_801F9B8C *arg0, s32 arg1, s16 arg2, s32 arg3);
f32 xz_distance_squared(void *, void *);
extern RecoveredGlobal_801F9B8C_TRaderMapCore__data_80512D08 TRaderMapCore__data_80512D08;
extern RecoveredGlobal_801F9720_TRaderMapCore__data_80513708 TRaderMapCore__data_80513708;
extern s32 TRaderMapCore__data_805D5F30;
extern const f32 lbl_805DC564;
s32 TRaderMapCore__sub_801F99EC(Vec_801F9B8C *arg0, s32 arg1, s16 arg2, s32 arg3, f32 scale);
f32 xz_distance_squared(void *, void *);
extern u32 TRaderMapCore__data_805D5F28;
extern const f32 TRaderMapCore__data_805DC568;
void TRaderMapCore__sub_801F9D84(M2C_UNK arg0, M2C_UNK arg1, void *arg2);
}

extern "C" {

void copy_transform__13TRaderMapCoreFPvPv(void* p, void* q);
void free_heap__13TRaderMapCoreFv(void);
s32 is_active__13TRaderMapCoreFv(void);
void reset_counter__13TRaderMapCoreFPv(void* p);
s32 should_show_map__13TRaderMapCoreFv(void);
void update_target__13TRaderMapCoreFPv(void *arg0);
u32 get_player_by_client_id(s32);
int __dt__5THeapFv(void*, void*);
s32 is_card_flag_set__19TWindowKeyBoardHardFPv(u16);
s32 is_not_split_screen__13TRaderMapCoreFv();
s32 is_ready__6TLobbyFv();
s32 is_technique_ready__8TTecCtrlFv();
int obj_getField1c(void*);

extern void *TRaderMapCore__data_805D5F40;

s32 TRaderMapCore__sub_801F9058(u8 *arg0) {
    return TRaderMapCore__sub_801FADF0((void *)((void *)(arg0)), (void *)((void *)(TRaderMapCore__data_805D5F3C)));
}

s32 is_active__13TRaderMapCoreFv(void) {
    if ((void *) TRaderMapCore__data_805D5F40 != NULL) {
        if (M2C_FIELD(TRaderMapCore__data_805D5F40, u16 *, 4) & 0x10) {
            return 0;
        }
        return TRaderMapCore__sub_801F9058((u8 *)(TRaderMapCore__data_805D5F40));
    }
    return 0;
}

s32 should_show_map__13TRaderMapCoreFv(void) {
    if ((is_not_split_screen__13TRaderMapCoreFv() == 1) && (is_ready__6TLobbyFv() == 0)) {
        return 0;
    }
    return is_technique_ready__8TTecCtrlFv();
}
void reset_counter__13TRaderMapCoreFPv(void* p) { *(s32*)((char*)p + 0x184) = 0; }

    extern int TRaderMapCore__data_805D5F50;

void TRaderMapCore__sub_801F9110(void) {
    if ((void *) (*(u8 * *)&TRaderMapCore__data_805D5F40) != NULL) {
        reset_counter__13TRaderMapCoreFPv((void*)((*(u8 * *)&TRaderMapCore__data_805D5F40)));
        disallow_rendering__7TObjectFv((*(u8 * *)&TRaderMapCore__data_805D5F40));
    }
}

void TRaderMapCore__sub_801F9144(void) {
    if ((void *) (*(u8 * *)&TRaderMapCore__data_805D5F40) != NULL) {
        reset_counter__13TRaderMapCoreFPv((void*)((*(u8 * *)&TRaderMapCore__data_805D5F40)));
        allow_rendering__7TObjectFv((*(u8 * *)&TRaderMapCore__data_805D5F40));
    }
}

#pragma fp_contract on
s32 TRaderMapCore__sub_801F9228(void *self, int mode, void *arg2) {
    Rect_801F9228 *rect = (Rect_801F9228 *)arg2;
    u32 w;
    u32 h;
    u32 y;
    if (mode == 2) {
        w = 32.0f * (rect->x1 - rect->x0);
        h = 32.0f * (rect->y1 - rect->y0);
        y = TRaderMapCore__data_805DC53C - 0.5f * h;
        GXSetScissor((u32)(TRaderMapCore__data_805DC538 - 0.5f * w), y, w, h);
    } else {
        GXSetScissor(0, 0, 0x280, 0x1E0);
    }
}
#pragma fp_contract reset

s32 TRaderMapCore__sub_801F9418(s32 arg0, Map_801F9418* arg1) {
    s16* saved = ((s16* *)&TRaderMapCore__data_80513780)[arg0];
    s16* p;
    Piece_801F9418* piece;
    s32 i;
    if (saved != NULL) {
        for (i = 0, piece = arg1->pieces, p = saved; i < arg1->count; i++, piece++, p++) {
            *p = piece->flags;
        }
    } else {
        return 0;
    }
    return 1;
}

s32 TRaderMapCore__sub_801F9474(s32 floor, RadarInitMap_801F9474 *map) {
    s16 *saved = TRaderMapCore__data_80513780[floor];
    s16 *p;
    RadarInitPiece_801F9474 *piece;
    s32 i;
    s32 j;
    if (saved != NULL) {
        for (i = 0, piece = map->pieces, p = saved; i < map->count; i++, piece++, p++) {
            piece->flags = *p;
        }
    } else {
        saved = (s16 *) heap_zalloc__5THeapFUl(TRaderMapCore__data_805D5F50, (u32) map->count * 2);
        if (saved != NULL) {
            TRaderMapCore__data_80513780[floor] = saved;
        } else {
            return 0;
        }
        for (j = 0, piece = map->pieces; j < map->count; j++, piece++) {
            piece->flags |= 1;
        }
    }
    return 1;
}

void TRaderMapCore__sub_801F9540(void) {
    s32 i;
    for (i = 0x11; i >= 0; i--) {
        if (((s16* *)&TRaderMapCore__data_80513780)[i] != NULL) {
            heap_free__5THeapFPv(TRaderMapCore__data_805D5F50, ((s16* *)&TRaderMapCore__data_80513780)[i]);
            ((s16* *)&TRaderMapCore__data_80513780)[i] = NULL;
        }
    }
}

void free_heap__13TRaderMapCoreFv(void) { __dt__5THeapFv((void*)(TRaderMapCore__data_805D5F50), (void*)1); TRaderMapCore__data_805D5F50 = 0; }

typedef char RecoveredGlobal_801F9720_TRaderMapCore__data_80513708_size[sizeof(RecoveredGlobal_801F9720_TRaderMapCore__data_80513708) == 0x78 ? 1 : -1];

void TRaderMapCore__sub_801F95CC(void) {
    s32 i;
    void* p = __nw__5THeapFUl(0x14);
    if (p != NULL) {
        p = __ct__5THeapFUli(p, 0x1000, 0x20);
    }
    TRaderMapCore__data_805D5F50 = (int)p;
    for (i = 0; i < 0x12; i++) {
        ((s16* *)&TRaderMapCore__data_80513780)[i] = NULL;
    }
}

void TRaderMapCore__sub_801F9630(s32 arg0) {
    if (TRaderMapCore__data_805D5F28 != 0) {
        Map_801F9630* m = (Map_801F9630*)TRaderMapCore__data_805D5F28;
        if (m->pieces != 0) {
            Piece_801F9630* piece = m->pieces;
            s32 i;
            for (i = 0; i < ((Map_801F9630*)TRaderMapCore__data_805D5F28)->count; i++, piece++) {
                piece->flags |= arg0;
            }
        }
    }
}

void TRaderMapCore__sub_801F9720(f32 farg0) {
    f32 temp_f0;
    if (((s32) TRaderMapCore__data_805D5F3C == 1) || ((s32) TRaderMapCore__data_805D5F3C == 2)) {
        temp_f0 = M2C_FIELD(&TRaderMapCore__data_80513708.value, f32 *, 0x2C) + farg0;
        M2C_FIELD(&TRaderMapCore__data_80513708.value, f32 *, 0x2C) = temp_f0;
        if (temp_f0 < lbl_805D35F4) {
            M2C_FIELD(&TRaderMapCore__data_80513708.value, f32 *, 0x2C) = (f32) lbl_805D35F4;
        }
        if (M2C_FIELD(&TRaderMapCore__data_80513708.value, f32 *, 0x2C) > lbl_805D35F8) {
            M2C_FIELD(&TRaderMapCore__data_80513708.value, f32 *, 0x2C) = (f32) lbl_805D35F8;
        }
    }
}

#define MAP_801F9C54 ((struct Map_801F9C54 *) TRaderMapCore__data_805D5F28)

typedef char RecoveredGlobal_801F9B8C_TRaderMapCore__data_80512D08_size[sizeof(RecoveredGlobal_801F9B8C_TRaderMapCore__data_80512D08) == 0xA00 ? 1 : -1];

s32 TRaderMapCore__sub_801F99EC(Vec_801F9B8C *arg0, s32 arg1, s16 arg2, s32 arg3, f32 scale) {
    Vec_801F9B8C *cam = (Vec_801F9B8C *)&TRaderMapCore__data_80513708;
    Vec_801F9B8C v;
    u8 pad[0x10];
    Dot_801F9B8C *d;
    if (TRaderMapCore__data_805D5F30 > 0x7F) {
        return 0;
    }
    if (!(arg3 & 1)) {
        v.x = cam->x;
        v.z = cam->z;
        if (xz_distance_squared(arg0, &v) > lbl_805DC564) {
            return 0;
        }
    }
    ((Dot_801F9B8C *)&TRaderMapCore__data_80512D08)[TRaderMapCore__data_805D5F30].x = arg0->x;
    d = &((Dot_801F9B8C *)&TRaderMapCore__data_80512D08)[TRaderMapCore__data_805D5F30];
    d->z = arg0->z;
    d->w = scale;
    d->color = arg1;
    d->type = arg2;
    d->c = 0;
    TRaderMapCore__data_805D5F30++;
    return 1;
}

s32 minimap_render_dot(Vec_801F9B8C *arg0, s32 arg1, s16 arg2, s32 arg3) {
    Vec_801F9B8C *cam = (Vec_801F9B8C *)&TRaderMapCore__data_80513708;
    Vec_801F9B8C v;
    u8 pad[0x10];
    Dot_801F9B8C *d;
    if (TRaderMapCore__data_805D5F30 > 0x7F) {
        return 0;
    }
    if (!(arg3 & 1)) {
        v.x = cam->x;
        v.z = cam->z;
        if (xz_distance_squared(arg0, &v) > lbl_805DC564) {
            return 0;
        }
    }
    ((Dot_801F9B8C *)&TRaderMapCore__data_80512D08)[TRaderMapCore__data_805D5F30].x = arg0->x;
    d = &((Dot_801F9B8C *)&TRaderMapCore__data_80512D08)[TRaderMapCore__data_805D5F30];
    d->z = arg0->z;
    d->w = TRaderMapCore__data_805DC534;
    d->color = arg1;
    d->type = arg2;
    d->c = 0;
    TRaderMapCore__data_805D5F30++;
    return 1;
}

s32 TRaderMapCore__sub_801F9C54(s16 id) {
    s32 i;
    if (MAP_801F9C54 == NULL) {
        return 0;
    }
    for (i = 0; i < MAP_801F9C54->count; i++) {
        if (MAP_801F9C54->regions[i].id == id) {
            MAP_801F9C54->regions[i].flags |= 2;
            return 1;
        }
    }
    return 0;
}

#define MAP_801F9CB8 ((struct Map_801F9CB8 *) TRaderMapCore__data_805D5F28)
s32 TRaderMapCore__sub_801F9CB8(s16 id) {
    s32 i;
    if (MAP_801F9CB8 == NULL) {
        return 0;
    }
    for (i = 0; i < MAP_801F9CB8->count; i++) {
        if (MAP_801F9CB8->regions[i].id == id && (MAP_801F9CB8->regions[i].flags & 1)) {
            MAP_801F9CB8->regions[i].flags &= ~1;
            MAP_801F9CB8->regions[i].fade = TRaderMapCore__data_805DC568;
            return 1;
        }
    }
    return 0;
}

#define MAP_801F9D84 ((Map_801F9D84 *) TRaderMapCore__data_805D5F28)
void TRaderMapCore__sub_801F9D84(M2C_UNK arg0, M2C_UNK arg1, void *arg2) {
    Vec_801F9D84 v;
    Region_801F9D84 *r;
    s32 i;
    if (MAP_801F9D84 != NULL) {
        r = MAP_801F9D84->regions;
        for (i = 0; i < MAP_801F9D84->count; i++, r++) {
            if (!(r->flags & 2) && (r->flags & 1)) {
                if (r->flags & 4) {
                    v.x = r->x + r->model->m->b.x;
                    v.y = r->y + r->model->m->b.y;
                    v.z = r->z + r->model->m->b.z;
                } else {
                    v.x = r->x + r->model->m->a.x;
                    v.y = r->y + r->model->m->a.y;
                    v.z = r->z + r->model->m->a.z;
                }
                if (xz_distance_squared(&v, arg2) < r->radius * r->radius) {
                    r->flags &= ~1;
                    r->fade = TRaderMapCore__data_805DC568;
                }
            }
        }
    }
}

void copy_transform__13TRaderMapCoreFPvPv(void* p, void* q) { *(f32*)((char*)p + 0x0) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x8); *(f32*)((char*)p + 0xc) = *(f32*)((char*)q + 0xc); *(f32*)((char*)p + 0x10) = *(f32*)((char*)q + 0x10); *(f32*)((char*)p + 0x14) = *(f32*)((char*)q + 0x14); *(u32*)((char*)p + 0x18) = *(u32*)((char*)q + 0x18); *(u32*)((char*)p + 0x1c) = *(u32*)((char*)q + 0x1c); *(f32*)((char*)p + 0x20) = *(f32*)((char*)q + 0x20); *(f32*)((char*)p + 0x24) = *(f32*)((char*)q + 0x24); }

extern s32 lbl_805D53A0;
extern s32 lbl_805DC56C;

typedef char RecoveredGlobal_801FA964_lbl_804C8784_size[sizeof(RecoveredGlobal_801FA964_lbl_804C8784) == 0x30 ? 1 : -1];
void TRaderMapCore__sub_801FA964(s32 arg0, s32 arg1) {
    GXSetScissorBoxOffset((int) (0), (int) (0));
    TCameraCtrl__sub_801E32D8((f32) (TRaderMapCore__data_805DC538), (f32) (TRaderMapCore__data_805DC53C));
    TCameraCtrl__sub_8006AF9C((void *) (lbl_805D4DF0), (int) (0));
    TRaderMapCore__sub_801F9228((void *)((void *) (arg0)), (int)((int) (0)), (void *)((void *) ((u8 *)&lbl_804C8784.value + (arg1 * 0x10))));
    TObjLight__sub_80133F6C();
    end_effect_render__13TParticleCtrlFv();
}

#pragma push
#pragma opt_common_subs off
typedef char RecoveredGlobal_801FA9D8_lbl_8044A770_size[sizeof(RecoveredGlobal_801FA9D8_lbl_8044A770) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_801FA9D8_lbl_8044A77C_size[sizeof(RecoveredGlobal_801FA9D8_lbl_8044A77C) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_801FA9D8_lbl_804C8748_size[sizeof(RecoveredGlobal_801FA9D8_lbl_804C8748) == 0x3C ? 1 : -1];
typedef char RecoveredGlobal_801FA9D8_lbl_804C8784_size[sizeof(RecoveredGlobal_801FA9D8_lbl_804C8784) == 0x30 ? 1 : -1];
typedef char RecoveredGlobal_801FA9D8_TRaderMapCore__data_80513708_size[sizeof(RecoveredGlobal_801FA9D8_TRaderMapCore__data_80513708) == 0x78 ? 1 : -1];
void TRaderMapCore__sub_801FA9D8(s32 arg0, s32 arg1) {
    typedef char sp8_offset[(offsetof(Stack_801FA9D8, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_801FA9D8, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_801FA9D8, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_801FA9D8, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_801FA9D8, sp18) == 0x10) ? 1 : -1];
    typedef char sp1C_offset[(offsetof(Stack_801FA9D8, sp1C) == 0x14) ? 1 : -1];
    typedef char sp20_offset[(offsetof(Stack_801FA9D8, sp20) == 0x18) ? 1 : -1];
    typedef char sp24_offset[(offsetof(Stack_801FA9D8, sp24) == 0x1C) ? 1 : -1];
    typedef char sp2C_offset[(offsetof(Stack_801FA9D8, sp2C) == 0x24) ? 1 : -1];
    typedef char sp30_offset[(offsetof(Stack_801FA9D8, sp30) == 0x28) ? 1 : -1];
    typedef char sp3C_offset[(offsetof(Stack_801FA9D8, sp3C) == 0x34) ? 1 : -1];
    typedef char sp4C_offset[(offsetof(Stack_801FA9D8, sp4C) == 0x44) ? 1 : -1];
    typedef char sp50_offset[(offsetof(Stack_801FA9D8, sp50) == 0x48) ? 1 : -1];
    Stack_801FA9D8 stack;
    u8 *temp_r5;
    TCameraCtrl__sub_80069024();
    memset((void *) (&stack.sp24), (int) (0), (int) (0x30));
    temp_r5 = (u8 *)&lbl_804C8748.value + (arg1 * 0x14);
    stack.sp2C = M2C_FIELD(temp_r5, f32 *, 0);
    stack.sp30 = M2C_FIELD(temp_r5, f32 *, 4);
    stack.sp4C = M2C_FIELD(temp_r5, f32 *, 8);
    stack.sp50 = M2C_FIELD(temp_r5, f32 *, 0xC);
    stack.sp3C = M2C_FIELD(temp_r5, f32 *, 0x10);
    TRaderMapCore__sub_801F9178((void *) (arg0), (void *) (&stack.sp24));
    TRaderMapCore__sub_801F9228((void *)((void *) (arg0)), (int)((int) (2)), (void *)((void *) ((u8 *)&(*(RecoveredGlobal_801FA9D8_lbl_804C8784 *)&lbl_804C8784).value + (arg1 * 0x10))));
    TRaderMapCore__sub_801F9314((void *) (arg0), (void *) ((u8 *)&(*(RecoveredGlobal_801FA9D8_TRaderMapCore__data_80513708 *)&TRaderMapCore__data_80513708).value + (arg1 * 0x28)));
    stack.sp18 = M2C_FIELD(&lbl_8044A770.value, s32 *, 0);
    stack.sp1C = M2C_FIELD(&lbl_8044A770.value, s32 *, 4);
    stack.sp20 = M2C_FIELD(&lbl_8044A770.value, s32 *, 8);
    stack.sp8 = M2C_FIELD(&lbl_8044A77C.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_8044A77C.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_8044A77C.value, s32 *, 8);
    stack.sp14 = M2C_FIELD(&lbl_8044A77C.value, s32 *, 0xC);
    set_light__9TObjLightFPvPvf((void *) (&stack.sp18), (void *) (&stack.sp8), (f32) (TRaderMapCore__data_805DC534));
    begin_effect_render__13TParticleCtrlFv();
}
#pragma pop

void render__13TRaderMapCoreFv(u8 *arg0) {
    if ((u32) TRaderMapCore__data_805D5F28 != 0U) {
        if (TRaderMapCore__sub_801FADF0((void *)((void *) (arg0)), (void *)((void *) (TRaderMapCore__data_805D5F3C))) == 0) {
            lbl_805D5F2C = 0;
            TRaderMapCore__data_805D5F30 = 0;
            return;
        }
        switch ((s32) TRaderMapCore__data_805D5F3C) {
        case 0:
            TRaderMapCore__sub_801FA880((void *) (arg0), (void *) (TRaderMapCore__data_805D5F3C));
            TRaderMapCore__sub_801FA9D8((s32)((void *) (arg0)), (s32)((void *) (TRaderMapCore__data_805D5F3C)));
            TRaderMapCore__sub_801FAAEC((void *) (arg0), (void *) (TRaderMapCore__data_805D5F3C));
            TRaderMapCore__sub_801FA1E0((void *) (arg0));
            TRaderMapCore__sub_801FA350((void *) (arg0));
            TRaderMapCore__sub_801FA964((s32)((void *) (arg0)), (s32)((void *) (TRaderMapCore__data_805D5F3C)));
            TRaderMapCore__sub_801FA6CC((void *) (arg0), (void *) (TRaderMapCore__data_805D5F3C));
            break;
        case 1:
            TCameraCtrl__sub_80069024();
            TRaderMapCore__sub_801FA880((void *) (arg0), (void *) (TRaderMapCore__data_805D5F3C));
            TCameraCtrl__sub_80068EF0();
            TRaderMapCore__sub_801FA9D8((s32)((void *) (arg0)), (s32)((void *) (TRaderMapCore__data_805D5F3C)));
            TRaderMapCore__sub_801FAAEC((void *) (arg0), (void *) (TRaderMapCore__data_805D5F3C));
            TRaderMapCore__sub_801FA1E0((void *) (arg0));
            TRaderMapCore__sub_801FA350((void *) (arg0));
            TRaderMapCore__sub_801FA964((s32)((void *) (arg0)), (s32)((void *) (TRaderMapCore__data_805D5F3C)));
            TCameraCtrl__sub_80069024();
            M2C_FIELD(arg0, s32 *, 0x174) = 0;
            TRaderMapCore__sub_801FA6CC((void *) (arg0), (void *) (TRaderMapCore__data_805D5F3C));
            TCameraCtrl__sub_80068EF0();
            break;
        case 2:
            TRaderMapCore__sub_801FA880((void *) (arg0), (void *) (TRaderMapCore__data_805D5F3C));
            TRaderMapCore__sub_801FA9D8((s32)((void *) (arg0)), (s32)((void *) (TRaderMapCore__data_805D5F3C)));
            TRaderMapCore__sub_801FAAEC((void *) (arg0), (void *) (TRaderMapCore__data_805D5F3C));
            TRaderMapCore__sub_801FA1E0((void *) (arg0));
            TRaderMapCore__sub_801FA350((void *) (arg0));
            TRaderMapCore__sub_801FA964((s32)((void *) (arg0)), (s32)((void *) (TRaderMapCore__data_805D5F3C)));
            break;
        }
        lbl_805D5F2C = 0;
        TRaderMapCore__data_805D5F30 = 0;
    }
}

s32 TRaderMapCore__sub_801FADF0(void *arg0v, void *arg1) {
    s32 i;
    u32 p;
    if (TRaderMapCore__data_805D5F44 == 0) {
        return 0;
    }
    if (((Radar_801FADF0 *)arg0v)->f184 != 0) {
        if (test_flag_2000000__10TObjPlayerFPv(((Radar_801FADF0 *)arg0v)->f184) != 0) {
            return 0;
        }
        if (check_flag_100__10TObjPlayerFPv(((Radar_801FADF0 *)arg0v)->f184) != 0 && TRaderMapCore__data_805D5F3C != 1) {
            return 0;
        }
    } else {
        return 0;
    }
    if (TCameraCtrl__sub_80069304() != 0 && get_flag_bit0__11TWindowCtrlFv() == 0) {
        return 0;
    }
    if (TCameraCtrl__data_804FF628[0] == 5 || TCameraCtrl__data_804FF628[0] == 9) {
        ((Radar_801FADF0 *)arg0v)->f184 = 0;
        return 0;
    }
    if (((Radar_801FADF0 *)arg0v)->f90 > 0) {
        return 0;
    }
    for (i = 0; i < 4; i++) {
        p = get_player_by_client_id(i);
        if (p != 0 && check_flag_100__10TObjPlayerFPv(p) != 0 && (s32)arg1 == 2) {
            return 0;
        }
    }
    return all_parents_unqueued_for_destruction__7TObjectFv(arg0v) != 0 ? 1 : 0;
}

void update_target__13TRaderMapCoreFPv(void *arg0) {
    u32 temp_r3;

    temp_r3 = get_player_by_client_id(lbl_805D53A0);
    if (temp_r3 != 0U) {
        M2C_FIELD(arg0, u32 *, 0x184) = temp_r3;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x184) != 0U) {
        if (is_card_flag_set__19TWindowKeyBoardHardFPv(obj_getField1c((void*)M2C_FIELD(arg0, u32 *, 0x184))) != 0) {
            M2C_FIELD(arg0, s32 *, 0x168) = (s32) (M2C_FIELD(arg0, s32 *, 0x168) | lbl_805DC56C);
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x168) = (s32) (M2C_FIELD(arg0, s32 *, 0x168) & 0xFFFFFFFE);
    }
}

}
