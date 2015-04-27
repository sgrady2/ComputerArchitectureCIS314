//The following declaration defines a class of structures for use in constructing binary trees:
typedef struct ELE *tree_ptr;

struct ELE {

	long val;
	tree_ptr left;
	tree_ptr right;
};

long trace(tree_ptr tp){
	int *x = 0;
	while (tp != NULL){
		x = tp;
		tp = tp->right;

		}
		return x;

	}
int main(){
	tree_ptr t = malloc(sizeof(struct ELE));
	t->val = 1;
	t->right = NULL;
	t->left = NULL;

}

//GCC generates the following from the above function
//movl $0, %eax
//testq %rdi, %rdi
//je L3 -->Jump equals
//.L5
//movq (%rdi), %rax
//movq 16(%rdi), %rdi
//testq %rdi, %rdi
//jne .L5 -->Jump notequals
//.L3
//rep
//ret
//Part B. 
//This function traces the nodes of a tree
//using the right side of the tree
//the function says that while the traversing node is not null (null means we've reached the end of the tree)
//assign the 64-bit register rax to the current pointer tp
//then assign tp to the pointer to the right node in the tree
//keep doing this and return the pointer of the value of tp on the last iteration of the loop

