#include "types.h"

extern "C" {

void *__dt__22TObjFogCollisionSwitchFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__16TObjFogCollisionFv(void *, int);

extern s32 __vt__22TObjFogCollisionSwitch[];

void *__dt__22TObjFogCollisionSwitchFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__22TObjFogCollisionSwitch;
        __dt__16TObjFogCollisionFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}

extern "C" {

void *TObjFogCollisionSwitch__ct(void *arg0);
void TObjFogCollision__ct(void *);

extern s32 __vt__22TObjFogCollisionSwitch[];
extern void *lbl_805D2E7C;

void *TObjFogCollisionSwitch__ct(void *arg0) {
    TObjFogCollision__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__22TObjFogCollisionSwitch;
    *(void **)((s8 *)arg0 + 0x0) = lbl_805D2E7C;
    return arg0;
}

}

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
    virtual s32 m12();
    virtual s32 m13();
};

struct VBase_18_26a62c { char pad[0x18]; };

struct VObj_18_26a62c : VBase_18_26a62c {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

struct Color_80153B64 { u32 v[4]; };

struct O_80153D98 { u8 pad[0x88]; s32 mode; };

extern "C" {
int TObjFogCollision__sub_80153F68(void *);
int TObjFogCollision__sub_80153F70(void);
void dispatch_collision_virtuals__16TObjFogCollisionFPv(u8 *arg0);
void copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
s32 scale_matrix(int, f32, f32, f32);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
s32 set_chunk_material_override_pair(int, int);
void set_chunk_material_color(void *);
s32 draw_chunk_object(s32);
extern Color_80153B64 lbl_8044002C;
extern Color_80153B64 lbl_8044003C;
extern Color_80153B64 lbl_8044004C;
extern s32 saved_model_draw_color[];
extern s32 model_material_color[];
extern s32 lbl_805D28BC;
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 chunk_polygon_flags_or_mask;
extern s32 chunk_polygon_flags_and_mask;
extern s32 model_render_flags;
extern const f32 lbl_805DB258;
extern const f32 lbl_805DB260;
extern const f32 lbl_805DB264;
void draw_volume__16TObjFogCollisionFPv(u8 *arg0);
void debug_printf_at(int, void *, ...);
extern char lbl_804400C8[];
extern char lbl_804400D4[];
extern char lbl_804400E0[];
extern char lbl_805DB268;
void TObjFogCollision__vt12(O_80153D98 *arg0);
s32 record_fog_collision_hit(s32, s32, u8);
s32 check_collision__16TObjFogCollisionFPvUs(u8 *arg0, u16 arg1);
int TObjFogCollision__sub_80153F68(void * _w0);
int TObjFogCollision__sub_80153F70(void);
void run_task__16TObjFogCollisionFv(void *arg0);
}

extern "C" {

void *TObjFogCollisionSwitch__create(void *arg0);
int TObjFogCollision__sub_80153F70(void);
void TObjFogCollision__vt11(u8 *arg0);
s32 check_collision__16TObjFogCollisionFPvUs(u8 *arg0, u16 arg1);
f32 horizontal_distance_squared(void *, s32);
s32 get_player_by_client_id(u16);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TObjFogCollisionSwitch__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x98);
    if (o != NULL) {
        o = ((void *(*)(void *, void *, void *))TObjFogCollisionSwitch__ct)(o, tl_05, arg0);
    }
    return o;
}

extern const f32 lbl_805DB26C;

void draw_volume__16TObjFogCollisionFPv(u8 *arg0) {
    f32 s;
    if (((VObj_18_26a62c *)(arg0))->m8(lbl_805DB260, *(f32 *)((s8 *)arg0 + 0x68)) != 0) {
        Color_80153B64 c0 = lbl_8044002C;
        Color_80153B64 c3 = lbl_8044003C;
        Color_80153B64 cd = lbl_8044004C;
        lbl_805D5660 = model_render_flags;
        copy_vec4__13TRaderMapCoreFPvPv(saved_model_draw_color, model_material_color);
        lbl_805D5664 = chunk_polygon_flags_and_mask;
        lbl_805D5668 = chunk_polygon_flags_or_mask;
        model_render_flags |= 0x810;
        set_chunk_material_override_pair(0xFF00, 0x800);
        switch (*(s32 *)((s8 *)arg0 + 0x90)) {
        case 0:
            set_chunk_material_color(&c0);
            break;
        case 1:
        case 2:
        case 4:
        case 5:
            set_chunk_material_color(&cd);
            break;
        case 3:
            set_chunk_material_color(&c3);
            break;
        }
        push_matrix();
        s = lbl_805DB264 * *(f32 *)((s8 *)arg0 + 0x68);
        post_translate_matrix(arg0 + 0x38);
        scale_matrix(0, s, lbl_805DB258, s);
        draw_chunk_object(lbl_805D28BC);
        pop_matrix();
        chunk_polygon_flags_and_mask = lbl_805D5664;
        chunk_polygon_flags_or_mask = lbl_805D5668;
        copy_vec4__13TRaderMapCoreFPvPv(model_material_color, saved_model_draw_color);
        model_render_flags = lbl_805D5660;
    }
}

void dispatch_collision_virtuals__16TObjFogCollisionFPv(u8 *arg0) {
    if (((s32)TObjFogCollision__sub_80153F70()) != 0) {
        ((VObj_18 *)(arg0))->m12();
    }
    if (((s32)TObjFogCollision__sub_80153F68((void *)((void *) (arg0)))) != 0) {
        ((VObj_18 *)(arg0))->m13();
    }
}

void TObjFogCollision__vt12(O_80153D98 *arg0) {
    debug_printf_at(0x13001C, &lbl_805DB268);
    debug_printf_at(0x130020, lbl_804400C8);
    if (arg0->mode == 0) {
        debug_printf_at(0x130021, lbl_804400D4);
    } else {
        debug_printf_at(0x130021, lbl_804400E0);
    }
}

void run_task__16TObjFogCollisionFv(void *arg0) {
    u16 i;
    if (TObjFogCollision__sub_80153F70() == 0 && TObjFogCollision__sub_80153F68(arg0) == 0) {
        for (i = 0; i != 4; i++) {
            if (check_collision__16TObjFogCollisionFPvUs((u8 *)arg0, i) != 0) {
                record_fog_collision_hit(i, *(s32 *)((s8 *)arg0 + 0x84), *(s32 *)((s8 *)arg0 + 0x88) == 0);
            }
        }
    }
}

s32 check_collision__16TObjFogCollisionFPvUs(u8 *arg0, u16 arg1) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f31;
    s32 temp_r3;

    temp_r3 = get_player_by_client_id((u16)arg1);
    if (temp_r3 != 0) {
        temp_f0 = *(f32 *)((s8 *)arg0 + 0x68);
        temp_f31 = temp_f0 * temp_f0;
        temp_f1 = horizontal_distance_squared(arg0 + 0x38, temp_r3 + 0x38);
        if (temp_f31 > temp_f1) {
            return 1;
        }
        if ((lbl_805DB26C + temp_f31) < temp_f1) {
            *(s32 *)((s8 *)arg0 + 0x94) = 0x3C;
        }
        goto block_5;
    }
block_5:
    return 0;
}

void TObjFogCollision__vt11(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x84);
    if (temp_r0 < 0) {
        *(s32 *)((s8 *)arg0 + 0x84) = 0;
        return;
    }
    if (temp_r0 >= 0x80) {
        *(s32 *)((s8 *)arg0 + 0x84) = 0x7F;
    }
}

int TObjFogCollision__sub_80153F68(void * _w0) { return 0; }
int TObjFogCollision__sub_80153F70(void) { return 0; }

}
