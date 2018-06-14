#include<iostream>
#include<fstream>
using namespace std;
int lifelines(int &AP, int &FF, int &FTQ, int &PP);
void round1(int &AP, int &FF, int &FTQ, int &PP, int &flag1);
void round2(int &AP, int &FF, int &FTQ, int &PP, int &flag2);
void round3(int &AP, int &FF, int &FTQ, int &PP, int &flag3);
void round4(int &AP, int &FF, int &FTQ, int &PP, int &flag4);
void round5(int &AP, int &FF, int &FTQ, int &PP, int &flag5);
void round6(int &AP, int &FF, int &FTQ, int &PP, int &flag6);
void round7(int &AP, int &FF, int &FTQ, int &PP, int &flag7);
void round8(int &AP, int &FF, int &FTQ, int &PP, int &flag8);
void round9(int &AP, int &FF, int &FTQ, int &PP, int &flag9);
void grand_finale(int &AP, int &FF, int &FTQ, int &PP,int &flag10);
int get_line(int k);
void put_line(int line);
char get_ques(int &FF_line,int &ans_line,int &line,string (&str1)[4]);
void rules();
int main()
{
	int AP,FF,FTQ,PP,flag1,flag2,flag3,flag4,flag5,flag6,flag7,flag8,flag9,flag10;
	AP=FF=FTQ=PP=1;
	flag1=flag2=flag3=flag4=flag5=flag6=flag7=flag8=flag9=flag10=0;
	string name;
	changed_name:
	cout<<"Enter User Name"<<endl;
	cin>>name;
	for(int i=0;i<name.length();i++)
	{
		if(!isalpha(name[i]))
		{
			cout<<"try again"<<endl;
			goto changed_name;
		}
		}
		cout<<"\t\t\tWelcome "<<name<<"..in KBC SEASON 9 2k17"<<endl;
		rules();
		cout<<"*\twelcome to round 1."<<endl<<" \tHope u will win 10,000 prize money for round 1."<<endl;
		round1(AP,FF,FTQ,PP,flag1);
		printf("\033c");
		if(flag1==1)
		{
			cout<<"*\twelcome to round 2."<<endl<<" \tHope u will win 20,000 prize money for round 2."<<endl;
			round2(AP,FF,FTQ,PP,flag2);
		}
		printf("\033c");
		if(flag2==1)
		{
			cout<<"*\twelcome to round 3."<<endl<<" \tHope u will win 50,000 prize money for round 3."<<endl;
			round3(AP,FF,FTQ,PP,flag3);
		}
		printf("\033c");
		if(flag3==1)
		{
			cout<<"*\twelcome to round 4."<<endl<<" \tHope u will win 80,000 prize money for round 4."<<endl;
			round4(AP,FF,FTQ,PP,flag4);
		}
		printf("\033c");
		if(flag4==1)
		{
			cout<<"*\twelcome to round 5."<<endl<<" \tHope u will win 1 LAC prize money for round 5."<<endl;
			round5(AP,FF,FTQ,PP,flag5);
		}
		printf("\033c");
		if(flag5==1)
		{
			cout<<"*\twelcome to round 6."<<endl<<" \tHope u will win 10 LAC prize money for round 6."<<endl;
			round6(AP,FF,FTQ,PP,flag6);
		}
		printf("\033c");
		if(flag6==1)
		{
			cout<<"*\twelcome to round 7."<<endl<<" \tHope u will win 20 LAC prize money for round 7."<<endl;
			round7(AP,FF,FTQ,PP,flag7);
		}
		printf("\033c");
		if(flag7==1)
		{
			cout<<"*\twelcome to round 8."<<endl<<" \tHope u will win 50 LAC prize money for round 8."<<endl;
			round8(AP,FF,FTQ,PP,flag8);
		}
		printf("\033c");
		if(flag8==1)
		{
			cout<<"*\twelcome to round 9."<<endl<<" \tHope u will win 75 LAC prize money for round 9."<<endl;
			round9(AP,FF,FTQ,PP,flag9);
		}
		printf("\033c");
		if(flag9==1)
		{
			cout<<"*\twelcome to round 10 that is your GRAND FINALE where u can win 1 CRODE rupees"<<endl;
			grand_finale(AP,FF,FTQ,PP,flag10);
		}
		printf("\033c");
		if(flag10==1)
		{
			cout<<"\t\t\t\tTHE WINNER OF KBC SEASON 9 IS--"<<name<<endl;
		}
		cout<<"THIS PROJECT IS MADE BY==>"<< "\033[1;33mRAJAT SAINI\033[0m\n";			//for colored and bold the text
		return 0;	
}
void rules()
{
	cout<<"rules and help are given below"<<endl;
	cout<<"* only one candidate can participate in KBC 2k17 at a time."<<endl;
	cout<<"* don`t use any type of online cheating"<<endl;
	cout<<"* you are given 4 options in which the correct answer is placed"<<endl;
	cout<<"* you are given 4 lifelines which helps you to solve the quizs questions"<<endl;
	cout<<"  the 4 lifilines are -\n \t\t\t1.Audience Poll\n \t\t\t2.50:50  \n \t\t\t3.Flip The Question  \n \t\t\t4.Power Paplu\n\n "<<endl;
}
int lifelines(int &AP, int &FF, int &FTQ, int &PP)
{
	cout<<"lifelines are-  1.Audience Poll\n\t\t2.50:50  \n \t\t3.Flip The Question  \n \t\t4.Power Paplu "<<endl;
	life :
	cout<<"chose your lifelines"<<endl;
	int lf;	
	cin>>lf;
	switch(lf)
	{
		case 1:
		if(AP==1)
		{
			cout<<"Audience Poll is working"<<endl;
			cout<<"Dear Audience suggest your answer"<<endl;
			AP--;
			break;
		}
		else
		{
			cout<<"try another lifeline, you have already use Audience Poll lifeline"<<endl;
			goto life;
		}
		
		case 2:
		if(FF==1)
		{
			cout<<"50:50 lifeline is working"<<endl;
			cout<<"After use this lifeline your final answer will be from"<<endl;
			FF--;
			break;
		}
		else
		{
			cout<<"try another lifeline, you have already use 50:50 lifeline"<<endl;
			goto life;
		}
		case 3:
		if(FTQ==1)
		{
			cout<<"Flip The Question is working"<<endl;
			cout<<"After use this lifeline your changed question is\n";
			FTQ--;
			break;
		}
		else
		{
			cout<<"try another lifeline, you have already use Flip The Question lifeline"<<endl;
			goto life;
		}
		case 4:
		if(PP==1)
		{
			cout<<"Power Paplu is working"<<endl;
			cout<<"after use this lifeline you are provided one more chance to use Audience Poll and 50:50 lifelines"<<endl;
			AP=FF=1;
			PP--;
			break;
		}
		else
		{
			cout<<"try another lifeline, you haves already use Power Paplu lifeline"<<endl;
			goto life;
		}
		default:
		{
		cout<<"invalid"<<endl;
		goto life;
		}
}

return lf;	
}
int get_line(int k)
{
	fstream file;
	file.open("line.txt",ios::in);
	if(!file)
	cout<<"Error in opening file"<<endl;
	else
	{
	file>>k;
	}
	file.close();
return k;
}
char get_ques(int &FF_line,int &ans_line,int &line,string (&str1)[4])
{
	int i;
	char ans;
	fstream file;
	file.open("ques.txt",ios::in);
	if(!file)
	cout<<"Error in opening file"<<endl;
	else
	{
		int j=0;
		char data[200];
		for(i=0; file.getline(data,200) && i<(line+5);i++)
		{
				if(i==line)
				{
					ans=data[0];
					ans_line=data[1]-'0';
					FF_line=data[2]-'0';
					data[0]=data[1]=data[2]=' ';
				}
				if(i>=line && i<(line+5))
				{
					cout<<"\t\t"<<data<<endl;	
				}
				if(i>line && i<(line+5))
				{
					str1[j]=data;
					j++;		
				}
		}
	}
	line=line+5;
	return ans;
}
void put_line(int line)
{
	if(line==250)
	{
		line=0;
	}
	fstream file;
	file.open("line.txt",ios::out);
	if(!file)
	{
		cout<<"Error in opening file"<<endl;	
	}
	else
	{
		file<<line;
	}
}
void round1(int &AP, int &FF, int &FTQ, int &PP, int &flag1)
{
	string str;
	string str1[4]=" ";
	int k,line,FTQ1=0,ans_line=0,FF_line=0;
	char ans,ans1;
	line=get_line(k);
	cout<<"\t\t\tSo, the question for 10,000 rupees is"<<endl;
	ans=get_ques(FF_line,ans_line,line,(str1));
	put_line(line);
	str:
	cout<<"would you use your lifeline [yes/no]"<<endl;
	cin>>str;
	if(str=="yes")
	{
		int lf=lifelines(AP,FF,FTQ,PP);
		if(lf==1)
		{
			goto str;
		}
		else if(lf==2)
		{
			cout<<"\t\t\t\t"<<str1[ans_line]<<endl;
			cout<<"\t\t\t\t"<<str1[FF_line]<<endl;
			goto str;
				
		}
		else if(lf==3)
		{	string str2;
			string str3[4]=" ";
			FTQ1=1;
			int t,line1,FF_line1,ans_line1;
			char ans2,ans3;
			line1=get_line(t);
			ans2=get_ques(FF_line1,ans_line1,line1,(str3));
			put_line(line1);
			str2:
			cout<<"would you use your lifeline [yes/no]"<<endl;
			cin>>str2;
			if(str2=="yes")
			{
				int lf1=lifelines(AP,FF,FTQ,PP);
				if(lf1==1)
				{
					goto str2;
				}
				else if(lf1==2)
				{
					cout<<"\t\t\t"<<str3[ans_line1]<<endl;
					cout<<"\t\t\t"<<str3[FF_line1]<<endl;
					goto str2;	
				}
				else if(lf1==4)
				{
					goto str2;
				}
			}
			else if(str2=="no")
			{
				ans3:
				cout<<"give your answer"<<endl;
				cin>>ans3;
				if(ans3>='a' && ans3<='d')
				{
					if(ans3==ans2)
					{
						cout<<"\t\t\tcongrates you win 10,000"<<endl;
						flag1=1;
					}
					else
					{
						cout<<"\t\t\tyou lose, try next time"<<endl;
					}
				}
				else
				{
					cout<<"type between a and d, try again"<<endl;
					goto ans3;
				}
			}
			else
			{
				cout<<"only type yes/no"<<endl;
				goto str2;
			}		
			
		}
		else if(lf==4)
		{
			goto str;
		}
		
	}
	else if(str=="no")
	{
		if(FTQ1==0)
		{
		ans1:
		cout<<"give your answer"<<endl; 
		cin>>ans1;
		if(ans1>='a' && ans1<='d')
		{
			if(ans1==ans)
			{
				cout<<"\t\t\tcongrates you win 10,000"<<endl;
				flag1=1;
			}
			else
			{
				cout<<"\t\t\tyou lose, try next time"<<endl;	
			}
		}
		else
		{
			cout<<"type between a and d, try again"<<endl;
			goto ans1;
		}
		}
	}
	else
	{
		cout<<"only type yes/no"<<endl;
		goto str;
	}
}
void round2(int &AP, int &FF, int &FTQ, int &PP, int &flag2)
{
	string str;
	string str1[4]=" ";
	int k,line,FTQ1=0,ans_line=0,FF_line=0;
	char ans,ans1;
	line=get_line(k);
	cout<<"\t\t\tSo, the question for 20,000 rupees is"<<endl;
	ans=get_ques(FF_line,ans_line,line,(str1));
	put_line(line);
	str:
	cout<<"would you use your lifeline [yes/no]"<<endl;
	cin>>str;
	if(str=="yes")
	{
		int lf=lifelines(AP,FF,FTQ,PP);
		if(lf==1)
		{
			goto str;
		}
		else if(lf==2)
		{
			cout<<"\t\t\t\t"<<str1[ans_line]<<endl;
			cout<<"\t\t\t\t"<<str1[FF_line]<<endl;
			goto str;
				
		}
		else if(lf==3)
		{	string str2;
			string str3[4]=" ";
			FTQ1=1;
			int t,line1,FF_line1,ans_line1;
			char ans2,ans3;
			line1=get_line(t);
			ans2=get_ques(FF_line1,ans_line1,line1,(str3));
			put_line(line1);
			str2:
			cout<<"would you use your lifeline [yes/no]"<<endl;
			cin>>str2;
			if(str2=="yes")
			{
				int lf1=lifelines(AP,FF,FTQ,PP);
				if(lf1==1)
				{
					goto str2;
				}
				else if(lf1==2)
				{
					cout<<"\t\t\t"<<str3[ans_line1]<<endl;
					cout<<"\t\t\t"<<str3[FF_line1]<<endl;
					goto str2;	
				}
				else if(lf1==4)
				{
					goto str2;
				}
			}
			else if(str2=="no")
			{
				ans3:
				cout<<"give your answer"<<endl;
				cin>>ans3;
				if(ans3>='a' && ans3<='d')
				{
					if(ans3==ans2)
					{
						cout<<"\t\t\tcongrates you win 20,000"<<endl;
						flag2=1;
					}
					else
					{
						cout<<"\t\t\tyou lose, try next time"<<endl;
					}
				}
				else
				{
					cout<<"type between a and d, try again"<<endl;
					goto ans3;
				}
			}
			else
			{
				cout<<"only type yes/no"<<endl;
				goto str2;
			}		
			
		}
		else if(lf==4)
		{
			goto str;
		}
		
	}
	else if(str=="no")
	{
		if(FTQ1==0)
		{
		ans1:
		cout<<"give your answer"<<endl; 
		cin>>ans1;
		if(ans1>='a' && ans1<='d')
		{
			if(ans1==ans)
			{
				cout<<"\t\t\tcongrates you win 20,000"<<endl;
				flag2=1;
			}
			else
			{
				cout<<"\t\t\tyou lose, try next time"<<endl;	
			}
		}
		else
		{
			cout<<"type between a and d, try again"<<endl;
			goto ans1;
		}
		}
	}
	else
	{
		cout<<"only type yes/no"<<endl;
		goto str;
	}
}
void round3(int &AP, int &FF, int &FTQ, int &PP, int &flag3)
{
	string str;
	string str1[4]=" ";
	int k,line,FTQ1=0,ans_line=0,FF_line=0;
	char ans,ans1;
	line=get_line(k);
	cout<<"\t\t\tSo, the question for 50,000 rupees is"<<endl;
	ans=get_ques(FF_line,ans_line,line,(str1));
	put_line(line);
	str:
	cout<<"would you use your lifeline [yes/no]"<<endl;
	cin>>str;
	if(str=="yes")
	{
		int lf=lifelines(AP,FF,FTQ,PP);
		if(lf==1)
		{
			goto str;
		}
		else if(lf==2)
		{
			cout<<"\t\t\t\t"<<str1[ans_line]<<endl;
			cout<<"\t\t\t\t"<<str1[FF_line]<<endl;
			goto str;
				
		}
		else if(lf==3)
		{	string str2;
			string str3[4]=" ";
			FTQ1=1;
			int t,line1,FF_line1,ans_line1;
			char ans2,ans3;
			line1=get_line(t);
			ans2=get_ques(FF_line1,ans_line1,line1,(str3));
			put_line(line1);
			str2:
			cout<<"would you use your lifeline [yes/no]"<<endl;
			cin>>str2;
			if(str2=="yes")
			{
				int lf1=lifelines(AP,FF,FTQ,PP);
				if(lf1==1)
				{
					goto str2;
				}
				else if(lf1==2)
				{
					cout<<"\t\t\t"<<str3[ans_line1]<<endl;
					cout<<"\t\t\t"<<str3[FF_line1]<<endl;
					goto str2;	
				}
				else if(lf1==4)
				{
					goto str2;
				}
			}
			else if(str2=="no")
			{
				ans3:
				cout<<"give your answer"<<endl;
				cin>>ans3;
				if(ans3>='a' && ans3<='d')
				{
					if(ans3==ans2)
					{
						cout<<"\t\t\tcongrates you win 50,000"<<endl;
						flag3=1;
					}
					else
					{
						cout<<"\t\t\tyou lose, try next time"<<endl;
					}
				}
				else
				{
					cout<<"type between a and d, try again"<<endl;
					goto ans3;
				}
			}
			else
			{
				cout<<"only type yes/no"<<endl;
				goto str2;
			}		
			
		}
		else if(lf==4)
		{
			goto str;
		}
	}
	else if(str=="no")
	{
		if(FTQ1==0)
		{
		ans1:
		cout<<"give your answer"<<endl; 
		cin>>ans1;
		if(ans1>='a' && ans1<='d')
		{
			if(ans1==ans)
			{
				cout<<"\t\t\tcongrates you win 50,000"<<endl;
				flag3=1;
			}
			else
			{
				cout<<"\t\t\tyou lose, try next time"<<endl;	
			}
		}
		else
		{
			cout<<"type between a and d, try again"<<endl;
			goto ans1;
		}
		}
	}
	else
	{
		cout<<"only type yes/no"<<endl;
		goto str;
	}
}
void round4(int &AP, int &FF, int &FTQ, int &PP, int &flag4)
{
	string str;
	string str1[4]=" ";
	int k,line,FTQ1=0,ans_line=0,FF_line=0;
	char ans,ans1;
	line=get_line(k);
	cout<<"\t\t\tSo, the question for 80,000 rupees is"<<endl;
	ans=get_ques(FF_line,ans_line,line,(str1));
	put_line(line);
	str:
	cout<<"would you use your lifeline [yes/no]"<<endl;
	cin>>str;
	if(str=="yes")
	{
		int lf=lifelines(AP,FF,FTQ,PP);
		if(lf==1)
		{
			goto str;
		}
		else if(lf==2)
		{
			cout<<"\t\t\t\t"<<str1[ans_line]<<endl;
			cout<<"\t\t\t\t"<<str1[FF_line]<<endl;
			goto str;
				
		}
		else if(lf==3)
		{	string str2;
			string str3[4]=" ";
			FTQ1=1;
			int t,line1,FF_line1,ans_line1;
			char ans2,ans3;
			line1=get_line(t);
			ans2=get_ques(FF_line1,ans_line1,line1,(str3));
			put_line(line1);
			str2:
			cout<<"would you use your lifeline [yes/no]"<<endl;
			cin>>str2;
			if(str2=="yes")
			{
				int lf1=lifelines(AP,FF,FTQ,PP);
				if(lf1==1)
				{
					goto str2;
				}
				else if(lf1==2)
				{
					cout<<"\t\t\t"<<str3[ans_line1]<<endl;
					cout<<"\t\t\t"<<str3[FF_line1]<<endl;
					goto str2;	
				}
				else if(lf1==4)
				{
					goto str2;
				}
			}
			else if(str2=="no")
			{
				ans3:
				cout<<"give your answer"<<endl;
				cin>>ans3;
				if(ans3>='a' && ans3<='d')
				{
					if(ans3==ans2)
					{
						cout<<"\t\t\tcongrates you win 80,000"<<endl;
						flag4=1;
					}
					else
					{
						cout<<"\t\t\tyou lose, try next time"<<endl;
					}
				}
				else
				{
					cout<<"type between a and d, try again"<<endl;
					goto ans3;
				}
			}
			else
			{
				cout<<"only type yes/no"<<endl;
				goto str2;
			}		
			
		}
		else if(lf==4)
		{
			goto str;
		}
	}
	else if(str=="no")
	{
		if(FTQ1==0)
		{
		ans1:
		cout<<"give your answer"<<endl; 
		cin>>ans1;
		if(ans1>='a' && ans1<='d')
		{
			if(ans1==ans)
			{
				cout<<"\t\t\tcongrates you win 80,000"<<endl;
				flag4=1;
			}
			else
			{
				cout<<"\t\t\tyou lose, try next time"<<endl;	
			}
		}
		else
		{
			cout<<"type between a and d, try again"<<endl;
			goto ans1;
		}
		}
	}
	else
	{
		cout<<"only type yes/no"<<endl;
		goto str;
	}
}
void round5(int &AP, int &FF, int &FTQ, int &PP, int &flag5)
{
	string str;
	string str1[4]=" ";
	int k,line,FTQ1=0,ans_line=0,FF_line=0;
	char ans,ans1;
	line=get_line(k);
	cout<<"\t\t\tSo, the question for 1 LAC rupees is"<<endl;
	ans=get_ques(FF_line,ans_line,line,(str1));
	put_line(line);
	str:
	cout<<"would you use your lifeline [yes/no]"<<endl;
	cin>>str;
	if(str=="yes")
	{
		int lf=lifelines(AP,FF,FTQ,PP);
		if(lf==1)
		{
			goto str;
		}
		else if(lf==2)
		{
			cout<<"\t\t\t\t"<<str1[ans_line]<<endl;
			cout<<"\t\t\t\t"<<str1[FF_line]<<endl;
			goto str;
				
		}
		else if(lf==3)
		{	string str2;
			string str3[4]=" ";
			FTQ1=1;
			int t,line1,FF_line1,ans_line1;
			char ans2,ans3;
			line1=get_line(t);
			ans2=get_ques(FF_line1,ans_line1,line1,(str3));
			put_line(line1);
			str2:
			cout<<"would you use your lifeline [yes/no]"<<endl;
			cin>>str2;
			if(str2=="yes")
			{
				int lf1=lifelines(AP,FF,FTQ,PP);
				if(lf1==1)
				{
					goto str2;
				}
				else if(lf1==2)
				{
					cout<<"\t\t\t"<<str3[ans_line1]<<endl;
					cout<<"\t\t\t"<<str3[FF_line1]<<endl;
					goto str2;	
				}
				else if(lf1==4)
				{
					goto str2;
				}
			}
			else if(str2=="no")
			{
				ans3:
				cout<<"give your answer"<<endl;
				cin>>ans3;
				if(ans3>='a' && ans3<='d')
				{
					if(ans3==ans2)
					{
						cout<<"\t\t\tcongrates you win 1 LAC"<<endl;
						flag5=1;
					}
					else
					{
						cout<<"\t\t\tyou lose, try next time"<<endl;
					}
				}
				else
				{
					cout<<"type between a and d, try again"<<endl;
					goto ans3;
				}
			}
			else
			{
				cout<<"only type yes/no"<<endl;
				goto str2;
			}		
			
		}
		else if(lf==4)
		{
			goto str;
		}
	}
	else if(str=="no")
	{
		if(FTQ1==0)
		{
		ans1:
		cout<<"give your answer"<<endl; 
		cin>>ans1;
		if(ans1>='a' && ans1<='d')
		{
			if(ans1==ans)
			{
				cout<<"\t\t\tcongrates you win 1 LAC"<<endl;
				flag5=1;
			}
			else
			{
				cout<<"\t\t\tyou lose, try next time"<<endl;	
			}
		}
		else
		{
			cout<<"type between a and d, try again"<<endl;
			goto ans1;
		}
		}
	}
	else
	{
		cout<<"only type yes/no"<<endl;
		goto str;
	}
}
void round6(int &AP, int &FF, int &FTQ, int &PP, int &flag6)
{
	string str;
	string str1[4]=" ";
	int k,line,FTQ1=0,ans_line=0,FF_line=0;
	char ans,ans1;
	line=get_line(k);
	cout<<"\t\t\tSo, the question for 10 LAC rupees is"<<endl;
	ans=get_ques(FF_line,ans_line,line,(str1));
	put_line(line);
	str:
	cout<<"would you use your lifeline [yes/no]"<<endl;
	cin>>str;
	if(str=="yes")
	{
		int lf=lifelines(AP,FF,FTQ,PP);
		if(lf==1)
		{
			goto str;
		}
		else if(lf==2)
		{
			cout<<"\t\t\t\t"<<str1[ans_line]<<endl;
			cout<<"\t\t\t\t"<<str1[FF_line]<<endl;
			goto str;
				
		}
		else if(lf==3)
		{	string str2;
			string str3[4]=" ";
			FTQ1=1;
			int t,line1,FF_line1,ans_line1;
			char ans2,ans3;
			line1=get_line(t);
			ans2=get_ques(FF_line1,ans_line1,line1,(str3));
			put_line(line1);
			str2:
			cout<<"would you use your lifeline [yes/no]"<<endl;
			cin>>str2;
			if(str2=="yes")
			{
				int lf1=lifelines(AP,FF,FTQ,PP);
				if(lf1==1)
				{
					goto str2;
				}
				else if(lf1==2)
				{
					cout<<"\t\t\t"<<str3[ans_line1]<<endl;
					cout<<"\t\t\t"<<str3[FF_line1]<<endl;
					goto str2;	
				}
				else if(lf1==4)
				{
					goto str2;
				}
			}
			else if(str2=="no")
			{
				ans3:
				cout<<"give your answer"<<endl;
				cin>>ans3;
				if(ans3>='a' && ans3<='d')
				{
					if(ans3==ans2)
					{
						cout<<"\t\t\tcongrates you win 10 LAC"<<endl;
						flag6=1;
					}
					else
					{
						cout<<"\t\t\tyou lose, try next time"<<endl;
					}
				}
				else
				{
					cout<<"type between a and d, try again"<<endl;
					goto ans3;
				}
			}
			else
			{
				cout<<"only type yes/no"<<endl;
				goto str2;
			}		
			
		}
		else if(lf==4)
		{
			goto str;
		}
	}
	else if(str=="no")
	{
		if(FTQ1==0)
		{
		ans1:
		cout<<"give your answer"<<endl; 
		cin>>ans1;
		if(ans1>='a' && ans1<='d')
		{
			if(ans1==ans)
			{
				cout<<"\t\t\tcongrates you win 10 LAC"<<endl;
				flag6=1;
			}
			else
			{
				cout<<"\t\t\tyou lose, try next time"<<endl;	
			}
		}
		else
		{
			cout<<"type between a and d, try again"<<endl;
			goto ans1;
		}
		}
	}
	else
	{
		cout<<"only type yes/no"<<endl;
		goto str;
	}
}
void round7(int &AP, int &FF, int &FTQ, int &PP, int &flag7)
{
	string str;
	string str1[4]=" ";
	int k,line,FTQ1=0,ans_line=0,FF_line=0;
	char ans,ans1;
	line=get_line(k);
	cout<<"\t\t\tSo, the question for 20 LAC rupees is"<<endl;
	ans=get_ques(FF_line,ans_line,line,(str1));
	put_line(line);
	str:
	cout<<"would you use your lifeline [yes/no]"<<endl;
	cin>>str;
	if(str=="yes")
	{
		int lf=lifelines(AP,FF,FTQ,PP);
		if(lf==1)
		{
			goto str;
		}
		else if(lf==2)
		{
			cout<<"\t\t\t\t"<<str1[ans_line]<<endl;
			cout<<"\t\t\t\t"<<str1[FF_line]<<endl;
			goto str;
				
		}
		else if(lf==3)
		{	string str2;
			string str3[4]=" ";
			FTQ1=1;
			int t,line1,FF_line1,ans_line1;
			char ans2,ans3;
			line1=get_line(t);
			ans2=get_ques(FF_line1,ans_line1,line1,(str3));
			put_line(line1);
			str2:
			cout<<"would you use your lifeline [yes/no]"<<endl;
			cin>>str2;
			if(str2=="yes")
			{
				int lf1=lifelines(AP,FF,FTQ,PP);
				if(lf1==1)
				{
					goto str2;
				}
				else if(lf1==2)
				{
					cout<<"\t\t\t"<<str3[ans_line1]<<endl;
					cout<<"\t\t\t"<<str3[FF_line1]<<endl;
					goto str2;	
				}
				else if(lf1==4)
				{
					goto str2;
				}
			}
			else if(str2=="no")
			{
				ans3:
				cout<<"give your answer"<<endl;
				cin>>ans3;
				if(ans3>='a' && ans3<='d')
				{
					if(ans3==ans2)
					{
						cout<<"\t\t\tcongrates you win 20 LAC"<<endl;
						flag7=1;
					}
					else
					{
						cout<<"\t\t\tyou lose, try next time"<<endl;
					}
				}
				else
				{
					cout<<"type between a and d, try again"<<endl;
					goto ans3;
				}
			}
			else
			{
				cout<<"only type yes/no"<<endl;
				goto str2;
			}		
			
		}
		else if(lf==4)
		{
			goto str;
		}
	}
	else if(str=="no")
	{
		if(FTQ1==0)
		{
		ans1:
		cout<<"give your answer"<<endl; 
		cin>>ans1;
		if(ans1>='a' && ans1<='d')
		{
			if(ans1==ans)
			{
				cout<<"\t\t\tcongrates you win 20 LAC"<<endl;
				flag7=1;
			}
			else
			{
				cout<<"\t\t\tyou lose, try next time"<<endl;	
			}
		}
		else
		{
			cout<<"type between a and d, try again"<<endl;
			goto ans1;
		}
		}
	}
	else
	{
		cout<<"only type yes/no"<<endl;
		goto str;
	}
}
void round8(int &AP, int &FF, int &FTQ, int &PP, int &flag8)
{
	string str;
	string str1[4]=" ";
	int k,line,FTQ1=0,ans_line=0,FF_line=0;
	char ans,ans1;
	line=get_line(k);
	cout<<"\t\t\tSo, the question for 50 LAC rupees is"<<endl;
	ans=get_ques(FF_line,ans_line,line,(str1));
	put_line(line);
	str:
	cout<<"would you use your lifeline [yes/no]"<<endl;
	cin>>str;
	if(str=="yes")
	{
		int lf=lifelines(AP,FF,FTQ,PP);
		if(lf==1)
		{
			goto str;
		}
		else if(lf==2)
		{
			cout<<"\t\t\t\t"<<str1[ans_line]<<endl;
			cout<<"\t\t\t\t"<<str1[FF_line]<<endl;
			goto str;
				
		}
		else if(lf==3)
		{	string str2;
			string str3[4]=" ";
			FTQ1=1;
			int t,line1,FF_line1,ans_line1;
			char ans2,ans3;
			line1=get_line(t);
			ans2=get_ques(FF_line1,ans_line1,line1,(str3));
			put_line(line1);
			str2:
			cout<<"would you use your lifeline [yes/no]"<<endl;
			cin>>str2;
			if(str2=="yes")
			{
				int lf1=lifelines(AP,FF,FTQ,PP);
				if(lf1==1)
				{
					goto str2;
				}
				else if(lf1==2)
				{
					cout<<"\t\t\t"<<str3[ans_line1]<<endl;
					cout<<"\t\t\t"<<str3[FF_line1]<<endl;
					goto str2;	
				}
				else if(lf1==4)
				{
					goto str2;
				}
			}
			else if(str2=="no")
			{
				ans3:
				cout<<"give your answer"<<endl;
				cin>>ans3;
				if(ans3>='a' && ans3<='d')
				{
					if(ans3==ans2)
					{
						cout<<"\t\t\tcongrates you win 50 LAC"<<endl;
						flag8=1;
					}
					else
					{
						cout<<"\t\t\tyou lose, try next time"<<endl;
					}
				}
				else
				{
					cout<<"type between a and d, try again"<<endl;
					goto ans3;
				}
			}
			else
			{
				cout<<"only type yes/no"<<endl;
				goto str2;
			}		
			
		}
		else if(lf==4)
		{
			goto str;
		}
	}
	else if(str=="no")
	{
		if(FTQ1==0)
		{
		ans1:
		cout<<"give your answer"<<endl; 
		cin>>ans1;
		if(ans1>='a' && ans1<='d')
		{
			if(ans1==ans)
			{
				cout<<"\t\t\tcongrates you win 50 LAC"<<endl;
				flag8=1;
			}
			else
			{
				cout<<"\t\t\tyou lose, try next time"<<endl;	
			}
		}
		else
		{
			cout<<"type between a and d, try again"<<endl;
			goto ans1;
		}
		}
	}
	else
	{
		cout<<"only type yes/no"<<endl;
		goto str;
	}
}
void round9(int &AP, int &FF, int &FTQ, int &PP, int &flag9)
{
	string str;
	string str1[4]=" ";
	int k,line,FTQ1=0,ans_line=0,FF_line=0;
	char ans,ans1;
	line=get_line(k);
	cout<<"\t\t\tSo, the question for 75 LAC rupees is"<<endl;
	ans=get_ques(FF_line,ans_line,line,(str1));
	put_line(line);
	str:
	cout<<"would you use your lifeline [yes/no]"<<endl;
	cin>>str;
	if(str=="yes")
	{
		int lf=lifelines(AP,FF,FTQ,PP);
		if(lf==1)
		{
			goto str;
		}
		else if(lf==2)
		{
			cout<<"\t\t\t\t"<<str1[ans_line]<<endl;
			cout<<"\t\t\t\t"<<str1[FF_line]<<endl;
			goto str;
				
		}
		else if(lf==3)
		{	string str2;
			string str3[4]=" ";
			FTQ1=1;
			int t,line1,FF_line1,ans_line1;
			char ans2,ans3;
			line1=get_line(t);
			ans2=get_ques(FF_line1,ans_line1,line1,(str3));
			put_line(line1);
			str2:
			cout<<"would you use your lifeline [yes/no]"<<endl;
			cin>>str2;
			if(str2=="yes")
			{
				int lf1=lifelines(AP,FF,FTQ,PP);
				if(lf1==1)
				{
					goto str2;
				}
				else if(lf1==2)
				{
					cout<<"\t\t\t"<<str3[ans_line1]<<endl;
					cout<<"\t\t\t"<<str3[FF_line1]<<endl;
					goto str2;	
				}
				else if(lf1==4)
				{
					goto str2;
				}
			}
			else if(str2=="no")
			{
				ans3:
				cout<<"give your answer"<<endl;
				cin>>ans3;
				if(ans3>='a' && ans3<='d')
				{
					if(ans3==ans2)
					{
						cout<<"\t\t\tcongrates you win 75 LAC"<<endl;
						flag9=1;
					}
					else
					{
						cout<<"\t\t\tyou lose, try next time"<<endl;
					}
				}
				else
				{
					cout<<"type between a and d, try again"<<endl;
					goto ans3;
				}
			}
			else
			{
				cout<<"only type yes/no"<<endl;
				goto str2;
			}		
			
		}
		else if(lf==4)
		{
			goto str;
		}
	}
	else if(str=="no")
	{
		if(FTQ1==0)
		{
		ans1:
		cout<<"give your answer"<<endl; 
		cin>>ans1;
		if(ans1>='a' && ans1<='d')
		{
			if(ans1==ans)
			{
				cout<<"\t\t\tcongrates you win 75 LAC"<<endl;
				flag9=1;
			}
			else
			{
				cout<<"\t\t\tyou lose, try next time"<<endl;	
			}
		}
		else
		{
			cout<<"type between a and d, try again"<<endl;
			goto ans1;
		}
		}
	}
	else
	{
		cout<<"only type yes/no"<<endl;
		goto str;
	}
}
void grand_finale(int &AP, int &FF, int &FTQ, int &PP, int &flag10)
{
	string str;
	string str1[4]=" ";
	int k,line,FTQ1=0,ans_line=0,FF_line=0;
	char ans,ans1;
	line=get_line(k);
	cout<<"\t\t\tSo, the question for 1 CRODE rupees is"<<endl;
	ans=get_ques(FF_line,ans_line,line,(str1));
	put_line(line);
	str:
	cout<<"would you use your lifeline [yes/no]"<<endl;
	cin>>str;
	if(str=="yes")
	{
		int lf=lifelines(AP,FF,FTQ,PP);
		if(lf==1)
		{
			goto str;
		}
		else if(lf==2)
		{
			cout<<"\t\t\t\t"<<str1[ans_line]<<endl;
			cout<<"\t\t\t\t"<<str1[FF_line]<<endl;
			goto str;
				
		}
		else if(lf==3)
		{	string str2;
			string str3[4]=" ";
			FTQ1=1;
			int t,line1,FF_line1,ans_line1;
			char ans2,ans3;
			line1=get_line(t);
			ans2=get_ques(FF_line1,ans_line1,line1,(str3));
			put_line(line1);
			str2:
			cout<<"would you use your lifeline [yes/no]"<<endl;
			cin>>str2;
			if(str2=="yes")
			{
				int lf1=lifelines(AP,FF,FTQ,PP);
				if(lf1==1)
				{
					goto str2;
				}
				else if(lf1==2)
				{
					cout<<"\t\t\t"<<str3[ans_line1]<<endl;
					cout<<"\t\t\t"<<str3[FF_line1]<<endl;
					goto str2;	
				}
				else if(lf1==4)
				{
					goto str2;
				}
			}
			else if(str2=="no")
			{
				ans3:
				cout<<"give your answer"<<endl;
				cin>>ans3;
				if(ans3>='a' && ans3<='d')
				{
					if(ans3==ans2)
					{
						cout<<"\t\t\tcongrates you win 1 CRODE"<<endl;
						flag10=1;
					}
					else
					{
						cout<<"\t\t\tyou lose, try next time"<<endl;
					}
				}
				else
				{
					cout<<"type between a and d, try again"<<endl;
					goto ans3;
				}
			}
			else
			{
				cout<<"only type yes/no"<<endl;
				goto str2;
			}		
			
		}
		else if(lf==4)
		{
			goto str;
		}
	}
	else if(str=="no")
	{
		if(FTQ1==0)
		{
		ans1:
		cout<<"give your answer"<<endl; 
		cin>>ans1;
		if(ans1>='a' && ans1<='d')
		{
			if(ans1==ans)
			{
				cout<<"\t\t\tcongrates you win 1 CRODE"<<endl;
				flag10=1;
			}
			else
			{
				cout<<"\t\t\tyou lose, try next time"<<endl;	
			}
		}
		else
		{
			cout<<"type between a and d, try again"<<endl;
			goto ans1;
		}
		}
	}
	else
	{
		cout<<"only type yes/no"<<endl;
		goto str;
	}
}

