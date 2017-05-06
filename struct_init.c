#include "header.h"

/**
 * arsine_init- initializes arsine struct
 * @arsine: arsine struct
 */
void arsine_init(arsine_t *arsine)
{
    arsine->family = AF_INET;
    arsine->shell = SHELL;
    arsine->port = PORT;
    arsine->service = SERVICE;
    arsine->host = IPADDR;
}
