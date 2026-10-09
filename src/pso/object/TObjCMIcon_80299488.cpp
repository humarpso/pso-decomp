#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802994B0_TObjCMIcon__data_805409E0 {
    M2C_UNK value;
    u8 remaining[0x54];
};

struct RecoveredGlobal_8029951C_lbl_8046518C {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_8029951C_TObjCMIcon__data_805409E0 {
    M2C_UNK value;
    u8 remaining[0x54];
};

struct Ent_80299488 { s32 a; s32 b; s32 c; };

typedef s32 M2C_UNK;
struct Ent_802995A0 {
    s32 a;
    f32 depth;
    f32 x;
};

struct Grp_802995A0 {
    s32 n;
    s32 ids[4];
};

struct V2_802995A0 {
    f32 x;
    f32 y;
};

struct Icon_802997DC { s32 state; f32 a; f32 b; };

struct Grp_802997DC { s32 n; s32 ids[4]; };

extern "C" {
s32 TObjCMIcon__sub_80299598(M2C_UNK arg0, s32 arg1);
extern RecoveredGlobal_802994B0_TObjCMIcon__data_805409E0 TObjCMIcon__data_805409E0;
void TObjCMIcon__sub_802994B0(s32 arg0);
void TObjCMIcon__sub_8029957C(void* p, void* q);
extern RecoveredGlobal_8029951C_lbl_8046518C lbl_8046518C;
extern RecoveredGlobal_802994B0_TObjCMIcon__data_805409E0 TObjCMIcon__data_805409E0;
extern f32 TObjCMIcon__data_805D65A8;
extern const f32 lbl_805DDC38;
void init_icon_table__10TObjCMIconFv(void);
extern RecoveredGlobal_802994B0_TObjCMIcon__data_805409E0 TObjCMIcon__data_805409E0;
void reset_icon_flags__10TObjCMIconFv(void);
void reset_icon_flags__10TObjCMIconFv(void);
void TObjCMIcon__sub_802994B0(s32 arg0);
void TObjCMIcon__sub_802994C8(s32 arg0, s32 *arg1);
s32 TObjCMIcon__sub_80299598(M2C_UNK arg0, s32 arg1);
extern RecoveredGlobal_802994B0_TObjCMIcon__data_805409E0 TObjCMIcon__data_805409E0;
extern f32 TObjCMIcon__data_805D65A8;
void set_depth_buffer_settings_1__Fv(void);
void set_depth_buffer_settings_id__FUl(u32);
f32 get_scale__14TObjCMMainMenuFv(void);
s32 get_creation_sprite_id__14TObjCMMainMenuFi(s32);
void draw_ui_sprite(s32, void *, f32, f32);
void restore_saved_depth_alpha_state(void);
extern f32 lbl_804DBE6C[];
extern Grp_802995A0 lbl_804DBDE0[];
extern const f32 lbl_805DDC3C;
extern const f32 lbl_805DDC40;
void render__10TObjCMIconFv(M2C_UNK self);
s32 get_creation_sprite_id__14TObjCMMainMenuFi(s32);
s32 TObjCMIcon__sub_80299598(M2C_UNK arg0, s32 arg1);
extern Grp_802995A0 lbl_804DBDE0[];
extern RecoveredGlobal_802994B0_TObjCMIcon__data_805409E0 TObjCMIcon__data_805409E0;
extern f32 TObjCMIcon__data_805D65A8;
extern const f32 lbl_805DDC44;
extern const f32 lbl_805DDC48;
extern const f32 lbl_805DDC4C;
extern const f32 lbl_805DDC50;
extern const f32 lbl_805DDC54;
void run_task__10TObjCMIconFv(M2C_UNK arg0);
}

extern "C" {

void TObjCMIcon__sub_8029957C(void* p, void* q);

typedef char RecoveredGlobal_802994B0_TObjCMIcon__data_805409E0_size[sizeof(RecoveredGlobal_802994B0_TObjCMIcon__data_805409E0) == 0x58 ? 1 : -1];

void reset_icon_flags__10TObjCMIconFv(void) {
    s32 i;
    Ent_80299488 *p = ((Ent_80299488 *)&TObjCMIcon__data_805409E0);
    for (i = 0; i < 7; i++) {
        p->a = 1;
        p++;
    }
}

void TObjCMIcon__sub_802994B0(s32 arg0) {
    M2C_FIELD(((u8 *)(&TObjCMIcon__data_805409E0.value) + (arg0 * 0xC)), s32 *, 0) = 0;
}

typedef char RecoveredGlobal_8029951C_lbl_8046518C_size[sizeof(RecoveredGlobal_8029951C_lbl_8046518C) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_8029951C_TObjCMIcon__data_805409E0_size[sizeof(RecoveredGlobal_8029951C_TObjCMIcon__data_805409E0) == 0x58 ? 1 : -1];

void TObjCMIcon__sub_802994C8(s32 arg0, s32 *arg1) {
    s32 i;
    reset_icon_flags__10TObjCMIconFv();
    for (i = 0; i < arg0; i++) {
        TObjCMIcon__sub_802994B0((s32)(arg1[i]));
    }
}

void init_icon_table__10TObjCMIconFv(void) {
    M2C_UNK *var_r30;
    s32 var_r29;
    var_r29 = 0;
    var_r30 = (M2C_UNK *)(&(*(RecoveredGlobal_8029951C_TObjCMIcon__data_805409E0 *)&TObjCMIcon__data_805409E0).value);
    do {
        TObjCMIcon__sub_8029957C((void*)((int) (var_r30)), (void*)((void *) (&lbl_8046518C.value)));
        var_r29 += 1;
        var_r30 = (M2C_UNK *)((u8 *)((M2C_UNK *)((u8 *)(var_r30) + 0xC)));
    } while (var_r29 < 7);
    TObjCMIcon__data_805D65A8 = lbl_805DDC38;
}

void TObjCMIcon__sub_8029957C(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x8); }
s32 TObjCMIcon__sub_80299598(M2C_UNK arg0, s32 arg1) {
    return arg1;
}
struct RecoveredGlobal_802994B0_TObjCMIcon__data_805409E0;
void render__10TObjCMIconFv(M2C_UNK self) {
    s32 idx[7];
    f32 keys[7];
    V2_802995A0 pos;
    s32 i;
    s32 j;
    s32 id;
    Ent_802995A0 *e;
    Grp_802995A0 *g;
    s32 n;
    s32 tid;
    s32 s;
    f32 k;
    f32 tk;
    f32 z;
    f32 depth;
    f32 x0;
    e = (Ent_802995A0 *)&TObjCMIcon__data_805409E0;
    for (i = 0; i < 7; i++, e++) {
        k = e->depth * e->depth;
        id = i;
        for (j = 0; j < i; j++) {
            if (k < keys[j]) {
                tk = k;
                tid = id;
                id = idx[j];
                k = keys[j];
                idx[j] = tid;
                keys[j] = tk;
            }
        }
        idx[j] = id;
        keys[j] = k;
    }
    set_depth_buffer_settings_1__Fv();
    set_depth_buffer_settings_id__FUl(2);
    x0 = lbl_804DBE6C[0] - TObjCMIcon__data_805D65A8;
    for (i = 0; i < 7; i++) {
        id = idx[i];
        depth = keys[i];
        g = &lbl_804DBDE0[id];
        pos.x = x0 + ((Ent_802995A0 *)&TObjCMIcon__data_805409E0)[id].x;
        pos.y = lbl_804DBE6C[1] * get_scale__14TObjCMMainMenuFv();
        z = lbl_805DDC3C - (lbl_805DDC40 - (f32)(i / 7));
        for (n = 0; n < g->n; n++) {
            s = TObjCMIcon__sub_80299598(self, g->ids[n]);
            draw_ui_sprite(s, &pos, z, depth);
            pos.x += (f32)(get_creation_sprite_id__14TObjCMMainMenuFi(s) + 4);
        }
    }
    restore_saved_depth_alpha_state();
}
#pragma push
#pragma fp_contract on
void run_task__10TObjCMIconFv(M2C_UNK arg0) {
    Icon_802997DC *p;
    Grp_802997DC *g;
    s32 i;
    f32 v;
    f32 x;
    p = (Icon_802997DC *)&TObjCMIcon__data_805409E0;
    for (i = 0; i < 7; i++, p++) {
        if (p->state == 0) {
            if ((p->a += lbl_805DDC44) > 1.0f) {
                p->a = 1.0f;
            }
        } else {
            if ((p->a += lbl_805DDC48) < 0.0f) {
                p->a = 0.0f;
            }
        }
    }
    x = 0.0f;
    g = ((Grp_802997DC *)&lbl_804DBDE0);
    p = (Icon_802997DC *)&TObjCMIcon__data_805409E0;
    {
    s32 k;
    for (k = 0; k < 7; k++, p++, g++) {
        if (p->state == 1) {
            v = p->b - 1.0f;
            p->b = v;
            if (v < 0.0f) {
                p->b = 0.0f;
            }
        } else {
            s32 j;
            p->b += lbl_805DDC4C * (x - p->b);
            for (j = 0; j < g->n; j++) {
                x += (f32)(get_creation_sprite_id__14TObjCMMainMenuFi(TObjCMIcon__sub_80299598(arg0, g->ids[j])) + 4);
            }
            x += lbl_805DDC50;
        }
    }
    }
    TObjCMIcon__data_805D65A8 += lbl_805DDC54 * (x - TObjCMIcon__data_805D65A8);
}
#pragma pop

}
