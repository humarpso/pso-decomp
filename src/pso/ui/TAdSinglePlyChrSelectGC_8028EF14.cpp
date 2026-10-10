#include "types.h"
#include "pso/misc/CharacterShape.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8029057C_lbl_804D3F74 {
    M2C_UNK value;
    u8 remaining[0x34];
};

struct Slot_8028F150 { s32 f0; u8 pad[0x468]; };

struct Slot_8028F198 { s32 f0; u8 pad[0x468]; };

struct W_80290250 { u8 pad[0xfc]; s32 bufp; s32 rc; u8 data[4]; };

struct E_8028F210 { s32 f0; u8 pad4[0xC]; s32 f10; s32 f14; u8 pad18[0x16C]; s32 f184; s32 f188; u8 pad18c[0x16C]; s32 f2f8; u8 pad2fc[0x170]; };

struct Pair_802907E4 { u32 a; u32 b; };

struct Opaque_80290088;
struct Sel_80290088 {
    u8 pad[0x34];
    void *model;
    u8 pad2[0xFC - 0x38];
    s32 fc;
    s32 f100;
    s32 f104;
};

extern "C" {
extern const f32 lbl_805DD944;
extern const f32 lbl_805DD948;
extern const f32 lbl_805DD94C;
extern const f32 lbl_805DD950;
extern const f32 lbl_805DD954;
s32 find_shape_triangle_region(u8 *arg0);
void TAdSinglePlyChrSelectGC__sub_802905A4(void* p, void* q);
void reset_creation_shape_set(s32 arg0);
extern void ***char_creation_data_block;
void clear_next_entry__10TObjPlayerFiPv(void *,void *);
void reset_creation_body_shapes();
void reset_creation_head_shapes();
CreationHeadModelStates lbl_8051C0E8;
CreationHeadModelStates lbl_8051C110[7];
CreationBodyModelStates lbl_8051C228;
CreationBodyModelStates lbl_8051C430[7];
extern Slot_8028F150 lbl_8051D288[];
Slot_8028F150 *find_free_slot__23TAdSinglePlyChrSelectGCFv(void);
extern Slot_8028F150 lbl_8051D288[];
s32 is_entry_equal__23TAdSinglePlyChrSelectGCFPvPv(void *, void *);
s32 has_matching_entry__23TAdSinglePlyChrSelectGCFPv(void *arg0);
void set_field_b8__14TObjEnePanarmsFPvs(void *, s16);
s32 creation_motion_group(u32);
extern u32 creation_player_character;
extern u32 creation_figure_object;
void request_creation_motion(s32 arg0);
s32 alloc__22TQuestVmDownLoadServerFPv(int);
s32 request_file_read__6TLobbyFiiPvPv(int, int, void *, int);
s32 get_display_index__12TCharaMakingFPv(void *);
extern s32 chara_select_creation_shape_rel_files[];
extern u32 creation_player_character;
void load_creation_shape_rel(W_80290250 *arg0);
extern Slot_8028F150 lbl_8051D288[];
s32 count_remaining_slots__23TAdSinglePlyChrSelectGCFv();
void TCharaMaking__sub_8028E3A0();
s32 find_shape_triangle_region(u8 *arg0);
void get_sorted_region_samples__23TAdSinglePlyChrSelectGCFPvPv(void *arg0, s32 *arg1);
void TAdSinglePlyChrSelectGC__sub_80290884(void* p, void* q);
extern u8 lbl_80451CD0[];
extern Pair_802907E4 lbl_80540888[];
extern Pair_802907E4 lbl_805408D8[];
extern Pair_802907E4 lbl_80540928[];
void init_entry_tables__23TAdSinglePlyChrSelectGCFPv(void* _w0);
s32 count_char_diffs__23TAdSinglePlyChrSelectGCFPvPv(void *, u32);
void update_char_panels__23TAdSinglePlyChrSelectGCFPv(u8 *arg0);
extern Slot_8028F150 lbl_8051D288[];
extern u32 creation_player_character;
extern E_8028F210 *char_select_current_entry;
s32 evict_char_entries__23TAdSinglePlyChrSelectGCFi(s32 arg0);
void advance_animation_playback(s32);
s32 query_state__12TCharaMakingFv(void);
void TAdSinglePlyChrSelectGC__sub_8028ED54(void);
void blend_creation_proportion_shapes(void *);
extern Pair_802907E4 lbl_80540888[];
extern Pair_802907E4 lbl_805408D8[];
extern Pair_802907E4 lbl_80540928[];
extern u32 creation_player_character;
extern u32 chara_select_hair_node_a;
extern u32 chara_select_hair_node_b;
extern u32 chara_select_head_node;
void update_chara_preview__23TAdSinglePlyChrSelectGCFi(s32 arg0);
M2C_UNK TLobby__sub_8001FE7C(void *, int);
M2C_UNK __dt__10TObjMotionFv(void *, int);
M2C_UNK free__11TOBoss4RockFUi(int);
M2C_UNK __dl__7TObjectFPv(void *);
void update_char_panels__23TAdSinglePlyChrSelectGCFPv(u8 *arg0);
void free_field_FC__23TAdSinglePlyChrSelectGCFPv(void *arg0);
M2C_UNK TAdSinglePlyChrSelectGC__sub_802905D4(void *);
extern Slot_8028F150 lbl_8051D288[];
extern s32 lbl_805D49B4;
extern int char_creation_figure_draw_flag;
extern u32 creation_figure_object;
extern u32 chara_select_hair_node_a;
extern u32 chara_select_hair_node_b;
extern u32 chara_select_head_node;
extern s32 chara_select_preview_resource;
extern s32 creation_resource_ready_state;
u8 *TAdSinglePlyChrSelectGC__sub_802908CC(u8 *arg0, s16 arg1);
void get_item_ptr__10TObjPlayerFPvi(void *, int);
void play_phase_transition_sound__10TObjPlayerFi(u32);
void begin_effect_render__13TParticleCtrlFv();
void end_effect_render__13TParticleCtrlFv();
void setup_from_data__12TCharaMakingFii(u32, u32);
void clear_flag_bit0__12TCharaMakingFv();
void enable_making__12TCharaMakingFv();
void draw_player_model__23TAdSinglePlyChrSelectGCFPv(void* p);
void translate_matrix_vec3(int, void *);
void rotate_matrix_y(int, u32);
void push_matrix_from();
void push_matrix();
void pop_matrix();
void set_global_param__8TObjFishFi(void *);
extern Pair_802907E4 lbl_80540888[];
extern Pair_802907E4 lbl_805408D8[];
extern Pair_802907E4 lbl_80540928[];
extern u32 creation_player_character;
extern int char_creation_figure_draw_flag;
extern u32 creation_figure_rotation_y;
extern E_8028F210 *char_select_current_entry;
void draw_creation_figure__23TAdSinglePlyChrSelectGCFPv(u8 *arg0);
void map_shape_region_samples(s32 region, s32 *samples);
extern CreationShapeBlend lbl_8051D268;
s32 clear_creation_shape_eval_masks(f32 *dst, const f32 *a, const f32 *b, const f32 *c);
s32 is_entry_equal__23TAdSinglePlyChrSelectGCFPvPv(void *, void *);
extern Slot_8028F150 lbl_8051D288[];
extern u32 creation_player_character;
extern E_8028F210 *char_select_current_entry;
extern s32 creation_resource_ready_state;
s32 scan_creation_resources(void *arg0);
s32 fn_8001ED90(s32);
void blend_creation_proportion_shapes(void *);
void update_pair__23TAdSinglePlyChrSelectGCFPv(void* p);
void ***relocate_data_block_pointers(s32, s32);
extern Pair_802907E4 lbl_80540888[];
extern Pair_802907E4 lbl_805408D8[];
extern Pair_802907E4 lbl_80540928[];
extern s32 lbl_805D49B4;
extern u32 creation_player_character;
extern s32 char_select_active_flag;
extern u32 chara_select_hair_node_a;
extern u32 chara_select_hair_node_b;
extern u32 chara_select_head_node;
extern void ***char_creation_data_block;
extern s32 chara_select_preview_resource;
void apply_character_appearance__23TAdSinglePlyChrSelectGCFPv(Sel_80290088 *arg0);
}

extern "C" {

void TAdSinglePlyChrSelectGC__sub_802905A4(void* p, void* q);
int TAdSinglePlyChrSelectGC__sub_802905B8(void);
void TAdSinglePlyChrSelectGC__sub_80290884(void* p, void* q);
void close_if_active__23TAdSinglePlyChrSelectGCFv(u8 * _w0);
void draw_player_model__23TAdSinglePlyChrSelectGCFPv(void* p);
void free_field_FC__23TAdSinglePlyChrSelectGCFPv(void *arg0);
u8 is_active__23TAdSinglePlyChrSelectGCFv(void);
s32 map_button_code__23TAdSinglePlyChrSelectGCFi(s32 arg0);
void update_char_panels__23TAdSinglePlyChrSelectGCFPv(u8 *arg0);
void update_pair__23TAdSinglePlyChrSelectGCFPv(void* p);
int TAdSinglePlyChrSelectGC__sub_8029071C(void*);
M2C_UNK TLobby__sub_803DA16C(void *);
int set_motion_interpolation_flag(void*);
int draw_model_with_callback__10TObjPlayerFPv(void*);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(s32);

extern "C" {
}
extern "C" {
void TAdSinglePlyChrSelectGC__sub_80290194();
}
extern "C" {
void TLobby__sub_801A1FD8();
}
extern "C" {
void TObjPlayer__sub_80019568();
}
extern "C" {
void TObjRoomId__sub_801A1E2C();
}
extern "C" {
void TParticleCtrl__sub_801A2124();
}
extern "C" {
void apply_object_set_data();
}
extern "C" {
void classify_actor_view_detail();
}
extern "C" {
extern u8 lbl_804512A0[];
}
extern "C" {
extern u8 lbl_804512AC[];
}
extern "C" {
extern u8 lbl_804512B8[];
}
extern "C" {
extern u8 lbl_804512C4[];
}
extern "C" {
extern u8 lbl_804512D0[];
}
extern "C" {
extern u8 lbl_804512DC[];
}
extern "C" {
extern u8 lbl_804512E8[];
}
extern "C" {
extern u8 lbl_804512F4[];
}
extern "C" {
extern u8 lbl_80451300[];
}
extern "C" {
extern u8 lbl_8045130C[];
}
extern "C" {
extern u8 lbl_80451318[];
}
extern "C" {
extern u8 lbl_80451324[];
}
extern "C" {
extern u8 lbl_80451330[];
}
extern "C" {
extern u8 lbl_8045133C[];
}
extern "C" {
extern u8 lbl_80451348[];
}
extern "C" {
extern u8 lbl_80451354[];
}
extern "C" {
extern u8 lbl_80451360[];
}
extern "C" {
extern u8 lbl_8045136C[];
}
extern "C" {
extern u8 lbl_80451378[];
}
extern "C" {
extern u8 lbl_80451384[];
}
extern "C" {
extern u8 lbl_80451390[];
}
extern "C" {
extern u8 lbl_8045139C[];
}
extern "C" {
extern u8 lbl_804513A8[];
}
extern "C" {
extern u8 lbl_804513B4[];
}
extern "C" {
extern u8 lbl_804513C0[];
}
extern "C" {
extern u8 lbl_804513CC[];
}
extern "C" {
extern u8 lbl_804513D8[];
}
extern "C" {
extern u8 lbl_804513E4[];
}
extern "C" {
extern u8 lbl_804513F0[];
}
extern "C" {
extern u8 lbl_804513FC[];
}
extern "C" {
extern u8 lbl_80451408[];
}
extern "C" {
extern u8 lbl_80451414[];
}
extern "C" {
extern u8 lbl_80451420[];
}
extern "C" {
extern u8 lbl_8045142C[];
}
extern "C" {
extern u8 lbl_80451438[];
}
extern "C" {
extern u8 lbl_80451444[];
}
extern "C" {
extern u8 lbl_80451450[];
}
extern "C" {
extern u8 lbl_8045145C[];
}
extern "C" {
extern u8 lbl_80451468[];
}
extern "C" {
extern u8 lbl_80451474[];
}
extern "C" {
extern u8 lbl_80451480[];
}
extern "C" {
extern u8 lbl_8045148C[];
}
extern "C" {
extern u8 lbl_80451498[];
}
extern "C" {
extern u8 lbl_804514A4[];
}
extern "C" {
extern u8 lbl_804514B0[];
}
extern "C" {
extern u8 lbl_804514BC[];
}
extern "C" {
extern u8 lbl_804514C8[];
}
extern "C" {
extern u8 lbl_804514D4[];
}
extern "C" {
extern u8 lbl_804514E0[];
}
extern "C" {
extern u8 lbl_804514EC[];
}
extern "C" {
extern u8 lbl_804514F8[];
}
extern "C" {
extern u8 lbl_80451504[];
}
extern "C" {
extern u8 lbl_80451510[];
}
extern "C" {
extern u8 lbl_8045151C[];
}
extern "C" {
extern u8 lbl_80451528[];
}
extern "C" {
extern u8 lbl_80451534[];
}
extern "C" {
extern u8 lbl_80451540[];
}
extern "C" {
extern u8 lbl_8045154C[];
}
extern "C" {
extern u8 lbl_80451558[];
}
extern "C" {
extern u8 lbl_80451564[];
}
extern "C" {
extern u8 lbl_80451570[];
}
extern "C" {
extern u8 lbl_8045157C[];
}
extern "C" {
extern u8 lbl_80451588[];
}
extern "C" {
extern u8 lbl_80451594[];
}
extern "C" {
extern u8 lbl_804515A0[];
}
extern "C" {
extern u8 lbl_804515AC[];
}
extern "C" {
extern u8 lbl_804515B8[];
}
extern "C" {
extern u8 lbl_804515C4[];
}
extern "C" {
extern u8 lbl_804515D0[];
}
extern "C" {
extern u8 lbl_804515DC[];
}
extern "C" {
extern u8 lbl_804515E8[];
}
extern "C" {
extern u8 lbl_804515F4[];
}
extern "C" {
extern u8 lbl_80451600[];
}
extern "C" {
extern u8 lbl_8045160C[];
}
extern "C" {
extern u8 lbl_80451618[];
}
extern "C" {
extern u8 lbl_80451624[];
}
extern "C" {
extern u8 lbl_80451630[];
}
extern "C" {
extern u8 lbl_8045163C[];
}
extern "C" {
extern u8 lbl_80451648[];
}
extern "C" {
extern u8 lbl_80451654[];
}
extern "C" {
extern u8 lbl_80451660[];
}
extern "C" {
extern u8 lbl_8045166C[];
}
extern "C" {
extern u8 lbl_80451678[];
}
extern "C" {
extern u8 lbl_80451684[];
}
extern "C" {
extern u8 lbl_80451690[];
}
extern "C" {
extern u8 lbl_8045169C[];
}
extern "C" {
extern u8 lbl_804516A8[];
}
extern "C" {
extern u8 lbl_804516B4[];
}
extern "C" {
extern u8 lbl_804516C0[];
}
extern "C" {
extern u8 lbl_804516CC[];
}
extern "C" {
extern u8 lbl_804516D8[];
}
extern "C" {
extern u8 lbl_804516E4[];
}
extern "C" {
extern u8 lbl_804516F0[];
}
extern "C" {
extern u8 lbl_804516FC[];
}
extern "C" {
extern u8 lbl_80451708[];
}
extern "C" {
extern u8 lbl_80451714[];
}
extern "C" {
extern u8 lbl_80451720[];
}
extern "C" {
extern u8 lbl_8045172C[];
}
extern "C" {
extern u8 lbl_80451738[];
}
extern "C" {
extern u8 lbl_80451744[];
}
extern "C" {
extern u8 lbl_80451750[];
}
extern "C" {
extern u8 lbl_8045175C[];
}
extern "C" {
extern u8 lbl_80451768[];
}
extern "C" {
extern u8 lbl_80451774[];
}
extern "C" {
extern u8 lbl_80451780[];
}
extern "C" {
extern u8 lbl_8045178C[];
}
extern "C" {
extern u8 lbl_80451798[];
}
extern "C" {
extern u8 lbl_804517A4[];
}
extern "C" {
extern u8 lbl_804517B0[];
}
extern "C" {
extern u8 lbl_804517BC[];
}
extern "C" {
extern u8 lbl_804517C8[];
}
extern "C" {
extern u8 lbl_804517D4[];
}
extern "C" {
extern u8 lbl_804517E0[];
}
extern "C" {
extern u8 lbl_804517EC[];
}
extern "C" {
extern u8 lbl_804517F8[];
}
extern "C" {
extern u8 lbl_80451804[];
}
extern "C" {
extern u8 lbl_80451810[];
}
extern "C" {
extern u8 lbl_8045181C[];
}
extern "C" {
extern u8 lbl_80451828[];
}
extern "C" {
extern u8 lbl_80451834[];
}
extern "C" {
extern u8 lbl_80451840[];
}
extern "C" {
extern u8 lbl_8045184C[];
}
extern "C" {
extern u8 lbl_80451858[];
}
extern "C" {
extern u8 lbl_80451864[];
}
extern "C" {
extern u8 lbl_80451870[];
}
extern "C" {
extern u8 lbl_8045187C[];
}
extern "C" {
extern u8 lbl_80451888[];
}
extern "C" {
extern u8 lbl_80451894[];
}
extern "C" {
extern u8 lbl_804518A0[];
}
extern "C" {
extern u8 lbl_804518AC[];
}
extern "C" {
extern u8 lbl_804518B8[];
}
extern "C" {
extern u8 lbl_804518C4[];
}
extern "C" {
extern u8 lbl_804518D0[];
}
extern "C" {
extern u8 lbl_804518DC[];
}
extern "C" {
extern u8 lbl_804518E8[];
}
extern "C" {
extern u8 lbl_804518F4[];
}
extern "C" {
extern u8 lbl_80451900[];
}
extern "C" {
extern u8 lbl_8045190C[];
}
extern "C" {
extern u8 lbl_80451918[];
}
extern "C" {
extern u8 lbl_80451924[];
}
extern "C" {
extern u8 lbl_80451930[];
}
extern "C" {
extern u8 lbl_8045193C[];
}
extern "C" {
extern u8 lbl_80451948[];
}
extern "C" {
extern u8 lbl_80451954[];
}
extern "C" {
extern u8 lbl_80451960[];
}
extern "C" {
extern u8 lbl_8045196C[];
}
extern "C" {
extern u8 lbl_80451978[];
}
extern "C" {
extern u8 lbl_80451984[];
}
extern "C" {
extern u8 lbl_80451990[];
}
extern "C" {
extern u8 lbl_8045199C[];
}
extern "C" {
extern u8 lbl_804519A8[];
}
extern "C" {
extern u8 lbl_804519B4[];
}
extern "C" {
extern u8 lbl_804519C0[];
}
extern "C" {
extern u8 lbl_804519CC[];
}
extern "C" {
extern u8 lbl_804519D8[];
}
extern "C" {
extern u8 lbl_804519E4[];
}
extern "C" {
extern u8 lbl_804519F0[];
}
extern "C" {
extern u8 lbl_804519FC[];
}
extern "C" {
extern u8 lbl_80451A08[];
}
extern "C" {
extern u8 lbl_80451A14[];
}
extern "C" {
extern u8 lbl_80451A20[];
}
extern "C" {
extern u8 lbl_80451A2C[];
}
extern "C" {
extern u8 lbl_80451A38[];
}
extern "C" {
extern u8 lbl_80451A44[];
}
extern "C" {
extern u8 lbl_80451A50[];
}
extern "C" {
extern u8 lbl_80451A5C[];
}
extern "C" {
extern u8 lbl_80451A68[];
}
extern "C" {
extern u8 lbl_80451A74[];
}
extern "C" {
extern u8 lbl_80451A80[];
}
extern "C" {
extern u8 lbl_80451A8C[];
}
extern "C" {
extern u8 lbl_80451A98[];
}
extern "C" {
extern u8 lbl_80451AA4[];
}
extern "C" {
extern u8 lbl_80451AB0[];
}
extern "C" {
extern u8 lbl_80451ABC[];
}
extern "C" {
extern u8 lbl_80451AC8[];
}
extern "C" {
extern u8 lbl_80451AD4[];
}
extern "C" {
extern u8 lbl_80451AE0[];
}
extern "C" {
extern u8 lbl_80451AEC[];
}
extern "C" {
extern u8 lbl_80451AF8[];
}
extern "C" {
extern u8 lbl_80451B04[];
}
extern "C" {
extern u8 lbl_80451B10[];
}
extern "C" {
extern u8 lbl_80451B1C[];
}
extern "C" {
extern u8 lbl_80451B28[];
}
extern "C" {
extern u8 lbl_80451B34[];
}
extern "C" {
extern u8 lbl_80451B40[];
}
extern "C" {
extern u8 lbl_80451B4C[];
}
extern "C" {
extern u8 lbl_80451B58[];
}
extern "C" {
extern u8 lbl_80451B64[];
}
extern "C" {
extern u8 lbl_80451B70[];
}
extern "C" {
extern u8 lbl_80451B7C[];
}
extern "C" {
extern u8 lbl_80451B88[];
}
extern "C" {
extern u8 lbl_80451B94[];
}
extern "C" {
extern u8 lbl_80451BA0[];
}
extern "C" {
extern u8 lbl_80451BAC[];
}
extern "C" {
extern u8 lbl_80451BB8[];
}
extern "C" {
extern u8 lbl_80451BC4[];
}
extern "C" {
extern u8 lbl_80451BD0[];
}
extern "C" {
extern u8 lbl_80451BDC[];
}
extern "C" {
extern u8 lbl_80451BE8[];
}
extern "C" {
extern u8 lbl_80451BF4[];
}
extern "C" {
extern u8 lbl_80451C00[];
}
extern "C" {
extern u8 lbl_80451C0C[];
}
extern "C" {
extern u8 lbl_80451C18[];
}
extern "C" {
extern u8 lbl_80451C24[];
}
extern "C" {
extern u8 lbl_80451C30[];
}
extern "C" {
extern u8 lbl_80451C3C[];
}
extern "C" {
extern u8 lbl_80451C48[];
}
extern "C" {
extern u8 lbl_80451C54[];
}
extern "C" {
extern u8 lbl_80451C60[];
}
extern "C" {
extern u8 lbl_80451C6C[];
}
extern "C" {
extern u8 lbl_80451C78[];
}
extern "C" {
extern u8 lbl_80451C84[];
}
extern "C" {
extern u8 lbl_80451C90[];
}
extern "C" {
extern u8 lbl_80451C9C[];
}
extern "C" {
extern u8 lbl_80451CA8[];
}
extern "C" {
extern u8 lbl_80451CB4[];
}
extern "C" {
extern u8 lbl_805D3B70[];
}
extern "C" {
extern u8 lbl_805D3B74[];
}
extern "C" {
extern u8 lbl_805D3B78[];
}
extern "C" {
extern u8 lbl_805D3B7C[];
}
extern "C" {
extern u8 lbl_805D3B80[];
}
extern "C" {
extern u8 lbl_805D3B84[];
}
extern "C" {
extern u8 lbl_805D3B88[];
}
extern "C" {
extern u8 lbl_805D3B8C[];
}
extern "C" {
extern u8 lbl_805D3B90[];
}
extern "C" {
extern u8 lbl_805D3B94[];
}
extern "C" {
extern u8 lbl_805D3B98[];
}
extern "C" {
extern u8 lbl_805D3B9C[];
}
extern "C" {
extern u8 lbl_805D3BA0[];
}
extern "C" {
extern u8 lbl_805D3BA4[];
}
extern "C" {
extern u8 lbl_805D3BA8[];
}
extern "C" {
extern u8 lbl_805D3BAC[];
}
extern "C" {
extern u8 lbl_805D3BB0[];
}
extern "C" {
extern u8 lbl_805D3BB4[];
}
extern "C" {
extern u8 lbl_805D3BB8[];
}
extern "C" {
void render_shadows__7TObjectFv();
}
extern "C" {
void reset_movement__10TObjPlayerFPv();
}
extern "C" {
void update_object_view_visibility();
}
extern void *lbl_804D3A08[14];
extern void *lbl_804D3A40[4];
extern void *lbl_804D3A50[13];
extern void *lbl_804D3A84[4];
extern void *lbl_804D3A94[7];
extern void *lbl_804D3AB0[4];
extern void *lbl_804D3AC0[23];
extern void *lbl_804D3B1C[4];
extern void *lbl_804D3B2C[7];
extern void *lbl_804D3B48[4];
extern void *lbl_804D3B58[7];
extern void *lbl_804D3B74[4];
extern void *lbl_804D3B84[23];
extern void *lbl_804D3BE0[4];
extern void *lbl_804D3BF0[23];
extern void *lbl_804D3C4C[4];
extern void *lbl_804D3C5C[23];
extern void *lbl_804D3CB8[4];
extern void *lbl_804D3CC8[7];
extern void *lbl_804D3CE4[4];
extern void *lbl_804D3CF4[23];
extern void *lbl_804D3D50[4];
extern void *lbl_804D3D60[23];
extern void *lbl_804D3DBC[4];
extern void *lbl_804D3DCC[4];
extern void *lbl_804D3DDC[4];
extern void *lbl_804D3DEC[4];
extern void *lbl_804D3DFC[4];
extern void *lbl_804D3E0C[3];
extern void *lbl_804D3E18[4];
extern void *lbl_804D3E28[3];
extern void *lbl_804D3E34[4];
extern void *lbl_804D3E44[3];
extern void *lbl_804D3E50[4];
extern void *lbl_804D3E60[3];
extern void *lbl_804D3E6C[4];
extern void *lbl_804D3E7C[3];
extern void *lbl_804D3E88[4];
void *lbl_804D3A08[14] = {
    (void *)&lbl_804512A0, (void *)&lbl_804512AC, (void *)&lbl_804512B8, (void *)&lbl_804512C4,
    (void *)&lbl_804512D0, (void *)&lbl_804512DC, (void *)&lbl_804512E8, (void *)&lbl_804512F4,
    (void *)&lbl_80451300, (void *)&lbl_8045130C, (void *)&lbl_80451318, (void *)&lbl_80451324,
    (void *)&lbl_80451330, (void *)0x0,
};
void *lbl_804D3A40[4] = {
    (void *)&lbl_8045133C, (void *)&lbl_804D3A08, (void *)&lbl_805D3B70, (void *)0xd0000,
};
void *lbl_804D3A50[13] = {
    (void *)&lbl_80451348, (void *)&lbl_80451354, (void *)&lbl_80451360, (void *)&lbl_8045136C,
    (void *)&lbl_80451378, (void *)&lbl_80451384, (void *)&lbl_80451390, (void *)&lbl_8045139C,
    (void *)&lbl_804513A8, (void *)&lbl_804513B4, (void *)&lbl_804513C0, (void *)&lbl_804513CC,
    (void *)0x0,
};
void *lbl_804D3A84[4] = {
    (void *)&lbl_804513D8, (void *)&lbl_804D3A50, (void *)&lbl_805D3B74, (void *)0xc0000,
};
void *lbl_804D3A94[7] = {
    (void *)&lbl_804513E4, (void *)&lbl_804513F0, (void *)&lbl_804513FC, (void *)&lbl_80451408,
    (void *)&lbl_80451414, (void *)&lbl_80451420, (void *)0x0,
};
void *lbl_804D3AB0[4] = {
    (void *)&lbl_8045142C, (void *)&lbl_804D3A94, (void *)&lbl_805D3B78, (void *)0x60000,
};
void *lbl_804D3AC0[23] = {
    (void *)&lbl_80451438, (void *)&lbl_80451444, (void *)&lbl_80451450, (void *)&lbl_8045145C,
    (void *)&lbl_80451468, (void *)&lbl_80451474, (void *)&lbl_80451480, (void *)&lbl_8045148C,
    (void *)&lbl_80451498, (void *)&lbl_804514A4, (void *)&lbl_804514B0, (void *)&lbl_804514BC,
    (void *)&lbl_804514C8, (void *)&lbl_804514D4, (void *)&lbl_804514E0, (void *)&lbl_804514EC,
    (void *)&lbl_804514F8, (void *)&lbl_80451504, (void *)&lbl_80451510, (void *)&lbl_8045151C,
    (void *)&lbl_80451528, (void *)&lbl_80451534, (void *)0x0,
};
void *lbl_804D3B1C[4] = {
    (void *)&lbl_80451540, (void *)&lbl_804D3AC0, (void *)&lbl_805D3B7C, (void *)0x160000,
};
void *lbl_804D3B2C[7] = {
    (void *)&lbl_8045154C, (void *)&lbl_80451558, (void *)&lbl_80451564, (void *)&lbl_80451570,
    (void *)&lbl_8045157C, (void *)&lbl_80451588, (void *)0x0,
};
void *lbl_804D3B48[4] = {
    (void *)&lbl_80451594, (void *)&lbl_804D3B2C, (void *)&lbl_805D3B80, (void *)0x60000,
};
void *lbl_804D3B58[7] = {
    (void *)&lbl_804515A0, (void *)&lbl_804515AC, (void *)&lbl_804515B8, (void *)&lbl_804515C4,
    (void *)&lbl_804515D0, (void *)&lbl_804515DC, (void *)0x0,
};
void *lbl_804D3B74[4] = {
    (void *)&lbl_804515E8, (void *)&lbl_804D3B58, (void *)&lbl_805D3B84, (void *)0x60000,
};
void *lbl_804D3B84[23] = {
    (void *)&lbl_804515F4, (void *)&lbl_80451600, (void *)&lbl_8045160C, (void *)&lbl_80451618,
    (void *)&lbl_80451624, (void *)&lbl_80451630, (void *)&lbl_8045163C, (void *)&lbl_80451648,
    (void *)&lbl_80451654, (void *)&lbl_80451660, (void *)&lbl_8045166C, (void *)&lbl_80451678,
    (void *)&lbl_80451684, (void *)&lbl_80451690, (void *)&lbl_8045169C, (void *)&lbl_804516A8,
    (void *)&lbl_804516B4, (void *)&lbl_804516C0, (void *)&lbl_804516CC, (void *)&lbl_804516D8,
    (void *)&lbl_804516E4, (void *)&lbl_804516F0, (void *)0x0,
};
void *lbl_804D3BE0[4] = {
    (void *)&lbl_804516FC, (void *)&lbl_804D3B84, (void *)&lbl_805D3B88, (void *)0x160000,
};
void *lbl_804D3BF0[23] = {
    (void *)&lbl_80451708, (void *)&lbl_80451714, (void *)&lbl_80451720, (void *)&lbl_8045172C,
    (void *)&lbl_80451738, (void *)&lbl_80451744, (void *)&lbl_80451750, (void *)&lbl_8045175C,
    (void *)&lbl_80451768, (void *)&lbl_80451774, (void *)&lbl_80451780, (void *)&lbl_8045178C,
    (void *)&lbl_80451798, (void *)&lbl_804517A4, (void *)&lbl_804517B0, (void *)&lbl_804517BC,
    (void *)&lbl_804517C8, (void *)&lbl_804517D4, (void *)&lbl_804517E0, (void *)&lbl_804517EC,
    (void *)&lbl_804517F8, (void *)&lbl_80451804, (void *)0x0,
};
void *lbl_804D3C4C[4] = {
    (void *)&lbl_80451810, (void *)&lbl_804D3BF0, (void *)&lbl_805D3B8C, (void *)0x160000,
};
void *lbl_804D3C5C[23] = {
    (void *)&lbl_8045181C, (void *)&lbl_80451828, (void *)&lbl_80451834, (void *)&lbl_80451840,
    (void *)&lbl_8045184C, (void *)&lbl_80451858, (void *)&lbl_80451864, (void *)&lbl_80451870,
    (void *)&lbl_8045187C, (void *)&lbl_80451888, (void *)&lbl_80451894, (void *)&lbl_804518A0,
    (void *)&lbl_804518AC, (void *)&lbl_804518B8, (void *)&lbl_804518C4, (void *)&lbl_804518D0,
    (void *)&lbl_804518DC, (void *)&lbl_804518E8, (void *)&lbl_804518F4, (void *)&lbl_80451900,
    (void *)&lbl_8045190C, (void *)&lbl_80451918, (void *)0x0,
};
void *lbl_804D3CB8[4] = {
    (void *)&lbl_80451924, (void *)&lbl_804D3C5C, (void *)&lbl_805D3B90, (void *)0x160000,
};
void *lbl_804D3CC8[7] = {
    (void *)&lbl_80451930, (void *)&lbl_8045193C, (void *)&lbl_80451948, (void *)&lbl_80451954,
    (void *)&lbl_80451960, (void *)&lbl_8045196C, (void *)0x0,
};
void *lbl_804D3CE4[4] = {
    (void *)&lbl_80451978, (void *)&lbl_804D3CC8, (void *)&lbl_805D3B94, (void *)0x60000,
};
void *lbl_804D3CF4[23] = {
    (void *)&lbl_80451984, (void *)&lbl_80451990, (void *)&lbl_8045199C, (void *)&lbl_804519A8,
    (void *)&lbl_804519B4, (void *)&lbl_804519C0, (void *)&lbl_804519CC, (void *)&lbl_804519D8,
    (void *)&lbl_804519E4, (void *)&lbl_804519F0, (void *)&lbl_804519FC, (void *)&lbl_80451A08,
    (void *)&lbl_80451A14, (void *)&lbl_80451A20, (void *)&lbl_80451A2C, (void *)&lbl_80451A38,
    (void *)&lbl_80451A44, (void *)&lbl_80451A50, (void *)&lbl_80451A5C, (void *)&lbl_80451A68,
    (void *)&lbl_80451A74, (void *)&lbl_80451A80, (void *)0x0,
};
void *lbl_804D3D50[4] = {
    (void *)&lbl_80451A8C, (void *)&lbl_804D3CF4, (void *)&lbl_805D3B98, (void *)0x160000,
};
void *lbl_804D3D60[23] = {
    (void *)&lbl_80451A98, (void *)&lbl_80451AA4, (void *)&lbl_80451AB0, (void *)&lbl_80451ABC,
    (void *)&lbl_80451AC8, (void *)&lbl_80451AD4, (void *)&lbl_80451AE0, (void *)&lbl_80451AEC,
    (void *)&lbl_80451AF8, (void *)&lbl_80451B04, (void *)&lbl_80451B10, (void *)&lbl_80451B1C,
    (void *)&lbl_80451B28, (void *)&lbl_80451B34, (void *)&lbl_80451B40, (void *)&lbl_80451B4C,
    (void *)&lbl_80451B58, (void *)&lbl_80451B64, (void *)&lbl_80451B70, (void *)&lbl_80451B7C,
    (void *)&lbl_80451B88, (void *)&lbl_80451B94, (void *)0x0,
};
void *lbl_804D3DBC[4] = {
    (void *)&lbl_80451BA0, (void *)&lbl_804D3D60, (void *)&lbl_805D3B9C, (void *)0x160000,
};
void *lbl_804D3DCC[4] = {
    (void *)&lbl_80451BAC, (void *)&lbl_80451BB8, (void *)&lbl_80451BC4, (void *)0x0,
};
void *lbl_804D3DDC[4] = {
    (void *)&lbl_80451BD0, (void *)&lbl_804D3DCC, (void *)&lbl_805D3BA0, (void *)0x30000,
};
void *lbl_804D3DEC[4] = {
    (void *)&lbl_80451BDC, (void *)&lbl_80451BE8, (void *)&lbl_80451BF4, (void *)0x0,
};
void *lbl_804D3DFC[4] = {
    (void *)&lbl_80451C00, (void *)&lbl_804D3DEC, (void *)&lbl_805D3BA4, (void *)0x30000,
};
void *lbl_804D3E0C[3] = {
    (void *)&lbl_80451C0C, (void *)&lbl_80451C18, (void *)0x0,
};
void *lbl_804D3E18[4] = {
    (void *)&lbl_80451C24, (void *)&lbl_804D3E0C, (void *)&lbl_805D3BA8, (void *)0x20000,
};
void *lbl_804D3E28[3] = {
    (void *)&lbl_80451C30, (void *)&lbl_80451C3C, (void *)0x0,
};
void *lbl_804D3E34[4] = {
    (void *)&lbl_80451C48, (void *)&lbl_804D3E28, (void *)&lbl_805D3BAC, (void *)0x20000,
};
void *lbl_804D3E44[3] = {
    (void *)&lbl_80451C54, (void *)&lbl_80451C60, (void *)0x0,
};
void *lbl_804D3E50[4] = {
    (void *)&lbl_80451C6C, (void *)&lbl_804D3E44, (void *)&lbl_805D3BB0, (void *)0x20000,
};
void *lbl_804D3E60[3] = {
    (void *)&lbl_80451C78, (void *)&lbl_80451C84, (void *)0x0,
};
void *lbl_804D3E6C[4] = {
    (void *)&lbl_80451C90, (void *)&lbl_804D3E60, (void *)&lbl_805D3BB4, (void *)0x20000,
};
void *lbl_804D3E7C[3] = {
    (void *)&lbl_80451C9C, (void *)&lbl_80451CA8, (void *)0x0,
};
void *lbl_804D3E88[4] = {
    (void *)&lbl_80451CB4, (void *)&lbl_804D3E7C, (void *)&lbl_805D3BB8, (void *)0x20000,
};
void *lbl_804D3E98[19] = {
    (void *)&lbl_804D3A40, (void *)&lbl_804D3A84, (void *)&lbl_804D3AB0, (void *)&lbl_804D3B1C,
    (void *)&lbl_804D3B48, (void *)&lbl_804D3B74, (void *)&lbl_804D3BE0, (void *)&lbl_804D3C4C,
    (void *)&lbl_804D3CB8, (void *)&lbl_804D3CE4, (void *)&lbl_804D3D50, (void *)&lbl_804D3DBC,
    (void *)&lbl_804D3DDC, (void *)&lbl_804D3DFC, (void *)&lbl_804D3E18, (void *)&lbl_804D3E34,
    (void *)&lbl_804D3E50, (void *)&lbl_804D3E6C, (void *)&lbl_804D3E88,
};
void *lbl_804D3EE4[36] = {
    (void *)0x10000, (void *)0x21, (void *)0x3f800000, (void *)0x0,
    (void *)0x10000, (void *)0x1, (void *)0x3f800000, (void *)0x0,
    (void *)0x10000, (void *)0x0, (void *)0x3f800000, (void *)0x0,
    (void *)0x10000, (void *)0x1f, (void *)0x3f800000, (void *)0x0,
    (void *)0x10000, (void *)0x20, (void *)0x3f800000, (void *)0x0,
    (void *)0x10000, (void *)0x1e, (void *)0x3f800000, (void *)0x0,
    (void *)0x10000, (void *)0x2f, (void *)0x3f800000, (void *)0x0,
    (void *)0x10000, (void *)0x30, (void *)0x3f800000, (void *)0x0,
    (void *)0x10000, (void *)0x2e, (void *)0x3f800000, (void *)0x0,
};
void *lbl_804D3F74[14] = {
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0xffffffff,
    (void *)&apply_character_appearance__23TAdSinglePlyChrSelectGCFPv, (void *)0x0, (void *)0xffffffff, (void *)&update_chara_preview__23TAdSinglePlyChrSelectGCFi,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0,
};
void *creation_region_sample_index_table[24] = {
    (void *)0x1, (void *)0x3, (void *)0x0, (void *)0x0,
    (void *)0x4, (void *)0x3, (void *)0x3, (void *)0x5,
    (void *)0x4, (void *)0x1, (void *)0x3, (void *)0x2,
    (void *)0x2, (void *)0x6, (void *)0x3, (void *)0x3,
    (void *)0x5, (void *)0x6, (void *)0x2, (void *)0x6,
    (void *)0x7, (void *)0x8, (void *)0x7, (void *)0x2,
};
void *lbl_804D400C[18] = {
    (void *)0x0, (void *)0x0, (void *)0x3eaaaaab, (void *)0x0,
    (void *)0x3f2aaaab, (void *)0x0, (void *)0x3eaaaaab, (void *)0x3f000000,
    (void *)0x0, (void *)0x3f800000, (void *)0x3eaaaaab, (void *)0x3f800000,
    (void *)0x3f2aaaab, (void *)0x3f800000, (void *)0x3f800000, (void *)0x3f800000,
    (void *)0x3f800000, (void *)0x0,
};
void *lbl_804D4054[21] = {
    (void *)0x0, (void *)0x0, (void *)&TAdSinglePlyChrSelectGC__sub_802908CC, (void *)&TAdSinglePlyChrSelectGC__sub_80290194,
    (void *)&close_if_active__23TAdSinglePlyChrSelectGCFv, (void *)&render_shadows__7TObjectFv, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&reset_movement__10TObjPlayerFPv, (void *)&TParticleCtrl__sub_801A2124, (void *)&update_object_view_visibility, (void *)&classify_actor_view_detail,
    (void *)&TObjRoomId__sub_801A1E2C, (void *)&TObjPlayer__sub_80019568, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0,
};
#define lbl_804D3F74 (*(RecoveredGlobal_8029057C_lbl_804D3F74 *)lbl_804D3F74)
#define creation_region_sample_index_table ((s32 *)creation_region_sample_index_table)
#define lbl_804D4054 ((M2C_UNK *)lbl_804D4054)

void update_char_panels__23TAdSinglePlyChrSelectGCFPv(u8 *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0x14) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x10) != 0)) {
        TLobby__sub_803DA16C(arg0 + 0x178);
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x188) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x184) != 0)) {
        TLobby__sub_803DA16C(arg0 + 0x2EC);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x2F8) != 0) {
        TLobby__sub_803DA16C(arg0 + 0x460);
    }
}

s32 evict_char_entries__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    s32 n;
    s32 k;
    E_8028F210 *p;
    query_state__12TCharaMakingFv();
    n = 0;
    for (k = 4; k >= 1; k--) {
        for (p = (E_8028F210 *)&lbl_8051D288[127]; p >= (E_8028F210 *)lbl_8051D288; p--) {
            if (p != char_select_current_entry && p->f0 != 0 && (p->f14 == 0 || p->f10 != 0) && (p->f188 == 0 || p->f184 != 0) && p->f2f8 != 0 &&
                count_char_diffs__23TAdSinglePlyChrSelectGCFPvPv(p, creation_player_character) >= k) {
                p->f0 = 0;
                update_char_panels__23TAdSinglePlyChrSelectGCFPv((u8 *)p);
                if (++n == arg0) {
                    return n;
                }
            }
        }
    }
    return n;
}

Slot_8028F150 *find_free_slot__23TAdSinglePlyChrSelectGCFv(void) {
    Slot_8028F150 *p;
    for (p = lbl_8051D288; p < (Slot_8028F150 *)((u8 *)lbl_8051D288 + 0x23600); p++) {
        if (p->f0 == 0) return p;
    }
    return 0;
}

s32 has_matching_entry__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    Slot_8028F198 *p;
    Slot_8028F198 *end;
    end = (Slot_8028F198 *)((u8 *)((Slot_8028F198 *)&lbl_8051D288) + 0x23600);
    for (p = ((Slot_8028F198 *)&lbl_8051D288); p < end; p++) {
        if (p->f0 != 0 && is_entry_equal__23TAdSinglePlyChrSelectGCFPvPv(p, arg0) != 0) return 1;
    }
    return 0;
}

s32 count_remaining_slots__23TAdSinglePlyChrSelectGCFv() {
    E_8028F210 *p;
    s32 n;
    n = 2;
    for (p = ((E_8028F210 *)&lbl_8051D288); p < &((E_8028F210 *)&lbl_8051D288)[0x80]; p++) {
        if (p->f0 != 0) {
            if (p->f14 != 0 && p->f10 == 0) {
                n--;
            }
            if (p->f188 != 0 && p->f184 == 0) {
                n--;
            }
            if (p->f2f8 == 0) {
                n--;
            }
        }
    }
    return n;
}

s32 map_button_code__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    switch (arg0) {
    case 0x29:
        return 3;
    case 0x2C:
        return 4;
    case 0xFF:
        return -1;
    default:
        return -2;
    }
}

extern s32 char_select_active_flag;

#pragma push
#pragma fp_contract on
s32 clear_creation_shape_eval_masks(f32 *dst, const f32 *a, const f32 *b, const f32 *c) {
    s32 i;
    for (i = 0; i < 3; i++) {
        *dst++ = lbl_8051D268.weights[2] * *c++ + (lbl_8051D268.weights[0] * *a++ + lbl_8051D268.weights[1] * *b++);
    }
    return 1;
}
#pragma pop

void get_sorted_region_samples__23TAdSinglePlyChrSelectGCFPvPv(void *arg0, s32 *arg1) {
    s32 j;
    s32 y;
    s32 x;
    s32 i;
    TCharaMaking__sub_8028E3A0();
    map_shape_region_samples((s32)(((void *)find_shape_triangle_region((u8 *)(arg0)))), (s32 *)(arg1));
    for (i = 0; i < 2; i++) {
        for (j = 2; j > i; j--) {
            x = arg1[j];
            y = arg1[j - 1];
            if (x < y) {
                arg1[j - 1] = x;
                arg1[j] = y;
            }
        }
    }
}

void map_shape_region_samples(s32 region, s32 *samples) {
    s32 i;
    for (i = 0; i < 3; i++) {
        s32 sample = creation_region_sample_index_table[i + region * 3];
        if (sample == 7) {
            sample = 4;
        } else if (sample == 8) {
            sample = 0;
        }
        samples[i] = sample;
    }
}

s32 find_shape_triangle_region(u8 *arg0) {
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f4_2;
    temp_f3 = M2C_FIELD(arg0, f32 *, 0);
    if (temp_f3 > lbl_805DD948) {
        if ((lbl_805DD94C * (temp_f3 - lbl_805DD948)) <= M2C_FIELD(arg0, f32 *, 4)) {
            return 6;
        }
        return 7;
    }
    if (temp_f3 <= lbl_805DD950) {
        temp_f4 = M2C_FIELD(arg0, f32 *, 4);
        if (temp_f3 >= (lbl_805DD948 * temp_f4)) {
            return 0;
        }
        if (temp_f3 <= (lbl_805DD954 * (temp_f4 - lbl_805DD944))) {
            return 1;
        }
        return 2;
    }
    temp_f4_2 = M2C_FIELD(arg0, f32 *, 4);
    if (temp_f3 <= (lbl_805DD954 * (temp_f4_2 - lbl_805DD944))) {
        return 3;
    }
    if (temp_f3 >= (lbl_805DD948 * temp_f4_2)) {
        return 4;
    }
    return 5;
}

s32 scan_creation_resources(void *arg0) {
    E_8028F210 *p;
    E_8028F210 *end;
    end = &((E_8028F210 *)&lbl_8051D288)[0x80];
    for (p = (E_8028F210 *)&lbl_8051D288; p < end; p++) {
        if (p->f0 == 0) {
            continue;
        }
        if (p->f14 != 0 && p->f10 == 0) {
            continue;
        }
        if (p->f188 != 0 && p->f184 == 0) {
            continue;
        }
        if (p->f2f8 == 0) {
            continue;
        }
        if (is_entry_equal__23TAdSinglePlyChrSelectGCFPvPv(p, (void *)creation_player_character) != 0) {
            break;
        }
    }
    if (p == end) {
        if (char_select_current_entry == NULL) {
            creation_resource_ready_state = 0;
            return 0;
        }
        creation_resource_ready_state = 1;
        return 1;
    }
    char_select_current_entry = p;
    creation_resource_ready_state = 2;
    return 1;
}

void draw_creation_figure__23TAdSinglePlyChrSelectGCFPv(u8 *arg0) {
    u32 v;
    begin_effect_render__13TParticleCtrlFv();
    if (scan_creation_resources((void *)(arg0)) == 0) {
        char_creation_figure_draw_flag = 0;
        return;
    }
    {
        char_creation_figure_draw_flag = 1;
        push_matrix();
        translate_matrix_vec3(0, arg0 + 0x38);
        rotate_matrix_y(0, creation_figure_rotation_y);
        set_global_param__8TObjFishFi((u8 *)char_select_current_entry + 0x460);
        draw_player_model__23TAdSinglePlyChrSelectGCFPv((void*)(arg0));
        get_item_ptr__10TObjPlayerFPvi(arg0, 0x3A);
        push_matrix_from();
        set_global_param__8TObjFishFi((u8 *)char_select_current_entry + 0x2EC);
        play_phase_transition_sound__10TObjPlayerFi(lbl_80540928[M2C_FIELD(char_select_current_entry, s16 *, 0xA)].b);
        pop_matrix();
        v = lbl_805408D8[M2C_FIELD(char_select_current_entry, s16 *, 0xC)].b;
        if (v != 0) {
            enable_making__12TCharaMakingFv();
            get_item_ptr__10TObjPlayerFPvi(arg0, 0x3B);
            push_matrix_from();
            set_global_param__8TObjFishFi((u8 *)char_select_current_entry + 0x178);
            play_phase_transition_sound__10TObjPlayerFi(v);
            pop_matrix();
            clear_flag_bit0__12TCharaMakingFv();
        }
        v = lbl_80540888[M2C_FIELD(char_select_current_entry, s16 *, 0xC)].b;
        if (v != 0) {
            enable_making__12TCharaMakingFv();
            get_item_ptr__10TObjPlayerFPvi(arg0, 0x3B);
            push_matrix_from();
            set_global_param__8TObjFishFi((u8 *)char_select_current_entry + 0x178);
            setup_from_data__12TCharaMakingFii(v, creation_player_character);
            pop_matrix();
            clear_flag_bit0__12TCharaMakingFv();
        }
        pop_matrix();
        end_effect_render__13TParticleCtrlFv();
    }
}

void close_if_active__23TAdSinglePlyChrSelectGCFv(u8 * _w0) {
    if ((s32) char_select_active_flag != 0) {
        draw_creation_figure__23TAdSinglePlyChrSelectGCFPv((u8 *)(_w0));
    }
}

void draw_player_model__23TAdSinglePlyChrSelectGCFPv(void* p) { set_motion_interpolation_flag(p); draw_model_with_callback__10TObjPlayerFPv(p); }

void request_creation_motion(s32 arg0) {
    if (creation_figure_object == 0 || creation_player_character == 0) {
        return;
    }
    set_field_b8__14TObjEnePanarmsFPvs((void *)creation_figure_object, arg0 * 3 + creation_motion_group(creation_player_character));
}

void update_chara_preview__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    s32 state;
    state = query_state__12TCharaMakingFv();
    TAdSinglePlyChrSelectGC__sub_8028ED54();
    switch (state) {
    case 3:
        if (chara_select_head_node != 0) {
            TCharaMaking__bind_head_shape_nodes((CharacterAppearanceFields *)((CharacterAppearanceFields *)creation_player_character), (void *)((void *)(chara_select_head_node = lbl_80540928[((CharacterAppearanceFields *)creation_player_character)->head].b)));
        }
        break;
    case 4: {
        s32 hair = ((CharacterAppearanceFields *)creation_player_character)->hair;
        u32 a = lbl_80540888[hair].b;
        u32 b = lbl_805408D8[hair].b;
        chara_select_hair_node_a = a;
        chara_select_hair_node_b = b;
        break;
    }
    }
    blend_creation_proportion_shapes(&((CharacterAppearanceFields *)creation_player_character)->width);
    advance_animation_playback(arg0);
}

void apply_character_appearance__23TAdSinglePlyChrSelectGCFPv(Sel_80290088 *arg0) {
    struct Opaque_80290088 *app;
    CharacterAppearanceFields *raw;
    s32 hair;
    s32 head;
    if (fn_8001ED90(chara_select_preview_resource) == 0 || arg0->f104 == 0) {
        return;
    }
    update_pair__23TAdSinglePlyChrSelectGCFPv(arg0);
    raw = (CharacterAppearanceFields *)creation_player_character;
    app = (struct Opaque_80290088 *)raw;
    hair = raw->hair;
    if ((s32)lbl_80540888[hair].a == 1) {
        chara_select_hair_node_a = lbl_80540888[hair].b;
    }
    if ((s32)lbl_805408D8[hair].a == 1) {
        chara_select_hair_node_b = lbl_805408D8[hair].b;
    }
    head = ((CharacterAppearanceFields *)app)->head;
    if ((s32)lbl_80540928[head].a == 1) {
        chara_select_head_node = lbl_80540928[head].b;
    }
    char_creation_data_block = relocate_data_block_pointers(arg0->fc, arg0->f100);
    TCharaMaking__bind_body_shape_nodes((CharacterAppearanceFields *)((CharacterAppearanceFields *)app), (void *)(arg0->model));
    TCharaMaking__bind_head_shape_nodes((CharacterAppearanceFields *)((CharacterAppearanceFields *)app), (void *)((void *)chara_select_head_node));
    blend_creation_proportion_shapes(&((CharacterAppearanceFields *)creation_player_character)->width);
    lbl_805D49B4 = 0;
    char_select_active_flag = 1;
}

void free_field_FC__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    safe_free__23TAdSinglePlyChrSelectGCFUi(M2C_FIELD(arg0, s32 *, 0xFC));
    M2C_FIELD(arg0, s32 *, 0xFC) = 0;
}

typedef char RecoveredGlobal_8029057C_lbl_804D3F74_size[sizeof(RecoveredGlobal_8029057C_lbl_804D3F74) == 0x38 ? 1 : -1];

void load_creation_shape_rel(W_80290250 *arg0) {
    s32 rc;
    arg0->bufp = alloc__22TQuestVmDownLoadServerFPv(0x44000);
    rc = request_file_read__6TLobbyFiiPvPv(chara_select_creation_shape_rel_files[get_display_index__12TCharaMakingFPv((*(void * *)&creation_player_character))], arg0->bufp, arg0->data, 0);
    arg0->rc = rc;
    if (rc >= 0) {
        if (arg0->rc > 0x44000) {
            return;
        }
    }
}

struct Sel_802902CC {
    u8 pad0[4];
    s32 a4;
    s32 a8;
    s32 c[3];
    s32 d[3];
    s32 e[3];
};

void reset_creation_parts__23TAdSinglePlyChrSelectGCFPv(Sel_802902CC *arg0) {
    s32 i;
    reset_creation_head_shapes();
    reset_creation_body_shapes();
    clear_next_entry__10TObjPlayerFiPv((void *)arg0->a4, (void *)&lbl_8051C0E8);
    clear_next_entry__10TObjPlayerFiPv((void *)arg0->a8, (void *)&lbl_8051C228);
    for (i = 0; i < 3; i++) {
        s32 t = arg0->c[i];
        clear_next_entry__10TObjPlayerFiPv((void *)arg0->d[i], (void *)((u8 *)lbl_8051C110 + t * 0x28));
        clear_next_entry__10TObjPlayerFiPv((void *)arg0->e[i], (void *)((u8 *)lbl_8051C430 + t * 0x208));
    }
}

void TCharaMaking__bind_head_shape_nodes(CharacterAppearanceFields *appearance, void *model) {
    reset_creation_head_shapes();
    clear_next_entry__10TObjPlayerFiPv(model, &lbl_8051C0E8);
    s32 head = appearance->head + 1;
    for (s32 i = 0; i < 7; ++i) {
        clear_next_entry__10TObjPlayerFiPv(char_creation_data_block[head][i], &lbl_8051C110[i]);
    }
}

void TCharaMaking__bind_body_shape_nodes(CharacterAppearanceFields *appearance, void *model) {
    reset_creation_body_shapes();
    clear_next_entry__10TObjPlayerFiPv(model, &lbl_8051C228);
    for (s32 i = 0; i < 7; ++i) {
        clear_next_entry__10TObjPlayerFiPv(char_creation_data_block[0][i], &lbl_8051C430[i]);
    }
}

#pragma push
#pragma fp_contract on
#pragma opt_common_subs on
#pragma scheduling on
void reset_creation_body_shapes() {
  CreationModelNodeState *p = lbl_8051C228.nodes;
  s32 i = 0;
  do
  {
    reset_creation_shape_set((s32)(p));
    ++i;
    ++p;
  }
  while (i < 65);
  s32 group = 0;
  do
  {
    CreationModelNodeState *q = lbl_8051C430[group].nodes;
    s32 j = 0;
    do
    {
      reset_creation_shape_set((s32)(q));
      ++j;
      ++q;
    }
    while (j < 65);
    ++group;
  }
  while (group < 7);
}
#pragma pop

#pragma push
#pragma fp_contract on
#pragma opt_common_subs on
#pragma scheduling on
void reset_creation_head_shapes() {
  CreationModelNodeState *p = lbl_8051C0E8.nodes;
  s32 i = 0;
  do
  {
    reset_creation_shape_set((s32)(p));
    ++i;
    ++p;
  }
  while (i < 5);
  s32 group = 0;
  do
  {
    CreationModelNodeState *q = lbl_8051C110[group].nodes;
    s32 j = 0;
    do
    {
      reset_creation_shape_set((s32)(q));
      ++j;
      ++q;
    }
    while (j < 5);
    ++group;
  }
  while (group < 7);
}
#pragma pop

void reset_creation_shape_set(s32 arg0) {
    TAdSinglePlyChrSelectGC__sub_802905A4((void*)((void *) (arg0)), (void*)((void *) (&lbl_804D3F74.value)));
}

void TAdSinglePlyChrSelectGC__sub_802905A4(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); }

    extern int char_creation_figure_draw_flag;
int TAdSinglePlyChrSelectGC__sub_802905B8(void) {  return char_creation_figure_draw_flag; }

extern s32 char_select_active_flag;

u8 is_active__23TAdSinglePlyChrSelectGCFv(void) {
    return (u8) (char_select_active_flag == 1);
}

void init_entry_tables__23TAdSinglePlyChrSelectGCFPv(void* _w0) {
    for (s32 i = 0; i < 10; i++) {
        TAdSinglePlyChrSelectGC__sub_80290884((void*)(&lbl_80540888[i]), (void*)(lbl_80451CD0));
        TAdSinglePlyChrSelectGC__sub_80290884((void*)(&lbl_805408D8[i]), (void*)(lbl_80451CD0));
    }
    for (s32 i = 0; i < 5; i++) {
        TAdSinglePlyChrSelectGC__sub_80290884((void*)(&lbl_80540928[i]), (void*)(lbl_80451CD0));
    }
}

void TAdSinglePlyChrSelectGC__sub_80290884(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); }
void update_pair__23TAdSinglePlyChrSelectGCFPv(void* p) { init_entry_tables__23TAdSinglePlyChrSelectGCFPv((void*)(p)); TAdSinglePlyChrSelectGC__sub_8029071C(p); }
u8 *TAdSinglePlyChrSelectGC__sub_802908CC(u8 *arg0, s16 arg1) {
    Slot_8028F150 *p;
    Slot_8028F150 *end;
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804D4054;
        for (p = lbl_8051D288, end = lbl_8051D288 + 128; p < end; p++) {
            if (p->f0 != 0) {
                update_char_panels__23TAdSinglePlyChrSelectGCFPv((u8 *) p);
            }
        }
        free_field_FC__23TAdSinglePlyChrSelectGCFPv((void *) (arg0));
        TLobby__sub_8001FE7C((void *) (chara_select_preview_resource), (int) (1));
        chara_select_preview_resource = 0;
        TAdSinglePlyChrSelectGC__sub_802905D4((void *) (arg0));
        (*(s32 *)&chara_select_head_node) = 0;
        (*(s32 *)&chara_select_hair_node_b) = 0;
        (*(s32 *)&chara_select_hair_node_a) = 0;
        M2C_FIELD(arg0, s32 *, 0x34) = 0;
        free__11TOBoss4RockFUi((int) (M2C_FIELD(arg0, s32 *, 0xE0)));
        creation_resource_ready_state = 0;
        creation_figure_object = 0;
        lbl_805D49B4 = 0;
        char_creation_figure_draw_flag = 0;
        __dt__10TObjMotionFv((void *) (arg0), (int) (0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *) (arg0));
        }
    }
    return arg0;
}

s32 load_resource_from_descriptor(s32, M2C_UNK, s32, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK set_field_dc__10TObjPlayerFPvi(void *, s32);
M2C_UNK set_field_d8__10TObjPlayerFPvi(void *, void *);
void *alloc__23TAdSinglePlyChrSelectGCFPv(int);
M2C_UNK set_animation__10TObjPlayerFPvs(void *, s16);
M2C_UNK TObjMotion__ct(void *, void *);
s32 alloc_buffer__11TOBoss4RockFPv(M2C_UNK);
M2C_UNK reset_character_creation_figure_rotation();
extern s32 lbl_805D3BBC;
extern void *creation_menu_main_obj;
extern const f32 lbl_805DD940;
struct Slot_802909B4 {
    s32 f0; u8 pad4[0xC]; s32 f10; s32 f14; u8 pad18[0x16C]; s32 f184; s32 f188;
    u8 pad18C[0x16C]; s32 f2F8; s32 f2FC; u8 pad300[0x16C];
};

void *TCMCharacter__ct(void *arg0, void *arg1) {
    Slot_802909B4 *p;
    s32 res;
    u32 cm;

    TObjMotion__ct(arg0, arg1);
    M2C_FIELD(arg0, void **, 0x18) = (void *)lbl_804D4054;
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D3BBC;
    lbl_805D49B4 = 1;
    cm = creation_player_character;
    char_select_active_flag = 0;
    char_creation_figure_draw_flag = 0;
    creation_figure_object = (u32)arg0;
    res = (s32)alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
    if (res != 0) {
        res = load_resource_from_descriptor(res, 6, ((s32 *)lbl_804D3E98)[get_display_index__12TCharaMakingFPv((void *)cm)], 0, 0, 0);
    }
    chara_select_preview_resource = res;
    for (p = ((Slot_802909B4 *)lbl_8051D288); p < ((Slot_802909B4 *)lbl_8051D288) + 0x80; p++) {
        p->f0 = 0;
        p->f14 = 0;
        p->f188 = 0;
        p->f2FC = 0;
        p->f10 = 0;
        p->f184 = 0;
        p->f2F8 = 0;
    }
    char_select_current_entry = 0;
    ((void (*)(int))TAdSinglePlyChrSelectGC__sub_8028ED54)(0);
    char_select_current_entry = 0;
    set_field_d8__10TObjPlayerFPvi(arg0, (void *)lbl_804D3EE4);
    set_field_dc__10TObjPlayerFPvi(arg0, M2C_FIELD(creation_menu_main_obj, s32 *, 0x430));
    M2C_FIELD(arg0, s16 *, 0xB8) = creation_motion_group(creation_player_character);
    set_animation__10TObjPlayerFPvs(arg0, M2C_FIELD(arg0, s16 *, 0xB8));
    M2C_FIELD(arg0, s32 *, 0xE0) = alloc_buffer__11TOBoss4RockFPv(0xC00);
    M2C_FIELD(arg0, f32 *, 0x40) = lbl_805DD940;
    M2C_FIELD(arg0, f32 *, 0x3C) = lbl_805DD940;
    M2C_FIELD(arg0, f32 *, 0x38) = lbl_805DD940;
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    load_creation_shape_rel((W_80290250 *)arg0);
    reset_character_creation_figure_rotation();
    creation_resource_ready_state = 0;
    return arg0;
}

}
