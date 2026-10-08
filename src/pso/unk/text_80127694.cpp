#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18 { char pad[0x18]; };

struct VObj_18 : VBase_18 {
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
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual s32 m33();
};

struct Rec_80127694 {
    s32 kind;
    s16 uid;
    s16 sub;
    u8 rest[0x5C];
};

extern "C" {
void construct_target_cursor_records__10TObjPlayerFi(void *);
void spawn_particle_effect(void *, int);
void update_active_game_effect__10TObjPlayerFPv(void *);
void draw_icon__10TObjPlayerFPvii(void *, int, void *);
s16 is_status_subsystem_ready__10TObjPlayerFPv(void *);
void *get_extended_state__10TObjPlayerFPv(void *);
s16 TObjPlayer__sub_80121238(void *);
s16 get_uid__10TObjPlayerFPv(void *);
void *TObjPlayer__sub_80121248(void *, int);
s32 TObjPlayer__sub_8012125C(void *);
void create_tec_zonde__10TObjPlayerFPvPvPvPv(void *, void *, void *, int);
void TObjPlayer__sub_80127694(u8 *arg0);
}

extern "C" {

void TObjPlayer__sub_80127694(u8 *arg0) {
    u8 pos[12];
    Rec_80127694 rec;
    void *st;
    draw_icon__10TObjPlayerFPvii(arg0, 2, pos);
    spawn_particle_effect(pos, 0x1BE);
    draw_icon__10TObjPlayerFPvii(arg0, 3, pos);
    spawn_particle_effect(pos, 0x1BE);
    draw_icon__10TObjPlayerFPvii(arg0, 0, pos);
    if (is_status_subsystem_ready__10TObjPlayerFPv(*(void **)(arg0 + 0xF0)) == 2) {
        if (((VObj_18 *)arg0)->m33() == 1) {
            st = get_extended_state__10TObjPlayerFPv(*(void **)(arg0 + 0xF0));
            if (TObjPlayer__sub_8012125C(st) != 0) {
                void *e = TObjPlayer__sub_80121248(st, 0);
                construct_target_cursor_records__10TObjPlayerFi(&rec);
                rec.kind = 1;
                rec.uid = get_uid__10TObjPlayerFPv(e);
                rec.sub = TObjPlayer__sub_80121238(e);
                create_tec_zonde__10TObjPlayerFPvPvPvPv(*(void **)(arg0 + 0xF0), pos, &rec, 3);
            }
        }
    } else {
        update_active_game_effect__10TObjPlayerFPv(arg0);
    }
}

}
