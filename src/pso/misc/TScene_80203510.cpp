#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include "pso/misc/TSceneMaterial.h"

struct Rec_80203510 { s32 id; f32 pos[3]; u8 pad[0xC]; f32 radius; u8 pad2[0x14]; };

struct Root_80203510 { u8 pad[8]; s16 count; u8 pad2[6]; Rec_80203510 *recs; };

struct Root_80204024 { u8 pad[0x178]; f32 x; f32 y; f32 z; };

struct Vec_80204024 { f32 x, y, z; };

struct Inner_802040D4 { u8 pad[0x20]; f32 radius; };

struct Obj_802040D4 { u8 pad[4]; Inner_802040D4 *inner; u8 pos[1]; };

struct Rec_8020430C { u8 pad0[4]; f32 pos[3]; u8 pad1[0x20]; u32 flags; };

struct Root_8020430C { u8 pad[8]; s16 count; u8 pad2[2]; f32 radius; Rec_8020430C *recs; };

struct Vec_8020430C { f32 x, y, z; };

struct W_8020430C { s32 a, b, c; };

struct Cam_8020430C { u8 pad[0x178]; W_8020430C pos; };

extern "C" {
extern SceneMaterialRoot* TScene__data_805D5FCC;
SceneMaterialSection *TScene__sub_80203600(s32 id);
void TCameraCtrl__sub_803D8934(int, void *, void *);
extern const f32 TScene__data_805DC5D8;
bool TScene__sub_80204188(f32 farg0);
f32 fn_801315A0(void *, void *);
extern SceneMaterialRoot* TScene__data_805D5FCC;
extern const f32 lbl_805DC5D0;
s32 TScene__sub_80203510(void *arg0);
f32 TObjPlayer__sub_803D89C0(void *, void *);
f32 TNpcPlayer__sub_803E18C0(void *, void *, void *);
extern Root_80204024 *lbl_805D4DF0;
extern const f32 TScene__data_805DC5D8;
s32 TScene__sub_80204024(f32 thr, s32 unused, void *a, void *b, Vec_80204024 *c);
f32 fn_8013157C(void *, void *);
bool TScene__sub_80204188(f32 farg0);
extern Root_80204024 *lbl_805D4DF0;
s32 TScene__sub_802040D4(void *arg0, Obj_802040D4 *o, f32 f0, f32 f1);
f32 fn_8013157C(void *, void *);
extern Root_80204024 *lbl_805D4DF0;
extern SceneMaterialRoot* TScene__data_805D5FCC;
extern f32 TScene__data_805D5FE4;
void TScene__sub_8020430C(void);
}

extern "C" {

s32 get_player_ctrl_field__6TSceneFUs(u16 arg0);
u32 TPlayerBattleCtrl4P__sub_801BA74C(void *);

s32 TScene__sub_80203510(void *arg0) {
    Rec_80203510 *r;
    s32 best = -1;
    s32 i;
    f32 bestd;
    if ((*(Root_80203510 * *)&TScene__data_805D5FCC) == NULL) {
        return -1;
    }
    bestd = lbl_805DC5D0;
    r = (*(Root_80203510 * *)&TScene__data_805D5FCC)->recs;
    for (i = 0; i < (*(Root_80203510 * *)&TScene__data_805D5FCC)->count; i++, r++) {
        if (r->id >= 0) {
            f32 d = fn_801315A0(arg0, r->pos);
            if (!(d > r->radius * r->radius) && d < bestd) {
                bestd = d;
                best = r->id;
            }
        }
    }
    return best;
}

s32 get_player_ctrl_field__6TSceneFUs(u16 arg0) {
    u32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((void *) (arg0));
    if (temp_r3 != 0U) {
        return TScene__sub_80203510((void *)((void *) (temp_r3 + 0x38)));
    }
    return -1;
}

}

#include "pso/misc/TSceneMaterial.h"
extern "C" {
extern SceneMaterialRoot* TScene__data_805D5FCC;
extern void* TScene__data_805D6004;
SceneMaterialNode* TScene__sub_80203324(void*,SceneMaterialStatic*);
SceneMaterialNode* TScene__sub_80203304(void*,SceneMaterialAnimated*);
s32 TScene__sub_80205D24(void*,SceneMaterialCycle*);

f32 get_random_float__8TObjFishFv(f32);
void offset_position__6TSceneFPvii(void*,s32,s32);
void free_children__12TObjDoorJungFPvPv(void*,u16);
void PPCSync();
extern const f32 lbl_805DC5D4;

SceneMaterialSection *TScene__sub_80203600(s32 id) {
    s32 i;
    s16 count = TScene__data_805D5FCC->count;
    for (i = 0; i < count; i++) {
        if (TScene__data_805D5FCC->sections[i].id == id) {
            return &TScene__data_805D5FCC->sections[i];
        }
    }
    return NULL;
}

void TScene__sub_80203640(void* task) {
    if(!TScene__data_805D6004||!TScene__data_805D5FCC)return;
    SceneMaterialRoot* root=TScene__data_805D5FCC;
    for(s32 section=0;section<root->count;++section) {
        SceneMaterialSection* room=&root->sections[section];
        for(s32 i=0;i<room->count;++i)room->objects[i].flags&=~0x20000;
        for(s32 i=0;i<room->animatedCount;++i)room->animated[i].flags&=~0x20000;
    }
    for(s32 section=0;section<root->count;++section) {
        SceneMaterialSection* room=&root->sections[section];
        for(s32 i=0;i<room->count;++i) {
            SceneMaterialStatic* object=&room->objects[i];
            if(object->flags&(0x20000|0x04000000))continue;
            SceneMaterialNode* node=TScene__sub_80203324(task,object);
            if(object->flags&0x20) {
                SceneMaterialUv* uv=object->uv;uv->u+=uv->du;uv->v+=uv->dv;
                if(get_random_float__8TObjFishFv(uv->u)>=lbl_805DC5D4||get_random_float__8TObjFishFv(uv->v)>=lbl_805DC5D4) {
                    if(uv->buffer)offset_position__6TSceneFPvii(uv->buffer,(s32)uv->u,(s32)uv->v);
                    uv->u-=(f32)(s32)uv->u;uv->v-=(f32)(s32)uv->v;
                }
            }
            if(object->flags&0x40) {
                if(--object->cycle->timer<0) {
                    ++object->cycle->index;TScene__sub_80205D24(task,object->cycle);
                    free_children__12TObjDoorJungFPvPv(node->model,object->cycle->texture);
                    if(object->flags&0x20)object->uv->texture=object->cycle->texture;
                }
            }
            object->flags|=0x20000;
        }
        for(s32 i=0;i<room->animatedCount;++i) {
            SceneMaterialAnimated* object=&room->animated[i];
            if(object->flags&(0x20000|0x04000000))continue;
            SceneMaterialNode* node=TScene__sub_80203304(task,object);
            if(object->flags&0x20) {
                SceneMaterialUv* uv=object->uv;uv->u+=uv->du;uv->v+=uv->dv;
                if(uv->u>=lbl_805DC5D4||uv->v>=lbl_805DC5D4) {
                    if(uv->buffer)offset_position__6TSceneFPvii(uv->buffer,(s32)uv->u,(s32)uv->v);
                    uv->u-=(f32)(s32)uv->u;uv->v-=(f32)(s32)uv->v;
                }
            }
            if(object->flags&0x40) {
                if(--object->cycle->timer<0) {
                    ++object->cycle->index;TScene__sub_80205D24(task,object->cycle);
                    free_children__12TObjDoorJungFPvPv(node->model,object->cycle->texture);
                }
            }
            object->flags|=0x20000;
        }
    }
    PPCSync();
}

s32 TScene__sub_80204024(f32 thr, s32 unused, void *a, void *b, Vec_80204024 *c) {
    struct { Vec_80204024 p, q; } s;
    Vec_80204024 o;
    if (TObjPlayer__sub_803D89C0(b, c) < TScene__data_805DC5D8) {
        return 0;
    }
    s.p.x = lbl_805D4DF0->x;
    s.p.y = TScene__data_805DC5D8;
    s.p.z = lbl_805D4DF0->z;
    s.q.x = c->x;
    s.q.y = c->y;
    s.q.z = c->z;
    return TNpcPlayer__sub_803E18C0(a, &s, &o) <= thr;
}

s32 TScene__sub_802040D4(void *arg0, Obj_802040D4 *o, f32 f0, f32 f1) {
    if (o->inner != NULL && (*(u8 * *)&lbl_805D4DF0) != NULL) {
        void *p = o->pos;
        if (fn_8013157C((*(u8 * *)&lbl_805D4DF0) + 0x178, p) < o->inner->radius * o->inner->radius) {
            return 1;
        }
        return ((s32 (*)(void *, void *, f32, f32))TScene__sub_80204188)(arg0, p, f0, f1);
    }
    return 0;
}

bool TScene__sub_80204188(f32 farg0) {
    f32 sp[6];
    void *unused;
    TCameraCtrl__sub_803D8934(0, unused, &sp[0]);
    if (sp[2] > TScene__data_805DC5D8) {
        return 0;
    }
    return (sp[2] < -farg0) == 0;
}
void TScene__sub_8020430C(void) {
    f32 r;
    f32 r2;
    s32 off;
    s32 i;
    W_8020430C v = (*(Cam_8020430C * *)&lbl_805D4DF0)->pos;
    i = 0;
    off = 0;
    r = (*(Root_8020430C * *)&TScene__data_805D5FCC)->radius + TScene__data_805D5FE4;
    r2 = r * r;
    for (; i < (*(Root_8020430C * *)&TScene__data_805D5FCC)->count; i++, off += 0x34) {
        Rec_8020430C *rec = (Rec_8020430C *)((u8 *)(*(Root_8020430C * *)&TScene__data_805D5FCC)->recs + off);
        if (fn_8013157C(&v, rec->pos) < r2) {
            rec->flags |= 0x10000;
        } else {
            rec->flags &= ~0x10000;
        }
    }
}

}
