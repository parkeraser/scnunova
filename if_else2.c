//사용자로부터 두개의 정수를 입력받아서 정수간의 나눗셈 실행
//나눗셈을 하기전에 분모가 0 인지를 if else문을 이용하여 검사

#include <stdio.h>

int main(void) {
    int n, d, result;
    printf("분자와 분모를 입력하시오: ");
    scanf("%d %d",&n,&d);

    if(d==0) {
        printf("0으로 나눌 수는 없습니다.");    //분모가 0이될수 없으니 오류처리한것이다.
    }
    else {
        result = n/d;
    printf("결과는 %d입니다. \n", result);   }

    return 0;
}