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

void inOrder(Node *root)
{
	 if(root != NULL){
            inOrder(root->kiri);
            printf("%d ", root->data);
            inOrder(root->kanan);
      }
}
void postOrder(Node *root)
{

	 if(root != NULL){
            postOrder(root->kiri);
            postOrder(root->kanan);
            printf("%d ", root->data);
      }
}
int main()
{

	 int pil, data;// c;
      Node *pohon; //*t;
      pohon = NULL; //inisialisasi node pohon
      //perulangan do-while
      do
      {

      	system("cls"); //bersihkan layar
            printf("\t#PROGRAM TREE C++#");
            printf("\n\t==================");
            printf("\nMENU");
            printf("\n----\n");
            printf("1. Tambah\n");
            printf("2. Lihat pre-order\n");
            printf("3. Lihat in-order\n");
            printf("4. Lihat post-order\n");
            printf("5. Exit\n");
            printf("Pilihan : ");
            scanf("%d", &pil);
            switch(pil)
            {
        case 1 :
                  printf("\nINPUT : ");
                  printf("\n-------");
                  printf("\nData baru : ");
                  scanf("%d", &data);
                  //panggil fungsi untuk menambah node yang berisi data pada tree
                  tambah(&pohon, data);
                  break;

                  case 2 :
                  printf("\nOUTPUT PRE ORDER : ");
                  printf("\n------------------\n");
                  if(pohon!=NULL)
                       //panggil fungsi untuk mencetak data secara preOrder
                        preOrder(pohon);
                  else
                        printf("Masih kosong!");
                  break;

                   case 3 :
                  printf("\nOUTPUT IN ORDER : ");
                  printf("\n------------------\n");
                  if(pohon!=NULL)
                       //panggil fungsi untuk mencetak data secara inOrder
                        inOrder(pohon);
                  else
                        printf("Masih kosong!");
                  break;

                  printf("\nOUTPUT POST ORDER : ");
                  printf("\n------------------\n");
                  if(pohon!=NULL)
                       //panggil fungsi untuk mencetak data secara postOrder
                        postOrder(pohon);
                  else
                        printf("Masih kosong!");
                  break;
                  }
            _getch();
      }while(pil != 5); 
           

