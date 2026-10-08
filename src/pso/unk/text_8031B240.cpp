#include "types.h"
struct Vec_8031B618 { f32 x, y, z; };

struct Sub_8031B618 { u8 pad[0xC]; f32 radius; };

struct Ctrl_8031B618 { u8 pad[0xA4]; Sub_8031B618 *sub; u8 pad2[0x2FC - 0xA8]; Vec_8031B618 pos; };

struct Obj_8031B618 { u8 pad[0x38]; Vec_8031B618 pos; u8 pad2[0x2FC - 0x44]; Vec_8031B618 pos2; };

extern "C" {
s32 find_nearest_visible_player(void *, int, f32);
void VecCopy__FP3VecPC3Vec(void *, void *);
f32 horizontal_distance_squared(void *, void *);
Ctrl_8031B618 *get_player_by_client_id(s32);
extern const f32 lbl_805DF390;
extern const f32 lbl_805DF394;
s32 fn_8031B618(Obj_8031B618 *arg0);
}

extern "C" {

s32 fn_8031B618(Obj_8031B618 *arg0) {
    s32 var_r30 = 0;
    Ctrl_8031B618 *c;
    VecCopy__FP3VecPC3Vec(&arg0->pos2, &arg0->pos);
    u16 id = find_nearest_visible_player(arg0, 0, lbl_805DF390);
    if (id != 0xFFFF) {
        c = get_player_by_client_id(id);
        if (c != 0) {
            if (!(horizontal_distance_squared(&arg0->pos2, &c->pos) > (lbl_805DF394 + c->sub->radius) * (lbl_805DF394 + c->sub->radius))) {
                var_r30 = 1;
            }
        }
    }
    return var_r30;
}

}
