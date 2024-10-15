 #include<stdio.h>
 int main()
 { 
   float n,c,f;
   char ch;
   printf("Enter temperature:");
   scanf("%d", &n);
   printf("Enter scale:");
   scanf("%s", &ch);
   if (ch="Fahrenheit")
    {
      c= (n-32)/1.8;
      printf("the temp in celsius is %d", c);
    }
    
   else if (ch="Celsius")
    {
      f= (n*1.8)+32;
      printf("the temp in Fahrenheit is %d", f);
    }
   else
   printf("default input");
 
 }