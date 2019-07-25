#include <stdio.h>

int     match(char *s1, char *s2)
{
    if (!(*s1) && !(*s2))
        return (1);
    if (*s1 == *s2 && *s1 != '*')
        return (match(s1 + 1, s2 + 1));
    if (!(*s1) && *s2 == '*')
        return (match(s1, s2 + 1));
    if (*s1 == *s2 && *s1 != '*')
        return (match(s1 + 1, s2 + 1));
    if (*s1 && *s2 == '*')
        return (match(s1, s2 + 1) + match(s1 + 1, s2));
    return (0);
}
int main() {
    char s1[] = "что?%$#угодно";
    char s2[] = "*дно";
    char *s3 = "чтsdfa$%$но";
    char *s4 = "*";
    char *s5 = "чтasdfугодно";
    char *s6 = "что*";
    char *s7 = "чтоугодно";
    char *s8 = "***";
    char *s9 = "          чтоasdfгодно";
    char *s10 = "ч*у*****о";
    char *s11 = "чтоугодно";
    char *s12 = "*что*********угодно";
    printf("%s", "1 против ");
    printf("%d", match(s1, s2));
    printf("\n");
    printf("%s", "1 против ");
    printf("%d", match(s3, s4));
    printf("\n");
    printf("%s", "0 против ");
    printf("%d", match(s5, s6));
    printf("\n");
    printf("%s", "1 против ");
    printf("%d", match(s7, s8));
    printf("\n");
    printf("%s", "0 против ");
    printf("%d", match(s9, s10));
    printf("\n");
    printf("%s", "1 против ");
    printf("%d", match(s11, s12));
    printf("\n");
    return (0);
}
