#include "pso/item/TItemEffCane.h"
#include "pso/TObject.h"

extern "C" {

void create_item_eff_cane__10TObjPlayerFiUiii(TObject* parent, TItem* item,
                                           s32 attachment, s32 effect_id) {
    if (parent != NULL && item != NULL &&
        ((TObject *)item)->all_parents_unqueued_for_destruction() != 0) {
        new TItemEffCane(parent, item, attachment, effect_id);
    }
}

void spawn_cane_effect__10TObjPlayerFiUii(TObject* parent, TItem* item, s32 attachment) {
    if (parent != NULL && item != NULL &&
        ((TObject *)item)->all_parents_unqueued_for_destruction() != 0) {
        new TItemEffCane(parent, item, attachment, 0x1BD);
    }
}

void spawn_cane_effects__10TObjPlayerFiUiii(TObject* parent, TItem* item,
                                         s32 first_attachment, s32 second_attachment) {
    if (parent != NULL && item != NULL &&
        ((TObject *)item)->all_parents_unqueued_for_destruction() != 0) {
        new TItemEffCane(parent, item, first_attachment, 0x1BD);
        new TItemEffCane(parent, item, second_attachment, 0x1BD);
    }
}
}
