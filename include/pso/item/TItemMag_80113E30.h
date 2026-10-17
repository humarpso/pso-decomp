#ifndef PSO_ITEM_TITEMMAG_80113E30_H
#define PSO_ITEM_TITEMMAG_80113E30_H

#include "types.h"

extern "C" {
void TItemMag__sub_80113E3C(void *p);
u8 TItemMag__sub_80113E74(void *p);
f32 TItemMag__sub_80113EEC(void *p);
void TItemMag__sub_80114198(u8 *mag, s16 arg1);
}
void mag_feed_add_def(u8 *mag, s16 arg1);
void mag_feed_add_mind(u8 *mag, s16 arg1);
extern "C" {
u8 obj_isState7_324(u8 *arg0);
}

#endif
