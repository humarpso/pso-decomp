#include "types.h"
#include "pso/misc/TShopEquipmentSellWindow.h"
#include "pso/misc/TWindowCost.h"
#include "pso/boss/TBoss7Crawfish.h"

extern "C" {

void apply_poison_status__14TBoss7CrawfishFv(void);
void apply_paralysis__14TBoss7CrawfishFv(void);
void apply_slow_status__14TBoss7CrawfishFv(void);
void apply_confusion_status__14TBoss7CrawfishFv(void);
void apply_movement_ailment__14TBoss7CrawfishFl(void);
void apply_shock_status__14TBoss7CrawfishFv(void);
void clear_harmful_statuses__14TBoss7CrawfishFv(void);
int initialize_subwindow__9TWindowDDFv(void*);
int update_window_entry_list(void*, void*);
int fn_80269078(void*);

int TShopEquipmentSellWindow::get_item_count() { return fn_80269078(this); }
void TWindowCost::run_task() { initialize_subwindow__9TWindowDDFv(this); update_window_entry_list(this, (char*)this + 0x24); }

}
