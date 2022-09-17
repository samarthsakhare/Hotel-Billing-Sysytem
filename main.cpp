/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

class node{
  public:
    int data;
    node* next;
    
    node(int val){
        data=val;
        next=NULL;
    }
};


void insert(node* &head,int val){
    
    node *n = new node(val);
    
    if(head==NULL){
        head=n;
        return;
    }
    
    node *temp = head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next=n;
    
}

void display(node *ptr,string A[]){
    
    string name;
    int num;
    cout<<"Enter your name and mobile number :"<<endl;
    cin>>name>>num;
    
    cout<<"\n\n";
    
    cout<<"          HOTEL RUTURAJ"<<endl;
    cout<<"\n\n";
    cout<<"Name:"<<name<<endl;
    cout<<endl;
    
    int i=1;
    int j=0;
    while(ptr != NULL){
        cout<<i<<". "<<A[j]<<"   ---- "<<ptr->data<<endl;
        ptr=ptr->next;
        i++;
        j++;
    }
    cout<<endl;
    
}

double sum(node* ptr){
    int s=0;
    while(ptr!=NULL){
        s = s + ptr->data; 
        ptr = ptr->next;
    }
    
    return s;
}

int main(){
    
    node *head = NULL;
    string arr[5];
    int f=0;
    
    cout<<"-------Welcome To Ruturaj Hotel-------"<<endl;
    cout<<endl;
    cout<<"     1. KajuKari       --- 190"<<endl;
    cout<<"     2. Panner Tikka   --- 180"<<endl;
    cout<<"     3. Roti           --- 15"<<endl;
    cout<<"     4. Dal Tadkka     --- 150"<<endl;
    cout<<"     5. Rice           --- 30"<<endl;
    cout<<"     6. Chicken Handi  --- 480"<<endl;
    cout<<"     7. Mutton Handi   --- 590"<<endl;
    
    cout<<"\n\n";
    
    int n;
    cout<<"Enter the number How many iteams you Will Order: ";
    cin>>n;
    cout<<endl;
    
    int i=1;
    
    while(i<=n){
        int c;
        cout<<"Enter Your Choice: ";
        cin>>c;
        cout<<endl;
        
        switch(c){
            case 1:
                int x;
                cout<<"How many plates you want"<<endl;
                cin>>x;
                insert(head,190*x);
                arr[f]="KajuKari    ";
                f++;
                break;
            
            case 2:
                int y;
                cout<<"How many paltes you want"<<endl;
                cin>>y;
                insert(head,180*y);
                arr[f]="Panner Tikka";
                f++;
                break;
                
            case 3:
                int r;
                cout<<"How many roties you want"<<endl;
                cin>>r;
                insert(head,15*r);
                arr[f]="Roti        ";
                f++;
                break;
                
            case 4:
                int z;
                cout<<"How many plates you want"<<endl;
                cin>>z;
                insert(head,150*z);
                arr[f]="Dal Tadkka  ";
                f++;
                break;
                
            case 5:
                int m;
                cout<<"How many plates you want"<<endl;
                cin>>m;
                insert(head,30*m);
                arr[f]="Rice        ";
                f++;
                break;
                
            case 6:
                int p;
                cout<<"How many plates you want"<<endl;
                cin>>p;
                insert(head,480*p);
                arr[f]="Chicken Handi";
                f++;
                break;
                
            case 7:
                int q;
                cout<<"How many plates tou want"<<endl;
                cin>>q;
                insert(head,590*q);
                arr[f]="Mutton handi";
                f++;
                break;
                
            default:
                cout<<"Your orderd item is not present in menue Card"<<endl;
        }
        i++;
    }
    
    cout<<endl;
    
    display(head,arr);
    cout<<"                 _________"<<endl;
    cout<<endl;
    int Total;
    Total = sum(head);
    cout<<"Total             "<<Total<<endl;
    
    cout<<"Total with GST    "<<Total+Total*0.18<<endl;
    cout<<"              THANK YOU"<<endl;
    
    return 0;
}
