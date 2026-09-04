#include "pso/TChCrTagPlGraphic.h"

TChCrTagPlGraphic::~TChCrTagPlGraphic() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__17TChCrTagPlGraphicFPv(void *arg0);
void render__17TChCrTagPlGraphicFv(void* p);
void run_task__17TChCrTagPlGraphicFv(void* p);
int TChCrTagPlGraphic__sub_802A3230(void*);
int TChCrTag__sub_802A1A00(void*);
void *__ct__17TChCrTagPlGraphicFv(void *, void *, void *);
void *__nw__7TObjectFUl(int);
int fn_80141A30(void);
int fn_802A3138(void*);
int set_depth_buffer_settings_1__Fv(void*);

void render__17TChCrTagPlGraphicFv(void* p) { set_depth_buffer_settings_1__Fv(p); fn_802A3138(p); fn_80141A30(); }

void run_task__17TChCrTagPlGraphicFv(void* p) { TChCrTag__sub_802A1A00(p); TChCrTagPlGraphic__sub_802A3230(p); }

extern void *tl_03;

void *create__17TChCrTagPlGraphicFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x50);
    if (o != NULL) {
        o = __ct__17TChCrTagPlGraphicFv(o, tl_03, arg0);
    }
    return o;
}

}
