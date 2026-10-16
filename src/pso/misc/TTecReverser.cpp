#include "types.h"
#include "pso/misc/TUnk_804CCC28.h"
#include "pso/enemy/TObjEneBm5GibonU.h"
#include "pso/misc/TTecReverser.h"
#include "pso/misc/TTecAnti.h"
#include "pso/player/TObjPlayer.h"

struct VBase_18 { char pad[0x18]; };
struct VObj_18 : VBase_18 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual s32 m4(u32);
};

struct RecoveredGlobal_8023A094_lbl_804CC1CC { s32 value; u8 remaining[0x340]; };
typedef char RecoveredGlobal_8023A094_lbl_804CC1CC_size[sizeof(RecoveredGlobal_8023A094_lbl_804CC1CC) == 0x344 ? 1 : -1];

struct RecoveredGlobal_8023A094___vt__12TTecReverser { s32 value; u8 remaining[0x24]; };
typedef char RecoveredGlobal_8023A094___vt__12TTecReverser_size[sizeof(RecoveredGlobal_8023A094___vt__12TTecReverser) == 0x28 ? 1 : -1];

struct Vec_80239E44 { f32 x, y, z; };

struct Entry_80239E44 { s32 a; s32 b; s32 c; s32 pad; };

struct Player_80239E44 { u8 pad[0x2FC]; Vec_80239E44 pos; };

struct Obj_80239E44 {
    u8 pad[0x18];
    void *vtable;
    void *parts[3];
    s32 f28;
    Vec_80239E44 pos;
};

struct Rev_8023A364 {
    u8 pad[0xcc];
    f32 fcc;
    f32 fd0;
    f32 fd4;
    u8 padd8[0xdc - 0xd8];
    s16 fdc;
    s16 fde;
    s16 fe0;
};

struct VBase_8023A148 { char pad[0x18]; };

struct VObj_8023A148 : VBase_8023A148 { virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); virtual void m6(void *); };

struct VBase_8023A244 { char pad[0x18]; };

struct VObj_8023A244 : VBase_8023A244 { virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); virtual void m6(void *); };

struct List_8023A244 { u32 objs[16]; s32 vals[16]; s32 count; };

extern "C" {
s32 queue_destruction__7TObjectFv(void *);
u32 find_entity_by_id(int);
s32 is_active__12TTecReverserFv();
void run_task__12TTecReverserFv(u8 *arg0);
s32 obj_getField1c(int);
s32 play_sound_effect(int, void *, int, int);
s32 copy_technique_target_list(void *, void *);
s32 fn_8022BE64(void *, void *, void *);
s32 init_technique_effect_base(void *, void *, void *, void *);
extern RecoveredGlobal_8023A094_lbl_804CC1CC technique_param_table;
extern s32 __vt__12TTecReverser[];
extern s32 lbl_805D3818;
u8 *TTecReverser__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void __ct__7TObjectFP7TObject(void *self, void *parent);
void VecCopy__FP3VecPC3Vec(Vec_80239E44 *, Vec_80239E44 *);
void *create_timed_particle_emitter(void *owner, s32 idx, s32 b, s32 c);
extern s32 lbl_804CCC28[];
extern Entry_80239E44 revival_particle_table[];
extern const f32 lbl_805DC910;
Obj_80239E44 *construct_revival_particle_effect(Obj_80239E44 *self, Player_80239E44 *player, void *parent);
void debug_printf_at(s32 id, const char *fmt, ...);
extern char lbl_8044DBB0[];
extern char lbl_8044DBBC[];
extern char lbl_8044DBC8[];
extern char lbl_8044DBD4[];
extern char lbl_8044DBE0[];
extern char lbl_8044DBEC[];
s32 obj_getField1c(int);
s32 get_type__10TObjPlayerFPv(int);
s32 queue_destruction__7TObjectFv(void *);
u8 *query_technique_enemy_contacts(void *, s32);
u8 *query_technique_player_contacts(void *, s32);
void dispatch_technique_contact(u8 *arg0);
s32 obj_getField1c(int);
s32 get_type__10TObjPlayerFPv(int);
s32 queue_destruction__7TObjectFv(void *);
u8 *query_technique_enemy_contacts(void *, s32);
u8 *query_technique_player_contacts(void *, s32);
void dispatch_all_technique_contacts(u8 *arg0);
}

extern "C" {

void *__dt__12TTecReverserFPvs(void *arg0, s16 arg1);
void *__dt__12TTecReverserFv(void *arg0, s16 arg1);
s32 spawn_particle_effect(void *, s32);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void *__nw__7TObjectFUl(int);
void destroy_technique_base__9TTecLukerFPvs(void *, int);
s32 queue_destruction__7TObjectFv(void *);

extern s32 lbl_804CCC28[];

void *__dt__12TTecReverserFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804CCC28;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TUnk_804CCC28::run_task() {
    u8 *arg0 = (u8 *)this;
    this->m_28 = (s32) (this->m_28 + 1);
    if ((s32) this->m_28 == 0xA) {
        spawn_particle_effect(arg0 + 0x2C, 0x38);
    }
    if ((s32) this->m_28 > 0xC8) {
        queue_destruction__7TObjectFv(arg0);
    }
}

Obj_80239E44 *construct_revival_particle_effect(Obj_80239E44 *self, Player_80239E44 *player, void *parent) {
    s32 i;
    __ct__7TObjectFP7TObject(self, parent);
    self->vtable = lbl_804CCC28;
    self->f28 = 0;
    VecCopy__FP3VecPC3Vec(&self->pos, &player->pos);
    for (i = 0; i < 3; i++) {
        if (i == 0) {
            Vec_80239E44 v;
            VecCopy__FP3VecPC3Vec(&v, &self->pos);
            v.y += lbl_805DC910;
            self->parts[i] = create_timed_particle_emitter(&v, revival_particle_table[i].c, revival_particle_table[i].a, revival_particle_table[i].b);
        } else {
            self->parts[i] = create_timed_particle_emitter(&self->pos, revival_particle_table[i].c, revival_particle_table[i].a, revival_particle_table[i].b);
        }
    }
    return self;
}

void TTecReverser::render() {  }

void run_task__12TTecReverserFv(u8 *arg0) {
    u32 temp_r31;
    *(u32 *)((s8 *)arg0 + 0x1C) = find_entity_by_id((int) (*(u16 *)((s8 *)arg0 + 0xB4)));
    if ((u32) *(u32 *)((s8 *)arg0 + 0x1C) == 0U) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0xEC) == 0) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    temp_r31 = find_entity_by_id((int) (*(u16 *)((s8 *)arg0 + 0xF0)));
    if ((is_active__12TTecReverserFv() == 0) && (TObjPlayer::is_valid_and_active((int) (temp_r31)) != 0)) {
        ((VObj_18 *)(arg0))->m4(temp_r31);
    }
    queue_destruction__7TObjectFv((void *) (arg0));
}

void TTecReverser::create(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x148);
    if (o != NULL) {
        TTecReverser__ct((u8 *)(o), (s32)(arg0), (s32)(arg1), (s32)(arg2), (s32)(arg3));
    }
}

extern s32 __vt__12TTecReverser[];

void *__dt__12TTecReverserFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__12TTecReverser;
        destroy_technique_base__9TTecLukerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TTecReverser__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    u32 temp_r3;
    init_technique_effect_base((void *) (arg0), (void *) (arg1), (void *) (arg2), (void *) (arg4));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8023A094___vt__12TTecReverser *)&__vt__12TTecReverser).value;
    ((TObjPlayer *)(arg0 + 0xEC))->construct_target_cursor_records();
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D3818;
    ((TTecAnti *)(arg0 + 0x88))->copy_params((u8 *)((u8 *)&technique_param_table.value + 0x2EC));
    fn_8022BE64((void *) (arg0), (void *) (arg0 + 0x88), (void *) (arg4));
    copy_technique_target_list((void *) (arg0 + 0xEC), (void *) (arg3));
    play_sound_effect((int) (0x4002A812), (void *) (arg0 + 0x20), (int) (0), (int) (0));
    temp_r3 = *(u32 *)((s8 *)arg0 + 0x1C);
    if (temp_r3 != 0U) {
        *(s16 *)((s8 *)arg0 + 0xB4) = obj_getField1c((int) (temp_r3));
    }
    return arg0;
}

void dispatch_technique_contact(u8 *arg0) {
    u8 *var_r31;
    if ((u32) *(u32 *)((s8 *)arg0 + 0x128) == 0U) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    if ((u16) obj_getField1c((int) (*(s32 *)((s8 *)arg0 + 0x1C))) < 4U) {
        if (get_type__10TObjPlayerFPv((int) (*(s32 *)((s8 *)arg0 + 0x1C) + 0x828)) != 0) {
            var_r31 = query_technique_player_contacts(arg0, *(s32 *)((s8 *)arg0 + 0x1C));
        } else {
            var_r31 = query_technique_enemy_contacts(arg0, *(s32 *)((s8 *)arg0 + 0x1C));
        }
    } else {
        var_r31 = query_technique_player_contacts(arg0, *(s32 *)((s8 *)arg0 + 0x1C));
    }
    if (var_r31 == NULL) {
        ((VObj_8023A148*)arg0)->m4();
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    if (TObjPlayer::is_valid_and_active((int) (*(u32 *)((s8 *)var_r31 + 0))) != 0) {
        void *p = *(void **)((s8 *)var_r31 + 0);
        if (p != NULL) {
            *(s32 *)((s8 *)arg0 + 0xF8) = (s32) *(s32 *)((s8 *)var_r31 + 0x40);
            ((VObj_8023A148*)arg0)->m6(p);
        }
    }
}

void dispatch_all_technique_contacts(u8 *arg0) {
    List_8023A244 *list;
    s32 i;
    if ((u32) *(u32 *)((s8 *)arg0 + 0x128) == 0U) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    if ((u16) obj_getField1c((int) (*(s32 *)((s8 *)arg0 + 0x1C))) < 4U) {
        if (get_type__10TObjPlayerFPv((int) (*(s32 *)((s8 *)arg0 + 0x1C) + 0x828)) != 0) {
            list = (List_8023A244 *) query_technique_player_contacts(arg0, *(s32 *)((s8 *)arg0 + 0x1C));
        } else {
            list = (List_8023A244 *) query_technique_enemy_contacts(arg0, *(s32 *)((s8 *)arg0 + 0x1C));
        }
    } else {
        list = (List_8023A244 *) query_technique_player_contacts(arg0, *(s32 *)((s8 *)arg0 + 0x1C));
    }
    if (list == NULL) {
        ((VObj_8023A244 *) arg0)->m4();
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    for (i = 0; i < list->count; i++) {
        if (TObjPlayer::is_valid_and_active((int) list->objs[i]) != 0) {
            void *p = (void *) list->objs[i];
            if (p != NULL) {
                *(s32 *)((s8 *)arg0 + 0xF8) = list->vals[i];
                ((VObj_8023A244 *) arg0)->m6(p);
            }
        }
    }
}

void TObjEneBm5GibonU::debug_print_tech_params() {
    Rev_8023A364 *self = (Rev_8023A364 *)this;
    debug_printf_at(0x1E0014, lbl_8044DBB0, self->fcc);
    debug_printf_at(0x1E0015, lbl_8044DBBC, self->fdc);
    debug_printf_at(0x1E0016, lbl_8044DBC8, self->fde);
    debug_printf_at(0x1E0017, lbl_8044DBD4, self->fd0);
    debug_printf_at(0x1E0018, lbl_8044DBE0, self->fd4);
    debug_printf_at(0x1E0019, lbl_8044DBEC, self->fe0);
}

}
