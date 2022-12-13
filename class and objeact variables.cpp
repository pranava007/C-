#include<iostream>
class Shop
{
    private:
    
        int money;
        public:
        void modifemoney()
        {
            money = money + 5;
        } 

        int getmoney()
        {
            
            return money;
        }       
    };
int main()
{

Shop op;
op.getmoney();
std::cout<<op.getmoney();


    return 0;
}
