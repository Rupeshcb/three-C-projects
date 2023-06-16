#include <stdio.h>
#include <cs50.h>

float average(int length, int array[]);

int main(void)
{
    string s = "This is your subjects average calculator";
    printf("%s\n", s);
    int N = get_int("Numbers of Subjects: ");
    int scores[N];
    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Subject No.%i: ", i+1);
    }
    printf("Average: %f\n", average(N, scores));
}

float average(int length, int array[])
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return (float) sum / (float) length;
}