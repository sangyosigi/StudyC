/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct treeNode {
	char data;
	struct treeNode* left;
	struct treeNode* right;
}treeNode;
treeNode* makeRootNode(char data, treeNode* leftNode, treeNode* rightNode)
{
	treeNode* root = (treeNode*)malloc(sizeof(treeNode));
	root->data = data;
	root->left = leftNode;
	root->right = rightNode;
	return root;
}
void preorder(treeNode* root) {
	if (root)
	{
		printf("%c", root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
// 메인함수
int main(void)
{
	treeNode* n4 = makeRootNode('H', NULL, NULL);
	treeNode* n6 = makeRootNode('I', NULL, NULL);
	treeNode* n7 = makeRootNode('J', NULL, NULL);
	treeNode* n11 = makeRootNode('K', NULL, NULL);
	treeNode* n9 = makeRootNode('F', NULL, NULL);
	treeNode* n3 = makeRootNode('D', n4, NULL);
	treeNode* n5 = makeRootNode('E', n6, n7);
	treeNode* n2 = makeRootNode('B', n3, n5);
	treeNode* n10 = makeRootNode('G', NULL, n5);
	treeNode* n8 = makeRootNode('C', n9, n10);
	treeNode* n1 = makeRootNode('A', n2, n8);

	printf("\n preorder : ");
	preorder(n1);
	system("pause");
	return EXIT_SUCCESS;
}