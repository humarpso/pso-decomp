#include "types.h"

extern "C" {

    extern int TQuestListVM__quest_data_output_cursor;
int get_data__12TQuestListVMFv(void) {  return TQuestListVM__quest_data_output_cursor; }

    extern int online_quest_dat_buffer;
int get_quest_list_flag__16TQuestListOnlineFv(void) {  return online_quest_dat_buffer; }

}
