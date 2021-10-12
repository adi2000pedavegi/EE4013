#include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <complex.h>
# include <math.h>

struct Node
{
    double data;
    struct Node *next;
};

//Creating two lists(vectors)
struct Node* createList(struct Node *head, int n,FILE *fin){
    head = (struct Node *)malloc(sizeof(struct Node));
    double val;
    struct Node *newNode, *temp;
    //Getting the first vale of the vector from data to header value
    fscanf(fin,"%lf",&val);
    head->data = val;
    head->next = NULL;
    temp = head;
    //Getting remaining values of the vector data
    for (int i = 1; i < n; i++)
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        double t;
        fscanf(fin,"%lf", &t);
        newNode->data = t;
        newNode->next = NULL;
        temp->next = newNode;
        temp = temp->next;
    }
    //temp = head;
    return head;
}

//Performing inner product of two lists(using two different headers for two different lists)
double innerProduct(struct Node *head1, struct Node *head2){
    double ans = 0;
    struct Node *temp1, *temp2;
    temp1 = head1;
    temp2 = head2;
    while(temp1!=NULL || temp2!=NULL){
        ans = ans + (temp1->data * temp2->data);
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return ans;
}
//Main function
int main ()
{
    struct Node  *head1, *head2;
    double data;
    int n = 13;
    FILE *fin1,*fin2;
	fin1 = fopen("../files/A.dat","r");
    fin2 = fopen("../files/e5.dat","r");
    head1 = createList(head1,n,fin1);
    head2 = createList(head2,n,fin2);
    double ans = innerProduct(head1,head2);
    printf("%lf \n", ans);
	return 0;
}