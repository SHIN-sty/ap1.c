# ap1.c
homework#3
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int list[5];// element 5개인 integer를 저장할수있는 리스트형 배열 선언
    int *plist[5] = {NULL,}; //plist가 담고있는 integer형 포인터를 NULL로 초기화
    
    plist[0] = (int *)malloc(sizeof(int));
    // plist[0]번째에 malloc을 통해서 integer만큼의 사이즈 4bytes를 heap영역에서 받아서
    // plist[0]에 주소를 넘겨준다
    list[0] = 1;
    list[1] = 100;

    *plist[0] = 200;

    printf("value of list[0] = %d\n", list[0]);
    printf("address of list[0]       = %p\n", &list[0]);
    printf("value of list            = %p\n", list);
    printf("address of list (&list)  = %p\n", &list);
    //list라고 하는 배열에 이름자체가 list가 위치하고 있는 곳에 주소가된다.
    //list[0]번째의 주소나 list이름의 값이나 list의 주소나 다 동일하다.
    printf("----------------------------------------\n\n");
    printf("value of list[1]   = %d\n", list[1]);
    printf("address of list[1] = %p\n", &list[1]);
    printf("value of *(list+1) = %d\n", *(list + 1));
    printf("address of list+1  = %p\n", list+1);
    //list+1은 list가 integer형 배열이고 list의 타입이 integer이기 때문에
    //integer = 4bytes list의 첫번째주소값에 4bytes만큼 이동한 곳이 list+1이 된다.

    printf("----------------------------------------\n\n");

    printf("value of *plist[0] = %d\n", *plist[0]);
    printf("&plist[0]          = %p\n", &plist[0]);
    printf("&plist             = %p\n", &plist);
    printf("plist              = %p\n", plist);
    printf("plist[0]           = %p\n", plist[0]);
    printf("plist[1]           = %p\n", plist[1]);
    printf("plist[2]           = %p\n", plist[2]);
    printf("plist[3]           = %p\n", plist[3]);
    printf("plist[4]           = %p\n", plist[4]);
    //배열에서 이름은 "주소"이다 plist[0]의 주소나 plist의 주소가 동일하다.
    //첫번째 plist[0]값만 malloc을 통해서 받았고 나머지값은 NULL로 세팅해서 plist[0]만 실행결과가 이렇게나오고 나머지는 NULL값이 나온다.
    
    printf("신태양\n");
    printf("2017038096\n");
    free(plist[0]);
    
}
