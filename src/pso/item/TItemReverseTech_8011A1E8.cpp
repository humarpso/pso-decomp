#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8011A350_main_task {
    M2C_UNK value;
    u8 remaining[0x30];
};

struct RecoveredGlobal_8011A3D8_lbl_804A03A8
{
  M2C_UNK value;
  u8 remaining[0x34];
};

struct RecoveredGlobal_8011A3D8_main_task
{
  M2C_UNK value;
  u8 remaining[0x30];
};

struct Ent_8011A270 { int name; int a; int b; };

struct Hdr_8011A270 { int entries; int x4; };

struct Name_8011A270 { char s[0x1C]; };

struct Vec_8011A43C { f32 x, y, z; };

struct Ent_8011A43C { void (*fn)(); s32 arg; };

extern "C" {
M2C_UNK TKeyBoardControl__sub_8000F92C();
M2C_UNK TKeyBoardControl__sub_8000F9CC(int);
s32 is_ready__22TQuestVmDownLoadServerFv();
M2C_UNK TLobby__sub_800FA464();
s8 func_801A5E54__Fv();
M2C_UNK update_input_frame__16TKeyBoardControlFv();
M2C_UNK controller_stuff__Fv();
M2C_UNK render_tick__Fv();
M2C_UNK update_sound_request_slots();
M2C_UNK render_screen_overlay__9TMainTaskFv(void *);
M2C_UNK some_empty_func__9TMainTaskFv(void *);
M2C_UNK render__9TMainTaskFv(void *);
M2C_UNK run_task__9TMainTaskFv(void *);
M2C_UNK noop__23TAdSinglePlyChrSelectGCFv();
extern RecoveredGlobal_8011A350_main_task main_task;
void run_frame__16TItemReverseTechFv(void);
M2C_UNK render_tick__Fv();
M2C_UNK delete_all_task_children__9TMainTaskFv(void *);
extern RecoveredGlobal_8011A3D8_lbl_804A03A8 lbl_804A03A8;
extern RecoveredGlobal_8011A350_main_task main_task;
void TItemReverseTech__sub_8011A3D8(void);
Hdr_8011A270 *alloc__23TAdSinglePlyChrSelectGCFPv(u32);
void safe_free__23TAdSinglePlyChrSelectGCFUi(int);
s32 fn_800F7D30(int, int, int);
int set_stream_and_load_file__6TLobbyFi(char *);
int free__11TOBoss4RockFUi(void*);
int alloc_buffer__11TOBoss4RockFPv(u32);
char *strncpy(char *, const char *, u32);
void load_gvm_texture_archive(int, int);
extern Name_8011A270 lbl_8043E714;
extern int TItemReverseTech__data_805D54D0;
extern int lbl_805D54D4;
extern int lbl_805D54D8;
void load_textures__16TItemReverseTechFv(void);
void TKeyBoardControl__sub_8000F90C(s32);
void TKeyBoardControl__sub_8000F91C(s32);
void set_active_camera_pose(Vec_8011A43C *, Vec_8011A43C *);
void select_active_controller__11TCameraCtrlFc(s32);
void TCameraCtrl__ct(void *, s32);
void clear_resource_load_tasks();
void create__16TItemReverseTechFv(void);
void init_map_lights(void *);
void reset_controller_input_state();
void set_copy_clear_color_argb(s32, s32, s32);
M2C_UNK render_tick__Fv();
void create_quad_sprites__13TParticleCtrlFv();
void * __nw__7TObjectFUl(M2C_UNK);
void set_screen_size(f32, f32);
extern const Vec_8011A43C lbl_8043E68C[];
extern const Vec_8011A43C lbl_8043E698[];
extern RecoveredGlobal_8011A3D8_lbl_804A03A8 lbl_804A03A8;
extern u8 lbl_804A6F34[];
extern s32 tl_camera;
extern const float lbl_805DAC4C;
extern const f32 lbl_805DAC50;
void init_scene__16TItemReverseTechFv(void);
}

extern "C" {

void TItemReverseTech__sub_8011A54C(void* a0);
int TItemReverseTech__sub_8011A55C(void);
int TItemReverseTech__sub_8011A580(void);
void TItemReverseTech__sub_8011A5A4(void);
void create__16TItemReverseTechFv(void);
void free__16TItemReverseTechFv(void);
M2C_UNK TItemReverseTech__ct(void *, s32);
int __dl__FPv(void*);
void * __nw__7TObjectFUl(M2C_UNK);
int free__11TOBoss4RockFUi(void*);
int free_texture_if_valid(void*);
int set_global_flags__6TLobbyFi(void*);

extern s32 tl_01;

void create__16TItemReverseTechFv(void) {
    void *obj = __nw__7TObjectFUl(0x28);
    if (obj != 0) {
        TItemReverseTech__ct(obj, tl_01);
    }
}

    extern int TItemReverseTech__data_805D54D0;
    extern int lbl_805D54D4;
    extern int lbl_805D54D8;
void free__16TItemReverseTechFv(void) { free_texture_if_valid((void*)(TItemReverseTech__data_805D54D0)); free__11TOBoss4RockFUi((void*)(lbl_805D54D8)); lbl_805D54D8 = 0; free__11TOBoss4RockFUi((void*)(lbl_805D54D4)); lbl_805D54D4 = 0; __dl__FPv((void*)(TItemReverseTech__data_805D54D0)); TItemReverseTech__data_805D54D0 = 0; }

    extern const float lbl_805DAC4C;

typedef char RecoveredGlobal_8011A350_main_task_size[sizeof(RecoveredGlobal_8011A350_main_task) == 0x34 ? 1 : -1];

#pragma push
#pragma opt_propagation off
void load_textures__16TItemReverseTechFv(void) {
    Name_8011A270 *name = &lbl_8043E714;
    Ent_8011A270 *e;
    s32 i;
    Hdr_8011A270 *hdr;
    int file;
    int buf;
    lbl_805D54D8 = alloc_buffer__11TOBoss4RockFPv(0x1C);
    strncpy((char *)lbl_805D54D8, name->s, 0x1B);
    e = (Ent_8011A270 *)alloc_buffer__11TOBoss4RockFPv(0xCC);
    lbl_805D54D4 = (int)e;
    for (i = 0; i < 17; i++, e++) {
        e->name = lbl_805D54D8;
        e->a = 0;
        e->b = 0;
    }
    hdr = alloc__23TAdSinglePlyChrSelectGCFPv(8);
    TItemReverseTech__data_805D54D0 = (int)hdr;
    hdr->entries = lbl_805D54D4;
    file = set_stream_and_load_file__6TLobbyFi(name->s);
    if (file != 0) {
        buf = alloc_buffer__11TOBoss4RockFPv(0x200000);
        if (buf != 0 && fn_800F7D30(file, buf, 0x200000) > 0) {
            load_gvm_texture_archive(buf, TItemReverseTech__data_805D54D0);
        }
        free__11TOBoss4RockFUi((void *)buf);
    }
    safe_free__23TAdSinglePlyChrSelectGCFUi(file);
}
#pragma pop

void run_frame__16TItemReverseTechFv(void) {
    M2C_UNK *var_r3;
    controller_stuff__Fv();
    update_input_frame__16TKeyBoardControlFv();
    var_r3 = (M2C_UNK *)(&main_task.value);
    var_r3 = (M2C_UNK *)(&main_task.value);
    some_empty_func__9TMainTaskFv((void *) (&main_task.value));
    var_r3 = (M2C_UNK *)(&main_task.value);
    var_r3 = (M2C_UNK *)(&main_task.value);
    run_task__9TMainTaskFv((void *) (&main_task.value));
    var_r3 = (M2C_UNK *)(&main_task.value);
    var_r3 = (M2C_UNK *)(&main_task.value);
    render__9TMainTaskFv((void *) (&main_task.value));
    var_r3 = (M2C_UNK *)(&main_task.value);
    var_r3 = (M2C_UNK *)(&main_task.value);
    render_screen_overlay__9TMainTaskFv((void *) (&main_task.value));
    TLobby__sub_800FA464();
    update_sound_request_slots();
    noop__23TAdSinglePlyChrSelectGCFv();
    if (func_801A5E54__Fv() != 0) {
        TKeyBoardControl__sub_8000F92C();
    }
    if (is_ready__22TQuestVmDownLoadServerFv() != 0) {
        var_r3 = (M2C_UNK *)((u8 *)(NULL));
        TKeyBoardControl__sub_8000F9CC((int) (0));
    }
    render_tick__Fv();
}

typedef struct RecoveredGlobal_8011A3D8_lbl_804A03A8 RecoveredGlobal_8011A3D8_lbl_804A03A8;
typedef struct RecoveredGlobal_8011A3D8_main_task RecoveredGlobal_8011A3D8_main_task;
typedef char RecoveredGlobal_8011A3D8_lbl_804A03A8_size[((sizeof(RecoveredGlobal_8011A3D8_lbl_804A03A8)) == 0x38) ? (1) : (-1)];
typedef char RecoveredGlobal_8011A3D8_main_task_size[((sizeof(RecoveredGlobal_8011A3D8_main_task)) == 0x34) ? (1) : (-1)];
void TItemReverseTech__sub_8011A3D8(void) {
  M2C_UNK (*temp_r12)();
  u8 *var_r31;
  s32 var_r30;
  delete_all_task_children__9TMainTaskFv((void *) (&(*(RecoveredGlobal_8011A3D8_main_task *)&main_task).value));
  var_r30 = 6;
  var_r31 = ((u8 *) (&lbl_804A03A8.value)) + 0x30;
  do
  {
    temp_r12 = *((M2C_UNK (**)()) (((s8 *) var_r31) + 4));
    var_r31 -= 8;
    if (temp_r12 != 0)
    {
      temp_r12();
    }
    var_r30 -= 1;
  }
  while (var_r30 >= 0);
  render_tick__Fv();
}

typedef s32 M2C_UNK;
void init_scene__16TItemReverseTechFv(void) {
    Ent_8011A43C *e;
    u32 i;
    void (*fn)();
    void *cam;
    set_screen_size((*(const f32 *)&lbl_805DAC4C), lbl_805DAC50);
    set_copy_clear_color_argb(0, 0, 0);
    reset_controller_input_state();
    clear_resource_load_tasks();
    e = ((Ent_8011A43C *)&lbl_804A03A8);
    for (i = 0; i != 7; i++) {
        fn = e->fn;
        e++;
        if (fn != NULL) {
            fn();
        }
    }
    init_map_lights(lbl_804A6F34);
    cam = __nw__7TObjectFUl((M2C_UNK)(0x1D4));
    if (cam != NULL) {
        TCameraCtrl__ct(cam, tl_camera);
    }
    Vec_8011A43C eye = lbl_8043E68C[0];
    Vec_8011A43C at = lbl_8043E698[0];
    select_active_controller__11TCameraCtrlFc(9);
    set_active_camera_pose(&eye, &at);
    TKeyBoardControl__sub_8000F90C(2);
    TKeyBoardControl__sub_8000F91C(2);
    create_quad_sprites__13TParticleCtrlFv();
    create__16TItemReverseTechFv();
    render_tick__Fv();
}

void TItemReverseTech__sub_8011A54C(void* a0) { *(float*)((char*)a0 + 0x20) = lbl_805DAC4C; *(float*)((char*)a0 + 0x24) = lbl_805DAC4C; }

int TItemReverseTech__sub_8011A55C(void) { return set_global_flags__6TLobbyFi((void*)(2)); }
int TItemReverseTech__sub_8011A580(void) { return set_global_flags__6TLobbyFi((void*)(1)); }
void TItemReverseTech__sub_8011A5A4(void) {  }

}
