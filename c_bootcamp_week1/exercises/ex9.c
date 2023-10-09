#include <stdio.h>

int main(){
    long long int speed = 299792458;
    long long int days;
    long long int distance;
    printf("How many days: ");
    scanf("%lld", &days);
    distance = (days*24*60*60)*speed;
    printf("The distance travelled in metres is: %lld\n", distance);
    return 0;
}