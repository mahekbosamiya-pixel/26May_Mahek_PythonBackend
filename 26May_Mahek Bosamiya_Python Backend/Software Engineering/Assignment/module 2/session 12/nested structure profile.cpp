#include<stdio.h>

struct Bio
{
    char description[50];
    int age;
};

struct InstaProfile
{
    char username[30];
    int followers;
    struct Bio bio;
};

int main()
{
    struct InstaProfile user = {"mahek", 1500, {"AI Student", 20}};

    printf("Username : %s\n", user.username);
    printf("Followers : %d\n", user.followers);
    printf("Bio : %s\n", user.bio.description);
    printf("Age : %d\n", user.bio.age);

    return 0;
}
