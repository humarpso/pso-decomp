#include "types.h"
typedef s32 M2C_UNK;
struct TMovie_80144910 {
    s32 name;
    u8 pad4[0x14];
    void *vt;
    u8 *obj1C;
    u8 *obj20;
    char path[0x20];
    s32 f44;
    s32 f48;
};

extern "C" {
u8 *alloc__23TAdSinglePlyChrSelectGCFPv(int);
u8 *initialize_movie_with_soundtrack(u8 *arg0, s8 *arg1, s32 arg2, s32 arg3, s32 arg4);
void __ct__7TObjectFP7TObject(void *, void *);
u8 *fn_803203EC(u8 *, void *);
char *strncpy(char *, const char *, u32);
extern u8 lbl_8043F380[];
extern M2C_UNK __vt__6TMovie[];
extern s32 lbl_805D2CF0;
TMovie_80144910 *TMovie__ct(TMovie_80144910 *self, void *parent, s8 *name, s32 a3, s32 a4, s32 a5);
}

extern "C" {

TMovie_80144910 *TMovie__ct(TMovie_80144910 *self, void *parent, s8 *name, s32 a3, s32 a4, s32 a5) {
    u8 *p;
    __ct__7TObjectFP7TObject(self, parent);
    self->vt = __vt__6TMovie;
    self->name = lbl_805D2CF0;
    self->f44 = a3;
    self->obj1C = 0;
    self->f48 = a4;
    self->obj20 = 0;
    strncpy(self->path, (const char *)name, 0x20);
    p = alloc__23TAdSinglePlyChrSelectGCFPv(8);
    if (p != 0) {
        p = fn_803203EC(p, lbl_8043F380);
    }
    self->obj1C = p;
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0xD0);
    if (p != 0) {
        p = initialize_movie_with_soundtrack(p, name, self->f48, (u8)!self->f48, a5);
    }
    self->obj20 = p;
    return self;
}

}
