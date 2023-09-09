1  #include <stdlib.h>
2  #include <time.h>
3  #include <stdio.h>
4  /* more headers goes there */
5
6  /* betty style doc for function main goes there */
7  int main(void)
8  {
9          int n;
10
11         srand(time(0));
12         n = rand() - RAND_MAX / 2;
13         /* your code goes there */
14         if (n > 0)
15         printf('' % d is positive\n', n);
16         else if (n < 0)
17         printf(''%d is negative\n'', n);
18         else
19         printf(''%d is zero\n'', n);
20         return (0);
21 }
