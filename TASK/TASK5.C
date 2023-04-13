#include<stdio.h>
int main()
{
	int teawala;
	
	printf("\n1.tea\n2.coffee");
	printf("\nplease give your oder..");
	scanf("%d" , &teawala);
	// for user multipal choices
	switch(teawala){
		case 1:
		  printf("\n1.tea\n2.coffee");
             printf("\nEnter the Choice");
             scanf("%d", &teawala);

             switch(teawala)
             {
                case 1:
                       printf("\nhot tea,normal tea,special tea");
                       break;
                case 2:
                       printf("\nsugarfreevtea,ice tea,masala tea");
                       break;       
                default:
                       printf("\n your tea area not avialable...");       
             }
             break;
        case 2:
               printf("cold coffee,cappachino,hot coffee");
               break;
        default:
                printf("your coffee are not avialable...");     
					                    
    }                                
}
		
	
	
		

