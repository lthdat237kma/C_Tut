 #include<stdio.h>
#include<math.h>

int main() { 
    float a, b, c, d, x, x1, x2;
    printf("Nhap he so a:");
     scanf("%f", &a);
    printf("Nhap he so b:");
     scanf("%f", &b);
    printf("Nhap he so c:");
     scanf("%f", &c);
    d = b*b - 4*a*c;
  if(a==0)
    {
        if(b==0)
            {
                if(c==0)
                    printf("Phuong trinh co vo so nghiem!");
                else
                    printf("Phuong trinh vo nghiem!");
            }
        else
            printf("Phuong trinh co nghiem duy nhat la: %f",-c/b);
    }
    else
    {
        d=b*b-4*a*c;
        if (d<0)
            printf("Phuong trinh vo nghiem!!!");
        else if (d==0)
            printf("Phuong trinh co nghiem kep la: %f",-b/(2*a));
        else
            printf("Phuong trinh co 2 nghiem phan biet la: %2f,%2f",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));    
    }    



    getch();
 }
