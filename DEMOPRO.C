

   Here are the codes of

	 1:Numword
	 2:Vaccine
	 3:Day



  // Program to convert any number into the words . . .


 #include<stdio.h>

 #include<conio.h>

 void  main()
 {
   int   rem,x=0,k[10],c=0,count=0,temp=0;
   long  n,i=0,s=0,sum=0;

   clrscr();
   printf("  \n\n\t\t\t\tWELCOME \n\n  \t\t   CONVER YOUR ANY NUMBER INTO WORDS :)  ");

   printf("\n\n\t Ex. 1 2 3  :-  ONE HUNDRED & TWENTY THREE");

   printf("\n\n\t  So enter any number to convert in WOords :  ");
   scanf("%ld",&n);

   printf("\n\n \t Your number in word is \n\n\t >>   ");

   while(n>0)
   {
     rem = n%10;
     k[i]=rem;
     //printf("k[%d]=%d\n",i,k[i]);
     sum = (sum*10)+ rem;
     n =  n /10;
     count++;
     i++;

   }


     i=i-1;

     while(i>=0)
	 {
	     rem = sum % 10 ;

	     if(c==1)

	     {	 i=i-1;	 }

	     c=1;

	      switch(count) //2

	      {
		 case 2: temp=1;
			 break;
		 case 5: temp=1;
			 break;
		 case 7: temp=1;
			 break;
		 case 9: temp=1;
			 break;
		 default: temp=0;
			  break;
	      }


	     if(x==0)
	     {

	      switch(temp) //1
	       {

		 case 0 : switch(k[i]) //2
			{

			case 1: printf("ONE");
			    break;
			 case 2: printf("TWO");
			    break;
			case 3: printf("THREE");
			    break;
			case 4: printf("FOUR");
			    break;
			case 5: printf("FIVE");
			    break;
			case 6: printf("SIX");
			    break;
			case 7: printf("SEVEN");
			    break;
			case 8: printf("EIGHT");
			    break;
			case 9: printf("NINE");
			     break;
			default :
			     break;

		      }//2

		      switch(count)

		      {
			 case 3 :if(k[i]!=0)
				 {
				 printf(" HUNDRED & ");
				 }
				 break;
			 case 4:
			 case 5: printf(" THOUSAND ");
			      break;
			 case 6:
			 case 7: printf(" LAKH ");
			      break;

			 case 8:
			 case 9:printf(" CRORE ");
			      break;              	  //case : printf("");      //break;
			default :printf(" ");
			      break;
		       }
		      break;

		 case 1 :  switch(k[i]) //3
			  {

			       case 1:

				       if(count!=0)
				       {  s=(k[i]*10+k[i-1]); }

				       else
				       { s=(k[i]*10+k[i]);}

				       k[i-1]=0;


				     switch(s)//4
				     {

				      case 11 : printf("ELEVEN");
					   break;
				      case 12: printf("TWELVE");
					   break;
				      case 13 : printf("THIRTEEN");
					   break;
				      case 14: printf("FORUTEEN");
					   break;
				      case 15: printf("FIFTEEN");
					   break;
				      case 16: printf("SIXTEEN");
					   break;
				      case 17 : printf("SEVENTEEN");
					   break;
				      case 18: printf("EIGHTEEN");
					   break;
				      case 19: printf("NINETEEN");
					   break;


				      default : printf(" ");
					   break;

				     }//4

				   if(count==2)
				   {
				      x=1;
				   }

				   break;


			    case 2 : printf("TWENTY");
				break;
			    case 3 : printf("THIRTY");
				 break;
			    case 4 : printf("FOURTY");
				 break;

			    case 5: printf("FIFTY");
				break;
			    case 6: printf("SIXTY");
				 break;
			    case 7: printf("SEVENTY");
				 break;
			    case 8: printf("EIGTHTY");
				break;
			    case 9: printf("NINTY");
				 break;
			    default : printf("");
				break;
		       } //3
		       printf(" ");
		       break;
		 default : printf("Invalid ...");
			 break;
		 } //1
	      } //i
	      count--;

	   }//while loop

	printf("  <<<   ");

     getch();

  }






/*
  #include<stdio.h>

  #include<conio.h>

  void main()

  {

   int i,m,f=2,n=84,k,d,t=0,temp=0,D,r,x,Y,y;

   clrscr();
   printf("\n\t\t\t\t WELCOME \n\t\t    FIND DATE FOR SECOND DOSE OF YOUR VACCINE.  ");

   Lable1:

   printf("\n\n\tEnter Which is your first vaccine : ");
   printf("\n\t Press > 1 < If COVISHIELD");
   printf("\n\t Press > 2 < If COVAXINE   \n\t>>> ");
   scanf("%d",&x);


   if(x>2)
    {
      printf("Invalide info plz enter info correclty...");

      goto Lable1;
    }
    else
    {


    printf("\n\tEnter the Date of First dose : ");
    scanf("%d",&D);

    printf("\tEnter the Month : ");
    scanf("%d",&m);

    printf("\tEnter the Year : ");
    scanf("%d",&Y);


    if(x==2)
    {
      n=30;
    }

    if(D>31||m>12)
      {

	 printf("\n\n\t Invalid format of DATE.\n\n\t Retry . . .");

      }
     else if(m==2 && D>28)
      {
	 printf("\n\n\t Invalid format of DATE.\n\n\t Retry . . .");
      }

    else

     {

      do

      {

	i=m;

	if(i<=7)

	{

	 if(i==2)
	 {
	   if(Y%4==0)
	   {
	     d=29;
	   }
	   else
	   {
	     d=28;
	   }
	 }
	 else if(i%2==0)
	 {
	   d=30;
	 }
	 else
	 {
	   d=31;
	 }
       }
       else
       {
	if(i%2==0)
	{
	  d=31;
	}
	else
	 {
	   d=30;
	 }
	}//if

	 if(temp==0)
	 {
	   r=d-D;
	   temp=1;
	 }
	 else
	 {
	   r=d;
	 }
	 n=n-r;
	 //printf("n = %d",n);

       if(m==12)
	 {
	  m=1;
	  Y++;
	 }
	else
	{
	   m++;
	}

     } while(n>31);


    for(y=2020;y<Y;y++)

     {

      for(i=1;i<13;i++)
      {

       if(i<=7)

       {

	 if(i==2)
	 {
	   if(y%4==0)
	   {
	     d=29;
	   }
	   else
	   {
	     d=28;
	   }
	 }
	 else if(i%2==0)
	 {
	   d=30;
	 }
	 else
	 {
	   d=31;
	 }
       }
       else
       {
	if(i%2==0)
	{
	  d=31;
	}
	else
	 {
	   d=30;
	 }
	}

	f=(f+d)%7;

       }
      // printf("\t%d   %d  ",y,f);

      }

     }

     for(i=1;i<m;i++)
     {


      if(i<=7)
      {

       if(i==2)
	 {
	   if(Y%4==0)
	   {
	      d=29;
	   }
	   else
	   {
	     d=28;
	   }
	 }
	else if(i%2==0)
	{
	   d=30;
	}
	else
	{
	   d=31;
	}
      }
      else
      {
	if(i%2==0)
	{
	  d=31;
	}
	else
	{
	   d=30;
	}
      }

      f=(f+d)%7;


     // printf("\n\n\t%d   %d",i,f);


    }


      r=(f+n)%7;

    // printf("\nn=%d,m=%d\n",n,m);

     if(m==2&&n>=28)
     {
       n=n-28;
       m=m+1;
     }

     printf("\n\t \t    The Dates for Second dose are :-\n\n\t  \t ");

     Lable2:

     if(t==0)
     {
      switch(r)
       {


	     case 1: printf("MONDAY");
	      break;
	     case 2: printf("TUESDAY");
	      break;
	     case 3: printf("WEDNESDAY");
	      break;
	     case 4: printf("THURSDAY");
	      break;
	     case 5: printf("FRIDAY");
	      break;
	     case 6: printf("SATURDAY");
	      break;
	     case 0: printf("SUNDAY");
	      break;

	    default:printf("\Invalide input");
	      break;

	}
      }

      if(t==1)
     {
       printf(" to ");
     }

      printf(" %d",n);

     if(n<20&&n>10)
     {
       printf("th ");
     }
      else
     {
       k=n%10;

     switch(k)
	{
	      case 1: printf("st ");
		break;
	      case 2: printf("nd ");
		break;
	      case 3: printf("rd ");
		 break;
	      default  :printf("th ");
		break;
	 }
       }

     switch(m)
      {
	     case 1: printf("JANUARY");
	      break;
	     case 2: printf("FEBRUARY");
	      break;
	     case 3: printf("MARCH");
	      break;
	     case 4: printf("APRIL");
	      break;
	     case 5: printf("MAY");
	      break;
	     case 6: printf("JUNE");
	      break;
	     case 7: printf("JULY");
	      break;
	     case 8: printf("AUGUST");
	      break;
	     case 9: printf("SEPTMBER");
	      break;
	      case 10: printf("OCTOBER");
	      break;
	      case 11: printf("NOVEMBER");
	      break;
	      case 12: printf("DECEMBER");
	      break;

	    default:printf("\Invalide input");
	      break;

      }

      //printf("\nn=%d,m=%d\n",n,m);
      if(t==0)
      {
	t=1;

       if(m < 8)
       {

	  if(m%2!=0 )
	  {
	     //printf("%d",m);
	     if(m==2&&n>=28)
	     {

		n=n-28;

	     }

	     else
	     {
	       n=n-1;
	     }
	  }
	  else if(m==2)
	  {
	     n=n+2;
	  }

       }
       else
       {
	  if(m%2==0)
	   {
	     n=n-1;
	   }
	}

	if(m>12)
	 {
	     m=1;
	     Y=Y+1;
	  }

	else if(n<3&&m==1)
	{

	  m=m+2;
	}
	else
	 {

	   m=m+1;

	 }

	if(n==0)
	{
	  //if(m)
	  n=31;
	  m=m-1;
	}

       //printf("\nn=%d\n",n);
       goto Lable2;
      }
     printf(" %d",Y);

     if(t==0)
     {

      switch(r)
       {


	     case 1: printf("MONDAY");
	      break;
	     case 2: printf("TUESDAY");
	      break;
	     case 3: printf("WEDNESDAY");
	      break;
	     case 4: printf("THURSDAY");
	      break;
	     case 5: printf("FRIDAY");
	      break;
	     case 6: printf("SATURDAY");
	      break;
	     case 0: printf("SUNDAY");
	      break;

	    default:printf("\Invalide input");
	      break;

	}
     }
	printf(".");

    } //else

   getch();

} //main








/*  // Program :  Find which day on your birthday & also day of each every date . . .



  #include<stdio.h>

  #include<conio.h>

  void main()

  {

   int d,k,m,f=6,i,r,D,y,Y;

   clrscr();

   printf("\n\n\t\t\t\t WELCOME \n\n\t\t\tHallo !  You can find here . . .");
   printf("\n\n\t WHICH DAY ON YOUR BIRTHDAY WITH ANY DAY OF EACH AND EVERY DATE.\n");

   Lable1:

   printf("\n\n\tSo enter the DATE : ");
   scanf("%d",&D);


   printf("\n\tEnter the MONTH : ");
   scanf("%d",&m);


   printf("\n\tEnter the YEAR : ");
   scanf("%d",&Y);

    if(D>31||m>12)
     {

	 printf("\n\n\t Invalid format of DATE. Retry again . . .");

	 goto Lable1;

      }
     else if(m==2 && D>28)
      {
	 printf("\n\n\t Invalid format of DATE. Retry again . . .");

	 goto Lable1;
      }

    else

     {

      for(y=1950;y<Y;y++)
      {

	for(i=1;i<13;i++)
       {

	if(i<=7)

	{

	 if(i==2)
	  {
	   if(y%4==0)
	    {	     d=29;	    }
	   else
	    {	     d=28;	   }
	  }
	 else if(i%2==0)
	 {	   d=30;	 }
	 else
	 {	   d=31;	 }
       }
       else
       {
	if(i%2==0)
	  {	  d=31;	}
	else
	  {	   d=30;	 }
	}

	f=(f+d)%7;
       }
      // printf("\t%d   %d  ",y,f);

     }//for

     for(i=1;i<m;i++)
     {


      if(i<=7)
      {

       if(i==2)
	 {
	   if(Y%4==0)
	   {	      d=29;	   }
	   else
	   {	     d=28;	   }
	 }
	else if(i%2==0)
		{	   d=30;	}
	else
	  {	   d=31;	}
      }
      else
      {
	if(i%2==0)
		{	  d=31;	}
	else
	     {	   d=30;	}
      }

      f=(f+d)%7;

     // printf("\n\n\t%d   %d",i,f);

       }
      }

      r=(f+D)%7;

     printf("\n\n\n       \t    \t     The DAY at %d",D);

     if(D<20&&D>10)
     {
       printf(" th ");
     }
      else
     {
       k=D%10;

     switch(k)
	{
	      case 1: printf("st ");
		break;
	      case 2: printf("nd ");
		break;
	      case 3: printf("rd ");
		 break;
	      default  :printf("th ");
		break;
	 }
       }
     switch(m)
      {
	     case 1: printf("JANUARY");
	      break;
	     case 2: printf("FEBRUARY");
	      break;
	     case 3: printf("MARCH");
	      break;
	     case 4: printf("APRIL");
	      break;
	     case 5: printf("MAY");
	      break;
	     case 6: printf("JUNE");
	      break;
	     case 7: printf("JULY");
	      break;
	     case 8: printf("AUGUST");
	      break;
	     case 9: printf("SEPTMBER");
	      break;
	      case 10: printf("OCTOBER");
	      break;
	      case 11: printf("NOVEMBER");
	      break;
	      case 12: printf("DECEMBER");
	      break;

	    default:printf("\Invalide input");
	      break;

      }

     printf("  %d   \n\n\n\t\t\t>>>>",y);

     switch(r)
       {


	     case 1: printf("\tMONDAY");
	      break;
	     case 2: printf("\tTUESDAY");
	      break;
	     case 3: printf("\tWEDNESDAY");
	      break;
	     case 4: printf("\tTHURSDAY");
	      break;
	     case 5: printf("\tFRIDAY");
	      break;
	     case 6: printf("\tSATURDAY");
	      break;
	     case 0: printf("\tSUNDAY");
	      break;

	    default:printf("\Invalide input");
	      break;

	}

	printf("    <<<<",y);

     getch();

  }
