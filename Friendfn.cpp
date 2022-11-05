#include<iostream>
using namespace std;
class SBIndia;

class SBIndore
{
	private:
		long balance;
	
	public:
		void getIndore()
		{cout<<"Enter Balance Indore:";
		 cin>>balance;
		}
		
	    void putIndore()
	    { cout<<"Balance Indore:"<<balance<<endl; 
		}
		friend void RBI(SBIndore& ,SBIndia&);
	};


class SBIndia
{  
	private:
		void getIndia()
		{ cout<<"Enter Balance India:";
		  cin>>balance;			
		}
		
		void putIndia()
		{ cout<<"Balance India:"<<balance<<endl; 
		}
		friend void RBI(SBIndore& ,SBIndore&);
};

void RBI(SBIndore &indr,SBIndia &ind)
{
	ind.balance=ind.balance+indr.balance;
	indr.balance=0;
}

int main()
{
	SBIndore indr;
	indr.getIndore();
	indr.putIndore();
	
	SBIndia ind;
	ind.getIndia();
	ind.putIndia();
	
	RBI(indr,ind);
	indr.putIndore();
	ind.putIndia();
	
	 }







