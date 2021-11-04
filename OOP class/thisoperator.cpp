#include<iostream>
using namespace std;
class thisop{
    public:
        int a;
        thisop(int a){
            this->a=a;
            //this is keyword which is used to access the member of the class.
        }
        void display(){
            cout<<"a="<<a<<endl;
        }
};
int main(){
    thisop t(10);
    t.display();
    return 0;
}