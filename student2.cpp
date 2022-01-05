#include <iostream>
#include <string>
#include <fstream>

using namespace std;
string arr1[20],arr2[20],arr3[20],arr4[20],arr5[20];
int total = 0;
void enter(){
    int choice;
    cout << "How many student do you want to enter: ";
    cin >> choice;
    if(total ==0){
    total += choice;
    for( int i=0;i<choice;i++)
    {
      cout << "Enter Data Of Student: "<<i+1<<endl<<endl;  
      cout<< "Enter Name: ";
      cin >>arr1[i];
      cout<< "Enter StudentId: ";
      cin >>arr2[i];
      cout<< "Enter Course: ";
      cin >>arr3[i];
      cout<< "Enter Class: ";
      cin >>arr4[i];
      cout<< "Enter Contact: ";
      cin >>arr5[i];
    }
   }
   else{
        for( int i=total;i<total+choice;i++)
    {
      cout << "Enter Data Of Student: "<<i+1<<endl<<endl;  
      cout << "Enter Name: ";
      cin  >>arr1[i];
      cout << "Enter StudentId: ";
      cin  >>arr2[i];
      cout << "Enter Course: ";
      cin  >>arr3[i];
      cout << "Enter Class: ";
      cin  >>arr4[i];
      cout << "Enter Contact: ";
      cin  >>arr5[i];
    }
    total +=choice;
   }
}
void show(){
      
    
      for(int i;i<total;i++)
      {
         
          cout << "\n\nData Of Student: "<<i+1<<endl<<endl;
          cout << "\t===================\n";
          cout << "\t* .Name: "<<arr1[i]<<"\t  *"<<endl;
          cout << "\t* .StId: "<<arr2[i]<<"\t  *"<<endl;
          cout << "\t* .Course: "<<arr3[i]<<"\t  *"<<endl;
          cout << "\t* .Class: "<<arr4[i]<<"\t  *"<<endl;
          cout << "\t* .Contact: "<<arr5[i]<<"\t  *"<<endl;
          cout << "\t===================\n";
          
      }
    }
void search(){

    string StudentId;
    cout << "Enter StudentId: ";
    cin >>StudentId;
    for(int i=0;i<total;i++)
    {
        if(StudentId == arr2[i])
        {
        
        
          cout << "\nData Of Student: "<<i+1<<endl<<endl;
          cout << "\t===================\n";
          cout << "\t* .Name: "<<arr1[i]<<"\t  *"<<endl;
          cout << "\t* .StId: "<<arr2[i]<<"\t  *"<<endl;
          cout << "\t* .Course: "<<arr3[i]<<"\t  *"<<endl;
          cout << "\t* .Class: "<<arr4[i]<<"\t  *"<<endl;
          cout << "\t* .Contact: "<<arr5[i]<<"\t  *"<<endl;
          cout << "\t===================\n";
        }
    }
  }
void update(){

     
    string StudentId;
    cout << "Enter StudentId: ";
    cin >>StudentId;
    for(int i=0;i<total;i++)
    {
        if(StudentId == arr2[i])
        {
          cout << "\nPrevious Data"<<endl;
          cout << "\nData Of Student: "<<i+1<<endl<<endl;
          cout << "\t===================\n";
          cout << "\t* .Name: "<<arr1[i]<<"\t  *"<<endl;
          cout << "\t* .StId: "<<arr2[i]<<"\t  *"<<endl;
          cout << "\t* .Course: "<<arr3[i]<<"\t  *"<<endl;
          cout << "\t* .Class: "<<arr4[i]<<"\t  *"<<endl;
          cout << "\t* .Contact: "<<arr5[i]<<"\t  *"<<endl;
          cout << "\t===================\n";
          cout << "\nEnter New Data"<<endl;
          cout << "\nEnter Name: ";
          cin  >> arr1[i];
          cout << "\nEnter StudentId: ";
          cin  >> arr2[i];
          cout << "\nEnter Course: ";
          cin  >> arr3[i];
          cout << "\nEnter Class: ";
          cin  >> arr4[i];
          cout << "\nEnter Contact: ";
          cin  >> arr5[i];

        }
    }
  
}
void deleterecord(){

     
    int a;
    cout << "Press 1 to delete full record"<<endl;
    cout << "Press 2 to delete specific record"<<endl;
    cin >> a;

    if(a == 1)
    {
        total=0;
        cout << "All record are deleted!"<<endl;
    }
    else if(a == 2)
    {
        string StudentId;
        cout << "Enter StudentId which you want to delete"<<endl;
        cin >> StudentId;
        for(int i=0;i<total;i++)
        {
            if( StudentId == arr2[i])
            {
                for(int j=i;j<total;j++)
                {
                    arr1[j] = arr1[j+1];
                    arr2[j] = arr2[j+1];
                    arr3[j] = arr3[j+1];
                    arr4[j] = arr4[j+1];
                    arr5[j] = arr5[j+1];
                }
                total--;
                cout << "Your required record is deleted...!!"<<endl;
            }
        }


    }
  }
void printASCII( string filename){
    string line = "";
    ifstream inFile;
    inFile.open("art.txt");
    if(inFile.is_open())
    {
        while(getline(inFile,line))
        {
            cout << line <<endl;
        }
    }
    else
    {
        cout <<"File faild to load. " <<endl;
        cout << "No displayed. " <<endl;
    }
    inFile.close();
}
int main(){
    
    cout << "\n\n\t==================================\n\t=  # School Management System.   =\n\t=  # Readme.md                   =\n\t=  # Version 1.0                 =\n\t=         ////////////           =\n\t=           //////               =\n\t==================================\n\n\n";
    string filename ="art.txt";
    printASCII(filename);
    


    int choice;
    while(true)
    {
         cout << "\n===================================\n";
        cout << "* 1.Enter Student Data\t\t  *" << endl;
        cout << "* 2.Show Student Data\t\t  *" << endl;
        cout << "* 3.Search For Student Data\t  *" << endl;
        cout << "* 4.Update Student Data\t\t  *" << endl;
        cout << "* 5.Delete Student Data\t\t  *" << endl;
        cout << "* 6.Exit\t\t\t  *" << endl;
        cout << "===================================\n";
        cout << "Chose One Choice: ";

        cin >> choice;

        switch (choice)
        {
        case 1: 
        enter();
            break;
        case 2: 
        show();
            break;
            case 3: 
        search();
            break;
            case 4: 
        update();
            break;
            case 5: 
        deleterecord();
            break;
            case 6:
            exit(0);
            break;
        default:
            cout << "Invalid input" <<endl;
            break;
        }
    }


}