#include<stdio.h>
#include<math.h>
int main()
{
    float w,h,b;
    printf("enter weight,height:");
    scanf("%f%f",&w,&h);
    b=w/pow(h,2);
    printf("bmi=%f\n",b);
    if(b<15){
        printf("starvation");
    }
    else if(b>15.1&&b<17.5){
        printf("anorexic");

    }
    else if(b>17.6&&b<18.5){
        printf("underweight");
    }
    else if(b>18.6&&b<24.9){
        printf("ideal");
    }
    else if(b>25&&b<25.9){
        printf("overweight");

    }
    else if(b>30&&b<30.9){
        printf("obese");
    }
    else{
        printf("morbidly obese");
    }
    return 0;


}