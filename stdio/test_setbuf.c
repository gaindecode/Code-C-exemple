#include <stdio.h>

int
main(void)
{
    char buf [BUFSIZ];
    setbuf(stdin, buf);
    printf("Hello, world!\n");
    printf("%s",buf);
	return(0);
}
