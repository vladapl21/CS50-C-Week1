#include <stdio.h>
#include <cs50.h>


void thanks(int n)
{
    printf("thanks for using our services and being %i years old\n", n);
}


int main(void)
{
    string answer = get_string("What's your name? ");
    string lastname = "plyushchenko";
    printf("hello, %s %s\n", answer, lastname);
    int age = get_int("What's your age? ");

    if (age > 17)
    {
        printf("%i is old\n", age);
    }
    else
    {
        printf("%i is young\n", age);
    }

    thanks(age);

}
