#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    //ft_strjoin
    // char *s1 = "HELLO WORLD!";
    // char *s2 = "hello world!";
    // printf("%s\n", ft_strjoin(s1, s2));

    //ft_strlcat
    // char src[] = " world!";
    // char dest[] = "hello,";
    // size_t n = ft_strlcat(dest, src, 5);
    // printf("sonuç: %zu\n", n);
    // printf("sonuç: %s\n", dest);

    //ft_strchr
    // char str[] = "ayse, zehra, aydogdu";
    // printf("%s\n", ft_strchr(str, ','));

    //ft_strrchr
    // char str[] = "ayse, zehra, aydogdu";
    // printf("%s\n", ft_strrchr(str, ','));

    //ft_memchr
    // char str[] = "ayse, zehra, aydogdu";
    // char ch = ',';
    // size_t len = 16;
    // char *result = ft_memchr(str, ch, len);
    // printf("%s\n", result);
    int arr[] = {1,2,3,4,5};
    int *result = ft_memchr(&arr, 2, 4);
    int i = 0;
    while (result[i])
    {
        printf("%d ", result[i]);
        i++;
    }
    
}
