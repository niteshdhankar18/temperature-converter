#include <stdio.h>
void celciustofahrenhiet(){
  float farnhiet, celcius;
    printf("enter temp in celciust ");
    scanf("%f",&celcius);
    farnhiet = (9.0*celcius)/5.0+32.0;
    printf("celcius to fahrenhiet for %.2f is %.2f\n",celcius,farnhiet);
}
// void fahrenhiettocelcius(float);
void fahrenhiettocelcius(){
float farnhiet, celcius;
    printf("enter temp in fahrenhiet ");
    scanf("%f",&farnhiet);
    celcius = (farnhiet-32.0)*5.0/9.0;
    printf("fahrenhiet to celcius for %.2f is %.2f\n",farnhiet , celcius);
}
// void  celciustofahrenhiet(float);

int main() {
    int choice;
    printf("1. Convert Celsius to Fahrenheit\n");
    printf("1. Convert Fahrenheit to Celsius\n");
    printf("enter choice 1 or 2 :");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        celciustofahrenhiet();
        break;
    case 2:
    fahrenhiettocelcius();
    break;
    default:
        printf("invalid choice!");
        break;
    }
   
    return 0;
}