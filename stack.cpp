#include<iostream>
#include<stdio.h>
using namespace std;
#define maxsize 5
int main()
{
	int top,i,data,ch;
	top=-1;
	int stack[maxsize];
	char c;
	do
	{
		cout<<"1.Push";
		cout<<"\n2.Pop";
		cout<<"\n3.Display";
		cout<<"\n4.Exit";
		cout<<"\nEnter your choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:
				if(top==maxsize)
				{
					cout<<"stack is overflow";
					exit(0);
				}
				else{
					top=top+1;
					cout<<"\nEnter data";
					cin>>data;
					stack[top]=data;
				}
				break;
				case 2:
					if(top==-1)
					{
						cout<<"\nStack underflow";
					}
					else{
						data=stack[top];
						cout<<"\ndeleted data item is:"<<data;
						top=top-1;
						break;
					}
					case 3:
						if(top==-1)
						{
							cout<<"\nno data in stack";
						}
						else{
							for(i=0;i<=top;i++)
							{
								cout<<stack[i]<<"\n";
							}
						}
						break;
						case 4:
							exit(0);
							break;
							default:
								cout<<"invalid input";
								break;
		}
		cout<<"Do you want to continue:y or n ";
		cin>>c;
	}while(c!='n');
	return(0);
}
