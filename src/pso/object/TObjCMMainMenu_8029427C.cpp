#include "types.h"
#include "pso/object/TObjCMMainMenu.h"

extern "C" {

void *__ct__12TChCrEffFadeFv(void *, int, void *, void *);
void *__nw__7TObjectFUl(int);

void *TObjCMMainMenu::create_fade(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x30);
    if (o != NULL) {
        o = __ct__12TChCrEffFadeFv(o, -1, arg0, arg1);
    }
    return o;
}

void *TObjCMMainMenu::create_fade_effect(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x30);
    if (o != NULL) {
        o = __ct__12TChCrEffFadeFv(o, 1, arg0, arg1);
    }
    return o;
}

}
