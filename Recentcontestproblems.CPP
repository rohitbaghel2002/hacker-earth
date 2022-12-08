#include <stdio.h>
int main(void)
{
    int t;
    scanf("%d", &t);
    while (t > 0)
    {
        int n;
        scanf("%d ", &n);
        int MAX_LEN = n * 8;
        char str[MAX_LEN];
        // scanf("%[^\n]",str);
        // printf("%s\n",str);
        int i = 0, s = 0, l = 0;
        while (1)
        {
            char as = getchar();
            if (as == '\n' || as == '\0')
                break;
            if (as == 'S')
            {
                s++;
            }
            else if (as == 'L')
            {
                l++;
            }
        }
        printf("%d %d\n", s, l);
        t--;
    }
    return 0;
}