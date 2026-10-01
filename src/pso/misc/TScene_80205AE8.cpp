#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;

struct Cyc_80205D24 { u16 id; u16 reserved; s16 texture; s16 index; s32 timer; };

struct Uv_80205DE4 { u16 id; };

#include "pso/misc/TSceneMaterial.h"
extern "C" {
u8 *TScene__sub_80081A30(void *, M2C_UNK, s32, s32, s32);
u8 *__nw__7TObjectFUl(M2C_UNK);
extern void **TScene__data_805D5FD0;
void TScene__sub_80205CC4(s32 arg0);
extern void* TScene__data_805D6004;
s32 TScene__sub_80205D24(void *task, Cyc_80205D24 *c);
void copy_header_and_vec__6TSceneFPvPv(void* p, void* q);
extern void* TScene__data_805D6004;
s32 TScene__sub_80205DE4(void *task, Uv_80205DE4 *uv);
extern SceneMaterialRoot* TScene__data_805D5FCC;
extern void* TScene__data_805D6004;
s32 TScene__sub_80205D24(void *task, Cyc_80205D24 *c);
s32 TScene__sub_80205DE4(void *task, Uv_80205DE4 *uv);
void TScene__sub_802062B8(void *task);
}

extern "C" {

void TScene__sub_80205AE8(void);
void TScene__sub_80205FD0(void);
void copy_header_and_vec__6TSceneFPvPv(void* p, void* q);

void TScene__sub_80205AE8(void) {  }

void TScene__sub_80205CC4(s32 arg0) {
  s8 *new_var;
  s16 temp_r0;
  u8 *temp_r3;
  u8 *var_r31;
  var_r31 = (u8 *) (*TScene__data_805D5FD0);
  do
  {
    new_var = (s8 *) var_r31;
    temp_r3 = (u8 *) __nw__7TObjectFUl(0x38);
    if (temp_r3 != 0)
    {
      TScene__sub_80081A30(temp_r3, arg0, *((s32 *) (((s8 *) var_r31) + 4)), *((s32 *) (((s8 *) var_r31) + 8)), (s32) (*((s16 *) (((s8 *) var_r31) + 0))));
    }
    temp_r0 = *((s16 *) (new_var + 0xC));
    var_r31 += 0xC;
  }
  while (temp_r0 >= 0);
}

s32 TScene__sub_80205D24(void *task, Cyc_80205D24 *c) {
    s16 *p = (*(s16 * *)&TScene__data_805D6004);
    while (p[0] != -1) {
        if (p[0] & 1) {
            p += p[1] / 2 + 2;
            continue;
        }
        if (p[0] & 2) {
            if (c->id == p[2]) {
                if (c->index >= p[3]) {
                    c->index = 0;
                }
                p += c->index * 2 + 4;
                c->texture = p[0];
                c->timer = p[1];
                return 1;
            }
            p += p[1] / 2 + 2;
            continue;
        }
        return 0;
    }
    return 0;
}

s32 TScene__sub_80205DE4(void *task, Uv_80205DE4 *uv) {
    s16 *p;
    s16 n = 0;
    u16 *rec = NULL;
    p = (*(s16 * *)&TScene__data_805D6004);
    while (p[0] != -1) {
        if (p[0] & 1) {
            n = p[2];
            rec = (u16 *)(p + 4);
            break;
        }
        if (p[0] & 2) {
            p += p[1] / 2 + 2;
        } else {
            return 0;
        }
    }
    while (n > 0) {
        if (rec[0] == uv->id) {
            copy_header_and_vec__6TSceneFPvPv((void*)(uv), (void*)(rec));
            return 1;
        }
        rec = (u16 *)((u8 *)rec + 0x14);
        n--;
    }
    return 0;
}

void copy_header_and_vec__6TSceneFPvPv(void* p, void* q) { *(u16*)((char*)p + 0x0) = *(u16*)((char*)q + 0x0); *(u16*)((char*)p + 0x2) = *(u16*)((char*)q + 0x2); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x8); *(f32*)((char*)p + 0xc) = *(f32*)((char*)q + 0xc); *(f32*)((char*)p + 0x10) = *(f32*)((char*)q + 0x10); }

void TScene__sub_80205FD0(void) {  }

}

#include "pso/misc/TSceneMaterial.h"
extern "C" {
extern SceneMaterialRoot* TScene__data_805D5FCC;
extern void* TScene__data_805D6004;
SceneMaterialNode* TScene__sub_80203324(void*,SceneMaterialStatic*);
SceneMaterialNode* TScene__sub_80203304(void*,SceneMaterialAnimated*);

void* alloc__23TAdSinglePlyChrSelectGCFPv(u32);
void* init_buffers__6TSceneFPvii(void*,SceneMaterialNode*,u16);
void TScene__sub_80206058(void* task) {
    if(!TScene__data_805D6004||!TScene__data_805D5FCC)return;
    SceneMaterialRoot* root=TScene__data_805D5FCC;
    for(s32 section=0;section<root->count;++section) {
        SceneMaterialSection* room=&root->sections[section];
        for(s32 i=0;i<room->count;++i) {
            SceneMaterialStatic* object=&room->objects[i];
            if(object->flags&0x20) {
                SceneMaterialUv* uv=object->uv;
                if(uv->buffer)continue;
                SceneMaterialUv definition;definition.id=uv->id;
                if(TScene__sub_80205DE4((void *)(task), (Uv_80205DE4 *)(&definition))==1) {
                    uv->id=definition.id;uv->texture=definition.texture;
                    uv->u=definition.u;uv->v=definition.v;uv->du=definition.du;uv->dv=definition.dv;
                    SceneMaterialNode* node=TScene__sub_80203324(task,object);
                    void* buffer=alloc__23TAdSinglePlyChrSelectGCFPv(20);
                    if(buffer)buffer=init_buffers__6TSceneFPvii(buffer,node,uv->texture);
                    uv->buffer=buffer;
                } else object->flags&=~0x20;
            }
            if((object->flags&0x40)&&!TScene__sub_80205D24((void *)(task), (Cyc_80205D24 *)(object->cycle)))object->flags&=~0x40;
        }
        for(s32 i=0;i<room->animatedCount;++i) {
            SceneMaterialAnimated* object=&room->animated[i];
            if(object->flags&0x20) {
                SceneMaterialUv* uv=object->uv;
                if(uv->buffer)continue;
                SceneMaterialUv definition;definition.id=uv->id;
                if(TScene__sub_80205DE4((void *)(task), (Uv_80205DE4 *)(&definition))==1) {
                    uv->id=definition.id;uv->texture=definition.texture;
                    uv->u=definition.u;uv->v=definition.v;uv->du=definition.du;uv->dv=definition.dv;
                    SceneMaterialNode* node=TScene__sub_80203304(task,object);
                    void* buffer=alloc__23TAdSinglePlyChrSelectGCFPv(20);
                    if(buffer)buffer=init_buffers__6TSceneFPvii(buffer,node,uv->texture);
                    uv->buffer=buffer;
                } else object->flags&=~0x20;
            }
            if((object->flags&0x40)&&!TScene__sub_80205D24((void *)(task), (Cyc_80205D24 *)(object->cycle)))object->flags&=~0x40;
        }
    }
}
void TScene__sub_802062B8(void *task) {
    SceneMaterialSection *room;
    s32 section;
    SceneMaterialStatic *object;
    s32 i;
    SceneMaterialAnimated *anim;
    s32 j;
    if (!TScene__data_805D6004 || !TScene__data_805D5FCC) return;
    room = TScene__data_805D5FCC->sections;
    for (section = 0; section < TScene__data_805D5FCC->count; section++, room++) {
        object = room->objects;
        for (i = 0; i < room->count; i++, object++) {
            if ((object->flags & 0x20) && !TScene__sub_80205DE4(task, (Uv_80205DE4 *)object->uv)) object->flags &= ~0x20;
            if ((object->flags & 0x40) && !TScene__sub_80205D24(task, (Cyc_80205D24 *)object->cycle)) object->flags &= ~0x40;
        }
        anim = room->animated;
        for (j = 0; j < room->animatedCount; j++, anim++) {
            if ((anim->flags & 0x20) && !TScene__sub_80205DE4(task, (Uv_80205DE4 *)anim->uv)) anim->flags &= ~0x20;
            if ((anim->flags & 0x40) && !TScene__sub_80205D24(task, (Cyc_80205D24 *)anim->cycle)) anim->flags &= ~0x40;
        }
    }
}

}
