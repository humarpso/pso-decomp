#include "pso/item/TItemEffCane.h"

extern "C" {
void request_destroy__11TBoss4Type2FUl(void*);
void queue_destruction__7TObjectFv(void*);
void disallow_rendering__7TObjectFv(void*);
TItem* find_item_by_id(s32 item_id);
s8 TObjPlayer__sub_80102C30(TItem* item);
u32 test_flags_1b8__10TObjPlayerFUl(TItem* item, u32 flags);
s32 draw_icon__10TObjPlayerFll(TItem* item, s32 attachment, f32* position);
void copy_pos__11TNowLoadingFPv(void* effect, const f32* position);
s32 get_field_d8__10TObjPlayerFv(TItem* item);
void* create_particle_emitter(const f32* position, s32 effect_id);
extern const char* TItemEffCane__class_name;
}

void TItemEffCane::run_task() {
    f32 position[3];
    TItem* item = find_item_by_id(item_id);
    if (item == NULL) {
        queue_destruction__7TObjectFv(this);
        return;
    }
    if (TObjPlayer__sub_80102C30(item) != 2 ||
        test_flags_1b8__10TObjPlayerFUl(item, 0x10) == 0 || effect == NULL) {
        queue_destruction__7TObjectFv(this);
        return;
    }
    draw_icon__10TObjPlayerFll(item, attachment_index, position);
    copy_pos__11TNowLoadingFPv(effect, position);
}

TItemEffCane::~TItemEffCane() {
    request_destroy__11TBoss4Type2FUl(effect);
}

TItemEffCane::TItemEffCane(TObject* parent, TItem* item, s32 attachment, s32 effect_id)
    : TObject(parent) {
    f32 position[3];
    m_name = TItemEffCane__class_name;
    item_id = get_field_d8__10TObjPlayerFv(item);
    attachment_index = attachment;
    draw_icon__10TObjPlayerFll(item, attachment_index, position);
    if (effect_id != -1) {
        effect = create_particle_emitter(position, effect_id);
    } else {
        effect = NULL;
    }
    disallow_rendering__7TObjectFv(this);
}
