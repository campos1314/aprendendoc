#include <stdio.h>

int main()
{
    int notaum, notadois, notatres, mediapond;
    scanf("%d %d %d", &notaum, &notadois, &notatres);
    mediapond = (notaum*2+notadois*3+notatres*5)/10;
    printf("%d", mediapond);
}
