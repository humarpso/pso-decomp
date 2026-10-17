#include "types.h"
#include "pso/object/TObject_80019A50.h"
#include "pso/player/TObjPlayer_800D7BFC.h"
#include "pso/unk/text_8029C214.h"
#include "pso/object/TObjMotion.h"
#include "pso/misc/TORockJungleL01.h"

extern "C" {

void __dl__7TObjectFPv(void *);
void *__dt__10TORockCaveFv(void *arg0, s16 arg1);
void *__nw__7TObjectFUl(int);
void free_collision_body_parts(void *);

void *TORockJungleL01__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD8);
    if (o != NULL) {
        o = TORockJungleL01__ct((u8 *)o, (s32)arg0);
    }
    return o;
}

extern s32 lbl_804DC448[];

void *TORockJungleL01::destroy(s16 arg1) {
    if (this != NULL) {
        *(s32 **)((s8 *)this + 0x18) = lbl_804DC448;
        if (*(void * *)&this->m_d4 != NULL) { queue_destruction__7TObjectFv(*(void * *)&this->m_d4); *(s32 *)&this->m_d4 = 0; }
        unregister_object_by_id();
        free_collision_body_parts(this);
        __dt__13TUnk_804949A8Fv((s8 *)this + 0xB4, -1);
        __dt__10TORockCaveFv(this, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(this);
        }
    }
    return this;
}

}
