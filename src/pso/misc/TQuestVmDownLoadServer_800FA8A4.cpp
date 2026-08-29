#include "types.h"

extern "C" {

int get_serial_access__22TQuestVmDownLoadServerFPv(void* p);
int poll_serial_access__22TQuestVmDownLoadServerFPv(void* p);
int update__22TQuestVmDownLoadServerFPv(void* p);
int TAdEnterSerialAccessGC__sub_8032182C(void*);
int update_all__8TFogCtrlFv(void*);

int get_serial_access__22TQuestVmDownLoadServerFPv(void* p) { return TAdEnterSerialAccessGC__sub_8032182C(p); }
int poll_serial_access__22TQuestVmDownLoadServerFPv(void* p) { return TAdEnterSerialAccessGC__sub_8032182C(p); }
int update__22TQuestVmDownLoadServerFPv(void* p) { return update_all__8TFogCtrlFv(p); }

}
