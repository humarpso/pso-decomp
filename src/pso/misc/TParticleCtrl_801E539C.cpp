#include "types.h"

extern "C" {

struct ParticleDefinition {
    u8 data[0x24];
    s32 sprite_type;
};

void *__nw__7TObjectFUl(u32);
void *TQuadSpriteNormal__ct(void *, void *, ParticleDefinition *);
void *TQuadSpriteScl__ct(void *, void *, ParticleDefinition *);
void *TQuadSpriteCol__ct(void *, void *, ParticleDefinition *);
void *TQuadSpriteSclCol__ct(void *, void *, ParticleDefinition *);
void *TQuadSpriteSclColRot__ct(void *, void *, ParticleDefinition *);

extern ParticleDefinition lbl_804C5820[];
extern void *TParticleCtrl__data_80511F70[];
extern void *tl_particle;

void create_quad_sprites__13TParticleCtrlFv(void)
{
    s32 index = 0;
    ParticleDefinition *definitions = lbl_804C5820;
    void **sprites = TParticleCtrl__data_80511F70;
    void *sprite;

    do {
        ParticleDefinition *definition = &definitions[index];
        void *object;

        switch (definitions[index].sprite_type) {
        case 0:
            object = __nw__7TObjectFUl(0x2C);
            if (object != NULL) {
                object = TQuadSpriteNormal__ct(object, tl_particle, definition);
            }
            sprite = object;
            break;
        case 1:
            object = __nw__7TObjectFUl(0x2C);
            if (object != NULL) {
                object = TQuadSpriteScl__ct(object, tl_particle, definition);
            }
            sprite = object;
            break;
        case 2:
            object = __nw__7TObjectFUl(0x2C);
            if (object != NULL) {
                object = TQuadSpriteCol__ct(object, tl_particle, definition);
            }
            sprite = object;
            break;
        case 3:
            object = __nw__7TObjectFUl(0x2C);
            if (object != NULL) {
                object = TQuadSpriteSclCol__ct(object, tl_particle, definition);
            }
            sprite = object;
            break;
        case 4:
            object = __nw__7TObjectFUl(0x2C);
            if (object != NULL) {
                object = TQuadSpriteSclColRot__ct(object, tl_particle, definition);
            }
            sprite = object;
            break;
        }

        sprites[index] = sprite;
        index++;
    } while (index < 0x6C);
}

}
