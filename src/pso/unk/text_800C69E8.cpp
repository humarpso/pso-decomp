#include "types.h"

struct P_800C6A18 { u8 pad[0x30]; u32 flags; };

struct O_800C6A18 { u8 pad[0x2a8]; P_800C6A18 *p; u8 pad2[0x8c]; u16 f338; };

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Vec_800C6A48 { f32 x, y, z; };

extern "C" {
void release_destroyed_target__10TObjPlayerFPv(O_800C6A18 *self);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
void *csnVector(void *, void *, s32);
f32 horizontal_distance__10TObjPlayerFPvPv(void *, s32);
M2C_UNK vec3_add_to(void *, void *);
M2C_UNK matrix_mult_vec(int, void *, void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix_from(void *);
M2C_UNK pop_matrix();
extern Vec_800C6A48 lbl_8043BCAC;
extern Vec_800C6A48 lbl_8043BCB8;
extern const f64 lbl_8043BCC8[];
extern u8 identity_matrix[];
extern const f32 lbl_805DA068;
extern const f32 lbl_805DA06C;
void pick_open_direction__10TObjPlayerFPvPvff(u8 *self, f32 *dir, f32 a, f32 b);
s32 get_main_phase();
s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFPv(s32);
s32 get_player_by_client_id(s32);
extern s32 local_client_id;
extern s32 TLobby__designated_client_id;
u8 is_local_client_floor_leader(void);
}

extern "C" {

void TObjPlayer__sub_800C69E8(void* p);
void TObjPlayer__sub_800C69F4(void);
void TObjPlayer__sub_800C69F8(void);
void TObjPlayer__sub_800C69FC(void);
void TObjPlayer__sub_800C6A00(void);
void TObjPlayer__sub_800C6A04(void);
void TObjPlayer__sub_800C6A08(void);
void TObjPlayer__sub_800C6A0C(void);
u16 TObjPlayer__sub_800C6A10(void* p);

void TObjPlayer__sub_800C69E8(void* p) { *(s16*)((char*)p + 0x326) = 1; }
void TObjPlayer__sub_800C69F4(void) {  }
void TObjPlayer__sub_800C69F8(void) {  }
void TObjPlayer__sub_800C69FC(void) {  }
void TObjPlayer__sub_800C6A00(void) {  }
void TObjPlayer__sub_800C6A04(void) {  }
void TObjPlayer__sub_800C6A08(void) {  }
void TObjPlayer__sub_800C6A0C(void) {  }
u16 TObjPlayer__sub_800C6A10(void* p) { return *(u16*)((char*)p + 0x338); }
void release_destroyed_target__10TObjPlayerFPv(O_800C6A18 *self) {
    if (self->p != 0 && (self->p->flags & 0x800)) {
        self->p = 0;
        self->f338 = 0xFFFF;
    }
}
void pick_open_direction__10TObjPlayerFPvPvff(u8 *self, f32 *dir, f32 a, f32 b) {
    Vec_800C6A48 sp20;
    f32 best;
    s32 ang;
    s32 bestAng;
    s32 i;
    void *p;
    f32 d;
    {
        f64 r = get_ad_end_text_start__10TObjPlayerFv(dir[0], dir[2]);
        best = lbl_805DA068;
        ang = (s32) (lbl_8043BCC8[0] * r);
    }
    bestAng = ang;
    VecCopy__FP3VecPC3Vec(&sp20, self + 0x38);
    sp20.y += lbl_805DA06C;
    push_matrix_from(identity_matrix);
    {
        Vec_800C6A48 sp14 = lbl_8043BCAC;
        sp14.x = a + b;
        rotate_matrix_y(0, ang);
        for (i = 0; i < 3; i++) {
            matrix_mult_vec(0, &sp14, self + 0x29C);
            vec3_add_to(self + 0x29C, &sp20);
            p = csnVector(&sp20, self + 0x29C, -1);
            if (p == NULL) {
                pop_matrix();
                return;
            }
            d = horizontal_distance__10TObjPlayerFPvPv(self + 0x38, M2C_FIELD(p, s32 *, 4)) - b;
            if (best < d) {
                best = d;
                bestAng = ang;
            }
            rotate_matrix_y(0, 0x5555);
            ang += 0x5555;
        }
    }
    pop_matrix();
    push_matrix_from(identity_matrix);
    {
        Vec_800C6A48 sp8 = lbl_8043BCB8;
        sp8.x = best;
        rotate_matrix_y(0, bestAng);
        matrix_mult_vec(0, &sp8, self + 0x29C);
    }
    vec3_add_to(self + 0x29C, &sp20);
    pop_matrix();
}
#pragma push
#pragma opt_propagation off
u8 is_local_client_floor_leader(void) {
    s32 p;
    s32 floor;
    s32 id;
    s32 i;
    s32 n;
    if (get_main_phase() == 0xF) {
        p = get_player_by_client_id(TLobby__designated_client_id);
        if (p != 0) {
            if (get_field_3e4__10TObjPlayerFPv(p) == get_current_floor()) {
                return local_client_id == TLobby__designated_client_id;
            }
        }
        for (i = 0; i < 4; i++) {
            s32 t = TLobby__designated_client_id;
            n = i + 1;
            id = (t + n) % 4;
            p = get_player_by_client_id(id);
            if (p != 0) {
                if (get_field_3e4__10TObjPlayerFPv(p) == get_current_floor()) {
                    break;
                }
            }
        }
        return local_client_id == id;
    }
    return 1;
}
#pragma pop

}
