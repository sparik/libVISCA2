//
// Created by sparik on 5/21/19.
//

#ifndef LIBVISCA_LIBVISCA_PCC_H
#define LIBVISCA_LIBVISCA_PCC_H

#include <stdint.h>
#include "libvisca.h"


class pcc_data {
public:
    void write(unsigned char* ptr, int len) {}
};

typedef struct _VISCA_interface_pcc_t : VISCAInterface_t
{
    pcc_data pcc;


} VISCAInterface_pcc_t;

#endif //LIBVISCA_LIBVISCA_PCC_H
