#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8018AC68_8018A584 { char pad[0x18]; };
struct VObj_8018AC68_8018A584 : Base_8018AC68_8018A584 {
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
    virtual void m20(s32, f32);
};
struct VBase8018AD04_8018A584 { char pad[0x18]; };
struct VObj8018AD04_8018A584 : VBase8018AD04_8018A584 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

struct RecoveredGlobal_8018A9D8_TContainerAncient01__data_804B6DC0 { M2C_UNK value; u8 remaining[0x28]; };

struct Obj_8018AB44 { u8 pad0[0x38]; u8 pos[0x328]; s32 f360; };

struct Atk_8018A584 { s32 type; f32 power; s32 kind; f32 base; };

struct VBase_8018A584 { u8 pad[0x18]; };

struct Player_8018A584 : VBase_8018A584 {
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
    virtual void m21(void *, Atk_8018A584 *, s32, s32, s32);
    u8 pad1c[0x38 - 0x1C];
    f32 pos[3];
};

struct Obj_8018A584 { u8 pad[0x38]; f32 pos[3]; };

struct Obj_8018A688 {
    u8 pad[0x2B4];
    f32 x2b4;
    u8 pad2b8[0x340 - 0x2B8];
    f32 x340;
    f32 x344;
    u8 x348[0xC];
    u8 x354[0x370 - 0x354];
    u32 x370;
};
struct Player_8018A914 { u8 pad[0x38]; f32 pos[3]; };
struct Obj_8018A914 {
    u8 pad[0x38];
    f32 pos[3];
    u8 pad44[0xB8 - 0x44];
    s16 xb8;
    u8 padba[0x2B4 - 0xBA];
    f32 x2b4;
    u8 pad2b8[0x326 - 0x2B8];
    s16 state;
    u8 pad328[0x33C - 0x328];
    f32 x33c;
};
struct RecoveredGlobal_8018B5D0_TContainerAncient01__data_804B6DC0 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct Obj_8018B510 { u8 pad0[0x38]; u8 pos[0x7C]; s16 fB4[3]; u8 pad1[0x1FA]; f32 f2B4; u8 pad2[0x6E]; s16 state; u8 pad3[0x10]; f32 f338; };

struct Obj_8018B700 { u8 pad0[0x38]; u8 pos[0x324]; s32 f35C; };

struct Atk_8018B180 { s32 type; f32 power; s32 kind; f32 base; };

struct VBase_8018B180 { u8 pad[0x18]; };

struct Player_8018B180 : VBase_8018B180 {
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
    virtual void m21(void *, Atk_8018B180 *, s32, s32, s32);
    u8 pad1c[0x38 - 0x1C];
    f32 pos[3];
};

struct Obj_8018B180 { u8 pad[0x38]; f32 pos[3]; };

typedef s32 M2C_UNK;
struct Obj_8018B180;
struct Obj_8018B284 {
    u8 pad0[0x38];
    u8 pos[0x2B4 - 0x38];
    f32 f2B4;
    u8 pad2B8[0x33C - 0x2B8];
    f32 f33C;
    f32 f340;
    u8 f344[0xC];
    u8 f350[0x36C - 0x350];
    u32 f36C;
};

extern "C" {
void queue_destruction__7TObjectFv(void *);
s32 check_demo_mode__10TObjPlayerFv();
u32 TObjFish__sub_8001ED9C(int, int);
s32 get_bml_model(int, int);
M2C_UNK TContainerAncient01__sub_8018A688(void *);
void TContainerAncient01__sub_8018A914(void *);
M2C_UNK submit_cursor_candidate(void *, int, f32);
M2C_UNK run_task__7TObjectFv(void *);
extern s32 TContainerAncient01R__data_805D5B94;
extern const f32 TContainerAncient01__data_805DBD10;
extern const float TContainerAncient01__data_805DBD1C;
extern const f32 lbl_805DBD50;
extern const f32 lbl_805DBD54;
extern const f32 lbl_805DBD58;
void TContainerAncient01__sub_8018ADAC(u8 *arg0);
f32 xyz_distance_squared(void *, void *, void *);
extern const f32 TContainerAncient01__data_805DBD44;
s32 TContainerAncient01__sub_8018ACC8(s32 arg0, s32 arg1);
void advance_animation_playback(void *);
void trigger_spawn__19TContainerAncient01FPvPvPv(void *, void *, void *);
unsigned int __cvt_fp2unsigned(f32);
extern const float TContainerAncient01__data_805DBD1C;
extern const f32 TContainerAncient01__data_805DBD34;
void TContainerAncient01__sub_8018A890(u8 *arg0);
M2C_UNK TObjPlayer__sub_80154954(void *, void *);
s32 TLobby__sub_80156A80(void *, void *, int);
extern f32 TContainerAncient01__data_805DBD14;
f32 TContainerAncient01__sub_8018ABE0(u8 *arg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
extern RecoveredGlobal_8018A9D8_TContainerAncient01__data_804B6DC0 TContainerAncient01__data_804B6DC0;
extern const f32 TContainerAncient01__data_805DBD10;
extern const f32 TContainerAncient01__data_805DBD3C;
extern const f32 lbl_805DBD40;
extern const f32 TContainerAncient01__data_805DBD44;
extern const f32 lbl_805DBD48;
void TContainerAncient01__sub_8018A9D8(u8 *arg0);
void request_box_item_drop(void *, void *, int);
void clear_player_status_flag__10TObjPlayerFPviUi(void *, int, u32);
void trigger_spawn__19TContainerAncient01FPvPvPv(void *, void *, void *);
s32 TContainerAncient01__sub_8020335C();
void set_flag8__6TLobbyFPv(void *);
extern s32 lbl_8050DC70[];
void TContainerAncient01__sub_8018AB44(Obj_8018AB44 *arg0);
s32 obj_testFlags30(void *, s32);
s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFPv(void *);
f32 horizontal_distance_squared(void *, void *);

extern const f32 lbl_805DBD18;
void TContainerAncient01__sub_8018A584(Obj_8018A584 *self, f32 range);

u8 *get_player_by_client_id(int);
s32 get_global_state__14TOKeyMachine01Fv();
M2C_UNK play_sound_effect(int, void *, int, int);
extern const f32 TContainerAncient01__data_805DBD20;
extern const f32 lbl_805DBD24;
extern const f32 lbl_805DBD28;
extern const f32 lbl_805DBD2C;
extern const f32 lbl_805DBD30;
extern s32 lbl_805D586C;
extern const f32 lbl_805DBD38;
s32 TContainerAncient01__sub_8018BE90(void);
int get_table_entry__19TContainerAncient01Fi(int a0);
void TContainerAncient01R__sub_8018AF80(void);

void TContainerAncient01__sub_8018B158(void* p, void* a1, void* a2);
int spawn_particle_effect(void*, void*);
void TContainerAncient01__sub_8018B158(void* p, void* a1, void* a2);
void advance_animation_playback(void *);
void TContainerAncient01__sub_8018B158(void* p, void* a1, void* a2);
extern const float TContainerAncient01__data_805DBD1C;
extern const f32 TContainerAncient01__data_805DBD34;
void TContainerAncient01__sub_8018B48C(u8 *arg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
extern const f32 TContainerAncient01__data_805DBD10;
extern const f32 TContainerAncient01__data_805DBD3C;
extern const f32 lbl_805DBD40;
extern const f32 TContainerAncient01__data_805DBD44;
extern const f32 lbl_805DBD48;
void TContainerAncient01__sub_8018B5D0(u8 *arg0);
f32 horizontal_distance_squared(void *, void *);
void advance_animation_playback(void *);
u8 *get_player_by_client_id(int);
extern const float TContainerAncient01__data_805DBD1C;
extern const f32 lbl_805DBD38;
void TContainerAncient01__sub_8018B510(Obj_8018B510 *arg0);
void request_box_item_drop(void *, void *, int);
void clear_player_status_flag__10TObjPlayerFPviUi(void *, int, u32);
void TContainerAncient01__sub_8018B158(void* p, void* a1, void* a2);
s32 TContainerAncient01__sub_8020335C();
void set_flag8__6TLobbyFPv(void *);
extern s32 lbl_8050DC68[];
void TContainerAncient01__sub_8018B700(Obj_8018B700 *arg0);
s32 obj_testFlags30(void *, s32);
s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFPv(void *);
f32 horizontal_distance_squared(void *, void *);
u8 *get_player_by_client_id(int);
extern const f32 lbl_805DBD18;
void TContainerAncient01__sub_8018B180(Obj_8018B180 *self, f32 range);
void advance_animation_playback(void *);
void TContainerAncient01__sub_8018B158(void* p, void* a1, void* a2);
void TContainerAncient01__sub_8018B180(Obj_8018B180 *self, f32 range);
void reset_state__19TContainerAncient01FPv(void* a0);
s32 get_global_state__14TOKeyMachine01Fv();
M2C_UNK play_sound_effect(int, void *, int, int);
extern const f32 TContainerAncient01__data_805DBD20;
extern const f32 lbl_805DBD24;
extern const f32 lbl_805DBD28;
extern const f32 lbl_805DBD2C;
extern const f32 lbl_805DBD30;
extern const f32 TContainerAncient01__data_805DBD34;
void TContainerAncient01__sub_8018B284(Obj_8018B284 *self);

}

extern "C" {

int TContainerAncient01__sub_8018ACC0(void);
f32 check_item_type_range__19TContainerAncient01FPviPv(void *arg0, s32 arg1, s32 *arg2);
void draw__19TContainerAncient01FPv(u8 *arg0);
void reset_hp__19TContainerAncient01FPv(void* a0);
void set_target_value__19TContainerAncient01FPvPvi(void *arg0, s16 *arg1, s32 arg2);
M2C_UNK TBoss7Tentacle__sub_803D9BA0(void *);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK draw_ginja_object(s32);
M2C_UNK draw_ginja_model_with_motion(s32, s32, f32);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK set_global_param__8TObjFishFi(s32);

void *TContainerAncient01R__create(void *arg0);
void TContainerAncient01R__sub_8018AF74(void);
void *dt__20TContainerAncient01RFPvs(void *arg0, s16 arg1);
void *TContainerAncient01R__ct(void *, void *, void *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK destroy_motion_object__10TObjPlayerFPvs(void *, M2C_UNK);

    extern const float TContainerAncient01__data_805DBD1C;

void TContainerAncient01__sub_8018A584(Obj_8018A584 *self, f32 range) {
    u16 i;
    Player_8018A584 *pl;
    for (i = 0; i < 4; i++) {
        pl = (Player_8018A584 *)get_player_by_client_id(i);
        if (pl != NULL) {
            if (get_field_3e4__10TObjPlayerFPv(pl) == get_current_floor() && obj_testFlags30(pl, 1) == 0 &&
                horizontal_distance_squared(self->pos, pl->pos) < range) {
                Atk_8018A584 atk;
                atk.type = 0xF;
                atk.base = lbl_805DBD18;
                atk.kind = 0xF;
                *(s32 *)&atk.power = *(s32 *)&atk.base;
                pl->m21(self, &atk, 0, -1, -1);
            }
        }
    }
}

void reset_hp__19TContainerAncient01FPv(void* a0) { *(short*)((char*)a0 + 0x326) = 0; *(short*)((char*)a0 + 0xb8) = *(short*)((char*)a0 + 0x326); *(float*)((char*)a0 + 0x2b4) = TContainerAncient01__data_805DBD1C; }

M2C_UNK TContainerAncient01__sub_8018A688(void *arg0) {
    Obj_8018A688 *self = (Obj_8018A688 *)arg0;
    u32 period;
    f32 t;
    u32 rem;

    advance_animation_playback(self);
    if (TContainerAncient01__data_805DBD20 == self->x2b4) {
        switch (get_global_state__14TOKeyMachine01Fv()) {
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1A:
        case 0x1B:
            play_sound_effect(0x4BC1C, (u8 *)self + 0x38, 0, 0);
            break;
        case 0x22:
            play_sound_effect(0x4004BC1C, (u8 *)self + 0x38, 0, 0);
            break;
        case 0x23:
            play_sound_effect(0x4004BC1C, (u8 *)self + 0x38, 0, 0);
            break;
        default:
            play_sound_effect(0x4004BC16, (u8 *)self + 0x38, 0, 0);
            break;
        }
    }
    if (TContainerAncient01__data_805DBD20 == self->x2b4 || lbl_805DBD24 == self->x2b4 || lbl_805DBD28 == self->x2b4) {
        trigger_spawn__19TContainerAncient01FPvPvPv(self, self->x354, (void *)0x7D);
    }
    if (lbl_805DBD2C == self->x2b4) {
        trigger_spawn__19TContainerAncient01FPvPvPv(self, self->x348, (void *)0x7E);
    }
    period = __cvt_fp2unsigned(lbl_805DBD30 / self->x370);
    t = self->x2b4;
    rem = (u32)t % period;
    if (lbl_805DBD28 < t && t < TContainerAncient01__data_805DBD34 && rem == 0) {
        trigger_spawn__19TContainerAncient01FPvPvPv(self, self->x354, (void *)0x7E);
    }
    if (TContainerAncient01__data_805DBD34 < self->x2b4 && rem == 0) {
        trigger_spawn__19TContainerAncient01FPvPvPv(self, self->x348, (void *)0x7E);
    }
    TContainerAncient01__sub_8018A584((Obj_8018A584 *)self, self->x344);
    if (self->x340 <= self->x2b4) {
        reset_hp__19TContainerAncient01FPv(self);
    }
}

void TContainerAncient01__sub_8018A890(u8 *arg0) {
  advance_animation_playback(arg0);
  if ((__cvt_fp2unsigned(*((f32 *) (((s8 *) arg0) + 0x2B4))) % 15) == 0)
  {
    trigger_spawn__19TContainerAncient01FPvPvPv(arg0, arg0 + 0x348, (void *) 0x7D);
  }
  if (TContainerAncient01__data_805DBD34 <= (*((f32 *) (((s8 *) arg0) + 0x2B4))))
  {
    *((s16 *) (((s8 *) arg0) + 0x326)) = 2;
    *((s16 *) (((s8 *) arg0) + 0xB8)) = (s16) (*((s16 *) (((s8 *) arg0) + 0x326)));
    *((f32 *) (((s8 *) arg0) + 0x2B4)) = (f32) (*(const f32 *)&TContainerAncient01__data_805DBD1C);
  }
}

void TContainerAncient01__sub_8018A914(void *arg0) {
    Obj_8018A914 *self = (Obj_8018A914 *)arg0;
    s32 hit;
    u16 i;
    Player_8018A914 *pl;
    f32 range;

    advance_animation_playback(self);
    hit = 0;
    if (self->x33c <= self->x2b4) {
        hit = 1;
    } else {
        range = lbl_805DBD38;
        for (i = 0; i < lbl_805D586C; i++) {
            pl = ((Player_8018A914 *(*)(s32))get_player_by_client_id)(i);
            if (pl != NULL && horizontal_distance_squared(self->pos, pl->pos) < range) {
                hit = 1;
            }
        }
    }
    if (hit != 0) {
        self->state = 1;
        self->xb8 = self->state;
        self->x2b4 = TContainerAncient01__data_805DBD1C;
    }
}

#pragma push
#pragma fp_contract on
void TContainerAncient01__sub_8018A9D8(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x33C) = (f32) (TContainerAncient01__data_805DBD3C + (M2C_FIELD(arg0, f32 *, 0x68) - (*(const f32 *)&TContainerAncient01__data_805DBD10)));
    M2C_FIELD(arg0, f32 *, 0x340) = (f32) (lbl_805DBD40 + (M2C_FIELD(arg0, f32 *, 0x6C) - (*(const f32 *)&TContainerAncient01__data_805DBD10)));
    M2C_FIELD(arg0, f32 *, 0x344) = (f32) (TContainerAncient01__data_805DBD44 + (M2C_FIELD(arg0, f32 *, 0x70) - (*(const f32 *)&TContainerAncient01__data_805DBD10)));
    M2C_FIELD(arg0, s32 *, 0x370) = (s32) (M2C_FIELD(arg0, s32 *, 0x8C) + 4);
    VecCopy__FP3VecPC3Vec(arg0 + 0x348, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0x34C) = (f32) (M2C_FIELD(arg0, f32 *, 0x34C) + M2C_FIELD(&TContainerAncient01__data_804B6DC0.value, f32 *, 4));
    VecCopy__FP3VecPC3Vec(arg0 + 0x354, arg0 + 0x348);
    M2C_FIELD(arg0, f32 *, 0x358) = (f32) ((lbl_805DBD48 * M2C_FIELD(&TContainerAncient01__data_804B6DC0.value, f32 *, 4)) + M2C_FIELD(arg0, f32 *, 0x358));
    M2C_FIELD(arg0, s32 *, 0x360) = 0;
    M2C_FIELD(arg0, f32 *, 0x364) = (f32) (*(const f32 *)&TContainerAncient01__data_805DBD10);
    M2C_FIELD(arg0, f32 *, 0x368) = (f32) (*(const f32 *)&TContainerAncient01__data_805DBD10);
    M2C_FIELD(arg0, f32 *, 0x36C) = (f32) (*(const f32 *)&TContainerAncient01__data_805DBD10);
    M2C_FIELD(arg0, s16 *, 0x32C) = (s16) M2C_FIELD(arg0, s32 *, 0x64);
    if ((s16) M2C_FIELD(arg0, s16 *, 0x32C) < 1) {
        M2C_FIELD(arg0, s16 *, 0x32C) = 1;
    }
    M2C_FIELD(arg0, s16 *, 0x338) = 0;
}
#pragma pop

void set_target_value__19TContainerAncient01FPvPvi(void *arg0, s16 *arg1, s32 arg2) {
    s16 temp_r4;
    M2C_FIELD(arg0, s16 *, 0x338) = (s16) *arg1;
    if (arg2 != 0) {
        temp_r4 = M2C_FIELD(arg0, s16 *, 0x338);
        if ((M2C_FIELD(arg0, s16 *, 0x32C) - temp_r4) <= 0) {
            reset_hp__19TContainerAncient01FPv((void*)(arg0));
            TContainerAncient01__sub_8018AB44((Obj_8018AB44 *)(arg0));
            M2C_FIELD(arg0, s32 *, 0x360) = 1;
        }
    } else if ((M2C_FIELD(arg0, s16 *, 0x32C) - M2C_FIELD(arg0, s16 *, 0x338)) <= 0) {
        M2C_FIELD(arg0, s32 *, 0x360) = 1;
    }
}

extern const f32 TContainerAncient01__data_805DBD10;
extern f32 TContainerAncient01__data_805DBD14;

void TContainerAncient01__sub_8018AB44(Obj_8018AB44 *arg0) {
    if (arg0->f360 == 0) {
        arg0->f360 = 1;
        clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 1);
        trigger_spawn__19TContainerAncient01FPvPvPv((void *)(arg0), (void *)(arg0->pos), (void *)(lbl_8050DC70[0]));
        trigger_spawn__19TContainerAncient01FPvPvPv((void *)(arg0), (void *)(arg0->pos), (void *)(lbl_8050DC70[1]));
        if (TContainerAncient01__sub_8020335C() == 0) {
            request_box_item_drop(arg0, arg0->pos, 1);
        }
        set_flag8__6TLobbyFPv(arg0);
    }
}

f32 TContainerAncient01__sub_8018ABE0(u8 *arg0) {
    s16 sp8;
    if ((u16) M2C_FIELD(arg0, u16 *, 0x1C) >= 0x1000U) {
        M2C_FIELD(arg0, s16 *, 0x338) = (s16) (M2C_FIELD(arg0, s16 *, 0x338) + 1);
        if (((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) && (TLobby__sub_80156A80((void *) (arg0), (void *) (&sp8), (int) (1)) != 0)) {
            sp8 = M2C_FIELD(arg0, s16 *, 0x338);
            TLobby__sub_80156A80((void *) (arg0), (void *) (&sp8), (int) (0));
            TObjPlayer__sub_80154954((void *) (arg0), (void *) (&sp8));
        }
    }
    return (*(const f32 *)&TContainerAncient01__data_805DBD14);
}

f32 check_item_type_range__19TContainerAncient01FPviPv(void *arg0, s32 arg1, s32 *arg2) {
    s32 temp_r4;
    struct VObj_8018AC68_8018A584 *o = (struct VObj_8018AC68_8018A584 *)arg0;

    temp_r4 = *arg2;
    if ((temp_r4 == 0) || ((u32) (temp_r4 - 1) <= 3U) || (temp_r4 == 0x13)) {
        o->m20(0, TContainerAncient01__data_805DBD10);
    }
    return TContainerAncient01__data_805DBD14;
}

int TContainerAncient01__sub_8018ACC0(void) { return 1; }

extern const f32 TContainerAncient01__data_805DBD3C;
extern const f32 lbl_805DBD4C;

s32 TContainerAncient01__sub_8018ACC8(s32 arg0, s32 arg1) {
    return xyz_distance_squared((void *) (arg1 + 0x38), (void *) (arg0 + 0x38), (void *) (arg0)) < TContainerAncient01__data_805DBD44;
}

void draw__19TContainerAncient01FPv(u8 *arg0) {
    if (((VObj8018AD04_8018A584 *) arg0)->m8(TContainerAncient01__data_805DBD3C, lbl_805DBD4C) != 0) {
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        if ((s32) M2C_FIELD(arg0, s32 *, 0x360) != 0) {
            TBoss7Tentacle__sub_803D9BA0(arg0 + 0x364);
        }
        if (check_demo_mode__10TObjPlayerFv() == 1) {
            draw_ginja_object(M2C_FIELD(arg0, s32 *, 0x34));
        } else {
            draw_ginja_model_with_motion(M2C_FIELD(arg0, s32 *, 0x34), M2C_FIELD(arg0, s32 *, 0xF8), M2C_FIELD(arg0, f32 *, 0xC0));
        }
        pop_matrix();
    }
}
void TContainerAncient01__sub_8018ADAC(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    s16 temp_r0;
    if (check_demo_mode__10TObjPlayerFv() == 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x360) == 0) {
            temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
            switch (temp_r0) {
            case 0:
                ((M2C_UNK (*)(void *))TContainerAncient01__sub_8018A914)((void *) (arg0));
                break;
            case 1:
                TContainerAncient01__sub_8018A890((u8 *)((void *) (arg0)));
                break;
            case 2:
                TContainerAncient01__sub_8018A688((void *) (arg0));
                break;
            default:
                M2C_FIELD(arg0, s16 *, 0x326) = 0;
                M2C_FIELD(arg0, s16 *, 0xB8) = (s16) M2C_FIELD(arg0, s16 *, 0x326);
                M2C_FIELD(arg0, f32 *, 0x2B4) = (f32) (*(const f32 *)&TContainerAncient01__data_805DBD1C);
                ((M2C_UNK (*)(void *))TContainerAncient01__sub_8018A914)((void *) (arg0));
                break;
            }
            temp_f1 = M2C_FIELD(arg0, f32 *, 0x2B4);
            M2C_FIELD(arg0, f32 *, 0x2B4) = (f32) (temp_f1 + (*(const f32 *)&TContainerAncient01__data_805DBD10));
            submit_cursor_candidate((void *) (arg0), (int) (-1), (f32) (temp_f1));
        } else {
            temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x368);
            if (temp_f1_2 <= lbl_805DBD50) {
                M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) - lbl_805DBD54);
                if (M2C_FIELD(arg0, f32 *, 0x3C) <= (lbl_805DBD58 * M2C_FIELD(arg0, f32 *, 0x368))) {
                    queue_destruction__7TObjectFv(arg0);
                }
            } else {
                M2C_FIELD(arg0, f32 *, 0x368) = (f32) (temp_f1_2 - lbl_805DBD54);
            }
        }
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0xF8) == TObjFish__sub_8001ED9C((int) (TContainerAncient01R__data_805D5B94), (int) (0))) {
        M2C_FIELD(arg0, s32 *, 0x34) = get_bml_model((int) (TContainerAncient01R__data_805D5B94), (int) (0));
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0xF8) == TObjFish__sub_8001ED9C((int) (TContainerAncient01R__data_805D5B94), (int) (1))) {
        M2C_FIELD(arg0, s32 *, 0x34) = get_bml_model((int) (TContainerAncient01R__data_805D5B94), (int) (1));
    }
    run_task__7TObjectFv((void *) (arg0));
}

extern void *tl_05;

void *TContainerAncient01R__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x374);
    if (o != NULL) {
        o = TContainerAncient01R__ct(o, tl_05, arg0);
    }
    return o;
}

void TContainerAncient01R__sub_8018AF74(void) { TContainerAncient01R__data_805D5B94 = 0; }

extern M2C_UNK lbl_804B6E1C[];

void TContainerAncient01R__sub_8018AF80(void) {
    TContainerAncient01R__data_805D5B94 = TContainerAncient01__sub_8018BE90();
    lbl_8050DC70[0] = get_table_entry__19TContainerAncient01Fi(0);
    lbl_8050DC70[1] = get_table_entry__19TContainerAncient01Fi(1);
}

void *dt__20TContainerAncient01RFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B6E1C;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_motion_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TContainerAncient01__vt4(void *arg0, s16 *arg1, s32 arg2);
void reset_state__19TContainerAncient01FPv(void* a0);

    extern const float TContainerAncient01__data_805DBD1C;

void TContainerAncient01__sub_8018B158(void* p, void* a1, void* a2) { spawn_particle_effect(a1, a2); }

void TContainerAncient01__sub_8018B180(Obj_8018B180 *self, f32 range) {
    u16 i;
    Player_8018B180 *pl;
    for (i = 0; i < 4; i++) {
        pl = (Player_8018B180 *)get_player_by_client_id(i);
        if (pl != NULL) {
            if (get_field_3e4__10TObjPlayerFPv(pl) == get_current_floor() && obj_testFlags30(pl, 1) == 0 &&
                horizontal_distance_squared(self->pos, pl->pos) < range) {
                Atk_8018B180 atk;
                atk.type = 0xF;
                atk.base = lbl_805DBD18;
                atk.kind = 0xF;
                *(s32 *)&atk.power = *(s32 *)&atk.base;
                pl->m21(self, &atk, 0, -1, -1);
            }
        }
    }
}

void reset_state__19TContainerAncient01FPv(void* a0) { *(short*)((char*)a0 + 0x326) = 0; *(short*)((char*)a0 + 0xb8) = *(short*)((char*)a0 + 0x326); *(float*)((char*)a0 + 0x2b4) = TContainerAncient01__data_805DBD1C; }

void TContainerAncient01__sub_8018B284(Obj_8018B284 *self) {
    u32 period;
    u32 phase;
    f32 t;
    advance_animation_playback(self);
    if (TContainerAncient01__data_805DBD20 == self->f2B4) {
        switch (get_global_state__14TOKeyMachine01Fv()) {
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1A:
        case 0x1B:
            play_sound_effect(0x4BC1C, self->pos, 0, 0);
            break;
        case 0x22:
            play_sound_effect(0x4004BC1C, self->pos, 0, 0);
            break;
        case 0x23:
            play_sound_effect(0x4004BC1C, self->pos, 0, 0);
            break;
        default:
            play_sound_effect(0x4004BC16, self->pos, 0, 0);
            break;
        }
    }
    if (TContainerAncient01__data_805DBD20 == self->f2B4 || lbl_805DBD24 == self->f2B4 || lbl_805DBD28 == self->f2B4) {
        TContainerAncient01__sub_8018B158(self, self->f350, (void *)0x7D);
    }
    if (lbl_805DBD2C == self->f2B4) {
        TContainerAncient01__sub_8018B158(self, self->f344, (void *)0x7E);
    }
    period = (u32)(lbl_805DBD30 / (f32)self->f36C);
    phase = (u32)(t = self->f2B4) % period;
    if (lbl_805DBD28 < t && t < TContainerAncient01__data_805DBD34 && phase == 0) {
        TContainerAncient01__sub_8018B158(self, self->f350, (void *)0x7E);
    }
    if (TContainerAncient01__data_805DBD34 < self->f2B4 && phase == 0) {
        TContainerAncient01__sub_8018B158(self, self->f344, (void *)0x7E);
    }
    TContainerAncient01__sub_8018B180((Obj_8018B180 *)self, self->f340);
    if (self->f33C <= self->f2B4) {
        reset_state__19TContainerAncient01FPv(self);
    }
}

void TContainerAncient01__sub_8018B48C(u8 *arg0) {
  advance_animation_playback(arg0);
  if (((__cvt_fp2unsigned(*((f32 *) (((s8 *) arg0) + 0x2B4))) & 0xFFFFFFFF) % 15) == 0)
  {
    TContainerAncient01__sub_8018B158((void*)(arg0), (void*)(arg0 + 0x344), (void*)((void *) 0x7D));
  }
  if (TContainerAncient01__data_805DBD34 <= (*((f32 *) (((s8 *) arg0) + 0x2B4))))
  {
    *((s16 *) (((s8 *) arg0) + 0x326)) = 2;
    *((s16 *) (((s8 *) arg0) + 0xB8)) = (s16) (*((s16 *) (((s8 *) arg0) + 0x326)));
    *((f32 *) (((s8 *) arg0) + 0x2B4)) = (f32) (*(const f32 *)&TContainerAncient01__data_805DBD1C);
  }
}

#pragma push
#pragma fp_contract on
typedef char RecoveredGlobal_8018B5D0_TContainerAncient01__data_804B6DC0_size[sizeof(RecoveredGlobal_8018B5D0_TContainerAncient01__data_804B6DC0) == 0x2C ? 1 : -1];

void TContainerAncient01__sub_8018B510(Obj_8018B510 *arg0) {
    s32 flag;
    u16 i;
    u8 *p;
    f32 c;
    advance_animation_playback(arg0);
    flag = 0;
    if (arg0->f338 <= arg0->f2B4) {
        flag = 1;
    } else {
        c = lbl_805DBD38;
        for (i = 0; i < 4; i++) {
            p = get_player_by_client_id(i);
            if (p != 0 && horizontal_distance_squared(arg0->pos, p + 0x38) < c) {
                flag = 1;
            }
        }
    }
    if (flag != 0) {
        arg0->state = 1;
        arg0->fB4[2] = arg0->state;
        arg0->f2B4 = (*(const f32 *)&TContainerAncient01__data_805DBD1C);
    }
}

void TContainerAncient01__sub_8018B5D0(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x338) = (f32) (TContainerAncient01__data_805DBD3C + (M2C_FIELD(arg0, f32 *, 0x68) - TContainerAncient01__data_805DBD10));
    M2C_FIELD(arg0, f32 *, 0x33C) = (f32) (lbl_805DBD40 + (M2C_FIELD(arg0, f32 *, 0x6C) - TContainerAncient01__data_805DBD10));
    M2C_FIELD(arg0, f32 *, 0x340) = (f32) (TContainerAncient01__data_805DBD44 + (M2C_FIELD(arg0, f32 *, 0x70) - TContainerAncient01__data_805DBD10));
    M2C_FIELD(arg0, s32 *, 0x36C) = (s32) (M2C_FIELD(arg0, s32 *, 0x8C) + 4);
    VecCopy__FP3VecPC3Vec(arg0 + 0x344, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0x348) = (f32) (M2C_FIELD(arg0, f32 *, 0x348) + M2C_FIELD(&TContainerAncient01__data_804B6DC0.value, f32 *, 4));
    VecCopy__FP3VecPC3Vec(arg0 + 0x350, arg0 + 0x344);
    M2C_FIELD(arg0, f32 *, 0x354) = (f32) ((lbl_805DBD48 * M2C_FIELD(&TContainerAncient01__data_804B6DC0.value, f32 *, 4)) + M2C_FIELD(arg0, f32 *, 0x354));
    M2C_FIELD(arg0, s32 *, 0x35C) = 0;
    M2C_FIELD(arg0, f32 *, 0x360) = (f32) TContainerAncient01__data_805DBD10;
    M2C_FIELD(arg0, f32 *, 0x364) = (f32) TContainerAncient01__data_805DBD10;
    M2C_FIELD(arg0, f32 *, 0x368) = (f32) TContainerAncient01__data_805DBD10;
}
#pragma pop

void TContainerAncient01__vt4(void *arg0, s16 *arg1, s32 arg2) {
    if (arg2 != 0) {
        if ((s16) *arg1 == 1) {
            TContainerAncient01__sub_8018B700((Obj_8018B700 *)(arg0));
            M2C_FIELD(arg0, s32 *, 0x35C) = 1;
        }
    } else if ((s16) *arg1 == 1) {
        M2C_FIELD(arg0, s32 *, 0x35C) = 1;
    }
}
void TContainerAncient01__sub_8018B700(Obj_8018B700 *arg0) {
    if (arg0->f35C == 0) {
        arg0->f35C = 1;
        clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 1);
        TContainerAncient01__sub_8018B158((void*)(arg0), (void*)(arg0->pos), (void*)(lbl_8050DC68[0]));
        TContainerAncient01__sub_8018B158((void*)(arg0), (void*)(arg0->pos), (void*)(lbl_8050DC68[1]));
        if (TContainerAncient01__sub_8020335C() == 0) {
            request_box_item_drop(arg0, arg0->pos, 1);
        }
        set_flag8__6TLobbyFPv(arg0);
    }
}

}
