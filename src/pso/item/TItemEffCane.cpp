#include "pso/item/TItemEffCane.h"
#include "pso/boss/TBoss4Type2.h"
#include "pso/misc/TNowLoading.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
void queue_destruction__7TObjectFv(void*);
void disallow_rendering__7TObjectFv(void*);
TItem* find_item_by_id(s32 item_id);
s8 TObjPlayer__sub_80102C30(TItem* item);
u32 test_flags_1b8__11TItemWeaponFUl(TItem* item, u32 flags);
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
        test_flags_1b8__11TItemWeaponFUl(item, 0x10) == 0 || effect == NULL) {
        queue_destruction__7TObjectFv(this);
        return;
    }
    ((TObjPlayer *)item)->draw_icon((s32)attachment_index, (s32)position);
    ((TNowLoading *)effect)->copy_pos(position);
}

TItemEffCane::~TItemEffCane() {
    TBoss4Type2::request_destroy((u32)effect);
}

TItemEffCane::TItemEffCane(TObject* parent, TItem* item, s32 attachment, s32 effect_id)
    : TObject(parent) {
    f32 position[3];
    m_name = TItemEffCane__class_name;
    item_id = ((TObjPlayer *)item)->get_field_d8();
    attachment_index = attachment;
    ((TObjPlayer *)item)->draw_icon((s32)attachment_index, (s32)position);
    if (effect_id != -1) {
        effect = create_particle_emitter(position, effect_id);
    } else {
        effect = NULL;
    }
    disallow_rendering__7TObjectFv(this);
}
