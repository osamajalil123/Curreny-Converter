

#include<iostream>
using namespace std;

main()

{     
	//Variable Declaration
    int rupees;
    float B,M,J,D;
    //Input in PK Rupees
    cout<<"Enter currency in Pakistani Rupees"<<endl;
    cin>>rupees;
    //Calculations
    B=rupees*310.30;
    M=rupees*13.34;
    J=rupees*1.93;
    D=rupees*250.62;
    cout<<rupees<< " "<<"Pakistani Rupees are equal to "<<B<<" British Pounds"<<endl;
    cout<<rupees<< " "<<"Pakistani Rupees are equal to "<<M<<" Mexican Pesos"<<endl;
    cout<<rupees<< " "<<"Pakistani Rupees are equal to "<<J<<" Japanese Yen"<<endl;
    cout<<rupees<< " "<<"Pakistani Rupees are equal to "<<D<<" American Dollars"<<endl;

}
