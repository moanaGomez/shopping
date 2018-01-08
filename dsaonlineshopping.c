#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <process.h>
struct customer
{
    char name[25];
    char email[30];
    char address[100];
    long int phone;
    int pinnumber;
    char city[25];
    char state[30];

}cu;
char seller[50];
void main()
{
    char password[20],veriword[20];
    printf("\n\n\n\n                          Welcome to Online Bazaar\n");
    printf("\n                                 Yaha nahi....Toh kahi nahi\n");
getch();
system("cls");
    printf("Enter login password\n");
    fflush(stdin);
    gets(password);

    system("cls");

    printf("Re-enter the password\n ");
    gets(veriword);
    system("cls");
    if(strcmp(password,veriword)!=0)
    {
        printf("*****AUTHENTICATION FAILED******");
        getch();
        exit(0);
    }
  int ch;
    thatline:
        printf("\n\nEnter an option:\n 1  Mens' wear\n  2  books\n 3  Exit Shopping\n");
        scanf("%d",&ch);
        system("cls");
        switch(ch)
        {
            case 1:menswear();goto thatline;break;

            case 2:books();goto thatline;break;
            case 3:goto ttline;
            default:
                printf("******Invalid option entry******");
                goto thatline;
        }
     ttline:   system("cls");
        printf("\nNow Please give your details for shipping\n");
        printf("Name:");
        scanf("%s",cu.name);
        printf("Email ID:");
        scanf("%s",cu.email);

        printf("Address:");
        scanf("%s",cu.address);

        printf("Phone number:");
        scanf("%ld",&cu.phone);

        printf("Pin number:");
        scanf("%d",&cu.pinnumber);

        printf("City:");
        scanf("%s",cu.city);

        printf("State:");
        scanf("%s",cu.state);
        system("cls");
        getch();

        printf("Name:%s\n",cu.name);
        printf("Email:%s\n",cu.email);
        printf("Address:%s\n",cu.address);
        printf("Phone:%ld\n",cu.phone);
       printf("Pin Number:%d\n",cu.pinnumber);
        printf("City:%s\n",cu.city);
        printf("State:%s\n",cu.state);
        printf("\n***************Thank you for shopping here!!!!*********************\n");
        getch();
}
 int pricerange()
{
    int ch;
    printf("Enter the price range:\n1  below 500\n 2  500-1000\n 3  1000-2000 \n 4  2000-5000\n ");
    scanf("%d",&ch);
    system("cls");
    switch(ch)
    {
        case 1:return 1;break;
        case 2: return 2;break;
        case 3:return 3;break;
        case 4:return 4;break;
        default:printf("******Invalid option entry******");
    }

}




void menswear()
{
    int ch,option;
    char sizes;
    int prange;

       thatline:
        printf("\nEnter the size :\nS or M or L\n");
        fflush(stdin);
       scanf(" %c",&sizes);

     if(sizes=='s'||sizes=='S'||sizes=='m'||sizes=='M'||sizes=='l'||sizes=='L')
    {
         printf("\n 1  casual T-shirts\n 2  Formal shirts\n 3  Blazers\n 4  Jeans\n");
        scanf("%d",&ch);
        system("cls");

    switch(ch)
    {
    case 1:prange=pricerange();
           switch(prange)
           {
               case 1:printf("\n 1  Wrangler\n 2  Polo tees\n");
                      scanf("%d",&option);
                      if(option==1)
                      {
                          printf("\nThe purchased product is  Casual T-shirt of Size %c \n",sizes);
                          printf("\n The Price of the shirt is Rs450\nShipping Charge is Rs50\n Grand Total is Rs500\n ");
                          printf("\n The product will be delivered to you within 5 days\n");
                          printf("\n The Seller is Karishma Fashions,New Delhi\n ");
                      }
                      else
                      {
                           printf("\nThe purchased product is  T-shirt of Size %c \n",sizes);
                          printf("\n The Price of the shirt is Rs476\nShipping Charge is Rs60\n Grand Total is Rs536\n ");
                          printf("\n The product will be delivered to you within 4 days\n");
                          printf("\n The Seller is Belleza,Mumbai\n ");

                      }
               break;
               case 2:printf("\n 1  Adidas\n 2  Jack&Jones\n");
                      scanf("%d",&option);
                       if(option==1)
                      {
                          printf("\nThe purchased product is  Casual T-shirt of Size %c \n",sizes);
                          printf("\n The Price of the shirt is Rs600\nShipping Charge is Rs50\n Grand Total is Rs650\n ");
                          printf("\n The product will be delivered to you within 5 days\n");
                          printf("\n The Seller is Karishma Fashions,New Delhi\n ");
                      }
                      else
                      {
                           printf("\nThe purchased product is  T-shirt of Size %c \n",sizes);
                          printf("\n The Price of the shirt is Rs800\nShipping Charge is Rs60\n Grand Total is Rs860\n ");
                          printf("\n The product will be delivered to you within 4 days\n");
                          printf("\n The Seller is Belleza,Mumbai\n ");

                      }
                      break;
               case 3:printf("\n 1  Raymond \n 2  Siyarams\n");
                      scanf("%d",&option);
                       if(option==1)
                      {
                          printf("\nThe purchased product is  Casual T-shirt of Size %c \n",sizes);
                          printf("\n The Price of the shirt is Rs1200\nShipping Charge is Rs50\n Grand Total is Rs1250\n ");
                          printf("\n The product will be delivered to you within 5 days\n");
                          printf("\n The Seller is Karishma Fashions,New Delhi\n ");
                      }
                      else
                      {
                           printf("\nThe purchased product is  T-shirt of Size %c \n",sizes);
                          printf("\n The Price of the shirt is Rs1800\nShipping Charge is Rs60\n Grand Total is Rs1860\n ");
                          printf("\n The product will be delivered to you within 4 days\n");
                          printf("\n The Seller is Belleza,Mumbai\n ");

                      }
               break;


               case 4:printf("\n 1  Lee Cooper\n 2  Levis\n");
                scanf("%d",&option);
                       if(option==1)
                      {
                          printf("\nThe purchased product is  Casual T-shirt of Size %c \n",sizes);
                          printf("\n The Price of the shirt is Rs2500\nShipping Charge is Rs50\n Grand Total is Rs2550\n ");
                          printf("\n The product will be delivered to you within 5 days\n");
                          printf("\n The Seller is Karishma Fashions,New Delhi\n ");
                      }
                      else
                      {
                           printf("\nThe purchased product is  T-shirt of Size %c \n",sizes);
                          printf("\n The Price of the shirt is Rs2750\nShipping Charge is Rs60\n Grand Total is Rs2810\n ");
                          printf("\n The product will be delivered to you within 4 days\n");
                          printf("\n The Seller is Belleza,Mumbai\n ");

                      }
                    break;
               default:printf("\n******Invalid option entry******\n");break;

           }
           break;

    case 2:prange=pricerange();
           switch(prange)
           {
               case 1:printf("\n 1  Louis Philippe\n 2  Allen Solly\n");
                scanf("%d",&option);
                       if(option==1)
                      {
                          printf("\nThe purchased product is formal shirt of Size %c \n",sizes);
                          printf("\n The Price of the shirt is Rs400\nShipping Charge is Rs50\n Grand Total is Rs450\n ");
                          printf("\n The product will be delivered to you within 5 days\n");
                          printf("\n The Seller is Karishma Fashions,New Delhi\n ");
                      }
                      else
                      {
                           printf("\nThe purchased product is  formal shirt of Size %c \n",sizes);
                          printf("\n The Price of the shirt is Rs 480\nShipping Charge is Rs50\n Grand Total is Rs530\n ");
                          printf("\n The product will be delivered to you within 4 days\n");
                          printf("\n The Seller is Belleza,Mumbai\n ");

                      }
               break;
               case 2:printf("\n 1  Peter England\n 2  Arrow\n");
                scanf("%d",&option);
                       if(option==1)
                      {
                          printf("\nThe purchased product is formal shirt of Size %c \n",sizes);
                          printf("\n The Price of the shirt is Rs700\nShipping Charge is Rs50\n Grand Total is Rs750\n ");
                          printf("\n The product will be delivered to you within 5 days\n");
                          printf("\n The Seller is Karishma Fashions,New Delhi\n ");
                      }
                      else
                      {
                           printf("\nThe purchased product is  formal shirt of Size %c \n",sizes);
                          printf("\n The Price of the shirt is Rs850\nShipping Charge is Rs60\n Grand Total is Rs910\n ");
                          printf("\n The product will be delivered to you within 4 days\n");
                          printf("\n The Seller is Belleza,Mumbai\n ");

                      }
               break;
               case 3:printf("\n 1  Raymond \n 2  Siyarams\n");
                scanf("%d",&option);
                       if(option==1)
                      {
                          printf("\nThe purchased product is  formal shirt of Size %c \n",sizes);
                          printf("\n The Price of the shirt is Rs1300\nShipping Charge is Rs50\n Grand Total is Rs1350\n ");
                          printf("\n The product will be delivered to you within 5 days\n");
                          printf("\n The Seller is Karishma Fashions,New Delhi\n ");
                      }
                      else
                      {
                           printf("\nThe purchased product is  formal shirt of Size %c \n",sizes);
                          printf("\n The Price of the shirt is Rs1600\nShipping Charge is Rs60\n Grand Total is Rs1660\n ");
                          printf("\n The product will be delivered to you within 4 days\n");
                          printf("\n The Seller is Belleza,Mumbai\n ");

                      }
               break;

               case 4:printf("\n 1  Raymond \n 2  Siyarams \n 3  Ralph Lauren\n");
                scanf("%d",&option);
                       if(option==1)
                      {
                          printf("\nThe purchased product is formal shirt of Size %c \n",sizes);
                          printf("\n The Price of the shirt is Rs2200\nShipping Charge is Rs50\n Grand Total is Rs2250\n ");
                          printf("\n The product will be delivered to you within 5 days\n");
                          printf("\n The Seller is Karishma Fashions,New Delhi\n ");
                      }
                      else
                      {
                           printf("\nThe purchased product is  formal shirt of Size %c \n",sizes);
                          printf("\n The Price of the shirt is Rs2500\nShipping Charge is Rs50\n Grand Total is Rs2550\n ");
                          printf("\n The product will be delivered to you within 4 days\n");
                          printf("\n The Seller is Belleza,Mumbai\n ");

                      }
               break;

               default:printf("******Invalid option entry******");

           }
           break;
    case 3:prange=pricerange();
           switch(prange)
           {

               case 1:printf("\n 1  Arrow\n ****Sorry!Only one brand available****\n");


                           printf("\nThe purchased product is a blazer of Size %c \n",sizes);
                          printf("\n The Price of the shirt is Rs499\nShipping Charge is Rs60\n Grand Total is Rs559\n ");
                          printf("\n The product will be delivered to you within 4 days\n");
                          printf("\n The Seller is Belleza,Mumbai\n ");


               break;
               case 2:printf("\n 1  Raymond \n 2  Siyarams\n");
                scanf("%d",&option);
                       if(option==1)
                      {
                          printf("\nThe purchased product is a blazer of Size %c \n",sizes);
                          printf("\n The Price of the shirt is Rs800\nShipping Charge is Rs50\n Grand Total is Rs8050\n ");
                          printf("\n The product will be delivered to you within 5 days\n");
                          printf("\n The Seller is Karishma Fashions,New Delhi\n ");
                      }
                      else
                      {
                           printf("\nThe purchased product is a blazer  of Size %c \n",sizes);
                          printf("\n The Price of the shirt is Rs990\nShipping Charge is Rs60\n Grand Total is Rs1050\n ");
                          printf("\n The product will be delivered to you within 4 days\n");
                          printf("\n The Seller is Belleza,Mumbai\n ");

                      }
               break;

               case 3:printf("\n 1  Raymond \n 2  Siyarams \n 3  Ralph Lauren\n");
                scanf("%d",&option);
                       if(option==1)
                      {
                          printf("\nThe purchased product is a blazer of Size %c \n",sizes);
                          printf("\n The Price of the shirt is Rs1400\nShipping Charge is Rs50\n Grand Total is Rs1450\n ");
                          printf("\n The product will be delivered to you within 5 days\n");
                          printf("\n The Seller is Karishma Fashions,New Delhi\n ");
                      }
                      else
                      {
                           printf("\nThe purchased product is a blazer  of Size %c \n",sizes);
                          printf("\n The Price of the shirt is R1900\nShipping Charge is Rs60\n Grand Total is Rs1960\n ");
                          printf("\n The product will be delivered to you within 4 days\n");
                          printf("\n The Seller is Belleza,Mumbai\n ");

                      }
               break;
               case 4:printf("\n 1  Allen Solly\n 2  John Miller\n");
                scanf("%d",&option);
                       if(option==1)
                      {
                          printf("\nThe purchased product is a blazer of Size %c \n",sizes);
                          printf("\n The Price of the shirt is Rs3500\nShipping Charge is Rs100\n Grand Total is Rs3600\n ");
                          printf("\n The product will be delivered to you within 5 days\n");
                          printf("\n The Seller is Karishma Fashions,New Delhi\n ");
                      }
                      else
                      {
                           printf("\nThe purchased product is a blazer of Size %c \n",sizes);
                          printf("\n The Price of the shirt is Rs4900\nShipping Charge is Rs60\n Grand Total is Rs4960\n ");
                          printf("\n The product will be delivered to you within 4 days\n");
                          printf("\n The Seller is Belleza,Mumbai\n ");

                      }
               break;

               default:printf("******Invalid option entry******");

           }
           break;
          break;
    case 4:prange=pricerange();
           switch(prange)
           {
               case 1:printf("\n 1  Wrangler \n ****Sorry!Only one brand available****\n");
                        printf("\nThe purchased product is  Jeans of Size %c \n",sizes);
                          printf("\n The Price of the Product is Rs450\nShipping Charge is Rs100\n Grand Total is Rs550\n ");
                          printf("\n The product will be delivered to you within 7 days\n");
                          printf("\n The Seller is Mayank Sellers,Bangalore\n ");
                       break;
               case 2:printf("\n 1  Diesel \n 2  Pepe Jean \n");
                       scanf("%d",&option);
                       if(option==1)
                       {


                          printf("\nThe purchased product is  Jeans of Size %c \n",sizes);
                          printf("\n The Price of the Product is Rs700\nShipping Charge is Rs100\n Grand Total is Rs800\n ");
                          printf("\n The product will be delivered to you within 6 days\n");
                          printf("\n The Seller is Svastik Fashions,Kolkata\n ");
                       }
                       else
                       {

                          printf("\nThe purchased product is  Jeans of Size %c \n",sizes);
                          printf("\n The Price of the Product is Rs950\nShipping Charge is Rs100\n Grand Total is Rs1050\n ");
                          printf("\n The product will be delivered to you within 3 days\n");
                          printf("\n The Seller is Bhoomika Enterprises,Bhuvaneshwar\n ");
                       }
                       break;
               case 3:printf("\n 1   Lee \n 2   Flying Machine\n");
                       scanf("%d",&option);
                       if(option==1)
                       {


                          printf("\nThe purchased product is  Jeans of Size %c \n",sizes);
                          printf("\n The Price of the Product is Rs1250\nShipping Charge is Rs50\n Grand Total is Rs1300\n ");
                          printf("\n The product will be delivered to you within 3 days\n");
                          printf("\n The Seller is Mangalore Fashions,Kolar\n ");
                       }
                       else
                       {

                          printf("\nThe purchased product is  Jeans of Size %c \n",sizes);
                          printf("\n The Price of the Product is Rs1950\nShipping Charge is Rs100\n Grand Total is Rs1050\n ");
                          printf("\n The product will be delivered to you within 2 days\n");
                          printf("\n The Seller is Vuoguish,Ahmedabad\n ");
                       }
                      break;


               case 4:printf("\n 1  Lee Cooper\n 2  Levis\n");
                       scanf("%d",&option);
                       if(option==1)
                       {


                          printf("\nThe purchased product is  Jeans of Size %c \n",sizes);
                          printf("\n The Price of the Product is Rs 3000\nShipping Charge is Rs200\n Grand Total is Rs3200\n ");
                          printf("\n The product will be delivered to you within 5 days\n");
                          printf("\n The Seller is Mayra Fashions,Kolkata\n ");
                       }
                       else
                       {

                          printf("\nThe purchased product is  Jeans of Size %c \n",sizes);
                          printf("\n The Price of the Product is Rs4500\nShipping Charge is Rs100\n Grand Total is Rs4600\n ");
                          printf("\n The product will be delivered to you within 7 days\n");
                          printf("\n The Seller is Abof,Mumbai\n ");
                       }

                      break;
               default:printf("******Invalid option entry******");

           }
           break;

    default:printf("\n*******Invalid option entry******\n");

    }
    }
     else{
        printf("\n****************INVALID size entry*******************\n");
        goto thatline;
         }
}
/*******************************************************End of menswear module*************************************************************/


void books()
{
    int choice,ch,op;
   thisline: printf("Do you want to select by the category of books or by author?\n Press 1 or 2\n ");
    scanf("%d",&ch);
    system("cls");
    if(ch==1)
    {
   thatline: printf("\nEnter a choice:\n1  Literature\n2  Fiction\n");
    scanf("%d",&choice);
    system("cls");
    switch(choice)
    {
        case 1:printf("1  Pride and Prejudice\n2  Gulliver's Travels\n3  Alice in Wonderland\n4  Frankenstein\n5  The Great Gatsby\n");

               scanf("%d",&op);
               system("cls");
               switch(op)
               {
               case 1:printf("The Author of 'Pride and Prejudice' is Jane Austen\n");
                      printf("The price of this book is Rs600\n Shipping price is Rs60\n Grand total is Rs660\n This book will be delivered within 4 days\n");
                      break;
               case 2:printf("The Author of  Gulliver's Travels is Jane Austen\n");
                      printf("The price of this book is Rs800\n Shipping price is Rs50\n Grand total is Rs850\n This book will be delivered within 5 days\n");
                      break;
               case 3:printf("The Author of Alice in Wonderland is Jane Austen\n");
                      printf("The price of this book is Rs700\n Shipping price is Rs50\n Grand total is Rs750\n This book will be delivered within 4 days\n");
                      break;
               case 4:printf("The Author of Frankensteinis is Jane Austen\n");
                      printf("The price of this book is Rs500\n Shipping price is Rs50\n Grand total is Rs550\n This book will be delivered within 6 days\n");
                      break;
               case 5:printf("The Author of The Great Gatsby is Jane Austen\n");
                      printf("The price of this book is Rs900\n Shipping price is Rs50\n Grand total is Rs950\n This book will be delivered within 7 days\n");
                      break;

                default:printf("******Invalid option entry******");
               }
               break;

        case 2:printf("1  Game of Thrones series\n2  Harry Potter series\n3  Da Vinci Code\n4  Lord Of The Rings series\n");
               scanf("%d",&op);
               system("cls");
               switch(ch)
               {
                   case 1:printf("the Author of this book is George R R Martin \n");
                        printf("the price of this book is Rs1000\n Shipping price is Rs100\n Grand total is Rs1100\n This book will be delivered wiyhin 5 days");
                         break;
                   case 2:printf("the Author of this book is J K Rowling \n");
                        printf("the price of this book is Rs900\n Shipping price is Rs100\n Grand total is Rs1000\n This book will be delivered wiyhin 6 days");
                         break;
                   case 3:printf("the Author of this book is Dan Brown \n");
                        printf("the price of this book is Rs1000\n Shipping price is Rs100\n Grand total is Rs1100\n This book will be delivered wiyhin 7 days");
                         break;
                   case 4:printf("the Author of this book is J R R Tolkien\n");
                        printf("the price of this book is Rs1200\n Shipping price is Rs100\n Grand total is Rs1300\n This book will be delivered wiyhin 3 days");
                         break;
                   default:printf("\n******Invalid option entry******\n");


               }
               break;


        default:printf("******Invalid option entry******");
        goto thatline;
    }//end of switch
    }//end of if
    else if(ch==2)
    {

   tline: printf("\nEnter a choice:\n1  Dan Brown\n2  Chetan Bhagat\n3  Charles Dickens\n");
    scanf("%d",&choice);
    system("cls");
    switch(choice)
    {
        case 1:printf("Dan Brown's Books:\n1 The DaVinci Code\n2  Angels And Demons\n3  Inferno\n");
               scanf("%d",&op);
               switch(op)
               {
               case 1:printf("the Author of this book is Dan Brown \n");
                        printf("the price of this book is Rs1000\n Shipping price is Rs100\n Grand total is Rs1100\n This book will be delivered wiyhin 7 days");break;
               case 2:printf("the Author of this book is Dan Brown \n");
                        printf("the price of this book is Rs800\n Shipping price is Rs100\n Grand total is Rs900\n This book will be delivered wiyhin 6 days");break;
               case 3:printf("the Author of this book is Dan Brown \n");
                        printf("the price of this book is Rs700\n Shipping price is Rs100\n Grand total is Rs800\n This book will be delivered wiyhin 5 days");break;
                default:printf("******Invalid option entry******");
               }
               break;
        case 2:printf("Chetan Bhagat's Books:\n1 Two States\n2  One Indian Girl\n3  Making India Awesome\n");
               scanf("%d",&op);
               switch(op)
               {
               case 1:printf("the Author of this book is Chetan Bhagat \n");
                        printf("the price of this book is Rs1000\n Shipping price is Rs100\n Grand total is Rs1100\n This book will be delivered wiyhin 3 days");break;
               case 2:printf("the Author of this book is Chetan Bhagat \n");
                        printf("the price of this book is Rs800\n Shipping price is Rs100\n Grand total is Rs900\n This book will be delivered wiyhin 7 days");break;
               case 3:printf("the Author of this book is Chetan Bhagat \n");
                        printf("the price of this book is Rs700\n Shipping price is Rs100\n Grand total is Rs800\n This book will be delivered wiyhin 4 days");break;
                default:printf("******Invalid option entry******");
               }
               break;
        case 3:printf("Charles Dicken's Books:\n1 Great Expectation\n2  Oliver Twist\n3  A Christmas Carol\n");
               scanf("%d",&op);
               switch(op)
               {
               case 1:printf("the Author of this book is Charles Dicken \n");
                        printf("the price of this book is Rs1000\n Shipping price is Rs100\n Grand total is Rs1100\n This book will be delivered wiyhin 2 days");break;
               case 2:printf("the Author of this book is Charles Dicken \n");
                        printf("the price of this book is Rs800\n Shipping price is Rs100\n Grand total is Rs900\n This book will be delivered wiyhin 8 days");break;
               case 3:printf("the Author of this book is Charles Dicken \n");
                        printf("the price of this book is Rs700\n Shipping price is Rs100\n Grand total is Rs800\n This book will be delivered wiyhin 3 days");break;
                default:printf("******Invalid option entry******");
               }
               break;

        default:printf("******Invalid option entry******");
        goto tline;
    }

    }
    else
    {

        printf("******Invalid option entry******");
        goto thisline;

    }//end of else
}

   /*************************************************END of BOOKS MODULE**************************************************************************/
