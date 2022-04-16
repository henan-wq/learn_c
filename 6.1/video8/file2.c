//  file2.c
#include <stdio.h>

int main()
{
    printf("%f\n", 12/0);

    return 0;
}
/*
8$ gcc file2.c
file2.c: In function ‘main’:
file2.c:6:22: warning: division by zero [-Wdiv-by-zero]
     printf("%f\n", 12/0);
                      ^
file2.c:6:14: warning: format ‘%f’ expects argument of type ‘double’, but argument 2 has type ‘int’ [-Wformat=]
     printf("%f\n", 12/0);
             ~^     ~~~~
             %d
*/
