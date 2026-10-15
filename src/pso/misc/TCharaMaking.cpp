#include "types.h"
#include "pso/misc/CharacterAppearance.h"
#include "pso/system/ChunkMaterialState.h"

struct TextureList
{
  void *entries;
  s32 count;
};

struct Appearance
{
  u8 name[0x30];
  u8 section;
  u8 classId;
  u8 flags;
  u8 spare;
  u32 classFlags;
  s16 costume;
  s16 skin;
  s16 face;
  s16 head;
  s16 hair;
  s16 red;
  s16 green;
  s16 blue;
  float width;
  float height;
};

struct ClassAppearance
{
  s16 counts[8];
  void **hair;
  void **caps;
  void **heads;
  void *body;
  struct TextureList **hairTextures;
  struct TextureList **headTextures;
  struct TextureList *bodyTextures;
};

struct CharData_8028DF98 {
    s8 name[0x18];
    s32 f18;
    u8 pad1c[0x14];
    s8 f30;
    s8 f31;
    u8 fl32;
    u8 pad33;
    s32 f34;
    s16 f38[8];
    f32 f48;
};

extern "C" {
extern struct ClassAppearance class_appearance_table[19];
s32 get_display_index__12TCharaMakingFPv(struct Appearance *);
void build_appearance_texture_names__12TCharaMakingFv(void *, struct Appearance *, struct ClassAppearance *, struct TextureList *);
void TCharaMaking__bind_appearance_texture_lists(s32 *arg0, s32 *arg1, s32 *arg2, struct Appearance *arg3);
s32 TCharaMaking__sub_8028E3A0(f32 *arg0);
s32 TCharaMaking__sub_8028E3A0(f32 *arg0);
extern s32 player_class_trait_table[];
extern struct ClassAppearance class_appearance_table[19];
s32 validate_player_visual_record(void *arg0);
}

struct RecoveredGlobal_8028DE78_lbl_804D9164 {
    s32 value;
    u8 remaining[0x410];
};

struct C_8028DCCC { u8 pad0[0x31]; s8 f31; u8 pad32[0x1a]; f32 f4c; };

struct P_8028DCCC { f32 a; f32 b; };

extern "C" {
extern RecoveredGlobal_8028DE78_lbl_804D9164 class_appearance_preset_table;
u8 *get_class_appearance_preset(s32 arg0);
s32 set_shadow_material_state();
s32 draw_chunk_object(void *);
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 chunk_polygon_flags_or_mask;
extern s32 chunk_polygon_flags_and_mask;
extern s32 model_render_flags;
extern s32 lbl_805DD930;
extern const f32 lbl_805DD934;
s32 calc_section_id_from_name(s8 *arg0);
extern P_8028DCCC character_proportion_height_table[];
f32 calc_character_height(void *p);
}

extern "C" {

void free_loaded_buffers__12TCharaMakingFPv(u8 *arg0);
s32 query_state__12TCharaMakingFv(void);
void setup_from_data__12TCharaMakingFii(s32 arg0, s32 arg1);
void update_body_parts__12TCharaMakingFPv(u8 *arg0);
s32 TLobby__sub_803DA16C(void *);
s32 TObjCMMainMenu__sub_8028EBCC(void*);
s32 create__12TChCrLoadReqFPv(void *);

extern u32 creation_main_menu_obj;

s32 query_state__12TCharaMakingFv(void) {
    if ((u32) creation_main_menu_obj == 0U) {
        return -1;
    }
    return TObjCMMainMenu__sub_8028EBCC((void*)creation_main_menu_obj);
}

s32 calc_section_id_from_name(s8 *arg0) {
    s32 sum = 0;
    s32 i;
    s32 r;
    for (i = 0; i < 12 && arg0[i] != 0; i++) {
        sum += arg0[i];
    }
    sum %= 10;
    if (sum < 0 || sum >= 10) sum = 0;
    return sum;
}

#pragma push
#pragma fp_contract on
#pragma opt_common_subs off
f32 calc_character_height(void *p) {
    C_8028DCCC *arg0 = (C_8028DCCC *)p;
    f32 a;
    f32 b;
    f32 v = arg0->f4c;
    s32 k = arg0->f31;
    a = character_proportion_height_table[k].a;
    b = character_proportion_height_table[k].b;
    if (v < 0.0f || v > 1.0f) {
        v = 0.0f;
    }
    return v * (a - b) + b;
}
#pragma pop

#pragma push
#pragma opt_dead_assignments off
#pragma opt_propagation off
void TCharaMaking__draw_colored_hair(f32 farg0, s32 arg0, CharacterAppearanceFields *arg1, s32 arg2) {
    struct Color { f32 a, r, g, b; } color;
    s32 temp_r3;
    s32 second;
    s32 first;
    s32 temp_r8;
    temp_r8 = model_render_flags;
    first = chunk_polygon_flags_and_mask;
    second = chunk_polygon_flags_or_mask;
    temp_r3 = temp_r8 & 0xFFFFFFDF;
    model_render_flags = temp_r3;
    lbl_805D5660 = temp_r8;
    lbl_805D5664 = first;
    lbl_805D5668 = second;
    model_render_flags = temp_r3 | lbl_805DD930;
    if (farg0 < 1.0f) {
        set_chunk_material_override_pair((int) (-1), (int) (0x800));
    }
    if (arg2 != 0) {
        set_shadow_material_state();
    } else {
        color.a = farg0;
        color.r = lbl_805DD934 * (f32) arg1->red;
        color.g = lbl_805DD934 * (f32) arg1->green;
        color.b = lbl_805DD934 * (f32) arg1->blue;
        set_chunk_material_color(&color.a);
    }
    draw_chunk_object((void *) (arg0));
    chunk_polygon_flags_and_mask = lbl_805D5664;
    chunk_polygon_flags_or_mask = lbl_805D5668;
    model_render_flags = lbl_805D5660;
}
#pragma pop

void setup_from_data__12TCharaMakingFii(s32 arg0, s32 arg1) {
    TCharaMaking__draw_colored_hair(1.0f, arg0, (CharacterAppearanceFields *)arg1, 0);
}

typedef char RecoveredGlobal_8028DE78_lbl_804D9164_size[sizeof(RecoveredGlobal_8028DE78_lbl_804D9164) == 0x414 ? 1 : -1];
u8 *get_class_appearance_preset(s32 arg0) {
    s32 var_r3;
    var_r3 = arg0;
    if ((var_r3 < 0) || (var_r3 >= 0xD)) {
        var_r3 = 0;
    }
    return (u8 *)&class_appearance_preset_table.value + (var_r3 * 0x50);
}

void free_loaded_buffers__12TCharaMakingFPv(u8 *arg0) {
    if ((s32) *(s32 *)((s8 *)arg0 + 0x8B8) != 0) {
        if (!(*(s32 *)((s8 *)arg0 + 0xCFC) & 1)) {
            TLobby__sub_803DA16C(arg0 + 0xA1C);
        }
        *(s32 *)((s8 *)arg0 + 0x8B8) = 0;
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0xA24) != 0) {
        if (!(*(s32 *)((s8 *)arg0 + 0xCFC) & 2)) {
            TLobby__sub_803DA16C(arg0 + 0xB88);
        }
        *(s32 *)((s8 *)arg0 + 0xA24) = 0;
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0xB90) != 0) {
        if (!(*(s32 *)((s8 *)arg0 + 0xCFC) & 4)) {
            TLobby__sub_803DA16C(arg0 + 0xCF4);
        }
        *(s32 *)((s8 *)arg0 + 0xB90) = 0;
    }
}

void update_body_parts__12TCharaMakingFPv(u8 *arg0) {
    validate_player_visual_record((void *)(arg0 + 0x85C));
    *(f32 *)((s8 *)arg0 + 0xD48) = calc_character_height((void *)(arg0 + 0x85C));
    ((s32 (*)(void *, void *, void *, void *))TCharaMaking__bind_appearance_texture_lists)(arg0 + 0x8B8, arg0 + 0xA24, arg0 + 0xB90, arg0 + 0x85C);
    create__12TChCrLoadReqFPv(arg0);
}

}

extern "C" {

void clear_flag_bit0__12TCharaMakingFv(void);
void enable_making__12TCharaMakingFv(void);
int restore_default_scene(void);
int set_scene_override(void*);

s32 validate_player_visual_record(void *arg0) {
    s32 bad;
    s32 ok;
    s32 flags;
    CharData_8028DF98 *d;
    s32 i;
    ClassAppearance *row;
    s32 v;
    s32 lim;
    d = (CharData_8028DF98 *)arg0;
    bad = 0;
    ok = 1;
    flags = 0;
    if (d->name[0] == 0) {
        bad = 1;
    }
    if (bad == 0) {
        s8 *p;
        s8 *end;
        s32 found;
        end = d->name + 0xD;
        found = 0;
        for (p = d->name; p < end; p++) {
            if (*p == 0) {
                found = 1;
                break;
            }
        }
        if (found == 0) {
            bad = 1;
        }
    }
    if (bad == 0) {
        s8 *q;
        for (q = d->name; *q != 0; q++) {
            if (*q < 0x20 || *q >= 0x7F) {
                bad = 1;
                break;
            }
        }
    }
    if (bad == 0) {
        s8 *q;
        q = d->name;
        while (*q == 0x20) {
            q++;
        }
        if (*q == 0) {
            bad = 1;
        }
    }
    if (bad != 0) {
        d->name[0] = d->name[1] = d->name[2] = '-';
        ok = 0;
        d->name[3] = 0;
    }
    if ((u32)(d->f18 & 0xFF000000) != 0xFF000000) {
        d->f18 = -1;
    }
    if (d->f30 == -1) {
        d->f30 = 0;
    }
    if (d->f30 < 0 || d->f30 >= 10) {
        flags |= 1;
        ok = 0;
        d->f30 %= 10;
    }
    if (d->f31 < 0 || d->f31 >= 12) {
        flags |= 2;
        d->f31 = 0;
        ok = 0;
    }
    if (d->f34 != player_class_trait_table[d->f31]) {
        d->f34 = player_class_trait_table[d->f31];
        flags |= 4;
        ok = 0;
    }
    row = &class_appearance_table[d->f31];
    for (i = 0; i < 5; i++) {
        lim = row->counts[i];
        v = d->f38[i];
        if (v < 0 || (lim == 0 && v != 0) || (lim > 0 && v >= lim)) {
            d->f38[i] = 0;
            ok = 0;
        }
    }
    for (; i < 8; i++) {
        v = d->f38[i];
        if (v < 0 || v > 0xFF) {
            d->f38[i] = 0;
            ok = 0;
        }
    }
    if (TCharaMaking__sub_8028E3A0(&d->f48) != 0) {
        ok = 0;
    }
    if (flags != 0) {
        d->fl32 |= flags;
    }
    return ok;
}

void clear_flag_bit0__12TCharaMakingFv(void) { restore_default_scene(); model_render_flags = (model_render_flags & 0xfffffffe); }

void enable_making__12TCharaMakingFv(void) { model_render_flags = (model_render_flags | 0x1); set_scene_override((void*)31); }
typedef struct Appearance Appearance;
typedef struct ClassAppearance ClassAppearance;
typedef struct TextureList TextureList;
void TCharaMaking__bind_appearance_texture_lists(s32 *arg0, s32 *arg1, s32 *arg2, struct Appearance *arg3) {
  s32 temp_r4;
  struct ClassAppearance *temp_r28;
  struct TextureList **temp_r3;
  struct TextureList **temp_r3_2;
  struct TextureList *temp_r6;
  ClassAppearance *new_var;
  struct TextureList *temp_r6_2;
  temp_r4 = get_display_index__12TCharaMakingFPv(arg3) * 0x2C;
  new_var = (ClassAppearance *) (((u8 *) class_appearance_table) + temp_r4);
  *arg0 = 0;
  temp_r28 = new_var;
  temp_r3 = temp_r28->hairTextures;
  if (temp_r3 != 0)
  {
    temp_r6 = temp_r3[arg3->hair];
    if (temp_r6 != 0)
    {
      build_appearance_texture_names__12TCharaMakingFv(arg0, arg3, temp_r28, temp_r6);
      *arg0 = 1;
    }
  }
  *arg1 = 0;
  temp_r3_2 = temp_r28->headTextures;
  if (temp_r3_2 != 0)
  {
    temp_r6_2 = temp_r3_2[arg3->head];
    if (temp_r6_2 != 0)
    {
      build_appearance_texture_names__12TCharaMakingFv(arg1, arg3, temp_r28, temp_r6_2);
      *arg1 = 1;
    }
  }
  build_appearance_texture_names__12TCharaMakingFv(arg2, arg3, temp_r28, temp_r28->bodyTextures);
  *arg2 = 1;
}
s32 TCharaMaking__sub_8028E3A0(f32 *arg0) {
    if (arg0[0] < 0.0f || arg0[0] >= 1.0f || arg0[1] < 0.0f || arg0[1] >= 1.0f) {
        arg0[0] = 0.0f;
        arg0[1] = 0.0f;
        return 1;
    }
    return 0;
}

}
