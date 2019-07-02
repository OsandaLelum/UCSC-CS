#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
}node;
int flag=0;
void make(int a,int b);
node *createnode(int data);
bool search(struct Node* node,int value); 
bool searchreference(struct Node* node,int value); 
bool number_of(struct Node* node);
int data,count=0;
node *root;
node *anodereference;

node *createnode(int data)
{
    node *newnode=(node*)malloc(sizeof(node));
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return(newnode); 
}

void make(int a,int b)
{
    node *areference,*breference;
    int j;
    flag =0;
    search(root,a);
    if(root==NULL)
    {
        root = createnode(a);
        areference=root;
        
    }
    else if(flag==0){
     areference = createnode(a);
    }
    else  {
    	searchreference(root,a);
    	areference=anodereference;
        j=j+1;
    }
    flag=0;
	search(root,b);
    if(flag==0) {
        breference=createnode(b);
    }
    else
    {
        j=j+1;
    }
    if(j==2)
    {
        printf("Node already created..!");
    }
    if(areference->left==NULL){
        areference->left=breference;
    }
    else if(areference->right==NULL){
        areference->right=breference;
    }


}

bool searchreference(struct Node* node,int value) 
{ 
    if(node == NULL) 
      {
          return false; 
      }  
  
    searchreference(node->left,value); 
    if(node->data==value){
    	anodereference =node;
        return true;
    }
  
    searchreference(node->right,value); 
} 

bool search(struct Node* node,int value) 
{ 
    if(node == NULL) 
      {
          return false; 
      }  
  
    search(node->left,value); 
    if(node->data==value){
    	flag=1;
        return true;
    }
  
    search(node->right,value); 
} 

bool number_of(struct Node* node) 
{ 
    if(node == NULL) 
      {
          return false; 
      }  
  
    number_of(node->left); 
    if(node->left!=NULL){
        count++;
    }
    if(node->right!=NULL){
        count++;
    }
  
    number_of(node->right); 
} 

int main()
{
    int n,a,b;
    scanf("%d",&n);
    for(int i=0;i<n-1;i++)
    {
        scanf("%d %d" ,&a ,&b);
        make(a,b);
    }
    number_of(root);
    printf("%d",count+n);   
}






