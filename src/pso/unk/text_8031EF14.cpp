#include "types.h"
struct Obj_8031EF14 { u8 pad[0x410]; s32 count; u8 pad2[4]; u16 ids[6]; };

struct Obj_8031F0F0 { u8 pad[0x410]; s32 count; u8 pad2[4]; u16 ids[6]; };

struct Obj_8031EFAC { u8 pad[0x410]; s32 count; s32 f414; u16 ids[6]; };

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Obj_8031F070 { u8 pad[0x410]; s32 count; u8 pad2[4]; u16 ids[6]; };

extern "C" {
u8 *find_entity_by_id(u16);
void TObjEneRecon__sub_8031EF14(Obj_8031EF14 *arg0, u8 *arg1);
s32 check_v2_mode__9TObjEneDDFv();
u8 *find_entity_by_id(u16);
u16 TObjEneRecon__sub_8031D878();
s32 TObjEneRecon__sub_8031F0F0(Obj_8031F0F0 *arg0, u16 arg1);
u8 *find_entity_by_id(u16);
void TObjEneRecon__sub_8031EDBC(void *, u16);
void TObjEneRecon__sub_8031EFAC(Obj_8031EFAC *o, u8 *target);
u8 *find_entity_by_id(u16);
s32 is_anim_5__12TObjEneReconFPv();
s32 TObjEneRecon__sub_8031F070(Obj_8031F070 *arg0);
}

extern "C" {

void TObjEneRecon__sub_8031EF14(Obj_8031EF14 *arg0, u8 *arg1) {
    s32 i;
    for (i = 0; i < 6; i++) {
        if (find_entity_by_id(arg0->ids[i]) == arg1) {
            arg0->count--;
            arg0->ids[i] = arg0->ids[arg0->count];
            arg0->ids[arg0->count] = 0xFFFF;
            return;
        }
    }
}

void TObjEneRecon__sub_8031EFAC(Obj_8031EFAC *o, u8 *target) {
    s32 i;
    for (i = 0; i < 6; i++) {
        if (find_entity_by_id(o->ids[i]) == target) {
            TObjEneRecon__sub_8031EDBC(o, o->ids[i]);
            o->count--;
            o->ids[i] = o->ids[o->count];
            o->ids[o->count] = 0xFFFF;
            o->f414--;
            if (o->f414 < 0) {
                o->f414 = 0;
            }
            return;
        }
    }
}

s32 TObjEneRecon__sub_8031F070(Obj_8031F070 *arg0) {
    s32 i;
    if (arg0->count <= 0) {
        return 0;
    }
    for (i = 0; i < 6; i++) {
        if (find_entity_by_id(arg0->ids[i]) != NULL && is_anim_5__12TObjEneReconFPv() == 1) {
            return 1;
        }
    }
    return 0;
}

s32 TObjEneRecon__sub_8031F0F0(Obj_8031F0F0 *arg0, u16 arg1) {
    s32 n = 0;
    s32 i;
    for (i = 0; i < arg0->count; i++) {
        if (find_entity_by_id(arg0->ids[i]) != NULL && arg1 == TObjEneRecon__sub_8031D878()) {
            n++;
        }
    }
    if (check_v2_mode__9TObjEneDDFv() != 0) {
        return n < 4;
    }
    return n < 2;
}

}
