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

int main ()
{
    struct Node *newNode, *temp1, *temp2, *head1, *head2;
    double data;
    int n;
    head1 = (struct Node *)malloc(sizeof(struct Node));
    head2 = (struct Node *)malloc(sizeof(struct Node));
    if (head1 == NULL || head2==NULL){
        exit(0);
    }
    n = 13;
    FILE *fin1,*fin2;
	fin1 = fopen("../files/A.dat","r");
    fin2 = fopen("../files/e5.dat","r");

    fscanf(fin1,"%lf",&data);
    head1->data = data;
    head1->next = NULL;
    fscanf(fin2,"%lf",&data);
    head2->data = data;
    head2->next = NULL;

    temp1 = head1;
    temp2 = head2;
    for (int i = 1; i < n; i++)
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        double val;
        fscanf(fin1,"%lf", &val);
        newNode->data = val;
        newNode->next = NULL;
        temp1->next = newNode;
        temp1 = temp1->next;

        newNode = (struct Node *)malloc(sizeof(struct Node));
        fscanf(fin2,"%lf", &val);
        newNode->data = val;
        newNode->next = NULL;
        temp2->next = newNode;
        temp2 = temp2->next;
    }
    temp1 = head1;
    temp2 = head2;
    double ans = 0;
    while(temp1!=NULL || temp2!=NULL){
        ans = ans + (temp1->data * temp2->data);
        temp1 = temp1->next;
        temp2 = temp2->next; 
    }
    printf("%lf \n",ans);

	return 0;
}