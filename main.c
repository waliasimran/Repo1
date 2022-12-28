#include <stdio.h>
#include <stdlib.h>
struct inf{
char name[20];
char dob[10];
char email[12];
}s;
void input(struct inf* s)
{
    printf("\nEnter your name\n");
    gets(s->name);
    printf("\nEnter date of birth in dd/mm/yyyy format\n");
    gets(s->dob);
    printf("\nEnter Email\n");
    gets(s->email);
    fflush(stdin);

}

void f1()
{
 static int totalCost;
 int i,j,choice,c=1,a[20],cost[4];
 for(i=0;i<20;i++)
 a[i]=0;

 char str[100];
 char items[4][100]={
 "top wear",
 "bottom wear",
 "footwear",
 "accessories"
 };

 do{
  //C is 1 by default
  if(c==1){
  printf("Enter\n1 - Men's Fashion\n2 - Women's Fashion\nAny other number to exit\n");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:
   {
    int mensfashionChoice;
    printf("Enter\n1. Top Wear - Rs.299\n2. Bottom Wear- Rs.379\n3. Footwear - Rs.599\n4. Accessories - Rs.149\nAny other number to exit\n");
    scanf("%d",&mensfashionChoice);
    cost[0]=299;
    cost[1]=379;
    cost[2]=899;
    cost[3]=149;
    switch(mensfashionChoice)
    {
     case 1:
     {
      int num;
      printf("You selected Top Wear with Rs.299. Enter 1 to confirm\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[0]++;
       totalCost+=299;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     case 2:
     {
      int num;
      printf("You selected Bottom Wear with Rs.379. Enter 1 to confirm\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[1]++;
       totalCost+=379;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     case 3:
     {
      int num;
      printf("You selected Footwear with Rs.899. Enter 1 to confirm\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[2]++;
       totalCost+=899;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     case 4:
     {
      int num;
      printf("You selected Accessories with Rs.149. Enter 1 to confirm\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[3]++;
       totalCost+=149;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     default:{
      printf("Exit from Men's Fashion\n");
      break;
     }
    }
    break;
   }
   case 2:
   {
    int womensfashionChoice;
    printf("Enter\n1. Top Wear - Rs.359\n2. Bottom Wear- Rs.479\n3. Footwear - Rs.599\n4. Jewellery - Rs.199\nAny other number to exit\n");
    scanf("%d",&womensfashionChoice);
    cost[4]=359;
    cost[5]=479;
    cost[6]=899;
    cost[7]=199;
    switch(womensfashionChoice)
    {
     case 1:
     {
      int num;
      printf("You selected Top Wear for Rs.359. Enter 1 to confirm\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[4]++;
       totalCost+=359;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     case 2:
     {
      int num;
      printf("You selected Bottom Wear for Rs.479. Enter 1 to confirm\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[5]++;
       totalCost+=479;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     case 3:
     {
      int num;
      printf("You selected Footwear for Rs.899. Enter 1 to confirm\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[6]++;
       totalCost+=899;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     case 4:
     {
      int num;
      printf("You selected Jewellery for Rs.199. Enter 1 to confirm\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[7]++;
       totalCost+=199;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     default:{
      printf("Exit from Women's Fashion\n");
      break;
     }
    }
    break;
   }
   default:
   {
    printf("Enter Valid Categories Choice\n");
    break;
   }
  }
  printf("%s's cart\n",str);
  printf("Id\tItems\t\t\tQuantity\t\t\tCost\n");
  for(i=0;i<9;i++)
  {
   if(a[i]!=0)
   {
    printf("%d\t%s\t\t%d\t\t\t%d\n",i,items[i],a[i],(cost[i]*a[i]));
   }
  }
  printf("Total Cost\t\t\t\t\t%d\n",totalCost);
  printf("If you wish to buy anything more Enter\n1 to Add Item\n2 to Delete Items \nAny other number to Exit\n");
  scanf("%d",&c);
 }
  if(c==2)
  {
   int id;
   printf("Enter id to delete item\n");
   scanf("%d",&id);
   if(id<9&&id>0){
   totalCost=totalCost-(cost[id]*a[id]);
   a[id]=0;
   }
   else{
    printf("Enter Valid id\n");
   }
       printf("Revised Items \n");
       printf("Id\tItems\t\t\tQuantity\t\tCost\n");
            for(i=0;i<9;i++)
      {
     if(a[i]!=0)
      {
    printf("%d\t%s\t\t%d\t\t%d\n",i,items[i],a[i],(cost[i]*a[i]));
      }
     }
        printf("Total Cost\t\t\t\t\t%d\n",totalCost);
        printf("If you wish to buy anything more Enter\n1 to Add Item\n2 to Delete Items \nAny other number to Exit\n");
     scanf("%d",&c);
  }

 }while(c==1 || c==2);
 printf("Your Final Cost is %d\n",totalCost);
 printf("Thanks  for Choosing Us and Visit us again.\n",str);

}


void f2()
{   int n;
    printf("1-MOBILES COMPUTERS\n");
    printf("2-TV ELECTRONICS AND APPLIANCES\n");
    printf("3-EXIT\n");
    g:
    printf("SELECT OPTION\n");
    scanf("%d",&n);
    switch(n)
    {
case 1:
        {printf("YOU HAVE SELECTED MOBILES AND COMPUTERS\n");
        char a[5][50]={"MOBILES","MOBILES ACCESSORIES","COMPUTER","COMPUTER ACCESSORIES\n"};
        for(int i=0;i<4;i++)
            printf("%d-%s\n",i+3,a[i]);
        printf("SELECT OPTION\n");
        int n1;
        scanf("%d",&n1);
        switch(n1)
        { case 3:
            {  printf("YOU HAVE SELECTED MOBILES\n");
                printf("SELECT BRAND NOW\n");
                printf("1-SAMSUNG\n2-ONEPLUS\n3-APPLE\n4-XIAOMI\n5-SONY\n");
                int n2;
                scanf("%d",&n2);
                switch(n2)
                {
                case 1:
                   { int n3,COST;
                    printf("YOU HAVE SELECTED SAMSUNG\n");
                    int a1[3]={15000,30000,40000};
                    printf("SELECT PRICE\n");
                    for(int i=0;i<3;i++)
                    printf("%d-Rs %d\n",i,a1[i]);
                    s:
                    scanf("%d",&n3);
                    if(n3==0)
                        COST=a1[n3];
                    else if(n3==1)
                        COST=a1[n];
                    else if(n3==2)
                        COST=a1[n3];
                    else
                    {
                        printf("WRONG CHOICE ENTER AGAIN\n");
                        goto s;
                    }
                    printf("TOTAL COST=Rs%d\n",COST);
                    printf("ARE YOU SURE YOU WANT TO BUY\n1-YES\n0-NO\n");
                    int z;
                    scanf("%d",&z);
                    if(z==1)
                        printf("THANKS FOR SHOPPING\n");
                    else exit(0);
                    exit(0);
                    break;
                    }
                case 2:
                    {int n3,COST;
                        printf("YOU HAVE SELECTED ONEPLUS\n");
                    int a1[3]={20000,35000,60000};
                    printf("SELECT PRICE\n");
                    for(int i=0;i<3;i++)
                    printf("%d-Rs %d\n",i,a1[i]);
                    k1:
                    scanf("%d",&n3);
                    if(n3==0)
                        COST=a1[n3];
                    else if(n3==1)
                        COST=a1[n3];
                    else if(n3==2)
                        COST=a1[n3];
                    else
                    {
                        printf("WRONG CHOICE ENTER AGAIN\n");
                        goto k1;
                    }
                     printf("TOTAL COST=Rs%d\n",COST);
                    printf("ARE YOU SURE YOU WANT TO BUY\n1-YES\n0-NO\n");
                    int z;
                    scanf("%d",&z);
                    if(z==1)
                     printf("THANKS FOR SHOPPING\n");
                    else exit(0);
                    exit(0);
                    break;
                    }
                case 3:
                    { int n3,COST;
                        printf("YOU HAVE SELECTED APPLE\n");
                    int a1[3]={30000,50000,70000};
                    printf("SELECT PRICE\n");
                    for(int i=0;i<3;i++)
                    printf("%d-Rs %d\n",i,a1[i]);
                    k2:
                    scanf("%d",&n3);
                    if(n3==0)
                        COST=a1[n3];
                    else if(n3==1)
                        COST=a1[n3];
                    else if(n3==2)
                        COST=a1[n3];
                    else
                    {
                        printf("WRONG CHOICE ENTER AGAIN\n ");
                        goto k2;
                    }
                     printf("TOTAL COST=Rs%d\n",COST);
                    printf("ARE YOU SURE YOU WANT TO BUY\n1-YES\n0-NO\n");
                    int z;
                    scanf("%d",&z);
                    if(z==1)
                        printf("THANKS FOR SHOPPING\n");
                    else exit(0);
                    exit(0);
                    break;
                    }
                case 4:
                    { int n3,COST;
                        printf("YOU HAVE SELECTED XIAOMI\n");
                    int a1[3]={9000,17000,23000};
                    printf("SELECT PRICE\n");
                    for(int i=0;i<3;i++)
                    printf("%d-Rs %d\n",i,a1[i]);
                    k3:

                    scanf("%d",&n3);
                    if(n3==0)
                        COST=a1[n3];
                    else if(n3==1)
                        COST=a1[n3];
                    else if(n3==2)
                        COST=a1[n3];
                    else
                    {
                        printf("WRONG CHOICE ENTER AGAIN\n");
                        goto k3;
                    }
                     printf("TOTAL COST=Rs%d\n",COST);
                    printf("ARE YOU SURE YOU WANT TO BUY\n1-YES\n0-NO\n");
                    int z;
                    scanf("%d",&z);
                    if(z==1)
                        printf("THANKS FOR SHOPPING\n");
                    else exit(0);
                    exit(0);
                    break;
                    }
                case 5:
                    { int n3,COST;
                        printf("YOU HAVE SELECTED SONY\n");
                    int a1[3]={15000,20000,22000};
                    printf("SELECT PRICE\n");
                    for(int i=0;i<3;i++)
                    printf("%d-Rs%d\n",i,a1[i]);
                    k4:
                    scanf("%d",&n3);
                    if(n3==0)
                        COST=a1[n3];
                    else if(n3==1)
                        COST=a1[n];
                    else if(n3==2)
                        COST=a1[n3];
                    else
                    {
                        printf("WRONG CHOICE ENTER AGAIN\n");
                        goto k4;
                    }
                     printf("TOTAL COST=Rs%d\n",COST);
                    printf("ARE YOU SURE YOU WANT TO BUY\n1-YES\n0-NO\n");
                    int z;
                    scanf("%d",&z);
                    if(z==1)
                        printf("THANKS FOR SHOPPING\n");
                    else exit(0);
                    exit(0);
                    break;
                    }
                default :
                    exit(0);
           }
        }

       case 4:
              {
                    printf("YOU HAVE SELECTED MOBILE ACCESSORIES\n");
                    printf("ITEM\t\tCOST\n");
                    char c[2][20]={"0-EARPHONES\t300","1-CHARGER\t600\n"};
                    for(int i=0;i<2;i++)
                    printf("%s\n",c[i]);
                    a:
                    printf("ENTER CHOICE\n");
                    int n;
                    scanf("%d",&n);
                    if(n==0)
                    {
                        int COST,n1;
                        printf("PRICES ARE AS FOLLOWS\n");
                        char d[3][20]={"0-->Rs100","1-->Rs200","2-->Rs300"};
                        for(int i=0;i<3;i++)
                            printf("%s\n",d[i]);
                        printf("ENTER CHOICE\n");
                        scanf("%d",&n1);
                        if(n1==0)
                            COST=100;
                         if(n1==1)
                            COST=200;
                         if(n1==2)
                            COST=300;
                         printf("ENTER QUANTITY\n");
                         int n2;
                         scanf("%d",&n2);
                         COST=COST*n2;
                         printf("TOTAL COST=Rs%d\n",COST);
                         printf("ARE YOU SURE YOU WANT TO BUY\n1-YES\n0-NO\n");
                    int z;
                    scanf("%d",&z);
                    if(z==1)
                        printf("THANKS FOR SHOPPING\n");
                    else exit(0);
                    exit(0);
                    if(n==1)
                      { int COST,n1;
                        printf("PRICES ARE AS FOLLOWS\n");
                        char d[3][20]={"0-->Rs250","0-->Rs350","0-->Rs500"};
                        for(int i=0;i<3;i++)
                            printf("%s\n",d[i]);
                        printf("SELECT CHOICE\n");
                        scanf("%d",&n1);
                        if(n1==0)
                            COST=250;
                        if(n1==1)
                            COST=350;
                        if(n1==2)
                            COST=500;
                        printf("ENTER QUANTITY\n");
                        int n2;
                        scanf("%d",&n2);
                        COST=COST*n2;
                        printf("TOTAL COST=Rs%d\n",COST);
                        printf("ARE YOU SURE YOU WANT TO BUY\n1-YES\n0-NO\n");
                    int z;
                    scanf("%d",&z);
                    if(z==1)
                        printf("THANKS FOR SHOPPING\n");
                    else exit(0);
                    exit(0);


                      }
                      if(!(n==0||n==1))
                       {
                           printf("WRONG CHOICE ENTER AGAIN\n");
                      goto a;
                       }
                      }
                    break;
    case 5:
          { int n;
            printf("YOU HAVE SELECTED COMPUTERS\n");
            printf("SELECT BRAND\n");
            printf("1--APPLE\n");
            printf("2--SAMSUNG\n");
            printf("3--IBM\n");
            scanf("%d",&n);
            switch(n)
            {
            case 1:
                { int n1,COST,n2;
                    printf("YOU HAVE SELECTED APPLE\n");
                    printf("PRICES ARE AS FOLLOWS\n");
                    printf("0--Rs3000\n1--Rs60000\n2--Rs90000\n");
                    printf("SELECT OPTION\n");
                    scanf("%d",&n1);
                    if(n1==0)
                        COST=30000;
                    else if(n1==1)
                        COST=60000;
                    else COST=90000;
                    printf("ENTER QUANTITY\n");
                    scanf("%d",&n2);
                    COST=COST*n2;
                    printf("TOTAL COST=Rs%d\n",COST);
                    printf("ARE YOU SURE YOU WANT TO BUY\n1-YES\n0-NO\n");
                    int z;
                    scanf("%d",&z);
                    if(z==1)
                        printf("THANKS FOR SHOPPING\n");
                    else exit(0);
                    exit(0);
                }
            case 2:
                {   int n1,COST,n2;
                    printf("YOU HAVE SELECTED SAMSUNG\n");
                    printf("PRICES ARE AS FOLLOWS\n");
                    printf("0--Rs25000\n1--Rs40000\n2--Rs55000\n");
                    printf("SELECT OPTION\n");
                    scanf("%d",&n1);
                    if(n1==0)
                        COST=25000;
                    else if(n1==1)
                        COST=40000;
                    else COST=55000;
                    printf("ENTER QUANTITY\n");
                    scanf("%d",&n2);
                    COST=COST*n2;
                    printf("TOTAL COST=Rs%d",COST);
                    printf("ARE YOU SURE YOU WANT TO BUY\n1-YES\n0-NO\n");
                    int z;
                    scanf("%d",&z);
                    if(z==1)
                        printf("THANKS FOR SHOPPING\n");
                    else exit(0);
                    exit(0);

                }
            case 3:
                {
                    int n1,COST,n2;
                    printf("YOU HAVE SELECTED IBM\n");
                    printf("PRICES ARE AS FOLLOWS\n");
                    printf("0--Rs18000\n1--Rs32000\n2--Rs50000\n");
                    printf("SELECT OPTION\n");
                    scanf("%d",&n1);
                    if(n1==0)
                        COST=18000;
                    else if(n1==1)
                        COST=32000;
                    else COST=50000;
                    printf("ENTER QUANTITY\n");
                    scanf("%d",&n2);
                    COST=COST*n2;
                    printf("TOTAL COST=Rs%d\n",COST);
                    printf("ARE YOU SURE YOU WANT TO BUY\n1-YES\n0-NO\n");
                    int z;
                    scanf("%d",&z);
                    if(z==1)
                        printf("THANKS FOR SHOPPING\n");
                    else exit(0);
                    exit(0);
                }


                }
            }
    case 6:
                {  int n,n1,COST;
                    printf("YOU HAVE SELECTED COMPUTER ACCESSORIES\n");
                    printf("0-DESKTOP\n1-UPS\n2-CPU\n3-KEYBOARD\n");
                    printf("SELECT OPTION\n");
                    scanf("%d",&n);
                    if(n==0)
                    { printf("YOU HAVE SELECTED DESKTOP\n");

                        printf("PRICES ARE AS FOLLOWS\n");
                        printf("0-Rs2500\n1-Rs3700\n");
                        printf("SELECT OPTION\n");
                        scanf("%d",&n1);
                        if(n1==0)
                            COST=2500;
                        if(n1==1)
                            COST=3700;
                    }
                    if(n==1)
                    { printf("YOU HAVE SELECTED UPS\n");
                        printf("PRICES ARE AS FOLLOWS\n");
                        printf("0-Rs500\n1-Rs1000\n");
                        printf("SELECT OPTION\n");
                        scanf("%d",&n1);
                        if(n1==0)
                            COST=500;
                        if(n1==1)
                            COST=1000;
                    }
                     if(n==2)
                    {printf("YOU HAVE SELECTED CPU\n");
                        printf("PRICES ARE AS FOLLOWS\n");
                        printf("0-Rs1500\n1-Rs3000\n");
                        printf("SELECT OPTION\n");
                        scanf("%d",&n1);
                        if(n1==0)
                            COST=1500;
                        if(n1==1)
                            COST=3000;
                    }
                    if(n==3)
                    {printf("YOU HAVE SELECTED KEYBOARD\n");

                        printf("PRICES ARE AS FOLLOWS\n");
                        printf("0-Rs2000\n1-Rs4000\n");
                        printf("SELECT OPTION\n");
                        scanf("%d",&n1);
                        if(n1==0)
                            COST=2000;
                        if(n1==1)
                            COST=4000;
                    }
                    printf("ENTER QUANTITY\n");
                    int n2;
                    scanf("%d",&n2);
                    printf("TOTAL COST=Rs%d\n",COST*n2);
                    printf("ARE YOU SURE YOU WANT TO BUY\n1-YES\n0-NO\n");
                    int z;
                    scanf("%d",&z);
                    if(z==1)
                        printf("THANKS FOR SHOPPING\n");
                    else exit(0);
                    exit(0);
                 }
               }
              }
            }
case 2:
            {  int n;
            printf("YOU HAVE SELECTED TV ELECTRONICS AND APPLIANCES\n");
            printf("1-TV\n2-WASHING MACHINE\n3-AC\n4-EXIT\n");
            i:
            printf("SELECT OPTION\n");
            scanf("%d",&n);
            switch(n)
            {
            case 1:
                {  int cost;
                    printf("YOU HAVE SELECTED TV\n");
                    printf("SELECT COMPANY\n");
                    p2:
                    printf("1-SAMSUNG\n2-SONY\n3-LG\n");

                    printf("ENTER OPTION\n");
                    int n1;
                    scanf("%d",&n1);
                    if((n1==1)||(n1==2)||(n1==3))
                      {
                       printf("PRICES ARE AS FOLLOWS\n");
                    printf("0-Rs15000\n1-Rs30000\n2-Rs40000\n");
                    p1:
                    printf("ENTER OPTION\n");
                    int n2;
                    scanf("%d",&n2);
                    if(n2==0)
                        {cost=15000;
                         printf("TOTAL COST=Rs%d\n",cost);
                        }
                    else  if(n2==1)
                        {cost=30000;
                         printf("TOTAL COST=Rs%d\n",cost);
                        }
                    else if(n2==2)
                        {cost=40000;
                         printf("TOTAL COST=Rs%d\n",cost);
                        }
                    else{
                        printf("WRONG CHOICE ENTER AGAIN\n");
                        goto p1;
                        }
                        printf("ARE YOU SURE YOU WANT TO BUY\n");
                        printf("1-YES\n0-NO\n");
                        int n3;
                        v1:
                        scanf("%d",&n3);
                        if(n3==1)
                            {printf("THANKS FOR SHOPPING\n");
                            exit(0);
                            }
                        else if(n3==0)
                            exit(0);
                            else
                            {
                                printf("WRONG CHOICE ENTER AGAIN\n");
                                goto v1;
                            }
                }
                else
                {
                    printf("WRONG CHOICE ENTER AGAIN\n");
                    goto p2;
                }
            }
            break;
            case 2:
                 {  int cost;
                    printf("YOU HAVE SELECTED WASHING MACHINE\n");
                    printf("SELECT COMPANY\n");
                    p3:
                    printf("1-SAMSUNG\n2-IFB\n3-LG\n");

                     printf("ENTER OPTION\n");
                    int n1;
                    scanf("%d",&n1);
                    if((n1==1)||(n1==2)||(n1==3))
                      {
                       printf("PRICES ARE AS FOLLOWS\n");
                    printf("0-Rs25000\n1-Rs30000\n2-Rs35000\n");
                    p0:
                    printf("ENTER OPTION\n");
                    int n2;
                    scanf("%d",&n2);
                    if(n2==0)
                       {cost=25000;
                       printf("TOTAL COST=Rs%d\n",cost);
                       }
                    else  if(n2==1)
                       { cost=30000;
                         printf("TOTAL COST=Rs%d\n",cost);
                       }
                    else if(n2==2)
                        {cost=35000;
                        printf("TOTAL COST=Rs%d\n",cost);
                        }
                    else{
                        printf("WRONG CHOICE ENTER AGAIN\n");
                        goto p0;
                        }
                        printf("ARE YOU SURE YOU WANT TO BUY\n");
                        printf("1-YES\n0-NO\n");
                        int n3;
                        v2:
                        scanf("%d",&n3);
                        if(n3==1)
                            {printf("THANKS FOR SHOPPING\n");
                            exit(0);
                            }
                        else if(n3==0)
                            exit(0);
                            else
                            {
                                printf("WRONG CHOICE ENTER AGAIN\n");
                                goto v2;
                            }
                         }
                 else
                {
                    printf("WRONG CHOICE ENTER AGAIN\n");
                    goto p3;
                }
            }
            break;
            case 3:
                {  int cost;
                    printf("YOU HAVE SELECTED AC\n");
                    printf("SELECT COMPANY\n");
                    printf("1-SAMSUNG\n2-SONY\n3-LG\n");
                    r2:
                    printf("ENTER OPTION\n");
                    int n1;
                    scanf("%d",&n1);
                    if((n1==1)||(n1==2)||(n1==3))
                      {pz:
                       printf("PRICES ARE AS FOLLOWS\n");
                       printf("0-Rs25000\n1-Rs33000\n2-Rs44000\n");

                    printf("ENTER OPTION\n");
                    int n2;
                    scanf("%d",&n2);
                    if(n2==0)
                        {cost=25000;
                         printf("TOTAL COST=Rs%d\n",cost);
                        }
                    else  if(n2==1)
                        {cost=33000;
                         printf("TOTAL COST=Rs%d\n",cost);
                        }
                    else if(n2==2)
                        {cost=44000;
                         printf("TOTAL COST=Rs%d\n",cost);
                        }
                    else{
                        printf("WRONG CHOICE ENTER AGAIN\n");
                        goto pz;
                        }
                        printf("ARE YOU SURE YOU WANT TO BUY\n");
                        printf("1-YES\n0-NO\n");
                        int n3;
                        v3:
                        scanf("%d",&n3);
                        if(n3==1)
                            {printf("THANKS FOR SHOPPING\n");
                            exit(0);
                            }
                        else if(n3==0)
                            exit(0);
                            else
                            {
                                printf("WRONG CHOICE ENTER AGAIN\n");
                                goto v3;
                            }
                        }
                else
                {
                    printf("WRONG CHOICE ENTER AGAIN\n");
                    goto r2;
                }
            }
            break;
            case 4:
               exit(0);
            break;
            default :
                printf("WRONG CHOICE ENTER AGAIN\n");
            goto i;
            }
            }
            case 3:
                exit(0);
            default :
                printf("WRONG CHOICE ENTER AGAIN\n");
                goto g;
        }
}
void f3()
{
    int totalcost;
 int i,choice,c=1,a[14],cost[14];
 for(i=0;i<14;i++)
 a[i]=0;
 char str[100];
 char items[14][100]={"football","volleyball","basketball","table tennis","badminton rackets+shuttle cock","adidas","nike","leecooper","alishtezia","greengramdal(500gm)","jaggery(250gm)","salt(2kg)","dry ginger","cloves"};
 do{
 if(c==1)
 {
 printf("PLEASE CHOOSE ONE CATEGORY: 1-Sports 2-shoes 3-grocery");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:
 {
 int x;
 printf("Enter\n4- Football-Rs.350\n5-Volleyball-Rs.500\n6-Basketball-Rs.450\n7-Table Tennis-Rs.800\n8-Badminton rackets+shuttlecock-Rs.1200\n");
 scanf("%d",&x);
 cost[0]=350;
 cost[1]=500;
 cost[2]=450;
 cost[3]=800;
 cost[4]=1200;
 switch(x)
 {
 case 4:
 {
 int num;
 printf("You chose Football with Rs 350.Are you sure to buy.If 'yes' enter 1 else any number\n");
 scanf("%d",&num);
 if(num==1)
 {
 a[0]++;
 totalcost=totalcost+350;
 }
 printf("Your cost in cart is %d\n",totalcost);
 break;
 }
 case 5:
 {
 int num;
 printf("You chose Volleyball with Rs.500.Are you sure you want to buy.If 'yes' enter 1 else any number\n");
 scanf("%d",&num);
 if(num==1)
 {
 a[1]++;
 totalcost=totalcost+500;
 }
 printf("Your cost in cart is %d\n",totalcost);
 break;
 }
 case 6:
 {
 int num;
 printf("You chose Basketball with Rs.450.Are you sure to buy.If 'yes' enter 1 else any number\n");
 scanf("%d",&num);
 if(num==1)
 {
 a[2]++;
 totalcost=totalcost+450;
 }
 printf("Your cost in cart is %d\n",totalcost);
 break;
 }
 case 7:
 {
 int num;
 printf("You chose Table Tennis with Rs. 800.Are you sure to buy.If 'yes' enter 1 else any number\n");
 scanf("%d",&num);
 if(num==1)
 {
 a[3]++;
 totalcost=totalcost+800;
 }
 printf("Your cost in cart is %d\n",totalcost);
 break;
 }
 case 8:
 {
 int num;
 printf("You chose Badminton racket+shuttlecock with Rs.1200.Are you sure to buy.If 'yes' enter 1 else any number\n");
 scanf("%d",&num);
 if(num==1)
 {
 a[4]++;
 totalcost=totalcost+1200;
 }
 printf("Your cost in cart is %d\n",totalcost);
 break;
 }
 default:{
 printf("Exit from sports\n");
 break;
 }
 }
 break;
 }
 case 2:
 {
 int y;
 printf("Enter\n9-Adidas-Rs.3550\n10-Nike-Rs.5000\n11-Leecooper-Rs.2000\n12-Alishtezia-Rs.4000\n");
 scanf("%d",&y);
 cost[5]=3550;
 cost[6]=5000;
 cost[7]=2000;
 cost[8]=4000;
 switch(y)
 {
 case 9:
 {
 int num;
 printf("You chose Adidas shoes for Rs.3550.Are you sure to buy.If 'yes' enter 1 else any number\n");
 scanf("%d",&num);
 if(num==1)
 {
 a[5]++;
 totalcost=totalcost+3550;
 }
 printf("Your cost in cart is %d\n",totalcost);
 break;
 }
 case 10:
 {
 int num;
 printf("You chose Nike shoes for Rs.5000.Are you sure to buy.If 'yes' enter 1 else any other number\n");
 scanf("%d",&num);
 if(num==1)
 {
 a[6]++;
 totalcost=totalcost+5000;
 }
 printf("Your cost in cart is %d\n",totalcost);
 break;
 }
 case 11:
 {
 int num;
 printf("You chose Leecooper shoes for Rs.2000.Are you sure to buy.If 'yes' enter 1 else any other number\n");
 scanf("%d",&num);
 if(num==1)
 {
 a[7]++;
 totalcost=totalcost+2000;
 }
 printf("Your cost in cart is %d\n",totalcost);
 break;
 }
 case 12:
 {
 int num;
 printf("You chose Alishtezia shoes for Rs.4000.Are you sure to buy.If 'yes' enter 1 else any other number\n");
 scanf("%d",&num);
 if(num==1)
 {
 a[8]++;
 totalcost=totalcost+4000;
 }
 printf("Your cost in cart is %d\n",totalcost);
 break;
 }
 default:{printf("Exit from shoes\n");
 break;
 }
 }
 break;
 }
 case 3:
 {
 int z;
 printf("enter\n13-Greengram(500gm)-Rs.94\n14-Jaggery(250gm)-Rs.52\n15-Salt(2kg)-Rs.1000\n16-Dry ginger-Rs.200\n17-Cloves-Rs.90\n");
 scanf("%d",&z);
 cost[9]=94;
 cost[10]=52;
 cost[11]=1000;
 cost[12]=200;
 cost[13]=90;
 cost[14]=48;
 switch(z)
 {
 case 13:
 {
 int num;
 printf("You chose Greengram dal(500gm)with Rs.94.Are you sure to buy.If 'yes' enter 1 else any number\n");
 scanf("%d",&num);
 if(num==1)
 {
 a[9]++;
 totalcost=totalcost+94;
 }
 printf("Your cost in cart is %d\n",totalcost);
 break;
 }
 case 14:
 {
 int num;
 printf("You chose Jaggery(250gm)with Rs.52.Are you sure to buy.If 'yes' enter 1 else any number\n");
 scanf("%d",&num);
 if(num==1)
 {
 a[10]++;
 totalcost=totalcost+52;
 }
 printf("Your cost in cart is %d\n",totalcost);
 break;
 }
 case 15:
 {
 int num;
 printf("You chose Salt(2kg)with Rs.1000.Are you sure to buy.If 'yes' enter 1 else any number\n ");
 scanf("%d",&num);
 if(num==1)
 {
 a[11]++;
 totalcost=totalcost+1000;
 }
 printf("Your cost in cart is %d\n",totalcost);
 break;
 }
 case 16:
 {
 int num;
 printf("You chose Dry ginger with Rs.200.Are you sure to buy.If 'yes' enter 1 else any number\n");
 scanf("%d",&num);
 if(num==1)
 {
 a[12]++;
 totalcost=totalcost+200;
 }
 printf("Your cost in cart is %d\n",totalcost);
 break;
 }
 case 17:
 {
 int num;
 printf("You chose cloves with Rs.90.Are you sure to buy.If 'yes' enter 1 else any number\n");
 scanf("%d",&num);
 if(num==1)
 {
 a[13]++;
 totalcost=totalcost+90;
 }
 printf("Your cost in cart is %d\n",totalcost);
 break;
 }
 default:{
 printf("Exit from grocery");
 break;
 }
 }
 break;
 }
 default:
 {
 printf("Enter valid categories choice\n");
 break;
 }
 }
 printf("Id\tITEMS\t\t\tQUANTITY\t\t\tCOST\n");
 for(i=0;i<14;i++)
 {
 if(a[i]!=0)
 {
 printf("%d\t%s\t\t%d\t\t\t%d\n",i,items[i],a[i],(cost[i]*a[i]));
 }
 }
 printf("TOTAL COST\t\t\t\t\t%d\n",totalcost);
 printf("If you wish to buy anything more enter \n1 to add item \n2 to delete items \nAny other number to exit\n");
 scanf("%d",&c);
}
if(c==2)
{
 int id;
 printf("Enter id to delete item\n");
 scanf("%d",&id);
 if(id<14&&id>0)
 {
 totalcost=totalcost-(cost[id]*a[id]);
 a[id]=0;
 }
 else{
 printf("enter valid id\n");
 }
 printf("Revised items\n");
 printf("Id\tITEMS\t\t\tQUANTITY\t\tCOST\n");
 for(i=0;i<14;i++)
 {
 if(a[i]!=0)
 {
 printf("%d\t%s\t\t%d\t\t%d\n",i,items[i],a[i],(cost[i]*a[i]));
 }
 }
 printf("total cost\t\t\t\t\t%d\n",totalcost);
 printf("If you wish to buy anything more enter\n1 to add item\n2 to delete items\nany other number to exit\n");
 scanf("%d",&c);
}
}while(c==1||c==2);
 printf("Final cost for Sports + Shoes + Grocery is %d\n",totalcost);
}
int main()
{ int A;
    printf("Enter your information to use the system\n");
input(&s);
printf("\n WELCOME \n",s.name);
printf("\nWHAT WOULD YOU LIKE TO BUY \n");
printf("\n1. MEN AND WOMEN'S FASHION WEAR\n\n2. MOBILES/COMPUTERS OR ELECTRONIC ITEMS\n");
printf("\n3. SPORTS AND GROCERIES\n\n4. EXIT\n");
printf("\nENTER OPTION\n");
l:
scanf("%d",&A);
if(A==1)
f1();
else if(A==2)
f2();
else if(A==3)
f3();
else if(A==4)
exit(0);
else if(!(A==1||A==2||A==3||A==4))
{
    printf("\nWRONG CHOICE ENTER AGAIN\n");
    goto l;
}
}
