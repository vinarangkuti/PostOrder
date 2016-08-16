#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node{
      int data;
      Node *kiri;
      Node *kanan;
};
void tambah(Node **root, int databaru)
{
	if((*root) == NULL)
      {
      	  Node *baru;
      	   baru = new Node;

      	baru->data = databaru;
        baru->kiri = NULL;
        baru->kanan = NULL;
         (*root) = baru;
         (*root)->kiri = NULL;
         (*root)->kanan = NULL;
            printf("Data bertambah!");
      }

      else if(databaru<(*root)->data)
            tambah(&(*root)->kiri, databaru);
        else if(databaru>(*root)->data)
            tambah(&(*root)->kanan, databaru);
        else if(databaru == (*root)->data)
            printf("Data sudah ada!");
}

void preOrder(Node *root)
{
	 if(root != NULL){
            printf("%d ", root->data);
            preOrder(root->kiri);
            preOrder(root->kanan);
      }
}


