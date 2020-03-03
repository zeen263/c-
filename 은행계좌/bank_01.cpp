#include <iostream>
#include <cstring>

const int customer_max = 1000;

using namespace std;


struct acc
{
	//구조체 배열의 번지수가 해당 고객의 계좌번호
	char name[20];	// 고객 이름
	int balance;	// 잔고
	bool isFilled;
};


void makeAccount(struct acc *c);
void deposit(struct acc *c);
void withdraw(struct acc *c);
void printAllAcount(struct acc *c);


//=============================================

int main(void)
{
	struct acc customer[customer_max] = {"",0,false};
	
	int choice;
	
	while(1)
	{
		cout << endl << endl << "======== Menu ========" << endl;
		cout << "1. 계좌 개설" << endl;
		cout << "2. 입금 " << endl;
		cout << "3. 출금 " << endl;
		cout << "4. 계좌정보 전체 출력" << endl;
		cout << "5. 프로그램 종료" << endl;
		cout << "======================" << endl << endl;
		cout << "선택 : ";
		 
		cin >> choice; cout << endl;
		
		switch(choice)
		{
			case 1:
				makeAccount(customer);
				break;
			
			case 2:
				deposit(customer);
				break;
			
			case 3:
				withdraw(customer);
				break;
			
			case 4:
				printAllAcount(customer);
				break;
			
			case 5:
				break; 
				
			default:
				cout << "유효한 번호를 선택하세요" << endl; 
		}
		
		if(choice == 5)
			break;
	}	
}


//=============================================



void makeAccount(struct acc *cus)
{	
	int id, bal; 
	
	cout << "======= [계좌 개설] =======" << endl << endl;
	
	
	cout << "계좌 ID (0 ~ 999): ";	
	
	while(cin >> id, id < 0 || id > 999 || cus[id].isFilled == true)
	{
		if(id < 0 || id > 999)
			cout << "유효한 계좌번호를 입력하세요." << endl ; 
		
		if(cus[id].isFilled == true)
			cout << "이미 사용 중인 계좌번호입니다." << endl ;		

	}		
	

	cout << "이름 : ";
	cin >> cus[id].name;
	
	
	cout << "입금액 : ";
	cin >> bal;
	
	while(cin >> bal, bal < 0)
		cout << "유효한 금액을 입력하세요." << endl ;

	
	cus[id].balance = bal;	
	
	cus[id].isFilled = true;		
}

void deposit(struct acc *cus)
{
	int id, bal;
	
	cout << "======= [입금] =======" << endl << endl;
	cout << "입금할 계좌 번호 : " ;
	
	 
	while(cin >> id, id < 0 || id > 999 || cus[id].isFilled == false)
		cout << "올바른 계좌 번호를 입력하세요." << endl;

	
	cout << endl << "고객명 : " << cus[id].name << endl; 
	cout << "입금할 금액 : " ;	
	
	while(cin >> bal, bal < 0)		
		cout << "유효한 금액을 입력하세요." << endl ;

	cus[id].balance += bal;	
}

void withdraw(struct acc *cus)
{
	int id, bal;
	
	cout << "======= [출금] =======" << endl << endl;
	cout << "출금할 계좌 번호 : " ;
	
	
	while(cin >> id, id < 0 || id > 999 || cus[id].isFilled == false)
		cout << "올바른 계좌 번호를 입력하세요." << endl;

	
	cout << endl << "고객명 : " << cus[id].name << endl; 
	cout << "출금할 금액 : " ;	
	
	while(cin >> bal, bal < 0 || bal > cus[id].balance)
	{
		if(bal < 0)
			cout << "유효한 금액을 입력하세요." << endl ;
		
		if(bal > cus[id].balance)
			cout << "당신은 그만한 돈이 없습니다." << endl; 
	}	
		

	cus[id].balance -= bal;	
}


void printAllAcount(struct acc *cus)
{
	cout << "======= [계좌정보 출력] =======" << endl << endl; 
	
	for(int i=0; i<customer_max; i++)
	{		
		if(cus[i].isFilled == true)	
		{			
			cout << "계좌 ID : " << i << endl;
			cout << "이름 : " << cus[i].name << endl;
			cout << "잔액 : " << cus[i].balance << endl;
			cout << endl;
		}
	}
}


