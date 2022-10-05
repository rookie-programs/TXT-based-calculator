//A TXT based claculator which can perform operations using only 2 numbers.

#include<stdio.h>

int main() {
//categories according to operations
    float a, a2 , sum;
    float s, s2 , total;
    float m, m2 , answer;
    float d, d2 , result;

    char category;

//TODO : make public functions in another file/use user defined functions.

    printf("Max digits to be used to perform operations is 2.\n");
    printf("Here is the list of operations:\n");
    printf("Add(A) , Substraction(S) , Multiplication(M) , Division(D)\n");
    printf("Choose what you want to perform:\n");
    scanf("%c" , &category); 

    if (category == 'A') {
        printf("Enter the first no. :\n");
        scanf("%f" , &a);
        printf("Enter the second no. :\n");
        scanf("%f" , &a2);

        sum = a + a2;
        printf("Your sum:\n");
        printf("%.2f" , sum);
    }

    else if (category == 'S') {
        printf("Enter the first no. :\n");
        scanf("%f" , &s);
        printf("Enter the second no. :\n");
        scanf("%f" , &s2);

        total = s - s2;
        printf("Your sum:\n");
        printf("%.2f" , total);

    }

    else if (category == 'M') {
        printf("Enter the first no. :\n");
        scanf("%f" , &m);
        printf("Enter the second no. :\n");
        scanf("%f" , &m2);

        answer =  m * m2;
        printf("Your sum:\n");
        printf("%.2f" , answer);


    }

    else if (category == 'D') {
        printf("Enter the first no. :\n");
        scanf("%f" , &d);
        printf("Enter the second no. :\n");
        scanf("%f" , &d2);

        result =  d / d2;
        printf("Your sum:\n");
        printf("%.2f" , result);


    }    

    return 0;
}

























