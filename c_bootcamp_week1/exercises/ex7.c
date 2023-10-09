int main(){
    float fahrenheit;
    printf("What is the temp in fahrenheit: ");
    scanf("%f", &fahrenheit);
    float celcius = (fahrenheit - 32) * 5 / 9;
    printf("Celcius conversion = %.2f\n", celcius);
    return 0;
}