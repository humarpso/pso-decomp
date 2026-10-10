#include "types.h"
#include "pso/system/BmlResourceDescriptor.h"

struct BmlResourceBlock_804B3AB8 { const char *model_filenames[4]; BmlResourceDescriptor descriptor; };
typedef char BmlResourceBlock_804B3AB8_size[(sizeof(BmlResourceBlock_804B3AB8) == 0x20) ? 1 : -1];
typedef char BmlResourceBlock_804B3AB8_descriptor_offset[(offsetof(BmlResourceBlock_804B3AB8, descriptor) == 0x10) ? 1 : -1];
struct BmlResourceBlock_804B3AD8 { const char *model_filenames[7]; BmlResourceDescriptor descriptor; };
typedef char BmlResourceBlock_804B3AD8_size[(sizeof(BmlResourceBlock_804B3AD8) == 0x2c) ? 1 : -1];
typedef char BmlResourceBlock_804B3AD8_descriptor_offset[(offsetof(BmlResourceBlock_804B3AD8, descriptor) == 0x1c) ? 1 : -1];
struct BmlResourceBlock_804B3B04 { const char *model_filenames[4]; BmlResourceDescriptor descriptor; };
typedef char BmlResourceBlock_804B3B04_size[(sizeof(BmlResourceBlock_804B3B04) == 0x20) ? 1 : -1];
typedef char BmlResourceBlock_804B3B04_descriptor_offset[(offsetof(BmlResourceBlock_804B3B04, descriptor) == 0x10) ? 1 : -1];
struct BmlResourceBlock_804B3B24 { const char *model_filenames[7]; BmlResourceDescriptor descriptor; };
typedef char BmlResourceBlock_804B3B24_size[(sizeof(BmlResourceBlock_804B3B24) == 0x2c) ? 1 : -1];
typedef char BmlResourceBlock_804B3B24_descriptor_offset[(offsetof(BmlResourceBlock_804B3B24, descriptor) == 0x1c) ? 1 : -1];
struct BmlResourceBlock_804B3B50 { const char *model_filenames[7]; BmlResourceDescriptor descriptor; };
typedef char BmlResourceBlock_804B3B50_size[(sizeof(BmlResourceBlock_804B3B50) == 0x2c) ? 1 : -1];
typedef char BmlResourceBlock_804B3B50_descriptor_offset[(offsetof(BmlResourceBlock_804B3B50, descriptor) == 0x1c) ? 1 : -1];
struct BmlResourceBlock_804B3B7C { const char *model_filenames[7]; BmlResourceDescriptor descriptor; };
typedef char BmlResourceBlock_804B3B7C_size[(sizeof(BmlResourceBlock_804B3B7C) == 0x2c) ? 1 : -1];
typedef char BmlResourceBlock_804B3B7C_descriptor_offset[(offsetof(BmlResourceBlock_804B3B7C, descriptor) == 0x1c) ? 1 : -1];
extern "C" {
extern char lbl_804424A0[];
extern char lbl_804424B4[];
extern char lbl_804424C8[];
extern char lbl_804424DC[];
extern char lbl_804424F4[];
extern char lbl_80442508[];
extern char lbl_8044251C[];
extern char lbl_80442530[];
extern char lbl_80442544[];
extern char lbl_80442558[];
extern char lbl_8044256C[];
extern char lbl_80442584[];
extern char lbl_80442598[];
extern char lbl_804425AC[];
extern char lbl_804425C0[];
extern char lbl_804425D8[];
extern char lbl_804425EC[];
extern char lbl_80442600[];
extern char lbl_80442614[];
extern char lbl_80442628[];
extern char lbl_8044263C[];
extern char lbl_80442650[];
extern char lbl_80442668[];
extern char lbl_80442680[];
extern char lbl_80442698[];
extern char lbl_804426B0[];
extern char lbl_804426C8[];
extern char lbl_804426E0[];
extern char lbl_804426F8[];
extern char lbl_80442710[];
extern char lbl_80442728[];
extern char lbl_80442740[];
extern char lbl_80442758[];
extern char lbl_80442770[];
extern char lbl_80442788[];
extern char lbl_804427A0[];
extern BmlResourceBlock_804B3AB8 rock_cave_resource_table;
extern BmlResourceBlock_804B3AD8 bm_o_rock_cave02_resource_bundle;
extern BmlResourceBlock_804B3B04 bm_o_rock_cave03_resource_bundle;
extern BmlResourceBlock_804B3B24 bm_fe_obj_rb_liwa_resource_bundle;
extern BmlResourceBlock_804B3B50 bm_fe_obj_rb2_liwa_resource_bundle;
extern BmlResourceBlock_804B3B7C bm_fe_obj_rb3_liwa_resource_bundle;
extern const char *bm_o_rock_cave01_motion_names[1];
extern const char *bm_o_rock_cave02_motion_names[1];
extern const char *bm_o_rock_cave03_motion_names[1];
extern const char *bm_fe_obj_rb_liwa_motion_names[1];
extern const char *bm_fe_obj_rb2_liwa_motion_names[1];
extern const char *bm_fe_obj_rb3_liwa_motion_names[1];
}
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
    virtual M2C_UNK m8(f32, f32);
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual M2C_UNK m12();
    virtual M2C_UNK m13();
};

extern "C" {
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK draw_ginja_object(int);
void draw_model__10TORockCaveFPv(u8 *arg0);
u32 load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
void *alloc__23TAdSinglePlyChrSelectGCFPv(u32);
s32 get_global_state__14TOKeyMachine01Fv(void);
extern u32 cave_rock_resource_bundle;
extern u32 lbl_805D5A84;
void load_resources__10TORockCaveFv(void);
}

extern "C" {

void *TORockCave__ct(void *arg0);
void TORockCave__sub_80175460(void);
void TORockCave__sub_80175464(void);
void *__dt__10TORockCaveFv(void *arg0, s16 arg1);
void free_instances__10TORockCaveFv(void);
void TLobby__sub_8001FE7C(void*, int);
void TOSensor__sub_80175468(void);
void construct_collider_proxy__10TObjPlayerFPv(void *, void *);
void __dl__7TObjectFPv(void *);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);

extern u32 cave_rock_resource_bundle;
extern u32 lbl_805D5A84;

void draw_model__10TORockCaveFPv(u8 *arg0) {
    if (((VObj_18 *)(arg0))->m8(M2C_FIELD(arg0, f32 *, 0xAC), M2C_FIELD(arg0, f32 *, 0xB0)) != 0) {
        ((VObj_18 *)(arg0))->m12();
        push_matrix();
        post_translate_matrix((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        draw_ginja_object((int) (M2C_FIELD(arg0, s32 *, 0x34)));
        pop_matrix();
        ((VObj_18 *)(arg0))->m13();
    }
}

void free_instances__10TORockCaveFv(void) {
    if ((u32) lbl_805D5A84 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5A84, 1);
        lbl_805D5A84 = 0U;
    }
    if ((u32) cave_rock_resource_bundle != 0U) {
        TLobby__sub_8001FE7C((void*)cave_rock_resource_bundle, 1);
        cave_rock_resource_bundle = 0U;
    }
}

extern M2C_UNK __vt__10TORockCave[];

#define MK_80175224(dst, off)                                                   \
    {                                                                           \
        void *p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);                   \
        u32 r = (u32)p;                                                         \
        if (p != 0) {                                                           \
            r = load_resource_from_descriptor(p, 1, tbl + (off), 0, 0, 0);               \
        }                                                                       \
        dst = r;                                                                \
    }
void load_resources__10TORockCaveFv(void) {
    u8 *tbl = (u8 *)&rock_cave_resource_table;
    switch (get_global_state__14TOKeyMachine01Fv()) {
    case 3:
        MK_80175224(cave_rock_resource_bundle, 0x10)
        MK_80175224(lbl_805D5A84, 0x88)
        break;
    case 4:
        MK_80175224(cave_rock_resource_bundle, 0x3C)
        MK_80175224(lbl_805D5A84, 0xB4)
        break;
    case 5:
        MK_80175224(cave_rock_resource_bundle, 0x5C)
        MK_80175224(lbl_805D5A84, 0xE0)
        break;
    default:
        cave_rock_resource_bundle = 0;
        lbl_805D5A84 = 0;
        break;
    }
}

void *__dt__10TORockCaveFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TORockCave;
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_05;
extern const f32 lbl_805DB974;
extern M2C_UNK __vt__10TORockCave[];
extern const f32 lbl_805DB978;
extern void *TORockCave__class_name;

void *TORockCave__ct(void *arg0) {
    construct_collider_proxy__10TObjPlayerFPv(arg0, tl_05);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TORockCave;
    M2C_FIELD(arg0, void **, 0x0) = TORockCave__class_name;
    M2C_FIELD(arg0, f32 *, 0xAC) = lbl_805DB974;
    M2C_FIELD(arg0, f32 *, 0xB0) = lbl_805DB978;
    return arg0;
}

void TORockCave__sub_80175460(void) {  }
void TORockCave__sub_80175464(void) {  }

}

extern "C" {
__declspec(section ".data") BmlResourceBlock_804B3AB8 rock_cave_resource_table = { { lbl_804424A0, lbl_804424B4, lbl_804424C8, NULL }, { lbl_804424DC, rock_cave_resource_table.model_filenames, bm_o_rock_cave01_motion_names, 3, 0 } };
__declspec(section ".data") BmlResourceBlock_804B3AD8 bm_o_rock_cave02_resource_bundle = { { lbl_804424F4, lbl_80442508, lbl_8044251C, lbl_80442530, lbl_80442544, lbl_80442558, NULL }, { lbl_8044256C, bm_o_rock_cave02_resource_bundle.model_filenames, bm_o_rock_cave02_motion_names, 6, 0 } };
__declspec(section ".data") BmlResourceBlock_804B3B04 bm_o_rock_cave03_resource_bundle = { { lbl_80442584, lbl_80442598, lbl_804425AC, NULL }, { lbl_804425C0, bm_o_rock_cave03_resource_bundle.model_filenames, bm_o_rock_cave03_motion_names, 3, 0 } };
__declspec(section ".data") BmlResourceBlock_804B3B24 bm_fe_obj_rb_liwa_resource_bundle = { { lbl_804425D8, lbl_804425EC, lbl_80442600, lbl_80442614, lbl_80442628, lbl_8044263C, NULL }, { lbl_80442650, bm_fe_obj_rb_liwa_resource_bundle.model_filenames, bm_fe_obj_rb_liwa_motion_names, 6, 0 } };
__declspec(section ".data") BmlResourceBlock_804B3B50 bm_fe_obj_rb2_liwa_resource_bundle = { { lbl_80442668, lbl_80442680, lbl_80442698, lbl_804426B0, lbl_804426C8, lbl_804426E0, NULL }, { lbl_804426F8, bm_fe_obj_rb2_liwa_resource_bundle.model_filenames, bm_fe_obj_rb2_liwa_motion_names, 6, 0 } };
__declspec(section ".data") BmlResourceBlock_804B3B7C bm_fe_obj_rb3_liwa_resource_bundle = { { lbl_80442710, lbl_80442728, lbl_80442740, lbl_80442758, lbl_80442770, lbl_80442788, NULL }, { lbl_804427A0, bm_fe_obj_rb3_liwa_resource_bundle.model_filenames, bm_fe_obj_rb3_liwa_motion_names, 6, 0 } };
__declspec(section ".sdata") const char *bm_o_rock_cave01_motion_names[1] = { NULL };
__declspec(section ".sdata") const char *bm_o_rock_cave02_motion_names[1] = { NULL };
__declspec(section ".sdata") const char *bm_o_rock_cave03_motion_names[1] = { NULL };
__declspec(section ".sdata") const char *bm_fe_obj_rb_liwa_motion_names[1] = { NULL };
__declspec(section ".sdata") const char *bm_fe_obj_rb2_liwa_motion_names[1] = { NULL };
__declspec(section ".sdata") const char *bm_fe_obj_rb3_liwa_motion_names[1] = { NULL };
}
