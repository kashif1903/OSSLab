# include <stdio.h>
# include <string.h>
int main( )
{
   FILE *fp ;
   char data[50];
   // opening an existing file
   printf( "Opening the file osslab.doc in write mode" ) ;
   fp = fopen("osslab.doc", "w") ;
   if ( fp == NULL )
   {
       printf( "Could not open file osslab.doc" ) ;
       return 1;
   }
   printf( "\n Enter some text from keyboard") ;
   // getting input from user
   while ( strlen ( gets( data ) ) > 0 )
   {
       // writing in the file
       fputs(data, fp) ;
       fputs("\n", fp) ;
   }
    while( fgets ( data, 50, fp ) != NULL )
         printf( "%s" , data ) ;
   // closing the file
   printf("Closing the file osslab") ;
   fclose(fp) ;
   return 0;
}
