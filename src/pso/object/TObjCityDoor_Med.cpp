#include "types.h"
extern "C" const f32 lbl_805DBBE8[1];
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8018208C_80181FF4 { char pad[0x18]; };
struct VObj_8018208C_80181FF4 : Base_8018208C_80181FF4 {
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
};

extern "C" {

struct Base_80181ff4 { char pad[0x18]; };
struct VObj_80181ff4 : Base_80181ff4 {
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
    virtual s32 m20();
};

void TObjCityDoor_Med__sub_8018208C(void *arg0);
void render_lobby_door__10TObjPlayerFPv(u8 *arg0);
s32 get_city_common_motion(M2C_UNK);
M2C_UNK get_city_common_model(M2C_UNK);
M2C_UNK post_translate_matrix(void *);
M2C_UNK draw_ginja_model_with_motion(M2C_UNK, s32, f32);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK translate_matrix(M2C_UNK, f32, f32, f32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK set_global_param__8TObjFishFi(s32);

extern s32 lbl_805D5B2C;
extern const f32 lbl_805DBBF4;

void render_lobby_door__10TObjPlayerFPv(u8 *arg0) {
    if (((VObj_80181ff4 *)arg0)->m20() != 0) {
        set_global_param__8TObjFishFi(lbl_805D5B2C);
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        translate_matrix(0, lbl_805DBBE8[0], lbl_805DBBE8[0], lbl_805DBBF4);
        draw_ginja_model_with_motion(get_city_common_model(0x14), get_city_common_motion(0xB), M2C_FIELD(arg0, f32 *, 0xB4));
        pop_matrix();
    }
}

void TObjCityDoor_Med__sub_8018208C(void *arg0) {
    struct VObj_8018208C_80181FF4 *o = (struct VObj_8018208C_80181FF4 *)arg0;
    o->m19();
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TObjCityDoor_Med__create(void *arg0);
void *dt__16TObjCityDoor_MedFPvs(void *arg0, s16 arg1);
s32 is_rader_map_active(void);
s32 TLobby__sub_80182E60();
s32 get_game_play_mode();
void *TObjCityDoor_Med__ct(void *, void *, void *);
u8 *init_city_door(u8 *, M2C_UNK, s32, u8 *);
s32 get_city_common_motion(M2C_UNK);
void *TObjPlayer__sub_80182D24(void *, s16);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
s32 is_not_split_screen__13TRaderMapCoreFv();

extern void *tl_05;

void *TObjCityDoor_Med__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xBC);
    if (o != NULL) {
        o = TObjCityDoor_Med__ct(o, tl_05, arg0);
    }
    return o;
}

extern M2C_UNK lbl_804B5A38[];

void *dt__16TObjCityDoor_MedFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B5A38;
        TObjPlayer__sub_80182D24(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern u8 lbl_80443FA0[]; extern s32 lbl_805D325C;
void *TObjCityDoor_Med__ct(void *o, void *parent, void *set) {
 init_city_door((u8*)o,(s32)parent,(s32)set,lbl_80443FA0);
 *(M2C_UNK **)((u8 *)o + 0x18)=lbl_804B5A38;*(s32 *)((u8 *)o + 0)=lbl_805D325C;
 *(f32 *)((u8 *)o + 0xB0)=(f32)(*(u32 *)((u8 *)get_city_common_motion(11) + 4)-1);
 return o;
}

s32 is_rader_map_active(void) {
    s32 temp_r3;

    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        if (get_game_play_mode() == 1) {
            return 0;
        }
        goto block_6;
    }
    temp_r3 = TLobby__sub_80182E60();
    if ((temp_r3 != -1) && (temp_r3 == 1)) {
        return 0;
    }
block_6:
    return 1;
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18 { char pad[0x18]; };
struct VObj_18 : VBase_18 {
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
    virtual M2C_UNK m19();
};
#define F(o,t,p) (*(t*)((u8*)(o)+(p)))
struct CityDoorProbeBase {char pad[0x18];};

struct CityDoorProbe : CityDoorProbeBase {
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
virtual s32 near(f32);
virtual void closed();virtual void closing();virtual void opening();virtual void open();
virtual void closeSound();virtual void openSound();virtual void tick();virtual s32 visible();
};

extern "C" {

void fn_801822D8(u8 *arg0);
extern s32 lbl_805D5B2C;
M2C_UNK draw_ginja_model_with_motion(s32, s32, f32);
void render_door__17TObjCityDoor_WarpFPv(void* o);
}

extern "C" {

s32 get_city_common_motion(M2C_UNK);M2C_UNK get_city_common_model(M2C_UNK);
M2C_UNK set_global_param__8TObjFishFi(s32);M2C_UNK push_matrix();M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);M2C_UNK rotate_matrix_y(M2C_UNK, s32);
void render_door__17TObjCityDoor_WarpFPv(void* o) {
 if(((CityDoorProbe*)o)->visible()!=0) {
  set_global_param__8TObjFishFi(lbl_805D5B2C);push_matrix();
  post_translate_matrix((u8*)o+0x38);rotate_matrix_y(0,F(o,s32,0x60));
  draw_ginja_model_with_motion(get_city_common_model(9),get_city_common_motion(8),F(o,f32,0xB4));
  draw_ginja_model_with_motion(get_city_common_model(10),get_city_common_motion(9),F(o,f32,0xB4));
  pop_matrix();
 }
}

void fn_801822D8(u8 *arg0) {
    u8 *temp_r3;
    if (((s32 (*)(void *))is_rader_map_active)((void *) (arg0)) == 0) {
        M2C_FIELD(arg0, s32 *, 0xAC) = 0;
    }
    ((VObj_18 *)(arg0))->m19();
    if (((s32 (*)(void *))is_rader_map_active)((void *) (arg0)) == 0) {
        temp_r3 = M2C_FIELD(arg0, u8 **, 0xA4);
        M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) | 1);
    }
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void city_door_tick_opening(void *);
M2C_UNK update_technique_slot__10TTecRaFoieFi(s32, s32, M2C_UNK);
M2C_UNK play_sound_effect(M2C_UNK, s32, M2C_UNK, M2C_UNK);
void update_opening__17TObjCityDoor_WarpFPv(u8 *arg0);
extern const f32 lbl_805DBBF8;
extern const f32 lbl_805DBBFC;
}

extern "C" {

void play_close_sound__17TObjCityDoor_WarpFi(s32 arg0);
void spawn_boss3_volopt_effect(s32 arg0);
M2C_UNK play_sound_effect(M2C_UNK, s32, M2C_UNK, M2C_UNK);
M2C_UNK update_technique_slot__10TTecRaFoieFi(s32, s32, M2C_UNK);

void play_close_sound__17TObjCityDoor_WarpFi(s32 arg0) {
    update_technique_slot__10TTecRaFoieFi((s32)(play_sound_effect(0x42A05, arg0 + 0x38, 0, 0)), (s32)(-0x500), (M2C_UNK)(0));
}

void spawn_boss3_volopt_effect(s32 arg0) {
    if (is_rader_map_active() != 0) {
        s32 r = play_sound_effect(0x42A04, arg0 + 0x38, 0, 0);
        update_technique_slot__10TTecRaFoieFi((s32)(r), (s32)(-0x800), (M2C_UNK)(0));
    }
}
#pragma push
#pragma fp_contract on
void update_opening__17TObjCityDoor_WarpFPv(u8 *arg0) {
    f32 temp_f1;
    temp_f1 = M2C_FIELD(arg0, f32 *, 0xB4);
    if ((temp_f1 >= lbl_805DBBF8) && (temp_f1 <= lbl_805DBBFC)) {
        update_technique_slot__10TTecRaFoieFi((s32)(play_sound_effect((M2C_UNK)((int) (0x42A04)), (s32)((void *) (arg0 + 0x38)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)))), (s32)((int) (-0x500)), (M2C_UNK)((int) (0)));
    }
    city_door_tick_opening((void *) (arg0));
}
#pragma pop

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
u8 *init_city_door(u8 *, M2C_UNK, s32, u8 *);
u8 *TObjCityDoor_Shop__ct(u8 *arg0, s32 arg1, s32 arg2);
s32 get_city_common_motion(M2C_UNK);
}
#define FOLD_F(o,t,p) (*(t*)((u8*)(o)+(p)))
struct Base_80182600_8018245C { char pad[0x18]; };
struct VObj_80182600_8018245C : Base_80182600_8018245C {
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
};

extern "C" {

struct Base_8018257c_8018245C { u8 pad[0x18]; };
struct VObj_8018257c_8018245C : Base_8018257c_8018245C {
    virtual void m0() = 0;
    virtual void m1() = 0;
    virtual void m2() = 0;
    virtual void m3() = 0;
    virtual void m4() = 0;
    virtual void m5() = 0;
    virtual void m6() = 0;
    virtual void m7() = 0;
    virtual void m8() = 0;
    virtual void m9() = 0;
    virtual void m10() = 0;
    virtual void m11() = 0;
    virtual void m12() = 0;
    virtual void m13() = 0;
    virtual void m14() = 0;
    virtual void m15() = 0;
    virtual void m16() = 0;
    virtual void m17() = 0;
    virtual void m18() = 0;
    virtual void m19() = 0;
    virtual s32 m20() = 0;
};

void TObjCityDoor_Guild__sub_80182600(void *arg0);
void *TObjCityDoor_Warp__create(void *arg0);
void *dt__17TObjCityDoor_WarpFPvs(void *arg0, s16 arg1);
void teardown_door__17TObjCityDoor_WarpFPv(u8 *arg0);
s32 get_city_common_motion(M2C_UNK);
M2C_UNK get_city_common_model(M2C_UNK);
M2C_UNK post_translate_matrix(void *);
void *TObjCityDoor_Warp__ct(void *, void *, void *);
M2C_UNK draw_ginja_model_with_motion(s32, s32, f32);
void *TObjPlayer__sub_80182D24(void *, s16);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK set_global_param__8TObjFishFi(s32);

extern void *tl_05;

void *TObjCityDoor_Warp__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xBC);
    if (o != NULL) {
        o = TObjCityDoor_Warp__ct(o, tl_05, arg0);
    }
    return o;
}

extern M2C_UNK lbl_804B5A94[];

void *dt__17TObjCityDoor_WarpFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B5A94;
        TObjPlayer__sub_80182D24(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern u8 lbl_80443F84[]; extern s32 lbl_805D3258;
void *TObjCityDoor_Warp__ct(void *o, void *parent, void *set) {
 init_city_door((u8*)o,(s32)parent,(s32)set,lbl_80443F84);
 FOLD_F(o,s32*,0x18)=lbl_804B5A94;FOLD_F(o,s32,0)=lbl_805D3258;
 FOLD_F(o,f32,0xB0)=(f32)(FOLD_F(get_city_common_motion(8),u32,4)-1);
 return o;
}

extern s32 lbl_805D5B2C;

void teardown_door__17TObjCityDoor_WarpFPv(u8 *arg0) {

    if (((VObj_8018257c_8018245C *)arg0)->m20() != 0) {
        set_global_param__8TObjFishFi(lbl_805D5B2C);
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        draw_ginja_model_with_motion(get_city_common_model(0x15), get_city_common_motion(0xC), M2C_FIELD(arg0, f32 *, 0xB4));
        pop_matrix();
    }
}

void TObjCityDoor_Guild__sub_80182600(void *arg0) {
    struct VObj_80182600_8018245C *o = (struct VObj_80182600_8018245C *)arg0;
    o->m19();
}

}

struct Base_8018274C_8018262C { char pad[0x18]; };
struct VObj_8018274C_8018262C : Base_8018274C_8018262C {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual s32 m20();
};
struct Base_801827CC_8018262C { char pad[0x18]; };
struct VObj_801827CC_8018262C : Base_801827CC_8018262C {
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
};

extern "C" {

void *TObjCityDoor_Guild__create(void *arg0);
void TObjCityDoor_Shop__sub_801827CC(void *arg0);
void *dt__18TObjCityDoor_GuildFPvs(void *arg0, s16 arg1);
void render_door__18TObjCityDoor_GuildFPv(u8 *arg0);
M2C_UNK post_translate_matrix(void *);
void *TObjCityDoor_Guild__ct(void *, void *, void *);
M2C_UNK draw_ginja_model_with_motion(s32, s32, f32);
void *TObjPlayer__sub_80182D24(void *, s16);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK set_global_param__8TObjFishFi(s32);

extern void *tl_05;

void *TObjCityDoor_Guild__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xBC);
    if (o != NULL) {
        o = TObjCityDoor_Guild__ct(o, tl_05, arg0);
    }
    return o;
}

extern M2C_UNK lbl_804B5AF0[];

void *dt__18TObjCityDoor_GuildFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B5AF0;
        TObjPlayer__sub_80182D24(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern u8 lbl_80443F68[]; extern s32 lbl_805D3254;
void *TObjCityDoor_Guild__ct(void *o, void *parent, void *set) {
 init_city_door((u8*)o,(s32)parent,(s32)set,lbl_80443F68);
 FOLD_F(o,s32*,0x18)=lbl_804B5AF0;FOLD_F(o,s32,0)=lbl_805D3254;
 FOLD_F(o,f32,0xB0)=(f32)(FOLD_F(get_city_common_motion(12),u32,4)-1);
 return o;
}

extern u8 *lbl_805D5B28;
extern s32 lbl_805D5B2C;

void render_door__18TObjCityDoor_GuildFPv(u8 *arg0) {
    if (((VObj_8018274C_8018262C *)arg0)->m20() != 0) {
        set_global_param__8TObjFishFi(lbl_805D5B2C);
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        draw_ginja_model_with_motion(M2C_FIELD(M2C_FIELD(lbl_805D5B28, void **, 0x42C), s32 *, 0xB8), M2C_FIELD(M2C_FIELD(lbl_805D5B28, void **, 0x430), s32 *, 0x54), M2C_FIELD(arg0, f32 *, 0xB4));
        pop_matrix();
    }
}

void TObjCityDoor_Shop__sub_801827CC(void *arg0) {
    struct VObj_801827CC_8018262C *o = (struct VObj_801827CC_8018262C *)arg0;
    o->m19();
}

}

struct RecoveredGlobal_8018289C_lbl_80443F4C
{
  M2C_UNK value;
  u8 remaining[0x18];
};

struct RecoveredGlobal_8018289C_lbl_804B5B4C
{
  M2C_UNK value;
  u8 remaining[0x58];
};

extern "C" {
u8 *init_city_door(u8 *, M2C_UNK, s32, u8 *);
extern RecoveredGlobal_8018289C_lbl_80443F4C lbl_80443F4C;
extern RecoveredGlobal_8018289C_lbl_804B5B4C lbl_804B5B4C;
extern s32 lbl_805D3250;
extern u8 *lbl_805D5B28;
u8 *TObjCityDoor_Shop__ct(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void *TObjCityDoor_Shop__create(void *arg0);
void *dt__17TObjCityDoor_ShopFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void *TObjPlayer__sub_80182D24(void *, s16);

extern void *tl_05;

void *TObjCityDoor_Shop__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xBC);
    if (o != NULL) {
        o = ((void *(*)(void *, void *, void *))TObjCityDoor_Shop__ct)(o, tl_05, arg0);
    }
    return o;
}

void *dt__17TObjCityDoor_ShopFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = (M2C_UNK *)&lbl_804B5B4C;
        TObjPlayer__sub_80182D24(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}

extern "C" {

typedef struct RecoveredGlobal_8018289C_lbl_80443F4C RecoveredGlobal_8018289C_lbl_80443F4C;
typedef struct RecoveredGlobal_8018289C_lbl_804B5B4C RecoveredGlobal_8018289C_lbl_804B5B4C;
typedef char RecoveredGlobal_8018289C_lbl_80443F4C_size[((sizeof(RecoveredGlobal_8018289C_lbl_80443F4C)) == 0x1C) ? (1) : (-1)];
typedef char RecoveredGlobal_8018289C_lbl_804B5B4C_size[((sizeof(RecoveredGlobal_8018289C_lbl_804B5B4C)) == 0x5C) ? (1) : (-1)];
u8 *TObjCityDoor_Shop__ct(u8 *arg0, s32 arg1, s32 arg2) {
  unsigned int new_var2;
  M2C_UNK *new_var;
  new_var = &lbl_804B5B4C.value;
  init_city_door(arg0, arg1, arg2, (u8 *)&lbl_80443F4C.value);
  *((M2C_UNK **) (((s8 *) arg0) + 0x18)) = new_var;
  *((s32 *) (((s8 *) arg0) + 0)) = (s32) lbl_805D3250;
  new_var2 = 1;
  *((f32 *) (((s8 *) arg0) + 0xB0)) = (f32) ((*((s32 *) (((s8 *) (*((void **) (((s8 *) (*((u8 **) (((s8 *) lbl_805D5B28) + 0x430)))) + 0x54)))) + 4))) - new_var2);
  return arg0;
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80182954_8018291C { char pad[0x18]; };
struct VObj_80182954_8018291C : Base_80182954_8018291C {
    virtual void m0();  virtual void m1();  virtual void m2();  virtual void m3();
    virtual void m4();  virtual void m5();  virtual void m6();  virtual void m7();
    virtual void m8();  virtual void m9();  virtual void m10(); virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
};
struct Base_80182A58_8018291C { char pad[0x18]; };
struct VObj_80182A58_8018291C : Base_80182A58_8018291C {
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
    virtual s32 m12(f32);
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
};

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct M2CCopy_28 { u8 bytes[0x28]; };

struct M2CCopy_2C { u8 bytes[0x2c]; };

struct RecoveredGlobal_80182D8C_lbl_80443F20 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_80182D8C_lbl_804B5BA8 {
    M2C_UNK value;
    u8 remaining[0x5C];
};

#define F(o,t,p) (*(t*)((u8*)(o)+(p)))
struct CityDoorProbe3Base {char pad[0x18];};

struct CityDoorProbe3 : CityDoorProbe3Base {
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
virtual s32 m12(f32);
virtual void m13();virtual void m14();virtual void m15();virtual void m16();
virtual void m17();virtual void m18();virtual void m19();virtual s32 m20();
};

struct CityDoorParameters { f32 speed, openingDistanceSquared, closingDistanceSquared; };

struct CityDoorCollider { u8 padding[0x18]; s32 flags; };

struct CityDoorFields {
 u8 padding[0xA4]; CityDoorCollider* collider; s32 reserved;
 s32 phase; f32 endFrame, frame; CityDoorParameters* parameters;
};

extern "C" {
s32 is_player_in_range__10TObjPlayerFiif(s32 arg0, s32 arg1, f32 farg0);
s32 check_player_in_range__10TObjPlayerFPv(void *arg0, s32 _w1, f32 _w2);
M2C_UNK free_collision_body_parts(void *);
M2C_UNK unregister_object_by_id(M2C_UNK *);
void __dl__7TObjectFPv(void *);
M2C_UNK destroy_particle_controller__10TObjPlayerFPvs(void *, M2C_UNK);
extern M2C_UNK lbl_804B5BA8[];
void *TObjPlayer__sub_80182D24(void *arg0, s16 arg1);
extern void *lbl_805D4E28;
s32 TLobby__sub_80182E60(void);
    extern const float lbl_805DBC00;
void fn_80182E7C(void* a0);
M2C_UNK reset_photon_effect__10TObjPlayerFPv(void *);
M2C_UNK init_collision_body_parts(void *, void *, int, int);
M2C_UNK TObjPlayer__sub_801569F4();
extern RecoveredGlobal_80182D8C_lbl_80443F20 lbl_80443F20;
extern M2C_UNK lbl_804B5BA8[];
u8 *init_city_door(u8 *arg0, M2C_UNK arg1, s32 arg2, u8 *arg3);
void city_door_tick_opening(void* o);
void city_door_tick_closing(void* o);
}

extern "C" {

struct Vec_8018291C { char pad14[0x14]; f32 x; f32 y; };
struct Base_8018291C { char pad[0x18]; };
struct VObj_8018291C : Base_8018291C {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m10(f32, f32);
    char pad2[0xB8 - 0x18 - 4];
    Vec_8018291C *m;
};
struct Base_80182C04_8018291C { char pad[0x18]; };
struct VObj_80182C04_8018291C : Base_80182C04_8018291C {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual s32 m12(f32);
    virtual void m13(); virtual void m14(); virtual void m15(); virtual void m16();
    virtual void m17();
    virtual void m18();
};

void TObjPlayer__sub_8018291C(VObj_8018291C *arg0);
void city_door_play_open_sound(s32 arg0);
void city_door_play_close_sound(s32 arg0);
void begin_state_1__10TObjPlayerFPv(void *arg0);
void check_ground_or_fall__10TObjPlayerFPv(void *arg0);
void dispatch_state__10TObjPlayerFPv(void *arg0);
M2C_UNK play_sound_effect(M2C_UNK, s32, M2C_UNK, M2C_UNK);
f32 horizontal_distance_squared(s32, s32);
s32 get_player_by_client_id(s32);
s32 get_field_3e0__12TBoss3VoloptFPv();

void TObjPlayer__sub_8018291C(VObj_8018291C *arg0) {
    arg0->m10(arg0->m->x, arg0->m->y);
}

void dispatch_state__10TObjPlayerFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xAC);
    switch (temp_r0) {
    case 0:
        ((VObj_80182954_8018291C *)arg0)->m13();
        return;
    case 1:
        ((VObj_80182954_8018291C *)arg0)->m15();
        return;
    case 2:
        ((VObj_80182954_8018291C *)arg0)->m16();
        return;
    case 3:
        ((VObj_80182954_8018291C *)arg0)->m14();
        return;
    }
}

void city_door_play_open_sound(s32 arg0) {
    play_sound_effect(0x42A04, arg0 + 0x38, 0, 0);
}

void city_door_play_close_sound(s32 arg0) {
    play_sound_effect(0x42A05, arg0 + 0x38, 0, 0);
}

void check_ground_or_fall__10TObjPlayerFPv(void *arg0) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0xB8);
    if (((VObj_80182A58_8018291C *)arg0)->m12(M2C_FIELD(temp_r4, f32 *, 8)) == 0) {
        M2C_FIELD(arg0, s32 *, 0xAC) = 3;
        ((VObj_80182A58_8018291C *)arg0)->m17();
    }
}

#pragma push
#pragma opt_common_subs off
void city_door_tick_closing(void* o) {
 CityDoorFields* door = (CityDoorFields*)o;
 if (((CityDoorProbe3*)o)->m12(door->parameters->openingDistanceSquared) != 0) {
  door->phase = 1;
  ((CityDoorProbe3*)o)->m18();
 } else {
  door->frame -= door->parameters->speed;
  if (door->frame <= lbl_805DBBE8[0]) {
   door->frame = lbl_805DBBE8[0];
   door->phase = 0;
   door->collider->flags |= 1;
  }
 }
}
#pragma pop

void city_door_tick_opening(void* o) {
void* params=F(o,void*,0xB8);
if(((CityDoorProbe3*)o)->m12(F(params,f32,8))==0) {
 F(o,s32,0xAC)=3;((CityDoorProbe3*)o)->m17();return;
}
F(o,f32,0xB4)=F(o,f32,0xB4)+F(F(o,void*,0xB8),f32,0);
f32 last=F(o,f32,0xB0);
if(F(o,f32,0xB4)>=last) {F(o,f32,0xB4)=F(o,f32,0xB0);F(o,s32,0xAC)=2;}
}

void begin_state_1__10TObjPlayerFPv(void *arg0) {
    void *temp_r3;
    void *temp_r4;
    VObj_80182C04_8018291C *obj = (VObj_80182C04_8018291C *)arg0;

    temp_r4 = M2C_FIELD(arg0, void **, 0xB8);
    if (obj->m12(M2C_FIELD(temp_r4, f32 *, 4)) != 0) {
        M2C_FIELD(arg0, s32 *, 0xAC) = 1;
        obj->m18();
        temp_r3 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) & 0xFFFFFFFE);
    }
}

s32 is_player_in_range__10TObjPlayerFiif(s32 arg0, s32 arg1, f32 farg0) {
    s32 temp_r3;
    s32 temp_r3_2;
    s32 var_r30;

    var_r30 = 0;
loop_1:
    temp_r3 = get_player_by_client_id(var_r30);
    if ((temp_r3 != 0) && ((temp_r3_2 = get_field_3e0__12TBoss3VoloptFPv(), ((temp_r3_2 == 0) != 0)) || (temp_r3_2 == 0x12)) && (horizontal_distance_squared(arg1, temp_r3 + 0x38) < farg0)) {
        return 1;
    }
    var_r30 += 1;
    if (var_r30 >= 4) {
        return 0;
    }
    goto loop_1;
}
s32 check_player_in_range__10TObjPlayerFPv(void *arg0, s32 _w1, f32 _w2) { return is_player_in_range__10TObjPlayerFiif((s32)(arg0), (s32)((s8 *)arg0 + 0x38), _w2); }
void *TObjPlayer__sub_80182D24(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B5BA8;
        unregister_object_by_id((M2C_UNK *)arg0);
        free_collision_body_parts(arg0);
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_80182D8C_lbl_80443F20_size[sizeof(RecoveredGlobal_80182D8C_lbl_80443F20) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_80182D8C_lbl_804B5BA8_size[sizeof(RecoveredGlobal_80182D8C_lbl_804B5BA8) == 0x60 ? 1 : -1];
u8 *init_city_door(u8 *arg0, M2C_UNK arg1, s32 arg2, u8 *arg3) {
    struct CopyStack_80182D8C { u8 bytes[0x2C]; };
    CopyStack_80182D8C copy_storage_80182D8C;
    u8 *temp_r4;
    u8 *temp_r6;
    TObjPlayer__sub_801569F4();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80182D8C_lbl_804B5BA8 *)&lbl_804B5BA8).value;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, s32 *, 0xAC) = 0;
    temp_r4 = (u8 *)&lbl_80443F20.value - 4;
    M2C_FIELD(arg0, f32 *, 0xB0) = lbl_805DBBE8[0];
    M2C_FIELD(arg0, f32 *, 0xB4) = lbl_805DBBE8[0];
    M2C_FIELD(arg0, u8 **, 0xB8) = arg3;
    *(M2CCopy_2C *)(copy_storage_80182D8C.bytes) = *(const M2CCopy_2C *)((s32) temp_r4 + 4);
    temp_r6 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xB8));
    (*(f32 *)(copy_storage_80182D8C.bytes + 0xC)) = M2C_FIELD(temp_r6, f32 *, 0xC);
    (*(f32 *)(copy_storage_80182D8C.bytes + 0x10)) = M2C_FIELD(temp_r6, f32 *, 0x10);
    init_collision_body_parts((void *) (arg0), (void *) ((copy_storage_80182D8C.bytes)), (int) (1), (int) (temp_r6));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    return arg0;
}

s32 TLobby__sub_80182E60(void) {
    if ((void *) lbl_805D4E28 == NULL) {
        return -1;
    }
    return M2C_FIELD(lbl_805D4E28, s32 *, 0x1C);
}
void fn_80182E7C(void* a0) { *(float*)((char*)a0 + 0x9c) = lbl_805DBC00; *(int*)((char*)a0 + 0x90) = 1; }

}

__declspec(section ".sdata2") const f32 lbl_805DBBE8[1] = { 0.0f };
