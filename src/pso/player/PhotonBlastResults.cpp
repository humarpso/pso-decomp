#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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

s16 get_actor_attack_params_atp_min(void *);
s16 get_ata__10TObjPlayerFPv(void *);
s16 get_field_2c8__10TObjPlayerFPv(void *);
int activate_d04_slot__10TObjPlayerFPv(void *);
s16 TObjPlayer__sub_80113D90(void *);
s16 get_mag_data__10TObjPlayerFPv(void *);
s16 get_hp__10TObjPlayerFPv(void *);
extern const f32 lbl_805DC110;
extern const f32 lbl_805DC114;
extern const f32 lbl_805DC118;
extern const f32 lbl_805DC11C;
extern const f32 lbl_805DC120;
extern const f32 lbl_805DC124;
extern const f32 lbl_805DC128;
extern const f32 lbl_805DC12C;
f32 calc_photon_blast_power__10TObjPlayerFPvif(u8 *arg0, s32 arg1, f32 farg0);

u8 *TPhotonConcentrate__ct(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3);
void *__dt__18TPhotonConcentrateFv(void *arg0, s16 arg1);
void render__18TPhotonConcentrateFv(void);
s32 create_particle_emitter(void *, M2C_UNK);
M2C_UNK construct_collider_proxy__10TObjPlayerFPv(s32, s32);
s32 find_entity_by_id(s32, f32);
u8 *VecCopy__FP3VecPC3Vec(void *, void *);
void __dl__7TObjectFPv(void *);
int begin_effect_render__13TParticleCtrlFv(void);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);
int end_effect_render__13TParticleCtrlFv(void);
void queue_destruction__7TObjectFv(void *);
extern M2C_UNK __vt__18TPhotonConcentrate[];
extern s32 lbl_805D34D0;

s32 is_any_teammate_in_state__10TObjPlayerFv(void);
s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFPv(void *);
s32 get_photon_blast_chain(void *, s32);
void *get_player_by_client_id(u32);

extern s32 photon_blast_donation_flags[];
void clear_photon_blast_donations(void);
s32 is_split_screen();
s32 get_stat_by_key_state__10TObjPlayerFPv(void *);
u16 get_section_id__10TObjPlayerFPv(void *);
extern s32 local_client_id;
s32 is_photon_blast_presentation_admitted(u32 owner_id, void *records);
u16 obj_getField1c(void *);
M2C_UNK TObjPlayer__sub_801A9E10(void *, int, void *, void *, int, int);
void set_field_2__10TObjPlayerFPvs(void *, s16);
void set_type__10TObjPlayerFPvs(void *, s16);
M2C_UNK TObjPlayer__sub_801AA528(void *, int);
M2C_UNK init_arrays__10TObjPlayerFi(void *);
void *TObjPlayer__sub_801AA66C(void *, void *);
void *__nw__7TObjectFUl(int);
s16 TObjPlayer__sub_80313114(void *);
extern Counts_801A8868 lbl_80446CB8;
extern Rec_801A8868 photon_blast_sequence_table[];
void admit_photon_blast_sequence(u8 *players, void *self);

int get_player_data__10TObjPlayerFi(int);
s32 get_game_mode__6TLobbyFv(void);
int get_enemy_count__9TObjEneDDFv(void);
void apply_photon_blast_action_hold(M2C_UNK arg0, s32 arg1, s32 arg2);

#pragma push
#pragma fp_contract on
f32 calc_photon_blast_power__10TObjPlayerFPvif(u8 *arg0, s32 arg1, f32 farg0) {
    f32 var_f30;
    void *mag;
    var_f30 = lbl_805DC110;
    if (*(u8 **)(arg0 + 0x38) != NULL) {
        mag = (void *)activate_d04_slot__10TObjPlayerFPv(*(u8 **)(arg0 + 0x38));
        if (mag != 0) {
            switch (arg1) {
            case 0:
                var_f30 = farg0 + ((lbl_805DC114 * (f32)get_mag_data__10TObjPlayerFPv(mag)) + lbl_805DC118 * (f32)(TObjPlayer__sub_80113D90(mag) * (get_field_2c8__10TObjPlayerFPv(*(u8 **)(arg0 + 0x38)) + get_actor_attack_params_atp_min(*(u8 **)(arg0 + 0x38)))));
                break;
            case 1:
                var_f30 = farg0 + ((lbl_805DC11C * (f32)get_mag_data__10TObjPlayerFPv(mag)) + lbl_805DC120 * (f32)(get_hp__10TObjPlayerFPv(*(u8 **)(arg0 + 0x38)) * TObjPlayer__sub_80113D90(mag)));
                break;
            case 2:
                var_f30 = farg0 + ((lbl_805DC124 * (f32)get_mag_data__10TObjPlayerFPv(mag)) + lbl_805DC128 * (f32)(TObjPlayer__sub_80113D90(mag) * (get_field_2c8__10TObjPlayerFPv(*(u8 **)(arg0 + 0x38)) + get_actor_attack_params_atp_min(*(u8 **)(arg0 + 0x38)))));
                break;
            case 3:
                var_f30 = farg0 + ((lbl_805DC124 * (f32)get_mag_data__10TObjPlayerFPv(mag)) + lbl_805DC128 * (f32)(get_ata__10TObjPlayerFPv(*(u8 **)(arg0 + 0x38)) * TObjPlayer__sub_80113D90(mag)));
                break;
            case 4:
                var_f30 = (lbl_805DC12C * (f32)get_mag_data__10TObjPlayerFPv(mag)) + farg0;
                break;
            case 5:
                var_f30 = 0.1f * (f32)get_mag_data__10TObjPlayerFPv(mag);
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

s32 is_any_teammate_in_state__10TObjPlayerFv(void) {
    struct { u8 _pad[0x20]; } sp8;
    s32 temp_r31;
    s32 var_r30;

    temp_r31 = get_current_floor();
    var_r30 = 0;
loop_1:
    if ((((u32 (*)(s32))get_player_by_client_id)(var_r30) != 0U) && (temp_r31 == ((s32 (*)(void))get_field_3e4__10TObjPlayerFPv)()) && (get_photon_blast_chain(&sp8, var_r30) == 2)) {
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
    if (local_client_id == get_section_id__10TObjPlayerFPv(records)) {
        return 1;
    }
    local = get_player_by_client_id(local_client_id);
    if (local == NULL) {
        return 0;
    }
    group = get_stat_by_key_state__10TObjPlayerFPv(local);
    owner = get_player_by_client_id(owner_id);
    if (owner != NULL) {
        if (get_field_3e4__10TObjPlayerFPv(local) == get_field_3e4__10TObjPlayerFPv(owner) && group == (s16) get_stat_by_key_state__10TObjPlayerFPv(owner)) {
            return 1;
        }
    }
    return 0;
}

void apply_photon_blast_action_hold(M2C_UNK arg0, s32 arg1, s32 arg2) {
    u8 *plr;
    u8 *ent;
    s32 i;
    Hit_801A86E0 tmp1;
    Hit_801A86E0 tmp2;

    ent = ((u8 *(*)(u16))find_entity_by_id)(arg2);
    for (i = get_game_mode__6TLobbyFv(); i < get_game_mode__6TLobbyFv() + get_enemy_count__9TObjEneDDFv(); i++) {
        plr = (u8 *)get_player_data__10TObjPlayerFi(i);
        if (plr != NULL && !(M2C_FIELD(plr, s32 *, 0x30) & 0x40000000)) {
            if (is_split_screen() != 0) {
                tmp1.value = (f32)arg1;
                tmp1.kind = 0x14;
                Hit_801A86E0 hit1 = tmp1;
                ((VObj_18_b27ba1 *)plr)->m21(ent, &hit1, 0, -1, -1);
            } else if (M2C_FIELD(plr, s16 *, 0x28) == (s16)get_stat_by_key_state__10TObjPlayerFPv(ent)) {
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
#define GET_STAT ((s16 (*)(void *))get_stat_by_key_state__10TObjPlayerFPv)
#define SET_TYPE ((void (*)(void *, u16))set_type__10TObjPlayerFPvs)
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
    init_arrays__10TObjPlayerFi(&a[0]);
    init_arrays__10TObjPlayerFi(&a[1]);
    init_arrays__10TObjPlayerFi(&a[2]);
    init_arrays__10TObjPlayerFi(&a[3]);
    init_arrays__10TObjPlayerFi(&b[0]);
    init_arrays__10TObjPlayerFi(&b[1]);
    init_arrays__10TObjPlayerFi(&b[2]);
    init_arrays__10TObjPlayerFi(&b[3]);
    Counts_801A8868 counts = lbl_80446CB8;
    for (n = 0; n < 4; n++) {
        SET_TYPE(&b[n], 0xFFFF);
        set_field_2__10TObjPlayerFPvs(&b[n], -1);
    }
    n = 0;
    k = 0;
    for (j = 0; j < 4; j++, players += 0x18) {
        p = get_player_by_client_id(get_section_id__10TObjPlayerFPv(players));
        if (p != NULL && GET_STAT(p) == GET_STAT(self)
            && TObjPlayer__sub_80313114(players) != -1) {
            SET_TYPE(&a[n], get_section_id__10TObjPlayerFPv(players));
            set_field_2__10TObjPlayerFPvs(&a[n], TObjPlayer__sub_80313114(players));
            n++;
        }
    }
    for (i = n; i < 4; i++) {
        SET_TYPE(&a[i], 0xFFFF);
        set_field_2__10TObjPlayerFPvs(&a[i], -1);
    }
    for (m = 0; m < 4; m++) {
        if (m != 0) {
            if (TObjPlayer__sub_80313114(&a[m]) != -1) {
                if (TObjPlayer__sub_80313114(&b[k]) == TObjPlayer__sub_80313114(&a[m])) {
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
        TObjPlayer__sub_801AA528(&b[3], -1);
        TObjPlayer__sub_801AA528(&b[2], -1);
        TObjPlayer__sub_801AA528(&b[1], -1);
        TObjPlayer__sub_801AA528(&b[0], -1);
        TObjPlayer__sub_801AA528(&a[3], -1);
        TObjPlayer__sub_801AA528(&a[2], -1);
        TObjPlayer__sub_801AA528(&a[1], -1);
        TObjPlayer__sub_801AA528(&a[0], -1);
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
            if (TObjPlayer__sub_80313114(&b[i]) == -1) {
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
    TObjPlayer__sub_801AA528(&b[3], -1);
    TObjPlayer__sub_801AA528(&b[2], -1);
    TObjPlayer__sub_801AA528(&b[1], -1);
    TObjPlayer__sub_801AA528(&b[0], -1);
    TObjPlayer__sub_801AA528(&a[3], -1);
    TObjPlayer__sub_801AA528(&a[2], -1);
    TObjPlayer__sub_801AA528(&a[1], -1);
    TObjPlayer__sub_801AA528(&a[0], -1);
}
#undef GET_STAT
#undef SET_TYPE

}
