#include <iostream>

using namespace std;
//void sayHi(string name ,int age){
//cout<<"hello "<<name <<"your age is"<<age<<endl;

//}//


//double cube(double num){

//double result=num*num*num;
//cout<<"hello";

//}//

//int getMax(int num1,int num2,int num3){
//int result;


//if(num1>=num2 && num1>=num3){
    //result=num1;
//}/
//else if (num2>=num1 && num2>=num3){
//result=num2;

//}//
 //else(num3>=num1 && num3>=num2){
//result=num3;



//}//
//return result;

//}//



int main()
{

  //cout<<getMax(2,5,11);


    //cout<< cube(2.0);

   // bool isMale=false;
    //if(isMale){


            //cout<<"you are a male";
//}//else{
//cout<<"you are a female";
//}//









    //sayHi("Chuks",3);
        //sayHi("naomi" ,15);
    //sayHi("samuel" ,21);


//float n1,n2,n3;
//cout <<"enter three number:";
//cin>>n1>>n2>>n3;
//if(n1>n2 && n1>n3 && n1<n2 && n1<n3 )
    //cout<<"The largest number: "<<n1 /n;

        //cout<<"The smallest number: "<<n1 endl;


//if(n2>n1 && n2>n3 && n2<n1 && n2&&n3)
//cout<<"The largest number: "<<n2 endl ;
    //cout<<"The smallest number: "<<n2 endl;

//if(n3>n1 && n3>n2 && n3<n1 &&n3<n2)
    //cout<<"The largest number: "<<n3 endl;
        //cout<<"The smallest number: "<<n2 endl;






    //string phrase="Giraffe Academy";
    //cout<<phrase[6];
//string age;

//cout<<"How old are you:";
//cin>>age;

//cout<<"your age is" <<age;



//string name;
//cout<<"What is your name:";
    //getline(cin,name);
//cout<<"my name"<<name;

//int num1,num2;
//cout <<"Enter first number:";
//cin>>num1;
// cout<<"Enter second number:";
 //cin>>num2;
 //cout<<num1+num2;

 //int luckyNumber[]={4,8,15,16,23,42};
 //luckyNumber[0]=19;
 //cout  <<lukyNumber[2];


//int num1,mum2,num3;


  //cout<<"Enter first number:";
 //cin>>num1
 //cout<<"Enter second number:";
 //cin>>num2;
 //cout<<"Enter third number:";
 //cin>>num3;


//int largest,smallest;


//largest=smallest=num1;



//if(num2>largest){
    //largest=num2;
//}else if(num2<smallest){
//smallest=num2;
//}/

//if(num3>largest){
  //  largest=num3;
//}else if(num3<smallest){
//smallest=num3;
//}/



int num1,num2;
char op;
int result;

cout<< "Enter first number:"<<endl;
cin>>num1;
cout<<"Enter operator number:";
cin>>op;

cout<<"Enter second number:";
cin>>num2;



 if(op =="+"){
    result=num1 + num2;
}else if(op =="-"){
result=num1-num2;
}else if(op =="/"){
result=num1/num2;
}else if(op =="*"){
result=num1*num2;
}else{
cout<<"Invalid operator";
}

cout<<result<<endl;

    return 0;
}



