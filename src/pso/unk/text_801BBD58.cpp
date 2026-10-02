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

typedef struct Msg_801BC068 {
    u8 pad0[2];
    u16 id;
    u8 pad4[2];
    s16 ang;
    u8 pad8[4];
    u8 vec[12];
} Msg_801BC068;

typedef struct Obj_801BC068 {
    u8 pad0[0xC];
    struct Obj_801BC068 *next;
    u8 pad10[0x38 - 0x10];
    u8 pos[12];
    u8 pad44[0x60 - 0x44];
    s32 ang;
    u8 pad64[0x68 - 0x64];
    f32 f68;
    u8 pad6c[0x84 - 0x6C];
    s32 f84;
} Obj_801BC068;

typedef struct List_801BC068 {
    u8 pad0[0x14];
    Obj_801BC068 *head;
} List_801BC068;

extern "C" {
void TObjPlayer__sub_801BC050(O_801BC050 *p);
extern const f32 TObjPlayer__data_805DC278;
extern const f32 lbl_805DC2B0;
s32 get_type__10TObjPlayerFPv(void *p);
void initialize_linked_object_reference(void *self, void *body);
void init_collision_body__10TObjPlayerFPv(Player_801BBD58 *self);
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 obj_isState2_324(void *);
s32 obj_getField1c(void *);
s32 check_value_equals__13TQuestColCtrlFPvi(void *, s32);
void TObjPlayer__sub_801C18E0(void *);
void TObjPlayer__sub_801C1978(void *);
extern s32 TObjPlayer__data_805D33E0;
extern List_801BC068 *tl_06;
void TObjPlayer__sub_801BC068(void *self, u16 id);
}

extern "C" {

void init_collision_body__10TObjPlayerFPv(Player_801BBD58 *self) {
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
void TObjPlayer__sub_801BC068(void *self, u16 id) {
    Msg_801BC068 m;
    s32 found;
    Obj_801BC068 *o;
    found = 0;
    for (o = tl_06->head; o != NULL; o = o->next) {
        if (check_value_equals__13TQuestColCtrlFPvi(o, TObjPlayer__data_805D33E0) != 0 && o->f84 == 0 &&
            (s32)o->f68 == id) {
            found = 1;
            break;
        }
    }
    if (found != 0 && (self == NULL || obj_isState2_324(self) == 0)) {
        TObjPlayer__sub_801C1978(&m);
        m.id = obj_getField1c(self);
        m.ang = o->ang;
        VecCopy__FP3VecPC3Vec(m.vec, o->pos);
        TObjPlayer__sub_801C18E0(&m);
    }
}

}
