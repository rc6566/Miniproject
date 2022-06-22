#include<stdio.h>
#include<math.h>
typedef struct complex
{float real;
float imag;}complex; 

complex add(complex n1, complex n2);
complex subt(complex n1, complex n2);
complex mult(complex n1, complex n2);
complex div(complex n1, complex n2);
complex inv(complex n1);
float mod(complex n1);
float arg(complex n1);

int main(){
    complex n1,n2,r1,r2,r3,r4,r6,r8;
    float r9,r0,r5,r7;
    float a,b,c;
    float discriminant;
    printf("Enter values of a,b,c respectively of quadratic equation (aX^2+bX+c):\n");
    scanf("%f%f%f",&a,&b,&c);

    //Find discriminant of the equation
    discriminant=(b*b)-(4*a*c);

    //Find the nature of the discriminant
    if(discriminant>0)
    {n1.real= (-b+sqrt(discriminant))/(2*a);
    n2.real= (-b+sqrt(discriminant))/(2*a);
    
    printf("Two distinct and real roots exists :\n %.2f +0i\n%.2f+0i\n",n1.real,n2.real); }

    else if(discriminant==0)
    {n1.real=n2.real=-b/(2*a);
    printf("Two equal and real roots exists:\n %.2f+0i\n %.2f+0i\n",n1.real,n2.real);}

    else if(discriminant<0)
    {n1.real=n2.real=-b/(2*a);
    n1.imag=n2.imag=sqrt(-discriminant)/(2*a);
    
    printf("Two distinct complex roots exists:\n %.2f+i%.2f\n %.2f-i%.2f\n",n1.real,n1.imag,n2.real,n2.imag);}
    ;
    r1=add(n1,n2);
    r2=subt(n1,n2);
    r3=mult(n1,n2);
    r4=div(n1,n2);
    r5=mod(n1);
    r6=inv(n1);
    r7=mod(n2);
    r8=inv(n2);
    r9=arg(n1);
    r0=arg(n2);

    printf("Addition of Z1 and Z2=%.1f + %.1fi\n ", r1.real,r1.imag);
    printf("Subtraction of Z2 from Z1 =%.1f + %.1fi\n",r2.real,r2.imag);
    printf("Multiplication of Z1 and Z2=%.1f + %.1fi\n ", r3.real,r3.imag);
    printf("Division of Z1 by Z2=%.1f + %.1fi\n ", r4.real,r4.imag);
    printf("Inverse of Z1 =%.1f + %.1fi\n ", r6.real,r6.imag);
    printf("Modulus of Z1=%.1f\n",r5);
    printf("Inverse of Z2 =%.1f + %.1fi\n ", r8.real,r8.imag);
    printf("Modulus of Z2=%.1f\n",r7);
    printf("Arguement of Z1(in radians)=%.1f\n",r9);
    printf("Arguement of Z2(in radians)=%.1f\n",r0);
    return 0;
    }

    // defining functions e.g. addition,subtraction,multiplication etc of complex numbers
    complex add(complex n1, complex n2){
        complex temp;
        temp.real= n1.real + n2.real;
        temp.imag=n1.imag + n2.imag;
        return(temp);
    }

    complex subt(complex n1, complex n2){
        complex temp;
        temp.real= n1.real - n2.real;
        temp.imag=n1.imag - n2.imag;
        return(temp);
    }
    complex mult(complex n1, complex n2){
        complex temp;
        temp.real= n1.real*n2.real + n1.imag*n2.imag;
        temp.imag=n1.imag*n2.real + n1.real*n2.imag;
        return(temp);
    }

    complex div(complex n1, complex n2){
        complex temp;
        temp.real= (n1.real*n2.real - n1.imag*n2.imag)/(n2.real*n2.real+n2.imag*n2.imag);

        temp.imag=(n1.imag*n2.real - n1.real*n2.imag)/(n2.real*n2.real+n2.imag*n2.imag);
        return(temp);
    }
    float mod(complex n1)
    {
        float temp1,temp2,squroot;
        temp1=n1.real*n1.real;
        temp2=n1.imag*n1.imag;
        squroot= sqrt(temp1 + temp2);
        return(squroot);

    }

    complex inv(complex n1)
    {
        complex temp;
        temp.real=(n1.real)/(n1.real*n1.real + n1.imag*n1.imag);
        temp.imag=-(n1.imag)/(n1.real*n1.real + n1.imag*n1.imag);
        return(temp);
    }

    float arg(complex n1)
    { complex temp;
    float argue;
    temp.real=n1.real;
    temp.imag=n1.imag;
    argue= atan2(temp.imag,temp.real);
    return argue;}
