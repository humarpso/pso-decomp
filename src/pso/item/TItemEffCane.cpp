#include "pso/item/TItemEffCane.h"

extern "C" {
void request_destroy__11TBoss4Type2FUi(void*);
void queue_destruction__7TObjectFv(void*);
void disallow_rendering__7TObjectFv(void*);
TItem* TLobby__sub_80101AB0(s32 item_id);
s8 TObjPlayer__sub_80102C30(TItem* item);
u32 test_flags_1b8__10TObjPlayerFPvUi(TItem* item, u32 flags);
s32 draw_icon__10TObjPlayerFPvii(TItem* item, s32 attachment, f32* position);
void copy_pos__11TNowLoadingFPvPv(void* effect, const f32* position);
s32 get_field_d8__10TObjPlayerFPv(TItem* item);
void* TBoss4Type2__sub_800874F4(const f32* position, s32 effect_id);
extern const char* lbl_805D2B98;
}

void TItemEffCane::run_task() {
    f32 position[3];
    TItem* item = TLobby__sub_80101AB0(item_id);
    if (item == NULL) {
        queue_destruction__7TObjectFv(this);
        return;
    }
    if (TObjPlayer__sub_80102C30(item) != 2 ||
        test_flags_1b8__10TObjPlayerFPvUi(item, 0x10) == 0 || effect == NULL) {
        queue_destruction__7TObjectFv(this);
        return;
    }
    draw_icon__10TObjPlayerFPvii(item, attachment_index, position);
    copy_pos__11TNowLoadingFPvPv(effect, position);
}

TItemEffCane::~TItemEffCane() {
    request_destroy__11TBoss4Type2FUi(effect);
}

TItemEffCane::TItemEffCane(TObject* parent, TItem* item, s32 attachment, s32 effect_id)
    : TObject(parent) {
    f32 position[3];
    m_name = lbl_805D2B98;
    item_id = get_field_d8__10TObjPlayerFPv(item);
    attachment_index = attachment;
    draw_icon__10TObjPlayerFPvii(item, attachment_index, position);
    if (effect_id != -1) {
        effect = TBoss4Type2__sub_800874F4(position, effect_id);
    } else {
        effect = NULL;
    }
    disallow_rendering__7TObjectFv(this);
}
