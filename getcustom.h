#ifndef __GETOPT_CUSTOM_H
#define __GETOPT_CUSTOM_H

#include "common.h"

typedef struct con {
    char *url;
    int t;
    int p;
    char *type;
} CON;


int getcustom(int argc, char *argv[], CON *con);

#endif // __GETOPT_CUSTOM_H