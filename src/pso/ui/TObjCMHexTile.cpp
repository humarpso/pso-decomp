#include "pso/TObject.h"
#include "pso/object/TObject_80019A50.h"
#include "pso/ui/TObjCMHexTile.h"
#include "pso/unk/text_802948A8.h"
#include "types.h"

class TObjCMHexTile : public TObject {
public:
    virtual ~TObjCMHexTile();
    virtual void run_task();
    virtual void render();
};
#include "pso/misc/TWindowSubSymbolChatPartsSet.h"

struct H_80294324 { u8 pad0[0x34]; f32 f34; f32 f38; f32 f3c; f32 f40; u8 pad44[4]; f32 f48; f32 f4c; };

extern "C" {
extern const f32 lbl_805DDA0C;
extern const f32 lbl_805DDA10;
void draw_ui_sprite_scaled(int, void *, void *, f32, f32);
extern const f32 lbl_805DDA00;
extern const f32 lbl_805DDA04;
extern const f32 lbl_805DDA08;
void render__13TObjCMHexTileFv(H_80294324 *arg0);

void render__13TObjCMHexTileFv(H_80294324 *arg0) {
    f32 sp10[2];
    f32 sp8[2];
    f32 sc = lbl_805DDA00 * arg0->f4c;
    sp10[0] = sp10[1] = lbl_805DDA04 * arg0->f48;
    sp8[0] = arg0->f3c + arg0->f34;
    sp8[1] = arg0->f40 + arg0->f38;
    draw_ui_sprite_scaled(3, sp8, sp10, lbl_805DDA08, sc);
}

void run_task__13TObjCMHexTileFv(u8 *object) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f2;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r6;
    switch (*(s32 *)((s8 *)object + 0x1C)) {
    case 0:
        temp_f1 = (f32) *(s32 *)((s8 *)object + 0x50) / (f32) *(s32 *)((s8 *)object + 0x20);
        *(f32 *)((s8 *)object + 0x4C) = temp_f1;
        temp_f1_2 = lbl_805DDA0C - temp_f1;
        *(f32 *)((s8 *)object + 0x34) = (f32) (temp_f1_2 * *(f32 *)((s8 *)object + 0x2C));
        *(f32 *)((s8 *)object + 0x38) = (f32) (temp_f1_2 * *(f32 *)((s8 *)object + 0x30));
        break;
    case 1:
        *(f32 *)((s8 *)object + 0x4C) = (f32) lbl_805DDA0C;
        *(f32 *)((s8 *)object + 0x48) = (f32) lbl_805DDA0C;
        *(f32 *)((s8 *)object + 0x38) = (f32) lbl_805DDA10;
        *(f32 *)((s8 *)object + 0x34) = (f32) lbl_805DDA10;
        break;
    case 2:
        *(f32 *)((s8 *)object + 0x48) = (f32) (*(f32 *)((s8 *)object + 0x48) + *(f32 *)((s8 *)object + 0x44));
        temp_r5 = *(s32 *)((s8 *)object + 0x28);
        temp_f2 = (f32) (temp_r5 - *(s32 *)((s8 *)object + 0x50)) / (f32) (temp_r5 - *(s32 *)((s8 *)object + 0x24));
        *(f32 *)((s8 *)object + 0x4C) = (f32) (temp_f2 * temp_f2);
        temp_f1_3 = -(lbl_805DDA0C - temp_f2);
        *(f32 *)((s8 *)object + 0x34) = (f32) (temp_f1_3 * *(f32 *)((s8 *)object + 0x2C));
        *(f32 *)((s8 *)object + 0x38) = (f32) (temp_f1_3 * *(f32 *)((s8 *)object + 0x30));
        break;
    }
    temp_r6 = *(s32 *)((s8 *)object + 0x50) + 1;
    *(s32 *)((s8 *)object + 0x50) = temp_r6;
    temp_r5_2 = *(s32 *)((s8 *)object + 0x1C);
    if (temp_r6 >= ((s32 *)(object + 0x20))[temp_r5_2]) {
        *(s32 *)((s8 *)object + 0x1C) = (s32)(temp_r5_2 + 1);
        if ((s32) *(s32 *)((s8 *)object + 0x1C) == 3) {
            queue_destruction__7TObjectFv(object);
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
extern void *__vt__13TObjCMHexTile[];
extern const char *lbl_805D3CC8;
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
    ((TWindowSubSymbolChatPartsSet *)(self->pos))->copy_vec2(pos);
    self->f4C = lbl_805DDA10;
    self->f48 = lbl_805DDA0C;
    self->f50 = 0;
    self->f1C = 0;
    return self;
}
#pragma pop

#pragma pop

struct V2_802947A8 {
    f32 x;
    f32 y;
};

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
