#include "types.h"
struct E_80090418 { u8 pad[8]; s32 x8; s32 xc; };

struct G_80090418 { u8 pad[0x42c]; E_80090418 *tbl; };

struct O_80090418 { u8 pad[0x24]; s32 x24; u8 pad2[0xc]; s32 x34; };

struct Body_80090178 {
    u8 pad0[0x18];
    void *vtable;
    u8 pad1C[0x3C4 - 0x1C];
    s32 ids[5];
    s16 count;
    u8 pad3DA[2];
    void *parts[4];
};

extern "C" {
extern G_80090418 *lbl_805D4F20;
void TObjPlayer__sub_80090418(O_80090418 *self, s32 i);
void queue_destruction__7TObjectFv(void *);
void __dt__14TObjEneBalClawFv(void *, int);
s32 get_flag_0x388_b24__10TObjPlayerFv(void *);
void *find_entity_by_id(u16);
void free_collision_body_parts(void *);
void __dl__7TObjectFPv(void *);
extern u8 lbl_8048EF0C[];
Body_80090178 *TObjEneBalClawBody__sub_80090178(Body_80090178 *self, s16 flag);
}

extern "C" {

Body_80090178 *TObjEneBalClawBody__sub_80090178(Body_80090178 *self, s16 flag) {
    s32 i;
    void *p;
    if (self != NULL) {
        self->vtable = lbl_8048EF0C;
        free_collision_body_parts(self);
        if (self->parts[0] != NULL) {
            queue_destruction__7TObjectFv(self->parts[0]);
        }
        if (self->parts[1] != NULL) {
            queue_destruction__7TObjectFv(self->parts[1]);
        }
        if (self->parts[2] != NULL) {
            queue_destruction__7TObjectFv(self->parts[2]);
        }
        if (self->parts[3] != NULL) {
            queue_destruction__7TObjectFv(self->parts[3]);
        }
        if (get_flag_0x388_b24__10TObjPlayerFv(self) != 0) {
            for (i = 0; i < self->count; i++) {
                p = find_entity_by_id(self->ids[i]);
                if (p != NULL) {
                    queue_destruction__7TObjectFv(p);
                }
            }
        }
        __dt__14TObjEneBalClawFv(self, 0);
        if (flag > 0) {
            __dl__7TObjectFPv(self);
        }
    }
    return self;
}

void TObjPlayer__sub_80090418(O_80090418 *self, s32 i) {
    self->x34 = lbl_805D4F20->tbl[i].x8;
    self->x24 = lbl_805D4F20->tbl[i].xc;
}

}
