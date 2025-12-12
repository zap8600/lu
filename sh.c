#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#define BUFSIZE 1024

char* read_line() {
    size_t bufsize = BUFSIZE;
    char* buf = (char*)malloc(bufsize * sizeof(char));
    size_t pos = 0;
    int c;
    while(1) {
        c = getchar();
        if((c == EOF || c == '\n')) {
            buf[pos] = '\0';
            return pos;
        } else {
            buf[pos++] = (char)c;
        }
        if(pos >= bufsize) {
            bufsize += BUFSIZE;
            buf = (char*)realloc(buf, bufsize);
        }
    }
}

int main() {
    setbuf(stdout, NULL);
    setbuf(stderr, NULL);
}