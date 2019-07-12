#include<iostream>
#include<string>
#include <vector>
using namespace std;
class visitorDetails{
public:
    string name,idNum,phNum,inTime,outTime;
};
int main(){

cout<< "Welcome to the Visitor Log Application"<<endl;
vector <visitorDetails> database;

while(1){
    int sel;
    int sizedb;
    visitorDetails temp;
    cout<< "Menu:"<<endl;
    cout<<"1. Register visitor"<<endl;
    cout<<"2. All visitor list"<<endl;
    cout<<"3. Sign-Out Visitor"<<endl;
    cout<<endl;
    cin >> sel;
    cout<<endl;
switch(sel){
case 1:
    cout << "Enter Visitor's name :";
    cin >> temp.name;
    cout << "Enter ID proof Number :";
    cin >>temp.idNum;
    cout <<"Enter In-Time: ";
    cin >> temp.inTime;
    temp.outTime = "Visitor did not Leave yet.";
    database.push_back(temp);
    cout<< endl<<"Token Number is:"<<database.size()<<endl;
    cout<<endl;

    break;

case 2:

    sizedb = database.size();

    for(int i=0; i< sizedb ;i++){
        cout<< "Visitor :"<< i+1 <<endl;
        cout<<"Name:" <<database[i].name<<endl;
        cout<<"ID Number: "<<database[i].idNum<<endl;
        cout<<"In-Time: "<<database[i].inTime<<endl;
        cout<<"Out-Time: "<<database[i].outTime<<endl<<endl;

    };
    break;

case 3:
    int tokenNum=0;
    cout<<"Enter the token number :"<<endl;
    cin >>tokenNum;
    tokenNum--;
    sizedb = database.size();
    for(int i=0;i<sizedb;i++){
        if(tokenNum == i){
            cout <<"Enter the Out-Time: " <<endl;
            cin>>database[i].outTime;
            cout<<"signed out successfully at "<<database[i].outTime<<endl;
        }
    }


}

}
}
