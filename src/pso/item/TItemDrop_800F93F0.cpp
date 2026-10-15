#include "types.h"

struct B_800F957C { u8 pad[0x18]; };

struct N_800F957C : B_800F957C {
    virtual void m0(s32);
    void *p1C;
    u8 pad20[4];
    u32 id24;
};

struct Head_800F957C { u8 pad[0x14]; N_800F957C *first; };

extern "C" {
extern Head_800F957C resource_load_task_root[];
int safe_free__23TAdSinglePlyChrSelectGCFUi(void*);
void free_nodes_with_id__6TLobbyFUi(u32 arg0);
}

extern "C" {

s32 apply_rel_relocations(void *);
void *construct__9TItemDropFPv(void *);
s32 read_disc_file(void *, void *);
void *destroy__9TItemDropFPvs(void *arg0, s16 arg1);
int fn_800F953C(void* p);
int fn_800F955C(void* p);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
int safe_free__23TAdSinglePlyChrSelectGCFUi(void*);
int set_stream_and_load_file__6TLobbyFi(void*);

extern s32 lbl_8049C658[];

void *destroy__9TItemDropFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_8049C658;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}

#pragma push
#pragma inline_depth(1)
#pragma dont_inline off

struct Drop_800F9448 {
    u8 pad_0[0x1C];
    s32 a;
    s32 b;
    u8 pad_24[0x14];
    Drop_800F9448() { construct__9TItemDropFPv(this); }
};

static inline s32 finish_800F9448(Drop_800F9448 *d, s32 r) {
    destroy__9TItemDropFPvs(d, -1);
    return r;
}

extern "C" {

s32 TItemDrop__sub_800F9448(s32 arg0, s32 arg1) {
    Drop_800F9448 d;

    if (arg1 > 0) {
        d.a = arg0;
        d.b = arg1;
        return finish_800F9448(&d, apply_rel_relocations(&d));
    }
    return finish_800F9448(&d, 0);
}

s32 load_relocatable_file(s32 arg0, s32 arg1) {
    Drop_800F9448 d;
    s32 n;

    n = read_disc_file((void *) arg0, (void *) arg1);
    if (n > 0) {
        d.b = n;
        d.a = arg1;
        return finish_800F9448(&d, apply_rel_relocations(&d));
    }
    return finish_800F9448(&d, 0);
}

}
#pragma pop

extern "C" {
int fn_800F953C(void* p) { return safe_free__23TAdSinglePlyChrSelectGCFUi(p); }
int fn_800F955C(void* p) { return set_stream_and_load_file__6TLobbyFi(p); }
void free_nodes_with_id__6TLobbyFUi(u32 arg0) {
    N_800F957C *n = resource_load_task_root->first;
    while (n != 0) {
        if (n->id24 == arg0) {
            safe_free__23TAdSinglePlyChrSelectGCFUi(n->p1C);
            if (n != 0) {
                n->m0(1);
            }
        }
        n = *(N_800F957C **)((u8 *)n + 0xC);
    }
}

}
