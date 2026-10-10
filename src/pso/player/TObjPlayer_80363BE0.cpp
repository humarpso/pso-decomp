#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {
void* TObjPlayer__sub_80363C5C(void*);
void copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
void* init_vtable_804F2A10__10TObjPlayerFPv(void*);
extern M2C_UNK lbl_804F29F8[];
extern M2C_UNK lbl_804F2A10[];
extern u8 lbl_8058D4C0[];
extern u8 * lbl_805D6FB8;
extern int player_item_id_list;
void push_to_list__10TObjPlayerFPvi(u8 *, s32);
void reset_id_array__10TObjPlayerFPv(void *);
s32 run_and_return_arg__10TObjPlayerFi(s32);
}
#define reset_id_array__10TObjPlayerFPv ((int (*)(void*))reset_id_array__10TObjPlayerFPv)

extern "C" {

void *TObjPlayer__sub_80363C04(void *arg0, s16 arg1);
void reset_id_array_global__10TObjPlayerFv(void);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

    extern int player_item_id_list;
void reset_id_array_global__10TObjPlayerFv(void) { reset_id_array__10TObjPlayerFPv((void*)(player_item_id_list)); }

extern M2C_UNK lbl_804F29F8[];

void *TObjPlayer__sub_80363C04(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F29F8;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#undef reset_id_array__10TObjPlayerFPv

#define lbl_804F29F8 ((unsigned char *)lbl_804F29F8)
#define reset_id_array__10TObjPlayerFPv ((int (*)(void*))reset_id_array__10TObjPlayerFPv)

extern "C" {

void* TObjPlayer__sub_80363C5C(void* a0);
int __ct__7TObjectFP7TObject(void);

    extern int player_item_id_list;
void* TObjPlayer__sub_80363C5C(void* a0) { __ct__7TObjectFP7TObject(); *(int*)((char*)a0 + 0x18) = (int)lbl_804F29F8; reset_id_array__10TObjPlayerFPv((void*)(player_item_id_list)); return a0; }

}
#undef lbl_804F29F8
#undef reset_id_array__10TObjPlayerFPv

#define TObjPlayer__sub_80363C5C ((void * (*)(void *, void *))TObjPlayer__sub_80363C5C)

extern "C" {

void create_cleanup_object__10TObjPlayerFPv(void *arg0);
void *__nw__7TObjectFUl(int);

void create_cleanup_object__10TObjPlayerFPv(void *arg0) {
    void *o;
    o = __nw__7TObjectFUl(0x1C);
    if (o != NULL) {
        TObjPlayer__sub_80363C5C(o, arg0);
    }
}

}
#undef TObjPlayer__sub_80363C5C

#define player_item_id_list (*(u32 *)&player_item_id_list)

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_static_buffer__10TObjPlayerFv(void);
void __dl__FPv(void*);

void free_static_buffer__10TObjPlayerFv(void) {
    if ((u32) player_item_id_list != 0U) {
        __dl__FPv((void*)player_item_id_list);
        player_item_id_list = 0U;
    }
}

}
#undef player_item_id_list

#define player_item_id_list (*(void * *)&player_item_id_list)
#define run_and_return_arg__10TObjPlayerFi ((void * (*)(void *))run_and_return_arg__10TObjPlayerFi)

struct VBase_18_1419ea { char pad[0x18]; };

struct VObj_18_1419ea : VBase_18_1419ea {
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
    virtual M2C_UNK m26();
};

extern "C" {
void copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
VObj_18_1419ea *query_game_join_id__10TObjPlayerFv(s32);
void func_80141618__Fv(void);
void set_depth_buffer_settings_id__FUl(u32);
void reset_transform_state__10TObjPlayerFv(void);
extern u8 saved_model_draw_color[];
extern u8 lbl_8058D4C0[];
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern u8 *lbl_805D6FB8;
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern s32 some_id_805c6f74;
void TObjPlayer__sub_80363D4C(void);
}

extern "C" {

void alloc_and_run_object__10TObjPlayerFv(void);
void *alloc__23TAdSinglePlyChrSelectGCFPv(int);

void alloc_and_run_object__10TObjPlayerFv(void) {
    void *o;

    o = alloc__23TAdSinglePlyChrSelectGCFPv(0xB4);
    if (o != NULL) {
        o = run_and_return_arg__10TObjPlayerFi(o);
    }
    player_item_id_list = o;
}
void TObjPlayer__sub_80363D4C(void) {
    s32 *p;
    s32 n;
    VObj_18_1419ea *obj;
    reset_transform_state__10TObjPlayerFv();
    lbl_805D5660 = some_id_805c6f74;
    lbl_805D5664 = lbl_805D7784;
    lbl_805D5668 = lbl_805D7780;
    copy_vec4__13TRaderMapCoreFPvPv(saved_model_draw_color, lbl_8058D4C0);
    n = *(s32 *)(lbl_805D6FB8 + 0xB0);
    p = (s32 *)(lbl_805D6FB8 + 0x30);
    while (n != 0) {
        obj = query_game_join_id__10TObjPlayerFv(*p++);
        if (obj != NULL) {
            set_depth_buffer_settings_id__FUl(1);
            obj->m26();
            reset_transform_state__10TObjPlayerFv();
            copy_vec4__13TRaderMapCoreFPvPv(lbl_8058D4C0, saved_model_draw_color);
            lbl_805D7784 = lbl_805D5664;
            lbl_805D7780 = lbl_805D5668;
            some_id_805c6f74 = lbl_805D5660;
            set_depth_buffer_settings_id__FUl(2);
            obj->m26();
            reset_transform_state__10TObjPlayerFv();
            copy_vec4__13TRaderMapCoreFPvPv(lbl_8058D4C0, saved_model_draw_color);
            lbl_805D7784 = lbl_805D5664;
            lbl_805D7780 = lbl_805D5668;
            some_id_805c6f74 = lbl_805D5660;
        }
        n--;
    }
    func_80141618__Fv();
    *(s32 *)(lbl_805D6FB8 + 0xB0) = 0;
}

}
#undef player_item_id_list
#undef run_and_return_arg__10TObjPlayerFi

extern "C" {

void *TObjPlayer__sub_80363EC4(void *arg0, s16 arg1);
void apply_loaded_item__10TObjPlayerFv(void);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
M2C_UNK get_model_ids__9TItemLoadFUcPvPv(M2C_UNK, void **, M2C_UNK *);
M2C_UNK submit_computer_command__10TObjPlayerFPv(s32, M2C_UNK, M2C_UNK, M2C_UNK);

void apply_loaded_item__10TObjPlayerFv(void) {
    void *spC;
    M2C_UNK sp8;

    get_model_ids__9TItemLoadFUcPvPv(5, &spC, &sp8);
    if (spC != NULL) {
        submit_computer_command__10TObjPlayerFPv(M2C_FIELD(spC, s32 *, 0x2C), 2, 2, 0xB);
    }
}

extern M2C_UNK lbl_804F2A10[];

void *TObjPlayer__sub_80363EC4(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F2A10;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}

#define lbl_804F2A10 ((unsigned char *)lbl_804F2A10)
#define lbl_805D6FB8 (*(int *)&lbl_805D6FB8)
#define reset_id_array__10TObjPlayerFPv ((int (*)(void*))reset_id_array__10TObjPlayerFPv)

extern "C" {

void* init_vtable_804F2A10__10TObjPlayerFPv(void* a0);
int __ct__7TObjectFP7TObject(void);

void* init_vtable_804F2A10__10TObjPlayerFPv(void* a0) { __ct__7TObjectFP7TObject(); *(int*)((char*)a0 + 0x18) = (int)lbl_804F2A10; reset_id_array__10TObjPlayerFPv((void*)(lbl_805D6FB8)); return a0; }

}
#undef lbl_804F2A10
#undef lbl_805D6FB8
#undef reset_id_array__10TObjPlayerFPv

#define lbl_805D6FB8 (*(void * *)&lbl_805D6FB8)
#define push_to_list__10TObjPlayerFPvi ((M2C_UNK (*)(void *, s32))push_to_list__10TObjPlayerFPvi)
#define reset_id_array__10TObjPlayerFPv ((M2C_UNK (*)(void *))reset_id_array__10TObjPlayerFPv)

extern "C" {

void push_id_to_list__10TObjPlayerFi(s32 arg0);

void push_id_to_list__10TObjPlayerFi(s32 arg0) {
    if ((s32) M2C_FIELD(lbl_805D6FB8, s32 *, 0xB0) == 0) {
        reset_id_array__10TObjPlayerFPv(lbl_805D6FB8);
    }
    push_to_list__10TObjPlayerFPvi(lbl_805D6FB8, arg0);
}

}
#undef lbl_805D6FB8
#undef push_to_list__10TObjPlayerFPvi
#undef reset_id_array__10TObjPlayerFPv

#define copy_vec4__13TRaderMapCoreFPvPv ((s32 (*)(void *, void *))copy_vec4__13TRaderMapCoreFPvPv)
#define init_vtable_804F2A10__10TObjPlayerFPv ((void * (*)(void *, void *))init_vtable_804F2A10__10TObjPlayerFPv)
#define lbl_8058D4C0 (*(RecoveredGlobal_803640C8_lbl_8058D4C0 *)&lbl_8058D4C0)
#define lbl_805D6FB8 (*(void * *)&lbl_805D6FB8)

struct RecoveredGlobal_803640C8_lbl_8058D4C0 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_8036414C_lbl_8058D4C0 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_80364198_lbl_8058D4C0 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_803640F8_lbl_8058D4C0 {
    M2C_UNK value;
    u8 remaining[0xC];
};

typedef s32 M2C_UNK;
struct Rec_80364028 { f32 a; s32 b; s32 c; s32 d; };

extern "C" {
void copy_gauge_warn_vec__10TObjPlayerFv(void);
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern s32 some_id_805c6f74;
void TObjPlayer__sub_8036414C(void);
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern s32 some_id_805c6f74;
void TObjPlayer__sub_80364198(void);
void push_model_fade_color__10TObjPlayerFPv(M2C_UNK *arg0);
void push_model_fade_color__10TObjPlayerFPv(M2C_UNK *arg0);
void set_chunk_material_override_pair(s32, s32);
M2C_UNK set_chunk_blend(M2C_UNK);
extern Rec_80364028 lbl_80479FF8;
extern s32 some_id_805c6f74;
extern const f32 lbl_805E0288;
void set_model_fade_alpha__10TObjPlayerFf(f32 farg0);
}

extern "C" {

void spawn_cleanup_helper__10TObjPlayerFPv(void *arg0);
void warn_if_gauge_low__10TObjPlayerFv(void);
M2C_UNK set_chunk_blend(M2C_UNK);
void *__nw__7TObjectFUl(int);

void spawn_cleanup_helper__10TObjPlayerFPv(void *arg0) {
    void *o;
    o = __nw__7TObjectFUl(0x1C);
    if (o != NULL) {
        init_vtable_804F2A10__10TObjPlayerFPv(o, arg0);
    }
}

extern const f32 lbl_805E0288;

void warn_if_gauge_low__10TObjPlayerFv(void) {
    if (M2C_FIELD(lbl_805D6FB8, f32 *, 0x2C) < lbl_805E0288) {
        set_chunk_blend(0x2500);
        copy_gauge_warn_vec__10TObjPlayerFv();
    }
}
typedef char RecoveredGlobal_803640C8_lbl_8058D4C0_size[sizeof(RecoveredGlobal_803640C8_lbl_8058D4C0) == 0x10 ? 1 : -1];

void set_model_fade_alpha__10TObjPlayerFf(f32 farg0) {
    if (farg0 < lbl_805E0288) {
        some_id_805c6f74 |= 0x24;
        set_chunk_material_override_pair(-1, 0x800);
        set_chunk_blend(0x2500);
        Rec_80364028 r = lbl_80479FF8;
        r.a = farg0 - lbl_805E0288;
        push_model_fade_color__10TObjPlayerFPv((M2C_UNK *)&r);
    }
    *(f32 *)((u8 *)lbl_805D6FB8 + 0x2C) = farg0;
}

void copy_gauge_warn_vec__10TObjPlayerFv(void) {
    copy_vec4__13TRaderMapCoreFPvPv((void *) (&lbl_8058D4C0.value), (void *) ((*(s32 *)&lbl_805D6FB8) + 0x1C));
}
typedef char RecoveredGlobal_8036414C_lbl_8058D4C0_size[sizeof(RecoveredGlobal_8036414C_lbl_8058D4C0) == 0x10 ? 1 : -1];

typedef char RecoveredGlobal_803640F8_lbl_8058D4C0_size[sizeof(RecoveredGlobal_803640F8_lbl_8058D4C0) == 0x10 ? 1 : -1];
void push_model_fade_color__10TObjPlayerFPv(M2C_UNK *arg0) {
    copy_vec4__13TRaderMapCoreFPvPv((void *) ((*(s32 *)&lbl_805D6FB8) + 0x1C), (void *) (&(*(RecoveredGlobal_803640F8_lbl_8058D4C0 *)&lbl_8058D4C0).value));
    if (arg0 != NULL) {
        copy_vec4__13TRaderMapCoreFPvPv((void *) (&(*(RecoveredGlobal_803640F8_lbl_8058D4C0 *)&lbl_8058D4C0).value), (void *) (arg0));
    }
}

void TObjPlayer__sub_8036414C(void) {
    some_id_805c6f74 = M2C_FIELD((*(u8 * *)&lbl_805D6FB8), s32 *, 0);
    copy_vec4__13TRaderMapCoreFPvPv((void *) (&(*(RecoveredGlobal_8036414C_lbl_8058D4C0 *)&lbl_8058D4C0).value), (void *) ((*(u8 * *)&lbl_805D6FB8) + 0xC));
    lbl_805D7784 = M2C_FIELD((*(u8 * *)&lbl_805D6FB8), s32 *, 4);
    lbl_805D7780 = M2C_FIELD((*(u8 * *)&lbl_805D6FB8), s32 *, 8);
}
typedef char RecoveredGlobal_80364198_lbl_8058D4C0_size[sizeof(RecoveredGlobal_80364198_lbl_8058D4C0) == 0x10 ? 1 : -1];
void TObjPlayer__sub_80364198(void) {
    M2C_FIELD((*(u8 * *)&lbl_805D6FB8), s32 *, 0) = (s32) some_id_805c6f74;
    copy_vec4__13TRaderMapCoreFPvPv((void *) ((*(u8 * *)&lbl_805D6FB8) + 0xC), (void *) (&(*(RecoveredGlobal_80364198_lbl_8058D4C0 *)&lbl_8058D4C0).value));
    M2C_FIELD((*(u8 * *)&lbl_805D6FB8), s32 *, 4) = (s32) lbl_805D7784;
    M2C_FIELD((*(u8 * *)&lbl_805D6FB8), s32 *, 8) = (s32) lbl_805D7780;
}

}
#undef copy_vec4__13TRaderMapCoreFPvPv
#undef init_vtable_804F2A10__10TObjPlayerFPv
#undef lbl_8058D4C0
#undef lbl_805D6FB8

#define lbl_805D6FB8 (*(u32 *)&lbl_805D6FB8)

extern "C" {

void free_global_805D6FB8__10TObjPlayerFv(void);
void __dl__FPv(void*);

void free_global_805D6FB8__10TObjPlayerFv(void) {
    if ((u32) lbl_805D6FB8 != 0U) {
        __dl__FPv((void*)lbl_805D6FB8);
        lbl_805D6FB8 = 0U;
    }
}

}
#undef lbl_805D6FB8

#define lbl_805D6FB8 (*(void * *)&lbl_805D6FB8)
#define run_and_return_arg__10TObjPlayerFi ((void * (*)(void *))run_and_return_arg__10TObjPlayerFi)

extern "C" {

void alloc_and_init_object_b4__10TObjPlayerFv(void);
void *alloc__23TAdSinglePlyChrSelectGCFPv(int);

void alloc_and_init_object_b4__10TObjPlayerFv(void) {
    void *o;

    o = alloc__23TAdSinglePlyChrSelectGCFPv(0xB4);
    if (o != NULL) {
        o = run_and_return_arg__10TObjPlayerFi(o);
    }
    lbl_805D6FB8 = o;
}

}
#undef lbl_805D6FB8
#undef run_and_return_arg__10TObjPlayerFi

struct Elt80364258_80364258 { s32 f0; };

extern "C" {

void push_to_list__10TObjPlayerFPvi(u8 *arg0, s32 arg1);

void push_to_list__10TObjPlayerFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xB0);
    if (temp_r0 < 0x20) {
        ((struct Elt80364258_80364258 *)(arg0 + 0x30))[temp_r0].f0 = arg1;
        M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) + 1);
    }
}

}

extern "C" {

void reset_id_array__10TObjPlayerFPv(void *arg0);

void reset_id_array__10TObjPlayerFPv(void *arg0) {
    s32 *p = (s32 *)((u8 *)arg0 + 0x30);
    int i;
    for (i = 0; i < 32; i++) {
        *p++ = -1;
    }
    *(s32 *)((u8 *)arg0 + 0xB0) = 0;
}

}

#define reset_id_array__10TObjPlayerFPv ((M2C_UNK (*)(void))reset_id_array__10TObjPlayerFPv)

extern "C" {

s32 run_and_return_arg__10TObjPlayerFi(s32 arg0);

s32 run_and_return_arg__10TObjPlayerFi(s32 arg0) {
    reset_id_array__10TObjPlayerFPv();
    return arg0;
}

}
#undef reset_id_array__10TObjPlayerFPv
