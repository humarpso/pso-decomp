#ifndef PSO_TOBJITEMOKWINDOW_H
#define PSO_TOBJITEMOKWINDOW_H

#include "pso/TObject.h"
#include "types.h"

class TObjItemOKWindow : public TObject {
public:
    u8 _pad1C[0x40];
 void* m_5c;
 void* m_60;
 void* m_64;
public:
    virtual ~TObjItemOKWindow();
};

#endif
