                              /*OBJECT MEMORY ALLOCATION AND USE OF ARRAYS IN CLASSES*/

#include <iostream>
using namespace std;

class Shop
{
public:
    int itemId[100];
    int itemPrice[100];
    int counter;
                                            
    void initCounter(void)
    {
        counter = 0;
    }
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(void)
{
    // mai int main function mein baar baar displayPrice likhne ki jagah yaha par loop bhi laga sakta hoon //

    cout << "Enter Id of your item no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;

}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    // dukaan.setPrice();
    // dukaan.setPrice();
    dukaan.displayPrice();

    return 0;
}
