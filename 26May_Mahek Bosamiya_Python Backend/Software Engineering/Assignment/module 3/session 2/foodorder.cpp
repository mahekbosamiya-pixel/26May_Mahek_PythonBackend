#include <iostream>
using namespace std;

class FoodOrder
{
public:
    int orderId;
    string restaurantName;
    bool isDelivered;

    void markDelivered()
    {
        isDelivered = true;
        cout << "Order has been delivered." << endl;
    }
};

int main()
{
    FoodOrder order;

    order.orderId = 101;
    order.restaurantName = "Dominos";
    order.isDelivered = false;

    order.markDelivered();

    cout << "Order ID: " << order.orderId << endl;
    cout << "Restaurant: " << order.restaurantName << endl;
    cout << "Delivered: " << order.isDelivered << endl;

    return 0;
}
