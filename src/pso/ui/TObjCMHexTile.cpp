#include "pso/TObject.h"
#include "types.h"

class TObjCMHexTile : public TObject {
public:
    virtual ~TObjCMHexTile();
    virtual void run_task();
    virtual void render();
};
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void queue_destruction__7TObjectFv(void *);
extern const f32 lbl_805DDA0C;
extern const f32 lbl_805DDA10;
void run_task__13TObjCMHexTileFv(u8 *arg0);
}

extern "C" {

void run_task__13TObjCMHexTileFv(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f2;
    s32 temp_r0;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r6;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
    switch (temp_r0) {
    case 0:
        temp_f1 = (f32) M2C_FIELD(arg0, s32 *, 0x50) / (f32) M2C_FIELD(arg0, s32 *, 0x20);
        M2C_FIELD(arg0, f32 *, 0x4C) = temp_f1;
        temp_f1_2 = lbl_805DDA0C - temp_f1;
        M2C_FIELD(arg0, f32 *, 0x34) = (f32) (temp_f1_2 * M2C_FIELD(arg0, f32 *, 0x2C));
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) (temp_f1_2 * M2C_FIELD(arg0, f32 *, 0x30));
        break;
    case 1:
        M2C_FIELD(arg0, f32 *, 0x4C) = (f32) lbl_805DDA0C;
        M2C_FIELD(arg0, f32 *, 0x48) = (f32) lbl_805DDA0C;
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_805DDA10;
        M2C_FIELD(arg0, f32 *, 0x34) = (f32) lbl_805DDA10;
        break;
    case 2:
        M2C_FIELD(arg0, f32 *, 0x48) = (f32) (M2C_FIELD(arg0, f32 *, 0x48) + M2C_FIELD(arg0, f32 *, 0x44));
        temp_r5 = M2C_FIELD(arg0, s32 *, 0x28);
        temp_f2 = (f32) (temp_r5 - M2C_FIELD(arg0, s32 *, 0x50)) / (f32) (temp_r5 - M2C_FIELD(arg0, s32 *, 0x24));
        M2C_FIELD(arg0, f32 *, 0x4C) = (f32) (temp_f2 * temp_f2);
        temp_f1_3 = -(lbl_805DDA0C - temp_f2);
        M2C_FIELD(arg0, f32 *, 0x34) = (f32) (temp_f1_3 * M2C_FIELD(arg0, f32 *, 0x2C));
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) (temp_f1_3 * M2C_FIELD(arg0, f32 *, 0x30));
        break;
    }
    temp_r6 = M2C_FIELD(arg0, s32 *, 0x50) + 1;
    M2C_FIELD(arg0, s32 *, 0x50) = temp_r6;
    temp_r5_2 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_r6 >= ((s32 *)(arg0 + 0x20))[temp_r5_2]) {
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (temp_r5_2 + 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) == 3) {
            queue_destruction__7TObjectFv(arg0);
        }
    }
}

}

TObjCMHexTile::~TObjCMHexTile() {}

#pragma push
#pragma fp_contract on
extern "C" {

struct Hex_80294578 {
    const char *name;
    u8 pad4[0x18 - 0x4];
    void *vt;
    s32 f1C;
    s32 f20;
    s32 f24;
    s32 f28;
    f32 f2C;
    f32 f30;
    u8 pad34[0x3C - 0x34];
    f32 pos[2];
    f32 f44;
    f32 f48;
    f32 f4C;
    s32 f50;
};

void __ct__7TObjectFP7TObject(void *, void *);
int rand(void);
void copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);
extern void *__vt__13TObjCMHexTile[];
extern const char *lbl_805D3CC8;
extern const f32 lbl_805DDA0C;
extern const f32 lbl_805DDA10;
extern const f32 lbl_805DDA14;
extern const f32 lbl_805DDA18;
extern const f32 lbl_805DDA1C;
extern const f32 lbl_805DDA20;
extern const f32 lbl_805DDA24;
extern const f32 lbl_805DDA28;
extern const f32 lbl_805DDA2C;
extern const f32 lbl_805DDA30;
extern const f32 lbl_805DDA34;

#pragma push
#pragma opt_lifetimes off
Hex_80294578 *__ct__13TObjCMHexTileFv(Hex_80294578 *self, void *parent, void *pos) {
    s32 v;

    __ct__7TObjectFP7TObject(self, parent);
    self->vt = __vt__13TObjCMHexTile;
    self->name = lbl_805D3CC8;
    self->f20 = v = lbl_805DDA18 * (lbl_805DDA1C * (f32)rand()) + lbl_805DDA14;
    self->f24 = v = (f32)v + (lbl_805DDA14 * (lbl_805DDA1C * (f32)rand()) + lbl_805DDA18);
    v = (f32)v + (lbl_805DDA24 * (lbl_805DDA1C * (f32)rand()) + lbl_805DDA20);
    self->f28 = v;
    self->f44 = lbl_805DDA2C * (lbl_805DDA1C * (f32)rand()) + lbl_805DDA28;
    self->f2C = lbl_805DDA30 * (lbl_805DDA1C * (f32)rand()) - lbl_805DDA34;
    self->f30 = lbl_805DDA30 * (lbl_805DDA1C * (f32)rand()) - lbl_805DDA34;
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(self->pos, pos);
    self->f4C = lbl_805DDA10;
    self->f48 = lbl_805DDA0C;
    self->f50 = 0;
    self->f1C = 0;
    return self;
}
#pragma pop

}
#pragma pop

extern "C" {

struct V2_802947A8 {
    f32 x;
    f32 y;
};

void create_TObjCMHexTile(V2_802947A8 *);
extern const f32 lbl_805DDA38;
extern const f32 lbl_805DDA3C;
extern const f32 lbl_805DDA40;
extern const f32 lbl_805DDA44;
extern const f32 lbl_805DDA48;
extern const f32 lbl_805DDA4C;
extern const f32 lbl_805DDA50;

void fn_802947A8(void) {
    f32 limY;
    f32 stepY;
    f32 limX;
    f32 stepX;
    f32 evenX;
    f32 oddX;
    V2_802947A8 p;
    s32 odd = 0;

    p.y = lbl_805DDA38;
    stepX = lbl_805DDA44;
    limX = lbl_805DDA48;
    stepY = lbl_805DDA4C;
    limY = lbl_805DDA50;
    oddX = lbl_805DDA3C;
    evenX = lbl_805DDA40;
    for (; p.y < limY; p.y += stepY) {
        if (odd != 0) {
            p.x = oddX;
        } else {
            p.x = evenX;
        }
        for (; p.x < limX; p.x += stepX) {
            create_TObjCMHexTile(&p);
        }
        odd ^= 1;
    }
}

}
