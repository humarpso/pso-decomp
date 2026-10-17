#include "pso/TEndingAB.h"

#include "types.h"
#include "pso/misc/TScene.h"

struct EndingTextureName {
    const char *name;
    u32 attributes;
    void *texture;
};
struct EndingTextureList {
    EndingTextureName *entries;
    u32 count;
};
struct EndingWallTextureSet {
    EndingTextureName names[14];
    EndingTextureList list;
};
typedef char EndingTextureNameSize[sizeof(EndingTextureName) == 12 ? 1 : -1];
typedef char EndingWallTextureSetSize[sizeof(EndingWallTextureSet) == 0xB0 ? 1 : -1];

extern "C" {
extern const char ending_texture_name_ed_512kabe_a[];
extern const char ending_texture_name_ed_512kabe_b[];
extern const char ending_texture_name_ed_256pict00a[];
extern const char ending_texture_name_ed_256pict01[];
extern const char ending_texture_name_ed_256pict02a[];
extern const char ending_texture_name_ed_256pict03a[];
extern const char ending_texture_name_ed_256pict04[];
extern const char ending_texture_name_ed_256pict05a[];
extern const char ending_texture_name_ed_256pict06a[];
extern const char ending_texture_name_ed_256pict07a[];
extern const char ending_texture_name_ed_256pict08[];
extern const char ending_texture_name_ed_256pict09[];
extern const char ending_texture_name_ed_256pict10a[];
extern const char ending_texture_name_ed_256pict11a[];
extern const char ending_texture_name_ed_256pict00b[];
extern const char ending_texture_name_ed_256pict02b[];
extern const char ending_texture_name_ed_256pict03b[];
extern const char ending_texture_name_ed_256pict05b[];
extern const char ending_texture_name_ed_256pict06b[];
extern const char ending_texture_name_ed_256pict07b[];
extern const char ending_texture_name_ed_256pict10b[];
extern const char ending_texture_name_ed_256pict11b[];
extern const char ending_texture_name_edu_256pict00[];
extern const char ending_texture_name_edu_256pict01[];
extern const char ending_texture_name_edu_256pict02[];
extern const char ending_texture_name_edu_256pict03[];
extern const char ending_texture_name_edu_256pict04[];
extern const char ending_texture_name_edu_256pict05[];
extern const char ending_texture_name_edu_256pict06[];
extern const char ending_texture_name_edu_256pict07[];
extern const char ending_texture_name_edu_256pict08[];
extern const char ending_texture_name_edu_256pict09[];
extern const char ending_texture_name_edu_256pict10[];
extern const char ending_texture_name_edu_256pict11[];
extern const char ending_texture_name_edura_256pict00[];
extern const char ending_texture_name_edura_256pict01[];
extern const char ending_texture_name_edura_256pict02[];
extern const char ending_texture_name_edura_256pict03[];
extern const char ending_texture_name_edura_256pict04[];
extern const char ending_texture_name_edura_256pict05[];
extern const char ending_texture_name_edura_256pict06[];
extern const char ending_texture_name_edura_256pict07[];
extern const char ending_texture_name_edura_256pict08[];
extern const char ending_texture_name_edura_256pict09[];
extern const char ending_texture_name_edura_256pict10[];
extern const char ending_texture_name_edura_256pict11[];
extern const char ending_ab_class_name_text[];
extern const char ending_wall_archive_secret[];
extern const char ending_wall_archive_nh[];
extern const char ending_wall_archive_sh[];
extern const char ending_wall_archive_ul[];

const char *ending_ab_class_name = ending_ab_class_name_text;

EndingWallTextureSet ending_wall_texture_sets[4] = {
    {
        {
            {ending_texture_name_ed_512kabe_a, 0, 0},
            {ending_texture_name_ed_512kabe_b, 0, 0},
            {ending_texture_name_ed_256pict00a, 0, 0},
            {ending_texture_name_ed_256pict01, 0, 0},
            {ending_texture_name_ed_256pict02a, 0, 0},
            {ending_texture_name_ed_256pict03a, 0, 0},
            {ending_texture_name_ed_256pict04, 0, 0},
            {ending_texture_name_ed_256pict05a, 0, 0},
            {ending_texture_name_ed_256pict06a, 0, 0},
            {ending_texture_name_ed_256pict07a, 0, 0},
            {ending_texture_name_ed_256pict08, 0, 0},
            {ending_texture_name_ed_256pict09, 0, 0},
            {ending_texture_name_ed_256pict10a, 0, 0},
            {ending_texture_name_ed_256pict11a, 0, 0},
        },
        {ending_wall_texture_sets[0].names, 14}
    },
    {
        {
            {ending_texture_name_ed_512kabe_a, 0, 0},
            {ending_texture_name_ed_512kabe_b, 0, 0},
            {ending_texture_name_ed_256pict00b, 0, 0},
            {ending_texture_name_ed_256pict01, 0, 0},
            {ending_texture_name_ed_256pict02b, 0, 0},
            {ending_texture_name_ed_256pict03b, 0, 0},
            {ending_texture_name_ed_256pict04, 0, 0},
            {ending_texture_name_ed_256pict05b, 0, 0},
            {ending_texture_name_ed_256pict06b, 0, 0},
            {ending_texture_name_ed_256pict07b, 0, 0},
            {ending_texture_name_ed_256pict08, 0, 0},
            {ending_texture_name_ed_256pict09, 0, 0},
            {ending_texture_name_ed_256pict10b, 0, 0},
            {ending_texture_name_ed_256pict11b, 0, 0},
        },
        {ending_wall_texture_sets[1].names, 14}
    },
    {
        {
            {ending_texture_name_ed_512kabe_a, 0, 0},
            {ending_texture_name_ed_512kabe_b, 0, 0},
            {ending_texture_name_edu_256pict00, 0, 0},
            {ending_texture_name_edu_256pict01, 0, 0},
            {ending_texture_name_edu_256pict02, 0, 0},
            {ending_texture_name_edu_256pict03, 0, 0},
            {ending_texture_name_edu_256pict04, 0, 0},
            {ending_texture_name_edu_256pict05, 0, 0},
            {ending_texture_name_edu_256pict06, 0, 0},
            {ending_texture_name_edu_256pict07, 0, 0},
            {ending_texture_name_edu_256pict08, 0, 0},
            {ending_texture_name_edu_256pict09, 0, 0},
            {ending_texture_name_edu_256pict10, 0, 0},
            {ending_texture_name_edu_256pict11, 0, 0},
        },
        {ending_wall_texture_sets[2].names, 14}
    },
    {
        {
            {ending_texture_name_ed_512kabe_a, 0, 0},
            {ending_texture_name_ed_512kabe_b, 0, 0},
            {ending_texture_name_edura_256pict00, 0, 0},
            {ending_texture_name_edura_256pict01, 0, 0},
            {ending_texture_name_edura_256pict02, 0, 0},
            {ending_texture_name_edura_256pict03, 0, 0},
            {ending_texture_name_edura_256pict04, 0, 0},
            {ending_texture_name_edura_256pict05, 0, 0},
            {ending_texture_name_edura_256pict06, 0, 0},
            {ending_texture_name_edura_256pict07, 0, 0},
            {ending_texture_name_edura_256pict08, 0, 0},
            {ending_texture_name_edura_256pict09, 0, 0},
            {ending_texture_name_edura_256pict10, 0, 0},
            {ending_texture_name_edura_256pict11, 0, 0},
        },
        {ending_wall_texture_sets[3].names, 14}
    },
};
}

struct RecoveredGlobal_8008CE80___vt__9TEndingAB { s32 value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_8008CE80___vt__9TEndingAB_size[sizeof(RecoveredGlobal_8008CE80___vt__9TEndingAB) == 0x18 ? 1 : -1];

extern "C" {
int TKeyBoardControl__sub_8000F828(void);
void __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_8008CE80___vt__9TEndingAB __vt__9TEndingAB;

extern s32 TEndingAB__fade_sequence_state;
u8 *__ct__9TEndingABFv(u8 *arg0, u8 *arg1);
s32 get_ending_scene_active(void);
void bind_gvm_texture_list(const char *, void *);

extern u32 ending_ab_wall_texture_list;
extern s32 game_difficulty_selection;
void TLobby__sub_803DA16C(void*);

void TEndingAB::run_task() { advance_fade_sequence(); }

TEndingAB::~TEndingAB() {}
u8 *__ct__9TEndingABFv(u8 *arg0, u8 *arg1) {
    s32 temp_r3;
    __ct__7TObjectFP7TObject(arg0, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = &__vt__9TEndingAB.value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) ending_ab_class_name;
    *(s32 *)((s8 *)arg0 + 0x1C) = -1;
    TEndingAB__fade_sequence_state = 0;
    *(s32 *)((s8 *)arg0 + 0x20) = 0xFF;
    *(s32 *)((s8 *)arg0 + 0x28) = 0;
    *(s32 *)((s8 *)arg0 + 0x24) = 0;
    ((TEndingAB *)arg0)->init_float_table();
    temp_r3 = TKeyBoardControl__sub_8000F828();
    switch (temp_r3) {
    case 0:
        *(s32 *)((s8 *)arg0 + 0xEC) = 0x1E;
        break;
    case 1:
        *(s32 *)((s8 *)arg0 + 0xEC) = 0x19;
        break;
    }
    return arg0;
}

void TEndingAB::destroy_instance() {
    if ((u32) ending_ab_wall_texture_list != 0U) {
        TLobby__sub_803DA16C((void*)ending_ab_wall_texture_list);
        ending_ab_wall_texture_list = 0U;
    }
}
void TScene::bind_ending_wall_textures() {
    EndingWallTextureSet *base = ending_wall_texture_sets;
    u8 *t;
    if (get_ending_scene_active() != 0) {
        t = (u8 *)&base[3].list;
        (*(u8 * *)&ending_ab_wall_texture_list) = t;
        bind_gvm_texture_list(ending_wall_archive_secret, t);
    } else {
        switch (game_difficulty_selection) {
        case 0:
        case 1:
            t = (u8 *)&base[0].list;
            (*(u8 * *)&ending_ab_wall_texture_list) = t;
            bind_gvm_texture_list(ending_wall_archive_nh, t);
            break;
        case 2:
            t = (u8 *)&base[1].list;
            (*(u8 * *)&ending_ab_wall_texture_list) = t;
            bind_gvm_texture_list(ending_wall_archive_sh, t);
            break;
        case 3:
            t = (u8 *)&base[2].list;
            (*(u8 * *)&ending_ab_wall_texture_list) = t;
            bind_gvm_texture_list(ending_wall_archive_ul, t);
            break;
        }
    }
}

}
