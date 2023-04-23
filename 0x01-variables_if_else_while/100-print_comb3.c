#include <stdio.h>
#include <stdlib.h>

int main()
{
int i ;
int n ;
int m ;
int s ;
for (i= 48 ; i < 58 ; i++ )
{

for  (n = 48 ; n < 58 ; n++)
{
for  (m = 48 ; m < 58 ; m++)
{
for  (s = 48 ; s < 58 ; s++)
{
if ((m+s) > (i+n))
{
putchar(i);
putchar(n);
putchar(m);
putchar (s);

if ((i+n+m+s) < 227 )
}
putchar(',');
putchar(' ');
}
}
}

}
}
}


putchar('\n');
return 0;
}
