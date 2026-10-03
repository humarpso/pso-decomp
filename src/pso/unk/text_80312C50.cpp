#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct B_80312D4C { char pad[0x18]; };

struct Ply_80312D4C : B_80312D4C {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15(); virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19(); virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31(); virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35(); virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39(); virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51(); virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55(); virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59(); virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63(); virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67(); virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71(); virtual void m72(); virtual void m73(); virtual void m74();
    virtual void m75(f32);
};

extern "C" {
u8 * get_element__10TObjPlayerFPvi(void *, int);
int TObjPlayer__sub_80313218(void* p);
u8 *TObjPlayer__sub_80312FB0(u8 *arg0);
void set_field_2__10TObjPlayerFPvs(void *, s16);
void set_type__10TObjPlayerFPvs(void *, s16);
u8 *TObjPlayer__sub_80312FB0(u8 *arg0);
int check_flag_at_4__10TObjPlayerFPv(void* p);
void append_photon_blast_request(s32 arg0, s16 arg1, s16 arg2);
void *get_player_by_client_id(s32);
void trigger_photon_blast__10TObjPlayerFPv(void *);
void check_photon_blast_flag__10TObjPlayerFPv(void *);
u8 * get_element__10TObjPlayerFPvi(void *, int);
int TObjPlayer__sub_803131AC(void* a0);
void release_photon_blast_requests(void *registry);
u8 * get_element__10TObjPlayerFPvi(void *, int);
int TObjPlayer__sub_803131AC(void* a0);
int process_indexed_element__10TObjPlayerFii(void* a0, void* a1);
void TObjPlayer__sub_80312E98(void *o, u16 id);
u16 get_entity_type__10TObjPlayerFPv(void *);
void *TObjPlayer__sub_803131B4(void *, int);
void set_field_0__10TObjPlayerFPvs(void* p, int v);
void TObjPlayer__sub_80313250(void *arg0, s32 arg1);
int get_max_children__10TObjPlayerFPv(void* a0);
void TObjPlayer__sub_80313010(void *o, s32 id);
s32 get_section_id__10TObjPlayerFPv(void *);
void *get_player_by_client_id(s32);
u8 * get_element__10TObjPlayerFPvi(void *, int);
void create_party_effect__11TWindowCtrlFPvPv(s32, s32);
void TObjPlayer__sub_80313010(void *o, s32 id);
int query_field40__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_803131AC(void* a0);
extern const f32 lbl_805DF248;
void TObjPlayer__sub_80312D4C(void *o, s32 id);
s32 get_section_id__10TObjPlayerFPv(void *);
void *get_player_by_client_id(s32);
u8 * get_element__10TObjPlayerFPvi(void *, int);
int query_field40__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_803131AC(void* a0);
u16 TObjPlayer__sub_80312E0C(void *o);
u8 * get_element__10TObjPlayerFPvi(void *, int);
int TObjPlayer__sub_803131AC(void* a0);
void *TObjPlayer__sub_803131B4(void *, int);
s32 get_section_id__10TObjPlayerFPv(void *);
void *TObjPlayer__sub_80312CCC(void *list, s32 section);
}

extern "C" {

void TObjPlayer__sub_80312F0C(void* p);
int test_flags_any(void*, int);
int TObjPlayer__sub_801AA64C(void* a0 = 0);
int TObjPlayer__sub_803131AC(void* a0 = 0);
int TObjPlayer__sub_80313218(void* p);
void TObjPlayer__sub_80313250(void *arg0, s32 arg1);
int check_flag_at_4__10TObjPlayerFPv(void* p);
int get_max_children__10TObjPlayerFPv(void* a0 = 0);
int process_indexed_element__10TObjPlayerFii(void* a0 = 0, void* a1 = 0);
int query_field40__10TObjPlayerFPv(void* p);
int set_flags__10TObjPlayerFPvUi(void*, int);
void update_children__10TObjPlayerFPv(void* p);

void release_photon_blast_requests(void *registry) {
    s32 count;
    s32 i;
    u8 *owner;
    count = TObjPlayer__sub_803131AC((void*)(registry));
    for (i = 0; i < count; i++) {
        u16 player = ((u16)get_section_id__10TObjPlayerFPv(get_element__10TObjPlayerFPvi(registry, i)));
        if (player != 0xFFFF) {
            owner = (u8 *)get_player_by_client_id(player);
            if (owner != NULL) {
                check_photon_blast_flag__10TObjPlayerFPv(owner + 0x4AC);
                trigger_photon_blast__10TObjPlayerFPv(owner + 0x4AC);
            }
        }
    }
}

void *TObjPlayer__sub_80312CCC(void *list, s32 section) {
    s32 n;
    s32 i;
    u8 *e;
    n = TObjPlayer__sub_803131AC(list);
    for (i = 0; i < n; i++) {
        e = get_element__10TObjPlayerFPvi(list, i);
        if ((u16)section == (u16)get_section_id__10TObjPlayerFPv(e)) {
            return TObjPlayer__sub_803131B4(e, 0);
        }
    }
    return 0;
}

void TObjPlayer__sub_80312D4C(void *o, s32 id) {
    s32 n;
    s32 i;
    s32 sec;
    Ply_80312D4C *ent;
    u8 *e;
    n = TObjPlayer__sub_803131AC((void*)(o));
    for (i = 0; i < n; i++) {
        e = get_element__10TObjPlayerFPvi(o, i);
        sec = get_section_id__10TObjPlayerFPv(e);
        ent = (Ply_80312D4C *)get_player_by_client_id((u16)sec);
        if (ent != NULL && (u16)id != (u16)sec && query_field40__10TObjPlayerFPv((void*)((u8 *)ent + 0x4AC)) != 0) {
            create_party_effect__11TWindowCtrlFPvPv(id, sec);
            TObjPlayer__sub_80313010(e, id);
            ent->m75(lbl_805DF248);
        }
    }
}

typedef u16 (*SectionFn_80312E0C)(void *);
u16 TObjPlayer__sub_80312E0C(void *o) {
    s32 n;
    s32 i;
    u8 *e;
    u8 *ent;
    n = TObjPlayer__sub_803131AC((void*)(o));
    for (i = 0; i < n; i++) {
        e = get_element__10TObjPlayerFPvi(o, i);
        ent = (u8 *)get_player_by_client_id(((SectionFn_80312E0C)get_section_id__10TObjPlayerFPv)(e));
        if (ent != NULL && query_field40__10TObjPlayerFPv((void*)(ent + 0x4AC)) != 0) {
            return ((SectionFn_80312E0C)get_section_id__10TObjPlayerFPv)(e);
        }
    }
    return 0xFFFF;
}

void TObjPlayer__sub_80312E98(void *o, u16 id) {
    s32 n = TObjPlayer__sub_803131AC((void*)(o));
    s32 i;
    for (i = 0; i < n; i++) {
        if (id == ((u16)get_section_id__10TObjPlayerFPv(get_element__10TObjPlayerFPvi(o, i)))) {
            process_indexed_element__10TObjPlayerFii((void*)(o), (void*)((void *)i));
        }
    }
}

void TObjPlayer__sub_80312F0C(void* p) { { int n = TObjPlayer__sub_803131AC(p); int i; for (i = 0; i < n; i++) { process_indexed_element__10TObjPlayerFii(p, (void*)i); } } }

void append_photon_blast_request(s32 arg0, s16 arg1, s16 arg2) {
    s32 temp_r3;
    temp_r3 = ((s32)TObjPlayer__sub_80312FB0((u8 *)(arg0)));
    if (temp_r3 != 0) {
        check_flag_at_4__10TObjPlayerFPv((void*)((void *) temp_r3));
        set_type__10TObjPlayerFPvs((void *) temp_r3, arg1);
        set_field_2__10TObjPlayerFPvs((void *) temp_r3, arg2);
    }
}

u8 *TObjPlayer__sub_80312FB0(u8 *arg0) {
    s32 var_r31;
    u8 *temp_r3;
    var_r31 = 0;
loop_1:
    temp_r3 = (u8 *)(get_element__10TObjPlayerFPvi(arg0, var_r31));
    if (TObjPlayer__sub_80313218((void*)(temp_r3)) != 0) {
        return temp_r3;
    }
    var_r31 += 1;
    if (var_r31 >= 4) {
        return NULL;
    }
    goto loop_1;
}
void TObjPlayer__sub_80313010(void *o, s32 id) {
    s32 n;
    s32 i;
    void *e;
    n = get_max_children__10TObjPlayerFPv((void*)(o));
    for (i = 0; i < n; i++) {
        e = TObjPlayer__sub_803131B4(o, i);
        if ((u16)id == get_entity_type__10TObjPlayerFPv(e)) {
            TObjPlayer__sub_80313250(e, 10);
            return;
        }
        if (get_entity_type__10TObjPlayerFPv(e) == 0xFFFF) {
            set_field_0__10TObjPlayerFPvs((void*)(e), (int)(id));
            TObjPlayer__sub_80313250(e, 10);
            return;
        }
    }
}

}
