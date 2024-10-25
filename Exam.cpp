// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    string name;
    string pass;
    string repass;
    
    cout<< "Enter your Name :";
    cin>>name;
    cout<< "set your password :";
    cin>>pass;
    cout<< "Enter your password :";
    cin>>repass;
    
    if (pass==repass){
        cout<<"All the Best "<<name<<" lets begin..."<<endl<<endl;
       
        int option;//creating variable for options...
        int marks1;
        int marks2;
        int marks3;
        int marks4;
        int marks5;
        int total = 0;
      
        //first MCQ start...
        cout<<"1. Who invented Java Programming?"<<endl;
        cout<<"1. ) Guido van Rossum"<<endl;
        cout<<"2. ) James Gosling"<<endl;
        cout<<"3. ) Dennis Ritchie"<<endl;
        cout<<"4. ) Bjarne Stroustrup"<<endl;
        cout<<"Select Answer -> ";
        cin>>option;//assigning variable in option...
        switch(option){//to verify the option...
            case 1:cout<<"Wrong Answer [ try Next year ]";
            break;
            case 2:
            cout<<"Correct Answer ---#LETS MOVE AHEAD---";
            break;
            case 3:cout<<"Wrong Answer [ try Next year ]";
            break;
            case 4:cout<<"Wrong Answer [ try Next year ]";
            break;
        }
        if(option==2){
                marks1 = total+20;
                cout<<" you got 20 points"<<endl<<endl;
            }else if(option !=2){
                marks1 = total-20;
                cout<<" you loss 20 points"<<endl<<endl;
            }
            
        //second MCQ start...
        cout<<"2. Which component is used to compile, debug and execute time java program?"<<endl;
        cout<<"1. ) JRE "<<endl;
        cout<<"2. ) JIT "<<endl;
        cout<<"3. ) JDK "<<endl;
        cout<<"4. ) JVM "<<endl;
        cout<<"Select Answer -> ";
        cin>>option;
        switch(option){
            case 1:cout<<"Wrong Answer [ try Next year ]";
            break;
            case 2:cout<<"Wrong Answer [ try Next year ]";
            break;
            case 3:cout<<"Correct Answer ---#LETS MOVE AHEAD---";
            break;
            case 4:cout<<"Wrong Answer [ try Next year ]";
            break;
        }
        if(option==3){
                marks2 = total+20;
                cout<<" you got 20 points"<<endl<<endl;
            }else if(option !=3){
                marks2 = total-20;
                cout<<" you loss 20 points"<<endl<<endl;
            }
            
        //third MCQ start...
        cout<<"3. Which one of the following is not a Java feature?"<<endl;
        cout<<"1. ) Object-oriented"<<endl;
        cout<<"2. ) Use of pointers"<<endl;
        cout<<"3. ) Portable"<<endl;
        cout<<"4. ) Dynamic and Extensible "<<endl;
        cout<<"Select Answer -> ";
        cin>>option;
        switch(option){
            case 1:cout<<"Wrong Answer [ try Next year ]";
            break;
            case 2:cout<<"Correct Answer ---#LETS MOVE AHEAD---";
            break;
            case 3:cout<<"Wrong Answer [ try Next year ]";
            break;
            case 4:cout<<"Wrong Answer [ try Next year ]";
            break;
        }
        if(option==2){
                marks3 = total+20;
                cout<<" you got 20 points"<<endl<<endl;
            }else if(option !=2){
                marks3 = total-20;
                cout<<" you loss 20 points"<<endl<<endl;
            }
            
        // //fourth MCQ start...
        cout<<"4. What is the extension of java code files?"<<endl;
        cout<<"1. ) .js "<<endl;
        cout<<"2. ) .txt "<<endl;
        cout<<"3. ) .class "<<endl;
        cout<<"4. ) .java "<<endl;
        cout<<"Select Answer -> ";
        cin>>option;
        switch(option){
            case 1:cout<<"Wrong Answer [ try Next year ]";
            break;
            case 2:cout<<"Wrong Answer [ try Next year ]";
            break;
            case 3:cout<<"Wrong Answer [ try Next year ]";
            break;
            case 4:cout<<"Correct Answer ---#LETS MOVE AHEAD---";
            break;
        }
        if(option==4){
                marks4 = total+20;
                cout<<" you got 20 points"<<endl<<endl;
            }else if(option !=4){
                marks4 = total-20;
                cout<<" you loss 20 points"<<endl<<endl;
            }
            
        //fith MCQ start...    
        cout<<"5. Which of the following is not an OOPS concept in Java?"<<endl;
        cout<<"1. ) Polymorphism"<<endl;
        cout<<"2. ) Inheritance"<<endl;
        cout<<"3. ) Compilation"<<endl;
        cout<<"4. ) Encapsulation"<<endl;
        cout<<"Select Answer -> ";
        cin>>option;
        switch(option){
            case 1:cout<<"Wrong Answer [ try Next year ]";
            break;
            case 2:cout<<"Wrong Answer [ try Next year ]";
            break;
            case 3:cout<<"Correct Answer ---#LETS MOVE AHEAD---";
            break;
            case 4:cout<<"Wrong Answer [ try Next year ]";
            break;
        }
        if(option==3){
                marks5 = total+20;
                cout<<" you got 20 points"<<endl<<endl;
            }else if(option !=3){
                marks5 = total-20;
                cout<<" you loss 20 points"<<endl<<endl;
            }
        
        //total and the other parts start from here...   
        cout<<"<---You had Completed the Test--->"<<endl;
        total = marks1+marks2+marks3+marks4+marks5;
        cout<<"your Total Marks is:"<<total;
        
    }
    else if(pass!=repass){
        cout<<"wrong password ... try 2 more time out of 2 "<<endl;
        cout<< "Enter your password :";
        cin>>repass;
        cout<<"wrong password ... try 1 more time out of 1"<<endl;
        cout<< "Enter your password :";
        cin>>repass;
        cout<<"wrong password ... try 0 more time out of 0"<<endl;
        cout<< "The Device is Locked";
    }
    
    return 0;
}