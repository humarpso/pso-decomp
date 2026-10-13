#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Obj_8002CACC { s32 f0; u8 pad4[0x14]; void *vt; f32 f1c; f32 f20; f32 f24; s32 f28[4]; };

typedef struct Vec_8002C968 {
    f32 x, y, z;
} Vec_8002C968;

typedef struct Player_8002C968 {
    u8 pad0[0x38];
    Vec_8002C968 pos;
} Player_8002C968;

typedef struct Floor_8002C968 {
    u8 pad0[0x28];
    void *objs[4];
} Floor_8002C968;

struct Obj_8002CA38 { u8 pad[0x28]; u32 slot[4]; };

extern "C" {
void __ct__7TObjectFP7TObject(void *self, void *parent);
extern char __vt__14TObjBoss1Floor[];
extern s32 TObjBoss1Floor__name;
extern const f32 lbl_805D8174;
Obj_8002CACC *TObjBoss1Floor__ct(Obj_8002CACC *self, void *parent);
void queue_destruction__7TObjectFv(void *);
void *create_particle_emitter(Vec_8002C968 *, s32);
void copy_pos__11TNowLoadingFPvPv(void *, Vec_8002C968 *);
s32 check_v2_mode__9TObjEneDDFv();
Player_8002C968 *get_player_by_client_id(s32);
extern const f32 lbl_805D8170;
void run_task__14TObjBoss1FloorFv(Floor_8002C968 *self);
void *__dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);
void __dl__7TObjectFPv(void *);
extern char __vt__14TObjBoss1Floor[];
u8 *__dt__14TObjBoss1FloorFv(u8 *self, s16 flag);
}

extern "C" {

int forward_floor_2CB44__6TLobbyFPv(void* p);
void init_bosses__6TLobbyFv(void);
void render__14TObjBoss1FloorFv(void);
void update_boss1_objects__6TLobbyFv(void);
int TBoss8Dragon__sub_8002D5F8(void);
M2C_UNK draw_ginja_model(int);
int TObjBoss1Crater__sub_8002C7B4(void);
int TObjBoss1Crater__sub_8002C7B8(void);
s32 TObjBoss1Crater__sub_8002C7E4(void* p);
int TObjBoss1Floor__sub_8002CB40(void);
int TObjBoss1Floor__sub_8002CB78(void);
int TObjBoss1Rock__sub_8002E3CC(void);
int TObjBoss1Rock__sub_8002E3D0(void);
M2C_UNK render_projected_shadow_receiver(void *, void *);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK apply_single_screen_state__6TSceneFv();
s32 check_v2_mode__9TObjEneDDFv();
int create_instance__14TObjBoss1FloorFv(void*);
M2C_UNK draw_if_all_ready__10TObjPlayerFv();
M2C_UNK end_effect_render__13TParticleCtrlFv(int);
int load_dragon_ground_assets(void);
int free_char_select__6TLobbyFv(void);
int free_resources__12TBoss8DragonFv(void);
M2C_UNK func_80141618__Fv();
s32 get_state_flag__9TMainTaskFv();
s32 is_any_teammate_in_state__10TObjPlayerFv();
M2C_UNK set_depth_buffer_settings_id__FUl(int);
M2C_UNK set_global_param__8TObjFishFi(void *);

void update_boss1_objects__6TLobbyFv(void) { free_resources__12TBoss8DragonFv(); TObjBoss1Rock__sub_8002E3CC(); TObjBoss1Crater__sub_8002C7B4(); TObjBoss1Floor__sub_8002CB40(); free_char_select__6TLobbyFv(); }
int forward_floor_2CB44__6TLobbyFPv(void* p) { return create_instance__14TObjBoss1FloorFv(p); }
void init_bosses__6TLobbyFv(void) { load_dragon_ground_assets(); TObjBoss1Floor__sub_8002CB78(); TObjBoss1Crater__sub_8002C7B8(); TObjBoss1Rock__sub_8002E3D0(); TBoss8Dragon__sub_8002D5F8(); }

extern u8 *lbl_805D4B50;
extern s32 dragon_common_texture_list;
extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;

void render__14TObjBoss1FloorFv(void) {
    s32 temp_r3;
    u8 *temp_r31;

    if ((is_any_teammate_in_state__10TObjPlayerFv() == 0) && ((check_v2_mode__9TObjEneDDFv() != 0) || (get_state_flag__9TMainTaskFv() != 1))) {
        temp_r3 = some_id_805c6f74;
        lbl_805D5660 = temp_r3;
        some_id_805c6f74 = temp_r3 | 0x400;
        end_effect_render__13TParticleCtrlFv((int) (temp_r3));
        push_matrix();
        some_id_805c6f74 = 1;
        set_depth_buffer_settings_id__FUl((int) (3));
        draw_if_all_ready__10TObjPlayerFv();
        set_global_param__8TObjFishFi((void *) (dragon_common_texture_list));
        temp_r31 = (unsigned char *) (M2C_FIELD(M2C_FIELD(lbl_805D4B50, void **, 0x42C), void **, 0x58));
        render_projected_shadow_receiver((void *) (temp_r31 + 8), (void *) (temp_r31 + 0x14));
        draw_ginja_model((int) (M2C_FIELD(temp_r31, s32 *, 4)));
        apply_single_screen_state__6TSceneFv();
        func_80141618__Fv();
        pop_matrix();
        some_id_805c6f74 = lbl_805D5660;
    }
}

void run_task__14TObjBoss1FloorFv(Floor_8002C968 *self) {
    s32 i;
    Player_8002C968 *pl;
    if (check_v2_mode__9TObjEneDDFv() != 0) {
        for (i = 0; i < 4; i++) {
            pl = get_player_by_client_id(i);
            if (pl != NULL) {
                Vec_8002C968 pos = pl->pos;
                pos.y -= lbl_805D8170;
                if (self->objs[i] == NULL) {
                    self->objs[i] = create_particle_emitter(&pos, 0x144);
                } else {
                    copy_pos__11TNowLoadingFPvPv(self->objs[i], &pos);
                }
            } else if (self->objs[i] != NULL) {
                queue_destruction__7TObjectFv(self->objs[i]);
                self->objs[i] = NULL;
            }
        }
    }
}

u8 *__dt__14TObjBoss1FloorFv(u8 *self, s16 flag) {
    s32 i;
    if (self != NULL) {
        *(void **)(self + 0x18) = __vt__14TObjBoss1Floor;
        for (i = 0; i * 0x10 != 0; i++) {
            if (((Obj_8002CA38 *)self)->slot[i] != 0) {
                queue_destruction__7TObjectFv((void *)((Obj_8002CA38 *)self)->slot[i]);
                ((Obj_8002CA38 *)self)->slot[i] = 0;
            }
        }
        __dt__7TObjectFv(self, 0);
        if (flag > 0) {
            __dl__7TObjectFPv(self);
        }
    }
    return self;
}

Obj_8002CACC *TObjBoss1Floor__ct(Obj_8002CACC *self, void *parent) {
    s32 i;
    __ct__7TObjectFP7TObject(self, parent);
    self->vt = __vt__14TObjBoss1Floor;
    self->f0 = TObjBoss1Floor__name;
    self->f1c = lbl_805D8174;
    self->f20 = lbl_805D8174;
    self->f24 = lbl_805D8174;
    for (i = 0; i < 4; i++) {
        self->f28[i] = 0;
    }
    return self;
}

}
