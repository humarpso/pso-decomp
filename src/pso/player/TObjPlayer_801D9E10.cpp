#include "types.h"

extern "C" {

int TObjPlayer__sub_801D9E08(void);
void TObjPlayer__sub_801D9E10(void* p, s16 v);
void set_field_1c__10TObjPlayerFPvf(void* p, f32 v);
void set_field18__10TObjPlayerFPvf(void* p, f32 v);

void TObjPlayer__sub_801D9E10(void* p, s16 v) { *(s16*)((char*)p + 0x8) = v; }

}

#include "types.h"

struct Ent_801D9E18 { u8 d[4]; };

struct Obj_801D9E18 { u8 pad[0x20]; Ent_801D9E18 arr[1]; };

struct Obj_801D9E2C { u8 pad[0x48]; u8 arr[1]; };

extern "C" {
Ent_801D9E18 *TObjPlayer__sub_801D9E18(Obj_801D9E18 *p, s32 i);
void TObjPlayer__sub_801D9E2C(Obj_801D9E2C *p, s16 i);
}

extern "C" {

int TObjPlayer__sub_801D9E08(void);
void TObjPlayer__sub_801D9E10(void* p, s16 v);
void set_field_1c__10TObjPlayerFPvf(void* p, f32 v);
void set_field18__10TObjPlayerFPvf(void* p, f32 v);

Ent_801D9E18 *TObjPlayer__sub_801D9E18(Obj_801D9E18 *p, s32 i) {
    return &p->arr[i];
}
void TObjPlayer__sub_801D9E2C(Obj_801D9E2C *p, s16 i) {
    p->arr[i] = 0xFF;
}

}

#include "types.h"

extern "C" {

int TObjPlayer__sub_801D9E08(void);
void TObjPlayer__sub_801D9E10(void* p, s16 v);
void set_field_1c__10TObjPlayerFPvf(void* p, f32 v);
void set_field18__10TObjPlayerFPvf(void* p, f32 v);

void set_field_1c__10TObjPlayerFPvf(void* p, f32 v) { *(f32*)((char*)p + 0x1c) = v; }
void set_field18__10TObjPlayerFPvf(void* p, f32 v) { *(f32*)((char*)p + 0x18) = v; }

}
