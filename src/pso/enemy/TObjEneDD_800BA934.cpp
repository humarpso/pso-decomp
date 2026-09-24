#include "types.h"

struct Part_800BA934 { u8 pad[0x1c]; u8 f1c[0x10]; };

struct Obj_800BA934 { u8 pad[0x38]; u8 f38[0x28]; void *f60; u8 pad2[0x40]; Part_800BA934 *parts; s32 count; };

extern "C" {
int TObjPlayer__sub_803D9B2C(void);
int TObjPlayer__sub_803D8CD4(void *);
f32 TOHangerMachine01__sub_803D9C00(void *);
int TObjPlayer__sub_803D9214(void *, void *);
int set_global_flag__10TObjPlayerFv(void);
int TCameraCtrl__sub_803D8934(void *, void *, void *);
void clear_global_state__10TObjPlayerFv(void);
int TObjPlayer__sub_803D9B78(void);
void TObjEneDD__sub_800BA934(Obj_800BA934 *self);
}

extern "C" {

int TObjEneDD__sub_800BA9BC(void);
int TObjEneDD__sub_800BAA2C(void);
int TObjEneDD__sub_800BAAE4(void);
void clear_field_388__9TObjEneDDFPv(void* p);
void init_model__9TObjEneDDFPv(void* p);
void set_active__9TObjEneDDFPv(void* p);
void TObjEneDD__vt85(void);
int TObjEneGibbles__sub_80156780(void*);

void TObjEneDD__sub_800BA934(Obj_800BA934 *self) {
    s32 i;
    TObjPlayer__sub_803D9B2C();
    TObjPlayer__sub_803D8CD4(0);
    TOHangerMachine01__sub_803D9C00(self->f38);
    TObjPlayer__sub_803D9214(0, self->f60);
    set_global_flag__10TObjPlayerFv();
    for (i = 0; i < self->count; i++) {
        TCameraCtrl__sub_803D8934(0, &self->parts[i], self->parts[i].f1c);
    }
    clear_global_state__10TObjPlayerFv();
    TObjPlayer__sub_803D9B78();
}

int TObjEneDD__sub_800BA9BC(void) { return 0; }
int TObjEneDD__sub_800BAA2C(void) { return 0; }
int TObjEneDD__sub_800BAAE4(void) { return 0; }

void init_model__9TObjEneDDFPv(void* p) { TObjEneGibbles__sub_80156780(p); TObjEneDD__sub_800BA934((Obj_800BA934 *)((void*)(p))); }
void clear_field_388__9TObjEneDDFPv(void* p) { *(s32*)((char*)p + 0x388) = 0; }
void set_active__9TObjEneDDFPv(void* p) { *(s32*)((char*)p + 0x388) = 1; }

}
