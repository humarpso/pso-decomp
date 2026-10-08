#include "pso/TObject.h"
class TAdPlayerLoadGC : public TObject {
public:
    virtual void vtable_key_TAdPlayerLoadGC();
    virtual ~TAdPlayerLoadGC();
};

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 get_instance__15TAdPlayerLoadGCFv();
void set_state__15TAdPlayerLoadGCFi(int);
s32 probe_and_check_card__15TAdPlayerLoadGCFi(int);
s32 get_load_result__15TAdPlayerLoadGCFv(int);
s32 TAdPlayerLoadGC__sub_801E1B50(int);
s32 probe_card_slot__15TAdPlayerLoadGCFi(int);
s32 check_memcard_status__15TAdPlayerLoadGCFi(int);
s32 find_card_file__15TAdPlayerLoadGCFiPv(int, void *);
s32 TAdPlayerLoadGC__sub_801FD770();
s32 TAdPlayerLoadGC__sub_801FD814();
s32 check_system_load_result__23TAdSinglePlyChrSelectGCFv();
s32 load_system_file_flag__23TAdSinglePlyChrSelectGCFv();
int fn_802D6BDC(void);
void fn_802D6BE4(int a0);
extern M2C_UNK lbl_804C88C0[];
extern M2C_UNK lbl_804C8914[];
void run_task__15TAdPlayerLoadGCFv(u8 *arg0);
}

extern "C" {

void *TAdPlayerLoadGC__sub_802D655C(void *arg0, s16 arg1);
void *__ct__15TAdPlayerLoadGCFv(void *arg0, void *arg1, void *arg2);
int fn_802D6BDC(void);
void fn_802D6BE4(int a0);
void render__15TAdPlayerLoadGCFv(void);
void __ct__7TObjectFP7TObject(void *);
void free_obj_heap__10TObjPlayerFPv(void *);
void item_equip_variant_deleting_dtor_80120CF8(void *, int);
void set_state__15TAdPlayerLoadGCFi(int);

extern M2C_UNK lbl_804E24F0[];

void *TAdPlayerLoadGC__sub_802D655C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E24F0;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

void render__15TAdPlayerLoadGCFv(void) {  }

void __dt__15TAdPlayerLoadGCFv(void);
void render_shadows__7TObjectFv(void);
void *__vt__15TAdPlayerLoadGC[6] = {
    0, 0, (void *)__dt__15TAdPlayerLoadGCFv, (void *)run_task__15TAdPlayerLoadGCFv,
    (void *)render__15TAdPlayerLoadGCFv, (void *)render_shadows__7TObjectFv,
};
extern void *lbl_805D3F48;

void run_task__15TAdPlayerLoadGCFv(u8 *arg0) {
    u32 temp_r0;
    fn_802D6BE4((int) (M2C_FIELD(arg0, u32 *, 0x1C)));
    if (probe_card_slot__15TAdPlayerLoadGCFi((int) (0)) == 0) {
        M2C_FIELD(arg0, u32 *, 0x1C) = 0U;
    }
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x1C);
    switch (temp_r0) {
    case 0:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x20) == 2) {
            if ((TAdPlayerLoadGC__sub_801E1B50((int) (1)) == 0) && (probe_card_slot__15TAdPlayerLoadGCFi((int) (0)) != 0)) {
                M2C_FIELD(arg0, u32 *, 0x1C) = 1U;
            }
        } else if (probe_card_slot__15TAdPlayerLoadGCFi((int) (0)) != 0) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 1U;
        }
        break;
    case 1:
        if ((probe_and_check_card__15TAdPlayerLoadGCFi((int) (0)) != 0) || ((u32)get_load_result__15TAdPlayerLoadGCFv((int) (0)) != 0xFFFFFF83U)) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 2U;
        }
        break;
    case 2:
        if ((probe_and_check_card__15TAdPlayerLoadGCFi((int) (0)) != 0) || ((u32)get_load_result__15TAdPlayerLoadGCFv((int) (0)) != 0xFFFFFF21U)) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 3U;
        }
    case 3:
        if (probe_and_check_card__15TAdPlayerLoadGCFi((int) (0)) != 0) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 4U;
        }
        break;
    case 4:
        if (check_memcard_status__15TAdPlayerLoadGCFi((int) (0)) == 0) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 5U;
        }
        break;
    case 5:
        if ((u32)find_card_file__15TAdPlayerLoadGCFiPv((int) (0), (void *) (lbl_804C88C0)) != 0xFFFFFF41U) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 6U;
        }
        break;
    case 6:
        if ((find_card_file__15TAdPlayerLoadGCFiPv((int) (0), (void *) (lbl_804C88C0)) == 0) && (get_instance__15TAdPlayerLoadGCFv() == 0)) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 7U;
        }
        break;
    case 7:
        if ((u32)find_card_file__15TAdPlayerLoadGCFiPv((int) (0), (void *) (lbl_804C8914)) != 0xFFFFFF41U) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 8U;
        }
        break;
    case 8:
        if ((u32)load_system_file_flag__23TAdSinglePlyChrSelectGCFv() != 0xFFFFFF05U) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 9U;
        }
        break;
    case 9:
        if (get_instance__15TAdPlayerLoadGCFv() == 0) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0xAU;
        }
        break;
    case 10:
        if (TAdPlayerLoadGC__sub_801FD770() != 1) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0xBU;
        }
        break;
    case 11:
        if (TAdPlayerLoadGC__sub_801FD770() != 5) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0xCU;
        }
        break;
    case 12:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x20) == 1) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0xDU;
        }
        break;
    case 13:
        if (probe_card_slot__15TAdPlayerLoadGCFi((int) (1)) == 0) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0xDU;
        } else {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0xEU;
        }
        break;
    case 14:
        if (probe_card_slot__15TAdPlayerLoadGCFi((int) (1)) == 0) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0xDU;
        } else if ((probe_and_check_card__15TAdPlayerLoadGCFi((int) (1)) != 0) || ((u32)get_load_result__15TAdPlayerLoadGCFv((int) (1)) != 0xFFFFFF83U)) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0xFU;
        }
        break;
    case 15:
        if (probe_card_slot__15TAdPlayerLoadGCFi((int) (1)) == 0) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0xDU;
        } else if ((probe_and_check_card__15TAdPlayerLoadGCFi((int) (1)) != 0) || ((u32)get_load_result__15TAdPlayerLoadGCFv((int) (1)) != 0xFFFFFF21U)) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0x10U;
        }
    case 16:
        if (probe_card_slot__15TAdPlayerLoadGCFi((int) (1)) == 0) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0xDU;
        } else if (probe_and_check_card__15TAdPlayerLoadGCFi((int) (1)) != 0) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0x11U;
        }
        break;
    case 17:
        if (probe_card_slot__15TAdPlayerLoadGCFi((int) (1)) == 0) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0xDU;
        } else if (check_memcard_status__15TAdPlayerLoadGCFi((int) (1)) == 0) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0x12U;
        }
        break;
    case 18:
        if (probe_card_slot__15TAdPlayerLoadGCFi((int) (1)) == 0) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0xDU;
        } else if ((u32)find_card_file__15TAdPlayerLoadGCFiPv((int) (1), (void *) (lbl_804C88C0)) != 0xFFFFFF41U) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0x13U;
        }
        break;
    case 19:
        if (probe_card_slot__15TAdPlayerLoadGCFi((int) (1)) == 0) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0xDU;
        } else if ((find_card_file__15TAdPlayerLoadGCFiPv((int) (1), (void *) (lbl_804C88C0)) == 0) && (get_instance__15TAdPlayerLoadGCFv() == 0)) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0x14U;
        }
        break;
    case 20:
        if (probe_card_slot__15TAdPlayerLoadGCFi((int) (1)) == 0) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0xDU;
        } else if ((u32)find_card_file__15TAdPlayerLoadGCFiPv((int) (1), (void *) (lbl_804C8914)) != 0xFFFFFF41U) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0x15U;
        }
        break;
    case 21:
        if (probe_card_slot__15TAdPlayerLoadGCFi((int) (1)) == 0) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0xDU;
        } else if ((find_card_file__15TAdPlayerLoadGCFiPv((int) (1), (void *) (lbl_804C88C0)) == 0) && ((u32)check_system_load_result__23TAdSinglePlyChrSelectGCFv() != 0xFFFFFF05U)) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0x16U;
        }
        break;
    case 22:
        if (probe_card_slot__15TAdPlayerLoadGCFi((int) (1)) == 0) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0xDU;
        } else if (get_instance__15TAdPlayerLoadGCFv() == 0) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0x17U;
        }
        break;
    case 23:
        if (probe_card_slot__15TAdPlayerLoadGCFi((int) (1)) == 0) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0xDU;
        } else if (TAdPlayerLoadGC__sub_801FD814() != 1) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0x18U;
        }
        break;
    case 24:
        if (probe_card_slot__15TAdPlayerLoadGCFi((int) (1)) == 0) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0xDU;
        } else if (TAdPlayerLoadGC__sub_801FD814() != 5) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0x19U;
        }
        break;
    case 25:
        if (probe_card_slot__15TAdPlayerLoadGCFi((int) (1)) == 0) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0xDU;
        }
        break;
    }
    if (fn_802D6BDC() != 0) {
        set_state__15TAdPlayerLoadGCFi((int) (0));
        M2C_FIELD(arg0, u32 *, 0x1C) = 0U;
    }
}

}
TAdPlayerLoadGC::~TAdPlayerLoadGC() {}
extern "C" {
void *__ct__15TAdPlayerLoadGCFv(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = (M2C_UNK *)__vt__15TAdPlayerLoadGC;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3F48;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    M2C_FIELD(arg0, void **, 0x20) = arg2;
    set_state__15TAdPlayerLoadGCFi(0);
    return arg0;
}

    extern int lbl_805D63D0;
int fn_802D6BDC(void) {  return lbl_805D63D0; }

    extern int lbl_805D6AA0;
void fn_802D6BE4(int a0) { lbl_805D6AA0 = a0; }

}

#include "pso/TObject.h"
class TAdSubPlyItemGC : public TObject {
public:
    virtual void vtable_key_TAdSubPlyItemGC();
    virtual ~TAdSubPlyItemGC();
};

#include "types.h"

struct Vec2_802D6E7C { f32 x, y; };

struct Self_802D6E7C {
    u8 pad[0x41C];
    s32 ids[4];
    u32 alpha[4];
    s32 flags[4];
    Vec2_802D6E7C base[4];
    Vec2_802D6E7C pos[4];
};

struct Item_802D6BEC {
    u8 pad0[0x20];
    char names[4][0xFF];
    s32 ids[4];
    u32 alpha[4];
    s32 flags[4];
    Vec2_802D6E7C base[4];
    Vec2_802D6E7C pos[4];
};
struct Entry_802D6DAC { s32 idx; const char *str; s32 id; Vec2_802D6E7C pos; };
extern "C" {
s32 get_state_flag__9TMainTaskFv();
void render_status_line__15TAdSubPlyItemGCFPvi(const char *, u32, f32, f32, f32);
extern const f32 lbl_805DE7C0;
extern const f32 lbl_805DE7C4;
extern const f32 lbl_805DE7C8;
char *strncpy(char *, const char *, u32);
void copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);
void __ct__7TObjectFP7TObject(void *);
extern s32 lbl_805D3F50;
u32 calc_text_width(const char *);
u8 *format_level_text__15TAdSubPlyItemGCFii(s32 arg0, s32 arg1);
extern const f32 lbl_805DE7CC;
extern const f32 lbl_805DE7D0;
void run_task__15TAdSubPlyItemGCFv(Self_802D6E7C *self);
}

extern "C" {
extern u8 lbl_80540FB0[];
extern u8 lbl_804725E0[];
void *memset(void *, int, u32);
s32 sprintf(void *, const void *, ...);
typedef struct S_802D6D88 { u8 pad0[0x43C]; s32 f[4]; } S_802D6D88;

void render__15TAdSubPlyItemGCFv(Item_802D6BEC *self) {
    u32 i;
    if (get_state_flag__9TMainTaskFv() != 1) {
        for (i = 0; i < 4; i++) {
            if (self->flags[i] != 0 && self->names[i][0] != 0) {
                render_status_line__15TAdSubPlyItemGCFPvi(self->names[i], (self->alpha[i] << 24) | 0x111111,
                    lbl_805DE7C0 + self->base[i].x, self->base[i].y, lbl_805DE7C4);
                render_status_line__15TAdSubPlyItemGCFPvi(self->names[i], (self->alpha[i] << 24) | 0xFFFFFF,
                    self->base[i].x, self->base[i].y, lbl_805DE7C8);
                if (self->ids[i] != 0) {
                    render_status_line__15TAdSubPlyItemGCFPvi((const char *)format_level_text__15TAdSubPlyItemGCFii((s32)self, self->ids[i]),
                        (self->alpha[i] << 24) | 0x111111, lbl_805DE7C0 + self->pos[i].x, self->pos[i].y, lbl_805DE7C4);
                    render_status_line__15TAdSubPlyItemGCFPvi((const char *)format_level_text__15TAdSubPlyItemGCFii((s32)self, self->ids[i]),
                        (self->alpha[i] << 24) | 0xFFFFFF, self->pos[i].x, self->pos[i].y, lbl_805DE7C8);
                }
            }
        }
    }
}

u8 *format_level_text__15TAdSubPlyItemGCFii(s32 arg0, s32 arg1) {
    memset(lbl_80540FB0, 0, 0x40);
    sprintf(lbl_80540FB0, lbl_804725E0, arg1);
    return lbl_80540FB0;
}

void TAdSubPlyItemGC__sub_802D6D88(S_802D6D88 *arg0) {
    s32 i;
    for (i = 0; i < 4; i++) {
        arg0->f[i] = 0;
    }
}
void set_entry_text__15TAdSubPlyItemGCFPvPv(Item_802D6BEC *self, Entry_802D6DAC *e) {
    s32 i = e->idx;
    strncpy(self->names[i], e->str, 0xFE);
    self->ids[i] = e->id;
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(&self->base[i], &e->pos);
    self->pos[i].x = (lbl_805DE7CC + self->base[i].x) -
                     (f32)calc_text_width((const char *)format_level_text__15TAdSubPlyItemGCFii((s32)self, self->ids[i]));
    self->pos[i].y = lbl_805DE7D0 + self->base[i].y;
    self->alpha[i] = 0;
    self->flags[i] = 1;
}

void run_task__15TAdSubPlyItemGCFv(Self_802D6E7C *self) {
    u32 i;
    for (i = 0; i < 4; i++) {
        self->pos[i].x = (lbl_805DE7CC + self->base[i].x) -
                         (f32)calc_text_width(((const char *(*)(void *, s32))format_level_text__15TAdSubPlyItemGCFii)(self, self->ids[i]));
        self->pos[i].y = lbl_805DE7D0 + self->base[i].y;
        if (self->flags[i] != 0) {
            self->alpha[i] += 0xB;
            self->alpha[i] = (self->alpha[i] > 0xFF) ? 0xFF : self->alpha[i];
        }
    }
}

}

TAdSubPlyItemGC::~TAdSubPlyItemGC() {}

extern "C" {
void __dt__15TAdSubPlyItemGCFv(void);
void render__15TAdSubPlyItemGCFv(Item_802D6BEC *self);
void *__vt__15TAdSubPlyItemGC[6] = {
    0, 0, (void *)__dt__15TAdSubPlyItemGCFv, (void *)run_task__15TAdSubPlyItemGCFv,
    (void *)render__15TAdSubPlyItemGCFv, (void *)render_shadows__7TObjectFv,
};
Item_802D6BEC *__ct__15TAdSubPlyItemGCFv(Item_802D6BEC *self) {
    u32 i;
    __ct__7TObjectFP7TObject(self);
    M2C_FIELD(self, void **, 0x18) = __vt__15TAdSubPlyItemGC;
    M2C_FIELD(self, s32 *, 0) = lbl_805D3F50;
    for (i = 0; i < 4; i++) {
        self->alpha[i] = 0;
        self->flags[i] = 0;
        memset(self->names[i], 0, 0xFF);
        self->ids[i] = 0;
    }
    return self;
}

}
