#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Ent_801FB798 { s32 a; char *name; };

extern "C" {
s32 set_global_param__8TObjFishFi(s32);
extern u32 TRaderMapCore__data_805D5F4C;
s32 TRaderMapCore__sub_801FB874(void);
s32 get_current_floor();
s32 TLobby__sub_800F957C(int);
s32 save_floor_discovery__13TRaderMapCoreFiPv(int, int);
s32 free_statics__13TRaderMapCoreFv();
s32 TLobby__sub_803DA16C(int);
extern u8 *TRaderMapCore__data_805D5F28;
extern s32 TRaderMapCore__data_805D5F44;
void unload_floor_map__13TRaderMapCoreFv(void);
s32 get_current_floor();
void copy_name(const char *);
u8 *create_named_object(char *);
void TLobby__sub_801317E4(char *, char *, const char *);
void init_radar_floor_flags(s32, u8 *);
void TRaderMapCore__sub_801FB904(void);
int get_status__6TSceneFv(void);
s32 get_global_state__14TOKeyMachine01Fv(void);
Ent_801FB798 *get_floor_scene_table(s32);
void bind_gvm_texture_list(char *, u8 *);
extern const char lbl_8044A7B0[];
extern s32 lbl_805D49B4;
extern u8 *TRaderMapCore__data_805D5F28;
extern s32 TRaderMapCore__data_805D5F30;
extern s8 lbl_805D5F34;
extern s32 lbl_805D5F38;
extern s32 TRaderMapCore__data_805D5F44;
extern const char lbl_805DC5AC[2];
extern const char lbl_805DC5B0[3];
void load_map_resources__13TRaderMapCoreFv(void);
}

extern "C" {

void create__13TRaderMapCoreFv(void);
M2C_UNK TRaderMapCore__ct(void *, s32);
s32 is_not_split_screen__13TRaderMapCoreFv();
u32 __nw__7TObjectFUl(M2C_UNK);
s32 is_ready__6TLobbyFv();

extern s32 tl_radermap;
extern s32 tl_clipout;

void create__13TRaderMapCoreFv(void) {
    void *obj;
    if ((is_not_split_screen__13TRaderMapCoreFv() != 1) || (is_ready__6TLobbyFv() != 1)) {
        if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
            if ((obj = (void *) __nw__7TObjectFUl(0x1A4)) != 0) {
                TRaderMapCore__ct(obj, tl_clipout);
            }
        } else if ((obj = (void *) __nw__7TObjectFUl(0x1A4)) != 0) {
            TRaderMapCore__ct(obj, tl_radermap);
        }
    }
}

void unload_floor_map__13TRaderMapCoreFv(void) {
    u32 temp_r3;
    u8 *temp_r31;
    temp_r31 = (u8 *)(TRaderMapCore__data_805D5F28);
    if (temp_r31 != NULL) {
        save_floor_discovery__13TRaderMapCoreFiPv((int) (get_current_floor()), (int) (temp_r31));
    }
    free_statics__13TRaderMapCoreFv();
    if ((void *) TRaderMapCore__data_805D5F28 != NULL) {
        temp_r3 = M2C_FIELD(TRaderMapCore__data_805D5F28, u32 *, 4);
        if (temp_r3 != 0U) {
            TLobby__sub_803DA16C((int) (temp_r3));
        }
    }
    if ((void *) TRaderMapCore__data_805D5F28 != NULL) {
        TLobby__sub_800F957C((int) (TRaderMapCore__data_805D5F28));
        TRaderMapCore__data_805D5F28 = NULL;
    }
    TRaderMapCore__data_805D5F44 = 0;
}

void load_map_resources__13TRaderMapCoreFv(void) {
    char buf[32];
    Ent_801FB798 *e;
    s32 status;
    s32 state;
    state = get_global_state__14TOKeyMachine01Fv();
    status = get_status__6TSceneFv();
    e = get_floor_scene_table(state);
    TLobby__sub_801317E4(buf, e[status].name, lbl_8044A7B0);
    TRaderMapCore__data_805D5F28 = create_named_object(buf);
    if (TRaderMapCore__data_805D5F28 != NULL && *(u32 *)(TRaderMapCore__data_805D5F28 + 4) != 0) {
        TLobby__sub_801317E4(buf, e[status].name, lbl_805DC5AC);
        bind_gvm_texture_list(buf, *(u8 **)(TRaderMapCore__data_805D5F28 + 4));
    }
    copy_name(lbl_805DC5B0);
    lbl_805D49B4 = 0;
    TRaderMapCore__sub_801FB904();
    e = (Ent_801FB798 *)TRaderMapCore__data_805D5F28;
    if (e != NULL) {
        init_radar_floor_flags(get_current_floor(), (u8 *)e);
    }
    TRaderMapCore__data_805D5F30 = 0;
    lbl_805D5F34 = 0;
    lbl_805D5F38 = 0;
    TRaderMapCore__data_805D5F44 = 1;
}

s32 TRaderMapCore__sub_801FB874(void) {
    if ((u32) TRaderMapCore__data_805D5F4C != 0U) {
        set_global_param__8TObjFishFi((s32) TRaderMapCore__data_805D5F4C);
        return 1;
    }
    return -1;
}

}
