#include <stdio.h>
#include <math.h>

double calculateStandardDeviation(double arr[], int size) {
    double sum = 0.0, mean, variance = 0.0, stddev;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    mean = sum / size;
    for (int i = 0; i < size; i++) {
        variance += pow(arr[i] - mean, 2);
    }
    variance /= size;
    stddev = sqrt(variance);
    return stddev;
}

int main() {
    double numbers[5];
    printf("Enter 5 real numbers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%lf", &numbers[i]);
    }
    double stddev = calculateStandardDeviation(numbers, 5);
    printf("Standard Deviation = %.3f\n", stddev);
    return 0;
}
