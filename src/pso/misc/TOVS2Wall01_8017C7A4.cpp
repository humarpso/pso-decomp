#include "types.h"

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(s32);
};

struct RecoveredGlobal_8017C8EC_lbl_804B4ECC {
    s32 value;
    u8 remaining[0x130];
};

struct RecoveredGlobal_8017C8EC_lbl_804B528C {
    s32 value;
    u8 remaining[0x38];
};

struct RecoveredGlobal_8017C7DC_lbl_804B4EBC
{
  s32 value;
  u8 remaining[0xC];
};

extern "C" {
int TOVS2Wall01__vt24(void);
int TOVS2Wall01__vt25(void);
int TOVS2Wall01__vt18(void);
int TOVS2Wall01__vt19(void);
int TOVS2Wall01__vt20(void* p);
int take_hit__11TOVS2Wall01FPvUi(void*);
int TOVS2Wall01__vt21(void* p);
int take_hit__11TOVS2Wall01FPvUi(void*);
int TOVS2Wall01__vt22(void* p);
int take_hit__11TOVS2Wall01FPvUi(void*);
s32 TObjFish__sub_8001EDB0(int, void *);
u8 *get_bml_model(s32, s32);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 init_map_object_base(void *, int);
s32 create__10TObjMapCsnFi(void *);
extern RecoveredGlobal_8017C8EC_lbl_804B4ECC ovs2wall01_collision_parts;
extern s32 lbl_804B528C[];
extern s32 lbl_805D31C4;
extern u32 TOVS2Wall01__bml_resource;
extern void *tl_05;
extern const f32 lbl_805DBAB0;
u8 *init_wreck_object__11TOVS2Wall01FPvii(u8 *arg0, s32 arg1, s32 arg2);
s32 add_entry__11TMotorcycleFsiiff(int, int, int, f32, f32);
s32 TObjFish__sub_8001EDB0(int, void *);
u8 *get_bml_model(s32, s32);
s32 load_resource_from_descriptor(int, int, void *, int, int, int);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(int);
extern RecoveredGlobal_8017C7DC_lbl_804B4EBC bm_o_vs2_resource_descriptor;
extern u32 TOVS2Wall01__bml_resource;
extern const f32 lbl_805DBAA8;
extern const f32 lbl_805DBAB4;
void load_resources__11TOVS2Wall01Fv(void);
}

extern "C" {

void TOVS2Wall01__sub_8017CA48(void* p, s32 v);
s32 TOVS2Wall01__sub_8017CA50(void* p);
void TOVS2Wall01__vt23(void);
void *TObjGoalWarpAncient__create(void *arg0);
void byteswap_hit_packet__11TOVS2Wall01FPv(void* p);
void *destroy__11TOVS2Wall01FPvs(void *arg0, s16 arg1);
void* init__11TOVS2Wall01FPv(void* p);
void release_model__11TOVS2Wall01Fv(void);
void update_and_send__11TOVS2Wall01FPv(void* p);
int TLobby__send_and_handle_60(void*);
void TLobby__sub_8001FE7C(void*, int);
void free_collision_body_parts(void *);
void *TObjGoalWarpAncient__ct(void *, void *, void *);
void unregister_object_by_id(void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
int bswap_16__FPUs(void*);
int bswap_header__6TLobbyFi(void*);
void destroy_key_base__5TOKeyFPvs(void *, int);
int init__17TOBarrierEnergy01FPv(void*);
void queue_destruction__7TObjectFv(void *);

extern u32 TOVS2Wall01__bml_resource;

void release_model__11TOVS2Wall01Fv(void) {
    if ((u32) TOVS2Wall01__bml_resource != 0U) {
        TLobby__sub_8001FE7C((void*)TOVS2Wall01__bml_resource, 1);
        TOVS2Wall01__bml_resource = 0U;
    }
}

extern s32 lbl_804B528C[];

typedef struct RecoveredGlobal_8017C7DC_lbl_804B4EBC RecoveredGlobal_8017C7DC_lbl_804B4EBC;
void load_resources__11TOVS2Wall01Fv(void) {
  s32 temp_r31;
  s32 temp_r3;
  s32 var_r0;
  temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((int) 0x440);
  var_r0 = temp_r3;
  if (var_r0 != 0)
  {
    var_r0 = load_resource_from_descriptor((int) temp_r3, (int) 1, (void *) (&bm_o_vs2_resource_descriptor.value), (int) 0, (int) 0, (int) 0);
  }
  (*(s32 *)&TOVS2Wall01__bml_resource) = var_r0;
  ;
  add_entry__11TMotorcycleFsiiff((int) 0x3A, (int) ((s32)get_bml_model((s32)((int) (*(s32 *)&TOVS2Wall01__bml_resource)), (s32)((int) 5))), (int) TObjFish__sub_8001EDB0((int)((int) var_r0), (void *)((int) 5)), (f32) lbl_805DBAB4, (f32) lbl_805DBAA8);
}

void *destroy__11TOVS2Wall01FPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804B528C;
        if (*(void **)((s8 *)arg0 + 0xC8) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0xC8)); *(s32 *)((s8 *)arg0 + 0xC8) = 0; }
        unregister_object_by_id(arg0);
        free_collision_body_parts(arg0);
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_8017C8EC_lbl_804B4ECC_size[sizeof(RecoveredGlobal_8017C8EC_lbl_804B4ECC) == 0x134 ? 1 : -1];
typedef char RecoveredGlobal_8017C8EC_lbl_804B528C_size[sizeof(RecoveredGlobal_8017C8EC_lbl_804B528C) == 0x3C ? 1 : -1];
u8 *init_wreck_object__11TOVS2Wall01FPvii(u8 *arg0, s32 arg1, s32 arg2) {
    init_map_object_base((void *) (arg0), (int) ((*(s32 *)&tl_05)));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8017C8EC_lbl_804B528C *)&lbl_804B528C).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D31C4;
    ((VObj_18_1a504b *)(arg0))->m5(arg1);
    *(u8 **)((s8 *)arg0 + 0x34) = get_bml_model((*(s32 *)&TOVS2Wall01__bml_resource), arg2);
    *(f32 *)((s8 *)arg0 + 0xC4) = (f32) (lbl_805DBAB0 + *(f32 *)((s8 *)(*(void **)((s8 *)(*(u8 **)((s8 *)arg0 + 0x34)) + 4)) + 0x14));
    *(s32 *)((s8 *)arg0 + 0x24) = TObjFish__sub_8001EDB0((int) ((*(s32 *)&TOVS2Wall01__bml_resource)), (void *) (arg2));
    init_collision_body_parts((void *) (arg0), (void *) ((u8 *)&ovs2wall01_collision_parts.value + (arg2 * 0x2C)), (int) (1));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    *(s32 *)((s8 *)arg0 + 0xC8) = create__10TObjMapCsnFi((void *) (arg1));
    *(s32 *)((s8 *)arg0 + 0xCC) = 1;
    return arg0;
}

int TOVS2Wall01__vt24(void) { return 1; }

int TOVS2Wall01__vt25(void) { return 1; }

int TOVS2Wall01__vt18(void) { return 1; }

int TOVS2Wall01__vt19(void) { return 1; }

int TOVS2Wall01__vt20(void* p) { return take_hit__11TOVS2Wall01FPvUi(p); }

int TOVS2Wall01__vt21(void* p) { return take_hit__11TOVS2Wall01FPvUi(p); }

int TOVS2Wall01__vt22(void* p) { return take_hit__11TOVS2Wall01FPvUi(p); }

void TOVS2Wall01__vt23(void) {  }

void TOVS2Wall01__sub_8017CA48(void* p, s32 v) { *(s32*)((char*)p + 0x33c) = v; }
s32 TOVS2Wall01__sub_8017CA50(void* p) { return *(s32*)((char*)p + 0x33c); }
void byteswap_hit_packet__11TOVS2Wall01FPv(void* p) { bswap_header__6TLobbyFi(p); bswap_16__FPUs((char*)p + 0xc); bswap_16__FPUs((char*)p + 0xe); }
void update_and_send__11TOVS2Wall01FPv(void* p) { byteswap_hit_packet__11TOVS2Wall01FPv((void*)(p)); TLobby__send_and_handle_60(p); }
void* init__11TOVS2Wall01FPv(void* p) { init__17TOBarrierEnergy01FPv(p); *(short*)((char*)p + 0xc) = 0; *(short*)((char*)p + 0xe) = 0; *(unsigned char*)(p) = 134; *(unsigned char*)((char*)p + 0x1) = 4; return p; }

extern void *tl_05;

void *TObjGoalWarpAncient__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xEC);
    if (o != NULL) {
        o = TObjGoalWarpAncient__ct(o, tl_05, arg0);
    }
    return o;
}

}
