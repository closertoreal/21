#include <stdio.h>
#include <unistd.h>

int ft_strcmp(char *s1, char *s2)
{
    int r1, r2;
    int i, j, l;
    
    l = 0;
    i = 0;
    j = 0;
    r1 = 0;
    r2 = 0;
    while (s1[i++] != '\0')
    {
        r1 = r1 + 1;
    }
    while (s2[j++] != '\0')
    {
        r2 = r2 + 1;
    }
    while (s1[l] != '\0' || s2[l] != '\0')
    {
        if (s1[l] == s2[l])
           l = l + 1;
        else if (r1 == r2)
        if (s1[l] > s2[l])
                return (s1[i] - s2[i]);
            else if (s1[l] < s2[l])
                return (s1[i] - s2[i]);
        }
        else if (r1 > r2 || r1 < r2)
             return (s1[i] - s2[i]);
        else
            return (0);
    }
    return (0);
}


int main(void)
{
    char *s1, *s2;
    s1= "sdfadfsf";
    s2= "sdfwer";
    
    ft_strcmp(s1,s2);
    return(0);
}
