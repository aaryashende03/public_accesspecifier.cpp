#include<iostream>
using namespace std;
class Array
{
	private:
	         int*ptr;
			 int size;
	public:
            Array(int no = 5):
            {
               cout<<"Constructor\n";
               size= no;
			   ptr= new int[size}; 
            }
~Array()
{
       cout<<"Destructor\n";
        delete[]ptr;
}
  void Accept()
  {
        int icnt = 0;
        cout<<"Enter the elements\n";
        for(incnt=0; icnt<size; icnt++)
        {
          cin>>ptr[icnt];
        }
}
  void Display()
  {
	     cout<<"Elements are\n;
		 int icnt=0;
		 for(icnt=0; icnt,size; icnt++)
		 {
			 cout<<ptr[icnt]<<"\n";
		 }
  }
};

int main()
{
	cout<<"Inside main\n";
	vaue=0;
	cout<<"Enter no. of elements\n";
	cin>>value;
	Array*obj=NULL;
	obj=new Array(value);
	obj -> Accept();
	obj -> Display();
	delete obj;
	return 0;
}
  