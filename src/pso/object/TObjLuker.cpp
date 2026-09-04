#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void render__9TObjLukerFv(void);

void render__9TObjLukerFv(void) {  }

}
#else
#if PSO_CLASS_PACKAGE == 0x8001A438
#include "types.h"

extern "C" {

void set_flag_4__9TObjLukerFPv(void* p);

void set_flag_4__9TObjLukerFPv(void* p) { *(u16*)((char*)p + 0x4) |= 0x4; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801329FC
#include "types.h"

extern "C" {

int get_stat_table_entry__9TObjLukerFi(int a0);

    extern int lbl_804A6EE0[];
int get_stat_table_entry__9TObjLukerFi(int a0) {  return lbl_804A6EE0[a0]; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A1834
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjLuker__create(void *arg0);
void *TObjLuker__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TObjLuker__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xBC);
    if (o != NULL) {
        o = TObjLuker__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#endif
