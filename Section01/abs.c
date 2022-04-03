//abs 함수는 math.h에 담겨 있다고 책에 나와있는데
//stdlib.h에서도 작동함(...)
//라이브러리 뒤져서 알아보기
#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = -4;
    int b;

    b = abs(a);

    printf("The Absoulte Value of %d is %d\n", a, b);

    return 0;
}
