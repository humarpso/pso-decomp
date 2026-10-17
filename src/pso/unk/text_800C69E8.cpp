#include "types.h"
#include "pso/enemy/TObjEnemyCustom.h"
#include "pso/enemy/TUnk_80493450.h"
#include "pso/player/TObjPlayer.h"

struct P_800C6A18 { u8 pad[0x30]; u32 flags; };

struct O_800C6A18 { u8 pad[0x2a8]; P_800C6A18 *p; u8 pad2[0x8c]; u16 f338; };

struct Vec_800C6A48 { f32 x, y, z; };

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
f64 atan2_float(f32, f32);
void *csnVector(void *, void *, s32);
f32 horizontal_distance__10TObjPlayerFPUc(void *, s32);
s32 vec3_add_to(void *, void *);
s32 matrix_mult_vec(int, void *, void *);
s32 rotate_matrix_y(int, int);
s32 push_matrix_from(void *);
s32 pop_matrix();
extern Vec_800C6A48 lbl_8043BCAC;
extern Vec_800C6A48 lbl_8043BCB8;
extern const f64 lbl_8043BCC8[];
extern u8 identity_matrix[];
extern const f32 lbl_805DA068;
extern const f32 lbl_805DA06C;
s32 get_main_phase();
s32 get_current_floor();
s32 get_player_by_client_id(s32);
extern s32 local_client_id;
extern s32 TLobby__designated_client_id;
u8 is_local_client_floor_leader(void);
u16 get_enemy_target_id(void* p);

void TUnk_80493450::vfunc_83() { this->mode = 1; }
void TUnk_80493450::vfunc_93() {  }
void TUnk_80493450::vfunc_94() {  }
void TUnk_80493450::vfunc_95() {  }
void TUnk_80493450::vfunc_96() {  }
void TUnk_80493450::vfunc_97() {  }
void TUnk_80493450::vfunc_98() {  }
void TUnk_80493450::vfunc_101() {  }
u16 get_enemy_target_id(void* p) { return *(u16*)((char*)p + 0x338); }
void TObjEnemyCustom::release_destroyed_target() {
    O_800C6A18 *self = (O_800C6A18 *)this;
    if (self->p != 0 && (self->p->flags & 0x800)) {
        self->p = 0;
        self->f338 = 0xFFFF;
    }
}
void TObjPlayer::pick_open_direction(f32 *dir, f32 a, f32 b) {
    u8 *self = (u8 *)this;
    Vec_800C6A48 sp20;
    f32 best;
    s32 ang;
    s32 bestAng;
    s32 i;
    void *p;
    f32 d;
    {
        f64 r = atan2_float(dir[0], dir[2]);
        best = lbl_805DA068;
        ang = (s32) (lbl_8043BCC8[0] * r);
    }
    bestAng = ang;
    VecCopy__FP3VecPC3Vec(&sp20, (u8 *)&this->position);
    sp20.y += lbl_805DA06C;
    push_matrix_from(identity_matrix);
    {
        Vec_800C6A48 sp14 = lbl_8043BCAC;
        sp14.x = a + b;
        rotate_matrix_y(0, ang);
        for (i = 0; i < 3; i++) {
            matrix_mult_vec(0, &sp14, (u8 *)&this->m_29c);
            vec3_add_to((u8 *)&this->m_29c, &sp20);
            p = csnVector(&sp20, (u8 *)&this->m_29c, -1);
            if (p == NULL) {
                pop_matrix();
                return;
            }
            d = horizontal_distance__10TObjPlayerFPUc((u8 *)&this->position, *(s32 *)((s8 *)p + 4)) - b;
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
        matrix_mult_vec(0, &sp8, (u8 *)&this->m_29c);
    }
    vec3_add_to((u8 *)&this->m_29c, &sp20);
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
            if (((TObjPlayer *)p)->get_field_3e4() == get_current_floor()) {
                return local_client_id == TLobby__designated_client_id;
            }
        }
        for (i = 0; i < 4; i++) {
            s32 t = TLobby__designated_client_id;
            n = i + 1;
            id = (t + n) % 4;
            p = get_player_by_client_id(id);
            if (p != 0) {
                if (((TObjPlayer *)p)->get_field_3e4() == get_current_floor()) {
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
