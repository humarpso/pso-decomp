#include "types.h"
struct Obj_8004AA04 { s32 count; u8 pad[0xC]; void **items; };

typedef struct Rec_8004AA80 {
    s32 a;
    s32 b;
    s32 c;
} Rec_8004AA80;

typedef struct Obj_8004AA80 {
    s32 count;
    u8 pad4[0x8 - 0x4];
    s32 f8;
    s32 fc;
    s32 *items;
} Obj_8004AA80;

extern "C" {
void destroy_buffer_pair(void *p, s32 flag);
int free__11TOBoss4RockFUi(void *p);
void fn_8004AA04(Obj_8004AA04 *self);
s32 get_bml_model(s32, s32);
int get_instance_count__9TBoss4UroFv(void);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(int);
s32 alloc_tables__6TLobbyFPvii(s32, s32, s32);
s32 collect_and_count__12TBoss3VoloptFUii(u32 arg0, s32 arg1);
s32 *alloc_buffer__11TOBoss4RockFPv(s32);
void init_model_node_tables(Obj_8004AA80 *arg0, Rec_8004AA80 *arg1, s32 arg2);
}

extern "C" {

void fn_8004AA04(Obj_8004AA04 *self) {
    s32 i;
    for (i = 0; i < self->count; i++) {
        if (self->items[i] != 0) {
            destroy_buffer_pair(self->items[i], 1);
            self->items[i] = 0;
        }
    }
    free__11TOBoss4RockFUi(self->items);
    self->items = 0;
}
void init_model_node_tables(Obj_8004AA80 *arg0, Rec_8004AA80 *arg1, s32 arg2) {
    s32 h;
    s32 i;
    Rec_8004AA80 *r;
    s32 t;
    s32 p;
    s32 j;
    h = get_instance_count__9TBoss4UroFv();
    if (h == 0 || arg1 == NULL || arg2 < 1) {
        return;
    }
    arg0->count = arg2;
    arg0->items = NULL;
    arg0->items = alloc_buffer__11TOBoss4RockFPv(arg0->count * 4);
    arg0->f8 = 0;
    arg0->fc = 0;
    for (j = 0; j < arg0->count; j++) {
        arg0->items[j] = 0;
    }
    for (i = 0; i < arg0->count; i++) {
        r = &arg1[i];
        t = collect_and_count__12TBoss3VoloptFUii(get_bml_model(h, r->a), r->b);
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x14);
        if (p != 0) {
            p = alloc_tables__6TLobbyFPvii(p, t, r->c);
        }
        arg0->items[i] = p;
    }
}

}
