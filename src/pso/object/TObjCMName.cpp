#include "types.h"
#include "pso/TObjCMName.h"
#include "pso/TObjCMHairMenu.h"
#include "pso/TObjCMAssignMenu.h"
#include "pso/object/TObjCMMainMenu.h"
#include "pso/object/TObjCMProportion.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Menu_80296D68
{
  u8 pad0[0x1C];
  u8 *app;
  s32 enabled;
  s32 index;
  s32 value;
  s32 limit;
  s32 wrap;
  u8 pad34[4];
  s32 ticks;
  s32 active;
  f32 fade;
  s32 step;
  s32 target;
  s32 columns;
  u8 pad50[8];
  f32 scroll;
};

typedef s32 M2C_UNK;
struct Menu_80297B18 {
    u8 pad0[0x1C];
    void *f1C;
    u8 pad20[0x24 - 0x20];
    s32 *ids;
    s32 count;
    s32 sel;
    s32 f30;
    s32 pulse;
    f32 t;
    f32 tmax;
};

struct Pair_80297B18 { s32 a, b; };

class Menu_802987AC {
public:
    void s0();
    void s1();
    void s2();
    void s3();
    void s4();
    void s5();
    void s6();
    u8 pad0[0x24];
    s32 *f24;
    u8 pad28[4];
    s32 f2c;
    u8 pad30[4];
    s32 f34;
    u8 pad38[0x4C - 0x38];
    s32 f4c;
    void *f50;
    f32 f54;
};

typedef void (Menu_802987AC::*MenuFn_802987AC)();

struct M_802983A0 { u8 pad[0x40]; f32 f40; };

struct Making_802952E0
{
  u8 pad0[0x38];
  s16 sel[5];
  s16 color[3];
  f32 shape[2];
};

struct Limits_802952E0
{
  s16 lim[22];
};

struct Icons_802952E0
{
  s32 a;
  s32 b;
};

struct Auto_802952E0
{
  u8 pad0[0x1C];
  Making_802952E0 *app;
  s32 state;
  s32 ticks;
  s16 color[3];
  u8 pad2E[2];
  f32 shape[2];
  f32 fade;
};

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 play_sound_effect(s32, s32, s32, s32);
void clear_task_state__14TObjCMMainMenuFv(void);
s32 TChCrCharSelect__sub_80298F8C(int);
s32 TObjCMProportion__sub_8029916C(M2C_UNK);
void calc_grid_layout__16TObjCMAssignMenuFPv(void *arg0);
extern const f32 lbl_805DDA70;
extern const f32 lbl_805DDA90;
extern const f32 lbl_805DDAA8;
extern const f32 lbl_805DDAAC;
extern const f32 lbl_805DDB80;
void run_task__16TObjCMAssignMenuFv(void *arg0);
f32 fabs_float(f32);
void TCameraCtrl__sub_80068EF0(void);
void restore_full_screen_view__11TCameraCtrlFv(void);
const char *TQuestVmDownLoadServer__sub_8006EF6C(s32);
u32 calc_text_width(void *);
void draw_string__14TObjWarpStringFPviff(const char *, u32, f32, f32);
s32 validate_character_name__14TObjCMMainMenuFPv(void *);
s32 is_active__23TAdSinglePlyChrSelectGCFv();
f32 get_scale__14TObjCMMainMenuFv(void);
void reset_icon_flags__10TObjCMIconFv(void);
void TObjCMIcon__sub_802994C8(s32 arg0, s32 *arg1);
f32 sin_table_lookup(s32);
extern Pair_80297B18 lbl_80464FC8[];
extern s32 creation_resource_ready_state;
extern s32 TObjCMMainMenu__data_805D659C;
extern const s32 lbl_805DDA5C;
extern const s32 lbl_805DDA60;
extern const s32 lbl_805DDA64;
extern const s32 lbl_805DDA68;
extern const f32 lbl_805DDA70;
extern const f32 TObjCMMainMenu__data_805DDB44;
extern const f32 lbl_805DDBA0;
extern const f32 lbl_805DDBA4;
extern const f32 lbl_805DDBA8;
extern const f32 lbl_805DDBAC;
void TObjCMMainMenu__sub_80297B18(Menu_80297B18 *m);
M2C_UNK run_tasks__7TObjectFv(void *);
M2C_UNK request_creation_motion(int);
s32 TAdSinglePlyChrSelectGC__sub_802905B8();
M2C_UNK reset_proportions__15TChCrCharSelectFv();
M2C_UNK rand();
extern const f32 lbl_805DDC10;
f32 fabs_float(f32);
s32 is_active__23TAdSinglePlyChrSelectGCFv();
void TObjCMMainMenu__sub_80298DA0(int a0);
f32 get_ratio__16TObjCMProportionFv();
f32 get_right_trigger_ratio__16TObjCMProportionFv();
extern s32 TObjCMMainMenu__data_805D659C;
extern const f32 lbl_805DDBF4;
extern const f32 lbl_805DDBF8;
void update_random_proportion_action__14TObjCMMainMenuFPv(void * _w0);
extern s32 TObjCMMainMenu__data_805D659C;
extern const f32 lbl_805DDA70;
extern const f32 lbl_805DDA90;
extern const f32 lbl_805DDBFC;
extern const f32 TObjCMMainMenu__data_805DDC00;
void update_slide_offset__14TObjCMMainMenuFPv(M_802983A0 *arg0);
f32 get_proportion__14TObjCMMainMenuFv(void);
M2C_UNK set_creation_projection_center(f32);
M2C_UNK queue_destruction__7TObjectFv(void *);
void TObjCMIcon__sub_802994C8(s32 arg0, s32 *arg1);
void reset_icon_flags__10TObjCMIconFv(void);
s32 TObjCMProportion__sub_8029916C(M2C_UNK);
s32 play_sound_effect(s32, s32, s32, s32);
void clear_task_state__14TObjCMMainMenuFv(void);
s32 get_display_index__12TCharaMakingFPv(s32);
M2C_UNK rand();
extern const Icons_802952E0 lbl_80465118;
extern s32 creation_resource_ready_state;
extern const f32 lbl_805DDAA8;
extern const f32 lbl_805DDAAC;
extern const f32 lbl_805DDAC8;
extern const f32 lbl_805DDAE0;
extern const f32 lbl_805DDAF0;
extern const f32 lbl_805DDAF4;
extern const f32 lbl_805DDAF8;
extern const f32 lbl_805DDAFC;
extern const f32 lbl_805DDB00;
void run_task__16TObjCMAutoMkDataFv(Auto_802952E0 *self);
}

extern "C" {

struct Ent_802964B0 {
    u8 pad0[8];
    s16 f8;
    u8 pad[0x2C - 0xA];
};

struct Hair_802964B0 {
    s32 f0;
    u8 pad4[0x14];
    void *vt;
    s32 f1c;
    s32 f20;
    s32 f24;
    s32 f28;
    u8 pad2c[4];
    s32 f30;
    f32 f34;
    s32 a38[3];
};

struct V2_80296560 {
    f32 x;
    f32 y;
};

struct Menu_80296560 {
    u8 pad[0x30];
    s32 count;
    u32 mask;
    u8 pad2[0x8];
    f32 timer;
};

struct V2_80296648 {
    f32 x;
    f32 y;
};

struct Menu_80296648 {
    u8 pad[0x30];
    s32 count;
    u32 mask;
    u8 pad2[0x8];
    f32 timer;
};

struct Chara_80297128 {
    u8 pad0[0x34];
    u32 flags;
    s16 f38[4];
};

struct Menu_80297128 {
    const char *name;
    u8 pad4[0x18 - 0x4];
    void *vt;
    Chara_80297128 *chara;
    s32 f20;
    s32 kind;
    s32 f28;
    s32 count;
    s32 n;
    u32 mask;
    s32 f38;
    s32 f3C;
    f32 f40;
    u8 pad44[0x48 - 0x44];
    s32 f48;
    u8 pad4C[0x58 - 0x4C];
    f32 f58;
};

struct Row_80297128 { s16 v[0x16]; };

struct V2_80296744 {
    f32 x;
    f32 y;
};

struct Menu_80296744 {
    u8 pad[0x30];
    s32 total;
    u8 pad34[0x40 - 0x34];
    f32 timer;
    s32 per;
    u8 pad48[4];
    s32 pages;
    u8 pad50[0x58 - 0x50];
    f32 scroll;
};

struct V2_80296928 {
    f32 x;
    f32 y;
};

struct Owner_80296928 {
    u8 pad[0x34];
    u32 flags;
};

struct Menu_80296928 {
    u8 pad0[0x1C];
    Owner_80296928 *owner;
    u8 pad20[4];
    s32 state;
    u8 pad28[0x38 - 0x28];
    s32 frame;
    u8 pad3C[4];
    f32 timer;
    s32 level;
    s32 page;
    s32 pages;
    s32 count;
    s32 cursor;
};

struct RecoveredGlobal_8029756C_TObjCMMainMenu__data_804DB9C8 {
    M2C_UNK value;
    u8 remaining[0x9C];
};

struct V2_80297DB8 {
    f32 x;
    f32 y;
};

struct Quad_80297DB8 {
    V2_80297DB8 p[4];
};

struct Cols_80297DB8 {
    u32 c[4];
};

struct Prim_80297DB8 {
    V2_80297DB8 *pts;
    u32 *colors;
    s32 start;
    s32 count;
};

struct Menu_80297DB8 {
    u8 pad[0x38];
    f32 alpha;
};

typedef char RecoveredGlobal_8029756C_TObjCMMainMenu__data_804DB9C8_size[sizeof(RecoveredGlobal_8029756C_TObjCMMainMenu__data_804DB9C8) == 0xA0 ? 1 : -1];

typedef void (TObjCMMainMenu::*CreationMenuCallback)(void);

struct RecoveredGlobal_80298630_TObjCMMainMenu__data_804DB9C8 {
    M2C_UNK value;
    u8 remaining[0x9C];
};

typedef char RecoveredGlobal_80298630_TObjCMMainMenu__data_804DB9C8_size[sizeof(RecoveredGlobal_80298630_TObjCMMainMenu__data_804DB9C8) == 0xA0 ? 1 : -1];

struct Base_80298AD0_80298A88 { char pad[0x18]; };

struct VObj_80298AD0_80298A88 : Base_80298AD0_80298A88 { virtual void m0(int); };

struct RecoveredGlobal_80298F08_lbl_8050E3B8 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

struct RecoveredGlobal_80298DD4_lbl_8051C07C {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct Chara_80298B70 {
    char name[0xC];
    s8 fC;
    u8 padD[0x1C - 0xD];
    s8 f1C;
    u8 pad1D[0x30 - 0x1D];
    s8 f30;
    s8 f31;
    s8 f32;
    u8 pad33;
    u32 f34;
};

struct Pair_80298B70 {
    s32 a;
    s32 *b;
};

struct Menu_80298B70 {
    const char *name;
    u8 pad4[0x18 - 0x4];
    void *vt;
    Chara_80298B70 *chara;
    s32 mode;
    s32 *list;
    s32 f28;
    s32 f2C;
    u8 pad30[0x38 - 0x30];
    f32 f38;
    f32 f3C;
    f32 f40;
    f32 f44;
    f32 f48;
    s32 f4C;
    void *f50;
    f32 f54;
};

typedef char RecoveredGlobal_80298F08_lbl_8050E3B8_size[sizeof(RecoveredGlobal_80298F08_lbl_8050E3B8) == 0x1B0 ? 1 : -1];

typedef char RecoveredGlobal_80298DD4_lbl_8051C07C_size[sizeof(RecoveredGlobal_80298DD4_lbl_8051C07C) == 0x18 ? 1 : -1];

struct V2_802975DC { f32 x, y; };

struct Menu_802975DC {
    u8 pad0[0x1C];
    void *f1C;
    u8 pad20[0x24 - 0x20];
    s32 *ids;
    s32 count;
    s32 sel;
    u8 pad30[0x34 - 0x30];
    s32 pulse;
    f32 t;
    f32 tmax;
};

struct M_802983F8 { u8 pad[0x3c]; f32 f3c; };

struct M_80298450 { u8 pad[0x38]; f32 f38; };

f32 fabs_float(f32);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, int);
void copy_player_visual_record(void *, void *);
void draw_strip_swap_color__15TWindowCtrlMainFPviif(void *, int, int, f32);
void * get_char_index__23TAdSinglePlyChrSelectGCFUi(s32);
s32 play_sound_effect(s32, s32, s32, s32);
M2C_UNK __dl__7TObjectFPv(void *);
void * __nw__7TObjectFUl(int);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
void __ct__7TObjectFP7TObject(void *);
Chara_80298B70 * TObjCMMainMenu__sub_8028D9A8(void);
M2C_UNK TObjCMMainMenu__sub_8028D9B4(void *);
s32 validate_character_name__14TObjCMMainMenuFPv(void *);
u8 calc_section_id_from_name();
s32 get_display_index__12TCharaMakingFPv(s32);
s32 is_active__23TAdSinglePlyChrSelectGCFv();
M2C_UNK reset_character_creation_figure_rotation();
M2C_UNK draw_creation_ruler_lines(f32);
s32 get_creation_sprite_id__14TObjCMMainMenuFi(int);
void draw_ui_sprite_scaled(s32, void *, void *, f32, f32);
void draw_ui_sprite(s32, void *, f32, f32);
void fn_802910A4(s32, void *, void *, f32);
M2C_UNK set_creation_projection_center(f32);
M2C_UNK create_fade__14TObjCMMainMenuFPvPv(M2C_UNK, M2C_UNK);
void fn_802947A8(void);
int TObjCMName__sub_802948F4(void);
void * create__10TObjCMNameFPv(void *arg0);
void * __ct__10TObjCMNameFv(void *arg0);
void * create__16TObjCMProportionFPv(void *arg0);
void * __dt__16TObjCMProportionFv(void *arg0, s16 arg1);
void * TObjCMProportion__ct(void *arg0);
void render__16TObjCMAutoMkDataFv(void *arg0);
void * create__16TObjCMAutoMkDataFPv(void *arg0);
void * __dt__16TObjCMAutoMkDataFv(void *arg0, s16 arg1);
u8 * TObjCMAutoMkData__ct(u8 *arg0);
void * create__14TObjCMHairMenuFPv(void *arg0);
Hair_802964B0 * __ct__14TObjCMHairMenuFv(Hair_802964B0 *arg0, void *arg1);
void draw_assign_icons__16TObjCMAssignMenuFPv(Menu_80296560 *self);
void TObjCMAssignMenu__sub_80296648(Menu_80296648 *self);
void render_assign_slots__16TObjCMAssignMenuFv(Menu_80296744 *self);
void render__16TObjCMAssignMenuFv(Menu_80296928 *self);
void calc_grid_layout__16TObjCMAssignMenuFPv(void *arg0);
void * create__16TObjCMAssignMenuFPvPv(void *arg0, void *arg1);
void * __ct__16TObjCMAssignMenuFv(void *arg0, void *parent, void *kind);
void fn_802972BC(void);
void fn_802972C0(void);
void TObjCMMainMenu__sub_802972C4(void);
s32 try_pay_fee__14TObjCMMainMenuFv(void);
void confirm_selection__14TObjCMMainMenuFPv(void *arg0);
void open_name_menu__14TObjCMMainMenuFPv(void *arg0);
void open_proportion_menu__14TObjCMMainMenuFPv(void *arg0);
void open_auto_mk_menu__14TObjCMMainMenuFPv(void *arg0);
void open_hair_menu__14TObjCMMainMenuFPv(void *arg0);
void open_assign_menu__14TObjCMMainMenuFPv(u8 *arg0);
void draw_footer_divider__14TObjCMMainMenuFPv(Menu_80297DB8 *self);
void TObjCMMainMenu__vt7(void);
void TObjCMMainMenu__sub_80298310(void);
void TObjCMMainMenu__vt6(void *arg0);
void TObjCMMainMenu__vt5(void *arg0);
void TObjCMMainMenu__vt2(void *arg0);
void TObjCMMainMenu__vt1(void);
void TObjCMMainMenu__handle_creation_input(u8 *arg0);
void * create__14TObjCMMainMenuFPv(void *arg0);
void * destroy__14TObjCMMainMenuFPvs(void *arg0, s16 arg1);
void * TObjCMMainMenu__ct(void *arg0, void *parent);
void clear_task_state__14TObjCMMainMenuFv(void);
f32 get_scale__14TObjCMMainMenuFv(void);
f32 get_proportion__14TObjCMMainMenuFv(void);
void set_selection__14TObjCMMainMenuFi(int a0);
void TObjCMMainMenu__sub_80298DA0(int a0);
void set_speed__14TObjCMMainMenuFf(f32 farg0);
u8 is_not_dressing_room_mode__14TObjCMMainMenuFv(void);
M2C_UNK * TObjCMMainMenu__sub_80298DD4(void);
s32 get_creation_pad(void);
s32 get_clamped_player_index__14TChCrEffCtrlPlFv(void);
s32 TChCrCharSelect__sub_80298F8C(int);
void get_creation_pad_stick(s32*,f32*);
s32 TObjCMProportion__sub_8029914C(int);
s32 TObjCMProportion__sub_8029916C(M2C_UNK);
void fn_802993F0(void);
void fn_8029945C(void *);
void set_eff_tag__11TChCrEffTagFi(int);
u32 __cvt_fp2unsigned(f32);
char * strncpy(char *, const char *, u32);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);

extern const f32 TObjCMAssignMenu__data_805DDB20;
extern s32 TObjCMMainMenu__data_805D659C;
extern const f32 TObjCMMainMenu__data_805DDC00;
extern M2C_UNK __vt__10TObjCMName[];
extern u8 __vt__14TObjCMHairMenu[];
extern void *__vt__16TObjCMAssignMenu[];
extern M2C_UNK __vt__16TObjCMAutoMkData[];
extern M2C_UNK __vt__16TObjCMProportion[];
extern u8 lbl_80464F50[];
extern s32 lbl_80464FD0[];
extern f32 lbl_80465020[];
extern u8 lbl_80465048[];
extern u8 lbl_80465050[];
extern u8 lbl_80465058[];
extern s32 lbl_80465060[];
extern s32 lbl_8046507C[];
extern Ent_802964B0 class_appearance_table[];
extern Cols_80297DB8 lbl_804DBC68[2];
extern Quad_80297DB8 lbl_804DBC88[2];
extern u8 lbl_804DBCC8[];
extern M2C_UNK lbl_804DBDA8[];
extern RecoveredGlobal_80298F08_lbl_8050E3B8 controller_physical_port_bank;
extern RecoveredGlobal_80298DD4_lbl_8051C07C character_creation_name_buffer;
extern f32 ui_sprite_scale;
extern f32 lbl_805D3CA0;
extern const char *lbl_805D3CD0;
extern const char *lbl_805D3CDC;
extern s32 lbl_805D3CE0;
extern s32 lbl_805D3CE4;
extern void *lbl_805D3CE8;
extern void *lbl_805D3CEC;
extern void *creation_player_character;
extern s32 creation_dressing_room_mode_flag;
extern int creation_figure_rotation_y;
extern void *creation_figure_object;
extern s32 creation_resource_ready_state;
extern int creation_camera_mode;
extern s32 TObjCMMainMenu__selected_entry_id;
extern const f32 lbl_805DDA70;
extern const f32 lbl_805DDA74;
extern const f32 lbl_805DDA78;
extern const f32 lbl_805DDA90;
extern const f32 lbl_805DDA94;
extern const f32 lbl_805DDA98;
extern const f32 lbl_805DDAA8;
extern const f32 lbl_805DDAAC;
extern const f32 lbl_805DDAE0;
extern const f32 lbl_805DDAE4;
extern const f32 lbl_805DDAE8;
extern const f32 lbl_805DDAEC;
extern const f32 lbl_805DDAF0;
extern const f32 lbl_805DDAFC;
extern const f32 lbl_805DDB00;
extern const f32 lbl_805DDB10;
extern const f32 lbl_805DDB48;
extern const f32 lbl_805DDB4C;
extern const f32 lbl_805DDB50;
extern const f32 lbl_805DDB54;
extern const f32 lbl_805DDB58;
extern const f32 lbl_805DDB5C;
extern const f32 lbl_805DDB60;
extern const f32 lbl_805DDB64;
extern const f32 lbl_805DDB68;
extern const f32 lbl_805DDB6C;
extern const f32 lbl_805DDB70;
extern const f32 lbl_805DDB74;
extern const f32 lbl_805DDB78;
extern const f32 lbl_805DDB90;
extern const f32 lbl_805DDBB0;
extern const f32 lbl_805DDBB4;
extern const f32 lbl_805DDBBC;
extern const f32 lbl_805DDBFC;
extern const f32 lbl_805DDC04;
extern const f32 lbl_805DDC08;
extern const f32 lbl_805DDC0C;

extern "C" {
extern u8 lbl_805D3CD4[];
}
extern void *lbl_804DBA68[8];
extern void *lbl_804DBA88[6];
extern void *lbl_804DBAA0[2];
extern void *lbl_804DBAA8[3];
extern void *lbl_804DBAB4[5];
void *TObjCMMainMenu__data_804DB950[30] = {
    (void *)0x0, (void *)0xffffffff, (void *)&open_assign_menu__14TObjCMMainMenuFPv, (void *)0x0,
    (void *)0xffffffff, (void *)&open_assign_menu__14TObjCMMainMenuFPv, (void *)0x0, (void *)0xffffffff,
    (void *)&open_hair_menu__14TObjCMMainMenuFPv, (void *)0x0, (void *)0xffffffff, (void *)&open_assign_menu__14TObjCMMainMenuFPv,
    (void *)0x0, (void *)0xffffffff, (void *)&open_assign_menu__14TObjCMMainMenuFPv, (void *)0x0,
    (void *)0xffffffff, (void *)&open_assign_menu__14TObjCMMainMenuFPv, (void *)0x0, (void *)0xffffffff,
    (void *)&open_proportion_menu__14TObjCMMainMenuFPv, (void *)0x0, (void *)0xffffffff, (void *)&open_name_menu__14TObjCMMainMenuFPv,
    (void *)0x0, (void *)0xffffffff, (void *)&open_auto_mk_menu__14TObjCMMainMenuFPv, (void *)0x0,
    (void *)0xffffffff, (void *)&confirm_selection__14TObjCMMainMenuFPv,
};
void *TObjCMMainMenu__data_804DB9C8[40] = {
    (void *)0x3, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x2, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x4, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x1, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x1, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0xffffffff, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0xffffffff, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0xffffffff, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0xffffffff, (void *)0x0, (void *)0x0, (void *)0x0,
};
void *lbl_804DBA68[8] = {
    (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4,
    (void *)0x6, (void *)0x7, (void *)0x8, (void *)0x9,
};
void *lbl_804DBA88[6] = {
    (void *)0x0, (void *)0x5, (void *)0x6, (void *)0x7,
    (void *)0x8, (void *)0x9,
};
__declspec(section ".data") void *lbl_804DBAA0[2] = {
    (void *)0x7, (void *)0x9,
};
void *lbl_804DBAA8[3] = {
    (void *)0x2, (void *)0x3, (void *)0x9,
};
void *lbl_804DBAB4[5] = {
    (void *)0x0, (void *)0x5, (void *)0x9, (void *)0x7,
    (void *)0x9,
};
void *__vt__14TObjCMMainMenu[12] = {
    (void *)0x8, (void *)&lbl_804DBA68, (void *)0x6, (void *)&lbl_804DBA88,
    (void *)0x2, (void *)&lbl_804DBAA0, (void *)0x3, (void *)&lbl_804DBAA8,
    (void *)0x3, (void *)&lbl_804DBAB4, (void *)0x1, (void *)&lbl_805D3CD4,
};
#define TObjCMMainMenu__data_804DB9C8 (*(RecoveredGlobal_8029756C_TObjCMMainMenu__data_804DB9C8 *)TObjCMMainMenu__data_804DB9C8)
#define __vt__14TObjCMMainMenu ((Pair_80298B70 *)__vt__14TObjCMMainMenu)

extern "C" {
extern Ent_802964B0 class_appearance_table[];
}

int TObjCMName__sub_802948F4(void) { return 0; }

void *create__10TObjCMNameFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x34);
    if (o != NULL) {
        o = ((void * (*)(void *, void *))__ct__10TObjCMNameFv)(o, arg0);
    }
    return o;
}

}
TObjCMName::~TObjCMName() {}

extern "C" {
void *__ct__10TObjCMNameFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TObjCMName;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3CEC;
    M2C_FIELD(arg0, void **, 0x1C) = creation_player_character;
    M2C_FIELD(arg0, u32 *, 0x20) = 0;
    M2C_FIELD(arg0, u32 *, 0x28) = 0;
    M2C_FIELD(arg0, u32 *, 0x24) = 0;
    M2C_FIELD(arg0, u32 *, 0x2C) = 1;
    M2C_FIELD(arg0, f32 *, 0x30) = lbl_805DDA90;
    set_eff_tag__11TChCrEffTagFi(10);
    return arg0;
}

}
#pragma push
#pragma fp_contract on
void TObjCMProportion::run_task() {
    TObjCMProportion* arg0=this;
    s32 spC;
    f32 sp8;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f31;
    f32 var_f1;
    f32 var_f30;
    f32 var_f29;
    CharacterAppearanceFields *temp_r3;
    CharacterAppearanceFields *temp_r3_2;
    CharacterAppearanceFields *temp_r3_3;
    CharacterAppearanceFields *temp_r3_4;

    var_f1 = get_proportion__14TObjCMMainMenuFv();
    if ((s32) arg0->active != 0) {
        if (lbl_805DDA70 == arg0->fade) {
            var_f1 += lbl_805DDAE0;
            if (var_f1 < 0.0f) {
                var_f1 = 0.0f;
            }
        }
    } else {
        temp_f0 = lbl_805DDA70 - arg0->fade;
        var_f1 = (var_f1 > temp_f0) ? var_f1 : temp_f0;
    }
    ((void (*)(f32))set_creation_projection_center)(var_f1);
    if ((s32) arg0->initialized == 0) {
        arg0->initialized = 1;
        return;
    }
    if ((s32) arg0->active == 0) {
        temp_f1 = arg0->fade + lbl_805DDAA8;
        arg0->fade = temp_f1;
        if (temp_f1 <= 0.0f) {
            arg0->fade = 0.0f;
            ((void (*)(TObject*))queue_destruction__7TObjectFv)(arg0);
        }
    } else {
        temp_f1_2 = arg0->fade + lbl_805DDAAC;
        arg0->fade = temp_f1_2;
        if (temp_f1_2 > 1.0f) {
            arg0->fade = 1.0f;
        }
        get_creation_pad_stick(&spC, &sp8);
        temp_f1_3 = sp8 * sin_table_lookup(spC);
        var_f30 = lbl_805DDAE4 * temp_f1_3;
        temp_f2 = sp8 * -cos_table_lookup(spC);
        var_f29 = lbl_805DDAE4 * temp_f2;
        if (lbl_805DDA90 == (fabs_float(var_f30) + fabs_float(var_f29))) {
            if (((s32 (*)(s32))TObjCMProportion__sub_8029914C)(0x80) != 0) {
                var_f30 = lbl_805DDAE8;
            } else if (((s32 (*)(s32))TObjCMProportion__sub_8029914C)(0x40) != 0) {
                var_f30 = lbl_805DDAEC;
            }
            if (((s32 (*)(s32))TObjCMProportion__sub_8029914C)(0x20) != 0) {
                var_f29 = lbl_805DDAE8;
            } else if (((s32 (*)(s32))TObjCMProportion__sub_8029914C)(0x10) != 0) {
                var_f29 = lbl_805DDAEC;
            }
        }
        temp_r3 = arg0->appearance;
        temp_r3->width = (f32) (temp_r3->width + var_f30);
        temp_r3_2 = arg0->appearance;
        temp_r3_2->height = (f32) (temp_r3_2->height + var_f29);
        temp_r3_3 = arg0->appearance;
        temp_f2_2 = temp_r3_3->width;
        if (temp_f2_2 > lbl_805DDAF0) {
            temp_r3_3->width = (f32) (temp_f2_2 - lbl_805DDAF0);
        } else if (temp_f2_2 < lbl_805DDA90) {
            temp_r3_3->width = (f32) (temp_f2_2 + lbl_805DDAF0);
        }
        temp_r3_4 = arg0->appearance;
        temp_f1_4 = temp_r3_4->height;
        if (temp_f1_4 > lbl_805DDAF0) {
            temp_r3_4->height = (f32) lbl_805DDAF0;
        } else if (temp_f1_4 < lbl_805DDA90) {
            temp_r3_4->height = (f32) lbl_805DDA90;
        }
        if (TObjCMProportion__sub_8029916C(6) != 0) {
            ((void (*)(s32, s32, s32, s32))play_sound_effect)(0x53704, 0, 0, 0);
            clear_task_state__14TObjCMMainMenuFv();
            arg0->active = 0;
        }
    }
}
extern int fold_flush_0;
#pragma pop

extern "C" {
void *create__16TObjCMProportionFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x2C);
    if (o != NULL) {
        o = ((void * (*)(void *, void *))TObjCMProportion__ct)(o, arg0);
    }
    return o;
}

void *__dt__16TObjCMProportionFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjCMProportion;
        set_creation_projection_center(lbl_805DDA70);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void *TObjCMProportion__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjCMProportion;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3CE8;
    M2C_FIELD(arg0, void **, 0x1C) = creation_player_character;
    M2C_FIELD(arg0, u32 *, 0x20) = 0;
    M2C_FIELD(arg0, u32 *, 0x24) = 1;
    M2C_FIELD(arg0, f32 *, 0x28) = lbl_805DDA90;
    set_eff_tag__11TChCrEffTagFi(9);
    return arg0;
}

void render__16TObjCMAutoMkDataFv(void *arg0) {
    draw_creation_ruler_lines(M2C_FIELD(arg0, f32 *, 0x38));
}

#pragma push
#pragma fp_contract on
typedef struct Auto_802952E0 Auto_802952E0;
typedef struct Icons_802952E0 Icons_802952E0;
typedef struct Limits_802952E0 Limits_802952E0;
typedef struct Making_802952E0 Making_802952E0;
void run_task__16TObjCMAutoMkDataFv(Auto_802952E0 *self) {
  f32 x;
  f32 t;
  s16 *lim;
  s16 *sel;
  s32 i;
  s32 v;
  Making_802952E0 **new_var;
  x = get_proportion__14TObjCMMainMenuFv();
  if (self->state != 2)
  {
    if (1.0f == self->fade)
    {
      x += lbl_805DDAE0;
      if (x < 0.0f)
      {
        x = 0.0f;
      }
    }
  }
  else
  {
    x = (x > (1.0f - self->fade)) ? (x) : (1.0f - self->fade);
  }
  set_creation_projection_center(x);
  new_var = &self->app;
  if (self->state == 2)
  {
    if ((self->fade += lbl_805DDAA8) <= 0.0f)
    {
      self->fade = 0.0f;
      queue_destruction__7TObjectFv(self);
    }
    return;
  }
  if ((self->fade += lbl_805DDAAC) > 1.0f)
  {
    self->fade = 1.0f;
  }
  switch (self->state)
  {
    case 1:
    {
      Icons_802952E0 icons = lbl_80465118;
      TObjCMIcon__sub_802994C8(2, &icons.a);
      break;
    }
    case 2:
      break;
    case 3:
      reset_icon_flags__10TObjCMIconFv();
      break;
  }
  switch (self->state)
  {
    case 0:
      self->state = 1;
      break;
    case 1:
      if (TObjCMProportion__sub_8029916C((M2C_UNK)(2)) != 0)
    {
      play_sound_effect(0x53704, 0, 0, 0);
      clear_task_state__14TObjCMMainMenuFv();
      self->state = 2;
      break;
    }
      if (TObjCMProportion__sub_8029916C((M2C_UNK)(4)) == 0)
    {
      break;
    }
      lim = ((Limits_802952E0 *)&class_appearance_table)[get_display_index__12TCharaMakingFPv((s32)(self->app))].lim;
      sel = (*new_var)->sel;
      for (i = 0; i <= 4; i++, lim++, sel++)
    {
      if ((*lim) >= 2)
      {
        v = (s16) ((lbl_805DDAF0 * ((f32) (*lim))) * (lbl_805DDAF4 * ((f32) ((int)rand()))));
        while (v == (*sel))
        {
          v++;
          if (v >= (*lim))
          {
            v = 0;
          }
        }
        *sel = v;
      }
    }
      self->color[0] = (u8) ((s32) ((lbl_805DDAF8 * (lbl_805DDAF4 * ((f32) ((int)rand())))) + ((f32) (self->color[0] + 0x40))));
      self->color[1] = (u8) ((s32) ((lbl_805DDAF8 * (lbl_805DDAF4 * ((f32) ((int)rand())))) + ((f32) (self->color[1] + 0x40))));
      self->color[2] = (u8) ((s32) ((lbl_805DDAF8 * (lbl_805DDAF4 * ((f32) ((int)rand())))) + ((f32) (self->color[2] + 0x40))));
      if ((self->shape[0] += (lbl_805DDAC8 * (lbl_805DDAF4 * ((f32) ((int)rand())))) + lbl_805DDAFC) >= 1.0f)
    {
      self->shape[0] -= 1.0f;
    }
      if ((self->shape[1] += (lbl_805DDAC8 * (lbl_805DDAF4 * ((f32) ((int)rand())))) + lbl_805DDAFC) >= 1.0f)
    {
      self->shape[1] -= 1.0f;
    }
      play_sound_effect(0x52D01, 0, 0, 0);
      self->ticks = 0;
      self->state = 3;
      break;
    case 2:
      break;
    case 3:
      self->ticks++;
      t = ((f32) self->ticks) / lbl_805DDB00;
      (*new_var)->color[0] = (s32) (((f32) self->app->color[0]) + (t * ((f32) (self->color[0] - (*new_var)->color[0]))));
      self->app->color[1] = (s32) (((f32) (*new_var)->color[1]) + (t * ((f32) (self->color[1] - self->app->color[1]))));
      self->app->color[2] = (s32) (((f32) self->app->color[2]) + (t * ((f32) (self->color[2] - (*new_var)->color[2]))));
      (*new_var)->shape[0] = (t * (self->shape[0] - self->app->shape[0])) + self->app->shape[0];
      self->app->shape[1] = (t * (self->shape[1] - (*new_var)->shape[1])) + self->app->shape[1];
      if (self->ticks >= 30)
    {
      if (creation_resource_ready_state == 2)
      {
        play_sound_effect(0x52802, 0, 0, 0);
        self->state = 1;
      }
      else
        if (self->ticks >= 150)
      {
        return;
      }
    }
      break;
  }
}
#pragma pop

void *create__16TObjCMAutoMkDataFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x3C);
    if (o != NULL) {
        o = ((void * (*)(void *, void *))TObjCMAutoMkData__ct)(o, arg0);
    }
    return o;
}

void *__dt__16TObjCMAutoMkDataFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjCMAutoMkData;
        set_creation_projection_center(lbl_805DDA70);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TObjCMAutoMkData__ct(u8 *arg0) {
    ((M2C_UNK (*)(void))__ct__7TObjectFP7TObject)();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjCMAutoMkData;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3CE4;
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (*(s32 *)&creation_player_character);
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *) (arg0 + 0x30), (int) (M2C_FIELD(arg0, s32 *, 0x1C) + 0x48));
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_805DDA90;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    ((M2C_UNK (*)(int))set_eff_tag__11TChCrEffTagFi)((int) (0xB));
    return arg0;
}

}
TObjCMHairMenu::~TObjCMHairMenu() {}

extern "C" {
#pragma push
#pragma opt_common_subs off
void TObjCMHairMenu::run_task() {
    f32 temp_f1;
    f32 temp_f1_2;
    s32 temp_r0;
    s32 temp_r0_2;
    s16 temp_r0_4;
    s32 temp_r3;
    CharacterAppearanceFields *app;
    s32 off;

    ticks++;
    if (initialized == 0) {
        initialized = 1;
        return;
    }
    if (active == 0) {
        temp_f1 = fade + lbl_805DDAA8;
        fade = temp_f1;
        if (temp_f1 <= lbl_805DDA90) {
            fade = lbl_805DDA90;
            queue_destruction__7TObjectFv(this);
        }
    } else {
        temp_f1_2 = fade + lbl_805DDAAC;
        fade = temp_f1_2;
        if (temp_f1_2 > lbl_805DDA70) {
            fade = lbl_805DDA70;
        }
        if (TChCrCharSelect__sub_80298F8C(0x20) != 0) {
            temp_r0 = selection + 1;
            selection = temp_r0;
            if (temp_r0 >= 4) {
                selection = 0;
            }
            ((M2C_UNK (*)(int, int, int, int))play_sound_effect)(0x54100, 0, 0, 0);
        } else if (TChCrCharSelect__sub_80298F8C(0x10) != 0) {
            temp_r0_2 = selection - 1;
            selection = temp_r0_2;
            if (temp_r0_2 < 0) {
                selection = 3;
            }
            ((M2C_UNK (*)(int, int, int, int))play_sound_effect)(0x54100, 0, 0, 0);
        }
        temp_r3 = selection;
        if (temp_r3 == 0) {
            app = appearance;
            if (TChCrCharSelect__sub_80298F8C(0x80) != 0) {
                if (++app->hair >= count) {
                    app->hair = 0;
                }
                ((M2C_UNK (*)(int, int, int, int))play_sound_effect)(0x54100, 0, 0, 0);
            } else if (TChCrCharSelect__sub_80298F8C(0x40) != 0) {
                if (--app->hair < 0) {
                    app->hair = count - 1;
                }
                ((M2C_UNK (*)(int, int, int, int))play_sound_effect)(0x54100, 0, 0, 0);
            }
        } else {
            app = appearance;
            off = (temp_r3 + 4) * 2 + 0x38;
            if (((s32 (*)(int))TObjCMProportion__sub_8029916C)(0x80) != 0) {
                M2C_FIELD(app, s16 *, off) = M2C_FIELD(app, s16 *, off) + 1;
            } else if (((s32 (*)(int))TObjCMProportion__sub_8029916C)(0x40) != 0) {
                M2C_FIELD(app, s16 *, off) = M2C_FIELD(app, s16 *, off) - 1;
            } else if (TObjCMProportion__sub_8029914C(0x80) != 0) {
                M2C_FIELD(app, s16 *, off) = M2C_FIELD(app, s16 *, off) + 5;
            } else if (TObjCMProportion__sub_8029914C(0x40) != 0) {
                M2C_FIELD(app, s16 *, off) = M2C_FIELD(app, s16 *, off) - 5;
            }
            temp_r0_4 = M2C_FIELD(app, s16 *, off);
            if (temp_r0_4 > 0xFF) {
                M2C_FIELD(app, s16 *, off) = 0xFF;
            } else if (temp_r0_4 < 0) {
                M2C_FIELD(app, s16 *, off) = 0;
            }
        }
        if (((s32 (*)(int))TObjCMProportion__sub_8029916C)(6) != 0) {
            ((M2C_UNK (*)(int, int, int, int))play_sound_effect)(0x53704, 0, 0, 0);
            ((M2C_UNK (*)(void))clear_task_state__14TObjCMMainMenuFv)();
            active = 0;
        }
    }
}
extern int fold_flush_1;
#pragma pop

void *create__14TObjCMHairMenuFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x44);
    if (o != NULL) {
        o = __ct__14TObjCMHairMenuFv((Hair_802964B0 *)(o), (void *)(arg0));
    }
    return o;
}

Hair_802964B0 *__ct__14TObjCMHairMenuFv(Hair_802964B0 *arg0, void *arg1) {
    s32 i;
    ((void * (*)(void *, void *))__ct__7TObjectFP7TObject)(arg0, arg1);
    arg0->vt = __vt__14TObjCMHairMenu;
    arg0->f0 = lbl_805D3CE0;
    arg0->f1c = (*(s32 *)&creation_player_character);
    arg0->f20 = 0;
    arg0->f24 = 0;
    arg0->f28 = class_appearance_table[get_display_index__12TCharaMakingFPv(arg0->f1c)].f8;
    arg0->f30 = 1;
    arg0->f34 = lbl_805DDA90;
    for (i = 0; i < 3; i++) {
        arg0->a38[i] = 0;
    }
    ((void (*)(s32))set_eff_tag__11TChCrEffTagFi)(5);
    return arg0;
}

}
TObjCMAssignMenu::~TObjCMAssignMenu() {}

extern "C" {
#pragma push
#pragma fp_contract on
void draw_assign_icons__16TObjCMAssignMenuFPv(Menu_80296560 *self) {
    s32 idx;
    u32 bit;
    s32 i;
    f32 step;
    f32 a;
    V2_80296560 pos;
    if (!(self->timer <= lbl_805DDA74)) {
        a = (self->timer - lbl_805DDA74) / lbl_805DDB10;
        pos.x = lbl_805DDB48;
        step = TObjCMAssignMenu__data_805DDB20;
        idx = 0;
        pos.y = lbl_805DDB4C;
        bit = 1;
        a = a * a;
        for (i = 0; i < self->count; i++, pos.x += step) {
            while (!(bit & self->mask)) {
                bit <<= 1;
                idx++;
            }
            draw_ui_sprite(lbl_8046507C[idx], &pos, lbl_805DDA94, a);
            bit <<= 1;
            idx++;
        }
    }
}
extern int fold_flush_2;
#pragma pop

#pragma push
#pragma fp_contract on
void TObjCMAssignMenu__sub_80296648(Menu_80296648 *self) {
    s32 off;
    s32 idx;
    u32 bit;
    s32 i;
    f32 step;
    f32 a;
    V2_80296648 pos;
    if (!(self->timer <= lbl_805DDA74)) {
        a = (self->timer - lbl_805DDA74) / lbl_805DDB10;
        pos.x = lbl_805DDB48;
        step = TObjCMAssignMenu__data_805DDB20;
        idx = 0;
        off = 0;
        pos.y = lbl_805DDB4C;
        bit = 1;
        a = a * a;
        for (i = 0; i < self->count; bit <<= 1, off += 4, idx++, i++, pos.x += step) {
            while (!(bit & self->mask)) {
                bit <<= 1;
                idx++;
                off += 4;
            }
            if (idx < 7) draw_ui_sprite(*(s32 *)((u8 *)lbl_80465060 + off), &pos, lbl_805DDA94, a);
        }
    }
}
extern int fold_flush_3;
#pragma pop

#pragma push
#pragma fp_contract on
void render_assign_slots__16TObjCMAssignMenuFv(Menu_80296744 *self) {
    f32 zero;
    f32 a;
    f32 step;
    f32 d;
    f32 t;
    s32 i;
    s32 n;
    s32 j;
    V2_80296744 pos;
    if (self->pages == 1) return;
    t = self->timer;
    a = t * (t * (lbl_805DDB50 * t));
    if (a <= lbl_805DDB54) return;
    zero = 0.0f;
    for (i = 0; i < self->pages; i++) {
        n = self->per;
        d = (f32)i - self->scroll;
        if (i == self->pages - 1) {
            n = self->total - i * self->per;
        }
        if (zero == d) continue;
        if (d < zero) {
            t = lbl_805DDA70 - d;
            pos.x = lbl_805DDB5C * t + lbl_805DDB58;
            pos.y = lbl_805DDB64 * t + lbl_805DDB60;
        } else if (d > zero) {
            t = lbl_805DDA70 + d;
            pos.x = lbl_805DDB68 * t + lbl_805DDA78;
            pos.y = lbl_805DDB6C * t + lbl_805DDA98;
        }
        step = TObjCMAssignMenu__data_805DDB20;
        for (j = 0; j < n; j++) {
            draw_ui_sprite_scaled(0x1F, &pos, lbl_80465050, lbl_805DDB70, a);
            pos.x += step;
        }
        pos.x += lbl_805DDB74;
        pos.y += lbl_805DDB78;
        draw_ui_sprite_scaled(i + 0x14, &pos, lbl_80465058, lbl_805DDB70, a);
    }
}
extern int fold_flush_4;
#pragma pop

#pragma push
#pragma fp_contract on
#pragma opt_loop_invariants off
void render__16TObjCMAssignMenuFv(Menu_80296928 *self) {
    V2_80296928 pos;
    V2_80296928 scl;
    V2_80296928 pos2;
    V2_80296928 pos3;
    f32 pulse;
    f32 base;
    f32 alpha;
    f32 w;
    f32 t;
    f32 a;
    f32 step;
    s32 idx;
    s32 i;
    s32 sprite;
    render_assign_slots__16TObjCMAssignMenuFv((Menu_80296744 *)(self));
    pulse = 0.25f * sin_table_lookup(self->frame << 10) + 1.0f;
    if (pulse > 1.0f) {
        pulse = 1.0f;
    }
    idx = self->level - 1;
    if (idx < 0) {
        idx = 0;
    } else if (idx >= 10) {
        idx = 9;
    }
    base = lbl_80465020[idx];
    if (!(self->timer <= 0.33f)) {
        if (self->timer >= 0.66f) {
            t = 1.0f;
        } else {
            t = (self->timer - 0.33f) / 0.33f;
        }
        scl.y = 1.0f;
        pos.y = 146.0f;
        w = t * (base - 75.0f) + 75.0f;
        pos.x = 75.0f;
        pos.x = 9.0f * sin_table_lookup(self->frame << 10) + pos.x;
        scl.x = (w - pos.x) / 48.0f;
        fn_802910A4(8, &pos, &scl, -2.75f);
        pos.x = w;
        scl.x = 1.0f;
        fn_802910A4(9, &pos, &scl, -2.75f);
    }
    if (!(self->timer <= 0.0f)) {
        draw_ui_sprite(0, lbl_804DBCC8, -2.4375f,
                       self->timer >= 0.33f ? 1.0f : self->timer / 0.33f);
    }
    if (!(self->timer <= 0.66f)) {
        a = (self->timer - 0.66f) / 0.33999997f;
        pos2.x = 103.0f;
        pos2.y = 150.0f;
        step = 17.0f;
        alpha = a * a;
        for (i = 0; i < self->count; i++) {
            f32 s = alpha;
            sprite = 0x1F;
            if (i == self->cursor) {
                sprite = 0x20;
                if (creation_resource_ready_state != 2) {
                    s = alpha * (0.2f * fabs_float(sin_table_lookup(self->frame << 12)) + 0.2f);
                } else {
                    s = alpha * pulse;
                }
            }
            draw_ui_sprite(sprite, &pos2, -2.4375f, s);
            pos2.x += step;
        }
        if (self->pages > 1) {
            s32 n = self->page;
            pos2.x += 6.0f;
            pos2.y += 20.0f;
            draw_ui_sprite_scaled(n + 0x14, &pos2, lbl_80465048, -2.4375f, alpha);
        }
        w = base - 347.0f;
        pos3.x = 299.0f + w;
        pos3.y = 149.0f;
        draw_ui_sprite(self->cursor + 0x14, &pos3, -2.4375f, alpha * pulse);
        pos3.x = 305.0f + w;
        pos3.y = 150.0f;
        draw_ui_sprite(0x1E, &pos3, -2.4375f, alpha);
        pos3.x = 324.0f + w;
        pos3.y = 167.0f;
        draw_ui_sprite(self->count + 0x13, &pos3, -2.4375f, alpha);
    }
    switch (self->state) {
    case 0:
        TObjCMAssignMenu__sub_80296648((Menu_80296648 *)(self));
        break;
    case 1:
        if (self->owner->flags & 0x10) {
            TObjCMAssignMenu__sub_80296648((Menu_80296648 *)(self));
        } else {
            draw_assign_icons__16TObjCMAssignMenuFPv((Menu_80296560 *)(self));
        }
        break;
    }
}
extern int fold_flush_5;
#pragma pop

void calc_grid_layout__16TObjCMAssignMenuFPv(void *arg0) {
    s32 temp_r0;
    s32 var_ctr;
    s32 var_r4;
    s32 var_r6;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x2C);
    var_r6 = 0;
    var_r4 = 0;
    for (var_ctr = temp_r0; var_ctr > 0; var_ctr--) {
        if (var_r4 == (s32) M2C_FIELD(arg0, s32 *, 0x28)) {
            break;
        }
        var_r6 += 1;
        var_r4 += 1;
    }
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) M2C_FIELD(arg0, s32 *, 0x30);
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 1;
    M2C_FIELD(arg0, s32 *, 0x50) = (s32) M2C_FIELD(arg0, s32 *, 0x30);
    M2C_FIELD(arg0, s32 *, 0x54) = var_r6;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x30) > 0xA) {
        M2C_FIELD(arg0, s32 *, 0x44) = 9;
        M2C_FIELD(arg0, s32 *, 0x48) = (s32) (var_r6 / 9);
        M2C_FIELD(arg0, s32 *, 0x4C) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x30) + 8) / 9);
        M2C_FIELD(arg0, s32 *, 0x54) = (s32) (var_r6 % 9);
        M2C_FIELD(arg0, s32 *, 0x50) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) - (M2C_FIELD(arg0, s32 *, 0x48) * 9));
        if ((s32) M2C_FIELD(arg0, s32 *, 0x50) > 9) {
            M2C_FIELD(arg0, s32 *, 0x50) = 9;
        }
    }
}

#pragma push
#pragma opt_common_subs off
typedef struct Menu_80296D68 Menu_80296D68;
void run_task__16TObjCMAssignMenuFv(void *arg0) {
  s32 step;
  s32 wrap;
  s32 old;
  s16 r;
  s16 *new_var;
  s16 v;
  s32 t;
  f32 fade;
  s32 off;
  Menu_80296D68 *self = (Menu_80296D68 *) arg0;
  u8 *app;
  s32 delta;
  self->ticks++;
  if (self->active == 0)
  {
    fade = self->fade + lbl_805DDAA8;
    self->fade = fade;
    if (fade <= lbl_805DDA90)
    {
      self->fade = lbl_805DDA90;
      queue_destruction__7TObjectFv(self);
    }
    return;
  }
  fade = self->fade + lbl_805DDAAC;
  self->fade = fade;
  if (fade > lbl_805DDA70)
  {
    self->fade = lbl_805DDA70;
  }
  delta = 0;
  if (self->enabled != 0)
  {
    if (TChCrCharSelect__sub_80298F8C((int)(0x80)) != 0)
    {
      delta = 1;
    }
    else
      if (TChCrCharSelect__sub_80298F8C((int)(0x40)) != 0)
    {
      delta = -1;
    }
    if (self->columns > 1)
    {
      if (TChCrCharSelect__sub_80298F8C((int)(0x20)) != 0)
      {
        delta = self->step;
      }
      else
        if (TChCrCharSelect__sub_80298F8C((int)(0x10)) != 0)
      {
        delta = -self->step;
      }
    }
  }
  if (delta != 0)
  {
    app = self->app;
    off = (self->index * 2) + 0x38;
    old = *((s16 *) (((s8 *) app) + off));
    *((s16 *) (((s8 *) app) + off)) = old + delta;
    if ((delta == 1) || (delta == (-1)))
    {
      v = *((s16 *) (((s8 *) app) + off));
      if (v >= self->limit)
      {
        *((s16 *) (((s8 *) app) + off)) = 0;
      }
      else
        if (v < 0)
      {
        *((s16 *) (((s8 *) app) + off)) = self->limit - 1;
      }
    }
    else
    {
      step = self->step;
      v = *((s16 *) (((s8 *) app) + off));
      r = old % step;
      wrap = self->wrap;
      if (v >= wrap)
      {
        *((s16 *) (((s8 *) app) + off)) = r;
      }
      else
      {
        if (self->fade)
        {
        }
        if (v < 0)
        {
          t = r;
          while ((t + step) < wrap)
          {
            t += step;
          }
          *((s16 *) (((s8 *) app) + off)) = t;
        }
      }
    }
    new_var = (s16 *) (((s8 *) app) + off);
    if ((*new_var) != old)
    {
      play_sound_effect(0x54100, 0, 0, 0);
    }
    self->value = *new_var;
  }
  calc_grid_layout__16TObjCMAssignMenuFPv(self);
  if (self->scroll < ((f32) self->target))
  {
    self->scroll += lbl_805DDB80;
    if (self->scroll > ((f32) self->target))
    {
      self->scroll = (f32) self->target;
    }
  }
  else
    if (self->scroll > ((f32) self->target))
  {
    self->scroll -= lbl_805DDB80;
    if (self->scroll < ((f32) self->target))
    {
      self->scroll = (f32) self->target;
    }
  }
  if ((self->enabled != 0) && (TObjCMProportion__sub_8029916C((M2C_UNK)(6)) != 0))
  {
    play_sound_effect(0x53704, 0, 0, 0);
    clear_task_state__14TObjCMMainMenuFv();
    self->active = 0;
  }
  else
    if (self->enabled == 0)
  {
    self->enabled = 1;
  }
}
#pragma pop

void * create__16TObjCMAssignMenuFPvPv(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x5C);
    if (o != NULL) {
        o = __ct__16TObjCMAssignMenuFv((void *)(o), (void *)(arg0), (void *)(arg1));
    }
    return o;
}

void *__ct__16TObjCMAssignMenuFv(void *arg0, void *parent, void *kind) {
    u32 bit;
    s32 i;
    ((void (*)(void *, void *))__ct__7TObjectFP7TObject)(arg0, parent);
    ((Menu_80297128 *)arg0)->vt = __vt__16TObjCMAssignMenu;
    ((Menu_80297128 *)arg0)->name = lbl_805D3CDC;
    ((Menu_80297128 *)arg0)->chara = (*(Chara_80297128 * *)&creation_player_character);
    ((Menu_80297128 *)arg0)->f20 = 0;
    ((Menu_80297128 *)arg0)->kind = (s32)kind;
    ((Menu_80297128 *)arg0)->count = ((Row_80297128 *)&class_appearance_table)[((s32 (*)(void *))get_display_index__12TCharaMakingFPv)(((Menu_80297128 *)arg0)->chara)].v[((Menu_80297128 *)arg0)->kind];
    ((Menu_80297128 *)arg0)->f28 = ((Menu_80297128 *)arg0)->chara->f38[((Menu_80297128 *)arg0)->kind];
    ((Menu_80297128 *)arg0)->n = 0;
    ((Menu_80297128 *)arg0)->mask = 0;
    bit = 1;
    for (i = 0; i < ((Menu_80297128 *)arg0)->count; i++) {
        ((Menu_80297128 *)arg0)->n++;
        ((Menu_80297128 *)arg0)->mask |= bit;
        bit <<= 1;
    }
    calc_grid_layout__16TObjCMAssignMenuFPv(arg0);
    ((Menu_80297128 *)arg0)->f58 = ((Menu_80297128 *)arg0)->f48;
    ((Menu_80297128 *)arg0)->f3C = 1;
    ((Menu_80297128 *)arg0)->f40 = lbl_805DDA90;
    switch (((Menu_80297128 *)arg0)->kind) {
    case 0:
        ((void (*)(s32))set_eff_tag__11TChCrEffTagFi)(6);
        break;
    case 1:
        if (((Menu_80297128 *)arg0)->chara->flags & 0x10) {
            ((void (*)(s32))set_eff_tag__11TChCrEffTagFi)(8);
        } else {
            ((void (*)(s32))set_eff_tag__11TChCrEffTagFi)(7);
        }
        break;
    case 2:
        ((void (*)(s32))set_eff_tag__11TChCrEffTagFi)(4);
        break;
    case 3:
        ((void (*)(s32))set_eff_tag__11TChCrEffTagFi)(3);
        break;
    }
    return arg0;
}

void fn_802972BC(void) {  }

void fn_802972C0(void) {  }

void TObjCMMainMenu__sub_802972C4(void) {  }

s32 try_pay_fee__14TObjCMMainMenuFv(void) {
    s32 temp_r4;
    void *temp_r3;

    if (get_char_index__23TAdSinglePlyChrSelectGCFUi(0xFFFF) == NULL) {
        play_sound_effect((s32)(0x40018519), (s32)(0), (s32)(0), (s32)(0));
        return 0;
    }
    temp_r3 = get_char_index__23TAdSinglePlyChrSelectGCFUi(0xFFFF);
    temp_r4 = M2C_FIELD(temp_r3, s32 *, 0x36C);
    if (temp_r4 < 0x2710) {
        M2C_FIELD(temp_r3, s32 *, 0x36C) = 0;
        play_sound_effect((s32)(0xB20C), (s32)(0), (s32)(0), (s32)(0));
        return 0;
    }
    M2C_FIELD(temp_r3, s32 *, 0x36C) = (s32) (temp_r4 - 0x2710);
    play_sound_effect((s32)(0x44E03), (s32)(0), (s32)(0), (s32)(0));
    return 1;
}

void confirm_selection__14TObjCMMainMenuFPv(void *arg0) {
    if (validate_character_name__14TObjCMMainMenuFPv(M2C_FIELD(arg0, void **, 0x1C)) == 0) {
        play_sound_effect((s32)(0x53F06), (s32)(0), (s32)(0), (s32)(0));
        return;
    }
    play_sound_effect((s32)(0x52D01), (s32)(0), (s32)(0), (s32)(0));
    if ((s8) M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), u8 *, 0x30) == -1) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), u8 *, 0x30) = calc_section_id_from_name();
    } else {
        try_pay_fee__14TObjCMMainMenuFv();
    }
    ((M2C_UNK (*)(M2C_UNK))set_selection__14TObjCMMainMenuFi)(1);
    reset_character_creation_figure_rotation();
    M2C_FIELD(arg0, s32 *, 0x30) = 0x3C;
    TObjCMMainMenu__data_805D659C = 2;
}

void open_name_menu__14TObjCMMainMenuFPv(void *arg0) {
    play_sound_effect((s32)(0x52D01), (s32)(0), (s32)(0), (s32)(0));
    TObjCMMainMenu__data_805D659C = 1;
    ((M2C_UNK (*)(s32))create__10TObjCMNameFPv)(M2C_FIELD(arg0, s32 *, 0x50));
}

void open_proportion_menu__14TObjCMMainMenuFPv(void *arg0) {
    play_sound_effect((s32)(0x52D01), (s32)(0), (s32)(0), (s32)(0));
    TObjCMMainMenu__data_805D659C = 1;
    ((M2C_UNK (*)(s32))create__16TObjCMProportionFPv)(M2C_FIELD(arg0, s32 *, 0x50));
}

void open_auto_mk_menu__14TObjCMMainMenuFPv(void *arg0) {
    play_sound_effect((s32)(0x52D01), (s32)(0), (s32)(0), (s32)(0));
    TObjCMMainMenu__data_805D659C = 1;
    ((M2C_UNK (*)(s32))create__16TObjCMAutoMkDataFPv)(M2C_FIELD(arg0, s32 *, 0x50));
}

void open_hair_menu__14TObjCMMainMenuFPv(void *arg0) {
    play_sound_effect((s32)(0x52D01), (s32)(0), (s32)(0), (s32)(0));
    TObjCMMainMenu__data_805D659C = 1;
    ((M2C_UNK (*)(s32))create__14TObjCMHairMenuFPv)(M2C_FIELD(arg0, s32 *, 0x50));
}

void open_assign_menu__14TObjCMMainMenuFPv(u8 *arg0) {
    play_sound_effect((s32)(0x52D01), (s32)(0U), (s32)(0), (s32)(0));
    TObjCMMainMenu__data_805D659C = 1;
    ((s32 (*)(s32, s32))create__16TObjCMAssignMenuFPvPv)(M2C_FIELD(arg0, s32 *, 0x50), M2C_FIELD(&TObjCMMainMenu__data_804DB9C8.value, M2C_UNK *, (M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x24), M2C_UNK *, (M2C_FIELD(arg0, s32 *, 0x2C) * 4)) * 0x10)));
}

#pragma push
#pragma fp_contract on
void draw_root_menu__14TObjCMMainMenuFv(u8 *arg0) {
    Menu_802975DC *m = (Menu_802975DC *)arg0;
    V2_802975DC a;
    V2_802975DC b;
    V2_802975DC c;
    V2_802975DC d;
    f32 t;
    f32 ratio;
    f32 step;
    f32 kA88;
    f32 kA7C;
    f32 x;
    f32 sq;
    f32 base;
    f32 alpha;
    f32 s;
    s32 i;
    s32 j;
    s32 v;
    s32 e;
    s32 k;
    u8 flag;
    s32 n;
    s32 o;
    s32 q;
    s32 r;

    t = m->t < m->tmax ? m->t : m->tmax;
    if (!(t <= 0.33f)) {
        if (t >= 0.66f) {
            ratio = 1.0f;
        } else {
            ratio = (t - 0.33f) / 0.33f;
        }
        b.y = 1.0f;
        a.y = 80.0f;
        for (i = 0; i < m->count; i++) {
            k = 0;
            v = get_creation_sprite_id__14TObjCMMainMenuFi(m->ids[i] + 0x8F) + 0x90;
            for (j = 0; j < 15; j++) {
                e = lbl_80464FD0[j];
                if (v < e) {
                    break;
                }
            }
            x = ratio * ((f32) e - 115.0f) + 115.0f;
            a.x = 115.0f;
            if (is_active__23TAdSinglePlyChrSelectGCFv() != 0 && i == m->sel) {
                k = 2;
                a.x += 9.0f * ((f32 (*)(int))sin_table_lookup)(m->pulse << 10);
            }
            b.x = (x - a.x) / 48.0f;
            fn_802910A4(k + 6, &a, &b, -2.125f);
            a.x = x;
            b.x = 1.0f;
            fn_802910A4(k + 7, &a, &b, -2.125f);
            a.y += 44.0f;
        }
    }
    if (!(t <= 0.0f)) {
        if (t >= 0.33f) {
            alpha = 1.0f;
        } else {
            alpha = t / 0.33f;
        }
        c.x = 95.0f;
        c.y = 80.0f;
        for (n = 0; n < m->count; n++) {
            o = 0;
            if (is_active__23TAdSinglePlyChrSelectGCFv() != 0 && n == m->sel) {
                o = -1;
            }
            draw_ui_sprite(o + 1, &c, -1.8125f, alpha);
            c.y += 44.0f;
        }
    }
    if (!(t <= 0.66f)) {
        x = (t - 0.66f) / 0.33999997f;
        d.x = 144.0f;
        d.y = 93.0f;
        sq = x * x;
        base = 0.6f * sq;
        for (q = 0; q < m->count; q++) {
            flag = 0;
            if (m->ids[q] == 9 && validate_character_name__14TObjCMMainMenuFPv(m->f1C) == 0) {
                flag = 1;
            }
            r = flag;
            if (is_active__23TAdSinglePlyChrSelectGCFv() != 0 && q == m->sel) {
                s = ((f32 (*)(int))sin_table_lookup)(m->pulse << 10);
                s = 0.25f * s + 1.0f;
                if (s > 1.0f) {
                    s = 1.0f;
                }
                alpha = s * sq;
                if (r) {
                    alpha *= lbl_805DDB50;
                }
                draw_ui_sprite(m->ids[q] + 0x8F, &d, -1.8125f, alpha);
            } else {
                alpha = base;
                if (r) {
                    alpha = base * lbl_805DDB50;
                }
                draw_ui_sprite(m->ids[q] + 0x8F, &d, -1.8125f, alpha);
            }
            d.y += 44.0f;
        }
    }
}
extern int fold_flush_6;
#pragma pop

#pragma push
#pragma fp_contract on
void TObjCMMainMenu__sub_80297B18(Menu_80297B18 *m) {
    s32 v14;
    s32 v10;
    s32 vC;
    s32 v8;
    u32 color;
    s32 i;
    f32 s;
    f32 step;
    f32 y;
    if (m->ids[m->sel] == 9 && validate_character_name__14TObjCMMainMenuFPv(m->f1C) == 0) {
        color = ((u32)(TObjCMMainMenu__data_805DDB44 * (lbl_805DDA70 - lbl_805DDBA8 * fabs_float(sin_table_lookup(m->pulse << 10)))) << 24) | 0xFFFFFF;
        s = get_scale__14TObjCMMainMenuFv();
        step = lbl_805DDBAC * s;
        y = lbl_805DDBA4 * s - step;
        for (i = 0; i < 2; i++) {
            const char *str = TQuestVmDownLoadServer__sub_8006EF6C(i + 0x3B);
            f32 x = lbl_805DDBA0 - (f32)calc_text_width((void *)str);
            restore_full_screen_view__11TCameraCtrlFv();
            draw_string__14TObjWarpStringFPviff(str, color, x, y);
            TCameraCtrl__sub_80068EF0();
            y += step;
        }
    }
    switch (TObjCMMainMenu__data_805D659C) {
    case 0:
        if (is_active__23TAdSinglePlyChrSelectGCFv() != 0) {
            if (m->ids[m->sel] == 9 && validate_character_name__14TObjCMMainMenuFPv(m->f1C) == 0) {
                v14 = lbl_805DDA5C;
                TObjCMIcon__sub_802994C8(1, &v14);
            } else if (((s8 *)m->f1C)[0x30] == -1) {
                Pair_80297B18 p18 = lbl_80464FC8[0];
                TObjCMIcon__sub_802994C8(2, (s32 *)&p18);
            } else {
                v10 = lbl_805DDA60;
                TObjCMIcon__sub_802994C8(1, &v10);
            }
        } else {
            reset_icon_flags__10TObjCMIconFv();
        }
        break;
    case 1:
        switch (m->ids[m->sel]) {
        case 7:
            reset_icon_flags__10TObjCMIconFv();
            break;
        case 8:
            break;
        default:
            vC = lbl_805DDA64;
            TObjCMIcon__sub_802994C8(1, &vC);
            break;
        }
        break;
    case 2:
        if (m->f30 == 0 || creation_resource_ready_state == 2) {
            v8 = lbl_805DDA68;
            TObjCMIcon__sub_802994C8(1, &v8);
        } else {
            reset_icon_flags__10TObjCMIconFv();
        }
        break;
    default:
        reset_icon_flags__10TObjCMIconFv();
        break;
    }
}
#pragma pop

void draw_footer_divider__14TObjCMMainMenuFPv(Menu_80297DB8 *self) {
    Prim_80297DB8 prim;
    u32 cols[4];
    f32 s = get_scale__14TObjCMMainMenuFv();
    f32 top = lbl_805DDBB0 * s;
    f32 bot = top + lbl_805DDBB4 * s;
    Cols_80297DB8 *src;
    Quad_80297DB8 *q;
    s32 i;
    s32 j;
    prim.start = 0;
    prim.count = 4;
    for (i = 0; i < 2; i++) {
        q = &lbl_804DBC88[i];
        src = &lbl_804DBC68[i];
        q->p[1].y = top;
        q->p[0].y = top;
        q->p[3].y = bot;
        q->p[2].y = bot;
        for (j = 0; j < 4; j++) {
            u32 c = src->c[j];
            cols[j] = (c & 0x00FFFFFF) | (__cvt_fp2unsigned((f32)(c >> 24) * self->alpha) << 24);
        }
        prim.colors = cols;
        prim.pts = q->p;
        draw_strip_swap_color__15TWindowCtrlMainFPviif(&prim, 4, 6, lbl_805DDB90);
    }
}

void TObjCMMainMenu__vt7(void) {  }

void TObjCMMainMenu__sub_80298310(void) {  }

void update_random_proportion_action__14TObjCMMainMenuFPv(void * _w0) {
    f32 temp_f31;
    f32 temp_f31_2;
    if (is_active__23TAdSinglePlyChrSelectGCFv() != 0) {
        switch (TObjCMMainMenu__data_805D659C) {
        case 0:
        case 1:
            temp_f31 = get_right_trigger_ratio__16TObjCMProportionFv();
            temp_f31_2 = get_ratio__16TObjCMProportionFv() - temp_f31;
            if (fabs_float(temp_f31_2) > lbl_805DDBF4) {
                TObjCMMainMenu__sub_80298DA0((s32) (lbl_805DDBF8 * temp_f31_2));
            }
            break;
        }
    }
}

#pragma push
#pragma opt_common_subs off
void update_slide_offset__14TObjCMMainMenuFPv(M_802983A0 *arg0) {
    f32 v;
    switch (TObjCMMainMenu__data_805D659C) {
    case 1:
        v = arg0->f40 + lbl_805DDBFC;
        arg0->f40 = v;
        if (v < lbl_805DDA90) {
            arg0->f40 = lbl_805DDA90;
        }
        break;
    default:
        v = arg0->f40 + TObjCMMainMenu__data_805DDC00;
        arg0->f40 = v;
        if (v > lbl_805DDA70) {
            arg0->f40 = lbl_805DDA70;
        }
        break;
    }
}
#pragma pop

void update_submenu_fade__14TObjCMMainMenuFv(M_802983F8 *arg0) {
    f32 v;
    switch (TObjCMMainMenu__data_805D659C) {
    case 0:
        v = arg0->f3c + TObjCMMainMenu__data_805DDC00;
        arg0->f3c = v;
        if (v > 1.0f) {
            arg0->f3c = 1.0f;
        }
        break;
    default:
        v = arg0->f3c + lbl_805DDBFC;
        arg0->f3c = v;
        if (v < 0.0f) {
            arg0->f3c = 0.0f;
        }
        break;
    }
}

#pragma push
#pragma fp_contract on
void update_menu_reveal__14TObjCMMainMenuFv(M_80298450 *self) {
    f32 v;
    switch (TObjCMMainMenu__data_805D659C) {
    case 3:
    case 4:
    case 5:
    case 6:
        v = self->f38 + lbl_805DDC04;
        self->f38 = v;
        if (v < 0.0f) {
            self->f38 = 0.0f;
        }
        break;
    default:
        self->f38 += lbl_805DDC08;
        if (is_active__23TAdSinglePlyChrSelectGCFv() != 0) {
            self->f38 += lbl_805DDAFC * (lbl_805DDA70 - self->f38);
        }
        if (self->f38 > 1.0f) {
            self->f38 = 1.0f;
        }
        break;
    }
}
extern int fold_flush_7;
#pragma pop

void TObjCMMainMenu__vt6(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x30) - 1;
    M2C_FIELD(arg0, s32 *, 0x30) = temp_r0;
    if (temp_r0 < 0) {
        TObjCMMainMenu__data_805D659C = 4;
    }
}

void TObjCMMainMenu__vt5(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x30) - 1;
    M2C_FIELD(arg0, s32 *, 0x30) = temp_r0;
    if (temp_r0 < 0) {
        TObjCMMainMenu__data_805D659C = 3;
    }
}

#pragma push
#pragma opt_common_subs off
#pragma fp_contract on
void TObjCMMainMenu__vt2(void *arg0) {
    f32 temp_f2;
    f32 fv;
    f32 v1;
    f32 v2;
    f32 c1;
    f32 c2;
    s32 temp_r0;
    fv = M2C_FIELD(arg0, f32 *, 0x48);
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) (fv + lbl_805DDC0C);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x30) - 1;
    M2C_FIELD(arg0, s32 *, 0x30) = temp_r0;
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0x30) = 0;
    }
    if (((s32) creation_resource_ready_state == 2) || ((s32) M2C_FIELD(arg0, s32 *, 0x30) == 0)) {
        temp_f2 = M2C_FIELD(arg0, f32 *, 0x48);
        if (temp_f2 < lbl_805DDBBC) {
            M2C_FIELD(arg0, f32 *, 0x48) = (f32) ((lbl_805DDAFC * (lbl_805DDBBC - temp_f2)) + temp_f2);
        }
        fv = M2C_FIELD(arg0, f32 *, 0x48);
        if (fv > lbl_805DDA70) {
            M2C_FIELD(arg0, f32 *, 0x48) = lbl_805DDA70;
        }
        if (TObjCMProportion__sub_8029916C(4) != 0) {
            play_sound_effect(0x52D01, 0, 0, 0);
            M2C_FIELD(arg0, s32 *, 0x30) = 7;
            TObjCMMainMenu__data_805D659C = 5;
            create_fade__14TObjCMMainMenuFPvPv(7, 1);
        }
    } else {
        fv = M2C_FIELD(arg0, f32 *, 0x48);
        if (fv > lbl_805DDBBC) {
            M2C_FIELD(arg0, f32 *, 0x48) = lbl_805DDBBC;
        }
    }
}
extern int fold_flush_8;
#pragma pop

void TObjCMMainMenu__vt1(void) {  }

void TObjCMMainMenu__handle_creation_input(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r3;
    s32 temp_r5;
    if (((s32 (*)(void))is_not_dressing_room_mode__14TObjCMMainMenuFv)() != 0) {
        ((M2C_UNK (*)(int))set_eff_tag__11TChCrEffTagFi)((int) (1));
    } else {
        ((M2C_UNK (*)(int))set_eff_tag__11TChCrEffTagFi)((int) (2));
    }
    if (is_active__23TAdSinglePlyChrSelectGCFv() != 0) {
        if (((s8) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x1C), u8 *, 0x30) == -1) && (TObjCMProportion__sub_8029916C((M2C_UNK)((int) (2))) != 0)) {
            play_sound_effect((M2C_UNK)((int) (0x53704)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)));
            TObjCMMainMenu__sub_8028D9B4((void *) (M2C_FIELD(arg0, u8 **, 0x1C)));
            M2C_FIELD(arg0, s32 *, 0x30) = 7;
            TObjCMMainMenu__data_805D659C = 6;
            return;
        }
        if (TChCrCharSelect__sub_80298F8C((int) (0x20)) != 0) {
            temp_r3 = M2C_FIELD(arg0, s32 *, 0x2C) + 1;
            M2C_FIELD(arg0, s32 *, 0x2C) = temp_r3;
            if (temp_r3 >= (s32) M2C_FIELD(arg0, s32 *, 0x28)) {
                M2C_FIELD(arg0, s32 *, 0x2C) = 0;
            }
            play_sound_effect((M2C_UNK)((int) (0x54100)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)));
        } else if (TChCrCharSelect__sub_80298F8C((int) (0x10)) != 0) {
            temp_r0 = M2C_FIELD(arg0, s32 *, 0x2C) - 1;
            M2C_FIELD(arg0, s32 *, 0x2C) = temp_r0;
            if (temp_r0 < 0) {
                M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) - 1);
            }
            play_sound_effect((M2C_UNK)((int) (0x54100)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)));
        }
        if (TObjCMProportion__sub_8029916C((M2C_UNK)((int) (4))) != 0) {
            temp_r5 = M2C_FIELD(arg0, s32 *, 0x24);
            (reinterpret_cast<TObjCMMainMenu*>(arg0)->*(*reinterpret_cast<CreationMenuCallback*>((u8*)&TObjCMMainMenu__data_804DB9C8 + (M2C_FIELD((temp_r5 + (M2C_FIELD(arg0, s32 *, 0x2C) * 4)), s32 *, 0) * 0x10) + 4)))();
        }
    }
}

#pragma push
#pragma fp_contract on
void run_task__14TObjCMMainMenuFv(Menu_802987AC *arg0) {
    f32 sp8;

    reset_proportions__15TChCrCharSelectFv();
    rand();
    ((void (*)(void *, int))update_menu_reveal__14TObjCMMainMenuFv)(arg0, arg0->f34++);
    ((void (*)(void *))update_submenu_fade__14TObjCMMainMenuFv)(arg0);
    update_slide_offset__14TObjCMMainMenuFPv((M_802983A0 *)(arg0));
    static MenuFn_802987AC table[7] = {
        &Menu_802987AC::s0, &Menu_802987AC::s1, &Menu_802987AC::s2,
        &Menu_802987AC::s3, &Menu_802987AC::s4, &Menu_802987AC::s5,
        &Menu_802987AC::s6,
    };
    (arg0->*table[TObjCMMainMenu__data_805D659C])();
    TObjCMMainMenu__selected_entry_id = arg0->f24[arg0->f2c];
    update_random_proportion_action__14TObjCMMainMenuFPv((void *)(arg0));
    ((void (*)(void *))TObjCMMainMenu__sub_80298310)(arg0);
    switch (TObjCMMainMenu__data_805D659C) {
    case 4:
    case 6:
        if (arg0->f54 > lbl_805DDA90) {
            f32 v = arg0->f54 + lbl_805DDC10;
            arg0->f54 = v;
            if (v < lbl_805DDA90) {
                arg0->f54 = lbl_805DDA90;
            }
        }
        break;
    default:
        if (is_active__23TAdSinglePlyChrSelectGCFv() != 0 && TAdSinglePlyChrSelectGC__sub_802905B8() != 0) {
            if (arg0->f54 < 1.0f) {
                f32 step = 0.083333336f;
                if (arg0->f54 > 0.5833333f) {
                    step *= -0.8f * ((arg0->f54 - 0.5833333f) / 0.4166667f) + 1.0f;
                }
                f32 v = (arg0->f54 += step);
                if (v > 1.0f) {
                    arg0->f54 = 1.0f;
                }
            }
        } else {
            arg0->f54 = lbl_805DDA90;
        }
        break;
    }
    set_speed__14TObjCMMainMenuFf(lbl_805DDB00 * (lbl_805DDA70 - arg0->f54));
    ((void (*)(int, f32 *))get_creation_pad_stick)(0, &sp8);
    if (sp8 > lbl_805DDA90 || TObjCMProportion__sub_8029914C(0xF0) != 0) {
        if (arg0->f4c > 0) {
            request_creation_motion(0);
        }
        arg0->f4c = 0;
    } else {
        arg0->f4c++;
        if (arg0->f4c == 0x384) {
            request_creation_motion(1);
        } else if (arg0->f4c == 0x546) {
            request_creation_motion(2);
        } else if (arg0->f4c > 0x546) {
            arg0->f4c = 0x546;
        }
    }
    run_tasks__7TObjectFv(arg0->f50);
    ((void (*)(void *))fn_802972C0)(arg0);
}
#pragma pop

void *create__14TObjCMMainMenuFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x58);
    if (o != NULL) {
        o = TObjCMMainMenu__ct((void *)(o), (void *)(arg0));
    }
    return o;
}

void *destroy__14TObjCMMainMenuFPvs(void *arg0, s16 arg1) {
    void *temp_r3;
    void *temp_r5;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804DBDA8;
        temp_r3 = M2C_FIELD(arg0, void **, 0x50);
        if (temp_r3 != NULL) {
            if (temp_r3 != NULL) {
                ((VObj_80298AD0_80298A88 *)temp_r3)->m0(1);
            }
            M2C_FIELD(arg0, void **, 0x50) = NULL;
        }
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), s32 *, 0x18) = -1;
        temp_r5 = M2C_FIELD(arg0, void **, 0x1C);
        M2C_FIELD(temp_r5, s8 *, 0x33) = 2;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void *TObjCMMainMenu__ct(void *arg0, void *parent) {
    void *o;
    ((void * (*)(void *, void *))__ct__7TObjectFP7TObject)(arg0, parent);
    ((Menu_80298B70 *)arg0)->vt = ((u8 *)&lbl_804DBDA8);
    ((Menu_80298B70 *)arg0)->name = lbl_805D3CD0;
    ((Menu_80298B70 *)arg0)->chara = (*(Chara_80298B70 * *)&creation_player_character);
    if (!(((Menu_80298B70 *)arg0)->chara->f32 & 0xA) && ((Menu_80298B70 *)arg0)->chara->f31 == TObjCMMainMenu__sub_8028D9A8()->f31) {
        copy_player_visual_record(((Menu_80298B70 *)arg0)->chara, TObjCMMainMenu__sub_8028D9A8());
    }
    strncpy(((Menu_80298B70 *)arg0)->chara->name, (const char *)TObjCMMainMenu__sub_80298DD4(), 0xC);
    ((Menu_80298B70 *)arg0)->chara->fC = 0;
    ((Menu_80298B70 *)arg0)->chara->f1C = 0;
    ((Menu_80298B70 *)arg0)->chara->f32 &= ~0xA;
    if (((Menu_80298B70 *)arg0)->chara->f30 == -1) {
        if (((Menu_80298B70 *)arg0)->chara->f32 & 0xA) {
            ((Menu_80298B70 *)arg0)->mode = 2;
        } else if (!(((Menu_80298B70 *)arg0)->chara->f34 & 0x10)) {
            ((Menu_80298B70 *)arg0)->mode = 0;
        } else {
            ((Menu_80298B70 *)arg0)->mode = 1;
        }
    } else if (((Menu_80298B70 *)arg0)->chara->f32 & 0xA) {
        ((Menu_80298B70 *)arg0)->mode = 5;
    } else if (!(((Menu_80298B70 *)arg0)->chara->f34 & 0x10)) {
        ((Menu_80298B70 *)arg0)->mode = 3;
    } else {
        ((Menu_80298B70 *)arg0)->mode = 4;
    }
    ((Menu_80298B70 *)arg0)->f28 = __vt__14TObjCMMainMenu[((Menu_80298B70 *)arg0)->mode].a;
    ((Menu_80298B70 *)arg0)->list = __vt__14TObjCMMainMenu[((Menu_80298B70 *)arg0)->mode].b;
    (*(int *)&TObjCMMainMenu__data_805D659C) = 0;
    ((Menu_80298B70 *)arg0)->f2C = 0;
    TObjCMMainMenu__selected_entry_id = ((Menu_80298B70 *)arg0)->list[((Menu_80298B70 *)arg0)->f2C];
    fn_802993F0();
    ((Menu_80298B70 *)arg0)->f38 = lbl_805DDA90;
    ((Menu_80298B70 *)arg0)->f3C = lbl_805DDA90;
    ((Menu_80298B70 *)arg0)->f40 = lbl_805DDA90;
    ((Menu_80298B70 *)arg0)->f44 = lbl_805DDA90;
    ((Menu_80298B70 *)arg0)->f48 = lbl_805DDA90;
    ((Menu_80298B70 *)arg0)->f4C = 0;
    ((Menu_80298B70 *)arg0)->f54 = lbl_805DDA90;
    set_speed__14TObjCMMainMenuFf(lbl_805DDB00);
    o = __nw__7TObjectFUl(0x1C);
    if (o != 0) {
        o = ((void * (*)(void *, void *))__ct__7TObjectFP7TObject)(o, 0);
    }
    ((Menu_80298B70 *)arg0)->f50 = o;
    fn_802947A8();
    fn_8029945C(lbl_80464F50);
    ((void (*)(void *))TObjCMMainMenu__sub_802972C4)(arg0);
    return arg0;
}

void clear_task_state__14TObjCMMainMenuFv(void) { (*(int *)&TObjCMMainMenu__data_805D659C) = 0; }

f32 get_scale__14TObjCMMainMenuFv(void) {
    return ui_sprite_scale;
}

f32 get_proportion__14TObjCMMainMenuFv(void) {
    return lbl_805D3CA0;
}

void set_selection__14TObjCMMainMenuFi(int a0) { creation_camera_mode = a0; }

void TObjCMMainMenu__sub_80298DA0(int a0) { creation_figure_rotation_y = (creation_figure_rotation_y + a0); }

void set_speed__14TObjCMMainMenuFf(f32 farg0) {
    if ((void *) creation_figure_object != NULL) {
        M2C_FIELD(creation_figure_object, f32 *, 0x38) = farg0;
    }
}

u8 is_not_dressing_room_mode__14TObjCMMainMenuFv(void) {
    return (u8) (creation_dressing_room_mode_flag == 0);
}

M2C_UNK *TObjCMMainMenu__sub_80298DD4(void) {
    return &character_creation_name_buffer.value;
}

s32 get_creation_pad(void) {
    return M2C_FIELD(&controller_physical_port_bank.value, M2C_UNK *, (get_clamped_player_index__14TChCrEffCtrlPlFv() * 4));
}

}
