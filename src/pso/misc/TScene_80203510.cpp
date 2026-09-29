#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include "pso/misc/TSceneMaterial.h"

extern "C" {
extern SceneMaterialRoot* TScene__data_805D5FCC;
SceneMaterialSection *TScene__sub_80203600(s32 id);
void TCameraCtrl__sub_803D8934(int, void *, void *);
extern const f32 TScene__data_805DC5D8;
bool TScene__sub_80204188(f32 farg0);
}

extern "C" {

s32 get_player_ctrl_field__6TSceneFUs(u16 arg0);
u32 TPlayerBattleCtrl4P__sub_801BA74C(void *);
s32 TScene__sub_80203510(void *);

s32 get_player_ctrl_field__6TSceneFUs(u16 arg0) {
    u32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((void *) (arg0));
    if (temp_r3 != 0U) {
        return TScene__sub_80203510((void *) (temp_r3 + 0x38));
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
bool TScene__sub_80204188(f32 farg0) {
    f32 sp[6];
    void *unused;
    TCameraCtrl__sub_803D8934(0, unused, &sp[0]);
    if (sp[2] > TScene__data_805DC5D8) {
        return 0;
    }
    return (sp[2] < -farg0) == 0;
}

}
