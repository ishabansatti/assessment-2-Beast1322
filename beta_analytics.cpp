#include <iostream>
using namespace std;

class CloudDiscount {
private:
    int subscriptionID;
    static int customerCount;  

public:
    
    CloudDiscount(int id) : subscriptionID(id) {};

    void checkDiscount() {
        if (customerCount >= 100) {
            cout << "Sorry, discount offer has ended." << endl;
            return;
        }

        int idCheck = subscriptionID / 100; 

        int discount = 0;
        
        if (idCheck == 44) {
                discount = 20;
            }
        else if (idCheck == 60) {
                discount = 15;
            }
        else if (idCheck == 53) {
                discount = 10;
            }
        else if (idCheck == 41) {
                discount = 5;
            }
        else {
            cout << "No Discout available for this marketplace" << endl;
            }

        customerCount++; 

        cout << "Congratulations, You have availed "
             << discount << "% discount." << endl;
    }

    static void showCustomerCount() {
        cout << "Total customers who availed discount: "
             << customerCount << endl;
    }
};

int CloudDiscount::customerCount = 0;

int main() {
    CloudDiscount customer1(5321);
    customer1.checkDiscount();

    CloudDiscount customer2(4490);
    customer2.checkDiscount();

    CloudDiscount::showCustomerCount();

    return 0;
}
