#pragma push

#include "types.h"
typedef s32 M2C_UNK;

struct Rec_801815F8 { s32 a; s32 b; s32 c[2]; };

struct Obj_801815F8 { s32 f00; u8 pad0[0x14]; u8 *vptr; s32 f1C; f32 f20; s32 f24; Rec_801815F8 recs[5]; };

struct Info_80181698 { s32 f0; u32 n; };

struct V3_80181698 { f32 x; f32 y; f32 z; };

extern "C" {
M2C_UNK destroy_buffer_pair(void *, M2C_UNK);
extern void *air_car_buffer_pair_table[];
void free_buffer_pair_table(void);
void __ct__7TObjectFP7TObject(void *);
extern u8 lbl_804B593C[];
extern s32 lbl_805D3248;
extern const f32 lbl_805DBBC8;
Obj_801815F8 *construct_traffic_manager(Obj_801815F8 *arg0);
s32 get_city_common_motion(s32 i);
s32 get_city_common_model(s32 i);
void bind_motion_context(s32, f32);
void sample_motion_node_transform(void *, void *, void *, void *, void *);
extern s32 lbl_80443B18[];
extern s32 lbl_80443B2C[];
s32 sample_aircar_path_position(s32 arg0, void *arg1, f32 farg0);
}

extern "C" {

#pragma push
#pragma opt_propagation off
Obj_801815F8 *construct_traffic_manager(Obj_801815F8 *arg0) {
    s32 i;
    s32 j;
    s32 off;
    Rec_801815F8 *r;
    s32 o;
    __ct__7TObjectFP7TObject(arg0);
    arg0->vptr = lbl_804B593C;
    arg0->f00 = lbl_805D3248;
    arg0->f1C = 0;
    arg0->f20 = lbl_805DBBC8;
    arg0->f24 = 0x14;
    for (i = 0; i < 5; i++) {
        r = &arg0->recs[i];
        r->a = 0;
        r->b = 0;
        for (j = 0; j < 2; j++) {
            r->c[j] = 0;
        }
    }
    return arg0;
}
#pragma pop

s32 sample_aircar_path_position(s32 arg0, void *arg1, f32 farg0) {
    V3_80181698 sp24;
    V3_80181698 sp18;
    f32 sp8[4];
    f32 lim;
    s32 r;
    Info_80181698 *m = ((Info_80181698 * (*)(s32))get_city_common_motion)(lbl_80443B18[arg0]);
    u32 n = m->n;
    r = 1;
    lim = (f32)(n - 1);
    if (farg0 > lim) {
        farg0 = lim;
        r = 0;
    }
    bind_motion_context((s32)m, farg0);
    void *t = ((void * (*)(s32))get_city_common_model)(lbl_80443B2C[arg0]);
    sample_motion_node_transform(t, arg1, &sp24, &sp18, &sp8);
    return r;
}

void free_buffer_pair_table(void) {
    s32 i;
    for (i = 4; i >= 0; i--) {
        if (air_car_buffer_pair_table[i] != 0) {
            destroy_buffer_pair(air_car_buffer_pair_table[i], 1);
            air_car_buffer_pair_table[i] = 0;
        }
    }
}

}

#pragma pop

#pragma push

#include "types.h"
struct E_801819CC { s32 a; s32 b; };

struct O_801819CC { u8 pad[0x430]; E_801819CC *entries; };

struct E_801819E4 { s32 a; s32 b; s32 c; s32 d; };

struct O_801819E4 { u8 pad[0x42c]; E_801819E4 *entries; };

extern "C" {
extern O_801819CC *lbl_805D5B28;
s32 get_city_common_motion(s32 i);
extern O_801819CC *lbl_805D5B28;
s32 get_city_common_model(s32 i);
}

extern "C" {

s32 get_city_common_motion(s32 i) {
    return lbl_805D5B28->entries[i].b;
}
s32 get_city_common_model(s32 i) {
    return (*(O_801819E4 * *)&lbl_805D5B28)->entries[i].c;
}

}

#pragma pop
