    #include<stdio.h>  
     int main()    
    {    
    int a=5, b=45;      
    printf("Before swap a=%d b=%d",a,b);      
    a=a+b;//a=50 (5+45)    
    b=a-b;//b=40 (45-5)    
    a=a-b;//a=30 (35-5)    
    printf("\nAfter swap a=%d b=%d",a,b);    
    return 0;  
    }   
