#include "types.h"
struct Obj_8031EF14 { u8 pad[0x410]; s32 count; u8 pad2[4]; u16 ids[6]; };

struct Obj_8031F0F0 { u8 pad[0x410]; s32 count; u8 pad2[4]; u16 ids[6]; };

struct Obj_8031EFAC { u8 pad[0x410]; s32 count; s32 f414; u16 ids[6]; };

struct Obj_8031F070 { u8 pad[0x410]; s32 count; u8 pad2[4]; u16 ids[6]; };

extern "C" {
u8 *find_entity_by_id(u16);
void remove_child_entity__12TObjEneReconFPvPv(Obj_8031EF14 *arg0, u8 *arg1);
s32 check_v2_mode__9TObjEneDDFv();
u8 *find_entity_by_id(u16);
u16 TObjEneRecon__sub_8031D878();
s32 is_below_child_limit__12TObjEneReconFPvUs(Obj_8031F0F0 *arg0, u16 arg1);
u8 *find_entity_by_id(u16);
void remove_tracked_id__12TObjEneReconFPvi(void *, u16);
void remove_tracked_target__12TObjEneReconFPvPv(Obj_8031EFAC *o, u8 *target);
u8 *find_entity_by_id(u16);
s32 is_anim_5__12TObjEneReconFPv();
s32 has_child_in_anim_5__12TObjEneReconFPv(Obj_8031F070 *arg0);
}

extern "C" {

void remove_child_entity__12TObjEneReconFPvPv(Obj_8031EF14 *arg0, u8 *arg1) {
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

void remove_tracked_target__12TObjEneReconFPvPv(Obj_8031EFAC *o, u8 *target) {
    s32 i;
    for (i = 0; i < 6; i++) {
        if (find_entity_by_id(o->ids[i]) == target) {
            remove_tracked_id__12TObjEneReconFPvi(o, o->ids[i]);
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

s32 has_child_in_anim_5__12TObjEneReconFPv(Obj_8031F070 *arg0) {
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

s32 is_below_child_limit__12TObjEneReconFPvUs(Obj_8031F0F0 *arg0, u16 arg1) {
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
