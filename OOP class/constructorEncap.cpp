#include<iostream>
using namespace std;
class areaTri{
    private:
        int base,height;
    public:
        areaTri(int b,int h){
            base=b;
            height=h;
        }
        void display(){
            cout<<"Area of Triangle is: "<<(base*height)/2<<endl;
        }
};
int main(){
    areaTri a(10,20);
    a.display();
    return 0;
}