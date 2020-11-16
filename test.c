
#include <stdio.h>

int     ft_strcpy(char *src, char *dst)
{
    int     i;

    i = 0;
    while (src[i])
    {
        dst[i] = src[i];
        i++;
    }

    dst[i] = '\0';

    return (0);
}

int     main(void)
{
    char *src = "Hello there";
    char *dst = "            ";

    ft_strcpy(src, dst);

    printf("%s\n", dst);

    return (0);
}