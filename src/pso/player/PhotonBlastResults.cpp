#include "types.h"
#include "pso/player/TUnk_804806E8.h"
#include "pso/player/TObjPlayer.h"
#include "pso/TParticleCtrl.h"
#include "pso/enemy/TObjEneDD.h"
#include "pso/misc/TLobby.h"

struct Slot_801A8868 { u8 pad[0x18]; };
struct Counts_801A8868 { s32 v[4]; };
struct Rec_801A8868 { u8 pad[0x20]; s32 f20; };

struct Hit_801A86E0 { s32 kind; f32 value; };
struct VBase_18_b27ba1 { char pad[0x18]; };
struct VObj_18_b27ba1 : VBase_18_b27ba1 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21(void *, struct Hit_801A86E0 *, s32, s32, s32);
};

extern "C" {

s16 TObjPlayer__sub_80113D90(void *);
extern const f32 lbl_805DC110;
extern const f32 lbl_805DC114;
extern const f32 lbl_805DC118;
extern const f32 lbl_805DC11C;
extern const f32 lbl_805DC120;
extern const f32 lbl_805DC124;
extern const f32 lbl_805DC128;
extern const f32 lbl_805DC12C;

s32 find_entity_by_id(s32, f32);

s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFv(void *);
s32 get_photon_blast_chain(void *, s32);
void *get_player_by_client_id(u32);

extern s32 photon_blast_donation_flags[];
void clear_photon_blast_donations(void);
s32 is_split_screen();
s32 get_stat_by_key_state__13TUnk_804B9870Fv(void *);
extern s32 local_client_id;
s32 is_photon_blast_presentation_admitted(u32 owner_id, void *records);
u16 obj_getField1c(void *);
s32 TObjPlayer__sub_801A9E10(void *, int, void *, void *, int, int);
void set_type__10TObjPlayerFs(void *, s16);
s32 TObjPlayer__sub_801AA528(s32 arg0, s16 arg1);
void *TObjPlayer__sub_801AA66C(void *, void *);
void *__nw__7TObjectFUl(int);
s16 TObjPlayer__sub_80313114(u8 *arg0);
extern Counts_801A8868 photon_blast_result_counts_init;
extern Rec_801A8868 photon_blast_sequence_table[];
void admit_photon_blast_sequence(u8 *players, void *self);

int get_player_data__10TObjPlayerFi(int);
void apply_photon_blast_action_hold(s32 arg0, s32 arg1, s32 arg2);

#pragma push
#pragma fp_contract on
f32 TObjPlayer::calc_photon_blast_power(s32 arg1, f32 farg0) {
    u8 *arg0 = (u8 *)this;
    f32 var_f30;
    void *mag;
    var_f30 = lbl_805DC110;
    if (*(u8 **)(arg0 + 0x38) != NULL) {
        mag = (void *)((TObjPlayer *)(*(u8 **)(arg0 + 0x38)))->activate_d04_slot();
        if (mag != 0) {
            switch (arg1) {
            case 0:
                var_f30 = farg0 + ((lbl_805DC114 * (f32)((TObjPlayer *)mag)->get_mag_data()) + lbl_805DC118 * (f32)(TObjPlayer__sub_80113D90(mag) * (((TObjPlayer *)(*(u8 **)(arg0 + 0x38)))->get_field_2c8() + ((TUnk_804806E8 *)(*(u8 **)(arg0 + 0x38)))->get_actor_attack_params_atp_min())));
                break;
            case 1:
                var_f30 = farg0 + ((lbl_805DC11C * (f32)((TObjPlayer *)mag)->get_mag_data()) + lbl_805DC120 * (f32)(((TObjPlayer *)(*(u8 **)(arg0 + 0x38)))->get_hp() * TObjPlayer__sub_80113D90(mag)));
                break;
            case 2:
                var_f30 = farg0 + ((lbl_805DC124 * (f32)((TObjPlayer *)mag)->get_mag_data()) + lbl_805DC128 * (f32)(TObjPlayer__sub_80113D90(mag) * (((TObjPlayer *)(*(u8 **)(arg0 + 0x38)))->get_field_2c8() + ((TUnk_804806E8 *)(*(u8 **)(arg0 + 0x38)))->get_actor_attack_params_atp_min())));
                break;
            case 3:
                var_f30 = farg0 + ((lbl_805DC124 * (f32)((TObjPlayer *)mag)->get_mag_data()) + lbl_805DC128 * (f32)(((TObjPlayer *)(*(u8 **)(arg0 + 0x38)))->get_ata() * TObjPlayer__sub_80113D90(mag)));
                break;
            case 4:
                var_f30 = (lbl_805DC12C * (f32)((TObjPlayer *)mag)->get_mag_data()) + farg0;
                break;
            case 5:
                var_f30 = 0.1f * (f32)((TObjPlayer *)mag)->get_mag_data();
                if (var_f30 >= 20.0f) {
                    var_f30 = 20.0f;
                }
                break;
            }
        }
    }
    return var_f30;
}
#pragma pop

s32 TObjPlayer::is_any_teammate_in_state() {
    struct { u8 _pad[0x20]; } sp8;
    s32 current_floor;
    s32 var_r30;

    current_floor = get_current_floor();
    var_r30 = 0;
loop_1:
    if ((((u32 (*)(s32))get_player_by_client_id)(var_r30) != 0U) && (current_floor == ((s32 (*)(void))get_field_3e4__10TObjPlayerFv)()) && (get_photon_blast_chain(&sp8, var_r30) == 2)) {
        return 1;
    }
    var_r30 += 1;
    if (var_r30 >= 4) {
        return 0;
    }
    goto loop_1;
}

s32 is_photon_blast_presentation_admitted(u32 owner_id, void *records) {
    void *local;
    void *owner;
    s16 group;
    if (is_split_screen() != 0) {
        return 1;
    }
    if (local_client_id == ((TObjPlayer *)records)->get_section_id()) {
        return 1;
    }
    local = get_player_by_client_id(local_client_id);
    if (local == NULL) {
        return 0;
    }
    group = get_stat_by_key_state__13TUnk_804B9870Fv(local);
    owner = get_player_by_client_id(owner_id);
    if (owner != NULL) {
        if (get_field_3e4__10TObjPlayerFv(local) == get_field_3e4__10TObjPlayerFv(owner) && group == (s16) get_stat_by_key_state__13TUnk_804B9870Fv(owner)) {
            return 1;
        }
    }
    return 0;
}

void apply_photon_blast_action_hold(s32 arg0, s32 arg1, s32 arg2) {
    u8 *plr;
    u8 *ent;
    s32 i;
    Hit_801A86E0 tmp1;
    Hit_801A86E0 tmp2;

    ent = ((u8 *(*)(u16))find_entity_by_id)(arg2);
    for (i = TLobby::get_game_mode(); i < TLobby::get_game_mode() + TObjEneDD::get_enemy_count(); i++) {
        plr = (u8 *)get_player_data__10TObjPlayerFi(i);
        if (plr != NULL && !(*(s32 *)((s8 *)plr + 0x30) & 0x40000000)) {
            if (is_split_screen() != 0) {
                tmp1.value = (f32)arg1;
                tmp1.kind = 0x14;
                Hit_801A86E0 hit1 = tmp1;
                ((VObj_18_b27ba1 *)plr)->m21(ent, &hit1, 0, -1, -1);
            } else if (*(s16 *)((s8 *)plr + 0x28) == (s16)get_stat_by_key_state__13TUnk_804B9870Fv(ent)) {
                tmp2.value = (f32)arg1;
                tmp2.kind = 0x14;
                Hit_801A86E0 hit2 = tmp2;
                ((VObj_18_b27ba1 *)plr)->m21(ent, &hit2, 0, -1, -1);
            }
        }
    }
}

void clear_photon_blast_donations(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        photon_blast_donation_flags[i] = 0;
    }
}
#define GET_STAT ((s16 (*)(void *))get_stat_by_key_state__13TUnk_804B9870Fv)
#define SET_TYPE ((void (*)(void *, u16))set_type__10TObjPlayerFs)
void admit_photon_blast_sequence(u8 *players, void *self) {
    Slot_801A8868 a[4];
    Slot_801A8868 b[4];
    s32 n;
    s32 j;
    s32 k;
    s32 flag;
    s32 delay;
    void *o;
    void *p;
    s32 i;
    s32 idx;
    s32 m;
    void *q;
    ((TObjPlayer *)(&a[0]))->init_arrays();
    ((TObjPlayer *)(&a[1]))->init_arrays();
    ((TObjPlayer *)(&a[2]))->init_arrays();
    ((TObjPlayer *)(&a[3]))->init_arrays();
    ((TObjPlayer *)(&b[0]))->init_arrays();
    ((TObjPlayer *)(&b[1]))->init_arrays();
    ((TObjPlayer *)(&b[2]))->init_arrays();
    ((TObjPlayer *)(&b[3]))->init_arrays();
    Counts_801A8868 counts = photon_blast_result_counts_init;
    for (n = 0; n < 4; n++) {
        SET_TYPE(&b[n], 0xFFFF);
        ((TObjPlayer *)(&b[n]))->set_field_2(-1);
    }
    n = 0;
    k = 0;
    for (j = 0; j < 4; j++, players += 0x18) {
        p = get_player_by_client_id(((TObjPlayer *)players)->get_section_id());
        if (p != NULL && GET_STAT(p) == GET_STAT(self)
            && TObjPlayer__sub_80313114(players) != -1) {
            SET_TYPE(&a[n], ((TObjPlayer *)players)->get_section_id());
            ((TObjPlayer *)(&a[n]))->set_field_2(TObjPlayer__sub_80313114(players));
            n++;
        }
    }
    for (i = n; i < 4; i++) {
        SET_TYPE(&a[i], 0xFFFF);
        ((TObjPlayer *)(&a[i]))->set_field_2(-1);
    }
    for (m = 0; m < 4; m++) {
        if (m != 0) {
            if (TObjPlayer__sub_80313114((u8 *)&a[m]) != -1) {
                if (TObjPlayer__sub_80313114((u8 *)&b[k]) == TObjPlayer__sub_80313114((u8 *)((u8 *)&a[m]))) {
                    counts.v[k]++;
                } else {
                    k++;
                }
            } else {
                k++;
            }
        }
        TObjPlayer__sub_801AA66C(&b[k], &a[m]);
    }
    flag = 0;
    for (i = 0; i < 4; i++) {
        if (i != obj_getField1c(self)) {
            q = get_player_by_client_id(i);
            if (q != NULL && GET_STAT(q) == GET_STAT(self)
                && photon_blast_sequence_table[obj_getField1c(q)].f20 != 0) {
                flag = 1;
            }
        }
    }
    if (flag != 0) {
        TObjPlayer__sub_801AA528((s32)&b[3], -1);
        TObjPlayer__sub_801AA528((s32)&b[2], -1);
        TObjPlayer__sub_801AA528((s32)&b[1], -1);
        TObjPlayer__sub_801AA528((s32)&b[0], -1);
        TObjPlayer__sub_801AA528((s32)&a[3], -1);
        TObjPlayer__sub_801AA528((s32)&a[2], -1);
        TObjPlayer__sub_801AA528((s32)&a[1], -1);
        TObjPlayer__sub_801AA528((s32)&a[0], -1);
        return;
    }
    if (is_photon_blast_presentation_admitted(obj_getField1c(self), b) != 0) {
        o = __nw__7TObjectFUl(0x98);
        if (o != NULL) {
            TObjPlayer__sub_801A9E10(o, obj_getField1c(self), b, &counts, 1, 0);
        }
    } else {
        idx = 0;
        for (i = 0; i < 4; i++) {
            if (TObjPlayer__sub_80313114((u8 *)&b[i]) == -1) {
                idx = i;
                break;
            }
        }
        delay = idx * 150 + 100;
        o = __nw__7TObjectFUl(0x98);
        if (o != NULL) {
            TObjPlayer__sub_801A9E10(o, obj_getField1c(self), b, &counts, 0, delay);
        }
    }
    TObjPlayer__sub_801AA528((s32)&b[3], -1);
    TObjPlayer__sub_801AA528((s32)&b[2], -1);
    TObjPlayer__sub_801AA528((s32)&b[1], -1);
    TObjPlayer__sub_801AA528((s32)&b[0], -1);
    TObjPlayer__sub_801AA528((s32)&a[3], -1);
    TObjPlayer__sub_801AA528((s32)&a[2], -1);
    TObjPlayer__sub_801AA528((s32)&a[1], -1);
    TObjPlayer__sub_801AA528((s32)&a[0], -1);
}
#undef GET_STAT
#undef SET_TYPE

}
