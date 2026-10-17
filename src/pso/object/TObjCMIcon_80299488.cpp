#include "types.h"
#include "pso/object/TObjCMIcon_80299488.h"
#include "pso/unk/text_80141A30.h"
#include "pso/render/depth_buffer.h"
#include "pso/TObjCMIcon.h"
#include "pso/object/TObjCMMainMenu.h"

struct RecoveredGlobal_802994B0_TObjCMIcon__data_805409E0 {
    s32 value;
    u8 remaining[0x54];
};

struct RecoveredGlobal_8029951C_lbl_8046518C {
    s32 value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_8029951C_TObjCMIcon__data_805409E0 {
    s32 value;
    u8 remaining[0x54];
};

struct Ent_80299488 { s32 a; s32 b; s32 c; };

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
extern RecoveredGlobal_802994B0_TObjCMIcon__data_805409E0 TObjCMIcon__icon_entries;
extern RecoveredGlobal_8029951C_lbl_8046518C lbl_8046518C;
extern f32 TObjCMIcon__horizontal_scroll_offset;
s32 get_creation_sprite_id__14TObjCMMainMenuFl(s32);
void draw_ui_sprite(s32, void *, f32, f32);
extern f32 cm_icon_screen_position[];
extern Grp_802995A0 TObjCMIcon__icon_group_table[];
extern const f32 lbl_805DDC44;
extern const f32 lbl_805DDC48;
extern const f32 lbl_805DDC4C;
extern const f32 lbl_805DDC50;
extern const f32 lbl_805DDC54;
typedef char RecoveredGlobal_802994B0_TObjCMIcon__data_805409E0_size[sizeof(RecoveredGlobal_802994B0_TObjCMIcon__data_805409E0) == 0x58 ? 1 : -1];

void TObjCMIcon::reset_icon_flags() {
    s32 i;
    Ent_80299488 *p = ((Ent_80299488 *)&TObjCMIcon__icon_entries);
    for (i = 0; i < 7; i++) {
        p->a = 1;
        p++;
    }
}

void TObjCMIcon__sub_802994B0(s32 arg0) {
    *(s32 *)((s8 *)((u8 *)(&TObjCMIcon__icon_entries.value) + (arg0 * 0xC)) + 0) = 0;
}

typedef char RecoveredGlobal_8029951C_lbl_8046518C_size[sizeof(RecoveredGlobal_8029951C_lbl_8046518C) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_8029951C_TObjCMIcon__data_805409E0_size[sizeof(RecoveredGlobal_8029951C_TObjCMIcon__data_805409E0) == 0x58 ? 1 : -1];

void TObjCMIcon__sub_802994C8(s32 arg0, s32 *arg1) {
    s32 i;
    TObjCMIcon::reset_icon_flags();
    for (i = 0; i < arg0; i++) {
        TObjCMIcon__sub_802994B0(arg1[i]);
    }
}

void TObjCMIcon::init_icon_table() {
    s32 *var_r30;
    s32 var_r29;
    var_r29 = 0;
    var_r30 = (s32 *)(&(*(RecoveredGlobal_8029951C_TObjCMIcon__data_805409E0 *)&TObjCMIcon__icon_entries).value);
    do {
        TObjCMIcon__sub_8029957C((void*)((int)var_r30), (void*)((void *) (&lbl_8046518C.value)));
        var_r29 += 1;
        var_r30 = (s32 *)((u8 *)((s32 *)((u8 *)var_r30 + 0xC)));
    } while (var_r29 < 7);
    TObjCMIcon__horizontal_scroll_offset = 0.0f;
}

void TObjCMIcon__sub_8029957C(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x8); }
s32 TObjCMIcon__sub_80299598(s32 arg0, s32 arg1) {
    return arg1;
}
struct RecoveredGlobal_802994B0_TObjCMIcon__data_805409E0;
void render__10TObjCMIconFv(s32 self) {
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
    e = (Ent_802995A0 *)&TObjCMIcon__icon_entries;
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
    set_depth_buffer_settings_1();
    set_depth_buffer_settings_id(2);
    x0 = cm_icon_screen_position[0] - TObjCMIcon__horizontal_scroll_offset;
    for (i = 0; i < 7; i++) {
        id = idx[i];
        depth = keys[i];
        g = &TObjCMIcon__icon_group_table[id];
        pos.x = x0 + ((Ent_802995A0 *)&TObjCMIcon__icon_entries)[id].x;
        pos.y = cm_icon_screen_position[1] * TObjCMMainMenu::get_scale();
        z = (-2.0f) - (1.0f - (f32)(i / 7));
        for (n = 0; n < g->n; n++) {
            s = TObjCMIcon__sub_80299598(self, g->ids[n]);
            draw_ui_sprite(s, &pos, z, depth);
            pos.x += (f32)(get_creation_sprite_id__14TObjCMMainMenuFl(s) + 4);
        }
    }
    restore_saved_depth_alpha_state();
}
#pragma push
#pragma fp_contract on
void run_task__10TObjCMIconFv(s32 arg0) {
    Icon_802997DC *p;
    Grp_802997DC *g;
    s32 i;
    f32 v;
    f32 x;
    p = (Icon_802997DC *)&TObjCMIcon__icon_entries;
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
    g = ((Grp_802997DC *)&TObjCMIcon__icon_group_table);
    p = (Icon_802997DC *)&TObjCMIcon__icon_entries;
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
                x += (f32)(get_creation_sprite_id__14TObjCMMainMenuFl(TObjCMIcon__sub_80299598(arg0, g->ids[j])) + 4);
            }
            x += lbl_805DDC50;
        }
    }
    }
    TObjCMIcon__horizontal_scroll_offset += lbl_805DDC54 * (x - TObjCMIcon__horizontal_scroll_offset);
}
#pragma pop

}
