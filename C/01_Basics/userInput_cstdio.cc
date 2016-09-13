# include <cstdio>

int main() {
    int i, number;
    double x;
    double sum = 0.0;

    printf("How many numbers do you want to add up: ");
    scanf("%d", &number);          // input an integer

    for (i = 0; i < number; i++) {
        printf("Input next number: ");
        scanf("%lf", &x);      // input a double
        sum += x;
    }


    printf("Final sum: %6.4e.\n", sum);
    return 0;
}



