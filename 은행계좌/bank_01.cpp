#include <iostream>
#include <cstring>

const int customer_max = 1000;

using namespace std;


struct acc
{
	//����ü �迭�� �������� �ش� ���� ���¹�ȣ
	char name[20];	// �� �̸�
	int balance;	// �ܰ�
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
		cout << "1. ���� ����" << endl;
		cout << "2. �Ա� " << endl;
		cout << "3. ��� " << endl;
		cout << "4. �������� ��ü ���" << endl;
		cout << "5. ���α׷� ����" << endl;
		cout << "======================" << endl << endl;
		cout << "���� : ";
		 
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
				cout << "��ȿ�� ��ȣ�� �����ϼ���" << endl; 
		}
		
		if(choice == 5)
			break;
	}	
}


//=============================================



void makeAccount(struct acc *cus)
{	
	int id, bal; 
	
	cout << "======= [���� ����] =======" << endl << endl;
	
	
	cout << "���� ID (0 ~ 999): ";	
	
	while(cin >> id, id < 0 || id > 999 || cus[id].isFilled == true)
	{
		if(id < 0 || id > 999)
			cout << "��ȿ�� ���¹�ȣ�� �Է��ϼ���." << endl ; 
		
		if(cus[id].isFilled == true)
			cout << "�̹� ��� ���� ���¹�ȣ�Դϴ�." << endl ;		

	}		
	

	cout << "�̸� : ";
	cin >> cus[id].name;
	
	
	cout << "�Աݾ� : ";
	cin >> bal;
	
	while(cin >> bal, bal < 0)
		cout << "��ȿ�� �ݾ��� �Է��ϼ���." << endl ;

	
	cus[id].balance = bal;	
	
	cus[id].isFilled = true;		
}

void deposit(struct acc *cus)
{
	int id, bal;
	
	cout << "======= [�Ա�] =======" << endl << endl;
	cout << "�Ա��� ���� ��ȣ : " ;
	
	 
	while(cin >> id, id < 0 || id > 999 || cus[id].isFilled == false)
		cout << "�ùٸ� ���� ��ȣ�� �Է��ϼ���." << endl;

	
	cout << endl << "���� : " << cus[id].name << endl; 
	cout << "�Ա��� �ݾ� : " ;	
	
	while(cin >> bal, bal < 0)		
		cout << "��ȿ�� �ݾ��� �Է��ϼ���." << endl ;

	cus[id].balance += bal;	
}

void withdraw(struct acc *cus)
{
	int id, bal;
	
	cout << "======= [���] =======" << endl << endl;
	cout << "����� ���� ��ȣ : " ;
	
	
	while(cin >> id, id < 0 || id > 999 || cus[id].isFilled == false)
		cout << "�ùٸ� ���� ��ȣ�� �Է��ϼ���." << endl;

	
	cout << endl << "���� : " << cus[id].name << endl; 
	cout << "����� �ݾ� : " ;	
	
	while(cin >> bal, bal < 0 || bal > cus[id].balance)
	{
		if(bal < 0)
			cout << "��ȿ�� �ݾ��� �Է��ϼ���." << endl ;
		
		if(bal > cus[id].balance)
			cout << "����� �׸��� ���� �����ϴ�." << endl; 
	}	
		

	cus[id].balance -= bal;	
}


void printAllAcount(struct acc *cus)
{
	cout << "======= [�������� ���] =======" << endl << endl; 
	
	for(int i=0; i<customer_max; i++)
	{		
		if(cus[i].isFilled == true)	
		{			
			cout << "���� ID : " << i << endl;
			cout << "�̸� : " << cus[i].name << endl;
			cout << "�ܾ� : " << cus[i].balance << endl;
			cout << endl;
		}
	}
}


