//
//  main.c
//  Study_C
//
//  Created by YU CHAN HWANG on 2022/10/24.
//


/*
//02-1 문제1 : 본인의 이름 출력
#include <stdio.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    printf("홍길동\n홍 길 동\n홍  길  동\n");
    return 0;
}
*/


/*
//02-1 문제2 : 본인의 이름, 주소, 전화번호 출력
#include <stdio.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    printf("이름 : 홍길동\n");
    printf("주소 : 서울\n");
    printf("전화번호 : 010-2222-3333\n");
    return 0;
}
*/

/*
//02-2 문제1 : 예제를 작성해보자. 단, 출력되는 숫자들은 %d를 사용한다.
#include <stdio.h>
int main(){
    printf("제 이름은 홍길동입니다. \n");
    printf("제 나이는 %d살이고요\n",20);
    printf("제가 사는 곳의 번지수는 %d-%d입니다\n.", 123,456);
    return 0;
}
*/

/*
//02-2 문제2 : %d를 사용해 수식을 출력해보자.
#include <stdio.h>

int main(){
    
    printf("%dX%d=%d\n",4,5,4*5);
    printf("%dX%d=%d\n",7,9,7*9);
    return 0;
}
*/

//03-1[scanf 함수의 활용]

//03-1 문제1 : 사용자로부터 두 개의 정수를 입력 받아서 두 수의 뺄셈과 곱셈의 결과를 출력하는 프로그램을 작성하시오.
/*
#include <stdio.h>

int main(){
    int n1=0, n2=0;
    
    scanf("%d %d",&n1,&n2);
    
    printf("%d-%d=%d\n",n1,n2,n1-n2);
    printf("%d*%d=%d\n",n1,n2,n1*n2);
    
    
    return 0;
}
*/


/*
//03-1 문제2 : 사용자로부터 세 개의 정수 num1, num2, num3를 순서대로 입력 받은 후에, 다음 연산의 결과를 출력하는 프로그램을 작성해보자.
#include <stdio.h>
int main(){
    
    int num1=0, num2=0, num3=0;
    scanf("%d %d %d",&num1, &num2, &num3);
    printf("%dx%d+%d=%d\n", num1,num2, num3,num1*num2+num3);
    return 0;
}
*/

/*
//03-1 문제3 : 하나의 정수를 입력 받아서, 그 수의 제곱의 결과를 출력하는 프로그램을 작성해보자. 예를 들어서 5가 입력되면 25가 출력된다.
#include <stdio.h>
int main(){
    int n=0;
    scanf("%d",&n);
    printf("%d\n",n*n);
    
    
    return 0;
}
*/


/*
//03-1 문제4 : 입력 받은 두 정수를 나누었을 때 얻게 되는 몫과 나머지를 출력하는 프로그램을 작성해보자. 예를 들어 7과 2가 입력되면 몫으로 3, 나머지로 1이 출력되어야 한다.
#include <stdio.h>

int main(){
    int n1, n2;
    scanf("%d %d",&n1, &n2);
    
    printf("몫 : %d, 나머지 : %d \n", n1/n2, n1%n2);
    return 0;
}
*/

/*
//03-1 문제5 : 입력 받은 세 개의 정수 num1, num2, num3를 대상으로 다음 연산의 결과를 출력하는 프로그램을 작성해보자/
#include <stdio.h>

int main(){
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("(%d-%d)(%d+%d)(%d%%%d) = %d \n", num1,num2, num2, num3,num3, num1, (num1-num2)*(num2+num3)*(num3%num1) );
    return 0;
}
*/






