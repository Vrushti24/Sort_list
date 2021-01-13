#include<iostream>
using namespace std;
#include<string>
struct link
    {
    int data;
    link *next;
};
class linklist
{
    private:
      link *first;
    public:
       linklist()
    {
        first=NULL;
    }
      void addfirst(int d);
      void addlast(int m);
      void disp();
      void sort();
    };
void linklist::addfirst(int d)
{
    link *newptr=new link;
    newptr->data=d;
    newptr->next=first;
    first=newptr;
    }

void linklist::addlast(int m)
{
    link *newptr2=new link;
     newptr2->data=m;
    if(first==NULL)
    {
        first=newptr2;
        newptr2->next=NULL;
     }
    else{
        link *last=first;
       while(last->next!=NULL)
       {
         last=last->next;
        }
   
       last->next=newptr2;
       newptr2->next=NULL;
      }
    }
void linklist::disp()
{
    link *ptr=first;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
     }
    }
void linklist::sort()
{
    int x;
    link *s;   
    link *q=NULL;
    do{
         x=0;
        s=first;
        while(s->next!=q)
      {
        if(s->data>s->next->data)
        {
            int temp=s->data;
            s->data=s->next->data;
            s->next->data=temp;
                x=1;
         }
          s=s->next;
       }
        q=s;
     }while(x);
    }
int main()
{
    linklist li;   
    li.addfirst(1);
    li.addfirst(2);
    li.addfirst(3);
    li.addfirst(4);
    li.addfirst(5);
    li.disp();
    cout<<"\n Sorted list \n";
    	li.sort();
	li.disp();
}
