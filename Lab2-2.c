#include <stdio.h>

int main()
{
    int i;// 변수 지정
    int *ptr; // 싱글포인터 변수 지정
    int **dptr; // 더블포인터 변수 지정

    i = 1234; // i에 1234 저장

    printf("[----- [youjunghawn] [2018038096] -----]\n");

    printf("[checking values before ptr = &i] \n");
    printf("value of i == %d\n", i); // i의 값 출력
    printf("address of i == %p\n", &i); // i의 주소 출력
    printf("value of ptr == %p\n", ptr); // ptr의 값, 값이 없으므로 쓰레기 값 출력
    printf("address of ptr == %p\n", &ptr); // ptr의 주소 출력

    ptr = &i; /* ptr is now holding the address of i */

    printf("\n[checking values after ptr = &i] \n");
    printf("value of i == %d\n", i); // i의 값 출력
    printf("address of i == %p\n", &i); // i의 주소 출력
    printf("value of ptr == %p\n", ptr); // ptr의 값 출력 i의 주소를 할당했으므로 i의 주소가 나옴
    printf("address of ptr == %p\n", &ptr); //ptr의 주소 출력
    printf("value of *ptr == %d\n", *ptr); // *ptr의 값 출력 i의 값인 1234 출력

    dptr = &ptr; /* dptr is now holding the address of ptr */

    printf("\n[checking values after dptr = &ptr] \n");
    printf("value of i == %d\n", i);// i의 값 출력
    printf("address of i == %p\n", &i);// i의 주소 출력
    printf("value of ptr == %p\n", ptr);// ptr의 값 출력 i의 주소를 할당했으므로 i의 주소가 나옴
    printf("address of ptr == %p\n", &ptr);//ptr의 주소 출력 i의 포인터 이므로 i의 주소가 나옴
    printf("value of *ptr == %d\n", *ptr);// *ptr의 값 출력 i의 싱글포인터이므로 1234 출력
    printf("value of dptr == %p\n", dptr);// dptr의 값 출력 ptr의 주소이므로 ptr의 주소가 나옴
    printf("address of dptr == %p\n", &dptr);// dptr의 주소 출력
    printf("value of *dptr == %p\n", *dptr);// *dptr의 값 출력 싱글포인터인 ptr의 값이 나온다.
    printf("value of **dptr == %d\n", **dptr);// **dptr 값 출력 i의 더블포인터이므로 i 값 출력 1234

    *ptr = 7777; /* changing the value of *ptr */

    printf("\n[after *ptr = 7777] \n");
    printf("value of i == %d\n", i); //ptr의 값은 i의 값이므로 7777 출력
    printf("value of *ptr == %d\n", *ptr);// *ptr 값 7777 출력
    printf("value of **dptr == %d\n", **dptr);// i의 값이 바뀌었으므로 7777 출력

    **dptr = 8888; /* changing the value of **dptr */

    printf("\n[after **dptr = 8888] \n");
    printf("value of i == %d\n", i); //더블포인터의 값이 바뀌므로 8888 출력
    printf("value of *ptr == %d\n", *ptr);// i 값이 바뀌므로 8888
    printf("value of **dptr == %d\n", **dptr);// **dptr의 값 8888 출력

    return 0;
}
