#include <stdio.h>
#include <stdlib.h>

int main()
{
    int list[5];// element 5���� integer�� �����Ҽ��ִ� ����Ʈ�� �迭 ����
    int *plist[5] = {NULL,}; //plist�� ����ִ� integer�� �����͸� NULL�� �ʱ�ȭ
    
    plist[0] = (int *)malloc(sizeof(int));
    // plist[0]��°�� malloc�� ���ؼ� integer��ŭ�� ������ 4bytes�� heap�������� �޾Ƽ�
    // plist[0]�� �ּҸ� �Ѱ��ش�
    list[0] = 1;
    list[1] = 100;

    *plist[0] = 200;

    printf("value of list[0] = %d\n", list[0]);
    printf("address of list[0]       = %p\n", &list[0]);
    printf("value of list            = %p\n", list);
    printf("address of list (&list)  = %p\n", &list);
    //list��� �ϴ� �迭�� �̸���ü�� list�� ��ġ�ϰ� �ִ� ���� �ּҰ��ȴ�.
    //list[0]��°�� �ּҳ� list�̸��� ���̳� list�� �ּҳ� �� �����ϴ�.
    printf("----------------------------------------\n\n");
    printf("value of list[1]   = %d\n", list[1]);
    printf("address of list[1] = %p\n", &list[1]);
    printf("value of *(list+1) = %d\n", *(list + 1));
    printf("address of list+1  = %p\n", list+1);
    //list+1�� list�� integer�� �迭�̰� list�� Ÿ���� integer�̱� ������
    //integer = 4bytes list�� ù��°�ּҰ��� 4bytes��ŭ �̵��� ���� list+1�� �ȴ�.

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
    //�迭���� �̸��� "�ּ�"�̴� plist[0]�� �ּҳ� plist�� �ּҰ� �����ϴ�.
    //ù��° plist[0]���� malloc�� ���ؼ� �޾Ұ� ���������� NULL�� �����ؼ� plist[0]�� �������� �̷��Գ����� �������� NULL���� ���´�.
    
    printf("���¾�\n");
    printf("2017038096\n");
    free(plist[0]);
    
}