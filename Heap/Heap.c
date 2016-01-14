
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define lchild(x) 2*x+1
#define rchild(x) 2*x+2
#define parent(x) x/2

typedef struct node{
	int data;
} node;

typedef struct maxHeap{
	int size;
	node *elem;
} maxHeap;

// initate the maxHeap
/*maxHeap initmaxHeap(){
	maxHeap hp;
	hp.size=0;
	return hp;
}*/

void insertnode(maxHeap *hp, int data){
	//allocate space
	if(hp->size){
		hp->elem =realloc(hp->elem, (hp->size+1)*sizeof(node));
	}
	else{
		hp->elem=malloc(sizeof(node));
	}
	//initializing the node with value
	node nd;
	nd.data=data;
	//positioning the node at the right position in the max heap
	int i=(hp->size)++;
	while(i&&nd.data>hp->elem[parent(i)].data){
		hp->elem[i]=hp->elem[parent(i)];
		i=parent(i);
	}
}
void swap(node *n1, node *n2){
	node temp=*n1;
	*n1=*n2;
	*n2=temp;
}

void heapify(maxHeap *hp, int i){
	int largest;
	if(lchild(i) < hp->size && hp->elem[lchild(i)].data > hp->elem[i].data)
		largest=lchild(i);
	else 
		largest=i;
    if(rchild(i) < hp->size && hp->elem[rchild(i)].data > hp->elem[largest].data) {
        largest = rchild(i) ;
    }
    if(largest != i) {
        swap(&(hp->elem[i]), &(hp->elem[largest])) ;
        heapify(hp, largest) ;
    }
}

void deletenode(maxHeap *hp){
	if(hp->size){
		printf("delete node %d\n\n",hp->elem[0].data);
		hp->elem[0]=hp->elem[--(hp->size)];
		hp->elem=realloc(hp->elem,hp->size*sizeof(node));
		heapify(hp,0);
	}
	else{
		printf("\n Max heap is empty !\n");
		free(hp->elem);
	}
}

void buildmaxHeap(maxHeap *hp,int *arr, int size){
	int i;
	//insertion into the heap without violating the shape property
	for (i=0;i<size;i++){
		if(hp->size){
			hp->elem=realloc(hp->elem, (hp->size+1)*sizeof(node));
		}
		else{
			hp->elem=malloc(sizeof(node));
		}
		node nd;
		nd.data=arr[i];
		hp->elem[(hp->size)++]=nd;
	}
	//making sure that heap property is also satisfied
	for(i=(hp->size-1)/2;i>=0;i--){
		heapify(hp,i);
	}
}

//There are mainly two types of traversals possible on a max heap - depth first traversal and breadth first (level order) traversal.
//depth first <inorder,preorder,postorder traversal>
void inorderTraversal(maxHeap *hp, int i) {
    if(lchild(i) < hp->size) {
        inorderTraversal(hp, lchild(i)) ;
    }
    printf("%d ", hp->elem[i].data) ;
    if(rchild(i) < hp->size) {
        inorderTraversal(hp, rchild(i)) ;
    }
}

void preorderTraversal(maxHeap *hp, int i) {
    if(lchild(i) < hp->size) {
        preorderTraversal(hp, lchild(i)) ;
    }
    if(rchild(i) < hp->size) {
        preorderTraversal(hp, rchild(i)) ;
    }
    printf("%d ", hp->elem[i].data) ;
}

void postorderTraversal(maxHeap *hp, int i) {
    printf("%d ", hp->elem[i].data) ;
    if(lchild(i) < hp->size) {
        postorderTraversal(hp, lchild(i)) ;
    }
    if(rchild(i) < hp->size) {
        postorderTraversal(hp, rchild(i)) ;
    }
}

void levelOrderTraversal(maxHeap *hp) {
    int i ;
    for(i = 0; i < hp->size; i++) {
        printf("%d ", hp->elem[i].data) ;
    }
    //printf("\n");
}

/*void heapsort(maxHeap *hp, int *arr){
	int i;
	int size=10;// array length
	int swap
	buildmaxHeap(hp,arr,size);
	for (i=9;i>=0;i--){
		arr[i]=hp->elem[0].data
		hp->size--;
		heapify(hp,0);
	}
}*/
int main(int argc, char const *argv[])
{
	int n;
	int array[]={4,1,3,2,16,9,10,14,8,7};
	for (n=0;n<10;n++){
		printf("%d ",array[n]);
	}
	//printf("%d\n",array[2]);
	maxHeap *hp;
	hp->size=0;
	buildmaxHeap(hp,array,10);
	//levelOrderTraversal(hp);
	for (n=0;n<10;n++){
		printf("%d ",array[n]);
	}
	//printf(" lets us heap sort\n");
	//heapsort(hp,array);
	//printf("%d\n",array[7]);
	//for (n=0;n<10;n++){
	//	printf("%d ",array[n]);
	//}
	//deletenode(hp);
	//heapify(hp,0);
	//levelOrderTraversal(hp);
	return 0;
}