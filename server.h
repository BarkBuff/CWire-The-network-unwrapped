#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef unsigned char int8;
typedef unsigned short int int16;
typedef unsigned int int32;
typedef unsigned long long int int64;

#define public  __attribute__((visibility("default")))
#define private __attribute__((visibility("hidden"))) static

#define $c (char *)
#define $i (int)
#define $1 (int8 *)
#define $2 (int16)
#define $4 (int32)
#define $8 (int64)

struct s_server {
    int32 fd;
};
typedef struct s_server server;

int main(void);
public server *tcpserver(int16, callback);