#include "types.h"

extern "C" {

void TLobby__sub_8013AD8C(void);

int TAdEnterSerialAccessGC__sub_8013ADB0(void);
int TAdEnterSerialAccessGC__sub_80321A24(void);

void TLobby__sub_8013AD8C(void) { TAdEnterSerialAccessGC__sub_8013ADB0(); TAdEnterSerialAccessGC__sub_80321A24(); }

}
