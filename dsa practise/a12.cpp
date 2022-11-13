#include<stdio.h>  
void main( )  
{  
FILE *fp ;  
char ch ;  
fp = fopen("file_handle.c","r") ;  
while ( 1 )  
{  
ch = fgetc ( fp ) ;  
           if ( ch == EOF )  
                  break ;  
printf("%c",ch) ;  
}  
fclose (fp ) ; 
}  
/*#include <stdio.h>
  //fprintf() function is used to write set of characters into file. It sends formatted output to a stream.
main(){  
   FILE *fp;  
   fp = fopen("file.txt", "w");//opening file  
   fprintf(fp, "Hello file by fprintf...\n");//writing data into file  
   fclose(fp);//closing file  
}  */
/*#include <stdio.h>  
//fscanf() function is used to read set of characters from file. 
main(){  
   FILE *fp;  
   char buff[255];//creating char array to store data of file  
   fp = fopen("file.txt", "r");  
   while(fscanf(fp, "%s", buff)!=EOF){  
   printf("%s ", buff );  
   }  
   fclose(fp);  
}  */

