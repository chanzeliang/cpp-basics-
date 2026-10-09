// #include <iostream>
// using namespace std;

// int main() {
//     int a, b,c;
//     cin>>a>>b;
//     if (0<=a&&b<=1000) {
//     c=a+b;
//     }
//     cout<<c<<endl;
// }
// // 64 位输出请用 printf("%lld")


#include<stdio.h>
#include<stdlib.h>
#define OK 1
#define ERROR 0
#define LEN sizeof(struct LNode)

struct LNode{
    int data;               // 数据域
    struct LNode *next;     // 指针域
};

typedef struct LNode LNode, *LinkList;

// 初始化一个带头结点的链表
LinkList InitLNode(void){
    LinkList head;
    head = (LinkList)malloc(LEN);
    if(!head){
        printf("内存空间申请失败！\n");
        exit(ERROR);
    }
    head->data = 0;         // 头结点数据域存放表长
    head->next = NULL;
    return head;
}

// 创建一个链表
int CreatList(LinkList head){
    LinkList pleft, pright;
    pleft = head;
    pright = (LinkList)malloc(LEN);
    printf("请按照递增的顺序向链表中赋值:(输入-1认为输入终止)\n");
    scanf("%d", &pright->data);

    while(pright->data != -1){
        head->data++;       // 表长加1
        pleft->next = pright;
        pleft = pright;
        pright = (LinkList)malloc(LEN);
        scanf("%d", &pright->data);
    }

    pleft->next = NULL;
    free(pright);           // 释放最后一个未链入的结点
    return OK;
}

// 输出链表
int PrintLNode(LinkList head){
    if(!head->next){
        printf("空链表！\n");
        return ERROR;
    }

    LinkList p = head->next;
    printf("\n结果如下:\n");
    while(p){
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
    return OK;
}

// 删除链表中指定元素
int delLNode(LinkList head, int num){
    if(!head->next){
        printf("空链表！\n");
        return ERROR;
    }

    LinkList pleft = head;          // 前驱
    LinkList pright = head->next;   // 当前

    while(pright != NULL && pright->data != num){
        pleft = pright;
        pright = pright->next;
    }

    if(pright != NULL && pright->data == num){
        pleft->next = pright->next;
        free(pright);
        head->data--;
    }else{
        printf("\n没有找到该数据!\n");
    }

    return OK;
}

// 删除介于两数之间（不包括这两个数）的元素
int delLink(LinkList head, float mink, float maxk){
    LinkList p = head;          // 前驱结点
    LinkList q = head->next;    // 当前结点

    while(q != NULL){
        if(q->data > mink && q->data < maxk){
            // 满足条件，删除q
            p->next = q->next;
            free(q);
            head->data--;       // 表长减1
            q = p->next;        // q指向新的当前结点
        }else{
            // 不满足条件，两个指针同时后移
            p = q;
            q = q->next;
        }
    }

    return OK;
}

int main(){
    LinkList head;
    float mink, maxk;

    head = InitLNode();
    CreatList(head);
    PrintLNode(head);

    printf("\n想删除介于哪两者之间的数据?\n");
    scanf("%f%f", &mink, &maxk);

    delLink(head, mink, maxk);
    PrintLNode(head);

    return 0;
}