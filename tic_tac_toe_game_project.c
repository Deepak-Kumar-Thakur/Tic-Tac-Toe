#include<stdio.h>
#include<stdlib.h>
void print_board_with_cell_no(void);
void initialize_array(char (*ptr)[3]);
void input_array(char (*ptr)[3], int cell_no, int flag);
void print_board(char (*ptr)[3]);
char check_winner(char (*ptr)[3]);
int main(void)
{

	char arr[3][3];
	char ch, c;
	int i, j, flag, cell_no;
	do
	{
		initialize_array(arr);
		printf("TICTACTOE\n");
		print_board_with_cell_no();
		printf("INSTRUCTIONS\n");
		printf("Player 1 and Player 2 should enter the cell no.\n");
		for(i=0, flag=1; i<3; i++)
		{
			for(j=0; j<3; j++)
			{
				if(flag==1)
				{
					printf("Player 1: ");
					scanf("%d", &cell_no);
					input_array(arr, cell_no, flag);
					print_board(arr);
					ch=check_winner(arr);
					if(ch=='x')
					{
						printf("Player 1 is the Winner\n");
						break;
					}
					flag=2;
				}
				else
				{
					printf("Player 2: ");
					scanf("%d", &cell_no);
					input_array(arr, cell_no, flag);
					print_board(arr);
					ch=check_winner(arr);
					if(ch=='o')
					{
						printf("Player 2 is the Winner\n");
						break;
					}	
					flag=1;
				}
			}
			if(ch=='x' || ch=='o')
				break;
		}
		if(ch=='t')
			printf("Tie\n");
		printf("Press y or Y to continue the game\n");
		printf("Press n or N to exit the game\n");
		scanf(" %c", &c);
	}while(c =='y'||c =='Y');
	return 0;
}
void print_board_with_cell_no(void)
{
	printf(" 1 | 2 | 3 \n");
	printf("---|---|---\n");
	printf(" 4 | 5 | 6 \n");
	printf("---|---|---\n");
	printf(" 7 | 8 | 9 \n");
}
void initialize_array(char (*ptr)[3])
{
	int i, j;
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
			ptr[i][j]=' ';
	}
}
void input_array(char (*ptr)[3], int cell_no, int flag)
{
	int i, j;	
	switch(cell_no)
	{
		case 1:
			i=0; 
			j=0;
			if(flag==1)
				ptr[i][j]='x';
			else
				ptr[i][j]='o';
			break;
		case 2:
			i=0;
			j=1;
			if(flag==1)
				ptr[i][j]='x';
			else
				ptr[i][j]='o';
			break;	
		case 3:
			i=0;
			j=2;
			if(flag==1)
				ptr[i][j]='x';
			else
				ptr[i][j]='o';
			break;
		case 4:
			i=1;
			j=0;
			if(flag==1)
				ptr[i][j]='x';
			else
				ptr[i][j]='o';
			break;		
		case 5:
			i=1;
			j=1;
			if(flag==1)
				ptr[i][j]='x';
			else
				ptr[i][j]='o';
			break;		
		case 6:
			i=1;
			j=2;
			if(flag==1)
				ptr[i][j]='x';
			else
				ptr[i][j]='o';
			break;		
		case 7:
			i=2;
			j=0;
			if(flag==1)
				ptr[i][j]='x';
			else
				ptr[i][j]='o';
			break;		
		case 8:
			i=2;
			j=1;
			if(flag==1)
				ptr[i][j]='x';
			else
				ptr[i][j]='o';
			break;		
		case 9:
			i=2;
			j=2;
			if(flag==1)
				ptr[i][j]='x';
			else
				ptr[i][j]='o';
	}
}
void print_board(char (*ptr)[3])
{	
	system("clear");
	printf(" %c | %c | %c \n", ptr[0][0], ptr[0][1], ptr[0][2]);
	printf("---|---|--- \n");
	printf(" %c | %c | %c \n", ptr[1][0], ptr[1][1], ptr[1][2]);
	printf("---|---|---\n");
	printf(" %c | %c | %c \n", ptr[2][0], ptr[2][1], ptr[2][2]);
}
char check_winner(char (*ptr)[3])
{
	int i, j, count1=0, count2=0, count3=0, count4=0, count5=0, count6=0, count7=0, count8=0, count9=0, count10=0, count11=0, count12=0, count13=0, count14=0, count15=0, count16=0;
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			if((i==0)&&(ptr[i][j]=='x'))
			{
				count1++;
				if(count1==3)
					return ('x');
			}
			if((i==1)&&(ptr[i][j]=='x'))
			{
				count2++;
				if(count2==3)
					return ('x');
			}
			if((i==2)&&(ptr[i][j]=='x'))
			{
				count3++;
				if(count3==3)
					return ('x');
			}
			if((j==0)&&(ptr[i][j]=='x'))
			{
				count4++;
				if(count4==3)
					return ('x');
			}
			if((j==1)&&(ptr[i][j]=='x'))
			{
				count5++;
				if(count5==3)
					return ('x');
			}
			if((j==2)&&(ptr[i][j]=='x'))
			{
				count6++;
				if(count6==3)
					return ('x');
			}
			if((i==j)&&(ptr[i][j]=='x'))
			{
				count7++;
				if(count7==3)
					return ('x');
			}
			if((j==-i+2)&&(ptr[i][j]=='x'))
			{
				count8++;
				if(count8==3)
					return ('x');
			}
			if((i==0)&&(ptr[i][j]=='o'))
			{
				count9++;
				if(count9==3)
					return ('o');
			}
			if((i==1)&&(ptr[i][j]=='o'))
			{
				count10++;
				if(count10==3)
					return ('o');
			}
			if((i==2)&&(ptr[i][j]=='o'))
			{
				count11++;
				if(count11==3)
					return ('o');
			}
			if((j==0)&&(ptr[i][j]=='o'))
			{
				count12++;
				if(count12==3)
					return ('o');
			}
			if((j==1)&&(ptr[i][j]=='o'))
			{
				count13++;
				if(count13==3)
					return ('o');
			}
			if((j==2)&&(ptr[i][j]=='o'))
			{
				count14++;
				if(count14==3)
					return ('o');
			}
			if((i==j)&&(ptr[i][j]=='o'))
			{
				count15++;
				if(count15==3)
					return ('o');
			}
			if((j==-i+2)&&(ptr[i][j]=='o'))
			{
				count16++;
				if(count16==3)
					return ('o');
			}
		}
	}
	return ('t');
}
