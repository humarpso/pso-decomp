#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct TObjDoorKeyBase_8018FAEC { char pad[0x18]; };
struct TObjDoorKeyVObj_8018FAEC : TObjDoorKeyBase_8018FAEC {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};
struct Base_8018FF74_8018FAEC { char pad[0x18]; };
struct VObj_8018FF74_8018FAEC : Base_8018FF74_8018FAEC {
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
    virtual void m21();
    virtual void m22();
};

struct Key_8018FD9C { u8 pad0[0x38]; f32 f38[3]; u8 pad44[0x30]; f32 f74; f32 f78; u8 pad7C[0x10]; s32 f8C; };

typedef s32 M2C_UNK;
struct Node_8018FBB8 { s32 pad0; void *f4; };

struct Key_8018FBB8 { u8 pad0[0x38]; u8 f38[0x28]; s32 f60; u8 pad64[0x28]; s32 f8C; u8 pad90[0x60]; s32 fF0; };

struct Node_8018FCD8 { s32 pad0; void *f4; };

struct Key_8018FCD8 { u8 pad0[0x38]; u8 f38[0x28]; s32 f60; u8 pad64[0x28]; s32 f8C; u8 pad90[0x60]; s32 fF0; };

struct Vec_80190020 { f32 x, y, z; };

extern "C" {
void TObjDoorKey__vt14(u8 *arg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
void TOKey__sub_8016AA20();
void set_global_count__12TObjNpcEnemyFi(int);
void TObjEneBm5GibonU__sub_803D853C(int, void *, ...);
extern u8 lbl_804456C8[];
extern const f32 lbl_805DBE08;
void TObjDoorKey__vt24(Key_8018FD9C *arg0);
s32 TObjFish__sub_8001EDC4(s32, int);
s32 TLobby__sub_80020004(s32, int, void *, int, int, int);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(int);
s32 TLanguage__sub_801E4874(void *);
extern u8 lbl_804456D8[];
extern u8 lbl_804B7920[];
extern s32 TObjDoorKey__data_8050DCA8[];
extern u32 lbl_805D5BF8;
extern s32 TObjDoorKey__data_805D5BFC;
extern s16 lbl_805D5C00;
extern s32 TObjDoorKey__data_805D5C04;
void TObjDoorKey__sub_801901C8(void);
void begin_effect_render__13TParticleCtrlFv();
void end_effect_render__13TParticleCtrlFv();
void free_children__12TObjDoorJungFPvPv(void *, int);
void TOComputerMachine01__sub_8023DDC8(void *, int, int, int, int);
void PPCSync();
void rotate_matrix_y(int, int);
void TObjPlayer__sub_803D9B2C();
void pop_matrix();
void TOHangerMachine01__sub_803D9C00(void *);
void set_global_param__8TObjFishFi(int);
void TObjBoss2Tunnel__sub_803DB470(void *);
void set_chunk_material_color(void *);
extern u8 lbl_804A7418[];
extern u8 lbl_804B795C[][0x10];
extern s32 TObjDoorKey__data_8050DCA8[];
extern s32 lbl_805D53A4;
extern s32 lbl_805D5660;
extern s32 TObjDoorKey__data_805D5BFC;
extern s32 TObjDoorKey__data_805D5C04;
extern s32 some_id_805c6f74;
M2C_UNK TObjDoorKey__sub_8018FBB8(void *arg);
void begin_effect_render__13TParticleCtrlFv();
void end_effect_render__13TParticleCtrlFv();
void free_children__12TObjDoorJungFPvPv(void *, int);
void rotate_matrix_y(int, int);
void TObjPlayer__sub_803D9B2C();
void pop_matrix();
void TOHangerMachine01__sub_803D9C00(void *);
void set_global_param__8TObjFishFi(int);
void TObjBoss2Tunnel__sub_803DB470(void *);
void set_chunk_material_color(void *);
extern u8 lbl_804A7418[];
extern u8 lbl_804B795C[][0x10];
extern s32 TObjDoorKey__data_8050DCA8[];
extern s32 lbl_805D5660;
extern s32 TObjDoorKey__data_805D5BFC;
extern s32 some_id_805c6f74;
M2C_UNK TObjDoorKey__sub_8018FCD8(void *arg);
s32 get_global_state__14TOKeyMachine01Fv();
void TBoss3Volopt__sub_8022675C(int, void *, int, int);
void TObjDoorKey__vt16(u8 *arg0);
s32 TBoss8Dragon__sub_8008741C(Vec_80190020 *, int, int);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 TObjEneGibbles__sub_80156780(void *, void *, int);
M2C_UNK init_key__5TOKeyFPv(void *, void *);
u8 *TOKey__ct(void *);
void set_type__14TOKeyAncient01FPv(void *);
extern u8 lbl_804B7930[];
extern M2C_UNK __vt__11TObjDoorKey[];
extern s32 lbl_805D3344;
extern s16 lbl_805D5C00;
extern const f32 lbl_805DBE0C;
void *TObjDoorKey__ct(void *arg0, void *arg1, void *arg2);
}

extern "C" {

void *TObjDoorKey__create(void *arg0);
void TObjDoorKey__sub_8018FAEC(void);
int TObjDoorKey__vt15(void* p);
void TObjDoorKey__vt17(void);
int TObjDoorKey__vt22(void* p);
void * TObjEnvSoundGlobal__create(void *arg0);
void *__dt__11TObjDoorKeyFv(void *arg0, s16 arg1);
void free_key__11TObjDoorKeyFv(void);
void render__11TObjDoorKeyFv(void *arg0);
void run_task__11TObjDoorKeyFv(void *arg0);
void TLobby__sub_8001FE7C(void*, int);
int TOKey__sub_8016A960(void*);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
void *TObjEnvSoundGlobal__ct(void *, void *, void *);
M2C_UNK TObjPlayer__sub_80154A00(void *);
int submit_cursor_candidate(void*, int);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__5TOKeyFv(void *, M2C_UNK);
void *__nw__7TObjectFUl(int);
M2C_UNK clear_active_flag__13TParticleCtrlFPv(void *);
M2C_UNK enable__13TParticleCtrlFPv(void *);
void *fn_8018FA6C();
M2C_UNK free_if_valid__10TObjPlayerFi(s32);
int is_not_split_screen__13TRaderMapCoreFv(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);

void TObjDoorKey__sub_8018FAEC(void) {
    void *temp_r3;

    temp_r3 = fn_8018FA6C();
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s32 *, 0xE8) = 1;
    }
}

extern const f32 lbl_805DBE00;
extern const f32 lbl_805DBE04;

void render__11TObjDoorKeyFv(void *arg0) {
    s32 temp_r0;

    if (((TObjDoorKeyVObj_8018FAEC*)arg0)->m8(lbl_805DBE00, lbl_805DBE04) == 0) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0xF8) != 0U) {
            enable__13TParticleCtrlFPv(M2C_FIELD(arg0, void **, 0xF8));
        }
    } else {
        if ((u32) M2C_FIELD(arg0, u32 *, 0xF8) != 0U) {
            clear_active_flag__13TParticleCtrlFPv(M2C_FIELD(arg0, void **, 0xF8));
        }
        temp_r0 = M2C_FIELD(arg0, s32 *, 0xD4);
        switch (temp_r0) {
        case 0:
            TObjDoorKey__sub_8018FCD8((void *)(arg0));
            return;
        case 1:
            TObjDoorKey__sub_8018FBB8((void *)(arg0));
            return;
        }
    }
}

M2C_UNK TObjDoorKey__sub_8018FBB8(void *arg) {
    Key_8018FBB8 *arg0 = (Key_8018FBB8 *)arg;
    if (TObjDoorKey__data_805D5C04 != lbl_805D53A4) {
        TOComputerMachine01__sub_8023DDC8(((Node_8018FBB8 *)TObjDoorKey__data_8050DCA8[1])->f4, 0, 0x14, 0xE, 1);
        PPCSync();
        TObjDoorKey__data_805D5C04 = lbl_805D53A4;
    }
    set_global_param__8TObjFishFi(TObjDoorKey__data_805D5BFC);
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00(arg0->f38);
    rotate_matrix_y(0, arg0->f60);
    TObjBoss2Tunnel__sub_803DB470((void *)TObjDoorKey__data_8050DCA8[0]);
    begin_effect_render__13TParticleCtrlFv();
    lbl_805D5660 = some_id_805c6f74;
    some_id_805c6f74 |= 0x10;
    set_chunk_material_color(lbl_804B795C[arg0->f8C]);
    TObjBoss2Tunnel__sub_803DB470((void *)TObjDoorKey__data_8050DCA8[1]);
    rotate_matrix_y(0, arg0->fF0);
    s32 *g = TObjDoorKey__data_8050DCA8;
    free_children__12TObjDoorJungFPvPv(((Node_8018FBB8 *)g[2])->f4, (u16)arg0->f8C);
    TObjBoss2Tunnel__sub_803DB470((void *)g[2]);
    set_chunk_material_color(lbl_804A7418);
    some_id_805c6f74 = lbl_805D5660;
    end_effect_render__13TParticleCtrlFv();
    pop_matrix();
}

M2C_UNK TObjDoorKey__sub_8018FCD8(void *arg) {
    Key_8018FCD8 *arg0 = (Key_8018FCD8 *)arg;
    set_global_param__8TObjFishFi(TObjDoorKey__data_805D5BFC);
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00(arg0->f38);
    rotate_matrix_y(0, arg0->f60);
    TObjBoss2Tunnel__sub_803DB470((void *)TObjDoorKey__data_8050DCA8[0]);
    begin_effect_render__13TParticleCtrlFv();
    lbl_805D5660 = some_id_805c6f74;
    some_id_805c6f74 |= 0x10;
    set_chunk_material_color(lbl_804B795C[arg0->f8C]);
    s32 *g = TObjDoorKey__data_8050DCA8;
    free_children__12TObjDoorJungFPvPv(((Node_8018FCD8 *)g[2])->f4, (u16)arg0->f8C);
    TObjBoss2Tunnel__sub_803DB470((void *)g[2]);
    set_chunk_material_color(lbl_804A7418);
    some_id_805c6f74 = lbl_805D5660;
    end_effect_render__13TParticleCtrlFv();
    pop_matrix();
}

void TObjDoorKey__vt24(Key_8018FD9C *arg0) {
    TOKey__sub_8016AA20();
    VecCopy__FP3VecPC3Vec(&arg0->f74, arg0->f38);
    arg0->f78 = arg0->f78 + lbl_805DBE08;
    set_global_count__12TObjNpcEnemyFi(0xFF00FF);
    TObjEneBm5GibonU__sub_803D853C(0x130022, lbl_804456C8, arg0->f8C);
    set_global_count__12TObjNpcEnemyFi(0xF0F0F0FF);
    if (arg0->f8C < 0) {
        arg0->f8C = 0;
    }
    if (arg0->f8C > 9) {
        arg0->f8C = 9;
    }
}

void TObjDoorKey__vt17(void) {  }

void TObjDoorKey__vt16(u8 *arg0) {
    switch (get_global_state__14TOKeyMachine01Fv()) {
    case 3:
    case 4:
    case 5:
        TBoss3Volopt__sub_8022675C(0x42D0A, arg0 + 0x38, 0, 0);
        break;
    case 0x13:
    case 0x14:
        TBoss3Volopt__sub_8022675C(0x4C601, arg0 + 0x38, 0, 0);
        break;
    case 0x15:
    case 0x16:
        TBoss3Volopt__sub_8022675C(0x4004C601, arg0 + 0x38, 0, 0);
        break;
    default:
        TBoss3Volopt__sub_8022675C(0x4C60A, arg0 + 0x38, 0, 0);
        break;
    }
    *(s32 *)(arg0 + 0xE8) = 1;
}

void TObjDoorKey__vt14(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0xF4) = (s32) (M2C_FIELD(arg0, s32 *, 0xF4) + 0x14);
    M2C_FIELD(arg0, s32 *, 0xF0) = (s32) (M2C_FIELD(arg0, s32 *, 0xF0) + 0x200);
}

int TObjDoorKey__vt15(void* p) { return submit_cursor_candidate(p, -1); }
int TObjDoorKey__vt22(void* p) { return TOKey__sub_8016A960(p); }

void run_task__11TObjDoorKeyFv(void *arg0) {
    struct VObj_8018FF74_8018FAEC *o = (struct VObj_8018FF74_8018FAEC *)arg0;
    o->m22();
}

extern M2C_UNK __vt__11TObjDoorKey[];

void *__dt__11TObjDoorKeyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TObjDoorKey;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        if ((u32) M2C_FIELD(arg0, u32 *, 0xF8) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xF8));
            M2C_FIELD(arg0, u32 *, 0xF8) = 0U;
        }
        __dt__5TOKeyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_05;

void *TObjDoorKey__ct(void *arg0, void *arg1, void *arg2) {
    TOKey__ct(arg0);
    M2C_FIELD(arg0, u8 **, 0x18) = ((u8 *)&__vt__11TObjDoorKey);
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D3344;
    init_key__5TOKeyFPv(arg0, arg2);
    M2C_FIELD(arg0, s32 *, 0xE8) = 0;
    M2C_FIELD(arg0, s32 *, 0xF0) = 0;
    M2C_FIELD(arg0, s32 *, 0xEC) = 0x14;
    M2C_FIELD(arg0, s32 *, 0xF4) = 0;
    M2C_FIELD(arg0, s32 *, 0xF8) = 0;
    M2C_FIELD(arg0, u16 *, 6) = (*(u16 *)&lbl_805D5C00)++;
    if (M2C_FIELD(arg0, s32 *, 0x8C) < 0) {
        M2C_FIELD(arg0, s32 *, 0x8C) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x8C) > 9) {
        M2C_FIELD(arg0, s32 *, 0x8C) = 9;
    }
    TObjEneGibbles__sub_80156780(arg0, lbl_804B7930, 1);
    M2C_FIELD(arg0, s32 *, 0x30) |= 0x40000000;
    reset_photon_effect__10TObjPlayerFPv(arg0);
    Vec_80190020 pos = M2C_FIELD(arg0, Vec_80190020 *, 0x38);
    pos.y += lbl_805DBE0C;
    M2C_FIELD(arg0, s32 *, 0xF8) = TBoss8Dragon__sub_8008741C(&pos, 0x60, 0x40);
    set_type__14TOKeyAncient01FPv((u8 *)arg0 + 0x98);
    return arg0;
}

void *TObjDoorKey__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xFC);
    if (o != NULL) {
        o = TObjDoorKey__ct((void *)(o), (void *)(tl_05), (void *)(arg0));
    }
    return o;
}

extern u32 lbl_805D5BF8;
extern s32 TObjDoorKey__data_805D5BFC;
extern s32 TObjDoorKey__data_805D5C04;

void free_key__11TObjDoorKeyFv(void) {
    if ((u32) lbl_805D5BF8 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5BF8, 1);
        lbl_805D5BF8 = 0U;
    }
    free_if_valid__10TObjPlayerFi(TObjDoorKey__data_805D5BFC);
    TObjDoorKey__data_805D5BFC = 0;
    TObjDoorKey__data_805D5C04 = 0;
}

extern void *tl_05;

void TObjDoorKey__sub_801901C8(void) {
    s32 r = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
    if (r != 0) {
        r = TLobby__sub_80020004(r, 5, lbl_804B7920, 0, 0, 0);
    }
    (*(s32 *)&lbl_805D5BF8) = r;
    TObjDoorKey__data_805D5BFC = TLanguage__sub_801E4874(lbl_804456D8);
    TObjDoorKey__data_8050DCA8[0] = TObjFish__sub_8001EDC4((*(s32 *)&lbl_805D5BF8), 1);
    TObjDoorKey__data_8050DCA8[1] = TObjFish__sub_8001EDC4((*(s32 *)&lbl_805D5BF8), 2);
    s32 t = TObjFish__sub_8001EDC4((*(s32 *)&lbl_805D5BF8), 0);
    lbl_805D5C00 = 0;
    TObjDoorKey__data_8050DCA8[2] = t;
    TObjDoorKey__data_805D5C04 = 0;
}

void * TObjEnvSoundGlobal__create(void *arg0) {
    void *o;
    if (is_not_split_screen__13TRaderMapCoreFv(arg0) == 1) {
        return NULL;
    }
    o = __nw__7TObjectFUl(0x9C);
    if (o != NULL) {
        o = TObjEnvSoundGlobal__ct(o, tl_05, arg0);
    }
    return o;
}

}
