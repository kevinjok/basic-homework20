#include <stdio.h>  
#include <stdlib.h> 
struct phone 
{

   char brand[16],type[10];

   int year,price;

}; 

int main(void)

{

    int i51;

	printf("                 phone手機結構體                 \n");

    struct phone p[5]={  

	"APPLE", "X", 2017, 35000, 

    "小米", "9", 2019, 14000, 

    "SONY", "Xperia XZ2", 2018, 13800, 

    "OPPO", "Reno", 2019, 14700, 

    "ASUS", "Zenfone 5", 2018, 12000

	};

    

    for (i51=0; i51<5; i51++) 

    {

        printf("%s %s %4d %5d\n", p[i51].brand, p[i51].type, p[i51].year, p[i51].price);

    }

    system("pause"); 

    return 0;

}
