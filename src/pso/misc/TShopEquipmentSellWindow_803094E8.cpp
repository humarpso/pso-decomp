#include "types.h"
#include "pso/misc/TShopEquipmentSellWindow.h"
#include "pso/misc/TWindowCost.h"

extern "C" {

f32 get_health__14TBoss7CrawfishFv(void* p);
void set_anim_timer__14TBoss7CrawfishFs(void* p, s16 v);
void TBoss7Crawfish__vt42(void);
void TBoss7Crawfish__vt43(void);
void TBoss7Crawfish__vt44(void);
void TBoss7Crawfish__vt45(void);
void TBoss7Crawfish__vt46(void);
void TBoss7Crawfish__vt47(void);
void TBoss7Crawfish__vt48(void);
int initialize_subwindow__9TWindowDDFv(void*);
int update_window_entry_list(void*, void*);
int fn_80269078(void*);

int TShopEquipmentSellWindow::get_item_count() { return fn_80269078(this); }
void TWindowCost::run_task() { initialize_subwindow__9TWindowDDFv(this); update_window_entry_list(this, (char*)this + 0x24); }

}
