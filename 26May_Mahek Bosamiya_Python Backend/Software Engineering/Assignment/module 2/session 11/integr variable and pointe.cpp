#include<stdio.h>

int main()
{
    int likes;
    int *ptrLikes;

    likes = 500;

    ptrLikes = &likes;

    printf("Likes = %d\n", likes);
    printf("Value using Pointer = %d\n", *ptrLikes);
    printf("Address = %p", ptrLikes);

    return 0;
}
