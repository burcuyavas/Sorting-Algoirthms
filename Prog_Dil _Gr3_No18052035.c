#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void Menu();
void Menu1();
void Menu2();

int dizi[50000];
int adet = 10;


int RandomSayiOlustur()
{
    int i;
    
    printf("\n");
    
    srand ( time(NULL) );
    
    for(i=0; i<10;i++)
    {
            dizi[i] = (rand()%100)+1;
    }
    
    for(i=0; i<10;i++)
    {
             printf(" %d ", dizi[i]);
    }
    
    printf("\n\n");
}

void InsertionSort()
{
	int i,j,key;
	for(i=1;i<adet;i++)
	{
		key=dizi[i];
		j=i-1;
		while(key<dizi[j] && j>=0)
		{
			dizi[j+1]=dizi[j];
			j--;
		}
		dizi[j+1]=key;
	}
}
void InsertionSortSecimYap(int menu2)
{
	int i,a;
	a=menu2;
	
	RandomSayiOlustur();
	
    InsertionSort();
    
    if (a == 1) 
    {
	       for(i=0;i<adet;i++)
	       {
		       printf(" %d ",dizi[i]);
		
	        }
	        printf("\n");
	        
    } else if(a==2) 
     {
        for(i=adet-1;i>-1;i--)
	       {
                 printf(" %d ", dizi[i]);
           }
           printf("\n");
     }
     
     	
	Menu1();
              
}


void BubbleSort()
{
	int i,j;
	int temp;
	
	for(i=0; i<adet-1; i++)
	{
		for(j=0; j<adet-1; j++)
		{
			if(dizi[j]>dizi[j+1])
			{
				temp=dizi[j];
				dizi[j]=dizi[j+1];
				dizi[j+1]=temp;
			}
		}
	}
	
}

void BubbleSortSecimYap(int menu2secim)
{
      int i,j,k,secim,a;
      a= menu2secim;
      
      RandomSayiOlustur();
      
      BubbleSort();
	                
	  if(a == 1) 
      { 
	                
           for(j=0;j<adet;j++)
	        {
                      printf(" %d ", dizi[j]);
            }
            printf("\n");
                                    
        } else if(a == 2) 
         {
                  for(k=adet-1;k>-1;k--)
	              {
                             printf(" %d ", dizi[k]);
                  }
                  printf("\n");
                            
         }
                     
                    
                Menu1(); 
}

void SelectionSort()
{
		int i,j,enkucuk,temp;
	
	for(i=0;i<adet-1;i++)
	{
		enkucuk=i;
		
		for(j=i+1;j<adet;j++)
		{
			if(dizi[j]<dizi[enkucuk])
		    {
                enkucuk=j;
            }
		}
		temp=dizi[i];
	   dizi[i]=dizi[enkucuk];
	   dizi[enkucuk]=temp;
	}
	
}

void SelectionSortSecimYap(int menusecim2)
{
	int i,a;
	a=menusecim2;
	RandomSayiOlustur();
	
	SelectionSort();
	if (a==1)
	{
		for(i=0;i<adet;i++)
	       {
		       printf(" %d ",dizi[i]);
		
	        }
	        printf("\n");
	        
    } else if(a==2) 
     {
        for(i=adet-1;i>-1;i--)
	       {
                 printf(" %d ", dizi[i]);
           }
           printf("\n");
     }
     
     	
	Menu1();
	}
	


void ShellSort()
{
	int i,j,k;
		int temp;
	    for (i=adet/2; i>0; i=i/2)
	    {
	        for (j=i;j<adet;j++)
	        {
	            for(k=j-i; k>=0 ;k=k-i)
	            {
	                if (dizi[k+i]>=dizi[k])
	                    break;
	                else
	                {
	                    temp=dizi[k];
	                    dizi[k]=dizi[k+i];
	                    dizi[k+i]=temp;
	                }
	            }
	        }
	    }
}

void ShellSortSecimYap(int menusecim2)
{
	int i,a;
	a=menusecim2;
	RandomSayiOlustur();
	
	SelectionSort();
	if (a==1)
	{
		for(i=0;i<adet;i++)
	       {
		       printf(" %d ",dizi[i]);
		
	        }
	        printf("\n");
	        
    } else if(a==2) 
     {
        for(i=adet-1;i>-1;i--)
	       {
                 printf(" %d ", dizi[i]);
           }
           printf("\n");
     }
     
     	
	Menu1();
	}

void Calculator(int menu1secim,int menu2secim)
{
     int a;
     a = menu2secim;
     
          
         switch(menu1secim)
         {
                   case 1: BubbleSortSecimYap(menu2secim); break;
                   case 2: SelectionSortSecimYap(menu2secim); break;
                   case 3: InsertionSortSecimYap(menu2secim); break;
                   case 4: ShellSortSecimYap(menu2secim); break;
         }                    
                   
                                
}

void Menu2(int menu1secim)
{
     int menu2secim;
     
     printf("\nSiralama Sekli Seciniz : \n");
     printf("1) Kucukten buyuge\n");
     printf("2) Buyukten kucuge\n");
     printf("Seciminiz : \n");
     scanf("%d", &menu2secim);
     
     Calculator(menu1secim,menu2secim);
     
}

void Menu1()
{
     int menu1secim;
     
     printf("\nSiralama Algoritmasi Seciniz : \n");
     printf("1. Bubble Sort\n");
     printf("2. Selection Sort\n");
     printf("3. Insertion Sort\n");
     printf("4. Shell Sort\n");
     printf("Seçiminiz : \n");
     scanf("%d", &menu1secim);
     
     Menu2(menu1secim);
     adet = 10;
}


void Karsilastir()
{
     
	clock_t start, end;
	srand(time(NULL));
	int i,j,k,temp,enkucuk;
	
    int yedekdizi[50000];

	
	for(i=0;i<=50000;i++)
        {
			yedekdizi[i]=(rand()%200000+1);
			//dizi[i] = yedekdizi[i];
		}
		
		
    
    memcpy(dizi,yedekdizi,sizeof(yedekdizi));
	
	
	start=clock();
		//Bubble
         
         
         
	for(i=0; i<50000-1; i++)
	{
		for(j=0; j<50000-1; j++)
		{
			if(dizi[j]>dizi[j+1])
			{
				temp=dizi[j];
				dizi[j]=dizi[j+1];
				dizi[j+1]=temp;
			}
		}
	}
	
	 //Bubble
		end = clock();

		printf("\nBubble Sort icin gecen sure : %d", (end-start));
		memcpy(dizi,yedekdizi,sizeof(yedekdizi));
		
			//start=clock();
			
		//Selection
	
	for(i=0;i<50000-1;i++)
	{
		enkucuk=i;
		
		for(j=i+1;j<1;j++)
		{
			if(dizi[j]<dizi[enkucuk])
		    {
                enkucuk=j;
            }
		}
		temp=dizi[i];
	   dizi[i]=dizi[enkucuk];
	   dizi[enkucuk]=temp;
	}
	
	 //Selection
		end = clock();
		printf("\nSelection Sort için geçen süre : %d", (end-start));
	memcpy(dizi,yedekdizi,sizeof(yedekdizi));
		
		//Insertion
	
	int key;
	for(i=1;i<50000;i++)
	{
		key=dizi[i];
		j=i-1;
		while(key<dizi[j] && j>=0)
		{
			dizi[j+1]=dizi[j];
			j--;
		}
		dizi[j+1]=key;
	}
	
	 //Insertion
		end = clock();
		printf("\nInsertion Sort icin gecen sure : %d", (end-start));
	memcpy(dizi,yedekdizi,sizeof(yedekdizi));
		
		
		//Shell
	
	    for (i=50000/2; i>0; i=i/2)
	    {
	        for (j=i;j<50000;j++)
	        {
	            for(k=j-i; k>=0 ;k=k-i)
	            {
	                if (dizi[k+i]>=dizi[k]){
	                    break;
	                }else
	                {
	                    temp=dizi[k];
	                    dizi[k]=dizi[k+i];
	                    dizi[k+i]=temp;
	                }
	            }
	        }
	    }
	
	 //Shell
		end = clock();
		printf("\nShell Sort icin gecen sure : %d\n\n", (end-start));
		memcpy(dizi,yedekdizi,sizeof(yedekdizi));
		
    
     Menu1();
     }

void Menu()
{
     char menusecim;
  
  printf("==============MENU==================\n");
  printf("A) Bir siralama algoritmasi secerek diziyi siralayiniz.\n");
  printf("B) Tum siralama algoritmalarini karsilastiriniz.\n\n");
  printf("Seciminiz : \n");
  scanf("%c", &menusecim);
  
  if(menusecim =='A')
  {
      Menu1();     
  }
  else
  {
      Karsilastir();
      }
 
}

int main(int argc, char *argv[])
{
  
    Menu();
    
    return 0;
}
