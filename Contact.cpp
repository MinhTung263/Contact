#include <iostream>
#include <cstring>
using namespace std;
class Contact{
	protected:
	char TenLienLac[20];
	int SDT;
	public:
		void Nhap(){
			fflush(stdin);
			cout<<"Ten lien lac:";
			cin.get(TenLienLac,20);
			cout<<"SDT:";
			cin>>SDT;
		}
		void Xuat(){
			cout<<"Ten lien lac: "<<TenLienLac<<" SDT: "<<SDT;
		}
	
		
};
class ExContact:public Contact{
	private:
		char Email[50];
		char NgaySinh[20];
	public:
		void Nhap(){
			Contact::Nhap();
			fflush(stdin);
			cout<<"Emai: ";
			cin.get(Email,50);
			fflush(stdin);
			cout<<"Ngay sinh (dd/mm/yyyy): ";
			cin.get(NgaySinh,20);
		}
		void Xuat(){
			Contact::Xuat();
			cout<<" Email: "<<Email<<" Ngay sinh: "<<NgaySinh<<" ";
		}
		void Cat(){
			int t=strlen(Email)-strlen(strstr(Email,"@gmail.com"));
			if(strstr(Email,"@gmail.com")!=NULL){
				for(int i=0;i<t;i++){
					cout<<Email[i];
				}
		}	
		
		
		}
};
int main(){
	ExContact contact;
	contact.Nhap();
	contact.Xuat();
	cout<<"\nCat phan mo rong: ";
	contact.Cat();
}
