#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_801105AC { char pad[0x18]; };
struct VObj_801105AC : Base_801105AC {
    virtual void m0(s32);
};

typedef s32 M2C_UNK;
extern "C" {
void *load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
void *alloc__23TAdSinglePlyChrSelectGCFPv(u32);
void TItemLoad__sub_8010F5A0();
void alloc_work_buffer__9TItemLoadFv();
u32 alloc_buffer__11TOBoss4RockFPv(u32);
void * __nw__7TObjectFUl(M2C_UNK);
void *__ct__7TObjectFP7TObject(void *, void *);
extern u8 lbl_8049F3E4[];
extern s32 TItemLoad__data_805D5480;
extern void *TItemLoad__data_805D5484;
extern void *TItemLoad__data_805D5488;
extern s32 TItemLoad__data_805D548C;
extern s32 lbl_805D5490;
void init_resources__9TItemLoadFv(void);
}

extern "C" {

s32 TItemLoad__sub_80110740(void* p);
s32 TItemLoad__sub_80110748(void* p);
void create__9TItemLoadFv(void);
void free_all__9TItemLoadFv(void);
void TItemLoad__sub_801107B4(void);
s32 TItemLoad__sub_801107DC(void* p);
s32 TItemLoad__sub_801107E4(void* p);
void* TItemLoad__sub_801107EC(void* p);
int TItemLoad__sub_801107F4(void* p);
M2C_UNK TLobby__sub_8001FE7C(s32, M2C_UNK);
int TLobby__sub_803CC4C0(void*);
int test_flags_any(void*, int);
M2C_UNK __ct__9TItemLoadFv(void *, s32);
void * __nw__7TObjectFUl(M2C_UNK);
M2C_UNK free__11TOBoss4RockFUi(s32);
M2C_UNK free_all_models__9TItemLoadFv();
M2C_UNK free_boss4_rock__9TItemLoadFv();
int get_ring_lobby__9TItemLoadFPv(void* p);
int update_item__9TItemLoadFPv(void* p);

extern s32 TItemLoad__data_805D5480;
extern void *TItemLoad__data_805D5484;
extern void *TItemLoad__data_805D5488;
extern s32 TItemLoad__data_805D548C;
extern s32 lbl_805D5490;

void free_all__9TItemLoadFv(void) {
    free__11TOBoss4RockFUi(TItemLoad__data_805D548C);
    if ((void *) TItemLoad__data_805D5484 != NULL) {
        ((VObj_801105AC *)TItemLoad__data_805D5484)->m0(1);
    }
    if ((void *) TItemLoad__data_805D5488 != NULL) {
        ((VObj_801105AC *)TItemLoad__data_805D5488)->m0(1);
    }
    TLobby__sub_8001FE7C(TItemLoad__data_805D5480, 1);
    lbl_805D5490 = 0;
    TItemLoad__data_805D5480 = 0;
    TItemLoad__data_805D5484 = NULL;
    TItemLoad__data_805D5488 = NULL;
    TItemLoad__data_805D548C = 0;
    free_all_models__9TItemLoadFv();
    free_boss4_rock__9TItemLoadFv();
}

extern s32 tl_05;

void init_resources__9TItemLoadFv(void) {
    void *p;
    u32 buf;
    s32 i;
    alloc_work_buffer__9TItemLoadFv();
    TItemLoad__sub_8010F5A0();
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
    if (p != NULL) {
        p = load_resource_from_descriptor(p, 5, lbl_8049F3E4, 0, 0, 0);
    }
    TItemLoad__data_805D5480 = (s32)p;
    p = __nw__7TObjectFUl(0x1C);
    if (p != NULL) {
        p = __ct__7TObjectFP7TObject(p, NULL);
    }
    TItemLoad__data_805D5488 = p;
    p = __nw__7TObjectFUl(0x1C);
    if (p != NULL) {
        p = __ct__7TObjectFP7TObject(p, NULL);
    }
    TItemLoad__data_805D5484 = p;
    buf = alloc_buffer__11TOBoss4RockFPv(0x30);
    TItemLoad__data_805D548C = buf;
    lbl_805D5490 = 0;
    if (buf != 0) {
        for (i = 0; i < 12; i++) {
            ((s32 *)TItemLoad__data_805D548C)[i] = 0;
        }
    }
}

void create__9TItemLoadFv(void) {
    void *obj = __nw__7TObjectFUl(0x1C);
    if (obj != 0) {
        __ct__9TItemLoadFv(obj, tl_05);
    }
}

s32 TItemLoad__sub_80110740(void* p) { return *(s32*)((char*)p + 0x3c); }
s32 TItemLoad__sub_80110748(void* p) { return *(s32*)((char*)p + 0x28); }

}
