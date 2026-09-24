#include "types.h"
struct O_801BC050 { u16 a; u16 pad; s32 b; };

struct Vec_801BBD58 { f32 x, y, z; };

struct Body_801BBD58 {
    Vec_801BBD58 offset;
    f32 radius;
    f32 radius2;
    s32 kind;
    s32 flags;
    Vec_801BBD58 center;
    f32 extra;
};

struct Player_801BBD58 {
    u8 pad[0x38];
    Vec_801BBD58 pos;
    u8 pad44[0x324 - 0x44];
    s16 control;
    u8 pad326[0x680 - 0x326];
    Body_801BBD58 body;
    u8 pad6ac[0x828 - 0x6AC];
    u8 f828[4];
};

extern "C" {
void TObjPlayer__sub_801BC050(O_801BC050 *p);
extern const f32 TObjPlayer__data_805DC278;
extern const f32 lbl_805DC2B0;
s32 get_type__10TObjPlayerFPv(void *p);
void initialize_linked_object_reference(void *self, void *body);
void TObjPlayer__sub_801BBD58(Player_801BBD58 *self);
}

extern "C" {

void TObjPlayer__sub_801BBD58(Player_801BBD58 *self) {
    self->body.offset.x = TObjPlayer__data_805DC278;
    self->body.offset.y = TObjPlayer__data_805DC278;
    self->body.offset.z = TObjPlayer__data_805DC278;
    self->body.radius = lbl_805DC2B0;
    self->body.radius2 = lbl_805DC2B0;
    self->body.kind = 0;
    switch (self->control) {
    case 1:
    case 2:
        if (get_type__10TObjPlayerFPv(self->f828) == 0) {
            self->body.flags = 0x200B;
        } else {
            self->body.flags = 0x2003;
        }
        break;
    case 3:
        if (get_type__10TObjPlayerFPv(self->f828) == 0) {
            self->body.flags = 0x604B;
        } else {
            self->body.flags = 0x6043;
        }
        break;
    case 6:
        self->body.flags = 0x16043;
        break;
    }
    self->body.center.x = self->pos.x;
    self->body.center.y = self->pos.y;
    self->body.center.z = self->pos.z;
    self->body.extra = TObjPlayer__data_805DC278;
    initialize_linked_object_reference(self, &self->body);
}

void TObjPlayer__sub_801BC050(O_801BC050 *p) {
    p->a = 0xFFFF;
    p->b = 0;
}

}
