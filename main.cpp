#include <iostream>
#include <kwallet.h>

int main()
{
    std::cout << "Opening wallet..";
    KWallet::Wallet * toDelete = KWallet::Wallet::openWallet("kdewallet", 0);
    if(toDelete != NULL)
    {
        std::cout << "OK!" << std::endl;
        delete toDelete;
    }
    else
    {
        std::cout << "FAIL!" << std::endl;
    }
    return 0;
}
