#include "pso/TAdSelectTxtSubGC.h"

TAdSelectTxtSubGC::~TAdSelectTxtSubGC() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * TObjNpcHosa__create(void *arg0);
int TObjNpcHosa__sub_802A39B0(void);
void render__17TAdSelectTxtSubGCFv(void* p);
void *TObjControl__ct(void *, void *);
void *TObjNpcHosa__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);
int abs__4cXyzCFv(void*, void*);
int get_state_flag__9TMainTaskFv(void*);
int render_status__20TWindowSubStatusDispFPv(void*);

void render__17TAdSelectTxtSubGCFv(void* p) { if (get_state_flag__9TMainTaskFv(p) != 1) { abs__4cXyzCFv((void*)0, (void*)8); abs__4cXyzCFv((void*)1, (void*)10); render_status__20TWindowSubStatusDispFPv(p); abs__4cXyzCFv((void*)0, (void*)8); abs__4cXyzCFv((void*)1, (void*)6); } }

    extern int lbl_805D6640;
int TObjNpcHosa__sub_802A39B0(void) {  return lbl_805D6640; }

extern void *tl_04;

void * TObjNpcHosa__create(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3B8);
    if (o2 != NULL) {
        o2 = TObjNpcHosa__ct(o2, o, arg0);
    }
    return o2;
}

}
